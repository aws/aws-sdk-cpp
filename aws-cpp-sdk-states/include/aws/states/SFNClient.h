/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/states/SFNServiceClientModel.h>

namespace Aws
{
namespace SFN
{
  /**
   * <fullname>Step Functions</fullname> <p>Step Functions is a service that lets you
   * coordinate the components of distributed applications and microservices using
   * visual workflows.</p> <p>You can use Step Functions to build applications from
   * individual components, each of which performs a discrete function, or
   * <i>task</i>, allowing you to scale and change applications quickly. Step
   * Functions provides a console that helps visualize the components of your
   * application as a series of steps. Step Functions automatically triggers and
   * tracks each step, and retries steps when there are errors, so your application
   * executes predictably and in the right order every time. Step Functions logs the
   * state of each step, so you can quickly diagnose and debug any issues.</p>
   * <p>Step Functions manages operations and underlying infrastructure to ensure
   * your application is available at any scale. You can run tasks on Amazon Web
   * Services, your own servers, or any system that has access to Amazon Web
   * Services. You can access and use Step Functions using the console, the Amazon
   * Web Services SDKs, or an HTTP API. For more information about Step Functions,
   * see the <i> <a
   * href="https://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">Step
   * Functions Developer Guide</a> </i>.</p>
   */
  class AWS_SFN_API SFNClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SFNClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::SFN::SFNClientConfiguration& clientConfiguration = Aws::SFN::SFNClientConfiguration(),
                  std::shared_ptr<SFNEndpointProviderBase> endpointProvider = Aws::MakeShared<SFNEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SFNEndpointProviderBase> endpointProvider = Aws::MakeShared<SFNEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SFN::SFNClientConfiguration& clientConfiguration = Aws::SFN::SFNClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SFNClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SFNEndpointProviderBase> endpointProvider = Aws::MakeShared<SFNEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SFN::SFNClientConfiguration& clientConfiguration = Aws::SFN::SFNClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SFNClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SFNClient();

