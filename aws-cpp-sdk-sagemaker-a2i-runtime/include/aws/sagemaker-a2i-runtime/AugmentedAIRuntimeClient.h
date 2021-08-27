/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-a2i-runtime/model/DeleteHumanLoopResult.h>
#include <aws/sagemaker-a2i-runtime/model/DescribeHumanLoopResult.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsResult.h>
#include <aws/sagemaker-a2i-runtime/model/StartHumanLoopResult.h>
#include <aws/sagemaker-a2i-runtime/model/StopHumanLoopResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace AugmentedAIRuntime
{

namespace Model
{
        class DeleteHumanLoopRequest;
        class DescribeHumanLoopRequest;
        class ListHumanLoopsRequest;
        class StartHumanLoopRequest;
        class StopHumanLoopRequest;

        typedef Aws::Utils::Outcome<DeleteHumanLoopResult, AugmentedAIRuntimeError> DeleteHumanLoopOutcome;
        typedef Aws::Utils::Outcome<DescribeHumanLoopResult, AugmentedAIRuntimeError> DescribeHumanLoopOutcome;
        typedef Aws::Utils::Outcome<ListHumanLoopsResult, AugmentedAIRuntimeError> ListHumanLoopsOutcome;
        typedef Aws::Utils::Outcome<StartHumanLoopResult, AugmentedAIRuntimeError> StartHumanLoopOutcome;
        typedef Aws::Utils::Outcome<StopHumanLoopResult, AugmentedAIRuntimeError> StopHumanLoopOutcome;

        typedef std::future<DeleteHumanLoopOutcome> DeleteHumanLoopOutcomeCallable;
        typedef std::future<DescribeHumanLoopOutcome> DescribeHumanLoopOutcomeCallable;
        typedef std::future<ListHumanLoopsOutcome> ListHumanLoopsOutcomeCallable;
        typedef std::future<StartHumanLoopOutcome> StartHumanLoopOutcomeCallable;
        typedef std::future<StopHumanLoopOutcome> StopHumanLoopOutcomeCallable;
} // namespace Model

  class AugmentedAIRuntimeClient;

    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::DeleteHumanLoopRequest&, const Model::DeleteHumanLoopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHumanLoopResponseReceivedHandler;
    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::DescribeHumanLoopRequest&, const Model::DescribeHumanLoopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHumanLoopResponseReceivedHandler;
    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::ListHumanLoopsRequest&, const Model::ListHumanLoopsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHumanLoopsResponseReceivedHandler;
    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::StartHumanLoopRequest&, const Model::StartHumanLoopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartHumanLoopResponseReceivedHandler;
    typedef std::function<void(const AugmentedAIRuntimeClient*, const Model::StopHumanLoopRequest&, const Model::StopHumanLoopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopHumanLoopResponseReceivedHandler;

  /**
   *  <p>Amazon Augmented AI is in preview release and is subject to
   * change. We do not recommend using this product in production environments.</p>
   *  <p>Amazon Augmented AI (Amazon A2I) adds the benefit of human
   * judgment to any machine learning application. When an AI application can't
   * evaluate data with a high degree of confidence, human reviewers can take over.
   * This human review is called a human review workflow. To create and start a human
   * review workflow, you need three resources: a <i>worker task template</i>, a
   * <i>flow definition</i>, and a <i>human loop</i>.</p> <p>For information about
   * these resources and prerequisites for using Amazon A2I, see <a
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
  class AWS_AUGMENTEDAIRUNTIME_API AugmentedAIRuntimeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AugmentedAIRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AugmentedAIRuntimeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AugmentedAIRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AugmentedAIRuntimeClient();


        /**
         * <p>Deletes the specified human loop for a flow definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/DeleteHumanLoop">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHumanLoopOutcome DeleteHumanLoop(const Model::DeleteHumanLoopRequest& request) const;

        /**
         * <p>Deletes the specified human loop for a flow definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/DeleteHumanLoop">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHumanLoopOutcomeCallable DeleteHumanLoopCallable(const Model::DeleteHumanLoopRequest& request) const;

        /**
         * <p>Deletes the specified human loop for a flow definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/DeleteHumanLoop">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHumanLoopAsync(const Model::DeleteHumanLoopRequest& request, const DeleteHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified human loop.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/DescribeHumanLoop">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHumanLoopOutcome DescribeHumanLoop(const Model::DescribeHumanLoopRequest& request) const;

        /**
         * <p>Returns information about the specified human loop.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/DescribeHumanLoop">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHumanLoopOutcomeCallable DescribeHumanLoopCallable(const Model::DescribeHumanLoopRequest& request) const;

        /**
         * <p>Returns information about the specified human loop.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/DescribeHumanLoop">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about human loops, given the specified parameters. If a
         * human loop was deleted, it will not be included.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/ListHumanLoops">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHumanLoopsOutcomeCallable ListHumanLoopsCallable(const Model::ListHumanLoopsRequest& request) const;

        /**
         * <p>Returns information about human loops, given the specified parameters. If a
         * human loop was deleted, it will not be included.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/ListHumanLoops">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Starts a human loop, provided that at least one activation condition is
         * met.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/StartHumanLoop">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartHumanLoopOutcomeCallable StartHumanLoopCallable(const Model::StartHumanLoopRequest& request) const;

        /**
         * <p>Starts a human loop, provided that at least one activation condition is
         * met.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/StartHumanLoop">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartHumanLoopAsync(const Model::StartHumanLoopRequest& request, const StartHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the specified human loop.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/StopHumanLoop">AWS
         * API Reference</a></p>
         */
        virtual Model::StopHumanLoopOutcome StopHumanLoop(const Model::StopHumanLoopRequest& request) const;

        /**
         * <p>Stops the specified human loop.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/StopHumanLoop">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopHumanLoopOutcomeCallable StopHumanLoopCallable(const Model::StopHumanLoopRequest& request) const;

        /**
         * <p>Stops the specified human loop.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/StopHumanLoop">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopHumanLoopAsync(const Model::StopHumanLoopRequest& request, const StopHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteHumanLoopAsyncHelper(const Model::DeleteHumanLoopRequest& request, const DeleteHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHumanLoopAsyncHelper(const Model::DescribeHumanLoopRequest& request, const DescribeHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHumanLoopsAsyncHelper(const Model::ListHumanLoopsRequest& request, const ListHumanLoopsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartHumanLoopAsyncHelper(const Model::StartHumanLoopRequest& request, const StartHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopHumanLoopAsyncHelper(const Model::StopHumanLoopRequest& request, const StopHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AugmentedAIRuntime
} // namespace Aws
