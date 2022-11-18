/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteReportDefinitionAsync(...)  SubmitAsync(&CostandUsageReportServiceClient::DeleteReportDefinition, __VA_ARGS__)
#define DeleteReportDefinitionCallable(REQUEST)  SubmitCallable(&CostandUsageReportServiceClient::DeleteReportDefinition, REQUEST)

#define DescribeReportDefinitionsAsync(...)  SubmitAsync(&CostandUsageReportServiceClient::DescribeReportDefinitions, __VA_ARGS__)
#define DescribeReportDefinitionsCallable(REQUEST)  SubmitCallable(&CostandUsageReportServiceClient::DescribeReportDefinitions, REQUEST)

#define ModifyReportDefinitionAsync(...)  SubmitAsync(&CostandUsageReportServiceClient::ModifyReportDefinition, __VA_ARGS__)
#define ModifyReportDefinitionCallable(REQUEST)  SubmitCallable(&CostandUsageReportServiceClient::ModifyReportDefinition, REQUEST)

#define PutReportDefinitionAsync(...)  SubmitAsync(&CostandUsageReportServiceClient::PutReportDefinition, __VA_ARGS__)
#define PutReportDefinitionCallable(REQUEST)  SubmitCallable(&CostandUsageReportServiceClient::PutReportDefinition, REQUEST)

