/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAlertManagerDefinitionAsync(...)  SubmitAsync(&PrometheusServiceClient::CreateAlertManagerDefinition, __VA_ARGS__)
#define CreateAlertManagerDefinitionCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::CreateAlertManagerDefinition, REQUEST)

#define CreateLoggingConfigurationAsync(...)  SubmitAsync(&PrometheusServiceClient::CreateLoggingConfiguration, __VA_ARGS__)
#define CreateLoggingConfigurationCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::CreateLoggingConfiguration, REQUEST)

#define CreateRuleGroupsNamespaceAsync(...)  SubmitAsync(&PrometheusServiceClient::CreateRuleGroupsNamespace, __VA_ARGS__)
#define CreateRuleGroupsNamespaceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::CreateRuleGroupsNamespace, REQUEST)

#define CreateWorkspaceAsync(...)  SubmitAsync(&PrometheusServiceClient::CreateWorkspace, __VA_ARGS__)
#define CreateWorkspaceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::CreateWorkspace, REQUEST)

#define DeleteAlertManagerDefinitionAsync(...)  SubmitAsync(&PrometheusServiceClient::DeleteAlertManagerDefinition, __VA_ARGS__)
#define DeleteAlertManagerDefinitionCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::DeleteAlertManagerDefinition, REQUEST)

#define DeleteLoggingConfigurationAsync(...)  SubmitAsync(&PrometheusServiceClient::DeleteLoggingConfiguration, __VA_ARGS__)
#define DeleteLoggingConfigurationCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::DeleteLoggingConfiguration, REQUEST)

#define DeleteRuleGroupsNamespaceAsync(...)  SubmitAsync(&PrometheusServiceClient::DeleteRuleGroupsNamespace, __VA_ARGS__)
#define DeleteRuleGroupsNamespaceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::DeleteRuleGroupsNamespace, REQUEST)

#define DeleteWorkspaceAsync(...)  SubmitAsync(&PrometheusServiceClient::DeleteWorkspace, __VA_ARGS__)
#define DeleteWorkspaceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::DeleteWorkspace, REQUEST)

#define DescribeAlertManagerDefinitionAsync(...)  SubmitAsync(&PrometheusServiceClient::DescribeAlertManagerDefinition, __VA_ARGS__)
#define DescribeAlertManagerDefinitionCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::DescribeAlertManagerDefinition, REQUEST)

#define DescribeLoggingConfigurationAsync(...)  SubmitAsync(&PrometheusServiceClient::DescribeLoggingConfiguration, __VA_ARGS__)
#define DescribeLoggingConfigurationCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::DescribeLoggingConfiguration, REQUEST)

#define DescribeRuleGroupsNamespaceAsync(...)  SubmitAsync(&PrometheusServiceClient::DescribeRuleGroupsNamespace, __VA_ARGS__)
#define DescribeRuleGroupsNamespaceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::DescribeRuleGroupsNamespace, REQUEST)

#define DescribeWorkspaceAsync(...)  SubmitAsync(&PrometheusServiceClient::DescribeWorkspace, __VA_ARGS__)
#define DescribeWorkspaceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::DescribeWorkspace, REQUEST)

#define ListRuleGroupsNamespacesAsync(...)  SubmitAsync(&PrometheusServiceClient::ListRuleGroupsNamespaces, __VA_ARGS__)
#define ListRuleGroupsNamespacesCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::ListRuleGroupsNamespaces, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&PrometheusServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::ListTagsForResource, REQUEST)

#define ListWorkspacesAsync(...)  SubmitAsync(&PrometheusServiceClient::ListWorkspaces, __VA_ARGS__)
#define ListWorkspacesCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::ListWorkspaces, REQUEST)

#define PutAlertManagerDefinitionAsync(...)  SubmitAsync(&PrometheusServiceClient::PutAlertManagerDefinition, __VA_ARGS__)
#define PutAlertManagerDefinitionCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::PutAlertManagerDefinition, REQUEST)

#define PutRuleGroupsNamespaceAsync(...)  SubmitAsync(&PrometheusServiceClient::PutRuleGroupsNamespace, __VA_ARGS__)
#define PutRuleGroupsNamespaceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::PutRuleGroupsNamespace, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&PrometheusServiceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&PrometheusServiceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::UntagResource, REQUEST)

#define UpdateLoggingConfigurationAsync(...)  SubmitAsync(&PrometheusServiceClient::UpdateLoggingConfiguration, __VA_ARGS__)
#define UpdateLoggingConfigurationCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::UpdateLoggingConfiguration, REQUEST)

#define UpdateWorkspaceAliasAsync(...)  SubmitAsync(&PrometheusServiceClient::UpdateWorkspaceAlias, __VA_ARGS__)
#define UpdateWorkspaceAliasCallable(REQUEST)  SubmitCallable(&PrometheusServiceClient::UpdateWorkspaceAlias, REQUEST)

