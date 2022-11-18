/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcknowledgeJobAsync(...)  SubmitAsync(&CodePipelineClient::AcknowledgeJob, __VA_ARGS__)
#define AcknowledgeJobCallable(REQUEST)  SubmitCallable(&CodePipelineClient::AcknowledgeJob, REQUEST)

#define AcknowledgeThirdPartyJobAsync(...)  SubmitAsync(&CodePipelineClient::AcknowledgeThirdPartyJob, __VA_ARGS__)
#define AcknowledgeThirdPartyJobCallable(REQUEST)  SubmitCallable(&CodePipelineClient::AcknowledgeThirdPartyJob, REQUEST)

#define CreateCustomActionTypeAsync(...)  SubmitAsync(&CodePipelineClient::CreateCustomActionType, __VA_ARGS__)
#define CreateCustomActionTypeCallable(REQUEST)  SubmitCallable(&CodePipelineClient::CreateCustomActionType, REQUEST)

#define CreatePipelineAsync(...)  SubmitAsync(&CodePipelineClient::CreatePipeline, __VA_ARGS__)
#define CreatePipelineCallable(REQUEST)  SubmitCallable(&CodePipelineClient::CreatePipeline, REQUEST)

#define DeleteCustomActionTypeAsync(...)  SubmitAsync(&CodePipelineClient::DeleteCustomActionType, __VA_ARGS__)
#define DeleteCustomActionTypeCallable(REQUEST)  SubmitCallable(&CodePipelineClient::DeleteCustomActionType, REQUEST)

#define DeletePipelineAsync(...)  SubmitAsync(&CodePipelineClient::DeletePipeline, __VA_ARGS__)
#define DeletePipelineCallable(REQUEST)  SubmitCallable(&CodePipelineClient::DeletePipeline, REQUEST)

#define DeleteWebhookAsync(...)  SubmitAsync(&CodePipelineClient::DeleteWebhook, __VA_ARGS__)
#define DeleteWebhookCallable(REQUEST)  SubmitCallable(&CodePipelineClient::DeleteWebhook, REQUEST)

#define DeregisterWebhookWithThirdPartyAsync(...)  SubmitAsync(&CodePipelineClient::DeregisterWebhookWithThirdParty, __VA_ARGS__)
#define DeregisterWebhookWithThirdPartyCallable(REQUEST)  SubmitCallable(&CodePipelineClient::DeregisterWebhookWithThirdParty, REQUEST)

#define DisableStageTransitionAsync(...)  SubmitAsync(&CodePipelineClient::DisableStageTransition, __VA_ARGS__)
#define DisableStageTransitionCallable(REQUEST)  SubmitCallable(&CodePipelineClient::DisableStageTransition, REQUEST)

#define EnableStageTransitionAsync(...)  SubmitAsync(&CodePipelineClient::EnableStageTransition, __VA_ARGS__)
#define EnableStageTransitionCallable(REQUEST)  SubmitCallable(&CodePipelineClient::EnableStageTransition, REQUEST)

#define GetActionTypeAsync(...)  SubmitAsync(&CodePipelineClient::GetActionType, __VA_ARGS__)
#define GetActionTypeCallable(REQUEST)  SubmitCallable(&CodePipelineClient::GetActionType, REQUEST)

#define GetJobDetailsAsync(...)  SubmitAsync(&CodePipelineClient::GetJobDetails, __VA_ARGS__)
#define GetJobDetailsCallable(REQUEST)  SubmitCallable(&CodePipelineClient::GetJobDetails, REQUEST)

#define GetPipelineAsync(...)  SubmitAsync(&CodePipelineClient::GetPipeline, __VA_ARGS__)
#define GetPipelineCallable(REQUEST)  SubmitCallable(&CodePipelineClient::GetPipeline, REQUEST)

#define GetPipelineExecutionAsync(...)  SubmitAsync(&CodePipelineClient::GetPipelineExecution, __VA_ARGS__)
#define GetPipelineExecutionCallable(REQUEST)  SubmitCallable(&CodePipelineClient::GetPipelineExecution, REQUEST)

#define GetPipelineStateAsync(...)  SubmitAsync(&CodePipelineClient::GetPipelineState, __VA_ARGS__)
#define GetPipelineStateCallable(REQUEST)  SubmitCallable(&CodePipelineClient::GetPipelineState, REQUEST)

#define GetThirdPartyJobDetailsAsync(...)  SubmitAsync(&CodePipelineClient::GetThirdPartyJobDetails, __VA_ARGS__)
#define GetThirdPartyJobDetailsCallable(REQUEST)  SubmitCallable(&CodePipelineClient::GetThirdPartyJobDetails, REQUEST)

#define ListActionExecutionsAsync(...)  SubmitAsync(&CodePipelineClient::ListActionExecutions, __VA_ARGS__)
#define ListActionExecutionsCallable(REQUEST)  SubmitCallable(&CodePipelineClient::ListActionExecutions, REQUEST)

#define ListActionTypesAsync(...)  SubmitAsync(&CodePipelineClient::ListActionTypes, __VA_ARGS__)
#define ListActionTypesCallable(REQUEST)  SubmitCallable(&CodePipelineClient::ListActionTypes, REQUEST)

