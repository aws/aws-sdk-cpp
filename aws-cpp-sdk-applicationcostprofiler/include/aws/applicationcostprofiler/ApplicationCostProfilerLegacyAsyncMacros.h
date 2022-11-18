/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteReportDefinitionAsync(...)  SubmitAsync(&ApplicationCostProfilerClient::DeleteReportDefinition, __VA_ARGS__)
#define DeleteReportDefinitionCallable(REQUEST)  SubmitCallable(&ApplicationCostProfilerClient::DeleteReportDefinition, REQUEST)

#define GetReportDefinitionAsync(...)  SubmitAsync(&ApplicationCostProfilerClient::GetReportDefinition, __VA_ARGS__)
#define GetReportDefinitionCallable(REQUEST)  SubmitCallable(&ApplicationCostProfilerClient::GetReportDefinition, REQUEST)

#define ImportApplicationUsageAsync(...)  SubmitAsync(&ApplicationCostProfilerClient::ImportApplicationUsage, __VA_ARGS__)
#define ImportApplicationUsageCallable(REQUEST)  SubmitCallable(&ApplicationCostProfilerClient::ImportApplicationUsage, REQUEST)

#define ListReportDefinitionsAsync(...)  SubmitAsync(&ApplicationCostProfilerClient::ListReportDefinitions, __VA_ARGS__)
#define ListReportDefinitionsCallable(REQUEST)  SubmitCallable(&ApplicationCostProfilerClient::ListReportDefinitions, REQUEST)

#define PutReportDefinitionAsync(...)  SubmitAsync(&ApplicationCostProfilerClient::PutReportDefinition, __VA_ARGS__)
#define PutReportDefinitionCallable(REQUEST)  SubmitCallable(&ApplicationCostProfilerClient::PutReportDefinition, REQUEST)

#define UpdateReportDefinitionAsync(...)  SubmitAsync(&ApplicationCostProfilerClient::UpdateReportDefinition, __VA_ARGS__)
#define UpdateReportDefinitionCallable(REQUEST)  SubmitCallable(&ApplicationCostProfilerClient::UpdateReportDefinition, REQUEST)

