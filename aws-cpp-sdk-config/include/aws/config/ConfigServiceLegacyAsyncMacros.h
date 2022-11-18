/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchGetAggregateResourceConfigAsync(...)  SubmitAsync(&ConfigServiceClient::BatchGetAggregateResourceConfig, __VA_ARGS__)
#define BatchGetAggregateResourceConfigCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::BatchGetAggregateResourceConfig, REQUEST)

#define BatchGetResourceConfigAsync(...)  SubmitAsync(&ConfigServiceClient::BatchGetResourceConfig, __VA_ARGS__)
#define BatchGetResourceConfigCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::BatchGetResourceConfig, REQUEST)

#define DeleteAggregationAuthorizationAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteAggregationAuthorization, __VA_ARGS__)
#define DeleteAggregationAuthorizationCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteAggregationAuthorization, REQUEST)

#define DeleteConfigRuleAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteConfigRule, __VA_ARGS__)
#define DeleteConfigRuleCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteConfigRule, REQUEST)

#define DeleteConfigurationAggregatorAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteConfigurationAggregator, __VA_ARGS__)
#define DeleteConfigurationAggregatorCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteConfigurationAggregator, REQUEST)

#define DeleteConfigurationRecorderAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteConfigurationRecorder, __VA_ARGS__)
#define DeleteConfigurationRecorderCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteConfigurationRecorder, REQUEST)

#define DeleteConformancePackAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteConformancePack, __VA_ARGS__)
#define DeleteConformancePackCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteConformancePack, REQUEST)

#define DeleteDeliveryChannelAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteDeliveryChannel, __VA_ARGS__)
#define DeleteDeliveryChannelCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteDeliveryChannel, REQUEST)

#define DeleteEvaluationResultsAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteEvaluationResults, __VA_ARGS__)
#define DeleteEvaluationResultsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteEvaluationResults, REQUEST)

#define DeleteOrganizationConfigRuleAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteOrganizationConfigRule, __VA_ARGS__)
#define DeleteOrganizationConfigRuleCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteOrganizationConfigRule, REQUEST)

#define DeleteOrganizationConformancePackAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteOrganizationConformancePack, __VA_ARGS__)
#define DeleteOrganizationConformancePackCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteOrganizationConformancePack, REQUEST)

#define DeletePendingAggregationRequestAsync(...)  SubmitAsync(&ConfigServiceClient::DeletePendingAggregationRequest, __VA_ARGS__)
#define DeletePendingAggregationRequestCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeletePendingAggregationRequest, REQUEST)

#define DeleteRemediationConfigurationAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteRemediationConfiguration, __VA_ARGS__)
#define DeleteRemediationConfigurationCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteRemediationConfiguration, REQUEST)

#define DeleteRemediationExceptionsAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteRemediationExceptions, __VA_ARGS__)
#define DeleteRemediationExceptionsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteRemediationExceptions, REQUEST)

#define DeleteResourceConfigAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteResourceConfig, __VA_ARGS__)
#define DeleteResourceConfigCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteResourceConfig, REQUEST)

#define DeleteRetentionConfigurationAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteRetentionConfiguration, __VA_ARGS__)
#define DeleteRetentionConfigurationCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteRetentionConfiguration, REQUEST)

#define DeleteStoredQueryAsync(...)  SubmitAsync(&ConfigServiceClient::DeleteStoredQuery, __VA_ARGS__)
#define DeleteStoredQueryCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeleteStoredQuery, REQUEST)

#define DeliverConfigSnapshotAsync(...)  SubmitAsync(&ConfigServiceClient::DeliverConfigSnapshot, __VA_ARGS__)
#define DeliverConfigSnapshotCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DeliverConfigSnapshot, REQUEST)

#define DescribeAggregateComplianceByConfigRulesAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeAggregateComplianceByConfigRules, __VA_ARGS__)
#define DescribeAggregateComplianceByConfigRulesCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeAggregateComplianceByConfigRules, REQUEST)

