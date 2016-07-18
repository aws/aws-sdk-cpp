/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/s3-encryption/ContentCryptoMaterial.h>
#include <aws/s3-encryption/handlers/DataHandler.h>
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>
#include <aws/s3-encryption/handlers/MetadataHandler.h>
#include <aws/s3-encryption/ContentCryptoScheme.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/PutObjectResult.h>

static const char* AllocationTag = "DataHandlersTest";
static size_t cryptoTagLength = 16;
static size_t ivSize = 16;

class MockS3Client : public Aws::S3::S3Client
{
public:
    MockS3Client(Aws::Client::ClientConfiguration clientConfiguration = Aws::Client::ClientConfiguration()) :
        S3Client(clientConfiguration), m_putObjectCalled(0), m_getObjectCalled(0), m_body(nullptr)
    {
    }

    Aws::S3::Model::PutObjectOutcome PutObject(const Aws::S3::Model::PutObjectRequest& request) const
    {
        m_putObjectCalled++;
        m_metadataMap = request.GetMetadata();
        m_body = request.GetBody();
        Aws::S3::Model::PutObjectOutcome outcome;
        Aws::S3::Model::PutObjectResult result(outcome.GetResultWithOwnership());
        return result;
    }

    Aws::S3::Model::GetObjectOutcome GetObject(const Aws::S3::Model::GetObjectRequest& request) const override
    {
        m_getObjectCalled++;
        if (m_body == nullptr)
        {
            Aws::S3::Model::GetObjectOutcome outcome;
            Aws::S3::Model::GetObjectResult result(outcome.GetResultWithOwnership());
            result.SetMetadata(m_metadataMap);
            return result;
        }
        else
        {
            auto factory = request.GetResponseStreamFactory();
            Aws::Utils::Stream::ResponseStream responseStream(factory);
            responseStream.GetUnderlyingStream() << m_body->rdbuf();
            Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream> awsStream(std::move(responseStream), Aws::Http::HeaderValueCollection());
            Aws::S3::Model::GetObjectResult getObjectResult(std::move(awsStream));
            return Aws::S3::Model::GetObjectOutcome(std::move(getObjectResult));
        }
    }

    mutable size_t m_putObjectCalled;
    mutable size_t m_getObjectCalled;
    mutable Aws::Map<Aws::String, Aws::String> m_metadataMap;
    mutable std::shared_ptr<Aws::IOStream> m_body;
};

namespace
{

    using namespace Aws::Client;
    using namespace Aws::S3::Model;
    using namespace Aws::S3Encryption;
    using namespace Aws::S3Encryption::Handlers;
    using namespace Aws::Utils;
    using namespace Aws::Utils::Crypto;

static const char* ALLOCATION_TAG = "HandlersTest";
static const char* TEST_BUCKET_NAME = "TestBucketName";
static const char* TEST_OBJ_KEY = "TestObjectKey";
static const char* TEST_KEY = "testKey";
static const char* TEST_VALUE = "testValue";

class HandlerTest : public ::testing::Test 
{
protected:

    static void PopulateContentCryptoMaterial(ContentCryptoMaterial& contentCryptoMaterial)
    {
        contentCryptoMaterial.SetEncryptedContentEncryptionKey(SymmetricCipher::GenerateKey());
        contentCryptoMaterial.SetIV(SymmetricCipher::GenerateIV(ivSize));
        contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
        contentCryptoMaterial.SetCryptoTagLength(cryptoTagLength);
        contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);
        Aws::Map<Aws::String, Aws::String> testMap;
        testMap[TEST_KEY] = TEST_VALUE;
        contentCryptoMaterial.SetMaterialsDescription(testMap);
    }

