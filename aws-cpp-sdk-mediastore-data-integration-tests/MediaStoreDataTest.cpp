/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/platform/Platform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/mediastore/MediaStoreClient.h>
#include <aws/mediastore/model/CreateContainerRequest.h>
#include <aws/mediastore/model/DeleteContainerRequest.h>
#include <aws/mediastore/model/DescribeContainerRequest.h>
#include <aws/mediastore-data/MediaStoreDataClient.h>
#include <aws/mediastore-data/model/DeleteObjectRequest.h>
#include <aws/mediastore-data/model/DescribeObjectRequest.h>
#include <aws/mediastore-data/model/GetObjectRequest.h>
#include <aws/mediastore-data/model/ListItemsRequest.h>
#include <aws/mediastore-data/model/PutObjectRequest.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <fstream>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::MediaStore;
using namespace Aws::MediaStore::Model;
using namespace Aws::MediaStoreData;
using namespace Aws::MediaStoreData::Model;

namespace
{
    static const char LOG_TAG[]                  = "MediaStoreIntegrationTest";
    static const char ALLOCATION_TAG[]           = "MediaStoreDataTest";
    static const char TEST_CONTAINER_NAME_BASE[] = "MediaStoreDataTest";
    static const char SMALL_PAYLOAD_TEST_PATH[]  = "SmallPayload";
    static const char SMALL_PAYLOAD_TEST_TEXT[]  = "This is a test.. :)";
    static const char BIG_TEST_FILE_PATH[]       = "BigPayload";
    static const char BIG_TEST_FILE_NAME[]       = "BigMediaStoreDataTestFile";
    static const size_t BIG_TEST_FILE_SIZE       = 10000000;

    static const size_t TIMEOUT_MAX              = 60;

    class MediaStoreDataTest : public ::testing::Test
    {
    public:
        static std::shared_ptr<MediaStoreClient> m_mediaStoreClient;
        static std::shared_ptr<MediaStoreDataClient> m_mediaStoreDataClient;
        static std::shared_ptr<ClientConfiguration> m_mediaStoreDataConfig;

    protected:
        static void SetUpTestCase()
        {
            // Create a MediaStore Client.
            ClientConfiguration mediaStoreConfig;
            mediaStoreConfig.scheme = Scheme::HTTPS;
            mediaStoreConfig.connectTimeoutMs = 30000;
            mediaStoreConfig.requestTimeoutMs = 30000;
            m_mediaStoreClient = Aws::MakeShared<MediaStoreClient>(ALLOCATION_TAG, mediaStoreConfig);

            // Create a testing container.
            DescribeContainerRequest describeContainerRequest;
            describeContainerRequest.SetContainerName(GetTestContainerName());
            auto describeContainerOutcome = m_mediaStoreClient->DescribeContainer(describeContainerRequest);
            if (!(describeContainerOutcome.IsSuccess() && describeContainerOutcome.GetResult().GetContainer().GetStatus() == ContainerStatus::ACTIVE))
            {
                CreateContainerRequest createContainerRequest;
                createContainerRequest.SetContainerName(GetTestContainerName());
                auto createContainerOutcome = m_mediaStoreClient->CreateContainer(createContainerRequest);
                ASSERT_TRUE(createContainerOutcome.IsSuccess());
                ASSERT_TRUE(WaitForContainerToBeActive(GetTestContainerName()));
            }

            // Create a MediaStoreData client
            m_mediaStoreDataConfig = Aws::MakeShared<ClientConfiguration>(ALLOCATION_TAG);
            m_mediaStoreDataConfig->scheme = Scheme::HTTPS;
            m_mediaStoreDataConfig->connectTimeoutMs = 30000;
            m_mediaStoreDataConfig->requestTimeoutMs = 30000;
            describeContainerOutcome = m_mediaStoreClient->DescribeContainer(describeContainerRequest);
            m_mediaStoreDataConfig->endpointOverride = describeContainerOutcome.GetResult().GetContainer().GetEndpoint();
            m_mediaStoreDataClient = Aws::MakeShared<MediaStoreDataClient>(ALLOCATION_TAG, *m_mediaStoreDataConfig);
        }

        static void TearDownTestCase()
        {
            DeleteContainer(GetTestContainerName());
            m_mediaStoreClient = nullptr;
            m_mediaStoreDataClient = nullptr;
            m_mediaStoreDataConfig = nullptr;
        }

        static Aws::String GetTestContainerName()
        {
            // "-" is not allowed in container name, convert uuid to its hex.
            static const std::string suffix = HashingUtils::HexEncode(ByteBuffer(Aws::Utils::UUID::RandomUUID())).c_str();
            Aws::StringStream ss;
            ss << Aws::Testing::GetAwsResourcePrefix() << TEST_CONTAINER_NAME_BASE << suffix;
            return Aws::Utils::StringUtils::ToLower(ss.str().c_str());
        }