#define DescribeAggregateComplianceByConformancePacksAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeAggregateComplianceByConformancePacks, __VA_ARGS__)
#define DescribeAggregateComplianceByConformancePacksCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeAggregateComplianceByConformancePacks, REQUEST)

#define DescribeAggregationAuthorizationsAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeAggregationAuthorizations, __VA_ARGS__)
#define DescribeAggregationAuthorizationsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeAggregationAuthorizations, REQUEST)

#define DescribeComplianceByConfigRuleAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeComplianceByConfigRule, __VA_ARGS__)
#define DescribeComplianceByConfigRuleCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeComplianceByConfigRule, REQUEST)

#define DescribeComplianceByResourceAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeComplianceByResource, __VA_ARGS__)
#define DescribeComplianceByResourceCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeComplianceByResource, REQUEST)

#define DescribeConfigRuleEvaluationStatusAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeConfigRuleEvaluationStatus, __VA_ARGS__)
#define DescribeConfigRuleEvaluationStatusCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeConfigRuleEvaluationStatus, REQUEST)

#define DescribeConfigRulesAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeConfigRules, __VA_ARGS__)
#define DescribeConfigRulesCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeConfigRules, REQUEST)

#define DescribeConfigurationAggregatorSourcesStatusAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatus, __VA_ARGS__)
#define DescribeConfigurationAggregatorSourcesStatusCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatus, REQUEST)

#define DescribeConfigurationAggregatorsAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeConfigurationAggregators, __VA_ARGS__)
#define DescribeConfigurationAggregatorsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeConfigurationAggregators, REQUEST)

#define DescribeConfigurationRecorderStatusAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeConfigurationRecorderStatus, __VA_ARGS__)
#define DescribeConfigurationRecorderStatusCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeConfigurationRecorderStatus, REQUEST)

#define DescribeConfigurationRecordersAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeConfigurationRecorders, __VA_ARGS__)
#define DescribeConfigurationRecordersCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeConfigurationRecorders, REQUEST)

#define DescribeConformancePackComplianceAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeConformancePackCompliance, __VA_ARGS__)
#define DescribeConformancePackComplianceCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeConformancePackCompliance, REQUEST)

#define DescribeConformancePackStatusAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeConformancePackStatus, __VA_ARGS__)
#define DescribeConformancePackStatusCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeConformancePackStatus, REQUEST)

#define DescribeConformancePacksAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeConformancePacks, __VA_ARGS__)
#define DescribeConformancePacksCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeConformancePacks, REQUEST)

#define DescribeDeliveryChannelStatusAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeDeliveryChannelStatus, __VA_ARGS__)
#define DescribeDeliveryChannelStatusCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeDeliveryChannelStatus, REQUEST)

#define DescribeDeliveryChannelsAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeDeliveryChannels, __VA_ARGS__)
#define DescribeDeliveryChannelsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeDeliveryChannels, REQUEST)

#define DescribeOrganizationConfigRuleStatusesAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeOrganizationConfigRuleStatuses, __VA_ARGS__)
#define DescribeOrganizationConfigRuleStatusesCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeOrganizationConfigRuleStatuses, REQUEST)

#define DescribeOrganizationConfigRulesAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeOrganizationConfigRules, __VA_ARGS__)
#define DescribeOrganizationConfigRulesCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeOrganizationConfigRules, REQUEST)

#define DescribeOrganizationConformancePackStatusesAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeOrganizationConformancePackStatuses, __VA_ARGS__)
#define DescribeOrganizationConformancePackStatusesCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeOrganizationConformancePackStatuses, REQUEST)

#define DescribeOrganizationConformancePacksAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeOrganizationConformancePacks, __VA_ARGS__)
#define DescribeOrganizationConformancePacksCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeOrganizationConformancePacks, REQUEST)

#define DescribePendingAggregationRequestsAsync(...)  SubmitAsync(&ConfigServiceClient::DescribePendingAggregationRequests, __VA_ARGS__)
#define DescribePendingAggregationRequestsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribePendingAggregationRequests, REQUEST)

#define DescribeRemediationConfigurationsAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeRemediationConfigurations, __VA_ARGS__)
#define DescribeRemediationConfigurationsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeRemediationConfigurations, REQUEST)

#define DescribeRemediationExceptionsAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeRemediationExceptions, __VA_ARGS__)
#define DescribeRemediationExceptionsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeRemediationExceptions, REQUEST)

#define DescribeRemediationExecutionStatusAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeRemediationExecutionStatus, __VA_ARGS__)
#define DescribeRemediationExecutionStatusCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeRemediationExecutionStatus, REQUEST)

#define DescribeRetentionConfigurationsAsync(...)  SubmitAsync(&ConfigServiceClient::DescribeRetentionConfigurations, __VA_ARGS__)
#define DescribeRetentionConfigurationsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::DescribeRetentionConfigurations, REQUEST)

#define GetAggregateComplianceDetailsByConfigRuleAsync(...)  SubmitAsync(&ConfigServiceClient::GetAggregateComplianceDetailsByConfigRule, __VA_ARGS__)
#define GetAggregateComplianceDetailsByConfigRuleCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetAggregateComplianceDetailsByConfigRule, REQUEST)

#define GetAggregateConfigRuleComplianceSummaryAsync(...)  SubmitAsync(&ConfigServiceClient::GetAggregateConfigRuleComplianceSummary, __VA_ARGS__)
#define GetAggregateConfigRuleComplianceSummaryCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetAggregateConfigRuleComplianceSummary, REQUEST)

#define GetAggregateConformancePackComplianceSummaryAsync(...)  SubmitAsync(&ConfigServiceClient::GetAggregateConformancePackComplianceSummary, __VA_ARGS__)
#define GetAggregateConformancePackComplianceSummaryCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetAggregateConformancePackComplianceSummary, REQUEST)

#define GetAggregateDiscoveredResourceCountsAsync(...)  SubmitAsync(&ConfigServiceClient::GetAggregateDiscoveredResourceCounts, __VA_ARGS__)
#define GetAggregateDiscoveredResourceCountsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetAggregateDiscoveredResourceCounts, REQUEST)

#define GetAggregateResourceConfigAsync(...)  SubmitAsync(&ConfigServiceClient::GetAggregateResourceConfig, __VA_ARGS__)
#define GetAggregateResourceConfigCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetAggregateResourceConfig, REQUEST)

#define GetComplianceDetailsByConfigRuleAsync(...)  SubmitAsync(&ConfigServiceClient::GetComplianceDetailsByConfigRule, __VA_ARGS__)
#define GetComplianceDetailsByConfigRuleCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetComplianceDetailsByConfigRule, REQUEST)

#define GetComplianceDetailsByResourceAsync(...)  SubmitAsync(&ConfigServiceClient::GetComplianceDetailsByResource, __VA_ARGS__)
#define GetComplianceDetailsByResourceCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetComplianceDetailsByResource, REQUEST)


#define GetComplianceSummaryByResourceTypeAsync(...)  SubmitAsync(&ConfigServiceClient::GetComplianceSummaryByResourceType, __VA_ARGS__)
#define GetComplianceSummaryByResourceTypeCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetComplianceSummaryByResourceType, REQUEST)

#define GetConformancePackComplianceDetailsAsync(...)  SubmitAsync(&ConfigServiceClient::GetConformancePackComplianceDetails, __VA_ARGS__)
#define GetConformancePackComplianceDetailsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetConformancePackComplianceDetails, REQUEST)

#define GetConformancePackComplianceSummaryAsync(...)  SubmitAsync(&ConfigServiceClient::GetConformancePackComplianceSummary, __VA_ARGS__)
#define GetConformancePackComplianceSummaryCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetConformancePackComplianceSummary, REQUEST)