    static void PopulateGetObjectResultMetadata(GetObjectResult& result)
    {
        auto metadata = result.GetMetadata();
        metadata[CONTENT_KEY_HEADER] = HashingUtils::Base64Encode(SymmetricCipher::GenerateKey());
        metadata[IV_HEADER] = HashingUtils::Base64Encode(SymmetricCipher::GenerateIV(ivSize));
        metadata[CONTENT_CRYPTO_SCHEME_HEADER] = ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(ContentCryptoScheme::GCM);
        metadata[CRYPTO_TAG_LENGTH_HEADER] = SizeToString(cryptoTagLength);
        metadata[KEY_WRAP_ALGORITHM] = KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);
        metadata[MATERIALS_DESCRIPTION_HEADER] = "";
        result.SetMetadata(metadata);
    }

    static Aws::String SizeToString(size_t sizeValue)
    {
        Aws::StringStream ss;
        ss << sizeValue;
        return ss.str();
    }
};

//This tests the meta data write and read functionality without the use of a mock client.
TEST_F(HandlerTest, WriteReadMetadataTest)
{
    ContentCryptoMaterial contentCryptoMaterial;
    MetadataHandler handler;
    PutObjectRequest request;
    PopulateContentCryptoMaterial(contentCryptoMaterial);
    
    handler.WriteData(request, contentCryptoMaterial);
    auto metaDataMap = request.GetMetadata();
    ASSERT_EQ(HashingUtils::Base64Decode(metaDataMap[CONTENT_KEY_HEADER]), contentCryptoMaterial.GetEncryptedContentEncryptionKey());
    ASSERT_EQ(HashingUtils::Base64Decode(metaDataMap[IV_HEADER]), contentCryptoMaterial.GetIV());
    ASSERT_EQ(metaDataMap[CONTENT_CRYPTO_SCHEME_HEADER], ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme()));
    ASSERT_EQ(metaDataMap[CRYPTO_TAG_LENGTH_HEADER], SizeToString(contentCryptoMaterial.GetCryptoTagLength()));
    ASSERT_EQ(metaDataMap[KEY_WRAP_ALGORITHM], KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()));
    ASSERT_EQ(metaDataMap[MATERIALS_DESCRIPTION_HEADER], handler.SerializeMap(contentCryptoMaterial.GetMaterialsDescription()));

    GetObjectResult result;
    result.SetMetadata(metaDataMap);
    ContentCryptoMaterial readContentCryptoMaterial = handler.ReadData(result);
    ASSERT_EQ(contentCryptoMaterial.GetEncryptedContentEncryptionKey(), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
    ASSERT_EQ(contentCryptoMaterial.GetIV(), readContentCryptoMaterial.GetIV());
    ASSERT_EQ(contentCryptoMaterial.GetContentCryptoScheme(), readContentCryptoMaterial.GetContentCryptoScheme());
    ASSERT_EQ(contentCryptoMaterial.GetCryptoTagLength(), readContentCryptoMaterial.GetCryptoTagLength());
    ASSERT_EQ(contentCryptoMaterial.GetKeyWrapAlgorithm(), readContentCryptoMaterial.GetKeyWrapAlgorithm());
    ASSERT_EQ(contentCryptoMaterial.GetMaterialsDescription(), readContentCryptoMaterial.GetMaterialsDescription());
}

