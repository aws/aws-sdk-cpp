/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#define AWS_DISABLE_DEPRECATION
#include <aws/external/gtest.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/crypto/CryptoStream.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/utils/memory/AWSMemory.h>

// TODO: temporary fix for naming conflicts on Windows.
#if _WIN32
#ifdef GetMessage
#undef GetMessage
#endif
#ifdef GetObject
#undef GetObject
#endif
#endif

#include <aws/s3-encryption/S3EncryptionClient.h>
#include <aws/s3/S3Client.h>

using namespace Aws::S3;
using namespace Aws::S3Encryption;
using namespace Aws::S3Encryption::Materials;
using namespace Aws::Utils;
using namespace Aws::Client;
using namespace Aws::Utils::Crypto;

static const char* ENCRYPTED_BUCKET_TEST_NAME = "awsnativesdks3encotest";
static const char* ALLOCATION_TAG = "LiveClientTest";
static const char TEST_STRING[] = "This is a test string. It is meant to test AES CBC, AES CTR, and AES GCM modes of operation with the Aws S3 Encryption Client";

static const char* RANGE_GET_STR = "bytes=38-75";
static const char RANGE_GET_TEST_STRING[] = "test AES CBC, AES CTR, and AES GCM mod";

static const char* OVERFLOW_RANGE_GET_STR = "bytes=38-1000000000";
static const char OVERFLOW_RANGE_GET_TEST_STRING[] = "test AES CBC, AES CTR, and AES GCM modes of operation with the Aws S3 Encryption Client";

class LiveClientTest : public ::testing::Test
{
public:
    static std::shared_ptr<S3Client> StandardClient;
    static std::string TimeStamp;
    static std::string BucketName;

    static void SetUpTestCase()
    {
        TimeStamp = DateTime::Now().CalculateLocalTimestampAsString("%Y%m%dt%H%M%Sz").c_str();

        ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        StandardClient = Aws::MakeShared<Aws::S3::S3Client>(ALLOCATION_TAG, config);
        BucketName = ComputeUniqueBucketName(ENCRYPTED_BUCKET_TEST_NAME).c_str();
        Model::CreateBucketRequest createBucketRequest;
        createBucketRequest.WithBucket(BucketName.c_str())
            .WithACL(Model::BucketCannedACL::private_);

        auto createBucketOutcome = StandardClient->CreateBucket(createBucketRequest);
        ASSERT_TRUE(createBucketOutcome.IsSuccess());
    }

    static void TearDownTestCase()
    {
        Model::DeleteBucketRequest deleteBucketRequest;
        deleteBucketRequest.WithBucket(BucketName.c_str());

        StandardClient->DeleteBucket(deleteBucketRequest);
        StandardClient = nullptr;
    }

    static Aws::String ComputeUniqueBucketName(const char* bucketName)
    {
        Aws::String uniqueBucketName(bucketName);
        uniqueBucketName.append((TimeStamp.c_str()));

        return Aws::Testing::GetAwsResourcePrefix() + uniqueBucketName;
    }
};

std::string LiveClientTest::TimeStamp;
std::string LiveClientTest::BucketName;
std::shared_ptr<S3Client> LiveClientTest::StandardClient(nullptr);

TEST_F(LiveClientTest, TestEOMode)
{
    CryptoConfiguration configuration;
    configuration.SetCryptoMode(CryptoMode::ENCRYPTION_ONLY);
    configuration.SetStorageMethod(StorageMethod::METADATA);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = Aws::Region::US_EAST_1;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);

    static const char* objectKey = "TestEOKey";

    S3EncryptionClient client(simpleEncryptionMaterials, configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest);
    ASSERT_TRUE(putObjectResult.IsSuccess());

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto getObjectResult = client.GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectResult.IsSuccess());

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::CBC);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto cbcCipher = CreateAES_CBCImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *cbcCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    EXPECT_TRUE(standardGetObjectResult.IsSuccess());
    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str(), comparisonStream.str().length());
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    EXPECT_TRUE(deleteResult.IsSuccess());
}