#define ListPipelineExecutionsAsync(...)  SubmitAsync(&CodePipelineClient::ListPipelineExecutions, __VA_ARGS__)
#define ListPipelineExecutionsCallable(REQUEST)  SubmitCallable(&CodePipelineClient::ListPipelineExecutions, REQUEST)

#define ListPipelinesAsync(...)  SubmitAsync(&CodePipelineClient::ListPipelines, __VA_ARGS__)
#define ListPipelinesCallable(REQUEST)  SubmitCallable(&CodePipelineClient::ListPipelines, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CodePipelineClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CodePipelineClient::ListTagsForResource, REQUEST)

#define ListWebhooksAsync(...)  SubmitAsync(&CodePipelineClient::ListWebhooks, __VA_ARGS__)
#define ListWebhooksCallable(REQUEST)  SubmitCallable(&CodePipelineClient::ListWebhooks, REQUEST)

#define PollForJobsAsync(...)  SubmitAsync(&CodePipelineClient::PollForJobs, __VA_ARGS__)
#define PollForJobsCallable(REQUEST)  SubmitCallable(&CodePipelineClient::PollForJobs, REQUEST)

#define PollForThirdPartyJobsAsync(...)  SubmitAsync(&CodePipelineClient::PollForThirdPartyJobs, __VA_ARGS__)
#define PollForThirdPartyJobsCallable(REQUEST)  SubmitCallable(&CodePipelineClient::PollForThirdPartyJobs, REQUEST)

#define PutActionRevisionAsync(...)  SubmitAsync(&CodePipelineClient::PutActionRevision, __VA_ARGS__)
#define PutActionRevisionCallable(REQUEST)  SubmitCallable(&CodePipelineClient::PutActionRevision, REQUEST)

#define PutApprovalResultAsync(...)  SubmitAsync(&CodePipelineClient::PutApprovalResult, __VA_ARGS__)
#define PutApprovalResultCallable(REQUEST)  SubmitCallable(&CodePipelineClient::PutApprovalResult, REQUEST)

#define PutJobFailureResultAsync(...)  SubmitAsync(&CodePipelineClient::PutJobFailureResult, __VA_ARGS__)
#define PutJobFailureResultCallable(REQUEST)  SubmitCallable(&CodePipelineClient::PutJobFailureResult, REQUEST)

#define PutJobSuccessResultAsync(...)  SubmitAsync(&CodePipelineClient::PutJobSuccessResult, __VA_ARGS__)
#define PutJobSuccessResultCallable(REQUEST)  SubmitCallable(&CodePipelineClient::PutJobSuccessResult, REQUEST)

#define PutThirdPartyJobFailureResultAsync(...)  SubmitAsync(&CodePipelineClient::PutThirdPartyJobFailureResult, __VA_ARGS__)
#define PutThirdPartyJobFailureResultCallable(REQUEST)  SubmitCallable(&CodePipelineClient::PutThirdPartyJobFailureResult, REQUEST)

#define PutThirdPartyJobSuccessResultAsync(...)  SubmitAsync(&CodePipelineClient::PutThirdPartyJobSuccessResult, __VA_ARGS__)
#define PutThirdPartyJobSuccessResultCallable(REQUEST)  SubmitCallable(&CodePipelineClient::PutThirdPartyJobSuccessResult, REQUEST)

#define PutWebhookAsync(...)  SubmitAsync(&CodePipelineClient::PutWebhook, __VA_ARGS__)
#define PutWebhookCallable(REQUEST)  SubmitCallable(&CodePipelineClient::PutWebhook, REQUEST)

#define RegisterWebhookWithThirdPartyAsync(...)  SubmitAsync(&CodePipelineClient::RegisterWebhookWithThirdParty, __VA_ARGS__)
#define RegisterWebhookWithThirdPartyCallable(REQUEST)  SubmitCallable(&CodePipelineClient::RegisterWebhookWithThirdParty, REQUEST)

#define RetryStageExecutionAsync(...)  SubmitAsync(&CodePipelineClient::RetryStageExecution, __VA_ARGS__)
#define RetryStageExecutionCallable(REQUEST)  SubmitCallable(&CodePipelineClient::RetryStageExecution, REQUEST)

#define StartPipelineExecutionAsync(...)  SubmitAsync(&CodePipelineClient::StartPipelineExecution, __VA_ARGS__)
#define StartPipelineExecutionCallable(REQUEST)  SubmitCallable(&CodePipelineClient::StartPipelineExecution, REQUEST)

#define StopPipelineExecutionAsync(...)  SubmitAsync(&CodePipelineClient::StopPipelineExecution, __VA_ARGS__)
#define StopPipelineExecutionCallable(REQUEST)  SubmitCallable(&CodePipelineClient::StopPipelineExecution, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CodePipelineClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CodePipelineClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CodePipelineClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CodePipelineClient::UntagResource, REQUEST)

#define UpdateActionTypeAsync(...)  SubmitAsync(&CodePipelineClient::UpdateActionType, __VA_ARGS__)
#define UpdateActionTypeCallable(REQUEST)  SubmitCallable(&CodePipelineClient::UpdateActionType, REQUEST)

#define UpdatePipelineAsync(...)  SubmitAsync(&CodePipelineClient::UpdatePipeline, __VA_ARGS__)
#define UpdatePipelineCallable(REQUEST)  SubmitCallable(&CodePipelineClient::UpdatePipeline, REQUEST)

