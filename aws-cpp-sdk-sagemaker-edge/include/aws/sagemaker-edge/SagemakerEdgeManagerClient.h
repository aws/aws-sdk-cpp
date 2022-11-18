/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerServiceClientModel.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerLegacyAsyncMacros.h>

namespace Aws
{
namespace SagemakerEdgeManager
{
  /**
   * <p>SageMaker Edge Manager dataplane service for communicating with active
   * agents.</p>
   */
  class AWS_SAGEMAKEREDGEMANAGER_API SagemakerEdgeManagerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& clientConfiguration = Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration(),
                                   std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<SagemakerEdgeManagerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<SagemakerEdgeManagerEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& clientConfiguration = Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SagemakerEdgeManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<SagemakerEdgeManagerEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& clientConfiguration = Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SagemakerEdgeManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SagemakerEdgeManagerClient();


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
         * <p>Use to get the active deployments from a device.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/GetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentsOutcome GetDeployments(const Model::GetDeploymentsRequest& request) const;


        /**
         * <p>Use to check if a device is registered with SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/GetDeviceRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceRegistrationOutcome GetDeviceRegistration(const Model::GetDeviceRegistrationRequest& request) const;


        /**
         * <p>Use to get the current status of devices registered on SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/SendHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::SendHeartbeatOutcome SendHeartbeat(const Model::SendHeartbeatRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SagemakerEdgeManagerClientConfiguration& clientConfiguration);

      SagemakerEdgeManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace SagemakerEdgeManager
} // namespace Aws
