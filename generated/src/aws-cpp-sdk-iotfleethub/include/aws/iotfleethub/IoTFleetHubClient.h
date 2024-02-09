/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotfleethub/IoTFleetHubServiceClientModel.h>

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
  class AWS_IOTFLEETHUB_API IoTFleetHubClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTFleetHubClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTFleetHubClientConfiguration ClientConfigurationType;
      typedef IoTFleetHubEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetHubClient(const Aws::IoTFleetHub::IoTFleetHubClientConfiguration& clientConfiguration = Aws::IoTFleetHub::IoTFleetHubClientConfiguration(),
                          std::shared_ptr<IoTFleetHubEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTFleetHubClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<IoTFleetHubEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::IoTFleetHub::IoTFleetHubClientConfiguration& clientConfiguration = Aws::IoTFleetHub::IoTFleetHubClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTFleetHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<IoTFleetHubEndpointProviderBase> endpointProvider = nullptr,
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

        /**
         * <p>Creates a Fleet Hub for AWS IoT Device Management web application.</p> 
         * <p>Fleet Hub for AWS IoT Device Management is in public preview and is subject
         * to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&IoTFleetHubClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetHubClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Deletes a Fleet Hub for AWS IoT Device Management web application.</p> 
         * <p>Fleet Hub for AWS IoT Device Management is in public preview and is subject
         * to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&IoTFleetHubClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetHubClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Gets information about a Fleet Hub for AWS IoT Device Management web
         * application.</p>  <p>Fleet Hub for AWS IoT Device Management is in public
         * preview and is subject to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const DescribeApplicationRequestT& request) const
        {
            return SubmitCallable(&IoTFleetHubClient::DescribeApplication, request);
        }

        /**
         * An Async wrapper for DescribeApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        void DescribeApplicationAsync(const DescribeApplicationRequestT& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetHubClient::DescribeApplication, request, handler, context);
        }

        /**
         * <p>Gets a list of Fleet Hub for AWS IoT Device Management web applications for
         * the current account.</p>  <p>Fleet Hub for AWS IoT Device Management is in
         * public preview and is subject to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&IoTFleetHubClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetHubClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p>  <p>Fleet Hub for AWS
         * IoT Device Management is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoTFleetHubClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetHubClient::ListTagsForResource, request, handler, context);
        }

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTFleetHubClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetHubClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags (metadata) from the resource.</p>  <p>Fleet
         * Hub for AWS IoT Device Management is in public preview and is subject to
         * change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTFleetHubClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetHubClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates information about a Fleet Hub for a AWS IoT Device Management web
         * application.</p>  <p>Fleet Hub for AWS IoT Device Management is in public
         * preview and is subject to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&IoTFleetHubClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTFleetHubClient::UpdateApplication, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTFleetHubEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTFleetHubClient>;
      void init(const IoTFleetHubClientConfiguration& clientConfiguration);

      IoTFleetHubClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTFleetHubEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTFleetHub
} // namespace Aws
