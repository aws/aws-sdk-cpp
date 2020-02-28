/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        typedef Aws::Utils::Outcome<DeleteHumanLoopResult, Aws::Client::AWSError<AugmentedAIRuntimeErrors>> DeleteHumanLoopOutcome;
        typedef Aws::Utils::Outcome<DescribeHumanLoopResult, Aws::Client::AWSError<AugmentedAIRuntimeErrors>> DescribeHumanLoopOutcome;
        typedef Aws::Utils::Outcome<ListHumanLoopsResult, Aws::Client::AWSError<AugmentedAIRuntimeErrors>> ListHumanLoopsOutcome;
        typedef Aws::Utils::Outcome<StartHumanLoopResult, Aws::Client::AWSError<AugmentedAIRuntimeErrors>> StartHumanLoopOutcome;
        typedef Aws::Utils::Outcome<StopHumanLoopResult, Aws::Client::AWSError<AugmentedAIRuntimeErrors>> StopHumanLoopOutcome;

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
   * <p>Amazon Augmented AI (Augmented AI) (Preview) is a service that adds human
   * judgment to any machine learning application. Human reviewers can take over when
   * an AI application can't evaluate data with a high degree of confidence.</p>
   * <p>From fraudulent bank transaction identification to document processing to
   * image analysis, machine learning models can be trained to make decisions as well
   * as or better than a human. Nevertheless, some decisions require contextual
   * interpretation, such as when you need to decide whether an image is appropriate
   * for a given audience. Content moderation guidelines are nuanced and highly
   * dependent on context, and they vary between countries. When trying to apply AI
   * in these situations, you can be forced to choose between "ML only" systems with
   * unacceptably high error rates or "human only" systems that are expensive and
   * difficult to scale, and that slow down decision making.</p> <p>This API
   * reference includes information about API actions and data types you can use to
   * interact with Augmented AI programmatically. </p> <p>You can create a flow
   * definition against the Augmented AI API. Provide the Amazon Resource Name (ARN)
   * of a flow definition to integrate AI service APIs, such as
   * <code>Textract.AnalyzeDocument</code> and
   * <code>Rekognition.DetectModerationLabels</code>. These AI services, in turn,
   * invoke the <a>StartHumanLoop</a> API, which evaluates conditions under which
   * humans will be invoked. If humans are required, Augmented AI creates a human
   * loop. Results of human work are available asynchronously in Amazon Simple
   * Storage Service (Amazon S3). You can use Amazon CloudWatch Events to detect
   * human work results.</p> <p>You can find additional Augmented AI API
   * documentation in the following reference guides: <a
   * href="https://docs.aws.amazon.com/rekognition/latest/dg/API_Reference.html">Amazon
   * Rekognition</a>, <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_Reference.html">Amazon
   * SageMaker</a>, and <a
   * href="https://docs.aws.amazon.com/textract/latest/dg/API_Reference.html">Amazon
   * Textract</a>.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "SageMaker A2I Runtime"; }


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
