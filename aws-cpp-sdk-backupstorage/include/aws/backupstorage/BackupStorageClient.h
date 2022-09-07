/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/backupstorage/BackupStorageErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/backupstorage/model/GetChunkResult.h>
#include <aws/backupstorage/model/GetObjectMetadataResult.h>
#include <aws/backupstorage/model/ListChunksResult.h>
#include <aws/backupstorage/model/ListObjectsResult.h>
#include <aws/backupstorage/model/NotifyObjectCompleteResult.h>
#include <aws/backupstorage/model/PutChunkResult.h>
#include <aws/backupstorage/model/PutObjectResult.h>
#include <aws/backupstorage/model/StartObjectResult.h>
#include <aws/core/NoResult.h>
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

namespace BackupStorage
{

namespace Model
{
        class DeleteObjectRequest;
        class GetChunkRequest;
        class GetObjectMetadataRequest;
        class ListChunksRequest;
        class ListObjectsRequest;
        class NotifyObjectCompleteRequest;
        class PutChunkRequest;
        class PutObjectRequest;
        class StartObjectRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, BackupStorageError> DeleteObjectOutcome;
        typedef Aws::Utils::Outcome<GetChunkResult, BackupStorageError> GetChunkOutcome;
        typedef Aws::Utils::Outcome<GetObjectMetadataResult, BackupStorageError> GetObjectMetadataOutcome;
        typedef Aws::Utils::Outcome<ListChunksResult, BackupStorageError> ListChunksOutcome;
        typedef Aws::Utils::Outcome<ListObjectsResult, BackupStorageError> ListObjectsOutcome;
        typedef Aws::Utils::Outcome<NotifyObjectCompleteResult, BackupStorageError> NotifyObjectCompleteOutcome;
        typedef Aws::Utils::Outcome<PutChunkResult, BackupStorageError> PutChunkOutcome;
        typedef Aws::Utils::Outcome<PutObjectResult, BackupStorageError> PutObjectOutcome;
        typedef Aws::Utils::Outcome<StartObjectResult, BackupStorageError> StartObjectOutcome;

        typedef std::future<DeleteObjectOutcome> DeleteObjectOutcomeCallable;
        typedef std::future<GetChunkOutcome> GetChunkOutcomeCallable;
        typedef std::future<GetObjectMetadataOutcome> GetObjectMetadataOutcomeCallable;
        typedef std::future<ListChunksOutcome> ListChunksOutcomeCallable;
        typedef std::future<ListObjectsOutcome> ListObjectsOutcomeCallable;
        typedef std::future<NotifyObjectCompleteOutcome> NotifyObjectCompleteOutcomeCallable;
        typedef std::future<PutChunkOutcome> PutChunkOutcomeCallable;
        typedef std::future<PutObjectOutcome> PutObjectOutcomeCallable;
        typedef std::future<StartObjectOutcome> StartObjectOutcomeCallable;
} // namespace Model

  class BackupStorageClient;

