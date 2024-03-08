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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BackupStorageClientConfiguration ClientConfigurationType;
      typedef BackupStorageEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupStorageClient(const Aws::BackupStorage::BackupStorageClientConfiguration& clientConfiguration = Aws::BackupStorage::BackupStorageClientConfiguration(),
                            std::shared_ptr<BackupStorageEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupStorageClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<BackupStorageEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::BackupStorage::BackupStorageClientConfiguration& clientConfiguration = Aws::BackupStorage::BackupStorageClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupStorageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<BackupStorageEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename DeleteObjectRequestT = Model::DeleteObjectRequest>
        Model::DeleteObjectOutcomeCallable DeleteObjectCallable(const DeleteObjectRequestT& request) const
        {
            return SubmitCallable(&BackupStorageClient::DeleteObject, request);
        }

        /**
         * An Async wrapper for DeleteObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteObjectRequestT = Model::DeleteObjectRequest>
        void DeleteObjectAsync(const DeleteObjectRequestT& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupStorageClient::DeleteObject, request, handler, context);
        }

        /**
         * Gets the specified object's chunk.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/GetChunk">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChunkOutcome GetChunk(const Model::GetChunkRequest& request) const;

        /**
         * A Callable wrapper for GetChunk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChunkRequestT = Model::GetChunkRequest>
        Model::GetChunkOutcomeCallable GetChunkCallable(const GetChunkRequestT& request) const
        {
            return SubmitCallable(&BackupStorageClient::GetChunk, request);
        }

        /**
         * An Async wrapper for GetChunk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChunkRequestT = Model::GetChunkRequest>
        void GetChunkAsync(const GetChunkRequestT& request, const GetChunkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupStorageClient::GetChunk, request, handler, context);
        }

        /**
         * Get metadata associated with an Object.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/GetObjectMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectMetadataOutcome GetObjectMetadata(const Model::GetObjectMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetObjectMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetObjectMetadataRequestT = Model::GetObjectMetadataRequest>
        Model::GetObjectMetadataOutcomeCallable GetObjectMetadataCallable(const GetObjectMetadataRequestT& request) const
        {
            return SubmitCallable(&BackupStorageClient::GetObjectMetadata, request);
        }

        /**
         * An Async wrapper for GetObjectMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetObjectMetadataRequestT = Model::GetObjectMetadataRequest>
        void GetObjectMetadataAsync(const GetObjectMetadataRequestT& request, const GetObjectMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupStorageClient::GetObjectMetadata, request, handler, context);
        }

        /**
         * List chunks in a given Object<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/ListChunks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChunksOutcome ListChunks(const Model::ListChunksRequest& request) const;

        /**
         * A Callable wrapper for ListChunks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChunksRequestT = Model::ListChunksRequest>
        Model::ListChunksOutcomeCallable ListChunksCallable(const ListChunksRequestT& request) const
        {
            return SubmitCallable(&BackupStorageClient::ListChunks, request);
        }

        /**
         * An Async wrapper for ListChunks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChunksRequestT = Model::ListChunksRequest>
        void ListChunksAsync(const ListChunksRequestT& request, const ListChunksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupStorageClient::ListChunks, request, handler, context);
        }

        /**
         * List all Objects in a given Backup.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/ListObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectsOutcome ListObjects(const Model::ListObjectsRequest& request) const;

        /**
         * A Callable wrapper for ListObjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListObjectsRequestT = Model::ListObjectsRequest>
        Model::ListObjectsOutcomeCallable ListObjectsCallable(const ListObjectsRequestT& request) const
        {
            return SubmitCallable(&BackupStorageClient::ListObjects, request);
        }

        /**
         * An Async wrapper for ListObjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListObjectsRequestT = Model::ListObjectsRequest>
        void ListObjectsAsync(const ListObjectsRequestT& request, const ListObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupStorageClient::ListObjects, request, handler, context);
        }

        /**
         * Complete upload<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/NotifyObjectComplete">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyObjectCompleteOutcome NotifyObjectComplete(const Model::NotifyObjectCompleteRequest& request) const;

        /**
         * A Callable wrapper for NotifyObjectComplete that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyObjectCompleteRequestT = Model::NotifyObjectCompleteRequest>
        Model::NotifyObjectCompleteOutcomeCallable NotifyObjectCompleteCallable(const NotifyObjectCompleteRequestT& request) const
        {
            return SubmitCallable(&BackupStorageClient::NotifyObjectComplete, request);
        }

        /**
         * An Async wrapper for NotifyObjectComplete that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyObjectCompleteRequestT = Model::NotifyObjectCompleteRequest>
        void NotifyObjectCompleteAsync(const NotifyObjectCompleteRequestT& request, const NotifyObjectCompleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupStorageClient::NotifyObjectComplete, request, handler, context);
        }

        /**
         * Upload chunk.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/PutChunk">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChunkOutcome PutChunk(const Model::PutChunkRequest& request) const;

        /**
         * A Callable wrapper for PutChunk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutChunkRequestT = Model::PutChunkRequest>
        Model::PutChunkOutcomeCallable PutChunkCallable(const PutChunkRequestT& request) const
        {
            return SubmitCallable(&BackupStorageClient::PutChunk, request);
        }

        /**
         * An Async wrapper for PutChunk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutChunkRequestT = Model::PutChunkRequest>
        void PutChunkAsync(const PutChunkRequestT& request, const PutChunkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupStorageClient::PutChunk, request, handler, context);
        }

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
        template<typename PutObjectRequestT = Model::PutObjectRequest>
        Model::PutObjectOutcomeCallable PutObjectCallable(const PutObjectRequestT& request) const
        {
            return SubmitCallable(&BackupStorageClient::PutObject, request);
        }

        /**
         * An Async wrapper for PutObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutObjectRequestT = Model::PutObjectRequest>
        void PutObjectAsync(const PutObjectRequestT& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupStorageClient::PutObject, request, handler, context);
        }

        /**
         * Start upload containing one or many chunks.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/StartObject">AWS
         * API Reference</a></p>
         */
        virtual Model::StartObjectOutcome StartObject(const Model::StartObjectRequest& request) const;

        /**
         * A Callable wrapper for StartObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartObjectRequestT = Model::StartObjectRequest>
        Model::StartObjectOutcomeCallable StartObjectCallable(const StartObjectRequestT& request) const
        {
            return SubmitCallable(&BackupStorageClient::StartObject, request);
        }

        /**
         * An Async wrapper for StartObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartObjectRequestT = Model::StartObjectRequest>
        void StartObjectAsync(const StartObjectRequestT& request, const StartObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupStorageClient::StartObject, request, handler, context);
        }


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
