/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CountClosedWorkflowExecutionsAsync(...)  SubmitAsync(&SWFClient::CountClosedWorkflowExecutions, __VA_ARGS__)
#define CountClosedWorkflowExecutionsCallable(REQUEST)  SubmitCallable(&SWFClient::CountClosedWorkflowExecutions, REQUEST)

#define CountOpenWorkflowExecutionsAsync(...)  SubmitAsync(&SWFClient::CountOpenWorkflowExecutions, __VA_ARGS__)
#define CountOpenWorkflowExecutionsCallable(REQUEST)  SubmitCallable(&SWFClient::CountOpenWorkflowExecutions, REQUEST)

#define CountPendingActivityTasksAsync(...)  SubmitAsync(&SWFClient::CountPendingActivityTasks, __VA_ARGS__)
#define CountPendingActivityTasksCallable(REQUEST)  SubmitCallable(&SWFClient::CountPendingActivityTasks, REQUEST)

#define CountPendingDecisionTasksAsync(...)  SubmitAsync(&SWFClient::CountPendingDecisionTasks, __VA_ARGS__)
#define CountPendingDecisionTasksCallable(REQUEST)  SubmitCallable(&SWFClient::CountPendingDecisionTasks, REQUEST)

#define DeprecateActivityTypeAsync(...)  SubmitAsync(&SWFClient::DeprecateActivityType, __VA_ARGS__)
#define DeprecateActivityTypeCallable(REQUEST)  SubmitCallable(&SWFClient::DeprecateActivityType, REQUEST)

#define DeprecateDomainAsync(...)  SubmitAsync(&SWFClient::DeprecateDomain, __VA_ARGS__)
#define DeprecateDomainCallable(REQUEST)  SubmitCallable(&SWFClient::DeprecateDomain, REQUEST)

#define DeprecateWorkflowTypeAsync(...)  SubmitAsync(&SWFClient::DeprecateWorkflowType, __VA_ARGS__)
#define DeprecateWorkflowTypeCallable(REQUEST)  SubmitCallable(&SWFClient::DeprecateWorkflowType, REQUEST)

#define DescribeActivityTypeAsync(...)  SubmitAsync(&SWFClient::DescribeActivityType, __VA_ARGS__)
#define DescribeActivityTypeCallable(REQUEST)  SubmitCallable(&SWFClient::DescribeActivityType, REQUEST)

#define DescribeDomainAsync(...)  SubmitAsync(&SWFClient::DescribeDomain, __VA_ARGS__)
#define DescribeDomainCallable(REQUEST)  SubmitCallable(&SWFClient::DescribeDomain, REQUEST)

#define DescribeWorkflowExecutionAsync(...)  SubmitAsync(&SWFClient::DescribeWorkflowExecution, __VA_ARGS__)
#define DescribeWorkflowExecutionCallable(REQUEST)  SubmitCallable(&SWFClient::DescribeWorkflowExecution, REQUEST)

#define DescribeWorkflowTypeAsync(...)  SubmitAsync(&SWFClient::DescribeWorkflowType, __VA_ARGS__)
#define DescribeWorkflowTypeCallable(REQUEST)  SubmitCallable(&SWFClient::DescribeWorkflowType, REQUEST)

#define GetWorkflowExecutionHistoryAsync(...)  SubmitAsync(&SWFClient::GetWorkflowExecutionHistory, __VA_ARGS__)
#define GetWorkflowExecutionHistoryCallable(REQUEST)  SubmitCallable(&SWFClient::GetWorkflowExecutionHistory, REQUEST)

#define ListActivityTypesAsync(...)  SubmitAsync(&SWFClient::ListActivityTypes, __VA_ARGS__)
#define ListActivityTypesCallable(REQUEST)  SubmitCallable(&SWFClient::ListActivityTypes, REQUEST)

#define ListClosedWorkflowExecutionsAsync(...)  SubmitAsync(&SWFClient::ListClosedWorkflowExecutions, __VA_ARGS__)
#define ListClosedWorkflowExecutionsCallable(REQUEST)  SubmitCallable(&SWFClient::ListClosedWorkflowExecutions, REQUEST)

#define ListDomainsAsync(...)  SubmitAsync(&SWFClient::ListDomains, __VA_ARGS__)
#define ListDomainsCallable(REQUEST)  SubmitCallable(&SWFClient::ListDomains, REQUEST)

#define ListOpenWorkflowExecutionsAsync(...)  SubmitAsync(&SWFClient::ListOpenWorkflowExecutions, __VA_ARGS__)
#define ListOpenWorkflowExecutionsCallable(REQUEST)  SubmitCallable(&SWFClient::ListOpenWorkflowExecutions, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SWFClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SWFClient::ListTagsForResource, REQUEST)

#define ListWorkflowTypesAsync(...)  SubmitAsync(&SWFClient::ListWorkflowTypes, __VA_ARGS__)
#define ListWorkflowTypesCallable(REQUEST)  SubmitCallable(&SWFClient::ListWorkflowTypes, REQUEST)

