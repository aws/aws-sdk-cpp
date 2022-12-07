/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerServiceClientModel.h>

namespace Aws
{
namespace SagemakerEdgeManager
{
  /**
   * <p>SageMaker Edge Manager dataplane service for communicating with active
   * agents.</p>
   */
  class AWS_SAGEMAKEREDGEMANAGER_API SagemakerEdgeManagerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SagemakerEdgeManagerClient>
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

        /**
         * <p>Use to get the active deployments from a device.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/GetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentsOutcome GetDeployments(const Model::GetDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for GetDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentsOutcomeCallable GetDeploymentsCallable(const Model::GetDeploymentsRequest& request) const;

        /**
         * An Async wrapper for GetDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentsAsync(const Model::GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use to check if a device is registered with SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/GetDeviceRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceRegistrationOutcome GetDeviceRegistration(const Model::GetDeviceRegistrationRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceRegistrationOutcomeCallable GetDeviceRegistrationCallable(const Model::GetDeviceRegistrationRequest& request) const;

        /**
         * An Async wrapper for GetDeviceRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceRegistrationAsync(const Model::GetDeviceRegistrationRequest& request, const GetDeviceRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use to get the current status of devices registered on SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/SendHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::SendHeartbeatOutcome SendHeartbeat(const Model::SendHeartbeatRequest& request) const;

        /**
         * A Callable wrapper for SendHeartbeat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendHeartbeatOutcomeCallable SendHeartbeatCallable(const Model::SendHeartbeatRequest& request) const;

        /**
         * An Async wrapper for SendHeartbeat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendHeartbeatAsync(const Model::SendHeartbeatRequest& request, const SendHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SagemakerEdgeManagerClient>;
      void init(const SagemakerEdgeManagerClientConfiguration& clientConfiguration);

      SagemakerEdgeManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace SagemakerEdgeManager
} // namespace Aws
