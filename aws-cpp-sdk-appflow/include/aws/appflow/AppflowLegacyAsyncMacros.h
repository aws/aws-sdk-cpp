/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateConnectorProfileAsync(...)  SubmitAsync(&AppflowClient::CreateConnectorProfile, __VA_ARGS__)
#define CreateConnectorProfileCallable(REQUEST)  SubmitCallable(&AppflowClient::CreateConnectorProfile, REQUEST)

#define CreateFlowAsync(...)  SubmitAsync(&AppflowClient::CreateFlow, __VA_ARGS__)
#define CreateFlowCallable(REQUEST)  SubmitCallable(&AppflowClient::CreateFlow, REQUEST)

#define DeleteConnectorProfileAsync(...)  SubmitAsync(&AppflowClient::DeleteConnectorProfile, __VA_ARGS__)
#define DeleteConnectorProfileCallable(REQUEST)  SubmitCallable(&AppflowClient::DeleteConnectorProfile, REQUEST)

#define DeleteFlowAsync(...)  SubmitAsync(&AppflowClient::DeleteFlow, __VA_ARGS__)
#define DeleteFlowCallable(REQUEST)  SubmitCallable(&AppflowClient::DeleteFlow, REQUEST)

#define DescribeConnectorAsync(...)  SubmitAsync(&AppflowClient::DescribeConnector, __VA_ARGS__)
#define DescribeConnectorCallable(REQUEST)  SubmitCallable(&AppflowClient::DescribeConnector, REQUEST)

#define DescribeConnectorEntityAsync(...)  SubmitAsync(&AppflowClient::DescribeConnectorEntity, __VA_ARGS__)
#define DescribeConnectorEntityCallable(REQUEST)  SubmitCallable(&AppflowClient::DescribeConnectorEntity, REQUEST)

#define DescribeConnectorProfilesAsync(...)  SubmitAsync(&AppflowClient::DescribeConnectorProfiles, __VA_ARGS__)
#define DescribeConnectorProfilesCallable(REQUEST)  SubmitCallable(&AppflowClient::DescribeConnectorProfiles, REQUEST)

#define DescribeConnectorsAsync(...)  SubmitAsync(&AppflowClient::DescribeConnectors, __VA_ARGS__)
#define DescribeConnectorsCallable(REQUEST)  SubmitCallable(&AppflowClient::DescribeConnectors, REQUEST)

#define DescribeFlowAsync(...)  SubmitAsync(&AppflowClient::DescribeFlow, __VA_ARGS__)
#define DescribeFlowCallable(REQUEST)  SubmitCallable(&AppflowClient::DescribeFlow, REQUEST)

#define DescribeFlowExecutionRecordsAsync(...)  SubmitAsync(&AppflowClient::DescribeFlowExecutionRecords, __VA_ARGS__)
#define DescribeFlowExecutionRecordsCallable(REQUEST)  SubmitCallable(&AppflowClient::DescribeFlowExecutionRecords, REQUEST)

#define ListConnectorEntitiesAsync(...)  SubmitAsync(&AppflowClient::ListConnectorEntities, __VA_ARGS__)
#define ListConnectorEntitiesCallable(REQUEST)  SubmitCallable(&AppflowClient::ListConnectorEntities, REQUEST)

#define ListConnectorsAsync(...)  SubmitAsync(&AppflowClient::ListConnectors, __VA_ARGS__)
#define ListConnectorsCallable(REQUEST)  SubmitCallable(&AppflowClient::ListConnectors, REQUEST)

#define ListFlowsAsync(...)  SubmitAsync(&AppflowClient::ListFlows, __VA_ARGS__)
#define ListFlowsCallable(REQUEST)  SubmitCallable(&AppflowClient::ListFlows, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AppflowClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AppflowClient::ListTagsForResource, REQUEST)

#define RegisterConnectorAsync(...)  SubmitAsync(&AppflowClient::RegisterConnector, __VA_ARGS__)
#define RegisterConnectorCallable(REQUEST)  SubmitCallable(&AppflowClient::RegisterConnector, REQUEST)

#define StartFlowAsync(...)  SubmitAsync(&AppflowClient::StartFlow, __VA_ARGS__)
#define StartFlowCallable(REQUEST)  SubmitCallable(&AppflowClient::StartFlow, REQUEST)

#define StopFlowAsync(...)  SubmitAsync(&AppflowClient::StopFlow, __VA_ARGS__)
#define StopFlowCallable(REQUEST)  SubmitCallable(&AppflowClient::StopFlow, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AppflowClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AppflowClient::TagResource, REQUEST)

#define UnregisterConnectorAsync(...)  SubmitAsync(&AppflowClient::UnregisterConnector, __VA_ARGS__)
#define UnregisterConnectorCallable(REQUEST)  SubmitCallable(&AppflowClient::UnregisterConnector, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AppflowClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AppflowClient::UntagResource, REQUEST)

#define UpdateConnectorProfileAsync(...)  SubmitAsync(&AppflowClient::UpdateConnectorProfile, __VA_ARGS__)
#define UpdateConnectorProfileCallable(REQUEST)  SubmitCallable(&AppflowClient::UpdateConnectorProfile, REQUEST)

#define UpdateFlowAsync(...)  SubmitAsync(&AppflowClient::UpdateFlow, __VA_ARGS__)
#define UpdateFlowCallable(REQUEST)  SubmitCallable(&AppflowClient::UpdateFlow, REQUEST)

