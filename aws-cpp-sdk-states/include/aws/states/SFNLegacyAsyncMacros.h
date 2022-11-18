/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateActivityAsync(...)  SubmitAsync(&SFNClient::CreateActivity, __VA_ARGS__)
#define CreateActivityCallable(REQUEST)  SubmitCallable(&SFNClient::CreateActivity, REQUEST)

#define CreateStateMachineAsync(...)  SubmitAsync(&SFNClient::CreateStateMachine, __VA_ARGS__)
#define CreateStateMachineCallable(REQUEST)  SubmitCallable(&SFNClient::CreateStateMachine, REQUEST)

#define DeleteActivityAsync(...)  SubmitAsync(&SFNClient::DeleteActivity, __VA_ARGS__)
#define DeleteActivityCallable(REQUEST)  SubmitCallable(&SFNClient::DeleteActivity, REQUEST)

#define DeleteStateMachineAsync(...)  SubmitAsync(&SFNClient::DeleteStateMachine, __VA_ARGS__)
#define DeleteStateMachineCallable(REQUEST)  SubmitCallable(&SFNClient::DeleteStateMachine, REQUEST)

#define DescribeActivityAsync(...)  SubmitAsync(&SFNClient::DescribeActivity, __VA_ARGS__)
#define DescribeActivityCallable(REQUEST)  SubmitCallable(&SFNClient::DescribeActivity, REQUEST)

#define DescribeExecutionAsync(...)  SubmitAsync(&SFNClient::DescribeExecution, __VA_ARGS__)
#define DescribeExecutionCallable(REQUEST)  SubmitCallable(&SFNClient::DescribeExecution, REQUEST)

#define DescribeStateMachineAsync(...)  SubmitAsync(&SFNClient::DescribeStateMachine, __VA_ARGS__)
#define DescribeStateMachineCallable(REQUEST)  SubmitCallable(&SFNClient::DescribeStateMachine, REQUEST)

#define DescribeStateMachineForExecutionAsync(...)  SubmitAsync(&SFNClient::DescribeStateMachineForExecution, __VA_ARGS__)
#define DescribeStateMachineForExecutionCallable(REQUEST)  SubmitCallable(&SFNClient::DescribeStateMachineForExecution, REQUEST)

#define GetActivityTaskAsync(...)  SubmitAsync(&SFNClient::GetActivityTask, __VA_ARGS__)
#define GetActivityTaskCallable(REQUEST)  SubmitCallable(&SFNClient::GetActivityTask, REQUEST)

#define GetExecutionHistoryAsync(...)  SubmitAsync(&SFNClient::GetExecutionHistory, __VA_ARGS__)
#define GetExecutionHistoryCallable(REQUEST)  SubmitCallable(&SFNClient::GetExecutionHistory, REQUEST)

#define ListActivitiesAsync(...)  SubmitAsync(&SFNClient::ListActivities, __VA_ARGS__)
#define ListActivitiesCallable(REQUEST)  SubmitCallable(&SFNClient::ListActivities, REQUEST)

#define ListExecutionsAsync(...)  SubmitAsync(&SFNClient::ListExecutions, __VA_ARGS__)
#define ListExecutionsCallable(REQUEST)  SubmitCallable(&SFNClient::ListExecutions, REQUEST)

#define ListStateMachinesAsync(...)  SubmitAsync(&SFNClient::ListStateMachines, __VA_ARGS__)
#define ListStateMachinesCallable(REQUEST)  SubmitCallable(&SFNClient::ListStateMachines, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SFNClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SFNClient::ListTagsForResource, REQUEST)

#define SendTaskFailureAsync(...)  SubmitAsync(&SFNClient::SendTaskFailure, __VA_ARGS__)
#define SendTaskFailureCallable(REQUEST)  SubmitCallable(&SFNClient::SendTaskFailure, REQUEST)

#define SendTaskHeartbeatAsync(...)  SubmitAsync(&SFNClient::SendTaskHeartbeat, __VA_ARGS__)
#define SendTaskHeartbeatCallable(REQUEST)  SubmitCallable(&SFNClient::SendTaskHeartbeat, REQUEST)

#define SendTaskSuccessAsync(...)  SubmitAsync(&SFNClient::SendTaskSuccess, __VA_ARGS__)
#define SendTaskSuccessCallable(REQUEST)  SubmitCallable(&SFNClient::SendTaskSuccess, REQUEST)

#define StartExecutionAsync(...)  SubmitAsync(&SFNClient::StartExecution, __VA_ARGS__)
#define StartExecutionCallable(REQUEST)  SubmitCallable(&SFNClient::StartExecution, REQUEST)

#define StartSyncExecutionAsync(...)  SubmitAsync(&SFNClient::StartSyncExecution, __VA_ARGS__)
#define StartSyncExecutionCallable(REQUEST)  SubmitCallable(&SFNClient::StartSyncExecution, REQUEST)

#define StopExecutionAsync(...)  SubmitAsync(&SFNClient::StopExecution, __VA_ARGS__)
#define StopExecutionCallable(REQUEST)  SubmitCallable(&SFNClient::StopExecution, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SFNClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SFNClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SFNClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SFNClient::UntagResource, REQUEST)

#define UpdateStateMachineAsync(...)  SubmitAsync(&SFNClient::UpdateStateMachine, __VA_ARGS__)
#define UpdateStateMachineCallable(REQUEST)  SubmitCallable(&SFNClient::UpdateStateMachine, REQUEST)

