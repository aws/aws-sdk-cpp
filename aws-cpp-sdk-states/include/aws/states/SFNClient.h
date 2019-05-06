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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/states/model/CreateActivityResult.h>
#include <aws/states/model/CreateStateMachineResult.h>
#include <aws/states/model/DeleteActivityResult.h>
#include <aws/states/model/DeleteStateMachineResult.h>
#include <aws/states/model/DescribeActivityResult.h>
#include <aws/states/model/DescribeExecutionResult.h>
#include <aws/states/model/DescribeStateMachineResult.h>
#include <aws/states/model/DescribeStateMachineForExecutionResult.h>
#include <aws/states/model/GetActivityTaskResult.h>
#include <aws/states/model/GetExecutionHistoryResult.h>
#include <aws/states/model/ListActivitiesResult.h>
#include <aws/states/model/ListExecutionsResult.h>
#include <aws/states/model/ListStateMachinesResult.h>
#include <aws/states/model/ListTagsForResourceResult.h>
#include <aws/states/model/SendTaskFailureResult.h>
#include <aws/states/model/SendTaskHeartbeatResult.h>
#include <aws/states/model/SendTaskSuccessResult.h>
#include <aws/states/model/StartExecutionResult.h>
#include <aws/states/model/StopExecutionResult.h>
#include <aws/states/model/TagResourceResult.h>
#include <aws/states/model/UntagResourceResult.h>
#include <aws/states/model/UpdateStateMachineResult.h>
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

namespace SFN
{

namespace Model
{
        class CreateActivityRequest;
        class CreateStateMachineRequest;
        class DeleteActivityRequest;
        class DeleteStateMachineRequest;
        class DescribeActivityRequest;
        class DescribeExecutionRequest;
        class DescribeStateMachineRequest;
        class DescribeStateMachineForExecutionRequest;
        class GetActivityTaskRequest;
        class GetExecutionHistoryRequest;
        class ListActivitiesRequest;
        class ListExecutionsRequest;
        class ListStateMachinesRequest;
        class ListTagsForResourceRequest;
        class SendTaskFailureRequest;
        class SendTaskHeartbeatRequest;
        class SendTaskSuccessRequest;
        class StartExecutionRequest;
        class StopExecutionRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateStateMachineRequest;

        typedef Aws::Utils::Outcome<CreateActivityResult, Aws::Client::AWSError<SFNErrors>> CreateActivityOutcome;
        typedef Aws::Utils::Outcome<CreateStateMachineResult, Aws::Client::AWSError<SFNErrors>> CreateStateMachineOutcome;
        typedef Aws::Utils::Outcome<DeleteActivityResult, Aws::Client::AWSError<SFNErrors>> DeleteActivityOutcome;
        typedef Aws::Utils::Outcome<DeleteStateMachineResult, Aws::Client::AWSError<SFNErrors>> DeleteStateMachineOutcome;
        typedef Aws::Utils::Outcome<DescribeActivityResult, Aws::Client::AWSError<SFNErrors>> DescribeActivityOutcome;
        typedef Aws::Utils::Outcome<DescribeExecutionResult, Aws::Client::AWSError<SFNErrors>> DescribeExecutionOutcome;
        typedef Aws::Utils::Outcome<DescribeStateMachineResult, Aws::Client::AWSError<SFNErrors>> DescribeStateMachineOutcome;
        typedef Aws::Utils::Outcome<DescribeStateMachineForExecutionResult, Aws::Client::AWSError<SFNErrors>> DescribeStateMachineForExecutionOutcome;
        typedef Aws::Utils::Outcome<GetActivityTaskResult, Aws::Client::AWSError<SFNErrors>> GetActivityTaskOutcome;
        typedef Aws::Utils::Outcome<GetExecutionHistoryResult, Aws::Client::AWSError<SFNErrors>> GetExecutionHistoryOutcome;
        typedef Aws::Utils::Outcome<ListActivitiesResult, Aws::Client::AWSError<SFNErrors>> ListActivitiesOutcome;
        typedef Aws::Utils::Outcome<ListExecutionsResult, Aws::Client::AWSError<SFNErrors>> ListExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListStateMachinesResult, Aws::Client::AWSError<SFNErrors>> ListStateMachinesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<SFNErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<SendTaskFailureResult, Aws::Client::AWSError<SFNErrors>> SendTaskFailureOutcome;
        typedef Aws::Utils::Outcome<SendTaskHeartbeatResult, Aws::Client::AWSError<SFNErrors>> SendTaskHeartbeatOutcome;
        typedef Aws::Utils::Outcome<SendTaskSuccessResult, Aws::Client::AWSError<SFNErrors>> SendTaskSuccessOutcome;
        typedef Aws::Utils::Outcome<StartExecutionResult, Aws::Client::AWSError<SFNErrors>> StartExecutionOutcome;
        typedef Aws::Utils::Outcome<StopExecutionResult, Aws::Client::AWSError<SFNErrors>> StopExecutionOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<SFNErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<SFNErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateStateMachineResult, Aws::Client::AWSError<SFNErrors>> UpdateStateMachineOutcome;