TEST_F(LiveClientTest, TestAEMode)
{
    CryptoConfiguration configuration;
    configuration.SetCryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION);
    configuration.SetStorageMethod(StorageMethod::METADATA);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = Aws::Region::US_EAST_1;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);

    static const char* objectKey = "TestAEKey";

    S3EncryptionClient client(simpleEncryptionMaterials, configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest);
    ASSERT_TRUE(putObjectResult.IsSuccess());

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto getObjectResult = client.GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectResult.IsSuccess());

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(tagLenStr.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    EXPECT_TRUE(standardGetObjectResult.IsSuccess());
    EXPECT_EQ((cryptoMaterial.GetCryptoTagLength() / 8) + sizeof(TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()) - (cryptoMaterial.GetCryptoTagLength() / 8));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str(), comparisonStream.str().length());
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    EXPECT_TRUE(deleteResult.IsSuccess());
}

TEST_F(LiveClientTest, TestAEModeRangeGet)
{
    CryptoConfiguration configuration;
    configuration.SetCryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION);
    configuration.SetStorageMethod(StorageMethod::METADATA);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = Aws::Region::US_EAST_1;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);

    static const char* objectKey = "TestAERangeGetKey";

    S3EncryptionClient client(simpleEncryptionMaterials, configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest);
    ASSERT_TRUE(putObjectResult.IsSuccess());

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);

    auto getObjectResult = client.GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectResult.IsSuccess());

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(RANGE_GET_TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(tagLenStr.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    EXPECT_TRUE(standardGetObjectResult.IsSuccess());
    EXPECT_EQ(sizeof(RANGE_GET_TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    //we just want to compare the actual range we fetched. range was bytes=38-75
    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str() + 38, 75 - 38 + 1);
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    EXPECT_TRUE(deleteResult.IsSuccess());
}

TEST_F(LiveClientTest, TestS3EncryptionError)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = Aws::Region::US_EAST_1;

    auto kmsMaterials = Aws::MakeShared<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>("s3Encryption", "badKey");
    Aws::S3Encryption::CryptoConfiguration cryptoConfiguration(Aws::S3Encryption::StorageMethod::METADATA, Aws::S3Encryption::CryptoMode::ENCRYPTION_ONLY);
    auto credentials = Aws::MakeShared<Aws::Auth::DefaultAWSCredentialsProviderChain>("s3Encryption");
    Aws::S3Encryption::S3EncryptionClient encryptionClient(kmsMaterials, cryptoConfiguration, credentials, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket("badBucket").WithKey("badKey");

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectOutcome = encryptionClient.PutObject(putObjectRequest);
    ASSERT_FALSE(putObjectOutcome.IsSuccess());
    ASSERT_TRUE(putObjectOutcome.GetError().GetErrorType().IsCryptoError());
    ASSERT_FALSE(putObjectOutcome.GetError().GetErrorType().IsS3Error());
    ASSERT_EQ(CryptoErrors::GENERATE_CONTENT_ENCRYPTION_KEY_FAILED, putObjectOutcome.GetError().GetErrorType().cryptoError);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket("badBucket").WithKey("badKey");
    auto getObjectOutcome = encryptionClient.GetObject(getObjectRequest);
    ASSERT_FALSE(getObjectOutcome.IsSuccess());
    ASSERT_FALSE(getObjectOutcome.GetError().GetErrorType().IsCryptoError());
    ASSERT_TRUE(getObjectOutcome.GetError().GetErrorType().IsS3Error());
    ASSERT_EQ(Aws::Http::HttpResponseCode::NOT_FOUND, getObjectOutcome.GetError().GetResponseCode());
}

TEST_F(LiveClientTest, TestV2AEMode)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = Aws::Region::US_EAST_1;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2 configuration(simpleEncryptionMaterials);

    static const char* objectKey = "TestV2AEKey";

    S3EncryptionClientV2 client(configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest, {});
    ASSERT_TRUE(putObjectResult.IsSuccess());

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto getObjectResult = client.GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectResult.IsSuccess());

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(tagLenStr.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    EXPECT_TRUE(standardGetObjectResult.IsSuccess());
    EXPECT_EQ((cryptoMaterial.GetCryptoTagLength() / 8) + sizeof(TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()) - (cryptoMaterial.GetCryptoTagLength() / 8));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str(), comparisonStream.str().length());
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    EXPECT_TRUE(deleteResult.IsSuccess());
}