        /**
         * <p>Creates an activity. An activity is a task that you write in any programming
         * language and host on any machine that has access to Step Functions. Activities
         * must poll Step Functions using the <code>GetActivityTask</code> API action and
         * respond using <code>SendTask*</code> API actions. This function lets Step
         * Functions know the existence of your activity and returns an identifier for use
         * in a state machine and when polling from the activity.</p>  <p>This
         * operation is eventually consistent. The results are best effort and may not
         * reflect very recent updates and changes.</p>   <p>
         * <code>CreateActivity</code> is an idempotent API. Subsequent requests won’t
         * create a duplicate resource if it was already created.
         * <code>CreateActivity</code>'s idempotency check is based on the activity
         * <code>name</code>. If a following request has different <code>tags</code>
         * values, Step Functions will ignore these differences and treat it as an
         * idempotent request of the previous. In this case, <code>tags</code> will not be
         * updated, even if they are different.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActivityOutcome CreateActivity(const Model::CreateActivityRequest& request) const;

        /**
         * A Callable wrapper for CreateActivity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateActivityOutcomeCallable CreateActivityCallable(const Model::CreateActivityRequest& request) const;

        /**
         * An Async wrapper for CreateActivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateActivityAsync(const Model::CreateActivityRequest& request, const CreateActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a state machine. A state machine consists of a collection of states
         * that can do work (<code>Task</code> states), determine to which states to
         * transition next (<code>Choice</code> states), stop an execution with an error
         * (<code>Fail</code> states), and so on. State machines are specified using a
         * JSON-based, structured language. For more information, see <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
         * States Language</a> in the Step Functions User Guide.</p>  <p>This
         * operation is eventually consistent. The results are best effort and may not
         * reflect very recent updates and changes.</p>   <p>
         * <code>CreateStateMachine</code> is an idempotent API. Subsequent requests won’t
         * create a duplicate resource if it was already created.
         * <code>CreateStateMachine</code>'s idempotency check is based on the state
         * machine <code>name</code>, <code>definition</code>, <code>type</code>,
         * <code>LoggingConfiguration</code> and <code>TracingConfiguration</code>. If a
         * following request has a different <code>roleArn</code> or <code>tags</code>,
         * Step Functions will ignore these differences and treat it as an idempotent
         * request of the previous. In this case, <code>roleArn</code> and
         * <code>tags</code> will not be updated, even if they are different.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStateMachineOutcome CreateStateMachine(const Model::CreateStateMachineRequest& request) const;

        /**
         * A Callable wrapper for CreateStateMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStateMachineOutcomeCallable CreateStateMachineCallable(const Model::CreateStateMachineRequest& request) const;

        /**
         * An Async wrapper for CreateStateMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStateMachineAsync(const Model::CreateStateMachineRequest& request, const CreateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActivityOutcome DeleteActivity(const Model::DeleteActivityRequest& request) const;

        /**
         * A Callable wrapper for DeleteActivity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteActivityOutcomeCallable DeleteActivityCallable(const Model::DeleteActivityRequest& request) const;

        /**
         * An Async wrapper for DeleteActivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteActivityAsync(const Model::DeleteActivityRequest& request, const DeleteActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a state machine. This is an asynchronous operation: It sets the state
         * machine's status to <code>DELETING</code> and begins the deletion process. </p>
         * <p>If the given state machine Amazon Resource Name (ARN) is a qualified state
         * machine ARN, it will fail with ValidationException.</p> <p>A qualified state
         * machine ARN refers to a <i>Distributed Map state</i> defined within a state
         * machine. For example, the qualified state machine ARN
         * <code>arn:partition:states:region:account-id:stateMachine:stateMachineName/mapStateLabel</code>
         * refers to a <i>Distributed Map state</i> with a label <code>mapStateLabel</code>
         * in the state machine named <code>stateMachineName</code>.</p>  <p>For
         * <code>EXPRESS</code> state machines, the deletion will happen eventually
         * (usually less than a minute). Running executions may emit logs after
         * <code>DeleteStateMachine</code> API is called.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStateMachineOutcome DeleteStateMachine(const Model::DeleteStateMachineRequest& request) const;

        /**
         * A Callable wrapper for DeleteStateMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStateMachineOutcomeCallable DeleteStateMachineCallable(const Model::DeleteStateMachineRequest& request) const;

        /**
         * An Async wrapper for DeleteStateMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStateMachineAsync(const Model::DeleteStateMachineRequest& request, const DeleteStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an activity.</p>  <p>This operation is eventually consistent.
         * The results are best effort and may not reflect very recent updates and
         * changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivityOutcome DescribeActivity(const Model::DescribeActivityRequest& request) const;

        /**
         * A Callable wrapper for DescribeActivity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActivityOutcomeCallable DescribeActivityCallable(const Model::DescribeActivityRequest& request) const;

        /**
         * An Async wrapper for DescribeActivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActivityAsync(const Model::DescribeActivityRequest& request, const DescribeActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides all information about a state machine execution, such as the state
         * machine associated with the execution, the execution input and output, and
         * relevant execution metadata. Use this API action to return the Map Run ARN if
         * the execution was dispatched by a Map Run.</p>  <p>This operation is
         * eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p>  <p>This API action is not supported by
         * <code>EXPRESS</code> state machine executions unless they were dispatched by a
         * Map Run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExecutionOutcome DescribeExecution(const Model::DescribeExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExecutionOutcomeCallable DescribeExecutionCallable(const Model::DescribeExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribeExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExecutionAsync(const Model::DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a Map Run's configuration, progress, and results.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-examine-map-run.html">Examining
         * Map Run</a> in the <i>Step Functions Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeMapRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMapRunOutcome DescribeMapRun(const Model::DescribeMapRunRequest& request) const;

        /**
         * A Callable wrapper for DescribeMapRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMapRunOutcomeCallable DescribeMapRunCallable(const Model::DescribeMapRunRequest& request) const;

        /**
         * An Async wrapper for DescribeMapRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMapRunAsync(const Model::DescribeMapRunRequest& request, const DescribeMapRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a state machine's definition, its IAM role Amazon
         * Resource Name (ARN), and configuration. If the state machine ARN is a qualified
         * state machine ARN, the response returned includes the <code>Map</code> state's
         * label.</p> <p>A qualified state machine ARN refers to a <i>Distributed Map
         * state</i> defined within a state machine. For example, the qualified state
         * machine ARN
         * <code>arn:partition:states:region:account-id:stateMachine:stateMachineName/mapStateLabel</code>
         * refers to a <i>Distributed Map state</i> with a label <code>mapStateLabel</code>
         * in the state machine named <code>stateMachineName</code>.</p>  <p>This
         * operation is eventually consistent. The results are best effort and may not
         * reflect very recent updates and changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStateMachineOutcome DescribeStateMachine(const Model::DescribeStateMachineRequest& request) const;

        /**
         * A Callable wrapper for DescribeStateMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStateMachineOutcomeCallable DescribeStateMachineCallable(const Model::DescribeStateMachineRequest& request) const;

        /**
         * An Async wrapper for DescribeStateMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStateMachineAsync(const Model::DescribeStateMachineRequest& request, const DescribeStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a state machine's definition, its execution role
         * ARN, and configuration. If an execution was dispatched by a Map Run, the Map Run
         * is returned in the response. Additionally, the state machine returned will be
         * the state machine associated with the Map Run.</p>  <p>This operation is
         * eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p>  <p>This API action is not supported by
         * <code>EXPRESS</code> state machines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachineForExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStateMachineForExecutionOutcome DescribeStateMachineForExecution(const Model::DescribeStateMachineForExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeStateMachineForExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStateMachineForExecutionOutcomeCallable DescribeStateMachineForExecutionCallable(const Model::DescribeStateMachineForExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribeStateMachineForExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStateMachineForExecutionAsync(const Model::DescribeStateMachineForExecutionRequest& request, const DescribeStateMachineForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by workers to retrieve a task (with the specified activity ARN) which
         * has been scheduled for execution by a running state machine. This initiates a
         * long poll, where the service holds the HTTP connection open and responds as soon
         * as a task becomes available (i.e. an execution of a task of this type is
         * needed.) The maximum time the service holds on to the request before responding
         * is 60 seconds. If no task is available within 60 seconds, the poll returns a
         * <code>taskToken</code> with a null string.</p>  <p>This API action isn't
         * logged in CloudTrail.</p>   <p>Workers should set their client
         * side socket timeout to at least 65 seconds (5 seconds higher than the maximum
         * time the service may hold the poll request).</p> <p>Polling with
         * <code>GetActivityTask</code> can cause latency in some implementations. See <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/bp-activity-pollers.html">Avoid
         * Latency When Polling for Activity Tasks</a> in the Step Functions Developer
         * Guide.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetActivityTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActivityTaskOutcome GetActivityTask(const Model::GetActivityTaskRequest& request) const;

        /**
         * A Callable wrapper for GetActivityTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetActivityTaskOutcomeCallable GetActivityTaskCallable(const Model::GetActivityTaskRequest& request) const;

        /**
         * An Async wrapper for GetActivityTask that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * will return an <i>HTTP 400 InvalidToken</i> error.</p> <p>This API action is not
         * supported by <code>EXPRESS</code> state machines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetExecutionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExecutionHistoryOutcome GetExecutionHistory(const Model::GetExecutionHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetExecutionHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExecutionHistoryOutcomeCallable GetExecutionHistoryCallable(const Model::GetExecutionHistoryRequest& request) const;

        /**
         * An Async wrapper for GetExecutionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExecutionHistoryAsync(const Model::GetExecutionHistoryRequest& request, const GetExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing activities.</p> <p>If <code>nextToken</code> is returned,
         * there are more results available. The value of <code>nextToken</code> is a
         * unique pagination token for each page. Make the call again using the returned
         * token to retrieve the next page. Keep all other arguments unchanged. Each
         * pagination token expires after 24 hours. Using an expired pagination token will
         * return an <i>HTTP 400 InvalidToken</i> error.</p>  <p>This operation is
         * eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActivitiesOutcome ListActivities(const Model::ListActivitiesRequest& request) const;

        /**
         * A Callable wrapper for ListActivities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActivitiesOutcomeCallable ListActivitiesCallable(const Model::ListActivitiesRequest& request) const;

        /**
         * An Async wrapper for ListActivities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActivitiesAsync(const Model::ListActivitiesRequest& request, const ListActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all executions of a state machine or a Map Run. You can list all
         * executions related to a state machine by specifying a state machine Amazon
         * Resource Name (ARN), or those related to a Map Run by specifying a Map Run
         * ARN.</p> <p>Results are sorted by time, with the most recent execution
         * first.</p> <p>If <code>nextToken</code> is returned, there are more results
         * available. The value of <code>nextToken</code> is a unique pagination token for
         * each page. Make the call again using the returned token to retrieve the next
         * page. Keep all other arguments unchanged. Each pagination token expires after 24
         * hours. Using an expired pagination token will return an <i>HTTP 400
         * InvalidToken</i> error.</p>  <p>This operation is eventually consistent.
         * The results are best effort and may not reflect very recent updates and
         * changes.</p>  <p>This API action is not supported by <code>EXPRESS</code>
         * state machines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const Model::ListExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExecutionsAsync(const Model::ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Map Runs that were started by a given state machine execution. Use
         * this API action to obtain Map Run ARNs, and then call
         * <code>DescribeMapRun</code> to obtain more information, if needed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListMapRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMapRunsOutcome ListMapRuns(const Model::ListMapRunsRequest& request) const;

        /**
         * A Callable wrapper for ListMapRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMapRunsOutcomeCallable ListMapRunsCallable(const Model::ListMapRunsRequest& request) const;

        /**
         * An Async wrapper for ListMapRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMapRunsAsync(const Model::ListMapRunsRequest& request, const ListMapRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing state machines.</p> <p>If <code>nextToken</code> is
         * returned, there are more results available. The value of <code>nextToken</code>
         * is a unique pagination token for each page. Make the call again using the
         * returned token to retrieve the next page. Keep all other arguments unchanged.
         * Each pagination token expires after 24 hours. Using an expired pagination token
         * will return an <i>HTTP 400 InvalidToken</i> error.</p>  <p>This operation
         * is eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListStateMachines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStateMachinesOutcome ListStateMachines(const Model::ListStateMachinesRequest& request) const;

        /**
         * A Callable wrapper for ListStateMachines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStateMachinesOutcomeCallable ListStateMachinesCallable(const Model::ListStateMachinesRequest& request) const;

        /**
         * An Async wrapper for ListStateMachines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStateMachinesAsync(const Model::ListStateMachinesRequest& request, const ListStateMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List tags for a given resource.</p> <p>Tags may only contain Unicode letters,
         * digits, white space, or these symbols: <code>_ . : / = + -
         * @</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListTagsForResource">AWS
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
         * <p>Used by activity workers and task states using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-wait-token">callback</a>
         * pattern to report that the task identified by the <code>taskToken</code>
         * failed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskFailure">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTaskFailureOutcome SendTaskFailure(const Model::SendTaskFailureRequest& request) const;

        /**
         * A Callable wrapper for SendTaskFailure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendTaskFailureOutcomeCallable SendTaskFailureCallable(const Model::SendTaskFailureRequest& request) const;

        /**
         * An Async wrapper for SendTaskFailure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendTaskFailureAsync(const Model::SendTaskFailureRequest& request, const SendTaskFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by activity workers and task states using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-wait-token">callback</a>
         * pattern to report to Step Functions that the task represented by the specified
         * <code>taskToken</code> is still making progress. This action resets the
         * <code>Heartbeat</code> clock. The <code>Heartbeat</code> threshold is specified
         * in the state machine's Amazon States Language definition
         * (<code>HeartbeatSeconds</code>). This action does not in itself create an event
         * in the execution history. However, if the task times out, the execution history
         * contains an <code>ActivityTimedOut</code> entry for activities, or a
         * <code>TaskTimedOut</code> entry for for tasks using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-sync">job
         * run</a> or <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-wait-token">callback</a>
         * pattern.</p>  <p>The <code>Timeout</code> of a task, defined in the state
         * machine's Amazon States Language definition, is its maximum allowed duration,
         * regardless of the number of <a>SendTaskHeartbeat</a> requests received. Use
         * <code>HeartbeatSeconds</code> to configure the timeout interval for
         * heartbeats.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTaskHeartbeatOutcome SendTaskHeartbeat(const Model::SendTaskHeartbeatRequest& request) const;

        /**
         * A Callable wrapper for SendTaskHeartbeat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendTaskHeartbeatOutcomeCallable SendTaskHeartbeatCallable(const Model::SendTaskHeartbeatRequest& request) const;

        /**
         * An Async wrapper for SendTaskHeartbeat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendTaskHeartbeatAsync(const Model::SendTaskHeartbeatRequest& request, const SendTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by activity workers and task states using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-wait-token">callback</a>
         * pattern to report that the task identified by the <code>taskToken</code>
         * completed successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskSuccess">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTaskSuccessOutcome SendTaskSuccess(const Model::SendTaskSuccessRequest& request) const;

        /**
         * A Callable wrapper for SendTaskSuccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendTaskSuccessOutcomeCallable SendTaskSuccessCallable(const Model::SendTaskSuccessRequest& request) const;

        /**
         * An Async wrapper for SendTaskSuccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendTaskSuccessAsync(const Model::SendTaskSuccessRequest& request, const SendTaskSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a state machine execution. If the given state machine Amazon Resource
         * Name (ARN) is a qualified state machine ARN, it will fail with
         * ValidationException.</p> <p>A qualified state machine ARN refers to a
         * <i>Distributed Map state</i> defined within a state machine. For example, the
         * qualified state machine ARN
         * <code>arn:partition:states:region:account-id:stateMachine:stateMachineName/mapStateLabel</code>
         * refers to a <i>Distributed Map state</i> with a label <code>mapStateLabel</code>
         * in the state machine named <code>stateMachineName</code>.</p>  <p>
         * <code>StartExecution</code> is idempotent for <code>STANDARD</code> workflows.
         * For a <code>STANDARD</code> workflow, if <code>StartExecution</code> is called
         * with the same name and input as a running execution, the call will succeed and
         * return the same response as the original request. If the execution is closed or
         * if the input is different, it will return a <code>400
         * ExecutionAlreadyExists</code> error. Names can be reused after 90 days. </p> <p>
         * <code>StartExecution</code> is not idempotent for <code>EXPRESS</code>
         * workflows. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StartExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExecutionOutcome StartExecution(const Model::StartExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExecutionOutcomeCallable StartExecutionCallable(const Model::StartExecutionRequest& request) const;

        /**
         * An Async wrapper for StartExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExecutionAsync(const Model::StartExecutionRequest& request, const StartExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a Synchronous Express state machine execution.
         * <code>StartSyncExecution</code> is not available for <code>STANDARD</code>
         * workflows.</p>  <p> <code>StartSyncExecution</code> will return a
         * <code>200 OK</code> response, even if your execution fails, because the status
         * code in the API response doesn't reflect function errors. Error codes are
         * reserved for errors that prevent your execution from running, such as
         * permissions errors, limit errors, or issues with your state machine code and
         * configuration. </p>   <p>This API action isn't logged in
         * CloudTrail.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StartSyncExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSyncExecutionOutcome StartSyncExecution(const Model::StartSyncExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartSyncExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSyncExecutionOutcomeCallable StartSyncExecutionCallable(const Model::StartSyncExecutionRequest& request) const;

        /**
         * An Async wrapper for StartSyncExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSyncExecutionAsync(const Model::StartSyncExecutionRequest& request, const StartSyncExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an execution.</p> <p>This API action is not supported by
         * <code>EXPRESS</code> state machines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StopExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopExecutionOutcome StopExecution(const Model::StopExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopExecutionOutcomeCallable StopExecutionCallable(const Model::StopExecutionRequest& request) const;

        /**
         * An Async wrapper for StopExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopExecutionAsync(const Model::StopExecutionRequest& request, const StopExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add a tag to a Step Functions resource.</p> <p>An array of key-value pairs.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
         * Management User Guide</i>, and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
         * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
         * white space, or these symbols: <code>_ . : / = + - @</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TagResource">AWS
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
         * <p>Remove a tag from a Step Functions resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UntagResource">AWS
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
         * <p>Updates an in-progress Map Run's configuration to include changes to the
         * settings that control maximum concurrency and Map Run failure.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UpdateMapRun">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMapRunOutcome UpdateMapRun(const Model::UpdateMapRunRequest& request) const;

        /**
         * A Callable wrapper for UpdateMapRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMapRunOutcomeCallable UpdateMapRunCallable(const Model::UpdateMapRunRequest& request) const;

        /**
         * An Async wrapper for UpdateMapRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMapRunAsync(const Model::UpdateMapRunRequest& request, const UpdateMapRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing state machine by modifying its <code>definition</code>,
         * <code>roleArn</code>, or <code>loggingConfiguration</code>. Running executions
         * will continue to use the previous <code>definition</code> and
         * <code>roleArn</code>. You must include at least one of <code>definition</code>
         * or <code>roleArn</code> or you will receive a
         * <code>MissingRequiredParameter</code> error.</p> <p>If the given state machine
         * Amazon Resource Name (ARN) is a qualified state machine ARN, it will fail with
         * ValidationException.</p> <p>A qualified state machine ARN refers to a
         * <i>Distributed Map state</i> defined within a state machine. For example, the
         * qualified state machine ARN
         * <code>arn:partition:states:region:account-id:stateMachine:stateMachineName/mapStateLabel</code>
         * refers to a <i>Distributed Map state</i> with a label <code>mapStateLabel</code>
         * in the state machine named <code>stateMachineName</code>.</p>  <p>All
         * <code>StartExecution</code> calls within a few seconds will use the updated
         * <code>definition</code> and <code>roleArn</code>. Executions started immediately
         * after calling <code>UpdateStateMachine</code> may use the previous state machine
         * <code>definition</code> and <code>roleArn</code>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UpdateStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStateMachineOutcome UpdateStateMachine(const Model::UpdateStateMachineRequest& request) const;

        /**
         * A Callable wrapper for UpdateStateMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStateMachineOutcomeCallable UpdateStateMachineCallable(const Model::UpdateStateMachineRequest& request) const;

        /**
         * An Async wrapper for UpdateStateMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStateMachineAsync(const Model::UpdateStateMachineRequest& request, const UpdateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SFNEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SFNClient>;
      void init(const SFNClientConfiguration& clientConfiguration);

      SFNClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SFNEndpointProviderBase> m_endpointProvider;
  };

} // namespace SFN
} // namespace Aws