        static bool WaitForContainerToBeActive(const Aws::String& containerName)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                DescribeContainerRequest describeContainerRequest;
                describeContainerRequest.SetContainerName(containerName);
                auto describeContainerOutcome = m_mediaStoreClient->DescribeContainer(describeContainerRequest);
                if (describeContainerOutcome.IsSuccess() && describeContainerOutcome.GetResult().GetContainer().GetStatus() == ContainerStatus::ACTIVE)
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(10));
            }

            return false;
        }

        static void WaitForContainerToEmpty()
        {
            ListItemsRequest listItemsRequest;
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                auto listItemsOutcome = m_mediaStoreDataClient->ListItems(listItemsRequest);
                ASSERT_TRUE(listItemsOutcome.IsSuccess());
                if (listItemsOutcome.GetResult().GetItems().size() > 0)
                {
                    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Listing items while deleting container returned "
                            << listItemsOutcome.GetResult().GetItems().size()
                            << " items.");
                    for (const auto& item : listItemsOutcome.GetResult().GetItems())
                    {
                        DeleteObjectRequest deleteObjectRequest;
                        deleteObjectRequest.SetPath(item.GetName());
                        m_mediaStoreDataClient->DeleteObject(deleteObjectRequest);
                    }
                    std::this_thread::sleep_for(std::chrono::seconds(10));
                }
                else
                {
                    break;
                }
            }

            ASSERT_LE(timeoutCount, TIMEOUT_MAX);
        }

        static void DeleteContainer(const Aws::String& containerName)
        {
            DescribeContainerRequest describeContainerRequest;
            describeContainerRequest.SetContainerName(containerName);
            auto describeContainerOutcome = m_mediaStoreClient->DescribeContainer(describeContainerRequest);

            if (describeContainerOutcome.IsSuccess())
            {
                // Empty container
                ListItemsRequest listItemsRequest;
                auto listItemsOutcome = m_mediaStoreDataClient->ListItems(listItemsRequest);
                if (listItemsOutcome.IsSuccess())
                {
                    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Listing items before attempting to delete container returned "
                            << listItemsOutcome.GetResult().GetItems().size()
                            << " items.");

                    for (const auto& item : listItemsOutcome.GetResult().GetItems())
                    {
                        DeleteObjectRequest deleteObjectRequest;
                        deleteObjectRequest.SetPath(item.GetName());
                        m_mediaStoreDataClient->DeleteObject(deleteObjectRequest);
                    }
                }
                WaitForContainerToEmpty();

                // Delete container
                DeleteContainerRequest deleteContainerRequest;
                deleteContainerRequest.SetContainerName(GetTestContainerName());
                auto deleteContainerOutcome = m_mediaStoreClient->DeleteContainer(deleteContainerRequest);
                ASSERT_TRUE(deleteContainerOutcome.IsSuccess());
            }
        }

        static Aws::String MakeFilePath(const Aws::String& fileName)
        {
#ifdef __ANDROID__
            return Aws::Platform::GetCacheDirectory() + fileName;
#else
            return fileName;
#endif // __ANDROID__
        }

        static bool CreateFile(const Aws::String& fileName, size_t fileSize)
        {
            Aws::OFStream testFile;
#ifdef _MSC_VER
            testFile.open(StringUtils::ToWString(fileName.c_str()).c_str(), std::ios_base::out | std::ios_base::binary);
#else
            testFile.open(fileName.c_str(), std::ios_base::out | std::ios_base::binary);
#endif // _MSC_VER
            for (size_t i = 0; i < fileSize; i++)
            {
                testFile << "0";
            }
            testFile.close();
            return testFile.good();
        }

        static bool AreFilesSame(const Aws::String& fileName1, const Aws::String& fileName2)
        {
#ifdef _MSC_VER
            Aws::FStream inFile1(StringUtils::ToWString(fileName1.c_str()).c_str(), std::ios_base::in | std::ios_base::binary);
            Aws::FStream inFile2(StringUtils::ToWString(fileName2.c_str()).c_str(), std::ios_base::in | std::ios_base::binary);
#else
            Aws::FStream inFile1(fileName1.c_str(), std::ios::in | std::ios::binary);
            Aws::FStream inFile2(fileName2.c_str(), std::ios::in | std::ios::binary);
#endif // _MSC_VER

            if (!inFile1.good() || !inFile2.good())
            {
                return false;
            }

            return HashingUtils::CalculateSHA256(inFile1) == HashingUtils::CalculateSHA256(inFile2);
        }

        static void TestChunkedEncodingWithSmallPayload()
        {
            std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
            *objectStream << SMALL_PAYLOAD_TEST_TEXT;
            objectStream->flush();

            PutObjectRequest putObjectRequest;
            putObjectRequest.SetPath(SMALL_PAYLOAD_TEST_PATH);
            putObjectRequest.SetUploadAvailability(UploadAvailability::STANDARD);
            putObjectRequest.SetBody(objectStream);

            auto putObjectOutcome = m_mediaStoreDataClient->PutObject(putObjectRequest);
            ASSERT_TRUE(putObjectOutcome.IsSuccess());

            DescribeObjectRequest describeObjectRequest;
            describeObjectRequest.SetPath(SMALL_PAYLOAD_TEST_PATH);
            auto describeObjectOutcome = m_mediaStoreDataClient->DescribeObject(describeObjectRequest);
            ASSERT_TRUE(describeObjectOutcome.IsSuccess());
            ASSERT_EQ(strlen(SMALL_PAYLOAD_TEST_TEXT), static_cast<size_t>(describeObjectOutcome.GetResult().GetContentLength()));

            GetObjectRequest getObjectRequest;
            getObjectRequest.SetPath(SMALL_PAYLOAD_TEST_PATH);
            auto getObjectOutcome = m_mediaStoreDataClient->GetObject(getObjectRequest);
            ASSERT_TRUE(getObjectOutcome.IsSuccess());
            Aws::StringStream ss;
            ss << getObjectOutcome.GetResult().GetBody().rdbuf();
            ASSERT_STREQ(SMALL_PAYLOAD_TEST_TEXT, ss.str().c_str());
        }

        static void TestChunkedEncodingWithLargePayload()
        {
            Aws::String sourceTestFileName = MakeFilePath(BIG_TEST_FILE_NAME);
            Aws::String downloadTestFileName = sourceTestFileName + "_download";
            ASSERT_TRUE(CreateFile(sourceTestFileName, BIG_TEST_FILE_SIZE /* size in bytes */));
            auto testFileStream = Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, sourceTestFileName.c_str(), std::ios_base::in | std::ios_base::binary);

            PutObjectRequest putObjectRequest;
            putObjectRequest.SetPath(BIG_TEST_FILE_PATH);
            putObjectRequest.SetUploadAvailability(UploadAvailability::STREAMING);
            putObjectRequest.SetBody(testFileStream);

            auto putObjectOutcome = m_mediaStoreDataClient->PutObject(putObjectRequest);
            testFileStream->close();
            ASSERT_TRUE(putObjectOutcome.IsSuccess());

            DescribeObjectRequest describeObjectRequest;
            describeObjectRequest.SetPath(BIG_TEST_FILE_PATH);
            auto describeObjectOutcome = m_mediaStoreDataClient->DescribeObject(describeObjectRequest);
            ASSERT_TRUE(describeObjectOutcome.IsSuccess());
            ASSERT_EQ(BIG_TEST_FILE_SIZE, static_cast<size_t>(describeObjectOutcome.GetResult().GetContentLength()));

            GetObjectRequest getObjectRequest;
            getObjectRequest.SetPath(BIG_TEST_FILE_PATH);
            getObjectRequest.SetResponseStreamFactory(
                [&] { return Aws::New<Aws::FStream>(ALLOCATION_TAG, downloadTestFileName.c_str(), std::ios_base::out | std::ios_base::binary | std::ios_base::trunc); }
            );
            // Make sure the download file is closed when it's out of scope.
            {
                auto getObjectOutcome = m_mediaStoreDataClient->GetObject(getObjectRequest);
                ASSERT_TRUE(getObjectOutcome.IsSuccess());
            }
            ASSERT_TRUE(AreFilesSame(sourceTestFileName, downloadTestFileName));
            Aws::FileSystem::RemoveFileIfExists(sourceTestFileName.c_str());
            Aws::FileSystem::RemoveFileIfExists(downloadTestFileName.c_str());
        }
    };

    std::shared_ptr<MediaStoreClient> MediaStoreDataTest::m_mediaStoreClient(nullptr);
    std::shared_ptr<MediaStoreDataClient> MediaStoreDataTest::m_mediaStoreDataClient(nullptr);
    std::shared_ptr<ClientConfiguration> MediaStoreDataTest::m_mediaStoreDataConfig(nullptr);

    TEST_F(MediaStoreDataTest, TestChunkedEncodingWithSmallPayload)
    {
        TestChunkedEncodingWithSmallPayload();
#ifdef _MSC_VER
        // Test wininet http client.
        m_mediaStoreDataConfig->httpLibOverride = TransferLibType::WIN_INET_CLIENT;
        m_mediaStoreDataClient = Aws::MakeShared<MediaStoreDataClient>(ALLOCATION_TAG, *m_mediaStoreDataConfig);
        TestChunkedEncodingWithSmallPayload();
#endif // _MSC_VER
    }

    TEST_F(MediaStoreDataTest, TestChunkedEncodingWithLargePayload)
    {
        TestChunkedEncodingWithLargePayload();
#ifdef _MSC_VER
        // Test wininet http client.
        m_mediaStoreDataConfig->httpLibOverride = TransferLibType::WIN_INET_CLIENT;
        m_mediaStoreDataClient = Aws::MakeShared<MediaStoreDataClient>(ALLOCATION_TAG, *m_mediaStoreDataConfig);
        TestChunkedEncodingWithLargePayload();
#endif // _MSC_VER
    }
}
