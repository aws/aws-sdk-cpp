/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/mediastore-data/MediaStoreDataErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediastore-data/model/DeleteObjectResult.h>
#include <aws/mediastore-data/model/DescribeObjectResult.h>
#include <aws/mediastore-data/model/GetObjectResult.h>
#include <aws/mediastore-data/model/ListItemsResult.h>
#include <aws/mediastore-data/model/PutObjectResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace MediaStoreData
{

namespace Model
{
        class DeleteObjectRequest;
        class DescribeObjectRequest;
        class GetObjectRequest;
        class ListItemsRequest;
        class PutObjectRequest;

        typedef Aws::Utils::Outcome<DeleteObjectResult, Aws::Client::AWSError<MediaStoreDataErrors>> DeleteObjectOutcome;
        typedef Aws::Utils::Outcome<DescribeObjectResult, Aws::Client::AWSError<MediaStoreDataErrors>> DescribeObjectOutcome;
        typedef Aws::Utils::Outcome<GetObjectResult, Aws::Client::AWSError<MediaStoreDataErrors>> GetObjectOutcome;
        typedef Aws::Utils::Outcome<ListItemsResult, Aws::Client::AWSError<MediaStoreDataErrors>> ListItemsOutcome;
        typedef Aws::Utils::Outcome<PutObjectResult, Aws::Client::AWSError<MediaStoreDataErrors>> PutObjectOutcome;

        typedef std::future<DeleteObjectOutcome> DeleteObjectOutcomeCallable;
        typedef std::future<DescribeObjectOutcome> DescribeObjectOutcomeCallable;
        typedef std::future<GetObjectOutcome> GetObjectOutcomeCallable;
        typedef std::future<ListItemsOutcome> ListItemsOutcomeCallable;
        typedef std::future<PutObjectOutcome> PutObjectOutcomeCallable;
} // namespace Model

  class MediaStoreDataClient;

    typedef std::function<void(const MediaStoreDataClient*, const Model::DeleteObjectRequest&, const Model::DeleteObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectResponseReceivedHandler;
    typedef std::function<void(const MediaStoreDataClient*, const Model::DescribeObjectRequest&, const Model::DescribeObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeObjectResponseReceivedHandler;
    typedef std::function<void(const MediaStoreDataClient*, const Model::GetObjectRequest&, const Model::GetObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectResponseReceivedHandler;
    typedef std::function<void(const MediaStoreDataClient*, const Model::ListItemsRequest&, const Model::ListItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListItemsResponseReceivedHandler;
    typedef std::function<void(const MediaStoreDataClient*, const Model::PutObjectRequest&, const Model::PutObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectResponseReceivedHandler;

  /**
   * <p>An AWS Elemental MediaStore asset is an object, similar to an object in the
   * Amazon S3 service. Objects are the fundamental entities that are stored in AWS
   * Elemental MediaStore.</p>
   */
  class AWS_MEDIASTOREDATA_API MediaStoreDataClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreDataClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreDataClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaStoreDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaStoreDataClient();

        inline virtual const char* GetServiceClientName() const override { return "MediaStore Data"; }


        /**
         * <p>Deletes an object at the specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/DeleteObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteObjectOutcome DeleteObject(const Model::DeleteObjectRequest& request) const;

        /**
         * <p>Deletes an object at the specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/DeleteObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteObjectOutcomeCallable DeleteObjectCallable(const Model::DeleteObjectRequest& request) const;

        /**
         * <p>Deletes an object at the specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/DeleteObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObjectAsync(const Model::DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the headers for an object at the specified path.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/DescribeObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeObjectOutcome DescribeObject(const Model::DescribeObjectRequest& request) const;

        /**
         * <p>Gets the headers for an object at the specified path.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/DescribeObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeObjectOutcomeCallable DescribeObjectCallable(const Model::DescribeObjectRequest& request) const;

        /**
         * <p>Gets the headers for an object at the specified path.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/DescribeObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeObjectAsync(const Model::DescribeObjectRequest& request, const DescribeObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Downloads the object at the specified path. If the object’s upload
         * availability is set to <code>streaming</code>, AWS Elemental MediaStore
         * downloads the object even if it’s still uploading the object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/GetObject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectOutcome GetObject(const Model::GetObjectRequest& request) const;

        /**
         * <p>Downloads the object at the specified path. If the object’s upload
         * availability is set to <code>streaming</code>, AWS Elemental MediaStore
         * downloads the object even if it’s still uploading the object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/GetObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectOutcomeCallable GetObjectCallable(const Model::GetObjectRequest& request) const;

        /**
         * <p>Downloads the object at the specified path. If the object’s upload
         * availability is set to <code>streaming</code>, AWS Elemental MediaStore
         * downloads the object even if it’s still uploading the object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/GetObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectAsync(const Model::GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of metadata entries about folders and objects in the
         * specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/ListItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListItemsOutcome ListItems(const Model::ListItemsRequest& request) const;

        /**
         * <p>Provides a list of metadata entries about folders and objects in the
         * specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/ListItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListItemsOutcomeCallable ListItemsCallable(const Model::ListItemsRequest& request) const;

        /**
         * <p>Provides a list of metadata entries about folders and objects in the
         * specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/ListItems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListItemsAsync(const Model::ListItemsRequest& request, const ListItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an object to the specified path. Object sizes are limited to 25 MB
         * for standard upload availability and 10 MB for streaming upload
         * availability.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/PutObject">AWS
         * API Reference</a></p>
         */
        virtual Model::PutObjectOutcome PutObject(const Model::PutObjectRequest& request) const;

        /**
         * <p>Uploads an object to the specified path. Object sizes are limited to 25 MB
         * for standard upload availability and 10 MB for streaming upload
         * availability.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/PutObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutObjectOutcomeCallable PutObjectCallable(const Model::PutObjectRequest& request) const;

        /**
         * <p>Uploads an object to the specified path. Object sizes are limited to 25 MB
         * for standard upload availability and 10 MB for streaming upload
         * availability.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/PutObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectAsync(const Model::PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteObjectAsyncHelper(const Model::DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeObjectAsyncHelper(const Model::DescribeObjectRequest& request, const DescribeObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectAsyncHelper(const Model::GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListItemsAsyncHelper(const Model::ListItemsRequest& request, const ListItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutObjectAsyncHelper(const Model::PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaStoreData
} // namespace Aws
