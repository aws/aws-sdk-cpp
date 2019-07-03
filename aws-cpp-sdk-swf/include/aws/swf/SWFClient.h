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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/swf/model/CountClosedWorkflowExecutionsResult.h>
#include <aws/swf/model/CountOpenWorkflowExecutionsResult.h>
#include <aws/swf/model/CountPendingActivityTasksResult.h>
#include <aws/swf/model/CountPendingDecisionTasksResult.h>
#include <aws/swf/model/DescribeActivityTypeResult.h>
#include <aws/swf/model/DescribeDomainResult.h>
#include <aws/swf/model/DescribeWorkflowExecutionResult.h>
#include <aws/swf/model/DescribeWorkflowTypeResult.h>
#include <aws/swf/model/GetWorkflowExecutionHistoryResult.h>
#include <aws/swf/model/ListActivityTypesResult.h>
#include <aws/swf/model/ListClosedWorkflowExecutionsResult.h>
#include <aws/swf/model/ListDomainsResult.h>
#include <aws/swf/model/ListOpenWorkflowExecutionsResult.h>
#include <aws/swf/model/ListTagsForResourceResult.h>
#include <aws/swf/model/ListWorkflowTypesResult.h>
#include <aws/swf/model/PollForActivityTaskResult.h>
#include <aws/swf/model/PollForDecisionTaskResult.h>
#include <aws/swf/model/RecordActivityTaskHeartbeatResult.h>
#include <aws/swf/model/StartWorkflowExecutionResult.h>
#include <aws/core/NoResult.h>
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

namespace SWF
{

namespace Model
{
        class CountClosedWorkflowExecutionsRequest;
        class CountOpenWorkflowExecutionsRequest;
        class CountPendingActivityTasksRequest;
        class CountPendingDecisionTasksRequest;
        class DeprecateActivityTypeRequest;
        class DeprecateDomainRequest;
        class DeprecateWorkflowTypeRequest;
        class DescribeActivityTypeRequest;
        class DescribeDomainRequest;
        class DescribeWorkflowExecutionRequest;
        class DescribeWorkflowTypeRequest;
        class GetWorkflowExecutionHistoryRequest;
        class ListActivityTypesRequest;
        class ListClosedWorkflowExecutionsRequest;
        class ListDomainsRequest;
        class ListOpenWorkflowExecutionsRequest;
        class ListTagsForResourceRequest;
        class ListWorkflowTypesRequest;
        class PollForActivityTaskRequest;
        class PollForDecisionTaskRequest;
        class RecordActivityTaskHeartbeatRequest;
        class RegisterActivityTypeRequest;
        class RegisterDomainRequest;
        class RegisterWorkflowTypeRequest;
        class RequestCancelWorkflowExecutionRequest;
        class RespondActivityTaskCanceledRequest;
        class RespondActivityTaskCompletedRequest;
        class RespondActivityTaskFailedRequest;
        class RespondDecisionTaskCompletedRequest;
        class SignalWorkflowExecutionRequest;
        class StartWorkflowExecutionRequest;
        class TagResourceRequest;
        class TerminateWorkflowExecutionRequest;
        class UndeprecateActivityTypeRequest;
        class UndeprecateDomainRequest;
        class UndeprecateWorkflowTypeRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CountClosedWorkflowExecutionsResult, Aws::Client::AWSError<SWFErrors>> CountClosedWorkflowExecutionsOutcome;
        typedef Aws::Utils::Outcome<CountOpenWorkflowExecutionsResult, Aws::Client::AWSError<SWFErrors>> CountOpenWorkflowExecutionsOutcome;
        typedef Aws::Utils::Outcome<CountPendingActivityTasksResult, Aws::Client::AWSError<SWFErrors>> CountPendingActivityTasksOutcome;
        typedef Aws::Utils::Outcome<CountPendingDecisionTasksResult, Aws::Client::AWSError<SWFErrors>> CountPendingDecisionTasksOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> DeprecateActivityTypeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> DeprecateDomainOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> DeprecateWorkflowTypeOutcome;
        typedef Aws::Utils::Outcome<DescribeActivityTypeResult, Aws::Client::AWSError<SWFErrors>> DescribeActivityTypeOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainResult, Aws::Client::AWSError<SWFErrors>> DescribeDomainOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkflowExecutionResult, Aws::Client::AWSError<SWFErrors>> DescribeWorkflowExecutionOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkflowTypeResult, Aws::Client::AWSError<SWFErrors>> DescribeWorkflowTypeOutcome;
        typedef Aws::Utils::Outcome<GetWorkflowExecutionHistoryResult, Aws::Client::AWSError<SWFErrors>> GetWorkflowExecutionHistoryOutcome;
        typedef Aws::Utils::Outcome<ListActivityTypesResult, Aws::Client::AWSError<SWFErrors>> ListActivityTypesOutcome;
        typedef Aws::Utils::Outcome<ListClosedWorkflowExecutionsResult, Aws::Client::AWSError<SWFErrors>> ListClosedWorkflowExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListDomainsResult, Aws::Client::AWSError<SWFErrors>> ListDomainsOutcome;
        typedef Aws::Utils::Outcome<ListOpenWorkflowExecutionsResult, Aws::Client::AWSError<SWFErrors>> ListOpenWorkflowExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<SWFErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWorkflowTypesResult, Aws::Client::AWSError<SWFErrors>> ListWorkflowTypesOutcome;
        typedef Aws::Utils::Outcome<PollForActivityTaskResult, Aws::Client::AWSError<SWFErrors>> PollForActivityTaskOutcome;
        typedef Aws::Utils::Outcome<PollForDecisionTaskResult, Aws::Client::AWSError<SWFErrors>> PollForDecisionTaskOutcome;
        typedef Aws::Utils::Outcome<RecordActivityTaskHeartbeatResult, Aws::Client::AWSError<SWFErrors>> RecordActivityTaskHeartbeatOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> RegisterActivityTypeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> RegisterDomainOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> RegisterWorkflowTypeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> RequestCancelWorkflowExecutionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> RespondActivityTaskCanceledOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> RespondActivityTaskCompletedOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> RespondActivityTaskFailedOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> RespondDecisionTaskCompletedOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> SignalWorkflowExecutionOutcome;
        typedef Aws::Utils::Outcome<StartWorkflowExecutionResult, Aws::Client::AWSError<SWFErrors>> StartWorkflowExecutionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> TerminateWorkflowExecutionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> UndeprecateActivityTypeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> UndeprecateDomainOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> UndeprecateWorkflowTypeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SWFErrors>> UntagResourceOutcome;

        typedef std::future<CountClosedWorkflowExecutionsOutcome> CountClosedWorkflowExecutionsOutcomeCallable;
        typedef std::future<CountOpenWorkflowExecutionsOutcome> CountOpenWorkflowExecutionsOutcomeCallable;
        typedef std::future<CountPendingActivityTasksOutcome> CountPendingActivityTasksOutcomeCallable;
        typedef std::future<CountPendingDecisionTasksOutcome> CountPendingDecisionTasksOutcomeCallable;
        typedef std::future<DeprecateActivityTypeOutcome> DeprecateActivityTypeOutcomeCallable;
        typedef std::future<DeprecateDomainOutcome> DeprecateDomainOutcomeCallable;
        typedef std::future<DeprecateWorkflowTypeOutcome> DeprecateWorkflowTypeOutcomeCallable;
        typedef std::future<DescribeActivityTypeOutcome> DescribeActivityTypeOutcomeCallable;
        typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
        typedef std::future<DescribeWorkflowExecutionOutcome> DescribeWorkflowExecutionOutcomeCallable;
        typedef std::future<DescribeWorkflowTypeOutcome> DescribeWorkflowTypeOutcomeCallable;
        typedef std::future<GetWorkflowExecutionHistoryOutcome> GetWorkflowExecutionHistoryOutcomeCallable;
        typedef std::future<ListActivityTypesOutcome> ListActivityTypesOutcomeCallable;
        typedef std::future<ListClosedWorkflowExecutionsOutcome> ListClosedWorkflowExecutionsOutcomeCallable;
        typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
        typedef std::future<ListOpenWorkflowExecutionsOutcome> ListOpenWorkflowExecutionsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWorkflowTypesOutcome> ListWorkflowTypesOutcomeCallable;
        typedef std::future<PollForActivityTaskOutcome> PollForActivityTaskOutcomeCallable;
        typedef std::future<PollForDecisionTaskOutcome> PollForDecisionTaskOutcomeCallable;
        typedef std::future<RecordActivityTaskHeartbeatOutcome> RecordActivityTaskHeartbeatOutcomeCallable;
        typedef std::future<RegisterActivityTypeOutcome> RegisterActivityTypeOutcomeCallable;
        typedef std::future<RegisterDomainOutcome> RegisterDomainOutcomeCallable;
        typedef std::future<RegisterWorkflowTypeOutcome> RegisterWorkflowTypeOutcomeCallable;
        typedef std::future<RequestCancelWorkflowExecutionOutcome> RequestCancelWorkflowExecutionOutcomeCallable;
        typedef std::future<RespondActivityTaskCanceledOutcome> RespondActivityTaskCanceledOutcomeCallable;
        typedef std::future<RespondActivityTaskCompletedOutcome> RespondActivityTaskCompletedOutcomeCallable;
        typedef std::future<RespondActivityTaskFailedOutcome> RespondActivityTaskFailedOutcomeCallable;
        typedef std::future<RespondDecisionTaskCompletedOutcome> RespondDecisionTaskCompletedOutcomeCallable;
        typedef std::future<SignalWorkflowExecutionOutcome> SignalWorkflowExecutionOutcomeCallable;
        typedef std::future<StartWorkflowExecutionOutcome> StartWorkflowExecutionOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TerminateWorkflowExecutionOutcome> TerminateWorkflowExecutionOutcomeCallable;
        typedef std::future<UndeprecateActivityTypeOutcome> UndeprecateActivityTypeOutcomeCallable;
        typedef std::future<UndeprecateDomainOutcome> UndeprecateDomainOutcomeCallable;
        typedef std::future<UndeprecateWorkflowTypeOutcome> UndeprecateWorkflowTypeOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class SWFClient;

