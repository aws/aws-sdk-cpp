/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeServiceClientModel.h>

namespace Aws
{
namespace AugmentedAIRuntime
{
  /**
   * <p>Amazon Augmented AI (Amazon A2I) adds the benefit of human judgment to any
   * machine learning application. When an AI application can't evaluate data with a
   * high degree of confidence, human reviewers can take over. This human review is
   * called a human review workflow. To create and start a human review workflow, you
   * need three resources: a <i>worker task template</i>, a <i>flow definition</i>,
   * and a <i>human loop</i>.</p> <p>For information about these resources and
   * prerequisites for using Amazon A2I, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-getting-started.html">Get
   * Started with Amazon Augmented AI</a> in the Amazon SageMaker Developer
   * Guide.</p> <p>This API reference includes information about API actions and data
   * types that you can use to interact with Amazon A2I programmatically. Use this
   * guide to:</p> <ul> <li> <p>Start a human loop with the
   * <code>StartHumanLoop</code> operation when using Amazon A2I with a <i>custom
   * task type</i>. To learn more about the difference between custom and built-in
   * task types, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-task-types-general.html">Use
   * Task Types </a>. To learn how to start a human loop using this API, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-start-human-loop.html#a2i-instructions-starthumanloop">Create
   * and Start a Human Loop for a Custom Task Type </a> in the Amazon SageMaker
   * Developer Guide.</p> </li> <li> <p>Manage your human loops. You can list all
   * human loops that you have created, describe individual human loops, and stop and
   * delete human loops. To learn more, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-monitor-humanloop-results.html">Monitor
   * and Manage Your Human Loop </a> in the Amazon SageMaker Developer Guide.</p>
   * </li> </ul> <p>Amazon A2I integrates APIs from various AWS services to create
   * and start human review workflows for those services. To learn how Amazon A2I
   * uses these APIs, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-api-references.html">Use
   * APIs in Amazon A2I</a> in the Amazon SageMaker Developer Guide.</p>
   */
  class AWS_AUGMENTEDAIRUNTIME_API AugmentedAIRuntimeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AugmentedAIRuntimeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AugmentedAIRuntimeClient(const Aws::AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& clientConfiguration = Aws::AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration(),
                                 std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AugmentedAIRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& clientConfiguration = Aws::AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AugmentedAIRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& clientConfiguration = Aws::AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AugmentedAIRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AugmentedAIRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AugmentedAIRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AugmentedAIRuntimeClient();

        /**
         * <p>Deletes the specified human loop for a flow definition.</p> <p>If the human
         * loop was deleted, this operation will return a
         * <code>ResourceNotFoundException</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/DeleteHumanLoop">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHumanLoopOutcome DeleteHumanLoop(const Model::DeleteHumanLoopRequest& request) const;

        /**
         * A Callable wrapper for DeleteHumanLoop that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHumanLoopOutcomeCallable DeleteHumanLoopCallable(const Model::DeleteHumanLoopRequest& request) const;

        /**
         * An Async wrapper for DeleteHumanLoop that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHumanLoopAsync(const Model::DeleteHumanLoopRequest& request, const DeleteHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified human loop. If the human loop was
         * deleted, this operation will return a <code>ResourceNotFoundException</code>
         * error. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/DescribeHumanLoop">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHumanLoopOutcome DescribeHumanLoop(const Model::DescribeHumanLoopRequest& request) const;

        /**
         * A Callable wrapper for DescribeHumanLoop that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHumanLoopOutcomeCallable DescribeHumanLoopCallable(const Model::DescribeHumanLoopRequest& request) const;

        /**
         * An Async wrapper for DescribeHumanLoop that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHumanLoopAsync(const Model::DescribeHumanLoopRequest& request, const DescribeHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about human loops, given the specified parameters. If a
         * human loop was deleted, it will not be included.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/ListHumanLoops">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHumanLoopsOutcome ListHumanLoops(const Model::ListHumanLoopsRequest& request) const;

        /**
         * A Callable wrapper for ListHumanLoops that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHumanLoopsOutcomeCallable ListHumanLoopsCallable(const Model::ListHumanLoopsRequest& request) const;

        /**
         * An Async wrapper for ListHumanLoops that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHumanLoopsAsync(const Model::ListHumanLoopsRequest& request, const ListHumanLoopsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a human loop, provided that at least one activation condition is
         * met.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/StartHumanLoop">AWS
         * API Reference</a></p>
         */
        virtual Model::StartHumanLoopOutcome StartHumanLoop(const Model::StartHumanLoopRequest& request) const;

        /**
         * A Callable wrapper for StartHumanLoop that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartHumanLoopOutcomeCallable StartHumanLoopCallable(const Model::StartHumanLoopRequest& request) const;

        /**
         * An Async wrapper for StartHumanLoop that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartHumanLoopAsync(const Model::StartHumanLoopRequest& request, const StartHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the specified human loop.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/StopHumanLoop">AWS
         * API Reference</a></p>
         */
        virtual Model::StopHumanLoopOutcome StopHumanLoop(const Model::StopHumanLoopRequest& request) const;

        /**
         * A Callable wrapper for StopHumanLoop that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopHumanLoopOutcomeCallable StopHumanLoopCallable(const Model::StopHumanLoopRequest& request) const;

        /**
         * An Async wrapper for StopHumanLoop that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopHumanLoopAsync(const Model::StopHumanLoopRequest& request, const StopHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AugmentedAIRuntimeClient>;
      void init(const AugmentedAIRuntimeClientConfiguration& clientConfiguration);

      AugmentedAIRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace AugmentedAIRuntime
} // namespace Aws