    typedef std::function<void(const BackupStorageClient*, const Model::DeleteObjectRequest&, const Model::DeleteObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::GetChunkRequest&, Model::GetChunkOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChunkResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::GetObjectMetadataRequest&, Model::GetObjectMetadataOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectMetadataResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::ListChunksRequest&, const Model::ListChunksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChunksResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::ListObjectsRequest&, const Model::ListObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectsResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::NotifyObjectCompleteRequest&, const Model::NotifyObjectCompleteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyObjectCompleteResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::PutChunkRequest&, const Model::PutChunkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutChunkResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::PutObjectRequest&, const Model::PutObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectResponseReceivedHandler;
    typedef std::function<void(const BackupStorageClient*, const Model::StartObjectRequest&, const Model::StartObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartObjectResponseReceivedHandler;

  /**
   * The frontend service for Cryo Storage.
   */
  class AWS_BACKUPSTORAGE_API BackupStorageClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupStorageClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupStorageClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupStorageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~BackupStorageClient();


        /**
         * Delete Object from the incremental base Backup.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/DeleteObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteObjectOutcome DeleteObject(const Model::DeleteObjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteObjectOutcomeCallable DeleteObjectCallable(const Model::DeleteObjectRequest& request) const;

        /**
         * An Async wrapper for DeleteObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObjectAsync(const Model::DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets the specified object's chunk.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/GetChunk">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChunkOutcome GetChunk(const Model::GetChunkRequest& request) const;

        /**
         * A Callable wrapper for GetChunk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChunkOutcomeCallable GetChunkCallable(const Model::GetChunkRequest& request) const;

        /**
         * An Async wrapper for GetChunk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChunkAsync(const Model::GetChunkRequest& request, const GetChunkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get metadata associated with an Object.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/GetObjectMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectMetadataOutcome GetObjectMetadata(const Model::GetObjectMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetObjectMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectMetadataOutcomeCallable GetObjectMetadataCallable(const Model::GetObjectMetadataRequest& request) const;

        /**
         * An Async wrapper for GetObjectMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectMetadataAsync(const Model::GetObjectMetadataRequest& request, const GetObjectMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List chunks in a given Object<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/ListChunks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChunksOutcome ListChunks(const Model::ListChunksRequest& request) const;

        /**
         * A Callable wrapper for ListChunks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChunksOutcomeCallable ListChunksCallable(const Model::ListChunksRequest& request) const;

        /**
         * An Async wrapper for ListChunks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChunksAsync(const Model::ListChunksRequest& request, const ListChunksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List all Objects in a given Backup.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/ListObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectsOutcome ListObjects(const Model::ListObjectsRequest& request) const;

        /**
         * A Callable wrapper for ListObjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectsOutcomeCallable ListObjectsCallable(const Model::ListObjectsRequest& request) const;

        /**
         * An Async wrapper for ListObjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectsAsync(const Model::ListObjectsRequest& request, const ListObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Complete upload<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/NotifyObjectComplete">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyObjectCompleteOutcome NotifyObjectComplete(const Model::NotifyObjectCompleteRequest& request) const;

        /**
         * A Callable wrapper for NotifyObjectComplete that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::NotifyObjectCompleteOutcomeCallable NotifyObjectCompleteCallable(const Model::NotifyObjectCompleteRequest& request) const;

        /**
         * An Async wrapper for NotifyObjectComplete that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void NotifyObjectCompleteAsync(const Model::NotifyObjectCompleteRequest& request, const NotifyObjectCompleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Upload chunk.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/PutChunk">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChunkOutcome PutChunk(const Model::PutChunkRequest& request) const;

        /**
         * A Callable wrapper for PutChunk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutChunkOutcomeCallable PutChunkCallable(const Model::PutChunkRequest& request) const;

        /**
         * An Async wrapper for PutChunk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutChunkAsync(const Model::PutChunkRequest& request, const PutChunkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Upload object that can store object metadata String and data blob in single API
         * call using inline chunk field.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/PutObject">AWS
         * API Reference</a></p>
         */
        virtual Model::PutObjectOutcome PutObject(const Model::PutObjectRequest& request) const;

        /**
         * A Callable wrapper for PutObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutObjectOutcomeCallable PutObjectCallable(const Model::PutObjectRequest& request) const;

        /**
         * An Async wrapper for PutObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectAsync(const Model::PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Start upload containing one or many chunks.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/StartObject">AWS
         * API Reference</a></p>
         */
        virtual Model::StartObjectOutcome StartObject(const Model::StartObjectRequest& request) const;

        /**
         * A Callable wrapper for StartObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartObjectOutcomeCallable StartObjectCallable(const Model::StartObjectRequest& request) const;

        /**
         * An Async wrapper for StartObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartObjectAsync(const Model::StartObjectRequest& request, const StartObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace BackupStorage
} // namespace Aws
