/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediastore-data/MediaStoreDataServiceClientModel.h>
#include <aws/mediastore-data/MediaStoreDataLegacyAsyncMacros.h>

namespace Aws
{
namespace MediaStoreData
{
  /**
   * <p>An AWS Elemental MediaStore asset is an object, similar to an object in the
   * Amazon S3 service. Objects are the fundamental entities that are stored in AWS
   * Elemental MediaStore.</p>
   */
  class AWS_MEDIASTOREDATA_API MediaStoreDataClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreDataClient(const Aws::MediaStoreData::MediaStoreDataClientConfiguration& clientConfiguration = Aws::MediaStoreData::MediaStoreDataClientConfiguration(),
                             std::shared_ptr<MediaStoreDataEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaStoreDataEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreDataClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<MediaStoreDataEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaStoreDataEndpointProvider>(ALLOCATION_TAG),
                             const Aws::MediaStoreData::MediaStoreDataClientConfiguration& clientConfiguration = Aws::MediaStoreData::MediaStoreDataClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaStoreDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<MediaStoreDataEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaStoreDataEndpointProvider>(ALLOCATION_TAG),
                             const Aws::MediaStoreData::MediaStoreDataClientConfiguration& clientConfiguration = Aws::MediaStoreData::MediaStoreDataClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreDataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreDataClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaStoreDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaStoreDataClient();


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
         * <p>Deletes an object at the specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/DeleteObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteObjectOutcome DeleteObject(const Model::DeleteObjectRequest& request) const;


        /**
         * <p>Gets the headers for an object at the specified path.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/DescribeObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeObjectOutcome DescribeObject(const Model::DescribeObjectRequest& request) const;


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
         * <p>Provides a list of metadata entries about folders and objects in the
         * specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/ListItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListItemsOutcome ListItems(const Model::ListItemsRequest& request) const;


        /**
         * <p>Uploads an object to the specified path. Object sizes are limited to 25 MB
         * for standard upload availability and 10 MB for streaming upload
         * availability.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/PutObject">AWS
         * API Reference</a></p>
         */
        virtual Model::PutObjectOutcome PutObject(const Model::PutObjectRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaStoreDataEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MediaStoreDataClientConfiguration& clientConfiguration);

      MediaStoreDataClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaStoreDataEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaStoreData
} // namespace Aws