#define GetCustomRulePolicyAsync(...)  SubmitAsync(&ConfigServiceClient::GetCustomRulePolicy, __VA_ARGS__)
#define GetCustomRulePolicyCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetCustomRulePolicy, REQUEST)

#define GetDiscoveredResourceCountsAsync(...)  SubmitAsync(&ConfigServiceClient::GetDiscoveredResourceCounts, __VA_ARGS__)
#define GetDiscoveredResourceCountsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetDiscoveredResourceCounts, REQUEST)

#define GetOrganizationConfigRuleDetailedStatusAsync(...)  SubmitAsync(&ConfigServiceClient::GetOrganizationConfigRuleDetailedStatus, __VA_ARGS__)
#define GetOrganizationConfigRuleDetailedStatusCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetOrganizationConfigRuleDetailedStatus, REQUEST)

#define GetOrganizationConformancePackDetailedStatusAsync(...)  SubmitAsync(&ConfigServiceClient::GetOrganizationConformancePackDetailedStatus, __VA_ARGS__)
#define GetOrganizationConformancePackDetailedStatusCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetOrganizationConformancePackDetailedStatus, REQUEST)

#define GetOrganizationCustomRulePolicyAsync(...)  SubmitAsync(&ConfigServiceClient::GetOrganizationCustomRulePolicy, __VA_ARGS__)
#define GetOrganizationCustomRulePolicyCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetOrganizationCustomRulePolicy, REQUEST)

#define GetResourceConfigHistoryAsync(...)  SubmitAsync(&ConfigServiceClient::GetResourceConfigHistory, __VA_ARGS__)
#define GetResourceConfigHistoryCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetResourceConfigHistory, REQUEST)

#define GetStoredQueryAsync(...)  SubmitAsync(&ConfigServiceClient::GetStoredQuery, __VA_ARGS__)
#define GetStoredQueryCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::GetStoredQuery, REQUEST)

#define ListAggregateDiscoveredResourcesAsync(...)  SubmitAsync(&ConfigServiceClient::ListAggregateDiscoveredResources, __VA_ARGS__)
#define ListAggregateDiscoveredResourcesCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::ListAggregateDiscoveredResources, REQUEST)

#define ListConformancePackComplianceScoresAsync(...)  SubmitAsync(&ConfigServiceClient::ListConformancePackComplianceScores, __VA_ARGS__)
#define ListConformancePackComplianceScoresCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::ListConformancePackComplianceScores, REQUEST)

#define ListDiscoveredResourcesAsync(...)  SubmitAsync(&ConfigServiceClient::ListDiscoveredResources, __VA_ARGS__)
#define ListDiscoveredResourcesCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::ListDiscoveredResources, REQUEST)

#define ListStoredQueriesAsync(...)  SubmitAsync(&ConfigServiceClient::ListStoredQueries, __VA_ARGS__)
#define ListStoredQueriesCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::ListStoredQueries, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ConfigServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::ListTagsForResource, REQUEST)

#define PutAggregationAuthorizationAsync(...)  SubmitAsync(&ConfigServiceClient::PutAggregationAuthorization, __VA_ARGS__)
#define PutAggregationAuthorizationCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutAggregationAuthorization, REQUEST)

#define PutConfigRuleAsync(...)  SubmitAsync(&ConfigServiceClient::PutConfigRule, __VA_ARGS__)
#define PutConfigRuleCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutConfigRule, REQUEST)

#define PutConfigurationAggregatorAsync(...)  SubmitAsync(&ConfigServiceClient::PutConfigurationAggregator, __VA_ARGS__)
#define PutConfigurationAggregatorCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutConfigurationAggregator, REQUEST)

#define PutConfigurationRecorderAsync(...)  SubmitAsync(&ConfigServiceClient::PutConfigurationRecorder, __VA_ARGS__)
#define PutConfigurationRecorderCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutConfigurationRecorder, REQUEST)

#define PutConformancePackAsync(...)  SubmitAsync(&ConfigServiceClient::PutConformancePack, __VA_ARGS__)
#define PutConformancePackCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutConformancePack, REQUEST)