#define PollForActivityTaskAsync(...)  SubmitAsync(&SWFClient::PollForActivityTask, __VA_ARGS__)
#define PollForActivityTaskCallable(REQUEST)  SubmitCallable(&SWFClient::PollForActivityTask, REQUEST)

#define PollForDecisionTaskAsync(...)  SubmitAsync(&SWFClient::PollForDecisionTask, __VA_ARGS__)
#define PollForDecisionTaskCallable(REQUEST)  SubmitCallable(&SWFClient::PollForDecisionTask, REQUEST)

#define RecordActivityTaskHeartbeatAsync(...)  SubmitAsync(&SWFClient::RecordActivityTaskHeartbeat, __VA_ARGS__)
#define RecordActivityTaskHeartbeatCallable(REQUEST)  SubmitCallable(&SWFClient::RecordActivityTaskHeartbeat, REQUEST)

#define RegisterActivityTypeAsync(...)  SubmitAsync(&SWFClient::RegisterActivityType, __VA_ARGS__)
#define RegisterActivityTypeCallable(REQUEST)  SubmitCallable(&SWFClient::RegisterActivityType, REQUEST)

#define RegisterDomainAsync(...)  SubmitAsync(&SWFClient::RegisterDomain, __VA_ARGS__)
#define RegisterDomainCallable(REQUEST)  SubmitCallable(&SWFClient::RegisterDomain, REQUEST)

#define RegisterWorkflowTypeAsync(...)  SubmitAsync(&SWFClient::RegisterWorkflowType, __VA_ARGS__)
#define RegisterWorkflowTypeCallable(REQUEST)  SubmitCallable(&SWFClient::RegisterWorkflowType, REQUEST)

#define RequestCancelWorkflowExecutionAsync(...)  SubmitAsync(&SWFClient::RequestCancelWorkflowExecution, __VA_ARGS__)
#define RequestCancelWorkflowExecutionCallable(REQUEST)  SubmitCallable(&SWFClient::RequestCancelWorkflowExecution, REQUEST)

#define RespondActivityTaskCanceledAsync(...)  SubmitAsync(&SWFClient::RespondActivityTaskCanceled, __VA_ARGS__)
#define RespondActivityTaskCanceledCallable(REQUEST)  SubmitCallable(&SWFClient::RespondActivityTaskCanceled, REQUEST)

#define RespondActivityTaskCompletedAsync(...)  SubmitAsync(&SWFClient::RespondActivityTaskCompleted, __VA_ARGS__)
#define RespondActivityTaskCompletedCallable(REQUEST)  SubmitCallable(&SWFClient::RespondActivityTaskCompleted, REQUEST)

#define RespondActivityTaskFailedAsync(...)  SubmitAsync(&SWFClient::RespondActivityTaskFailed, __VA_ARGS__)
#define RespondActivityTaskFailedCallable(REQUEST)  SubmitCallable(&SWFClient::RespondActivityTaskFailed, REQUEST)

#define RespondDecisionTaskCompletedAsync(...)  SubmitAsync(&SWFClient::RespondDecisionTaskCompleted, __VA_ARGS__)
#define RespondDecisionTaskCompletedCallable(REQUEST)  SubmitCallable(&SWFClient::RespondDecisionTaskCompleted, REQUEST)

#define SignalWorkflowExecutionAsync(...)  SubmitAsync(&SWFClient::SignalWorkflowExecution, __VA_ARGS__)
#define SignalWorkflowExecutionCallable(REQUEST)  SubmitCallable(&SWFClient::SignalWorkflowExecution, REQUEST)

#define StartWorkflowExecutionAsync(...)  SubmitAsync(&SWFClient::StartWorkflowExecution, __VA_ARGS__)
#define StartWorkflowExecutionCallable(REQUEST)  SubmitCallable(&SWFClient::StartWorkflowExecution, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SWFClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SWFClient::TagResource, REQUEST)

#define TerminateWorkflowExecutionAsync(...)  SubmitAsync(&SWFClient::TerminateWorkflowExecution, __VA_ARGS__)
#define TerminateWorkflowExecutionCallable(REQUEST)  SubmitCallable(&SWFClient::TerminateWorkflowExecution, REQUEST)

#define UndeprecateActivityTypeAsync(...)  SubmitAsync(&SWFClient::UndeprecateActivityType, __VA_ARGS__)
#define UndeprecateActivityTypeCallable(REQUEST)  SubmitCallable(&SWFClient::UndeprecateActivityType, REQUEST)

#define UndeprecateDomainAsync(...)  SubmitAsync(&SWFClient::UndeprecateDomain, __VA_ARGS__)
#define UndeprecateDomainCallable(REQUEST)  SubmitCallable(&SWFClient::UndeprecateDomain, REQUEST)

#define UndeprecateWorkflowTypeAsync(...)  SubmitAsync(&SWFClient::UndeprecateWorkflowType, __VA_ARGS__)
#define UndeprecateWorkflowTypeCallable(REQUEST)  SubmitCallable(&SWFClient::UndeprecateWorkflowType, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SWFClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SWFClient::UntagResource, REQUEST)

