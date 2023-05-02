﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloud9/Cloud9ServiceClientModel.h>

namespace Aws
{
namespace Cloud9
{
  /**
   * <fullname>Cloud9</fullname> <p>Cloud9 is a collection of tools that you can use
   * to code, build, run, test, debug, and release software in the cloud.</p> <p>For
   * more information about Cloud9, see the <a
   * href="https://docs.aws.amazon.com/cloud9/latest/user-guide">Cloud9 User
   * Guide</a>.</p> <p>Cloud9 supports these operations:</p> <ul> <li> <p>
   * <code>CreateEnvironmentEC2</code>: Creates an Cloud9 development environment,
   * launches an Amazon EC2 instance, and then connects from the instance to the
   * environment.</p> </li> <li> <p> <code>CreateEnvironmentMembership</code>: Adds
   * an environment member to an environment.</p> </li> <li> <p>
   * <code>DeleteEnvironment</code>: Deletes an environment. If an Amazon EC2
   * instance is connected to the environment, also terminates the instance.</p>
   * </li> <li> <p> <code>DeleteEnvironmentMembership</code>: Deletes an environment
   * member from an environment.</p> </li> <li> <p>
   * <code>DescribeEnvironmentMemberships</code>: Gets information about environment
   * members for an environment.</p> </li> <li> <p>
   * <code>DescribeEnvironments</code>: Gets information about environments.</p>
   * </li> <li> <p> <code>DescribeEnvironmentStatus</code>: Gets status information
   * for an environment.</p> </li> <li> <p> <code>ListEnvironments</code>: Gets a
   * list of environment identifiers.</p> </li> <li> <p>
   * <code>ListTagsForResource</code>: Gets the tags for an environment.</p> </li>
   * <li> <p> <code>TagResource</code>: Adds tags to an environment.</p> </li> <li>
   * <p> <code>UntagResource</code>: Removes tags from an environment.</p> </li> <li>
   * <p> <code>UpdateEnvironment</code>: Changes the settings of an existing
   * environment.</p> </li> <li> <p> <code>UpdateEnvironmentMembership</code>:
   * Changes the settings of an existing environment member for an environment.</p>
   * </li> </ul>
   */
  class AWS_CLOUD9_API Cloud9Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Cloud9Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef Cloud9ClientConfiguration ClientConfigurationType;
      typedef Cloud9EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Cloud9::Cloud9ClientConfiguration& clientConfiguration = Aws::Cloud9::Cloud9ClientConfiguration(),
                     std::shared_ptr<Cloud9EndpointProviderBase> endpointProvider = Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<Cloud9EndpointProviderBase> endpointProvider = Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG),
                     const Aws::Cloud9::Cloud9ClientConfiguration& clientConfiguration = Aws::Cloud9::Cloud9ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Cloud9Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<Cloud9EndpointProviderBase> endpointProvider = Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG),
                     const Aws::Cloud9::Cloud9ClientConfiguration& clientConfiguration = Aws::Cloud9::Cloud9ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Cloud9Client(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Cloud9Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Cloud9Client();

        /**
         * <p>Creates an Cloud9 development environment, launches an Amazon Elastic Compute
         * Cloud (Amazon EC2) instance, and then connects from the instance to the
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentEC2">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentEC2Outcome CreateEnvironmentEC2(const Model::CreateEnvironmentEC2Request& request) const;

        /**
         * A Callable wrapper for CreateEnvironmentEC2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentEC2RequestT = Model::CreateEnvironmentEC2Request>
        Model::CreateEnvironmentEC2OutcomeCallable CreateEnvironmentEC2Callable(const CreateEnvironmentEC2RequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::CreateEnvironmentEC2, request);
        }

        /**
         * An Async wrapper for CreateEnvironmentEC2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentEC2RequestT = Model::CreateEnvironmentEC2Request>
        void CreateEnvironmentEC2Async(const CreateEnvironmentEC2RequestT& request, const CreateEnvironmentEC2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::CreateEnvironmentEC2, request, handler, context);
        }

        /**
         * <p>Adds an environment member to an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/CreateEnvironmentMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentMembershipOutcome CreateEnvironmentMembership(const Model::CreateEnvironmentMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironmentMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentMembershipRequestT = Model::CreateEnvironmentMembershipRequest>
        Model::CreateEnvironmentMembershipOutcomeCallable CreateEnvironmentMembershipCallable(const CreateEnvironmentMembershipRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::CreateEnvironmentMembership, request);
        }

        /**
         * An Async wrapper for CreateEnvironmentMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentMembershipRequestT = Model::CreateEnvironmentMembershipRequest>
        void CreateEnvironmentMembershipAsync(const CreateEnvironmentMembershipRequestT& request, const CreateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::CreateEnvironmentMembership, request, handler, context);
        }

        /**
         * <p>Deletes an Cloud9 development environment. If an Amazon EC2 instance is
         * connected to the environment, also terminates the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::DeleteEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::DeleteEnvironment, request, handler, context);
        }

        /**
         * <p>Deletes an environment member from a development environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DeleteEnvironmentMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentMembershipOutcome DeleteEnvironmentMembership(const Model::DeleteEnvironmentMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentMembershipRequestT = Model::DeleteEnvironmentMembershipRequest>
        Model::DeleteEnvironmentMembershipOutcomeCallable DeleteEnvironmentMembershipCallable(const DeleteEnvironmentMembershipRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::DeleteEnvironmentMembership, request);
        }

        /**
         * An Async wrapper for DeleteEnvironmentMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentMembershipRequestT = Model::DeleteEnvironmentMembershipRequest>
        void DeleteEnvironmentMembershipAsync(const DeleteEnvironmentMembershipRequestT& request, const DeleteEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::DeleteEnvironmentMembership, request, handler, context);
        }

        /**
         * <p>Gets information about environment members for an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentMembershipsOutcome DescribeEnvironmentMemberships(const Model::DescribeEnvironmentMembershipsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironmentMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEnvironmentMembershipsRequestT = Model::DescribeEnvironmentMembershipsRequest>
        Model::DescribeEnvironmentMembershipsOutcomeCallable DescribeEnvironmentMembershipsCallable(const DescribeEnvironmentMembershipsRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::DescribeEnvironmentMemberships, request);
        }

        /**
         * An Async wrapper for DescribeEnvironmentMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEnvironmentMembershipsRequestT = Model::DescribeEnvironmentMembershipsRequest>
        void DescribeEnvironmentMembershipsAsync(const DescribeEnvironmentMembershipsRequestT& request, const DescribeEnvironmentMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::DescribeEnvironmentMemberships, request, handler, context);
        }

        /**
         * <p>Gets status information for an Cloud9 development environment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentStatusOutcome DescribeEnvironmentStatus(const Model::DescribeEnvironmentStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironmentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEnvironmentStatusRequestT = Model::DescribeEnvironmentStatusRequest>
        Model::DescribeEnvironmentStatusOutcomeCallable DescribeEnvironmentStatusCallable(const DescribeEnvironmentStatusRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::DescribeEnvironmentStatus, request);
        }

        /**
         * An Async wrapper for DescribeEnvironmentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEnvironmentStatusRequestT = Model::DescribeEnvironmentStatusRequest>
        void DescribeEnvironmentStatusAsync(const DescribeEnvironmentStatusRequestT& request, const DescribeEnvironmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::DescribeEnvironmentStatus, request, handler, context);
        }

        /**
         * <p>Gets information about Cloud9 development environments.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/DescribeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEnvironmentsRequestT = Model::DescribeEnvironmentsRequest>
        Model::DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const DescribeEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::DescribeEnvironments, request);
        }

        /**
         * An Async wrapper for DescribeEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEnvironmentsRequestT = Model::DescribeEnvironmentsRequest>
        void DescribeEnvironmentsAsync(const DescribeEnvironmentsRequestT& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::DescribeEnvironments, request, handler, context);
        }

        /**
         * <p>Gets a list of Cloud9 development environment identifiers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::ListEnvironments, request);
        }

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        void ListEnvironmentsAsync(const ListEnvironmentsRequestT& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::ListEnvironments, request, handler, context);
        }

        /**
         * <p>Gets a list of the tags associated with an Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds tags to an Cloud9 development environment.</p>  <p>Tags that
         * you add to an Cloud9 environment by using this method will NOT be automatically
         * propagated to underlying resources.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from an Cloud9 development environment.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Changes the settings of an existing Cloud9 development
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const UpdateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::UpdateEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        void UpdateEnvironmentAsync(const UpdateEnvironmentRequestT& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::UpdateEnvironment, request, handler, context);
        }

        /**
         * <p>Changes the settings of an existing environment member for an Cloud9
         * development environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/UpdateEnvironmentMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentMembershipOutcome UpdateEnvironmentMembership(const Model::UpdateEnvironmentMembershipRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironmentMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentMembershipRequestT = Model::UpdateEnvironmentMembershipRequest>
        Model::UpdateEnvironmentMembershipOutcomeCallable UpdateEnvironmentMembershipCallable(const UpdateEnvironmentMembershipRequestT& request) const
        {
            return SubmitCallable(&Cloud9Client::UpdateEnvironmentMembership, request);
        }

        /**
         * An Async wrapper for UpdateEnvironmentMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentMembershipRequestT = Model::UpdateEnvironmentMembershipRequest>
        void UpdateEnvironmentMembershipAsync(const UpdateEnvironmentMembershipRequestT& request, const UpdateEnvironmentMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Cloud9Client::UpdateEnvironmentMembership, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Cloud9EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Cloud9Client>;
      void init(const Cloud9ClientConfiguration& clientConfiguration);

      Cloud9ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Cloud9EndpointProviderBase> m_endpointProvider;
  };

} // namespace Cloud9
} // namespace Aws