        typedef std::future<CreateActivityOutcome> CreateActivityOutcomeCallable;
        typedef std::future<CreateStateMachineOutcome> CreateStateMachineOutcomeCallable;
        typedef std::future<DeleteActivityOutcome> DeleteActivityOutcomeCallable;
        typedef std::future<DeleteStateMachineOutcome> DeleteStateMachineOutcomeCallable;
        typedef std::future<DescribeActivityOutcome> DescribeActivityOutcomeCallable;
        typedef std::future<DescribeExecutionOutcome> DescribeExecutionOutcomeCallable;
        typedef std::future<DescribeStateMachineOutcome> DescribeStateMachineOutcomeCallable;
        typedef std::future<DescribeStateMachineForExecutionOutcome> DescribeStateMachineForExecutionOutcomeCallable;
        typedef std::future<GetActivityTaskOutcome> GetActivityTaskOutcomeCallable;
        typedef std::future<GetExecutionHistoryOutcome> GetExecutionHistoryOutcomeCallable;
        typedef std::future<ListActivitiesOutcome> ListActivitiesOutcomeCallable;
        typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
        typedef std::future<ListStateMachinesOutcome> ListStateMachinesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<SendTaskFailureOutcome> SendTaskFailureOutcomeCallable;
        typedef std::future<SendTaskHeartbeatOutcome> SendTaskHeartbeatOutcomeCallable;
        typedef std::future<SendTaskSuccessOutcome> SendTaskSuccessOutcomeCallable;
        typedef std::future<StartExecutionOutcome> StartExecutionOutcomeCallable;
        typedef std::future<StopExecutionOutcome> StopExecutionOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateStateMachineOutcome> UpdateStateMachineOutcomeCallable;
} // namespace Model

  class SFNClient;

