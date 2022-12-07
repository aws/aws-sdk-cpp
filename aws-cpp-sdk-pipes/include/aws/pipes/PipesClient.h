/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pipes/PipesServiceClientModel.h>

namespace Aws
{
namespace Pipes
{
  /**
   * <p>Amazon EventBridge Pipes connects event sources to targets. Pipes reduces the
   * need for specialized knowledge and integration code when developing event driven
   * architectures. This helps ensures consistency across your company’s
   * applications. With Pipes, the target can be any available EventBridge target. To
   * set up a pipe, you select the event source, add optional event filtering, define
   * optional enrichment, and select the target for the event data. </p>
   */
  class AWS_PIPES_API PipesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PipesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PipesClient(const Aws::Pipes::PipesClientConfiguration& clientConfiguration = Aws::Pipes::PipesClientConfiguration(),
                    std::shared_ptr<PipesEndpointProviderBase> endpointProvider = Aws::MakeShared<PipesEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PipesClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<PipesEndpointProviderBase> endpointProvider = Aws::MakeShared<PipesEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Pipes::PipesClientConfiguration& clientConfiguration = Aws::Pipes::PipesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PipesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<PipesEndpointProviderBase> endpointProvider = Aws::MakeShared<PipesEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Pipes::PipesClientConfiguration& clientConfiguration = Aws::Pipes::PipesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PipesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PipesClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PipesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PipesClient();

        /**
         * <p>Create a pipe. Amazon EventBridge Pipes connect event sources to targets and
         * reduces the need for specialized knowledge and integration code.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/CreatePipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipeOutcome CreatePipe(const Model::CreatePipeRequest& request) const;

        /**
         * A Callable wrapper for CreatePipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePipeOutcomeCallable CreatePipeCallable(const Model::CreatePipeRequest& request) const;

        /**
         * An Async wrapper for CreatePipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePipeAsync(const Model::CreatePipeRequest& request, const CreatePipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an existing pipe. For more information about pipes, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html">Amazon
         * EventBridge Pipes</a> in the Amazon EventBridge User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/DeletePipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipeOutcome DeletePipe(const Model::DeletePipeRequest& request) const;

        /**
         * A Callable wrapper for DeletePipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePipeOutcomeCallable DeletePipeCallable(const Model::DeletePipeRequest& request) const;

        /**
         * An Async wrapper for DeletePipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePipeAsync(const Model::DeletePipeRequest& request, const DeletePipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about an existing pipe. For more information about pipes,
         * see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html">Amazon
         * EventBridge Pipes</a> in the Amazon EventBridge User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/DescribePipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipeOutcome DescribePipe(const Model::DescribePipeRequest& request) const;

        /**
         * A Callable wrapper for DescribePipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePipeOutcomeCallable DescribePipeCallable(const Model::DescribePipeRequest& request) const;

        /**
         * An Async wrapper for DescribePipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePipeAsync(const Model::DescribePipeRequest& request, const DescribePipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the pipes associated with this account. For more information about pipes,
         * see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html">Amazon
         * EventBridge Pipes</a> in the Amazon EventBridge User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/ListPipes">AWS API
         * Reference</a></p>
         */
        virtual Model::ListPipesOutcome ListPipes(const Model::ListPipesRequest& request) const;

        /**
         * A Callable wrapper for ListPipes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipesOutcomeCallable ListPipesCallable(const Model::ListPipesRequest& request) const;

        /**
         * An Async wrapper for ListPipes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipesAsync(const Model::ListPipesRequest& request, const ListPipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with a pipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/ListTagsForResource">AWS
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
         * <p>Start an existing pipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/StartPipe">AWS API
         * Reference</a></p>
         */
        virtual Model::StartPipeOutcome StartPipe(const Model::StartPipeRequest& request) const;

        /**
         * A Callable wrapper for StartPipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPipeOutcomeCallable StartPipeCallable(const Model::StartPipeRequest& request) const;

        /**
         * An Async wrapper for StartPipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPipeAsync(const Model::StartPipeRequest& request, const StartPipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stop an existing pipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/StopPipe">AWS API
         * Reference</a></p>
         */
        virtual Model::StopPipeOutcome StopPipe(const Model::StopPipeRequest& request) const;

        /**
         * A Callable wrapper for StopPipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopPipeOutcomeCallable StopPipeCallable(const Model::StopPipeRequest& request) const;

        /**
         * An Async wrapper for StopPipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopPipeAsync(const Model::StopPipeRequest& request, const StopPipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified pipe. Tags can
         * help you organize and categorize your resources. You can also use them to scope
         * user permissions by granting a user permission to access or change only
         * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
         * to Amazon Web Services and are interpreted strictly as strings of
         * characters.</p> <p>You can use the <code>TagResource</code> action with a pipe
         * that already has tags. If you specify a new tag key, this tag is appended to the
         * list of tags associated with the pipe. If you specify a tag key that is already
         * associated with the pipe, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * pipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/TagResource">AWS
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
         * <p>Removes one or more tags from the specified pipes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/UntagResource">AWS
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
         * <p>Update an existing pipe. When you call <code>UpdatePipe</code>, only the
         * fields that are included in the request are changed, the rest are unchanged. The
         * exception to this is if you modify any Amazon Web Services-service specific
         * fields in the <code>SourceParameters</code>, <code>EnrichmentParameters</code>,
         * or <code>TargetParameters</code> objects. The fields in these objects are
         * updated atomically as one and override existing values. This is by design and
         * means that if you don't specify an optional field in one of these Parameters
         * objects, that field will be set to its system-default value after the
         * update.</p> <pre><code> &lt;p&gt;For more information about pipes, see &lt;a
         * href=&quot;https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html&quot;&gt;
         * Amazon EventBridge Pipes&lt;/a&gt; in the Amazon EventBridge User
         * Guide.&lt;/p&gt; </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/UpdatePipe">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipeOutcome UpdatePipe(const Model::UpdatePipeRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipeOutcomeCallable UpdatePipeCallable(const Model::UpdatePipeRequest& request) const;

        /**
         * An Async wrapper for UpdatePipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipeAsync(const Model::UpdatePipeRequest& request, const UpdatePipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PipesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PipesClient>;
      void init(const PipesClientConfiguration& clientConfiguration);

      PipesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PipesEndpointProviderBase> m_endpointProvider;
  };

} // namespace Pipes
} // namespace Aws