//This tests the read metadata functionaliy of the handler without a mock client.
TEST_F(HandlerTest, ReadMetadataTest)
{
    GetObjectResult result;
    MetadataHandler handler;
    PopulateGetObjectResultMetadata(result);

    ContentCryptoMaterial readContentCryptoMaterial = handler.ReadData(result);
    auto metadata = result.GetMetadata();
    ASSERT_EQ(HashingUtils::Base64Decode(metadata[CONTENT_KEY_HEADER]), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
    ASSERT_EQ(HashingUtils::Base64Decode(metadata[IV_HEADER]), readContentCryptoMaterial.GetIV());
    ASSERT_EQ(metadata[CONTENT_CRYPTO_SCHEME_HEADER], ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(readContentCryptoMaterial.GetContentCryptoScheme()));
    ASSERT_EQ(metadata[CRYPTO_TAG_LENGTH_HEADER], SizeToString(readContentCryptoMaterial.GetCryptoTagLength()));
    ASSERT_EQ(metadata[KEY_WRAP_ALGORITHM], KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(readContentCryptoMaterial.GetKeyWrapAlgorithm()));
    ASSERT_EQ(handler.DeSerializeMap(metadata[MATERIALS_DESCRIPTION_HEADER]),readContentCryptoMaterial.GetMaterialsDescription());
}

//This tests the write metadata functionaliy of the handler without a mock client.
TEST_F(HandlerTest, WriteMetadataTest)
{
    PutObjectRequest request;
    ContentCryptoMaterial contentCryptoMaterial;
    PopulateContentCryptoMaterial(contentCryptoMaterial);
    MetadataHandler handler;
    handler.WriteData(request, contentCryptoMaterial);

    auto metaDataMap = request.GetMetadata();
    ASSERT_EQ(HashingUtils::Base64Decode(metaDataMap[CONTENT_KEY_HEADER]), contentCryptoMaterial.GetEncryptedContentEncryptionKey());
    ASSERT_EQ(HashingUtils::Base64Decode(metaDataMap[IV_HEADER]), contentCryptoMaterial.GetIV());
    ASSERT_EQ(metaDataMap[CONTENT_CRYPTO_SCHEME_HEADER], ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme()));
    ASSERT_EQ(metaDataMap[CRYPTO_TAG_LENGTH_HEADER], SizeToString(contentCryptoMaterial.GetCryptoTagLength()));
    ASSERT_EQ(metaDataMap[KEY_WRAP_ALGORITHM], KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()));
    ASSERT_EQ(metaDataMap[MATERIALS_DESCRIPTION_HEADER], handler.SerializeMap(contentCryptoMaterial.GetMaterialsDescription()));
}

//This test the metadata read/write functionality using a mock S3 Client which stores the metadata on a put object request and 
//  uses the metadata to populate a get object result.
TEST_F(HandlerTest, MetadataS3ClientTest)
{
    auto myClient = Aws::MakeShared<MockS3Client>(AllocationTag, ClientConfiguration());
    Aws::String fullBucketName = TEST_BUCKET_NAME;

    PutObjectRequest putObjectRequest;
    putObjectRequest.SetBucket(fullBucketName);
    putObjectRequest.SetKey(TEST_OBJ_KEY);

    ContentCryptoMaterial contentCryptoMaterial;
    PopulateContentCryptoMaterial(contentCryptoMaterial);

    //put contentCryptoMaterial into metadata
    MetadataHandler handler;
    handler.WriteData(putObjectRequest, contentCryptoMaterial);

    PutObjectOutcome putObjectOutcome = myClient->PutObject(putObjectRequest);

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(fullBucketName);
    getObjectRequest.SetKey(TEST_OBJ_KEY);

    GetObjectOutcome getObjectOutcome = myClient->GetObject(getObjectRequest);

    GetObjectResult& getObjectResult = getObjectOutcome.GetResult();

    ContentCryptoMaterial readContentCryptoMaterial = handler.ReadData(getObjectResult);

    ASSERT_EQ(contentCryptoMaterial.GetEncryptedContentEncryptionKey(), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
    ASSERT_EQ(contentCryptoMaterial.GetIV(), readContentCryptoMaterial.GetIV());
    ASSERT_EQ(contentCryptoMaterial.GetContentCryptoScheme(), readContentCryptoMaterial.GetContentCryptoScheme());
    ASSERT_EQ(contentCryptoMaterial.GetCryptoTagLength(), readContentCryptoMaterial.GetCryptoTagLength());
    ASSERT_EQ(contentCryptoMaterial.GetKeyWrapAlgorithm(), readContentCryptoMaterial.GetKeyWrapAlgorithm());
    ASSERT_EQ(contentCryptoMaterial.GetMaterialsDescription(), readContentCryptoMaterial.GetMaterialsDescription());
    ASSERT_EQ(myClient->m_getObjectCalled, 1u);
    ASSERT_EQ(myClient->m_putObjectCalled, 1u);
}

//This tests the instruciton file functionality of writing content crypto material to an instruction file object. 
TEST_F(HandlerTest, WriteInstructionFileTest)
{
    PutObjectRequest request;
    ContentCryptoMaterial contentCryptoMaterial;
    PopulateContentCryptoMaterial(contentCryptoMaterial);
    InstructionFileHandler handler;
    handler.WriteData(request, contentCryptoMaterial);

    auto bodyStream = request.GetBody();
    Aws::String jsonString;
    (*bodyStream) >> jsonString;
    Aws::Map<Aws::String, Aws::String> cryptoContentMap = handler.DeSerializeMap(jsonString);

    ASSERT_EQ(HashingUtils::Base64Decode(cryptoContentMap[CONTENT_KEY_HEADER]), contentCryptoMaterial.GetEncryptedContentEncryptionKey());
    ASSERT_EQ(HashingUtils::Base64Decode(cryptoContentMap[IV_HEADER]), contentCryptoMaterial.GetIV());
    ASSERT_EQ(cryptoContentMap[CONTENT_CRYPTO_SCHEME_HEADER], ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme()));
    ASSERT_EQ(cryptoContentMap[CRYPTO_TAG_LENGTH_HEADER], SizeToString(contentCryptoMaterial.GetCryptoTagLength()));
    ASSERT_EQ(cryptoContentMap[KEY_WRAP_ALGORITHM], KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()));
    ASSERT_EQ(cryptoContentMap[MATERIALS_DESCRIPTION_HEADER], handler.SerializeMap(contentCryptoMaterial.GetMaterialsDescription()));
}

