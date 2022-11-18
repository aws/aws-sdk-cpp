/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateSuiteDefinitionAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::CreateSuiteDefinition, __VA_ARGS__)
#define CreateSuiteDefinitionCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::CreateSuiteDefinition, REQUEST)

#define DeleteSuiteDefinitionAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::DeleteSuiteDefinition, __VA_ARGS__)
#define DeleteSuiteDefinitionCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::DeleteSuiteDefinition, REQUEST)

#define GetEndpointAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::GetEndpoint, __VA_ARGS__)
#define GetEndpointCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::GetEndpoint, REQUEST)

#define GetSuiteDefinitionAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::GetSuiteDefinition, __VA_ARGS__)
#define GetSuiteDefinitionCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::GetSuiteDefinition, REQUEST)

#define GetSuiteRunAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::GetSuiteRun, __VA_ARGS__)
#define GetSuiteRunCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::GetSuiteRun, REQUEST)

#define GetSuiteRunReportAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::GetSuiteRunReport, __VA_ARGS__)
#define GetSuiteRunReportCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::GetSuiteRunReport, REQUEST)

#define ListSuiteDefinitionsAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::ListSuiteDefinitions, __VA_ARGS__)
#define ListSuiteDefinitionsCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::ListSuiteDefinitions, REQUEST)

#define ListSuiteRunsAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::ListSuiteRuns, __VA_ARGS__)
#define ListSuiteRunsCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::ListSuiteRuns, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::ListTagsForResource, REQUEST)

#define StartSuiteRunAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::StartSuiteRun, __VA_ARGS__)
#define StartSuiteRunCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::StartSuiteRun, REQUEST)

#define StopSuiteRunAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::StopSuiteRun, __VA_ARGS__)
#define StopSuiteRunCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::StopSuiteRun, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::UntagResource, REQUEST)

#define UpdateSuiteDefinitionAsync(...)  SubmitAsync(&IoTDeviceAdvisorClient::UpdateSuiteDefinition, __VA_ARGS__)
#define UpdateSuiteDefinitionCallable(REQUEST)  SubmitCallable(&IoTDeviceAdvisorClient::UpdateSuiteDefinition, REQUEST)