    typedef std::function<void(const SFNClient*, const Model::CreateActivityRequest&, const Model::CreateActivityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActivityResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::CreateStateMachineRequest&, const Model::CreateStateMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStateMachineResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DeleteActivityRequest&, const Model::DeleteActivityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActivityResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DeleteStateMachineRequest&, const Model::DeleteStateMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStateMachineResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DescribeActivityRequest&, const Model::DescribeActivityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActivityResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DescribeExecutionRequest&, const Model::DescribeExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExecutionResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DescribeStateMachineRequest&, const Model::DescribeStateMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStateMachineResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DescribeStateMachineForExecutionRequest&, const Model::DescribeStateMachineForExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStateMachineForExecutionResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::GetActivityTaskRequest&, const Model::GetActivityTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetActivityTaskResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::GetExecutionHistoryRequest&, const Model::GetExecutionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExecutionHistoryResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::ListActivitiesRequest&, const Model::ListActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActivitiesResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::ListExecutionsRequest&, const Model::ListExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExecutionsResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::ListStateMachinesRequest&, const Model::ListStateMachinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStateMachinesResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::SendTaskFailureRequest&, const Model::SendTaskFailureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTaskFailureResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::SendTaskHeartbeatRequest&, const Model::SendTaskHeartbeatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTaskHeartbeatResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::SendTaskSuccessRequest&, const Model::SendTaskSuccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTaskSuccessResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::StartExecutionRequest&, const Model::StartExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExecutionResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::StopExecutionRequest&, const Model::StopExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopExecutionResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::UpdateStateMachineRequest&, const Model::UpdateStateMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStateMachineResponseReceivedHandler;

  /**
   * <fullname>AWS Step Functions</fullname> <p>AWS Step Functions is a service that
   * lets you coordinate the components of distributed applications and microservices
   * using visual workflows.</p> <p>You can use Step Functions to build applications
   * from individual components, each of which performs a discrete function, or
   * <i>task</i>, allowing you to scale and change applications quickly. Step
   * Functions provides a console that helps visualize the components of your
   * application as a series of steps. Step Functions automatically triggers and
   * tracks each step, and retries steps when there are errors, so your application
   * executes predictably and in the right order every time. Step Functions logs the
   * state of each step, so you can quickly diagnose and debug any issues.</p>
   * <p>Step Functions manages operations and underlying infrastructure to ensure
   * your application is available at any scale. You can run tasks on AWS, your own
   * servers, or any system that has access to AWS. You can access and use Step
   * Functions using the console, the AWS SDKs, or an HTTP API. For more information
   * about Step Functions, see the <i> <a
   * href="https://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS
   * Step Functions Developer Guide</a> </i>.</p>
   */
  class AWS_SFN_API SFNClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SFNClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SFNClient();

        inline virtual const char* GetServiceClientName() const override { return "SFN"; }


        /**
         * <p>Creates an activity. An activity is a task that you write in any programming
         * language and host on any machine that has access to AWS Step Functions.
         * Activities must poll Step Functions using the <code>GetActivityTask</code> API
         * action and respond using <code>SendTask*</code> API actions. This function lets
         * Step Functions know the existence of your activity and returns an identifier for
         * use in a state machine and when polling from the activity.</p> <note> <p>This
         * operation is eventually consistent. The results are best effort and may not
         * reflect very recent updates and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActivityOutcome CreateActivity(const Model::CreateActivityRequest& request) const;

        /**
         * <p>Creates an activity. An activity is a task that you write in any programming
         * language and host on any machine that has access to AWS Step Functions.
         * Activities must poll Step Functions using the <code>GetActivityTask</code> API
         * action and respond using <code>SendTask*</code> API actions. This function lets
         * Step Functions know the existence of your activity and returns an identifier for
         * use in a state machine and when polling from the activity.</p> <note> <p>This
         * operation is eventually consistent. The results are best effort and may not
         * reflect very recent updates and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateActivity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateActivityOutcomeCallable CreateActivityCallable(const Model::CreateActivityRequest& request) const;

        /**
         * <p>Creates an activity. An activity is a task that you write in any programming
         * language and host on any machine that has access to AWS Step Functions.
         * Activities must poll Step Functions using the <code>GetActivityTask</code> API
         * action and respond using <code>SendTask*</code> API actions. This function lets
         * Step Functions know the existence of your activity and returns an identifier for
         * use in a state machine and when polling from the activity.</p> <note> <p>This
         * operation is eventually consistent. The results are best effort and may not
         * reflect very recent updates and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateActivity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateActivityAsync(const Model::CreateActivityRequest& request, const CreateActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a state machine. A state machine consists of a collection of states
         * that can do work (<code>Task</code> states), determine to which states to
         * transition next (<code>Choice</code> states), stop an execution with an error
         * (<code>Fail</code> states), and so on. State machines are specified using a
         * JSON-based, structured language.</p> <note> <p>This operation is eventually
         * consistent. The results are best effort and may not reflect very recent updates
         * and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStateMachineOutcome CreateStateMachine(const Model::CreateStateMachineRequest& request) const;

        /**
         * <p>Creates a state machine. A state machine consists of a collection of states
         * that can do work (<code>Task</code> states), determine to which states to
         * transition next (<code>Choice</code> states), stop an execution with an error
         * (<code>Fail</code> states), and so on. State machines are specified using a
         * JSON-based, structured language.</p> <note> <p>This operation is eventually
         * consistent. The results are best effort and may not reflect very recent updates
         * and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateStateMachine">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStateMachineOutcomeCallable CreateStateMachineCallable(const Model::CreateStateMachineRequest& request) const;

        /**
         * <p>Creates a state machine. A state machine consists of a collection of states
         * that can do work (<code>Task</code> states), determine to which states to
         * transition next (<code>Choice</code> states), stop an execution with an error
         * (<code>Fail</code> states), and so on. State machines are specified using a
         * JSON-based, structured language.</p> <note> <p>This operation is eventually
         * consistent. The results are best effort and may not reflect very recent updates
         * and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateStateMachine">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStateMachineAsync(const Model::CreateStateMachineRequest& request, const CreateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActivityOutcome DeleteActivity(const Model::DeleteActivityRequest& request) const;

        /**
         * <p>Deletes an activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteActivity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteActivityOutcomeCallable DeleteActivityCallable(const Model::DeleteActivityRequest& request) const;

        /**
         * <p>Deletes an activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteActivity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteActivityAsync(const Model::DeleteActivityRequest& request, const DeleteActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a state machine. This is an asynchronous operation: It sets the state
         * machine's status to <code>DELETING</code> and begins the deletion process. Each
         * state machine execution is deleted the next time it makes a state
         * transition.</p> <note> <p>The state machine itself is deleted after all
         * executions are completed or deleted.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStateMachineOutcome DeleteStateMachine(const Model::DeleteStateMachineRequest& request) const;

        /**
         * <p>Deletes a state machine. This is an asynchronous operation: It sets the state
         * machine's status to <code>DELETING</code> and begins the deletion process. Each
         * state machine execution is deleted the next time it makes a state
         * transition.</p> <note> <p>The state machine itself is deleted after all
         * executions are completed or deleted.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteStateMachine">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStateMachineOutcomeCallable DeleteStateMachineCallable(const Model::DeleteStateMachineRequest& request) const;

        /**
         * <p>Deletes a state machine. This is an asynchronous operation: It sets the state
         * machine's status to <code>DELETING</code> and begins the deletion process. Each
         * state machine execution is deleted the next time it makes a state
         * transition.</p> <note> <p>The state machine itself is deleted after all
         * executions are completed or deleted.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteStateMachine">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStateMachineAsync(const Model::DeleteStateMachineRequest& request, const DeleteStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an activity.</p> <note> <p>This operation is eventually consistent.
         * The results are best effort and may not reflect very recent updates and
         * changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivityOutcome DescribeActivity(const Model::DescribeActivityRequest& request) const;

        /**
         * <p>Describes an activity.</p> <note> <p>This operation is eventually consistent.
         * The results are best effort and may not reflect very recent updates and
         * changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeActivity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActivityOutcomeCallable DescribeActivityCallable(const Model::DescribeActivityRequest& request) const;

        /**
         * <p>Describes an activity.</p> <note> <p>This operation is eventually consistent.
         * The results are best effort and may not reflect very recent updates and
         * changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeActivity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActivityAsync(const Model::DescribeActivityRequest& request, const DescribeActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an execution.</p> <note> <p>This operation is eventually
         * consistent. The results are best effort and may not reflect very recent updates
         * and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExecutionOutcome DescribeExecution(const Model::DescribeExecutionRequest& request) const;

        /**
         * <p>Describes an execution.</p> <note> <p>This operation is eventually
         * consistent. The results are best effort and may not reflect very recent updates
         * and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExecutionOutcomeCallable DescribeExecutionCallable(const Model::DescribeExecutionRequest& request) const;

        /**
         * <p>Describes an execution.</p> <note> <p>This operation is eventually
         * consistent. The results are best effort and may not reflect very recent updates
         * and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExecutionAsync(const Model::DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a state machine.</p> <note> <p>This operation is eventually
         * consistent. The results are best effort and may not reflect very recent updates
         * and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStateMachineOutcome DescribeStateMachine(const Model::DescribeStateMachineRequest& request) const;

        /**
         * <p>Describes a state machine.</p> <note> <p>This operation is eventually
         * consistent. The results are best effort and may not reflect very recent updates
         * and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachine">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStateMachineOutcomeCallable DescribeStateMachineCallable(const Model::DescribeStateMachineRequest& request) const;

        /**
         * <p>Describes a state machine.</p> <note> <p>This operation is eventually
         * consistent. The results are best effort and may not reflect very recent updates
         * and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachine">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStateMachineAsync(const Model::DescribeStateMachineRequest& request, const DescribeStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the state machine associated with a specific execution.</p> <note>
         * <p>This operation is eventually consistent. The results are best effort and may
         * not reflect very recent updates and changes.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachineForExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStateMachineForExecutionOutcome DescribeStateMachineForExecution(const Model::DescribeStateMachineForExecutionRequest& request) const;

        /**
         * <p>Describes the state machine associated with a specific execution.</p> <note>
         * <p>This operation is eventually consistent. The results are best effort and may
         * not reflect very recent updates and changes.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachineForExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStateMachineForExecutionOutcomeCallable DescribeStateMachineForExecutionCallable(const Model::DescribeStateMachineForExecutionRequest& request) const;

        /**
         * <p>Describes the state machine associated with a specific execution.</p> <note>
         * <p>This operation is eventually consistent. The results are best effort and may
         * not reflect very recent updates and changes.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachineForExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStateMachineForExecutionAsync(const Model::DescribeStateMachineForExecutionRequest& request, const DescribeStateMachineForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by workers to retrieve a task (with the specified activity ARN) which
         * has been scheduled for execution by a running state machine. This initiates a
         * long poll, where the service holds the HTTP connection open and responds as soon
         * as a task becomes available (i.e. an execution of a task of this type is
         * needed.) The maximum time the service holds on to the request before responding
         * is 60 seconds. If no task is available within 60 seconds, the poll returns a
         * <code>taskToken</code> with a null string.</p> <important> <p>Workers should set
         * their client side socket timeout to at least 65 seconds (5 seconds higher than
         * the maximum time the service may hold the poll request).</p> <p>Polling with
         * <code>GetActivityTask</code> can cause latency in some implementations. See <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/bp-activity-pollers.html">Avoid
         * Latency When Polling for Activity Tasks</a> in the Step Functions Developer
         * Guide.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetActivityTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActivityTaskOutcome GetActivityTask(const Model::GetActivityTaskRequest& request) const;

        /**
         * <p>Used by workers to retrieve a task (with the specified activity ARN) which
         * has been scheduled for execution by a running state machine. This initiates a
         * long poll, where the service holds the HTTP connection open and responds as soon
         * as a task becomes available (i.e. an execution of a task of this type is
         * needed.) The maximum time the service holds on to the request before responding
         * is 60 seconds. If no task is available within 60 seconds, the poll returns a
         * <code>taskToken</code> with a null string.</p> <important> <p>Workers should set
         * their client side socket timeout to at least 65 seconds (5 seconds higher than
         * the maximum time the service may hold the poll request).</p> <p>Polling with
         * <code>GetActivityTask</code> can cause latency in some implementations. See <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/bp-activity-pollers.html">Avoid
         * Latency When Polling for Activity Tasks</a> in the Step Functions Developer
         * Guide.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetActivityTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetActivityTaskOutcomeCallable GetActivityTaskCallable(const Model::GetActivityTaskRequest& request) const;

        /**
         * <p>Used by workers to retrieve a task (with the specified activity ARN) which
         * has been scheduled for execution by a running state machine. This initiates a
         * long poll, where the service holds the HTTP connection open and responds as soon
         * as a task becomes available (i.e. an execution of a task of this type is
         * needed.) The maximum time the service holds on to the request before responding
         * is 60 seconds. If no task is available within 60 seconds, the poll returns a
         * <code>taskToken</code> with a null string.</p> <important> <p>Workers should set
         * their client side socket timeout to at least 65 seconds (5 seconds higher than
         * the maximum time the service may hold the poll request).</p> <p>Polling with
         * <code>GetActivityTask</code> can cause latency in some implementations. See <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/bp-activity-pollers.html">Avoid
         * Latency When Polling for Activity Tasks</a> in the Step Functions Developer
         * Guide.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetActivityTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetActivityTaskAsync(const Model::GetActivityTaskRequest& request, const GetActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the history of the specified execution as a list of events. By
         * default, the results are returned in ascending order of the
         * <code>timeStamp</code> of the events. Use the <code>reverseOrder</code>
         * parameter to get the latest events first.</p> <p>If <code>nextToken</code> is
         * returned, there are more results available. The value of <code>nextToken</code>
         * is a unique pagination token for each page. Make the call again using the
         * returned token to retrieve the next page. Keep all other arguments unchanged.
         * Each pagination token expires after 24 hours. Using an expired pagination token
         * will return an <i>HTTP 400 InvalidToken</i> error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetExecutionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExecutionHistoryOutcome GetExecutionHistory(const Model::GetExecutionHistoryRequest& request) const;

        /**
         * <p>Returns the history of the specified execution as a list of events. By
         * default, the results are returned in ascending order of the
         * <code>timeStamp</code> of the events. Use the <code>reverseOrder</code>
         * parameter to get the latest events first.</p> <p>If <code>nextToken</code> is
         * returned, there are more results available. The value of <code>nextToken</code>
         * is a unique pagination token for each page. Make the call again using the
         * returned token to retrieve the next page. Keep all other arguments unchanged.
         * Each pagination token expires after 24 hours. Using an expired pagination token
         * will return an <i>HTTP 400 InvalidToken</i> error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetExecutionHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExecutionHistoryOutcomeCallable GetExecutionHistoryCallable(const Model::GetExecutionHistoryRequest& request) const;

        /**
         * <p>Returns the history of the specified execution as a list of events. By
         * default, the results are returned in ascending order of the
         * <code>timeStamp</code> of the events. Use the <code>reverseOrder</code>
         * parameter to get the latest events first.</p> <p>If <code>nextToken</code> is
         * returned, there are more results available. The value of <code>nextToken</code>
         * is a unique pagination token for each page. Make the call again using the
         * returned token to retrieve the next page. Keep all other arguments unchanged.
         * Each pagination token expires after 24 hours. Using an expired pagination token
         * will return an <i>HTTP 400 InvalidToken</i> error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetExecutionHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExecutionHistoryAsync(const Model::GetExecutionHistoryRequest& request, const GetExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing activities.</p> <p>If <code>nextToken</code> is returned,
         * there are more results available. The value of <code>nextToken</code> is a
         * unique pagination token for each page. Make the call again using the returned
         * token to retrieve the next page. Keep all other arguments unchanged. Each
         * pagination token expires after 24 hours. Using an expired pagination token will
         * return an <i>HTTP 400 InvalidToken</i> error.</p> <note> <p>This operation is
         * eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActivitiesOutcome ListActivities(const Model::ListActivitiesRequest& request) const;

        /**
         * <p>Lists the existing activities.</p> <p>If <code>nextToken</code> is returned,
         * there are more results available. The value of <code>nextToken</code> is a
         * unique pagination token for each page. Make the call again using the returned
         * token to retrieve the next page. Keep all other arguments unchanged. Each
         * pagination token expires after 24 hours. Using an expired pagination token will
         * return an <i>HTTP 400 InvalidToken</i> error.</p> <note> <p>This operation is
         * eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListActivities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActivitiesOutcomeCallable ListActivitiesCallable(const Model::ListActivitiesRequest& request) const;

        /**
         * <p>Lists the existing activities.</p> <p>If <code>nextToken</code> is returned,
         * there are more results available. The value of <code>nextToken</code> is a
         * unique pagination token for each page. Make the call again using the returned
         * token to retrieve the next page. Keep all other arguments unchanged. Each
         * pagination token expires after 24 hours. Using an expired pagination token will
         * return an <i>HTTP 400 InvalidToken</i> error.</p> <note> <p>This operation is
         * eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListActivities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActivitiesAsync(const Model::ListActivitiesRequest& request, const ListActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the executions of a state machine that meet the filtering criteria.
         * Results are sorted by time, with the most recent execution first.</p> <p>If
         * <code>nextToken</code> is returned, there are more results available. The value
         * of <code>nextToken</code> is a unique pagination token for each page. Make the
         * call again using the returned token to retrieve the next page. Keep all other
         * arguments unchanged. Each pagination token expires after 24 hours. Using an
         * expired pagination token will return an <i>HTTP 400 InvalidToken</i> error.</p>
         * <note> <p>This operation is eventually consistent. The results are best effort
         * and may not reflect very recent updates and changes.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;

        /**
         * <p>Lists the executions of a state machine that meet the filtering criteria.
         * Results are sorted by time, with the most recent execution first.</p> <p>If
         * <code>nextToken</code> is returned, there are more results available. The value
         * of <code>nextToken</code> is a unique pagination token for each page. Make the
         * call again using the returned token to retrieve the next page. Keep all other
         * arguments unchanged. Each pagination token expires after 24 hours. Using an
         * expired pagination token will return an <i>HTTP 400 InvalidToken</i> error.</p>
         * <note> <p>This operation is eventually consistent. The results are best effort
         * and may not reflect very recent updates and changes.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const Model::ListExecutionsRequest& request) const;

        /**
         * <p>Lists the executions of a state machine that meet the filtering criteria.
         * Results are sorted by time, with the most recent execution first.</p> <p>If
         * <code>nextToken</code> is returned, there are more results available. The value
         * of <code>nextToken</code> is a unique pagination token for each page. Make the
         * call again using the returned token to retrieve the next page. Keep all other
         * arguments unchanged. Each pagination token expires after 24 hours. Using an
         * expired pagination token will return an <i>HTTP 400 InvalidToken</i> error.</p>
         * <note> <p>This operation is eventually consistent. The results are best effort
         * and may not reflect very recent updates and changes.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExecutionsAsync(const Model::ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing state machines.</p> <p>If <code>nextToken</code> is
         * returned, there are more results available. The value of <code>nextToken</code>
         * is a unique pagination token for each page. Make the call again using the
         * returned token to retrieve the next page. Keep all other arguments unchanged.
         * Each pagination token expires after 24 hours. Using an expired pagination token
         * will return an <i>HTTP 400 InvalidToken</i> error.</p> <note> <p>This operation
         * is eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListStateMachines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStateMachinesOutcome ListStateMachines(const Model::ListStateMachinesRequest& request) const;

        /**
         * <p>Lists the existing state machines.</p> <p>If <code>nextToken</code> is
         * returned, there are more results available. The value of <code>nextToken</code>
         * is a unique pagination token for each page. Make the call again using the
         * returned token to retrieve the next page. Keep all other arguments unchanged.
         * Each pagination token expires after 24 hours. Using an expired pagination token
         * will return an <i>HTTP 400 InvalidToken</i> error.</p> <note> <p>This operation
         * is eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListStateMachines">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStateMachinesOutcomeCallable ListStateMachinesCallable(const Model::ListStateMachinesRequest& request) const;

        /**
         * <p>Lists the existing state machines.</p> <p>If <code>nextToken</code> is
         * returned, there are more results available. The value of <code>nextToken</code>
         * is a unique pagination token for each page. Make the call again using the
         * returned token to retrieve the next page. Keep all other arguments unchanged.
         * Each pagination token expires after 24 hours. Using an expired pagination token
         * will return an <i>HTTP 400 InvalidToken</i> error.</p> <note> <p>This operation
         * is eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListStateMachines">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStateMachinesAsync(const Model::ListStateMachinesRequest& request, const ListStateMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List tags for a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List tags for a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List tags for a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by workers to report that the task identified by the
         * <code>taskToken</code> failed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskFailure">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTaskFailureOutcome SendTaskFailure(const Model::SendTaskFailureRequest& request) const;

        /**
         * <p>Used by workers to report that the task identified by the
         * <code>taskToken</code> failed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskFailure">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendTaskFailureOutcomeCallable SendTaskFailureCallable(const Model::SendTaskFailureRequest& request) const;

        /**
         * <p>Used by workers to report that the task identified by the
         * <code>taskToken</code> failed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskFailure">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendTaskFailureAsync(const Model::SendTaskFailureRequest& request, const SendTaskFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by workers to report to the service that the task represented by the
         * specified <code>taskToken</code> is still making progress. This action resets
         * the <code>Heartbeat</code> clock. The <code>Heartbeat</code> threshold is
         * specified in the state machine's Amazon States Language definition. This action
         * does not in itself create an event in the execution history. However, if the
         * task times out, the execution history contains an <code>ActivityTimedOut</code>
         * event.</p> <note> <p>The <code>Timeout</code> of a task, defined in the state
         * machine's Amazon States Language definition, is its maximum allowed duration,
         * regardless of the number of <a>SendTaskHeartbeat</a> requests received.</p>
         * </note> <note> <p>This operation is only useful for long-lived tasks to report
         * the liveliness of the task.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTaskHeartbeatOutcome SendTaskHeartbeat(const Model::SendTaskHeartbeatRequest& request) const;

        /**
         * <p>Used by workers to report to the service that the task represented by the
         * specified <code>taskToken</code> is still making progress. This action resets
         * the <code>Heartbeat</code> clock. The <code>Heartbeat</code> threshold is
         * specified in the state machine's Amazon States Language definition. This action
         * does not in itself create an event in the execution history. However, if the
         * task times out, the execution history contains an <code>ActivityTimedOut</code>
         * event.</p> <note> <p>The <code>Timeout</code> of a task, defined in the state
         * machine's Amazon States Language definition, is its maximum allowed duration,
         * regardless of the number of <a>SendTaskHeartbeat</a> requests received.</p>
         * </note> <note> <p>This operation is only useful for long-lived tasks to report
         * the liveliness of the task.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskHeartbeat">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendTaskHeartbeatOutcomeCallable SendTaskHeartbeatCallable(const Model::SendTaskHeartbeatRequest& request) const;

        /**
         * <p>Used by workers to report to the service that the task represented by the
         * specified <code>taskToken</code> is still making progress. This action resets
         * the <code>Heartbeat</code> clock. The <code>Heartbeat</code> threshold is
         * specified in the state machine's Amazon States Language definition. This action
         * does not in itself create an event in the execution history. However, if the
         * task times out, the execution history contains an <code>ActivityTimedOut</code>
         * event.</p> <note> <p>The <code>Timeout</code> of a task, defined in the state
         * machine's Amazon States Language definition, is its maximum allowed duration,
         * regardless of the number of <a>SendTaskHeartbeat</a> requests received.</p>
         * </note> <note> <p>This operation is only useful for long-lived tasks to report
         * the liveliness of the task.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskHeartbeat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendTaskHeartbeatAsync(const Model::SendTaskHeartbeatRequest& request, const SendTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by workers to report that the task identified by the
         * <code>taskToken</code> completed successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskSuccess">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTaskSuccessOutcome SendTaskSuccess(const Model::SendTaskSuccessRequest& request) const;

        /**
         * <p>Used by workers to report that the task identified by the
         * <code>taskToken</code> completed successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskSuccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendTaskSuccessOutcomeCallable SendTaskSuccessCallable(const Model::SendTaskSuccessRequest& request) const;

        /**
         * <p>Used by workers to report that the task identified by the
         * <code>taskToken</code> completed successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskSuccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendTaskSuccessAsync(const Model::SendTaskSuccessRequest& request, const SendTaskSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a state machine execution.</p> <note> <p> <code>StartExecution</code>
         * is idempotent. If <code>StartExecution</code> is called with the same name and
         * input as a running execution, the call will succeed and return the same response
         * as the original request. If the execution is closed or if the input is
         * different, it will return a 400 <code>ExecutionAlreadyExists</code> error. Names
         * can be reused after 90 days. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StartExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExecutionOutcome StartExecution(const Model::StartExecutionRequest& request) const;

        /**
         * <p>Starts a state machine execution.</p> <note> <p> <code>StartExecution</code>
         * is idempotent. If <code>StartExecution</code> is called with the same name and
         * input as a running execution, the call will succeed and return the same response
         * as the original request. If the execution is closed or if the input is
         * different, it will return a 400 <code>ExecutionAlreadyExists</code> error. Names
         * can be reused after 90 days. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StartExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExecutionOutcomeCallable StartExecutionCallable(const Model::StartExecutionRequest& request) const;

        /**
         * <p>Starts a state machine execution.</p> <note> <p> <code>StartExecution</code>
         * is idempotent. If <code>StartExecution</code> is called with the same name and
         * input as a running execution, the call will succeed and return the same response
         * as the original request. If the execution is closed or if the input is
         * different, it will return a 400 <code>ExecutionAlreadyExists</code> error. Names
         * can be reused after 90 days. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StartExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExecutionAsync(const Model::StartExecutionRequest& request, const StartExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StopExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopExecutionOutcome StopExecution(const Model::StopExecutionRequest& request) const;

        /**
         * <p>Stops an execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StopExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopExecutionOutcomeCallable StopExecutionCallable(const Model::StopExecutionRequest& request) const;

        /**
         * <p>Stops an execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StopExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopExecutionAsync(const Model::StopExecutionRequest& request, const StopExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add a tag to a Step Functions resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add a tag to a Step Functions resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add a tag to a Step Functions resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a tag from a Step Functions resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove a tag from a Step Functions resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove a tag from a Step Functions resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing state machine by modifying its <code>definition</code>
         * and/or <code>roleArn</code>. Running executions will continue to use the
         * previous <code>definition</code> and <code>roleArn</code>. You must include at
         * least one of <code>definition</code> or <code>roleArn</code> or you will receive
         * a <code>MissingRequiredParameter</code> error.</p> <note> <p>All
         * <code>StartExecution</code> calls within a few seconds will use the updated
         * <code>definition</code> and <code>roleArn</code>. Executions started immediately
         * after calling <code>UpdateStateMachine</code> may use the previous state machine
         * <code>definition</code> and <code>roleArn</code>. </p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UpdateStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStateMachineOutcome UpdateStateMachine(const Model::UpdateStateMachineRequest& request) const;

        /**
         * <p>Updates an existing state machine by modifying its <code>definition</code>
         * and/or <code>roleArn</code>. Running executions will continue to use the
         * previous <code>definition</code> and <code>roleArn</code>. You must include at
         * least one of <code>definition</code> or <code>roleArn</code> or you will receive
         * a <code>MissingRequiredParameter</code> error.</p> <note> <p>All
         * <code>StartExecution</code> calls within a few seconds will use the updated
         * <code>definition</code> and <code>roleArn</code>. Executions started immediately
         * after calling <code>UpdateStateMachine</code> may use the previous state machine
         * <code>definition</code> and <code>roleArn</code>. </p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UpdateStateMachine">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStateMachineOutcomeCallable UpdateStateMachineCallable(const Model::UpdateStateMachineRequest& request) const;

        /**
         * <p>Updates an existing state machine by modifying its <code>definition</code>
         * and/or <code>roleArn</code>. Running executions will continue to use the
         * previous <code>definition</code> and <code>roleArn</code>. You must include at
         * least one of <code>definition</code> or <code>roleArn</code> or you will receive
         * a <code>MissingRequiredParameter</code> error.</p> <note> <p>All
         * <code>StartExecution</code> calls within a few seconds will use the updated
         * <code>definition</code> and <code>roleArn</code>. Executions started immediately
         * after calling <code>UpdateStateMachine</code> may use the previous state machine
         * <code>definition</code> and <code>roleArn</code>. </p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UpdateStateMachine">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStateMachineAsync(const Model::UpdateStateMachineRequest& request, const UpdateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateActivityAsyncHelper(const Model::CreateActivityRequest& request, const CreateActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStateMachineAsyncHelper(const Model::CreateStateMachineRequest& request, const CreateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteActivityAsyncHelper(const Model::DeleteActivityRequest& request, const DeleteActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStateMachineAsyncHelper(const Model::DeleteStateMachineRequest& request, const DeleteStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeActivityAsyncHelper(const Model::DescribeActivityRequest& request, const DescribeActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExecutionAsyncHelper(const Model::DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStateMachineAsyncHelper(const Model::DescribeStateMachineRequest& request, const DescribeStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStateMachineForExecutionAsyncHelper(const Model::DescribeStateMachineForExecutionRequest& request, const DescribeStateMachineForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetActivityTaskAsyncHelper(const Model::GetActivityTaskRequest& request, const GetActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExecutionHistoryAsyncHelper(const Model::GetExecutionHistoryRequest& request, const GetExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListActivitiesAsyncHelper(const Model::ListActivitiesRequest& request, const ListActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListExecutionsAsyncHelper(const Model::ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStateMachinesAsyncHelper(const Model::ListStateMachinesRequest& request, const ListStateMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendTaskFailureAsyncHelper(const Model::SendTaskFailureRequest& request, const SendTaskFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendTaskHeartbeatAsyncHelper(const Model::SendTaskHeartbeatRequest& request, const SendTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendTaskSuccessAsyncHelper(const Model::SendTaskSuccessRequest& request, const SendTaskSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartExecutionAsyncHelper(const Model::StartExecutionRequest& request, const StartExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopExecutionAsyncHelper(const Model::StopExecutionRequest& request, const StopExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStateMachineAsyncHelper(const Model::UpdateStateMachineRequest& request, const UpdateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SFN
} // namespace Aws
