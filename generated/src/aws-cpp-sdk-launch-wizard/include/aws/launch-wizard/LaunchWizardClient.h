﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/launch-wizard/LaunchWizardServiceClientModel.h>

namespace Aws
{
namespace LaunchWizard
{
  /**
   * <p>Launch Wizard offers a guided way of sizing, configuring, and deploying
   * Amazon Web Services resources for third party applications, such as Microsoft
   * SQL Server Always On and HANA based SAP systems, without the need to manually
   * identify and provision individual Amazon Web Services resources.</p>
   */
  class AWS_LAUNCHWIZARD_API LaunchWizardClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LaunchWizardClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef LaunchWizardClientConfiguration ClientConfigurationType;
      typedef LaunchWizardEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LaunchWizardClient(const Aws::LaunchWizard::LaunchWizardClientConfiguration& clientConfiguration = Aws::LaunchWizard::LaunchWizardClientConfiguration(),
                           std::shared_ptr<LaunchWizardEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LaunchWizardClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<LaunchWizardEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::LaunchWizard::LaunchWizardClientConfiguration& clientConfiguration = Aws::LaunchWizard::LaunchWizardClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LaunchWizardClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<LaunchWizardEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::LaunchWizard::LaunchWizardClientConfiguration& clientConfiguration = Aws::LaunchWizard::LaunchWizardClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LaunchWizardClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LaunchWizardClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LaunchWizardClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LaunchWizardClient();

        /**
         * <p>Creates a deployment for the given workload. Deployments created by this
         * operation are not available in the Launch Wizard console to use the <code>Clone
         * deployment</code> action on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const CreateDeploymentRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::CreateDeployment, request);
        }

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        void CreateDeploymentAsync(const CreateDeploymentRequestT& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::CreateDeployment, request, handler, context);
        }

        /**
         * <p>Deletes a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DeleteDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentOutcome DeleteDeployment(const Model::DeleteDeploymentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
        Model::DeleteDeploymentOutcomeCallable DeleteDeploymentCallable(const DeleteDeploymentRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::DeleteDeployment, request);
        }

        /**
         * An Async wrapper for DeleteDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
        void DeleteDeploymentAsync(const DeleteDeploymentRequestT& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::DeleteDeployment, request, handler, context);
        }

        /**
         * <p>Returns information about the deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const GetDeploymentRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::GetDeployment, request);
        }

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        void GetDeploymentAsync(const GetDeploymentRequestT& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::GetDeployment, request, handler, context);
        }

        /**
         * <p>Returns information about a workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/GetWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkloadOutcome GetWorkload(const Model::GetWorkloadRequest& request) const;

        /**
         * A Callable wrapper for GetWorkload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkloadRequestT = Model::GetWorkloadRequest>
        Model::GetWorkloadOutcomeCallable GetWorkloadCallable(const GetWorkloadRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::GetWorkload, request);
        }

        /**
         * An Async wrapper for GetWorkload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkloadRequestT = Model::GetWorkloadRequest>
        void GetWorkloadAsync(const GetWorkloadRequestT& request, const GetWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::GetWorkload, request, handler, context);
        }

        /**
         * <p>Returns details for a given workload and deployment pattern, including the
         * available specifications. You can use the <a
         * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloads.html">ListWorkloads</a>
         * operation to discover the available workload names and the <a
         * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">ListWorkloadDeploymentPatterns</a>
         * operation to discover the available deployment pattern names of a given
         * workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/GetWorkloadDeploymentPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkloadDeploymentPatternOutcome GetWorkloadDeploymentPattern(const Model::GetWorkloadDeploymentPatternRequest& request) const;

        /**
         * A Callable wrapper for GetWorkloadDeploymentPattern that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkloadDeploymentPatternRequestT = Model::GetWorkloadDeploymentPatternRequest>
        Model::GetWorkloadDeploymentPatternOutcomeCallable GetWorkloadDeploymentPatternCallable(const GetWorkloadDeploymentPatternRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::GetWorkloadDeploymentPattern, request);
        }

        /**
         * An Async wrapper for GetWorkloadDeploymentPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkloadDeploymentPatternRequestT = Model::GetWorkloadDeploymentPatternRequest>
        void GetWorkloadDeploymentPatternAsync(const GetWorkloadDeploymentPatternRequestT& request, const GetWorkloadDeploymentPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::GetWorkloadDeploymentPattern, request, handler, context);
        }

        /**
         * <p>Lists the events of a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/ListDeploymentEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentEventsOutcome ListDeploymentEvents(const Model::ListDeploymentEventsRequest& request) const;

        /**
         * A Callable wrapper for ListDeploymentEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeploymentEventsRequestT = Model::ListDeploymentEventsRequest>
        Model::ListDeploymentEventsOutcomeCallable ListDeploymentEventsCallable(const ListDeploymentEventsRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::ListDeploymentEvents, request);
        }

        /**
         * An Async wrapper for ListDeploymentEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentEventsRequestT = Model::ListDeploymentEventsRequest>
        void ListDeploymentEventsAsync(const ListDeploymentEventsRequestT& request, const ListDeploymentEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::ListDeploymentEvents, request, handler, context);
        }

        /**
         * <p>Lists the deployments that have been created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const ListDeploymentsRequestT& request = {}) const
        {
            return SubmitCallable(&LaunchWizardClient::ListDeployments, request);
        }

        /**
         * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        void ListDeploymentsAsync(const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListDeploymentsRequestT& request = {}) const
        {
            return SubmitAsync(&LaunchWizardClient::ListDeployments, request, handler, context);
        }

        /**
         * <p>Lists the tags associated with a specified resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the workload deployment patterns for a given workload name. You can use
         * the <a
         * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloads.html">ListWorkloads</a>
         * operation to discover the available workload names.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/ListWorkloadDeploymentPatterns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadDeploymentPatternsOutcome ListWorkloadDeploymentPatterns(const Model::ListWorkloadDeploymentPatternsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkloadDeploymentPatterns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkloadDeploymentPatternsRequestT = Model::ListWorkloadDeploymentPatternsRequest>
        Model::ListWorkloadDeploymentPatternsOutcomeCallable ListWorkloadDeploymentPatternsCallable(const ListWorkloadDeploymentPatternsRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::ListWorkloadDeploymentPatterns, request);
        }

        /**
         * An Async wrapper for ListWorkloadDeploymentPatterns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkloadDeploymentPatternsRequestT = Model::ListWorkloadDeploymentPatternsRequest>
        void ListWorkloadDeploymentPatternsAsync(const ListWorkloadDeploymentPatternsRequestT& request, const ListWorkloadDeploymentPatternsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::ListWorkloadDeploymentPatterns, request, handler, context);
        }

        /**
         * <p>Lists the available workload names. You can use the <a
         * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">ListWorkloadDeploymentPatterns</a>
         * operation to discover the available deployment patterns for a given
         * workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/ListWorkloads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadsOutcome ListWorkloads(const Model::ListWorkloadsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListWorkloads that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkloadsRequestT = Model::ListWorkloadsRequest>
        Model::ListWorkloadsOutcomeCallable ListWorkloadsCallable(const ListWorkloadsRequestT& request = {}) const
        {
            return SubmitCallable(&LaunchWizardClient::ListWorkloads, request);
        }

        /**
         * An Async wrapper for ListWorkloads that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkloadsRequestT = Model::ListWorkloadsRequest>
        void ListWorkloadsAsync(const ListWorkloadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListWorkloadsRequestT& request = {}) const
        {
            return SubmitAsync(&LaunchWizardClient::ListWorkloads, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the given resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LaunchWizardClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LaunchWizardClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LaunchWizardEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LaunchWizardClient>;
      void init(const LaunchWizardClientConfiguration& clientConfiguration);

      LaunchWizardClientConfiguration m_clientConfiguration;
      std::shared_ptr<LaunchWizardEndpointProviderBase> m_endpointProvider;
  };

} // namespace LaunchWizard
} // namespace Aws
