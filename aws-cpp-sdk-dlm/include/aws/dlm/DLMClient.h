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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DLMClient(const Aws::DLM::DLMClientConfiguration& clientConfiguration = Aws::DLM::DLMClientConfiguration(),
                  std::shared_ptr<DLMEndpointProviderBase> endpointProvider = Aws::MakeShared<DLMEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DLMClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<DLMEndpointProviderBase> endpointProvider = Aws::MakeShared<DLMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::DLM::DLMClientConfiguration& clientConfiguration = Aws::DLM::DLMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DLMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<DLMEndpointProviderBase> endpointProvider = Aws::MakeShared<DLMEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Creates a policy to manage the lifecycle of the specified Amazon Web Services
         * resources. You can create up to 100 lifecycle policies.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CreateLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLifecyclePolicyOutcome CreateLifecyclePolicy(const Model::CreateLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLifecyclePolicyOutcomeCallable CreateLifecyclePolicyCallable(const Model::CreateLifecyclePolicyRequest& request) const;

        /**
         * An Async wrapper for CreateLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLifecyclePolicyAsync(const Model::CreateLifecyclePolicyRequest& request, const CreateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteLifecyclePolicyOutcomeCallable DeleteLifecyclePolicyCallable(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLifecyclePolicyAsync(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about all or the specified data lifecycle
         * policies.</p> <p>To get complete information about a policy, use
         * <a>GetLifecyclePolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/GetLifecyclePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePoliciesOutcome GetLifecyclePolicies(const Model::GetLifecyclePoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetLifecyclePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLifecyclePoliciesOutcomeCallable GetLifecyclePoliciesCallable(const Model::GetLifecyclePoliciesRequest& request) const;

        /**
         * An Async wrapper for GetLifecyclePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLifecyclePoliciesAsync(const Model::GetLifecyclePoliciesRequest& request, const GetLifecyclePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetLifecyclePolicyOutcomeCallable GetLifecyclePolicyCallable(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * An Async wrapper for GetLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLifecyclePolicyAsync(const Model::GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateLifecyclePolicyOutcomeCallable UpdateLifecyclePolicyCallable(const Model::UpdateLifecyclePolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLifecyclePolicyAsync(const Model::UpdateLifecyclePolicyRequest& request, const UpdateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
