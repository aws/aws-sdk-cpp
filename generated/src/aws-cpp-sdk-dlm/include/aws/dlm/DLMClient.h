/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dlm/DLMServiceClientModel.h>

namespace Aws
{
namespace DLM
{
  /**
   * <fullname>Amazon Data Lifecycle Manager</fullname> <p>With Amazon Data Lifecycle
   * Manager, you can manage the lifecycle of your Amazon Web Services resources. You
   * create lifecycle policies, which are used to automate operations on the
   * specified resources.</p> <p>Amazon Data Lifecycle Manager supports Amazon EBS
   * volumes and snapshots. For information about using Amazon Data Lifecycle Manager
   * with Amazon EBS, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-lifecycle.html">
   * Amazon Data Lifecycle Manager</a> in the <i>Amazon EC2 User Guide</i>.</p>
   */
  class AWS_DLM_API DLMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DLMClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DLMClientConfiguration ClientConfigurationType;
      typedef DLMEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DLMClient(const Aws::DLM::DLMClientConfiguration& clientConfiguration = Aws::DLM::DLMClientConfiguration(),
                  std::shared_ptr<DLMEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DLMClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<DLMEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::DLM::DLMClientConfiguration& clientConfiguration = Aws::DLM::DLMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DLMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<DLMEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::DLM::DLMClientConfiguration& clientConfiguration = Aws::DLM::DLMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DLMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DLMClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DLMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DLMClient();

        /**
         * <p>Creates an Amazon Data Lifecycle Manager lifecycle policy. Amazon Data
         * Lifecycle Manager supports the following policy types:</p> <ul> <li> <p>Custom
         * EBS snapshot policy</p> </li> <li> <p>Custom EBS-backed AMI policy</p> </li>
         * <li> <p>Cross-account copy event policy</p> </li> <li> <p>Default policy for EBS
         * snapshots</p> </li> <li> <p>Default policy for EBS-backed AMIs</p> </li> </ul>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/policy-differences.html">
         * Default policies vs custom policies</a>.</p>  <p>If you create a
         * default policy, you can specify the request parameters either in the request
         * body, or in the PolicyDetails request structure, but not both.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CreateLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLifecyclePolicyOutcome CreateLifecyclePolicy(const Model::CreateLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLifecyclePolicyRequestT = Model::CreateLifecyclePolicyRequest>
        Model::CreateLifecyclePolicyOutcomeCallable CreateLifecyclePolicyCallable(const CreateLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&DLMClient::CreateLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for CreateLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLifecyclePolicyRequestT = Model::CreateLifecyclePolicyRequest>
        void CreateLifecyclePolicyAsync(const CreateLifecyclePolicyRequestT& request, const CreateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DLMClient::CreateLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified lifecycle policy and halts the automated operations
         * that the policy specified.</p> <p>For more information about deleting a policy,
         * see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/view-modify-delete.html#delete">Delete
         * lifecycle policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecyclePolicyOutcome DeleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLifecyclePolicyRequestT = Model::DeleteLifecyclePolicyRequest>
        Model::DeleteLifecyclePolicyOutcomeCallable DeleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&DLMClient::DeleteLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for DeleteLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLifecyclePolicyRequestT = Model::DeleteLifecyclePolicyRequest>
        void DeleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequestT& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DLMClient::DeleteLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Gets summary information about all or the specified data lifecycle
         * policies.</p> <p>To get complete information about a policy, use <a
         * href="https://docs.aws.amazon.com/dlm/latest/APIReference/API_GetLifecyclePolicy.html">GetLifecyclePolicy</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/GetLifecyclePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePoliciesOutcome GetLifecyclePolicies(const Model::GetLifecyclePoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetLifecyclePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLifecyclePoliciesRequestT = Model::GetLifecyclePoliciesRequest>
        Model::GetLifecyclePoliciesOutcomeCallable GetLifecyclePoliciesCallable(const GetLifecyclePoliciesRequestT& request) const
        {
            return SubmitCallable(&DLMClient::GetLifecyclePolicies, request);
        }

        /**
         * An Async wrapper for GetLifecyclePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLifecyclePoliciesRequestT = Model::GetLifecyclePoliciesRequest>
        void GetLifecyclePoliciesAsync(const GetLifecyclePoliciesRequestT& request, const GetLifecyclePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DLMClient::GetLifecyclePolicies, request, handler, context);
        }

        /**
         * <p>Gets detailed information about the specified lifecycle policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyOutcome GetLifecyclePolicy(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLifecyclePolicyRequestT = Model::GetLifecyclePolicyRequest>
        Model::GetLifecyclePolicyOutcomeCallable GetLifecyclePolicyCallable(const GetLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&DLMClient::GetLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for GetLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLifecyclePolicyRequestT = Model::GetLifecyclePolicyRequest>
        void GetLifecyclePolicyAsync(const GetLifecyclePolicyRequestT& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DLMClient::GetLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DLMClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DLMClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DLMClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DLMClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DLMClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DLMClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the specified lifecycle policy.</p> <p>For more information about
         * updating a policy, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/view-modify-delete.html#modify">Modify
         * lifecycle policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/UpdateLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLifecyclePolicyOutcome UpdateLifecyclePolicy(const Model::UpdateLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLifecyclePolicyRequestT = Model::UpdateLifecyclePolicyRequest>
        Model::UpdateLifecyclePolicyOutcomeCallable UpdateLifecyclePolicyCallable(const UpdateLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&DLMClient::UpdateLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for UpdateLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLifecyclePolicyRequestT = Model::UpdateLifecyclePolicyRequest>
        void UpdateLifecyclePolicyAsync(const UpdateLifecyclePolicyRequestT& request, const UpdateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DLMClient::UpdateLifecyclePolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DLMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DLMClient>;
      void init(const DLMClientConfiguration& clientConfiguration);

      DLMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DLMEndpointProviderBase> m_endpointProvider;
  };

} // namespace DLM
} // namespace Aws