TEST_F(LiveClientTest, TestV2AEModeRangeGetPass)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = Aws::Region::US_EAST_1;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2 configuration(simpleEncryptionMaterials);
    configuration.SetUnAuthenticatedRangeGet(RangeGetMode::ALL);
    S3EncryptionClientV2 client(configuration, s3ClientConfig);

    static const char* objectKey = "TestV2AERangeGetKey";

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest, {});
    ASSERT_TRUE(putObjectResult.IsSuccess());

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);

    auto getObjectResult = client.GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectResult.IsSuccess());

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(RANGE_GET_TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(tagLenStr.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    EXPECT_TRUE(standardGetObjectResult.IsSuccess());
    EXPECT_EQ(sizeof(RANGE_GET_TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    //we just want to compare the actual range we fetched. range was bytes=38-75
    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str() + 38, 75 - 38 + 1);
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    EXPECT_TRUE(deleteResult.IsSuccess());
}

TEST_F(LiveClientTest, TestV2AEModeRangeGetFailWithoutSetting)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = Aws::Region::US_EAST_1;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2 configuration(simpleEncryptionMaterials);
    S3EncryptionClientV2 client(configuration, s3ClientConfig);

    static const char* objectKey = "TestV2AERangeGetKeyFail";

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest, {});
    ASSERT_TRUE(putObjectResult.IsSuccess());

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);

    auto getObjectResult = client.GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectResult.IsSuccess());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    EXPECT_TRUE(deleteResult.IsSuccess());
}

TEST_F(LiveClientTest, TestV2AEModeRangeGetPassWithRangeUpperBoundOverflow)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = Aws::Region::US_EAST_1;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2 configuration(simpleEncryptionMaterials);
    configuration.SetUnAuthenticatedRangeGet(RangeGetMode::ALL);
    S3EncryptionClientV2 client(configuration, s3ClientConfig);

    static const char* objectKey = "TestAERangeGetKey";

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest, {});
    ASSERT_TRUE(putObjectResult.IsSuccess());

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(OVERFLOW_RANGE_GET_STR);

    auto getObjectResult = client.GetObject(getObjectRequest);
    EXPECT_TRUE(getObjectResult.IsSuccess());

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(OVERFLOW_RANGE_GET_TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(tagLenStr.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    EXPECT_TRUE(standardGetObjectResult.IsSuccess());
    EXPECT_EQ(sizeof(RANGE_GET_TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    //we just want to compare the actual range we fetched. range was bytes=38-75
    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str() + 38, 75 - 38 + 1);
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    EXPECT_TRUE(deleteResult.IsSuccess());
}

TEST_F(LiveClientTest, TestV2S3EncryptionError)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = Aws::Region::US_EAST_1;

    auto kmsMaterials = Aws::MakeShared<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>("s3Encryption", "badKey");
    Aws::S3Encryption::CryptoConfigurationV2 cryptoConfiguration(kmsMaterials);
    auto credentials = Aws::MakeShared<Aws::Auth::DefaultAWSCredentialsProviderChain>("s3Encryption");
    Aws::S3Encryption::S3EncryptionClientV2 encryptionClient(cryptoConfiguration, credentials, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket("badBucket").WithKey("badKey");

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectOutcome = encryptionClient.PutObject(putObjectRequest, {});
    ASSERT_FALSE(putObjectOutcome.IsSuccess());
    ASSERT_TRUE(putObjectOutcome.GetError().GetErrorType().IsCryptoError());
    ASSERT_FALSE(putObjectOutcome.GetError().GetErrorType().IsS3Error());
    ASSERT_EQ(CryptoErrors::GENERATE_CONTENT_ENCRYPTION_KEY_FAILED, putObjectOutcome.GetError().GetErrorType().cryptoError);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket("badBucket").WithKey("badKey");
    auto getObjectOutcome = encryptionClient.GetObject(getObjectRequest);
    ASSERT_FALSE(getObjectOutcome.IsSuccess());
    ASSERT_FALSE(getObjectOutcome.GetError().GetErrorType().IsCryptoError());
    ASSERT_TRUE(getObjectOutcome.GetError().GetErrorType().IsS3Error());
    ASSERT_EQ(Aws::Http::HttpResponseCode::NOT_FOUND, getObjectOutcome.GetError().GetResponseCode());
}
