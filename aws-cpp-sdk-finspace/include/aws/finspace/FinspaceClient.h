/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/finspace/FinspaceServiceClientModel.h>

namespace Aws
{
namespace finspace
{
  /**
   * <p>The FinSpace management service provides the APIs for managing FinSpace
   * environments.</p>
   */
  class AWS_FINSPACE_API FinspaceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FinspaceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::finspace::FinspaceClientConfiguration& clientConfiguration = Aws::finspace::FinspaceClientConfiguration(),
                       std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider = Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider = Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
                       const Aws::finspace::FinspaceClientConfiguration& clientConfiguration = Aws::finspace::FinspaceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinspaceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider = Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
                       const Aws::finspace::FinspaceClientConfiguration& clientConfiguration = Aws::finspace::FinspaceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinspaceClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinspaceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FinspaceClient();

        /**
         * <p>Create a new FinSpace environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an FinSpace environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the FinSpace environment object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const Model::GetEnvironmentRequest& request) const;

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnvironmentAsync(const Model::GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of all of your FinSpace environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const Model::ListEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentsAsync(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of all tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ListTagsForResource">AWS
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
         * <p>Adds metadata tags to a FinSpace resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/TagResource">AWS
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
         * <p>Removes metadata tags from a FinSpace resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UntagResource">AWS
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
         * <p>Update your FinSpace environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FinspaceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FinspaceClient>;
      void init(const FinspaceClientConfiguration& clientConfiguration);

      FinspaceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FinspaceEndpointProviderBase> m_endpointProvider;
  };

} // namespace finspace
} // namespace Aws
