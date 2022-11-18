/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotfleethub/IoTFleetHubServiceClientModel.h>
#include <aws/iotfleethub/IoTFleetHubLegacyAsyncMacros.h>

namespace Aws
{
namespace IoTFleetHub
{
  /**
   * <p>With Fleet Hub for AWS IoT Device Management you can build stand-alone web
   * applications for monitoring the health of your device fleets.</p> 
   * <p>Fleet Hub for AWS IoT Device Management is in public preview and is subject
   * to change.</p> 
   */
  class AWS_IOTFLEETHUB_API IoTFleetHubClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetHubClient(const Aws::IoTFleetHub::IoTFleetHubClientConfiguration& clientConfiguration = Aws::IoTFleetHub::IoTFleetHubClientConfiguration(),
                          std::shared_ptr<IoTFleetHubEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTFleetHubEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetHubClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<IoTFleetHubEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTFleetHubEndpointProvider>(ALLOCATION_TAG),
                          const Aws::IoTFleetHub::IoTFleetHubClientConfiguration& clientConfiguration = Aws::IoTFleetHub::IoTFleetHubClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTFleetHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<IoTFleetHubEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTFleetHubEndpointProvider>(ALLOCATION_TAG),
                          const Aws::IoTFleetHub::IoTFleetHubClientConfiguration& clientConfiguration = Aws::IoTFleetHub::IoTFleetHubClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetHubClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetHubClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTFleetHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTFleetHubClient();


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
         * <p>Creates a Fleet Hub for AWS IoT Device Management web application.</p> 
         * <p>Fleet Hub for AWS IoT Device Management is in public preview and is subject
         * to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;


        /**
         * <p>Deletes a Fleet Hub for AWS IoT Device Management web application.</p> 
         * <p>Fleet Hub for AWS IoT Device Management is in public preview and is subject
         * to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;


        /**
         * <p>Gets information about a Fleet Hub for AWS IoT Device Management web
         * application.</p>  <p>Fleet Hub for AWS IoT Device Management is in public
         * preview and is subject to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;


        /**
         * <p>Gets a list of Fleet Hub for AWS IoT Device Management web applications for
         * the current account.</p>  <p>Fleet Hub for AWS IoT Device Management is in
         * public preview and is subject to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;


        /**
         * <p>Lists the tags for the specified resource.</p>  <p>Fleet Hub for AWS
         * IoT Device Management is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Adds to or modifies the tags of the specified resource. Tags are metadata
         * which can be used to manage a resource.</p>  <p>Fleet Hub for AWS IoT
         * Device Management is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the specified tags (metadata) from the resource.</p>  <p>Fleet
         * Hub for AWS IoT Device Management is in public preview and is subject to
         * change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates information about a Fleet Hub for a AWS IoT Device Management web
         * application.</p>  <p>Fleet Hub for AWS IoT Device Management is in public
         * preview and is subject to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTFleetHubEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IoTFleetHubClientConfiguration& clientConfiguration);

      IoTFleetHubClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTFleetHubEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTFleetHub
} // namespace Aws
