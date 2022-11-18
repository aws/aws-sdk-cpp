/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateExperimentTemplateAsync(...)  SubmitAsync(&FISClient::CreateExperimentTemplate, __VA_ARGS__)
#define CreateExperimentTemplateCallable(REQUEST)  SubmitCallable(&FISClient::CreateExperimentTemplate, REQUEST)

#define DeleteExperimentTemplateAsync(...)  SubmitAsync(&FISClient::DeleteExperimentTemplate, __VA_ARGS__)
#define DeleteExperimentTemplateCallable(REQUEST)  SubmitCallable(&FISClient::DeleteExperimentTemplate, REQUEST)

#define GetActionAsync(...)  SubmitAsync(&FISClient::GetAction, __VA_ARGS__)
#define GetActionCallable(REQUEST)  SubmitCallable(&FISClient::GetAction, REQUEST)

#define GetExperimentAsync(...)  SubmitAsync(&FISClient::GetExperiment, __VA_ARGS__)
#define GetExperimentCallable(REQUEST)  SubmitCallable(&FISClient::GetExperiment, REQUEST)

#define GetExperimentTemplateAsync(...)  SubmitAsync(&FISClient::GetExperimentTemplate, __VA_ARGS__)
#define GetExperimentTemplateCallable(REQUEST)  SubmitCallable(&FISClient::GetExperimentTemplate, REQUEST)

#define GetTargetResourceTypeAsync(...)  SubmitAsync(&FISClient::GetTargetResourceType, __VA_ARGS__)
#define GetTargetResourceTypeCallable(REQUEST)  SubmitCallable(&FISClient::GetTargetResourceType, REQUEST)

#define ListActionsAsync(...)  SubmitAsync(&FISClient::ListActions, __VA_ARGS__)
#define ListActionsCallable(REQUEST)  SubmitCallable(&FISClient::ListActions, REQUEST)

#define ListExperimentTemplatesAsync(...)  SubmitAsync(&FISClient::ListExperimentTemplates, __VA_ARGS__)
#define ListExperimentTemplatesCallable(REQUEST)  SubmitCallable(&FISClient::ListExperimentTemplates, REQUEST)

#define ListExperimentsAsync(...)  SubmitAsync(&FISClient::ListExperiments, __VA_ARGS__)
#define ListExperimentsCallable(REQUEST)  SubmitCallable(&FISClient::ListExperiments, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&FISClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&FISClient::ListTagsForResource, REQUEST)

#define ListTargetResourceTypesAsync(...)  SubmitAsync(&FISClient::ListTargetResourceTypes, __VA_ARGS__)
#define ListTargetResourceTypesCallable(REQUEST)  SubmitCallable(&FISClient::ListTargetResourceTypes, REQUEST)

#define StartExperimentAsync(...)  SubmitAsync(&FISClient::StartExperiment, __VA_ARGS__)
#define StartExperimentCallable(REQUEST)  SubmitCallable(&FISClient::StartExperiment, REQUEST)

#define StopExperimentAsync(...)  SubmitAsync(&FISClient::StopExperiment, __VA_ARGS__)
#define StopExperimentCallable(REQUEST)  SubmitCallable(&FISClient::StopExperiment, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&FISClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&FISClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&FISClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&FISClient::UntagResource, REQUEST)

#define UpdateExperimentTemplateAsync(...)  SubmitAsync(&FISClient::UpdateExperimentTemplate, __VA_ARGS__)
#define UpdateExperimentTemplateCallable(REQUEST)  SubmitCallable(&FISClient::UpdateExperimentTemplate, REQUEST)

