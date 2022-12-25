/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/backupstorage/BackupStorageServiceClientModel.h>

namespace Aws
{
namespace BackupStorage
{
  /**
   * The frontend service for Cryo Storage.
   */
  class AWS_BACKUPSTORAGE_API BackupStorageClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BackupStorageClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupStorageClient(const Aws::BackupStorage::BackupStorageClientConfiguration& clientConfiguration = Aws::BackupStorage::BackupStorageClientConfiguration(),
                            std::shared_ptr<BackupStorageEndpointProviderBase> endpointProvider = Aws::MakeShared<BackupStorageEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupStorageClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<BackupStorageEndpointProviderBase> endpointProvider = Aws::MakeShared<BackupStorageEndpointProvider>(ALLOCATION_TAG),
                            const Aws::BackupStorage::BackupStorageClientConfiguration& clientConfiguration = Aws::BackupStorage::BackupStorageClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupStorageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<BackupStorageEndpointProviderBase> endpointProvider = Aws::MakeShared<BackupStorageEndpointProvider>(ALLOCATION_TAG),
                            const Aws::BackupStorage::BackupStorageClientConfiguration& clientConfiguration = Aws::BackupStorage::BackupStorageClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupStorageClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupStorageClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupStorageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
      std::shared_ptr<BackupStorageEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BackupStorageClient>;
      void init(const BackupStorageClientConfiguration& clientConfiguration);

      BackupStorageClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BackupStorageEndpointProviderBase> m_endpointProvider;
  };

} // namespace BackupStorage
} // namespace Aws
