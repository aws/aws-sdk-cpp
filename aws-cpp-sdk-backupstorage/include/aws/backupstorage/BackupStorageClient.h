/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/backupstorage/BackupStorageServiceClientModel.h>
#include <aws/backupstorage/BackupStorageLegacyAsyncMacros.h>

namespace Aws
{
namespace BackupStorage
{
  /**
   * The frontend service for Cryo Storage.
   */
  class AWS_BACKUPSTORAGE_API BackupStorageClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * Delete Object from the incremental base Backup.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/DeleteObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteObjectOutcome DeleteObject(const Model::DeleteObjectRequest& request) const;


        /**
         * Gets the specified object's chunk.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/GetChunk">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChunkOutcome GetChunk(const Model::GetChunkRequest& request) const;


        /**
         * Get metadata associated with an Object.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/GetObjectMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectMetadataOutcome GetObjectMetadata(const Model::GetObjectMetadataRequest& request) const;


        /**
         * List chunks in a given Object<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/ListChunks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChunksOutcome ListChunks(const Model::ListChunksRequest& request) const;


        /**
         * List all Objects in a given Backup.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/ListObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectsOutcome ListObjects(const Model::ListObjectsRequest& request) const;


        /**
         * Complete upload<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/NotifyObjectComplete">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyObjectCompleteOutcome NotifyObjectComplete(const Model::NotifyObjectCompleteRequest& request) const;


        /**
         * Upload chunk.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/PutChunk">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChunkOutcome PutChunk(const Model::PutChunkRequest& request) const;


        /**
         * Upload object that can store object metadata String and data blob in single API
         * call using inline chunk field.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/PutObject">AWS
         * API Reference</a></p>
         */
        virtual Model::PutObjectOutcome PutObject(const Model::PutObjectRequest& request) const;


        /**
         * Start upload containing one or many chunks.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/StartObject">AWS
         * API Reference</a></p>
         */
        virtual Model::StartObjectOutcome StartObject(const Model::StartObjectRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BackupStorageEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const BackupStorageClientConfiguration& clientConfiguration);

      BackupStorageClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BackupStorageEndpointProviderBase> m_endpointProvider;
  };

} // namespace BackupStorage
} // namespace Aws
