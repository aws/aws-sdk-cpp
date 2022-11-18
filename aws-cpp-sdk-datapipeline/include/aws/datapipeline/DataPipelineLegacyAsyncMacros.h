/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ActivatePipelineAsync(...)  SubmitAsync(&DataPipelineClient::ActivatePipeline, __VA_ARGS__)
#define ActivatePipelineCallable(REQUEST)  SubmitCallable(&DataPipelineClient::ActivatePipeline, REQUEST)

#define AddTagsAsync(...)  SubmitAsync(&DataPipelineClient::AddTags, __VA_ARGS__)
#define AddTagsCallable(REQUEST)  SubmitCallable(&DataPipelineClient::AddTags, REQUEST)

#define CreatePipelineAsync(...)  SubmitAsync(&DataPipelineClient::CreatePipeline, __VA_ARGS__)
#define CreatePipelineCallable(REQUEST)  SubmitCallable(&DataPipelineClient::CreatePipeline, REQUEST)

#define DeactivatePipelineAsync(...)  SubmitAsync(&DataPipelineClient::DeactivatePipeline, __VA_ARGS__)
#define DeactivatePipelineCallable(REQUEST)  SubmitCallable(&DataPipelineClient::DeactivatePipeline, REQUEST)

#define DeletePipelineAsync(...)  SubmitAsync(&DataPipelineClient::DeletePipeline, __VA_ARGS__)
#define DeletePipelineCallable(REQUEST)  SubmitCallable(&DataPipelineClient::DeletePipeline, REQUEST)

#define DescribeObjectsAsync(...)  SubmitAsync(&DataPipelineClient::DescribeObjects, __VA_ARGS__)
#define DescribeObjectsCallable(REQUEST)  SubmitCallable(&DataPipelineClient::DescribeObjects, REQUEST)

#define DescribePipelinesAsync(...)  SubmitAsync(&DataPipelineClient::DescribePipelines, __VA_ARGS__)
#define DescribePipelinesCallable(REQUEST)  SubmitCallable(&DataPipelineClient::DescribePipelines, REQUEST)

#define EvaluateExpressionAsync(...)  SubmitAsync(&DataPipelineClient::EvaluateExpression, __VA_ARGS__)
#define EvaluateExpressionCallable(REQUEST)  SubmitCallable(&DataPipelineClient::EvaluateExpression, REQUEST)

#define GetPipelineDefinitionAsync(...)  SubmitAsync(&DataPipelineClient::GetPipelineDefinition, __VA_ARGS__)
#define GetPipelineDefinitionCallable(REQUEST)  SubmitCallable(&DataPipelineClient::GetPipelineDefinition, REQUEST)

#define ListPipelinesAsync(...)  SubmitAsync(&DataPipelineClient::ListPipelines, __VA_ARGS__)
#define ListPipelinesCallable(REQUEST)  SubmitCallable(&DataPipelineClient::ListPipelines, REQUEST)

#define PollForTaskAsync(...)  SubmitAsync(&DataPipelineClient::PollForTask, __VA_ARGS__)
#define PollForTaskCallable(REQUEST)  SubmitCallable(&DataPipelineClient::PollForTask, REQUEST)

#define PutPipelineDefinitionAsync(...)  SubmitAsync(&DataPipelineClient::PutPipelineDefinition, __VA_ARGS__)
#define PutPipelineDefinitionCallable(REQUEST)  SubmitCallable(&DataPipelineClient::PutPipelineDefinition, REQUEST)

#define QueryObjectsAsync(...)  SubmitAsync(&DataPipelineClient::QueryObjects, __VA_ARGS__)
#define QueryObjectsCallable(REQUEST)  SubmitCallable(&DataPipelineClient::QueryObjects, REQUEST)

#define RemoveTagsAsync(...)  SubmitAsync(&DataPipelineClient::RemoveTags, __VA_ARGS__)
#define RemoveTagsCallable(REQUEST)  SubmitCallable(&DataPipelineClient::RemoveTags, REQUEST)

#define ReportTaskProgressAsync(...)  SubmitAsync(&DataPipelineClient::ReportTaskProgress, __VA_ARGS__)
#define ReportTaskProgressCallable(REQUEST)  SubmitCallable(&DataPipelineClient::ReportTaskProgress, REQUEST)

#define ReportTaskRunnerHeartbeatAsync(...)  SubmitAsync(&DataPipelineClient::ReportTaskRunnerHeartbeat, __VA_ARGS__)
#define ReportTaskRunnerHeartbeatCallable(REQUEST)  SubmitCallable(&DataPipelineClient::ReportTaskRunnerHeartbeat, REQUEST)

#define SetStatusAsync(...)  SubmitAsync(&DataPipelineClient::SetStatus, __VA_ARGS__)
#define SetStatusCallable(REQUEST)  SubmitCallable(&DataPipelineClient::SetStatus, REQUEST)

#define SetTaskStatusAsync(...)  SubmitAsync(&DataPipelineClient::SetTaskStatus, __VA_ARGS__)
#define SetTaskStatusCallable(REQUEST)  SubmitCallable(&DataPipelineClient::SetTaskStatus, REQUEST)

#define ValidatePipelineDefinitionAsync(...)  SubmitAsync(&DataPipelineClient::ValidatePipelineDefinition, __VA_ARGS__)
#define ValidatePipelineDefinitionCallable(REQUEST)  SubmitCallable(&DataPipelineClient::ValidatePipelineDefinition, REQUEST)

