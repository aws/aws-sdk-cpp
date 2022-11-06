/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/swf/SWFErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/swf/SWFEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SWFClient header */
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
/* End of service model headers required in SWFClient header */

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
    using SWFClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SWFEndpointProviderBase = Aws::SWF::Endpoint::SWFEndpointProviderBase;
    using SWFEndpointProvider = Aws::SWF::Endpoint::SWFEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SWFClient header */
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
      /* End of service model forward declarations required in SWFClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CountClosedWorkflowExecutionsResult, SWFError> CountClosedWorkflowExecutionsOutcome;
      typedef Aws::Utils::Outcome<CountOpenWorkflowExecutionsResult, SWFError> CountOpenWorkflowExecutionsOutcome;
      typedef Aws::Utils::Outcome<CountPendingActivityTasksResult, SWFError> CountPendingActivityTasksOutcome;
      typedef Aws::Utils::Outcome<CountPendingDecisionTasksResult, SWFError> CountPendingDecisionTasksOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> DeprecateActivityTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> DeprecateDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> DeprecateWorkflowTypeOutcome;
      typedef Aws::Utils::Outcome<DescribeActivityTypeResult, SWFError> DescribeActivityTypeOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainResult, SWFError> DescribeDomainOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkflowExecutionResult, SWFError> DescribeWorkflowExecutionOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkflowTypeResult, SWFError> DescribeWorkflowTypeOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowExecutionHistoryResult, SWFError> GetWorkflowExecutionHistoryOutcome;
      typedef Aws::Utils::Outcome<ListActivityTypesResult, SWFError> ListActivityTypesOutcome;
      typedef Aws::Utils::Outcome<ListClosedWorkflowExecutionsResult, SWFError> ListClosedWorkflowExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, SWFError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListOpenWorkflowExecutionsResult, SWFError> ListOpenWorkflowExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SWFError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowTypesResult, SWFError> ListWorkflowTypesOutcome;
      typedef Aws::Utils::Outcome<PollForActivityTaskResult, SWFError> PollForActivityTaskOutcome;
      typedef Aws::Utils::Outcome<PollForDecisionTaskResult, SWFError> PollForDecisionTaskOutcome;
      typedef Aws::Utils::Outcome<RecordActivityTaskHeartbeatResult, SWFError> RecordActivityTaskHeartbeatOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> RegisterActivityTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> RegisterDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> RegisterWorkflowTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> RequestCancelWorkflowExecutionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> RespondActivityTaskCanceledOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> RespondActivityTaskCompletedOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> RespondActivityTaskFailedOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> RespondDecisionTaskCompletedOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> SignalWorkflowExecutionOutcome;
      typedef Aws::Utils::Outcome<StartWorkflowExecutionResult, SWFError> StartWorkflowExecutionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> TerminateWorkflowExecutionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> UndeprecateActivityTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> UndeprecateDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> UndeprecateWorkflowTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SWFError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SWFClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace SWF
} // namespace Aws