    typedef std::function<void(const SWFClient*, const Model::CountClosedWorkflowExecutionsRequest&, const Model::CountClosedWorkflowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CountClosedWorkflowExecutionsResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::CountOpenWorkflowExecutionsRequest&, const Model::CountOpenWorkflowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CountOpenWorkflowExecutionsResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::CountPendingActivityTasksRequest&, const Model::CountPendingActivityTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CountPendingActivityTasksResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::CountPendingDecisionTasksRequest&, const Model::CountPendingDecisionTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CountPendingDecisionTasksResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::DeprecateActivityTypeRequest&, const Model::DeprecateActivityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprecateActivityTypeResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::DeprecateDomainRequest&, const Model::DeprecateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprecateDomainResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::DeprecateWorkflowTypeRequest&, const Model::DeprecateWorkflowTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprecateWorkflowTypeResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::DescribeActivityTypeRequest&, const Model::DescribeActivityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActivityTypeResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::DescribeWorkflowExecutionRequest&, const Model::DescribeWorkflowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkflowExecutionResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::DescribeWorkflowTypeRequest&, const Model::DescribeWorkflowTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkflowTypeResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::GetWorkflowExecutionHistoryRequest&, const Model::GetWorkflowExecutionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowExecutionHistoryResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::ListActivityTypesRequest&, const Model::ListActivityTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActivityTypesResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::ListClosedWorkflowExecutionsRequest&, const Model::ListClosedWorkflowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClosedWorkflowExecutionsResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::ListOpenWorkflowExecutionsRequest&, const Model::ListOpenWorkflowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpenWorkflowExecutionsResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::ListWorkflowTypesRequest&, const Model::ListWorkflowTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowTypesResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::PollForActivityTaskRequest&, const Model::PollForActivityTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PollForActivityTaskResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::PollForDecisionTaskRequest&, const Model::PollForDecisionTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PollForDecisionTaskResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::RecordActivityTaskHeartbeatRequest&, const Model::RecordActivityTaskHeartbeatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecordActivityTaskHeartbeatResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::RegisterActivityTypeRequest&, const Model::RegisterActivityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterActivityTypeResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::RegisterDomainRequest&, const Model::RegisterDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDomainResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::RegisterWorkflowTypeRequest&, const Model::RegisterWorkflowTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterWorkflowTypeResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::RequestCancelWorkflowExecutionRequest&, const Model::RequestCancelWorkflowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestCancelWorkflowExecutionResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::RespondActivityTaskCanceledRequest&, const Model::RespondActivityTaskCanceledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RespondActivityTaskCanceledResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::RespondActivityTaskCompletedRequest&, const Model::RespondActivityTaskCompletedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RespondActivityTaskCompletedResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::RespondActivityTaskFailedRequest&, const Model::RespondActivityTaskFailedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RespondActivityTaskFailedResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::RespondDecisionTaskCompletedRequest&, const Model::RespondDecisionTaskCompletedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RespondDecisionTaskCompletedResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::SignalWorkflowExecutionRequest&, const Model::SignalWorkflowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignalWorkflowExecutionResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::StartWorkflowExecutionRequest&, const Model::StartWorkflowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWorkflowExecutionResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::TerminateWorkflowExecutionRequest&, const Model::TerminateWorkflowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateWorkflowExecutionResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::UndeprecateActivityTypeRequest&, const Model::UndeprecateActivityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UndeprecateActivityTypeResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::UndeprecateDomainRequest&, const Model::UndeprecateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UndeprecateDomainResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::UndeprecateWorkflowTypeRequest&, const Model::UndeprecateWorkflowTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UndeprecateWorkflowTypeResponseReceivedHandler;
    typedef std::function<void(const SWFClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <fullname>Amazon Simple Workflow Service</fullname> <p>The Amazon Simple
   * Workflow Service (Amazon SWF) makes it easy to build applications that use
   * Amazon's cloud to coordinate work across distributed components. In Amazon SWF,
   * a <i>task</i> represents a logical unit of work that is performed by a component
   * of your workflow. Coordinating tasks in a workflow involves managing intertask
   * dependencies, scheduling, and concurrency in accordance with the logical flow of
   * the application.</p> <p>Amazon SWF gives you full control over implementing
   * tasks and coordinating them without worrying about underlying complexities such
   * as tracking their progress and maintaining their state.</p> <p>This
   * documentation serves as reference only. For a broader overview of the Amazon SWF
   * programming model, see the <i> <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF
   * Developer Guide</a> </i>.</p>
   */
  class AWS_SWF_API SWFClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SWFClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SWFClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SWFClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SWFClient();

        inline virtual const char* GetServiceClientName() const override { return "SWF"; }


        /**
         * <p>Returns the number of closed workflow executions within the given domain that
         * meet the specified filtering criteria.</p> <note> <p>This operation is
         * eventually consistent. The results are best effort and may not exactly reflect
         * recent updates and changes.</p> </note> <p> <b>Access Control</b> </p> <p>You
         * can use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagFilter.tag</code>: String constraint. The key is
         * <code>swf:tagFilter.tag</code>.</p> </li> <li> <p> <code>typeFilter.name</code>:
         * String constraint. The key is <code>swf:typeFilter.name</code>.</p> </li> <li>
         * <p> <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountClosedWorkflowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::CountClosedWorkflowExecutionsOutcome CountClosedWorkflowExecutions(const Model::CountClosedWorkflowExecutionsRequest& request) const;

        /**
         * <p>Returns the number of closed workflow executions within the given domain that
         * meet the specified filtering criteria.</p> <note> <p>This operation is
         * eventually consistent. The results are best effort and may not exactly reflect
         * recent updates and changes.</p> </note> <p> <b>Access Control</b> </p> <p>You
         * can use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagFilter.tag</code>: String constraint. The key is
         * <code>swf:tagFilter.tag</code>.</p> </li> <li> <p> <code>typeFilter.name</code>:
         * String constraint. The key is <code>swf:typeFilter.name</code>.</p> </li> <li>
         * <p> <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountClosedWorkflowExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CountClosedWorkflowExecutionsOutcomeCallable CountClosedWorkflowExecutionsCallable(const Model::CountClosedWorkflowExecutionsRequest& request) const;

        /**
         * <p>Returns the number of closed workflow executions within the given domain that
         * meet the specified filtering criteria.</p> <note> <p>This operation is
         * eventually consistent. The results are best effort and may not exactly reflect
         * recent updates and changes.</p> </note> <p> <b>Access Control</b> </p> <p>You
         * can use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagFilter.tag</code>: String constraint. The key is
         * <code>swf:tagFilter.tag</code>.</p> </li> <li> <p> <code>typeFilter.name</code>:
         * String constraint. The key is <code>swf:typeFilter.name</code>.</p> </li> <li>
         * <p> <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountClosedWorkflowExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CountClosedWorkflowExecutionsAsync(const Model::CountClosedWorkflowExecutionsRequest& request, const CountClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of open workflow executions within the given domain that
         * meet the specified filtering criteria.</p> <note> <p>This operation is
         * eventually consistent. The results are best effort and may not exactly reflect
         * recent updates and changes.</p> </note> <p> <b>Access Control</b> </p> <p>You
         * can use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagFilter.tag</code>: String constraint. The key is
         * <code>swf:tagFilter.tag</code>.</p> </li> <li> <p> <code>typeFilter.name</code>:
         * String constraint. The key is <code>swf:typeFilter.name</code>.</p> </li> <li>
         * <p> <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountOpenWorkflowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::CountOpenWorkflowExecutionsOutcome CountOpenWorkflowExecutions(const Model::CountOpenWorkflowExecutionsRequest& request) const;

        /**
         * <p>Returns the number of open workflow executions within the given domain that
         * meet the specified filtering criteria.</p> <note> <p>This operation is
         * eventually consistent. The results are best effort and may not exactly reflect
         * recent updates and changes.</p> </note> <p> <b>Access Control</b> </p> <p>You
         * can use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagFilter.tag</code>: String constraint. The key is
         * <code>swf:tagFilter.tag</code>.</p> </li> <li> <p> <code>typeFilter.name</code>:
         * String constraint. The key is <code>swf:typeFilter.name</code>.</p> </li> <li>
         * <p> <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountOpenWorkflowExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CountOpenWorkflowExecutionsOutcomeCallable CountOpenWorkflowExecutionsCallable(const Model::CountOpenWorkflowExecutionsRequest& request) const;

        /**
         * <p>Returns the number of open workflow executions within the given domain that
         * meet the specified filtering criteria.</p> <note> <p>This operation is
         * eventually consistent. The results are best effort and may not exactly reflect
         * recent updates and changes.</p> </note> <p> <b>Access Control</b> </p> <p>You
         * can use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagFilter.tag</code>: String constraint. The key is
         * <code>swf:tagFilter.tag</code>.</p> </li> <li> <p> <code>typeFilter.name</code>:
         * String constraint. The key is <code>swf:typeFilter.name</code>.</p> </li> <li>
         * <p> <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountOpenWorkflowExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CountOpenWorkflowExecutionsAsync(const Model::CountOpenWorkflowExecutionsRequest& request, const CountOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the estimated number of activity tasks in the specified task list.
         * The count returned is an approximation and isn't guaranteed to be exact. If you
         * specify a task list that no activity task was ever scheduled in then
         * <code>0</code> is returned.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the <code>taskList.name</code> parameter by using a
         * <code>Condition</code> element with the <code>swf:taskList.name</code> key to
         * allow the action to access only certain task lists.</p> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountPendingActivityTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::CountPendingActivityTasksOutcome CountPendingActivityTasks(const Model::CountPendingActivityTasksRequest& request) const;

        /**
         * <p>Returns the estimated number of activity tasks in the specified task list.
         * The count returned is an approximation and isn't guaranteed to be exact. If you
         * specify a task list that no activity task was ever scheduled in then
         * <code>0</code> is returned.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the <code>taskList.name</code> parameter by using a
         * <code>Condition</code> element with the <code>swf:taskList.name</code> key to
         * allow the action to access only certain task lists.</p> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountPendingActivityTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CountPendingActivityTasksOutcomeCallable CountPendingActivityTasksCallable(const Model::CountPendingActivityTasksRequest& request) const;

        /**
         * <p>Returns the estimated number of activity tasks in the specified task list.
         * The count returned is an approximation and isn't guaranteed to be exact. If you
         * specify a task list that no activity task was ever scheduled in then
         * <code>0</code> is returned.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the <code>taskList.name</code> parameter by using a
         * <code>Condition</code> element with the <code>swf:taskList.name</code> key to
         * allow the action to access only certain task lists.</p> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountPendingActivityTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CountPendingActivityTasksAsync(const Model::CountPendingActivityTasksRequest& request, const CountPendingActivityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the estimated number of decision tasks in the specified task list.
         * The count returned is an approximation and isn't guaranteed to be exact. If you
         * specify a task list that no decision task was ever scheduled in then
         * <code>0</code> is returned.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the <code>taskList.name</code> parameter by using a
         * <code>Condition</code> element with the <code>swf:taskList.name</code> key to
         * allow the action to access only certain task lists.</p> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountPendingDecisionTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::CountPendingDecisionTasksOutcome CountPendingDecisionTasks(const Model::CountPendingDecisionTasksRequest& request) const;

        /**
         * <p>Returns the estimated number of decision tasks in the specified task list.
         * The count returned is an approximation and isn't guaranteed to be exact. If you
         * specify a task list that no decision task was ever scheduled in then
         * <code>0</code> is returned.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the <code>taskList.name</code> parameter by using a
         * <code>Condition</code> element with the <code>swf:taskList.name</code> key to
         * allow the action to access only certain task lists.</p> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountPendingDecisionTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CountPendingDecisionTasksOutcomeCallable CountPendingDecisionTasksCallable(const Model::CountPendingDecisionTasksRequest& request) const;

        /**
         * <p>Returns the estimated number of decision tasks in the specified task list.
         * The count returned is an approximation and isn't guaranteed to be exact. If you
         * specify a task list that no decision task was ever scheduled in then
         * <code>0</code> is returned.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the <code>taskList.name</code> parameter by using a
         * <code>Condition</code> element with the <code>swf:taskList.name</code> key to
         * allow the action to access only certain task lists.</p> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountPendingDecisionTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CountPendingDecisionTasksAsync(const Model::CountPendingDecisionTasksRequest& request, const CountPendingDecisionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecates the specified <i>activity type</i>. After an activity type has
         * been deprecated, you cannot create new tasks of that activity type. Tasks of
         * this type that were scheduled before the type was deprecated continue to
         * run.</p> <note> <p>This operation is eventually consistent. The results are best
         * effort and may not exactly reflect recent updates and changes.</p> </note> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>activityType.name</code>: String
         * constraint. The key is <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateActivityType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateActivityTypeOutcome DeprecateActivityType(const Model::DeprecateActivityTypeRequest& request) const;

        /**
         * <p>Deprecates the specified <i>activity type</i>. After an activity type has
         * been deprecated, you cannot create new tasks of that activity type. Tasks of
         * this type that were scheduled before the type was deprecated continue to
         * run.</p> <note> <p>This operation is eventually consistent. The results are best
         * effort and may not exactly reflect recent updates and changes.</p> </note> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>activityType.name</code>: String
         * constraint. The key is <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateActivityType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprecateActivityTypeOutcomeCallable DeprecateActivityTypeCallable(const Model::DeprecateActivityTypeRequest& request) const;

        /**
         * <p>Deprecates the specified <i>activity type</i>. After an activity type has
         * been deprecated, you cannot create new tasks of that activity type. Tasks of
         * this type that were scheduled before the type was deprecated continue to
         * run.</p> <note> <p>This operation is eventually consistent. The results are best
         * effort and may not exactly reflect recent updates and changes.</p> </note> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>activityType.name</code>: String
         * constraint. The key is <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateActivityType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprecateActivityTypeAsync(const Model::DeprecateActivityTypeRequest& request, const DeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecates the specified domain. After a domain has been deprecated it cannot
         * be used to create new workflow executions or register new types. However, you
         * can still use visibility actions on this domain. Deprecating a domain also
         * deprecates all activity and workflow types registered in the domain. Executions
         * that were started before the domain was deprecated continues to run.</p> <note>
         * <p>This operation is eventually consistent. The results are best effort and may
         * not exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateDomainOutcome DeprecateDomain(const Model::DeprecateDomainRequest& request) const;

        /**
         * <p>Deprecates the specified domain. After a domain has been deprecated it cannot
         * be used to create new workflow executions or register new types. However, you
         * can still use visibility actions on this domain. Deprecating a domain also
         * deprecates all activity and workflow types registered in the domain. Executions
         * that were started before the domain was deprecated continues to run.</p> <note>
         * <p>This operation is eventually consistent. The results are best effort and may
         * not exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprecateDomainOutcomeCallable DeprecateDomainCallable(const Model::DeprecateDomainRequest& request) const;

        /**
         * <p>Deprecates the specified domain. After a domain has been deprecated it cannot
         * be used to create new workflow executions or register new types. However, you
         * can still use visibility actions on this domain. Deprecating a domain also
         * deprecates all activity and workflow types registered in the domain. Executions
         * that were started before the domain was deprecated continues to run.</p> <note>
         * <p>This operation is eventually consistent. The results are best effort and may
         * not exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprecateDomainAsync(const Model::DeprecateDomainRequest& request, const DeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecates the specified <i>workflow type</i>. After a workflow type has been
         * deprecated, you cannot create new executions of that type. Executions that were
         * started before the type was deprecated continues to run. A deprecated workflow
         * type may still be used when calling visibility actions.</p> <note> <p>This
         * operation is eventually consistent. The results are best effort and may not
         * exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>Constrain the following parameters by using
         * a <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateWorkflowType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateWorkflowTypeOutcome DeprecateWorkflowType(const Model::DeprecateWorkflowTypeRequest& request) const;

        /**
         * <p>Deprecates the specified <i>workflow type</i>. After a workflow type has been
         * deprecated, you cannot create new executions of that type. Executions that were
         * started before the type was deprecated continues to run. A deprecated workflow
         * type may still be used when calling visibility actions.</p> <note> <p>This
         * operation is eventually consistent. The results are best effort and may not
         * exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>Constrain the following parameters by using
         * a <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateWorkflowType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprecateWorkflowTypeOutcomeCallable DeprecateWorkflowTypeCallable(const Model::DeprecateWorkflowTypeRequest& request) const;

        /**
         * <p>Deprecates the specified <i>workflow type</i>. After a workflow type has been
         * deprecated, you cannot create new executions of that type. Executions that were
         * started before the type was deprecated continues to run. A deprecated workflow
         * type may still be used when calling visibility actions.</p> <note> <p>This
         * operation is eventually consistent. The results are best effort and may not
         * exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>Constrain the following parameters by using
         * a <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateWorkflowType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprecateWorkflowTypeAsync(const Model::DeprecateWorkflowTypeRequest& request, const DeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified activity type. This includes
         * configuration settings provided when the type was registered and other general
         * information about the type.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>activityType.name</code>: String constraint. The key is
         * <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeActivityType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivityTypeOutcome DescribeActivityType(const Model::DescribeActivityTypeRequest& request) const;

        /**
         * <p>Returns information about the specified activity type. This includes
         * configuration settings provided when the type was registered and other general
         * information about the type.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>activityType.name</code>: String constraint. The key is
         * <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeActivityType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActivityTypeOutcomeCallable DescribeActivityTypeCallable(const Model::DescribeActivityTypeRequest& request) const;

        /**
         * <p>Returns information about the specified activity type. This includes
         * configuration settings provided when the type was registered and other general
         * information about the type.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>activityType.name</code>: String constraint. The key is
         * <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeActivityType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActivityTypeAsync(const Model::DescribeActivityTypeRequest& request, const DescribeActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified domain, including description and
         * status.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * <p>Returns information about the specified domain, including description and
         * status.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request) const;

        /**
         * <p>Returns information about the specified domain, including description and
         * status.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified workflow execution including its type
         * and some statistics.</p> <note> <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li> <p>You
         * cannot use an IAM policy to constrain this action's parameters.</p> </li> </ul>
         * <p>If the caller doesn't have sufficient permissions to invoke the action, or
         * the parameter values fall outside the specified constraints, the action fails.
         * The associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkflowExecutionOutcome DescribeWorkflowExecution(const Model::DescribeWorkflowExecutionRequest& request) const;

        /**
         * <p>Returns information about the specified workflow execution including its type
         * and some statistics.</p> <note> <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li> <p>You
         * cannot use an IAM policy to constrain this action's parameters.</p> </li> </ul>
         * <p>If the caller doesn't have sufficient permissions to invoke the action, or
         * the parameter values fall outside the specified constraints, the action fails.
         * The associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkflowExecutionOutcomeCallable DescribeWorkflowExecutionCallable(const Model::DescribeWorkflowExecutionRequest& request) const;

        /**
         * <p>Returns information about the specified workflow execution including its type
         * and some statistics.</p> <note> <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li> <p>You
         * cannot use an IAM policy to constrain this action's parameters.</p> </li> </ul>
         * <p>If the caller doesn't have sufficient permissions to invoke the action, or
         * the parameter values fall outside the specified constraints, the action fails.
         * The associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkflowExecutionAsync(const Model::DescribeWorkflowExecutionRequest& request, const DescribeWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified <i>workflow type</i>. This includes
         * configuration settings specified when the type was registered and other
         * information such as creation date, current status, etc.</p> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>Constrain the following parameters by using
         * a <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeWorkflowType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkflowTypeOutcome DescribeWorkflowType(const Model::DescribeWorkflowTypeRequest& request) const;

        /**
         * <p>Returns information about the specified <i>workflow type</i>. This includes
         * configuration settings specified when the type was registered and other
         * information such as creation date, current status, etc.</p> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>Constrain the following parameters by using
         * a <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeWorkflowType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkflowTypeOutcomeCallable DescribeWorkflowTypeCallable(const Model::DescribeWorkflowTypeRequest& request) const;

        /**
         * <p>Returns information about the specified <i>workflow type</i>. This includes
         * configuration settings specified when the type was registered and other
         * information such as creation date, current status, etc.</p> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>Constrain the following parameters by using
         * a <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeWorkflowType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkflowTypeAsync(const Model::DescribeWorkflowTypeRequest& request, const DescribeWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the history of the specified workflow execution. The results may be
         * split into multiple pages. To retrieve subsequent pages, make the call again
         * using the <code>nextPageToken</code> returned by the initial call.</p> <note>
         * <p>This operation is eventually consistent. The results are best effort and may
         * not exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/GetWorkflowExecutionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowExecutionHistoryOutcome GetWorkflowExecutionHistory(const Model::GetWorkflowExecutionHistoryRequest& request) const;

        /**
         * <p>Returns the history of the specified workflow execution. The results may be
         * split into multiple pages. To retrieve subsequent pages, make the call again
         * using the <code>nextPageToken</code> returned by the initial call.</p> <note>
         * <p>This operation is eventually consistent. The results are best effort and may
         * not exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/GetWorkflowExecutionHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowExecutionHistoryOutcomeCallable GetWorkflowExecutionHistoryCallable(const Model::GetWorkflowExecutionHistoryRequest& request) const;

        /**
         * <p>Returns the history of the specified workflow execution. The results may be
         * split into multiple pages. To retrieve subsequent pages, make the call again
         * using the <code>nextPageToken</code> returned by the initial call.</p> <note>
         * <p>This operation is eventually consistent. The results are best effort and may
         * not exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/GetWorkflowExecutionHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowExecutionHistoryAsync(const Model::GetWorkflowExecutionHistoryRequest& request, const GetWorkflowExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all activities registered in the specified domain
         * that match the specified name and registration status. The result includes
         * information like creation date, current status of the activity, etc. The results
         * may be split into multiple pages. To retrieve subsequent pages, make the call
         * again using the <code>nextPageToken</code> returned by the initial call.</p> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListActivityTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActivityTypesOutcome ListActivityTypes(const Model::ListActivityTypesRequest& request) const;

        /**
         * <p>Returns information about all activities registered in the specified domain
         * that match the specified name and registration status. The result includes
         * information like creation date, current status of the activity, etc. The results
         * may be split into multiple pages. To retrieve subsequent pages, make the call
         * again using the <code>nextPageToken</code> returned by the initial call.</p> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListActivityTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActivityTypesOutcomeCallable ListActivityTypesCallable(const Model::ListActivityTypesRequest& request) const;

        /**
         * <p>Returns information about all activities registered in the specified domain
         * that match the specified name and registration status. The result includes
         * information like creation date, current status of the activity, etc. The results
         * may be split into multiple pages. To retrieve subsequent pages, make the call
         * again using the <code>nextPageToken</code> returned by the initial call.</p> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListActivityTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActivityTypesAsync(const Model::ListActivityTypesRequest& request, const ListActivityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of closed workflow executions in the specified domain that
         * meet the filtering criteria. The results may be split into multiple pages. To
         * retrieve subsequent pages, make the call again using the nextPageToken returned
         * by the initial call.</p> <note> <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li>
         * <p>Constrain the following parameters by using a <code>Condition</code> element
         * with the appropriate keys.</p> <ul> <li> <p> <code>tagFilter.tag</code>: String
         * constraint. The key is <code>swf:tagFilter.tag</code>.</p> </li> <li> <p>
         * <code>typeFilter.name</code>: String constraint. The key is
         * <code>swf:typeFilter.name</code>.</p> </li> <li> <p>
         * <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListClosedWorkflowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClosedWorkflowExecutionsOutcome ListClosedWorkflowExecutions(const Model::ListClosedWorkflowExecutionsRequest& request) const;

        /**
         * <p>Returns a list of closed workflow executions in the specified domain that
         * meet the filtering criteria. The results may be split into multiple pages. To
         * retrieve subsequent pages, make the call again using the nextPageToken returned
         * by the initial call.</p> <note> <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li>
         * <p>Constrain the following parameters by using a <code>Condition</code> element
         * with the appropriate keys.</p> <ul> <li> <p> <code>tagFilter.tag</code>: String
         * constraint. The key is <code>swf:tagFilter.tag</code>.</p> </li> <li> <p>
         * <code>typeFilter.name</code>: String constraint. The key is
         * <code>swf:typeFilter.name</code>.</p> </li> <li> <p>
         * <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListClosedWorkflowExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClosedWorkflowExecutionsOutcomeCallable ListClosedWorkflowExecutionsCallable(const Model::ListClosedWorkflowExecutionsRequest& request) const;

        /**
         * <p>Returns a list of closed workflow executions in the specified domain that
         * meet the filtering criteria. The results may be split into multiple pages. To
         * retrieve subsequent pages, make the call again using the nextPageToken returned
         * by the initial call.</p> <note> <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li>
         * <p>Constrain the following parameters by using a <code>Condition</code> element
         * with the appropriate keys.</p> <ul> <li> <p> <code>tagFilter.tag</code>: String
         * constraint. The key is <code>swf:tagFilter.tag</code>.</p> </li> <li> <p>
         * <code>typeFilter.name</code>: String constraint. The key is
         * <code>swf:typeFilter.name</code>.</p> </li> <li> <p>
         * <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListClosedWorkflowExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClosedWorkflowExecutionsAsync(const Model::ListClosedWorkflowExecutionsRequest& request, const ListClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of domains registered in the account. The results may be
         * split into multiple pages. To retrieve subsequent pages, make the call again
         * using the nextPageToken returned by the initial call.</p> <note> <p>This
         * operation is eventually consistent. The results are best effort and may not
         * exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains. The
         * element must be set to <code>arn:aws:swf::AccountID:domain/ *</code>, where
         * <i>AccountID</i> is the account ID, with no dashes.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>You cannot use an IAM policy to constrain this action's
         * parameters.</p> </li> </ul> <p>If the caller doesn't have sufficient permissions
         * to invoke the action, or the parameter values fall outside the specified
         * constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListDomains">AWS API
         * Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * <p>Returns the list of domains registered in the account. The results may be
         * split into multiple pages. To retrieve subsequent pages, make the call again
         * using the nextPageToken returned by the initial call.</p> <note> <p>This
         * operation is eventually consistent. The results are best effort and may not
         * exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains. The
         * element must be set to <code>arn:aws:swf::AccountID:domain/ *</code>, where
         * <i>AccountID</i> is the account ID, with no dashes.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>You cannot use an IAM policy to constrain this action's
         * parameters.</p> </li> </ul> <p>If the caller doesn't have sufficient permissions
         * to invoke the action, or the parameter values fall outside the specified
         * constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListDomains">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * <p>Returns the list of domains registered in the account. The results may be
         * split into multiple pages. To retrieve subsequent pages, make the call again
         * using the nextPageToken returned by the initial call.</p> <note> <p>This
         * operation is eventually consistent. The results are best effort and may not
         * exactly reflect recent updates and changes.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains. The
         * element must be set to <code>arn:aws:swf::AccountID:domain/ *</code>, where
         * <i>AccountID</i> is the account ID, with no dashes.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>You cannot use an IAM policy to constrain this action's
         * parameters.</p> </li> </ul> <p>If the caller doesn't have sufficient permissions
         * to invoke the action, or the parameter values fall outside the specified
         * constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListDomains">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of open workflow executions in the specified domain that meet
         * the filtering criteria. The results may be split into multiple pages. To
         * retrieve subsequent pages, make the call again using the nextPageToken returned
         * by the initial call.</p> <note> <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li>
         * <p>Constrain the following parameters by using a <code>Condition</code> element
         * with the appropriate keys.</p> <ul> <li> <p> <code>tagFilter.tag</code>: String
         * constraint. The key is <code>swf:tagFilter.tag</code>.</p> </li> <li> <p>
         * <code>typeFilter.name</code>: String constraint. The key is
         * <code>swf:typeFilter.name</code>.</p> </li> <li> <p>
         * <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListOpenWorkflowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpenWorkflowExecutionsOutcome ListOpenWorkflowExecutions(const Model::ListOpenWorkflowExecutionsRequest& request) const;

        /**
         * <p>Returns a list of open workflow executions in the specified domain that meet
         * the filtering criteria. The results may be split into multiple pages. To
         * retrieve subsequent pages, make the call again using the nextPageToken returned
         * by the initial call.</p> <note> <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li>
         * <p>Constrain the following parameters by using a <code>Condition</code> element
         * with the appropriate keys.</p> <ul> <li> <p> <code>tagFilter.tag</code>: String
         * constraint. The key is <code>swf:tagFilter.tag</code>.</p> </li> <li> <p>
         * <code>typeFilter.name</code>: String constraint. The key is
         * <code>swf:typeFilter.name</code>.</p> </li> <li> <p>
         * <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListOpenWorkflowExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOpenWorkflowExecutionsOutcomeCallable ListOpenWorkflowExecutionsCallable(const Model::ListOpenWorkflowExecutionsRequest& request) const;

        /**
         * <p>Returns a list of open workflow executions in the specified domain that meet
         * the filtering criteria. The results may be split into multiple pages. To
         * retrieve subsequent pages, make the call again using the nextPageToken returned
         * by the initial call.</p> <note> <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li>
         * <p>Constrain the following parameters by using a <code>Condition</code> element
         * with the appropriate keys.</p> <ul> <li> <p> <code>tagFilter.tag</code>: String
         * constraint. The key is <code>swf:tagFilter.tag</code>.</p> </li> <li> <p>
         * <code>typeFilter.name</code>: String constraint. The key is
         * <code>swf:typeFilter.name</code>.</p> </li> <li> <p>
         * <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListOpenWorkflowExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOpenWorkflowExecutionsAsync(const Model::ListOpenWorkflowExecutionsRequest& request, const ListOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List tags for a given domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List tags for a given domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List tags for a given domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about workflow types in the specified domain. The results
         * may be split into multiple pages that can be retrieved by making the call
         * repeatedly.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListWorkflowTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowTypesOutcome ListWorkflowTypes(const Model::ListWorkflowTypesRequest& request) const;

        /**
         * <p>Returns information about workflow types in the specified domain. The results
         * may be split into multiple pages that can be retrieved by making the call
         * repeatedly.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListWorkflowTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkflowTypesOutcomeCallable ListWorkflowTypesCallable(const Model::ListWorkflowTypesRequest& request) const;

        /**
         * <p>Returns information about workflow types in the specified domain. The results
         * may be split into multiple pages that can be retrieved by making the call
         * repeatedly.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListWorkflowTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkflowTypesAsync(const Model::ListWorkflowTypesRequest& request, const ListWorkflowTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by workers to get an <a>ActivityTask</a> from the specified activity
         * <code>taskList</code>. This initiates a long poll, where the service holds the
         * HTTP connection open and responds as soon as a task becomes available. The
         * maximum time the service holds on to the request before responding is 60
         * seconds. If no task is available within 60 seconds, the poll returns an empty
         * result. An empty result, in this context, means that an ActivityTask is
         * returned, but that the value of taskToken is an empty string. If a task is
         * returned, the worker should use its type to identify and process it
         * correctly.</p> <important> <p>Workers should set their client side socket
         * timeout to at least 70 seconds (10 seconds higher than the maximum time service
         * may hold the poll request).</p> </important> <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the <code>taskList.name</code> parameter by
         * using a <code>Condition</code> element with the <code>swf:taskList.name</code>
         * key to allow the action to access only certain task lists.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/PollForActivityTask">AWS
         * API Reference</a></p>
         */
        virtual Model::PollForActivityTaskOutcome PollForActivityTask(const Model::PollForActivityTaskRequest& request) const;

        /**
         * <p>Used by workers to get an <a>ActivityTask</a> from the specified activity
         * <code>taskList</code>. This initiates a long poll, where the service holds the
         * HTTP connection open and responds as soon as a task becomes available. The
         * maximum time the service holds on to the request before responding is 60
         * seconds. If no task is available within 60 seconds, the poll returns an empty
         * result. An empty result, in this context, means that an ActivityTask is
         * returned, but that the value of taskToken is an empty string. If a task is
         * returned, the worker should use its type to identify and process it
         * correctly.</p> <important> <p>Workers should set their client side socket
         * timeout to at least 70 seconds (10 seconds higher than the maximum time service
         * may hold the poll request).</p> </important> <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the <code>taskList.name</code> parameter by
         * using a <code>Condition</code> element with the <code>swf:taskList.name</code>
         * key to allow the action to access only certain task lists.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/PollForActivityTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PollForActivityTaskOutcomeCallable PollForActivityTaskCallable(const Model::PollForActivityTaskRequest& request) const;

        /**
         * <p>Used by workers to get an <a>ActivityTask</a> from the specified activity
         * <code>taskList</code>. This initiates a long poll, where the service holds the
         * HTTP connection open and responds as soon as a task becomes available. The
         * maximum time the service holds on to the request before responding is 60
         * seconds. If no task is available within 60 seconds, the poll returns an empty
         * result. An empty result, in this context, means that an ActivityTask is
         * returned, but that the value of taskToken is an empty string. If a task is
         * returned, the worker should use its type to identify and process it
         * correctly.</p> <important> <p>Workers should set their client side socket
         * timeout to at least 70 seconds (10 seconds higher than the maximum time service
         * may hold the poll request).</p> </important> <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the <code>taskList.name</code> parameter by
         * using a <code>Condition</code> element with the <code>swf:taskList.name</code>
         * key to allow the action to access only certain task lists.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/PollForActivityTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PollForActivityTaskAsync(const Model::PollForActivityTaskRequest& request, const PollForActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by deciders to get a <a>DecisionTask</a> from the specified decision
         * <code>taskList</code>. A decision task may be returned for any open workflow
         * execution that is using the specified task list. The task includes a paginated
         * view of the history of the workflow execution. The decider should use the
         * workflow type and the history to determine how to properly handle the task.</p>
         * <p>This action initiates a long poll, where the service holds the HTTP
         * connection open and responds as soon a task becomes available. If no decision
         * task is available in the specified task list before the timeout of 60 seconds
         * expires, an empty result is returned. An empty result, in this context, means
         * that a DecisionTask is returned, but that the value of taskToken is an empty
         * string.</p> <important> <p>Deciders should set their client side socket timeout
         * to at least 70 seconds (10 seconds higher than the timeout).</p> </important>
         * <important> <p>Because the number of workflow history events for a single
         * workflow execution might be very large, the result returned might be split up
         * across a number of pages. To retrieve subsequent pages, make additional calls to
         * <code>PollForDecisionTask</code> using the <code>nextPageToken</code> returned
         * by the initial call. Note that you do <i>not</i> call
         * <code>GetWorkflowExecutionHistory</code> with this <code>nextPageToken</code>.
         * Instead, call <code>PollForDecisionTask</code> again.</p> </important> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * <code>taskList.name</code> parameter by using a <code>Condition</code> element
         * with the <code>swf:taskList.name</code> key to allow the action to access only
         * certain task lists.</p> </li> </ul> <p>If the caller doesn't have sufficient
         * permissions to invoke the action, or the parameter values fall outside the
         * specified constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/PollForDecisionTask">AWS
         * API Reference</a></p>
         */
        virtual Model::PollForDecisionTaskOutcome PollForDecisionTask(const Model::PollForDecisionTaskRequest& request) const;

        /**
         * <p>Used by deciders to get a <a>DecisionTask</a> from the specified decision
         * <code>taskList</code>. A decision task may be returned for any open workflow
         * execution that is using the specified task list. The task includes a paginated
         * view of the history of the workflow execution. The decider should use the
         * workflow type and the history to determine how to properly handle the task.</p>
         * <p>This action initiates a long poll, where the service holds the HTTP
         * connection open and responds as soon a task becomes available. If no decision
         * task is available in the specified task list before the timeout of 60 seconds
         * expires, an empty result is returned. An empty result, in this context, means
         * that a DecisionTask is returned, but that the value of taskToken is an empty
         * string.</p> <important> <p>Deciders should set their client side socket timeout
         * to at least 70 seconds (10 seconds higher than the timeout).</p> </important>
         * <important> <p>Because the number of workflow history events for a single
         * workflow execution might be very large, the result returned might be split up
         * across a number of pages. To retrieve subsequent pages, make additional calls to
         * <code>PollForDecisionTask</code> using the <code>nextPageToken</code> returned
         * by the initial call. Note that you do <i>not</i> call
         * <code>GetWorkflowExecutionHistory</code> with this <code>nextPageToken</code>.
         * Instead, call <code>PollForDecisionTask</code> again.</p> </important> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * <code>taskList.name</code> parameter by using a <code>Condition</code> element
         * with the <code>swf:taskList.name</code> key to allow the action to access only
         * certain task lists.</p> </li> </ul> <p>If the caller doesn't have sufficient
         * permissions to invoke the action, or the parameter values fall outside the
         * specified constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/PollForDecisionTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PollForDecisionTaskOutcomeCallable PollForDecisionTaskCallable(const Model::PollForDecisionTaskRequest& request) const;

        /**
         * <p>Used by deciders to get a <a>DecisionTask</a> from the specified decision
         * <code>taskList</code>. A decision task may be returned for any open workflow
         * execution that is using the specified task list. The task includes a paginated
         * view of the history of the workflow execution. The decider should use the
         * workflow type and the history to determine how to properly handle the task.</p>
         * <p>This action initiates a long poll, where the service holds the HTTP
         * connection open and responds as soon a task becomes available. If no decision
         * task is available in the specified task list before the timeout of 60 seconds
         * expires, an empty result is returned. An empty result, in this context, means
         * that a DecisionTask is returned, but that the value of taskToken is an empty
         * string.</p> <important> <p>Deciders should set their client side socket timeout
         * to at least 70 seconds (10 seconds higher than the timeout).</p> </important>
         * <important> <p>Because the number of workflow history events for a single
         * workflow execution might be very large, the result returned might be split up
         * across a number of pages. To retrieve subsequent pages, make additional calls to
         * <code>PollForDecisionTask</code> using the <code>nextPageToken</code> returned
         * by the initial call. Note that you do <i>not</i> call
         * <code>GetWorkflowExecutionHistory</code> with this <code>nextPageToken</code>.
         * Instead, call <code>PollForDecisionTask</code> again.</p> </important> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * <code>taskList.name</code> parameter by using a <code>Condition</code> element
         * with the <code>swf:taskList.name</code> key to allow the action to access only
         * certain task lists.</p> </li> </ul> <p>If the caller doesn't have sufficient
         * permissions to invoke the action, or the parameter values fall outside the
         * specified constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/PollForDecisionTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PollForDecisionTaskAsync(const Model::PollForDecisionTaskRequest& request, const PollForDecisionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by activity workers to report to the service that the
         * <a>ActivityTask</a> represented by the specified <code>taskToken</code> is still
         * making progress. The worker can also specify details of the progress, for
         * example percent complete, using the <code>details</code> parameter. This action
         * can also be used by the worker as a mechanism to check if cancellation is being
         * requested for the activity task. If a cancellation is being attempted for the
         * specified task, then the boolean <code>cancelRequested</code> flag returned by
         * the service is set to <code>true</code>.</p> <p>This action resets the
         * <code>taskHeartbeatTimeout</code> clock. The <code>taskHeartbeatTimeout</code>
         * is specified in <a>RegisterActivityType</a>.</p> <p>This action doesn't in
         * itself create an event in the workflow execution history. However, if the task
         * times out, the workflow execution history contains a
         * <code>ActivityTaskTimedOut</code> event that contains the information from the
         * last heartbeat generated by the activity worker.</p> <note> <p>The
         * <code>taskStartToCloseTimeout</code> of an activity type is the maximum duration
         * of an activity task, regardless of the number of
         * <a>RecordActivityTaskHeartbeat</a> requests received. The
         * <code>taskStartToCloseTimeout</code> is also specified in
         * <a>RegisterActivityType</a>.</p> </note> <note> <p>This operation is only useful
         * for long-lived activities to report liveliness of the task and to determine if a
         * cancellation is being attempted.</p> </note> <important> <p>If the
         * <code>cancelRequested</code> flag returns <code>true</code>, a cancellation is
         * being attempted. If the worker can cancel the activity, it should respond with
         * <a>RespondActivityTaskCanceled</a>. Otherwise, it should ignore the cancellation
         * request.</p> </important> <p> <b>Access Control</b> </p> <p>You can use IAM
         * policies to control this action's access to Amazon SWF resources as follows:</p>
         * <ul> <li> <p>Use a <code>Resource</code> element with the domain name to limit
         * the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>You cannot use an IAM policy to constrain this action's
         * parameters.</p> </li> </ul> <p>If the caller doesn't have sufficient permissions
         * to invoke the action, or the parameter values fall outside the specified
         * constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RecordActivityTaskHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::RecordActivityTaskHeartbeatOutcome RecordActivityTaskHeartbeat(const Model::RecordActivityTaskHeartbeatRequest& request) const;

        /**
         * <p>Used by activity workers to report to the service that the
         * <a>ActivityTask</a> represented by the specified <code>taskToken</code> is still
         * making progress. The worker can also specify details of the progress, for
         * example percent complete, using the <code>details</code> parameter. This action
         * can also be used by the worker as a mechanism to check if cancellation is being
         * requested for the activity task. If a cancellation is being attempted for the
         * specified task, then the boolean <code>cancelRequested</code> flag returned by
         * the service is set to <code>true</code>.</p> <p>This action resets the
         * <code>taskHeartbeatTimeout</code> clock. The <code>taskHeartbeatTimeout</code>
         * is specified in <a>RegisterActivityType</a>.</p> <p>This action doesn't in
         * itself create an event in the workflow execution history. However, if the task
         * times out, the workflow execution history contains a
         * <code>ActivityTaskTimedOut</code> event that contains the information from the
         * last heartbeat generated by the activity worker.</p> <note> <p>The
         * <code>taskStartToCloseTimeout</code> of an activity type is the maximum duration
         * of an activity task, regardless of the number of
         * <a>RecordActivityTaskHeartbeat</a> requests received. The
         * <code>taskStartToCloseTimeout</code> is also specified in
         * <a>RegisterActivityType</a>.</p> </note> <note> <p>This operation is only useful
         * for long-lived activities to report liveliness of the task and to determine if a
         * cancellation is being attempted.</p> </note> <important> <p>If the
         * <code>cancelRequested</code> flag returns <code>true</code>, a cancellation is
         * being attempted. If the worker can cancel the activity, it should respond with
         * <a>RespondActivityTaskCanceled</a>. Otherwise, it should ignore the cancellation
         * request.</p> </important> <p> <b>Access Control</b> </p> <p>You can use IAM
         * policies to control this action's access to Amazon SWF resources as follows:</p>
         * <ul> <li> <p>Use a <code>Resource</code> element with the domain name to limit
         * the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>You cannot use an IAM policy to constrain this action's
         * parameters.</p> </li> </ul> <p>If the caller doesn't have sufficient permissions
         * to invoke the action, or the parameter values fall outside the specified
         * constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RecordActivityTaskHeartbeat">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RecordActivityTaskHeartbeatOutcomeCallable RecordActivityTaskHeartbeatCallable(const Model::RecordActivityTaskHeartbeatRequest& request) const;

        /**
         * <p>Used by activity workers to report to the service that the
         * <a>ActivityTask</a> represented by the specified <code>taskToken</code> is still
         * making progress. The worker can also specify details of the progress, for
         * example percent complete, using the <code>details</code> parameter. This action
         * can also be used by the worker as a mechanism to check if cancellation is being
         * requested for the activity task. If a cancellation is being attempted for the
         * specified task, then the boolean <code>cancelRequested</code> flag returned by
         * the service is set to <code>true</code>.</p> <p>This action resets the
         * <code>taskHeartbeatTimeout</code> clock. The <code>taskHeartbeatTimeout</code>
         * is specified in <a>RegisterActivityType</a>.</p> <p>This action doesn't in
         * itself create an event in the workflow execution history. However, if the task
         * times out, the workflow execution history contains a
         * <code>ActivityTaskTimedOut</code> event that contains the information from the
         * last heartbeat generated by the activity worker.</p> <note> <p>The
         * <code>taskStartToCloseTimeout</code> of an activity type is the maximum duration
         * of an activity task, regardless of the number of
         * <a>RecordActivityTaskHeartbeat</a> requests received. The
         * <code>taskStartToCloseTimeout</code> is also specified in
         * <a>RegisterActivityType</a>.</p> </note> <note> <p>This operation is only useful
         * for long-lived activities to report liveliness of the task and to determine if a
         * cancellation is being attempted.</p> </note> <important> <p>If the
         * <code>cancelRequested</code> flag returns <code>true</code>, a cancellation is
         * being attempted. If the worker can cancel the activity, it should respond with
         * <a>RespondActivityTaskCanceled</a>. Otherwise, it should ignore the cancellation
         * request.</p> </important> <p> <b>Access Control</b> </p> <p>You can use IAM
         * policies to control this action's access to Amazon SWF resources as follows:</p>
         * <ul> <li> <p>Use a <code>Resource</code> element with the domain name to limit
         * the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>You cannot use an IAM policy to constrain this action's
         * parameters.</p> </li> </ul> <p>If the caller doesn't have sufficient permissions
         * to invoke the action, or the parameter values fall outside the specified
         * constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RecordActivityTaskHeartbeat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RecordActivityTaskHeartbeatAsync(const Model::RecordActivityTaskHeartbeatRequest& request, const RecordActivityTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a new <i>activity type</i> along with its configuration settings in
         * the specified domain.</p> <important> <p>A <code>TypeAlreadyExists</code> fault
         * is returned if the type already exists in the domain. You cannot change any
         * configuration settings of the type after its registration, and it must be
         * registered as a new version.</p> </important> <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>defaultTaskList.name</code>: String constraint. The key is
         * <code>swf:defaultTaskList.name</code>.</p> </li> <li> <p> <code>name</code>:
         * String constraint. The key is <code>swf:name</code>.</p> </li> <li> <p>
         * <code>version</code>: String constraint. The key is
         * <code>swf:version</code>.</p> </li> </ul> </li> </ul> <p>If the caller doesn't
         * have sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterActivityType">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterActivityTypeOutcome RegisterActivityType(const Model::RegisterActivityTypeRequest& request) const;

        /**
         * <p>Registers a new <i>activity type</i> along with its configuration settings in
         * the specified domain.</p> <important> <p>A <code>TypeAlreadyExists</code> fault
         * is returned if the type already exists in the domain. You cannot change any
         * configuration settings of the type after its registration, and it must be
         * registered as a new version.</p> </important> <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>defaultTaskList.name</code>: String constraint. The key is
         * <code>swf:defaultTaskList.name</code>.</p> </li> <li> <p> <code>name</code>:
         * String constraint. The key is <code>swf:name</code>.</p> </li> <li> <p>
         * <code>version</code>: String constraint. The key is
         * <code>swf:version</code>.</p> </li> </ul> </li> </ul> <p>If the caller doesn't
         * have sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterActivityType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterActivityTypeOutcomeCallable RegisterActivityTypeCallable(const Model::RegisterActivityTypeRequest& request) const;

        /**
         * <p>Registers a new <i>activity type</i> along with its configuration settings in
         * the specified domain.</p> <important> <p>A <code>TypeAlreadyExists</code> fault
         * is returned if the type already exists in the domain. You cannot change any
         * configuration settings of the type after its registration, and it must be
         * registered as a new version.</p> </important> <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>defaultTaskList.name</code>: String constraint. The key is
         * <code>swf:defaultTaskList.name</code>.</p> </li> <li> <p> <code>name</code>:
         * String constraint. The key is <code>swf:name</code>.</p> </li> <li> <p>
         * <code>version</code>: String constraint. The key is
         * <code>swf:version</code>.</p> </li> </ul> </li> </ul> <p>If the caller doesn't
         * have sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterActivityType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterActivityTypeAsync(const Model::RegisterActivityTypeRequest& request, const RegisterActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a new domain.</p> <p> <b>Access Control</b> </p> <p>You can use IAM
         * policies to control this action's access to Amazon SWF resources as follows:</p>
         * <ul> <li> <p>You cannot use an IAM policy to control domain access for this
         * action. The name of the domain being registered is available as the resource of
         * this action.</p> </li> <li> <p>Use an <code>Action</code> element to allow or
         * deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDomainOutcome RegisterDomain(const Model::RegisterDomainRequest& request) const;

        /**
         * <p>Registers a new domain.</p> <p> <b>Access Control</b> </p> <p>You can use IAM
         * policies to control this action's access to Amazon SWF resources as follows:</p>
         * <ul> <li> <p>You cannot use an IAM policy to control domain access for this
         * action. The name of the domain being registered is available as the resource of
         * this action.</p> </li> <li> <p>Use an <code>Action</code> element to allow or
         * deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDomainOutcomeCallable RegisterDomainCallable(const Model::RegisterDomainRequest& request) const;

        /**
         * <p>Registers a new domain.</p> <p> <b>Access Control</b> </p> <p>You can use IAM
         * policies to control this action's access to Amazon SWF resources as follows:</p>
         * <ul> <li> <p>You cannot use an IAM policy to control domain access for this
         * action. The name of the domain being registered is available as the resource of
         * this action.</p> </li> <li> <p>Use an <code>Action</code> element to allow or
         * deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDomainAsync(const Model::RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a new <i>workflow type</i> and its configuration settings in the
         * specified domain.</p> <p>The retention period for the workflow history is set by
         * the <a>RegisterDomain</a> action.</p> <important> <p>If the type already exists,
         * then a <code>TypeAlreadyExists</code> fault is returned. You cannot change the
         * configuration settings of a workflow type once it is registered and it must be
         * registered as a new version.</p> </important> <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>defaultTaskList.name</code>: String constraint. The key is
         * <code>swf:defaultTaskList.name</code>.</p> </li> <li> <p> <code>name</code>:
         * String constraint. The key is <code>swf:name</code>.</p> </li> <li> <p>
         * <code>version</code>: String constraint. The key is
         * <code>swf:version</code>.</p> </li> </ul> </li> </ul> <p>If the caller doesn't
         * have sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterWorkflowType">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterWorkflowTypeOutcome RegisterWorkflowType(const Model::RegisterWorkflowTypeRequest& request) const;

        /**
         * <p>Registers a new <i>workflow type</i> and its configuration settings in the
         * specified domain.</p> <p>The retention period for the workflow history is set by
         * the <a>RegisterDomain</a> action.</p> <important> <p>If the type already exists,
         * then a <code>TypeAlreadyExists</code> fault is returned. You cannot change the
         * configuration settings of a workflow type once it is registered and it must be
         * registered as a new version.</p> </important> <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>defaultTaskList.name</code>: String constraint. The key is
         * <code>swf:defaultTaskList.name</code>.</p> </li> <li> <p> <code>name</code>:
         * String constraint. The key is <code>swf:name</code>.</p> </li> <li> <p>
         * <code>version</code>: String constraint. The key is
         * <code>swf:version</code>.</p> </li> </ul> </li> </ul> <p>If the caller doesn't
         * have sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterWorkflowType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterWorkflowTypeOutcomeCallable RegisterWorkflowTypeCallable(const Model::RegisterWorkflowTypeRequest& request) const;

        /**
         * <p>Registers a new <i>workflow type</i> and its configuration settings in the
         * specified domain.</p> <p>The retention period for the workflow history is set by
         * the <a>RegisterDomain</a> action.</p> <important> <p>If the type already exists,
         * then a <code>TypeAlreadyExists</code> fault is returned. You cannot change the
         * configuration settings of a workflow type once it is registered and it must be
         * registered as a new version.</p> </important> <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>defaultTaskList.name</code>: String constraint. The key is
         * <code>swf:defaultTaskList.name</code>.</p> </li> <li> <p> <code>name</code>:
         * String constraint. The key is <code>swf:name</code>.</p> </li> <li> <p>
         * <code>version</code>: String constraint. The key is
         * <code>swf:version</code>.</p> </li> </ul> </li> </ul> <p>If the caller doesn't
         * have sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterWorkflowType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterWorkflowTypeAsync(const Model::RegisterWorkflowTypeRequest& request, const RegisterWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Records a <code>WorkflowExecutionCancelRequested</code> event in the
         * currently running workflow execution identified by the given domain, workflowId,
         * and runId. This logically requests the cancellation of the workflow execution as
         * a whole. It is up to the decider to take appropriate actions when it receives an
         * execution history with this event.</p> <note> <p>If the runId isn't specified,
         * the <code>WorkflowExecutionCancelRequested</code> event is recorded in the
         * history of the current open workflow execution with the specified workflowId in
         * the domain.</p> </note> <note> <p>Because this action allows the workflow to
         * properly clean up and gracefully close, it should be used instead of
         * <a>TerminateWorkflowExecution</a> when possible.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RequestCancelWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestCancelWorkflowExecutionOutcome RequestCancelWorkflowExecution(const Model::RequestCancelWorkflowExecutionRequest& request) const;

        /**
         * <p>Records a <code>WorkflowExecutionCancelRequested</code> event in the
         * currently running workflow execution identified by the given domain, workflowId,
         * and runId. This logically requests the cancellation of the workflow execution as
         * a whole. It is up to the decider to take appropriate actions when it receives an
         * execution history with this event.</p> <note> <p>If the runId isn't specified,
         * the <code>WorkflowExecutionCancelRequested</code> event is recorded in the
         * history of the current open workflow execution with the specified workflowId in
         * the domain.</p> </note> <note> <p>Because this action allows the workflow to
         * properly clean up and gracefully close, it should be used instead of
         * <a>TerminateWorkflowExecution</a> when possible.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RequestCancelWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestCancelWorkflowExecutionOutcomeCallable RequestCancelWorkflowExecutionCallable(const Model::RequestCancelWorkflowExecutionRequest& request) const;

        /**
         * <p>Records a <code>WorkflowExecutionCancelRequested</code> event in the
         * currently running workflow execution identified by the given domain, workflowId,
         * and runId. This logically requests the cancellation of the workflow execution as
         * a whole. It is up to the decider to take appropriate actions when it receives an
         * execution history with this event.</p> <note> <p>If the runId isn't specified,
         * the <code>WorkflowExecutionCancelRequested</code> event is recorded in the
         * history of the current open workflow execution with the specified workflowId in
         * the domain.</p> </note> <note> <p>Because this action allows the workflow to
         * properly clean up and gracefully close, it should be used instead of
         * <a>TerminateWorkflowExecution</a> when possible.</p> </note> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RequestCancelWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestCancelWorkflowExecutionAsync(const Model::RequestCancelWorkflowExecutionRequest& request, const RequestCancelWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> was successfully canceled. Additional
         * <code>details</code> can be provided using the <code>details</code>
         * argument.</p> <p>These <code>details</code> (if provided) appear in the
         * <code>ActivityTaskCanceled</code> event added to the workflow history.</p>
         * <important> <p>Only use this operation if the <code>canceled</code> flag of a
         * <a>RecordActivityTaskHeartbeat</a> request returns <code>true</code> and if the
         * activity can be safely undone or abandoned.</p> </important> <p>A task is
         * considered open from the time that it is scheduled until it is closed. Therefore
         * a task is reported as open while a worker is processing it. A task is closed
         * after it has been specified in a call to <a>RespondActivityTaskCompleted</a>,
         * RespondActivityTaskCanceled, <a>RespondActivityTaskFailed</a>, or the task has
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskCanceled">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondActivityTaskCanceledOutcome RespondActivityTaskCanceled(const Model::RespondActivityTaskCanceledRequest& request) const;

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> was successfully canceled. Additional
         * <code>details</code> can be provided using the <code>details</code>
         * argument.</p> <p>These <code>details</code> (if provided) appear in the
         * <code>ActivityTaskCanceled</code> event added to the workflow history.</p>
         * <important> <p>Only use this operation if the <code>canceled</code> flag of a
         * <a>RecordActivityTaskHeartbeat</a> request returns <code>true</code> and if the
         * activity can be safely undone or abandoned.</p> </important> <p>A task is
         * considered open from the time that it is scheduled until it is closed. Therefore
         * a task is reported as open while a worker is processing it. A task is closed
         * after it has been specified in a call to <a>RespondActivityTaskCompleted</a>,
         * RespondActivityTaskCanceled, <a>RespondActivityTaskFailed</a>, or the task has
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskCanceled">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RespondActivityTaskCanceledOutcomeCallable RespondActivityTaskCanceledCallable(const Model::RespondActivityTaskCanceledRequest& request) const;

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> was successfully canceled. Additional
         * <code>details</code> can be provided using the <code>details</code>
         * argument.</p> <p>These <code>details</code> (if provided) appear in the
         * <code>ActivityTaskCanceled</code> event added to the workflow history.</p>
         * <important> <p>Only use this operation if the <code>canceled</code> flag of a
         * <a>RecordActivityTaskHeartbeat</a> request returns <code>true</code> and if the
         * activity can be safely undone or abandoned.</p> </important> <p>A task is
         * considered open from the time that it is scheduled until it is closed. Therefore
         * a task is reported as open while a worker is processing it. A task is closed
         * after it has been specified in a call to <a>RespondActivityTaskCompleted</a>,
         * RespondActivityTaskCanceled, <a>RespondActivityTaskFailed</a>, or the task has
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskCanceled">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RespondActivityTaskCanceledAsync(const Model::RespondActivityTaskCanceledRequest& request, const RespondActivityTaskCanceledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> completed successfully with a <code>result</code>
         * (if provided). The <code>result</code> appears in the
         * <code>ActivityTaskCompleted</code> event in the workflow history.</p>
         * <important> <p>If the requested task doesn't complete successfully, use
         * <a>RespondActivityTaskFailed</a> instead. If the worker finds that the task is
         * canceled through the <code>canceled</code> flag returned by
         * <a>RecordActivityTaskHeartbeat</a>, it should cancel the task, clean up and then
         * call <a>RespondActivityTaskCanceled</a>.</p> </important> <p>A task is
         * considered open from the time that it is scheduled until it is closed. Therefore
         * a task is reported as open while a worker is processing it. A task is closed
         * after it has been specified in a call to RespondActivityTaskCompleted,
         * <a>RespondActivityTaskCanceled</a>, <a>RespondActivityTaskFailed</a>, or the
         * task has <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskCompleted">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondActivityTaskCompletedOutcome RespondActivityTaskCompleted(const Model::RespondActivityTaskCompletedRequest& request) const;

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> completed successfully with a <code>result</code>
         * (if provided). The <code>result</code> appears in the
         * <code>ActivityTaskCompleted</code> event in the workflow history.</p>
         * <important> <p>If the requested task doesn't complete successfully, use
         * <a>RespondActivityTaskFailed</a> instead. If the worker finds that the task is
         * canceled through the <code>canceled</code> flag returned by
         * <a>RecordActivityTaskHeartbeat</a>, it should cancel the task, clean up and then
         * call <a>RespondActivityTaskCanceled</a>.</p> </important> <p>A task is
         * considered open from the time that it is scheduled until it is closed. Therefore
         * a task is reported as open while a worker is processing it. A task is closed
         * after it has been specified in a call to RespondActivityTaskCompleted,
         * <a>RespondActivityTaskCanceled</a>, <a>RespondActivityTaskFailed</a>, or the
         * task has <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskCompleted">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RespondActivityTaskCompletedOutcomeCallable RespondActivityTaskCompletedCallable(const Model::RespondActivityTaskCompletedRequest& request) const;

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> completed successfully with a <code>result</code>
         * (if provided). The <code>result</code> appears in the
         * <code>ActivityTaskCompleted</code> event in the workflow history.</p>
         * <important> <p>If the requested task doesn't complete successfully, use
         * <a>RespondActivityTaskFailed</a> instead. If the worker finds that the task is
         * canceled through the <code>canceled</code> flag returned by
         * <a>RecordActivityTaskHeartbeat</a>, it should cancel the task, clean up and then
         * call <a>RespondActivityTaskCanceled</a>.</p> </important> <p>A task is
         * considered open from the time that it is scheduled until it is closed. Therefore
         * a task is reported as open while a worker is processing it. A task is closed
         * after it has been specified in a call to RespondActivityTaskCompleted,
         * <a>RespondActivityTaskCanceled</a>, <a>RespondActivityTaskFailed</a>, or the
         * task has <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskCompleted">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RespondActivityTaskCompletedAsync(const Model::RespondActivityTaskCompletedRequest& request, const RespondActivityTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> has failed with <code>reason</code> (if
         * specified). The <code>reason</code> and <code>details</code> appear in the
         * <code>ActivityTaskFailed</code> event added to the workflow history.</p> <p>A
         * task is considered open from the time that it is scheduled until it is closed.
         * Therefore a task is reported as open while a worker is processing it. A task is
         * closed after it has been specified in a call to
         * <a>RespondActivityTaskCompleted</a>, <a>RespondActivityTaskCanceled</a>,
         * RespondActivityTaskFailed, or the task has <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskFailed">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondActivityTaskFailedOutcome RespondActivityTaskFailed(const Model::RespondActivityTaskFailedRequest& request) const;

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> has failed with <code>reason</code> (if
         * specified). The <code>reason</code> and <code>details</code> appear in the
         * <code>ActivityTaskFailed</code> event added to the workflow history.</p> <p>A
         * task is considered open from the time that it is scheduled until it is closed.
         * Therefore a task is reported as open while a worker is processing it. A task is
         * closed after it has been specified in a call to
         * <a>RespondActivityTaskCompleted</a>, <a>RespondActivityTaskCanceled</a>,
         * RespondActivityTaskFailed, or the task has <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskFailed">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RespondActivityTaskFailedOutcomeCallable RespondActivityTaskFailedCallable(const Model::RespondActivityTaskFailedRequest& request) const;

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> has failed with <code>reason</code> (if
         * specified). The <code>reason</code> and <code>details</code> appear in the
         * <code>ActivityTaskFailed</code> event added to the workflow history.</p> <p>A
         * task is considered open from the time that it is scheduled until it is closed.
         * Therefore a task is reported as open while a worker is processing it. A task is
         * closed after it has been specified in a call to
         * <a>RespondActivityTaskCompleted</a>, <a>RespondActivityTaskCanceled</a>,
         * RespondActivityTaskFailed, or the task has <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskFailed">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RespondActivityTaskFailedAsync(const Model::RespondActivityTaskFailedRequest& request, const RespondActivityTaskFailedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by deciders to tell the service that the <a>DecisionTask</a> identified
         * by the <code>taskToken</code> has successfully completed. The
         * <code>decisions</code> argument specifies the list of decisions made while
         * processing the task.</p> <p>A <code>DecisionTaskCompleted</code> event is added
         * to the workflow history. The <code>executionContext</code> specified is attached
         * to the event in the workflow execution history.</p> <p> <b>Access Control</b>
         * </p> <p>If an IAM policy grants permission to use
         * <code>RespondDecisionTaskCompleted</code>, it can express permissions for the
         * list of decisions in the <code>decisions</code> parameter. Each of the decisions
         * has one or more parameters, much like a regular API call. To allow for policies
         * to be as readable as possible, you can express permissions on decisions as if
         * they were actual API calls, including applying conditions to some parameters.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondDecisionTaskCompleted">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondDecisionTaskCompletedOutcome RespondDecisionTaskCompleted(const Model::RespondDecisionTaskCompletedRequest& request) const;

        /**
         * <p>Used by deciders to tell the service that the <a>DecisionTask</a> identified
         * by the <code>taskToken</code> has successfully completed. The
         * <code>decisions</code> argument specifies the list of decisions made while
         * processing the task.</p> <p>A <code>DecisionTaskCompleted</code> event is added
         * to the workflow history. The <code>executionContext</code> specified is attached
         * to the event in the workflow execution history.</p> <p> <b>Access Control</b>
         * </p> <p>If an IAM policy grants permission to use
         * <code>RespondDecisionTaskCompleted</code>, it can express permissions for the
         * list of decisions in the <code>decisions</code> parameter. Each of the decisions
         * has one or more parameters, much like a regular API call. To allow for policies
         * to be as readable as possible, you can express permissions on decisions as if
         * they were actual API calls, including applying conditions to some parameters.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondDecisionTaskCompleted">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RespondDecisionTaskCompletedOutcomeCallable RespondDecisionTaskCompletedCallable(const Model::RespondDecisionTaskCompletedRequest& request) const;

        /**
         * <p>Used by deciders to tell the service that the <a>DecisionTask</a> identified
         * by the <code>taskToken</code> has successfully completed. The
         * <code>decisions</code> argument specifies the list of decisions made while
         * processing the task.</p> <p>A <code>DecisionTaskCompleted</code> event is added
         * to the workflow history. The <code>executionContext</code> specified is attached
         * to the event in the workflow execution history.</p> <p> <b>Access Control</b>
         * </p> <p>If an IAM policy grants permission to use
         * <code>RespondDecisionTaskCompleted</code>, it can express permissions for the
         * list of decisions in the <code>decisions</code> parameter. Each of the decisions
         * has one or more parameters, much like a regular API call. To allow for policies
         * to be as readable as possible, you can express permissions on decisions as if
         * they were actual API calls, including applying conditions to some parameters.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondDecisionTaskCompleted">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RespondDecisionTaskCompletedAsync(const Model::RespondDecisionTaskCompletedRequest& request, const RespondDecisionTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Records a <code>WorkflowExecutionSignaled</code> event in the workflow
         * execution history and creates a decision task for the workflow execution
         * identified by the given domain, workflowId and runId. The event is recorded with
         * the specified user defined signalName and input (if provided).</p> <note> <p>If
         * a runId isn't specified, then the <code>WorkflowExecutionSignaled</code> event
         * is recorded in the history of the current open workflow with the matching
         * workflowId in the domain.</p> </note> <note> <p>If the specified workflow
         * execution isn't open, this method fails with <code>UnknownResource</code>.</p>
         * </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies to control
         * this action's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/SignalWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::SignalWorkflowExecutionOutcome SignalWorkflowExecution(const Model::SignalWorkflowExecutionRequest& request) const;

        /**
         * <p>Records a <code>WorkflowExecutionSignaled</code> event in the workflow
         * execution history and creates a decision task for the workflow execution
         * identified by the given domain, workflowId and runId. The event is recorded with
         * the specified user defined signalName and input (if provided).</p> <note> <p>If
         * a runId isn't specified, then the <code>WorkflowExecutionSignaled</code> event
         * is recorded in the history of the current open workflow with the matching
         * workflowId in the domain.</p> </note> <note> <p>If the specified workflow
         * execution isn't open, this method fails with <code>UnknownResource</code>.</p>
         * </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies to control
         * this action's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/SignalWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignalWorkflowExecutionOutcomeCallable SignalWorkflowExecutionCallable(const Model::SignalWorkflowExecutionRequest& request) const;

        /**
         * <p>Records a <code>WorkflowExecutionSignaled</code> event in the workflow
         * execution history and creates a decision task for the workflow execution
         * identified by the given domain, workflowId and runId. The event is recorded with
         * the specified user defined signalName and input (if provided).</p> <note> <p>If
         * a runId isn't specified, then the <code>WorkflowExecutionSignaled</code> event
         * is recorded in the history of the current open workflow with the matching
         * workflowId in the domain.</p> </note> <note> <p>If the specified workflow
         * execution isn't open, this method fails with <code>UnknownResource</code>.</p>
         * </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies to control
         * this action's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/SignalWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignalWorkflowExecutionAsync(const Model::SignalWorkflowExecutionRequest& request, const SignalWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an execution of the workflow type in the specified domain using the
         * provided <code>workflowId</code> and input data.</p> <p>This action returns the
         * newly started workflow execution.</p> <p> <b>Access Control</b> </p> <p>You can
         * use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagList.member.0</code>: The key is <code>swf:tagList.member.0</code>.</p>
         * </li> <li> <p> <code>tagList.member.1</code>: The key is
         * <code>swf:tagList.member.1</code>.</p> </li> <li> <p>
         * <code>tagList.member.2</code>: The key is <code>swf:tagList.member.2</code>.</p>
         * </li> <li> <p> <code>tagList.member.3</code>: The key is
         * <code>swf:tagList.member.3</code>.</p> </li> <li> <p>
         * <code>tagList.member.4</code>: The key is <code>swf:tagList.member.4</code>.</p>
         * </li> <li> <p> <code>taskList</code>: String constraint. The key is
         * <code>swf:taskList.name</code>.</p> </li> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowExecutionOutcome StartWorkflowExecution(const Model::StartWorkflowExecutionRequest& request) const;

        /**
         * <p>Starts an execution of the workflow type in the specified domain using the
         * provided <code>workflowId</code> and input data.</p> <p>This action returns the
         * newly started workflow execution.</p> <p> <b>Access Control</b> </p> <p>You can
         * use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagList.member.0</code>: The key is <code>swf:tagList.member.0</code>.</p>
         * </li> <li> <p> <code>tagList.member.1</code>: The key is
         * <code>swf:tagList.member.1</code>.</p> </li> <li> <p>
         * <code>tagList.member.2</code>: The key is <code>swf:tagList.member.2</code>.</p>
         * </li> <li> <p> <code>tagList.member.3</code>: The key is
         * <code>swf:tagList.member.3</code>.</p> </li> <li> <p>
         * <code>tagList.member.4</code>: The key is <code>swf:tagList.member.4</code>.</p>
         * </li> <li> <p> <code>taskList</code>: String constraint. The key is
         * <code>swf:taskList.name</code>.</p> </li> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartWorkflowExecutionOutcomeCallable StartWorkflowExecutionCallable(const Model::StartWorkflowExecutionRequest& request) const;

        /**
         * <p>Starts an execution of the workflow type in the specified domain using the
         * provided <code>workflowId</code> and input data.</p> <p>This action returns the
         * newly started workflow execution.</p> <p> <b>Access Control</b> </p> <p>You can
         * use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagList.member.0</code>: The key is <code>swf:tagList.member.0</code>.</p>
         * </li> <li> <p> <code>tagList.member.1</code>: The key is
         * <code>swf:tagList.member.1</code>.</p> </li> <li> <p>
         * <code>tagList.member.2</code>: The key is <code>swf:tagList.member.2</code>.</p>
         * </li> <li> <p> <code>tagList.member.3</code>: The key is
         * <code>swf:tagList.member.3</code>.</p> </li> <li> <p>
         * <code>tagList.member.4</code>: The key is <code>swf:tagList.member.4</code>.</p>
         * </li> <li> <p> <code>taskList</code>: String constraint. The key is
         * <code>swf:taskList.name</code>.</p> </li> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartWorkflowExecutionAsync(const Model::StartWorkflowExecutionRequest& request, const StartWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add a tag to a Amazon SWF domain.</p> <note> <p>Amazon SWF supports a maximum
         * of 50 tags per resource.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add a tag to a Amazon SWF domain.</p> <note> <p>Amazon SWF supports a maximum
         * of 50 tags per resource.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add a tag to a Amazon SWF domain.</p> <note> <p>Amazon SWF supports a maximum
         * of 50 tags per resource.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Records a <code>WorkflowExecutionTerminated</code> event and forces closure
         * of the workflow execution identified by the given domain, runId, and workflowId.
         * The child policy, registered with the workflow type or specified when starting
         * this execution, is applied to any open child workflow executions of this
         * workflow execution.</p> <important> <p>If the identified workflow execution was
         * in progress, it is terminated immediately.</p> </important> <note> <p>If a runId
         * isn't specified, then the <code>WorkflowExecutionTerminated</code> event is
         * recorded in the history of the current open workflow with the matching
         * workflowId in the domain.</p> </note> <note> <p>You should consider using
         * <a>RequestCancelWorkflowExecution</a> action instead because it allows the
         * workflow to gracefully close while <a>TerminateWorkflowExecution</a>
         * doesn't.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li> <p>You
         * cannot use an IAM policy to constrain this action's parameters.</p> </li> </ul>
         * <p>If the caller doesn't have sufficient permissions to invoke the action, or
         * the parameter values fall outside the specified constraints, the action fails.
         * The associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TerminateWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateWorkflowExecutionOutcome TerminateWorkflowExecution(const Model::TerminateWorkflowExecutionRequest& request) const;

        /**
         * <p>Records a <code>WorkflowExecutionTerminated</code> event and forces closure
         * of the workflow execution identified by the given domain, runId, and workflowId.
         * The child policy, registered with the workflow type or specified when starting
         * this execution, is applied to any open child workflow executions of this
         * workflow execution.</p> <important> <p>If the identified workflow execution was
         * in progress, it is terminated immediately.</p> </important> <note> <p>If a runId
         * isn't specified, then the <code>WorkflowExecutionTerminated</code> event is
         * recorded in the history of the current open workflow with the matching
         * workflowId in the domain.</p> </note> <note> <p>You should consider using
         * <a>RequestCancelWorkflowExecution</a> action instead because it allows the
         * workflow to gracefully close while <a>TerminateWorkflowExecution</a>
         * doesn't.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li> <p>You
         * cannot use an IAM policy to constrain this action's parameters.</p> </li> </ul>
         * <p>If the caller doesn't have sufficient permissions to invoke the action, or
         * the parameter values fall outside the specified constraints, the action fails.
         * The associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TerminateWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateWorkflowExecutionOutcomeCallable TerminateWorkflowExecutionCallable(const Model::TerminateWorkflowExecutionRequest& request) const;

        /**
         * <p>Records a <code>WorkflowExecutionTerminated</code> event and forces closure
         * of the workflow execution identified by the given domain, runId, and workflowId.
         * The child policy, registered with the workflow type or specified when starting
         * this execution, is applied to any open child workflow executions of this
         * workflow execution.</p> <important> <p>If the identified workflow execution was
         * in progress, it is terminated immediately.</p> </important> <note> <p>If a runId
         * isn't specified, then the <code>WorkflowExecutionTerminated</code> event is
         * recorded in the history of the current open workflow with the matching
         * workflowId in the domain.</p> </note> <note> <p>You should consider using
         * <a>RequestCancelWorkflowExecution</a> action instead because it allows the
         * workflow to gracefully close while <a>TerminateWorkflowExecution</a>
         * doesn't.</p> </note> <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li> <p>You
         * cannot use an IAM policy to constrain this action's parameters.</p> </li> </ul>
         * <p>If the caller doesn't have sufficient permissions to invoke the action, or
         * the parameter values fall outside the specified constraints, the action fails.
         * The associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TerminateWorkflowExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateWorkflowExecutionAsync(const Model::TerminateWorkflowExecutionRequest& request, const TerminateWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Undeprecates a previously deprecated <i>activity type</i>. After an activity
         * type has been undeprecated, you can create new tasks of that activity type.</p>
         * <note> <p>This operation is eventually consistent. The results are best effort
         * and may not exactly reflect recent updates and changes.</p> </note> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>activityType.name</code>: String
         * constraint. The key is <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateActivityType">AWS
         * API Reference</a></p>
         */
        virtual Model::UndeprecateActivityTypeOutcome UndeprecateActivityType(const Model::UndeprecateActivityTypeRequest& request) const;

        /**
         * <p>Undeprecates a previously deprecated <i>activity type</i>. After an activity
         * type has been undeprecated, you can create new tasks of that activity type.</p>
         * <note> <p>This operation is eventually consistent. The results are best effort
         * and may not exactly reflect recent updates and changes.</p> </note> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>activityType.name</code>: String
         * constraint. The key is <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateActivityType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UndeprecateActivityTypeOutcomeCallable UndeprecateActivityTypeCallable(const Model::UndeprecateActivityTypeRequest& request) const;

        /**
         * <p>Undeprecates a previously deprecated <i>activity type</i>. After an activity
         * type has been undeprecated, you can create new tasks of that activity type.</p>
         * <note> <p>This operation is eventually consistent. The results are best effort
         * and may not exactly reflect recent updates and changes.</p> </note> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>activityType.name</code>: String
         * constraint. The key is <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateActivityType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UndeprecateActivityTypeAsync(const Model::UndeprecateActivityTypeRequest& request, const UndeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Undeprecates a previously deprecated domain. After a domain has been
         * undeprecated it can be used to create new workflow executions or register new
         * types.</p> <note> <p>This operation is eventually consistent. The results are
         * best effort and may not exactly reflect recent updates and changes.</p> </note>
         * <p> <b>Access Control</b> </p> <p>You can use IAM policies to control this
         * action's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UndeprecateDomainOutcome UndeprecateDomain(const Model::UndeprecateDomainRequest& request) const;

        /**
         * <p>Undeprecates a previously deprecated domain. After a domain has been
         * undeprecated it can be used to create new workflow executions or register new
         * types.</p> <note> <p>This operation is eventually consistent. The results are
         * best effort and may not exactly reflect recent updates and changes.</p> </note>
         * <p> <b>Access Control</b> </p> <p>You can use IAM policies to control this
         * action's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UndeprecateDomainOutcomeCallable UndeprecateDomainCallable(const Model::UndeprecateDomainRequest& request) const;

        /**
         * <p>Undeprecates a previously deprecated domain. After a domain has been
         * undeprecated it can be used to create new workflow executions or register new
         * types.</p> <note> <p>This operation is eventually consistent. The results are
         * best effort and may not exactly reflect recent updates and changes.</p> </note>
         * <p> <b>Access Control</b> </p> <p>You can use IAM policies to control this
         * action's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UndeprecateDomainAsync(const Model::UndeprecateDomainRequest& request, const UndeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Undeprecates a previously deprecated <i>workflow type</i>. After a workflow
         * type has been undeprecated, you can create new executions of that type. </p>
         * <note> <p>This operation is eventually consistent. The results are best effort
         * and may not exactly reflect recent updates and changes.</p> </note> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>workflowType.name</code>: String
         * constraint. The key is <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateWorkflowType">AWS
         * API Reference</a></p>
         */
        virtual Model::UndeprecateWorkflowTypeOutcome UndeprecateWorkflowType(const Model::UndeprecateWorkflowTypeRequest& request) const;

        /**
         * <p>Undeprecates a previously deprecated <i>workflow type</i>. After a workflow
         * type has been undeprecated, you can create new executions of that type. </p>
         * <note> <p>This operation is eventually consistent. The results are best effort
         * and may not exactly reflect recent updates and changes.</p> </note> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>workflowType.name</code>: String
         * constraint. The key is <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateWorkflowType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UndeprecateWorkflowTypeOutcomeCallable UndeprecateWorkflowTypeCallable(const Model::UndeprecateWorkflowTypeRequest& request) const;

        /**
         * <p>Undeprecates a previously deprecated <i>workflow type</i>. After a workflow
         * type has been undeprecated, you can create new executions of that type. </p>
         * <note> <p>This operation is eventually consistent. The results are best effort
         * and may not exactly reflect recent updates and changes.</p> </note> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>workflowType.name</code>: String
         * constraint. The key is <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateWorkflowType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UndeprecateWorkflowTypeAsync(const Model::UndeprecateWorkflowTypeRequest& request, const UndeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a tag from a Amazon SWF domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove a tag from a Amazon SWF domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove a tag from a Amazon SWF domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CountClosedWorkflowExecutionsAsyncHelper(const Model::CountClosedWorkflowExecutionsRequest& request, const CountClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CountOpenWorkflowExecutionsAsyncHelper(const Model::CountOpenWorkflowExecutionsRequest& request, const CountOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CountPendingActivityTasksAsyncHelper(const Model::CountPendingActivityTasksRequest& request, const CountPendingActivityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CountPendingDecisionTasksAsyncHelper(const Model::CountPendingDecisionTasksRequest& request, const CountPendingDecisionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeprecateActivityTypeAsyncHelper(const Model::DeprecateActivityTypeRequest& request, const DeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeprecateDomainAsyncHelper(const Model::DeprecateDomainRequest& request, const DeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeprecateWorkflowTypeAsyncHelper(const Model::DeprecateWorkflowTypeRequest& request, const DeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeActivityTypeAsyncHelper(const Model::DescribeActivityTypeRequest& request, const DescribeActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainAsyncHelper(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkflowExecutionAsyncHelper(const Model::DescribeWorkflowExecutionRequest& request, const DescribeWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkflowTypeAsyncHelper(const Model::DescribeWorkflowTypeRequest& request, const DescribeWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkflowExecutionHistoryAsyncHelper(const Model::GetWorkflowExecutionHistoryRequest& request, const GetWorkflowExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListActivityTypesAsyncHelper(const Model::ListActivityTypesRequest& request, const ListActivityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClosedWorkflowExecutionsAsyncHelper(const Model::ListClosedWorkflowExecutionsRequest& request, const ListClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainsAsyncHelper(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOpenWorkflowExecutionsAsyncHelper(const Model::ListOpenWorkflowExecutionsRequest& request, const ListOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkflowTypesAsyncHelper(const Model::ListWorkflowTypesRequest& request, const ListWorkflowTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PollForActivityTaskAsyncHelper(const Model::PollForActivityTaskRequest& request, const PollForActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PollForDecisionTaskAsyncHelper(const Model::PollForDecisionTaskRequest& request, const PollForDecisionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RecordActivityTaskHeartbeatAsyncHelper(const Model::RecordActivityTaskHeartbeatRequest& request, const RecordActivityTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterActivityTypeAsyncHelper(const Model::RegisterActivityTypeRequest& request, const RegisterActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterDomainAsyncHelper(const Model::RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterWorkflowTypeAsyncHelper(const Model::RegisterWorkflowTypeRequest& request, const RegisterWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestCancelWorkflowExecutionAsyncHelper(const Model::RequestCancelWorkflowExecutionRequest& request, const RequestCancelWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RespondActivityTaskCanceledAsyncHelper(const Model::RespondActivityTaskCanceledRequest& request, const RespondActivityTaskCanceledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RespondActivityTaskCompletedAsyncHelper(const Model::RespondActivityTaskCompletedRequest& request, const RespondActivityTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RespondActivityTaskFailedAsyncHelper(const Model::RespondActivityTaskFailedRequest& request, const RespondActivityTaskFailedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RespondDecisionTaskCompletedAsyncHelper(const Model::RespondDecisionTaskCompletedRequest& request, const RespondDecisionTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SignalWorkflowExecutionAsyncHelper(const Model::SignalWorkflowExecutionRequest& request, const SignalWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartWorkflowExecutionAsyncHelper(const Model::StartWorkflowExecutionRequest& request, const StartWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateWorkflowExecutionAsyncHelper(const Model::TerminateWorkflowExecutionRequest& request, const TerminateWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UndeprecateActivityTypeAsyncHelper(const Model::UndeprecateActivityTypeRequest& request, const UndeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UndeprecateDomainAsyncHelper(const Model::UndeprecateDomainRequest& request, const UndeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UndeprecateWorkflowTypeAsyncHelper(const Model::UndeprecateWorkflowTypeRequest& request, const UndeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SWF
} // namespace Aws