#define PutDeliveryChannelAsync(...)  SubmitAsync(&ConfigServiceClient::PutDeliveryChannel, __VA_ARGS__)
#define PutDeliveryChannelCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutDeliveryChannel, REQUEST)

#define PutEvaluationsAsync(...)  SubmitAsync(&ConfigServiceClient::PutEvaluations, __VA_ARGS__)
#define PutEvaluationsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutEvaluations, REQUEST)

#define PutExternalEvaluationAsync(...)  SubmitAsync(&ConfigServiceClient::PutExternalEvaluation, __VA_ARGS__)
#define PutExternalEvaluationCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutExternalEvaluation, REQUEST)

#define PutOrganizationConfigRuleAsync(...)  SubmitAsync(&ConfigServiceClient::PutOrganizationConfigRule, __VA_ARGS__)
#define PutOrganizationConfigRuleCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutOrganizationConfigRule, REQUEST)

#define PutOrganizationConformancePackAsync(...)  SubmitAsync(&ConfigServiceClient::PutOrganizationConformancePack, __VA_ARGS__)
#define PutOrganizationConformancePackCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutOrganizationConformancePack, REQUEST)

#define PutRemediationConfigurationsAsync(...)  SubmitAsync(&ConfigServiceClient::PutRemediationConfigurations, __VA_ARGS__)
#define PutRemediationConfigurationsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutRemediationConfigurations, REQUEST)

#define PutRemediationExceptionsAsync(...)  SubmitAsync(&ConfigServiceClient::PutRemediationExceptions, __VA_ARGS__)
#define PutRemediationExceptionsCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutRemediationExceptions, REQUEST)

#define PutResourceConfigAsync(...)  SubmitAsync(&ConfigServiceClient::PutResourceConfig, __VA_ARGS__)
#define PutResourceConfigCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutResourceConfig, REQUEST)

#define PutRetentionConfigurationAsync(...)  SubmitAsync(&ConfigServiceClient::PutRetentionConfiguration, __VA_ARGS__)
#define PutRetentionConfigurationCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutRetentionConfiguration, REQUEST)

#define PutStoredQueryAsync(...)  SubmitAsync(&ConfigServiceClient::PutStoredQuery, __VA_ARGS__)
#define PutStoredQueryCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::PutStoredQuery, REQUEST)

#define SelectAggregateResourceConfigAsync(...)  SubmitAsync(&ConfigServiceClient::SelectAggregateResourceConfig, __VA_ARGS__)
#define SelectAggregateResourceConfigCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::SelectAggregateResourceConfig, REQUEST)

#define SelectResourceConfigAsync(...)  SubmitAsync(&ConfigServiceClient::SelectResourceConfig, __VA_ARGS__)
#define SelectResourceConfigCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::SelectResourceConfig, REQUEST)

#define StartConfigRulesEvaluationAsync(...)  SubmitAsync(&ConfigServiceClient::StartConfigRulesEvaluation, __VA_ARGS__)
#define StartConfigRulesEvaluationCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::StartConfigRulesEvaluation, REQUEST)

#define StartConfigurationRecorderAsync(...)  SubmitAsync(&ConfigServiceClient::StartConfigurationRecorder, __VA_ARGS__)
#define StartConfigurationRecorderCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::StartConfigurationRecorder, REQUEST)

#define StartRemediationExecutionAsync(...)  SubmitAsync(&ConfigServiceClient::StartRemediationExecution, __VA_ARGS__)
#define StartRemediationExecutionCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::StartRemediationExecution, REQUEST)

#define StopConfigurationRecorderAsync(...)  SubmitAsync(&ConfigServiceClient::StopConfigurationRecorder, __VA_ARGS__)
#define StopConfigurationRecorderCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::StopConfigurationRecorder, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ConfigServiceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ConfigServiceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ConfigServiceClient::UntagResource, REQUEST)