//This tests the instruction file read/write functionality by using a mock S3 client.
TEST_F(HandlerTest, InstructionFileS3ClientTest)
{
    auto myClient = Aws::MakeShared<MockS3Client>(AllocationTag, ClientConfiguration());
    Aws::String fullBucketName = TEST_BUCKET_NAME;

    PutObjectRequest instructionPutObjectRequest;
    instructionPutObjectRequest.SetBucket(fullBucketName);
    instructionPutObjectRequest.SetKey(TEST_OBJ_KEY);

    ContentCryptoMaterial contentCryptoMaterial;
    PopulateContentCryptoMaterial(contentCryptoMaterial);

    //content crypto material into body of a putObjectRequest
    InstructionFileHandler handler;
    handler.WriteData(instructionPutObjectRequest, contentCryptoMaterial);

    PutObjectOutcome putObjectOutcome = myClient->PutObject(instructionPutObjectRequest);

    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(fullBucketName);
    getObjectRequest.SetKey(TEST_OBJ_KEY);

    GetObjectOutcome getObjectOutcome = myClient->GetObject(getObjectRequest);

    GetObjectResult& getObjectResult = getObjectOutcome.GetResult();

    ContentCryptoMaterial readContentCryptoMaterial = handler.ReadData(getObjectResult);

    ASSERT_EQ(contentCryptoMaterial.GetEncryptedContentEncryptionKey(), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
    ASSERT_EQ(contentCryptoMaterial.GetIV(), readContentCryptoMaterial.GetIV());
    ASSERT_EQ(contentCryptoMaterial.GetContentCryptoScheme(), readContentCryptoMaterial.GetContentCryptoScheme());
    ASSERT_EQ(contentCryptoMaterial.GetCryptoTagLength(), readContentCryptoMaterial.GetCryptoTagLength());
    ASSERT_EQ(contentCryptoMaterial.GetKeyWrapAlgorithm(), readContentCryptoMaterial.GetKeyWrapAlgorithm());
    ASSERT_EQ(contentCryptoMaterial.GetMaterialsDescription(), readContentCryptoMaterial.GetMaterialsDescription());
    ASSERT_EQ(myClient->m_getObjectCalled, 1u);
    ASSERT_EQ(myClient->m_putObjectCalled, 1u);
}

}