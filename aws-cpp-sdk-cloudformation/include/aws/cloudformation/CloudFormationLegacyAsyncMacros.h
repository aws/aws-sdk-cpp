/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ActivateTypeAsync(...)  SubmitAsync(&CloudFormationClient::ActivateType, __VA_ARGS__)
#define ActivateTypeCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ActivateType, REQUEST)

#define BatchDescribeTypeConfigurationsAsync(...)  SubmitAsync(&CloudFormationClient::BatchDescribeTypeConfigurations, __VA_ARGS__)
#define BatchDescribeTypeConfigurationsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::BatchDescribeTypeConfigurations, REQUEST)

#define CancelUpdateStackAsync(...)  SubmitAsync(&CloudFormationClient::CancelUpdateStack, __VA_ARGS__)
#define CancelUpdateStackCallable(REQUEST)  SubmitCallable(&CloudFormationClient::CancelUpdateStack, REQUEST)

#define ContinueUpdateRollbackAsync(...)  SubmitAsync(&CloudFormationClient::ContinueUpdateRollback, __VA_ARGS__)
#define ContinueUpdateRollbackCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ContinueUpdateRollback, REQUEST)

#define CreateChangeSetAsync(...)  SubmitAsync(&CloudFormationClient::CreateChangeSet, __VA_ARGS__)
#define CreateChangeSetCallable(REQUEST)  SubmitCallable(&CloudFormationClient::CreateChangeSet, REQUEST)

#define CreateStackAsync(...)  SubmitAsync(&CloudFormationClient::CreateStack, __VA_ARGS__)
#define CreateStackCallable(REQUEST)  SubmitCallable(&CloudFormationClient::CreateStack, REQUEST)

#define CreateStackInstancesAsync(...)  SubmitAsync(&CloudFormationClient::CreateStackInstances, __VA_ARGS__)
#define CreateStackInstancesCallable(REQUEST)  SubmitCallable(&CloudFormationClient::CreateStackInstances, REQUEST)

#define CreateStackSetAsync(...)  SubmitAsync(&CloudFormationClient::CreateStackSet, __VA_ARGS__)
#define CreateStackSetCallable(REQUEST)  SubmitCallable(&CloudFormationClient::CreateStackSet, REQUEST)

#define DeactivateTypeAsync(...)  SubmitAsync(&CloudFormationClient::DeactivateType, __VA_ARGS__)
#define DeactivateTypeCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DeactivateType, REQUEST)

#define DeleteChangeSetAsync(...)  SubmitAsync(&CloudFormationClient::DeleteChangeSet, __VA_ARGS__)
#define DeleteChangeSetCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DeleteChangeSet, REQUEST)

#define DeleteStackAsync(...)  SubmitAsync(&CloudFormationClient::DeleteStack, __VA_ARGS__)
#define DeleteStackCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DeleteStack, REQUEST)

#define DeleteStackInstancesAsync(...)  SubmitAsync(&CloudFormationClient::DeleteStackInstances, __VA_ARGS__)
#define DeleteStackInstancesCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DeleteStackInstances, REQUEST)

#define DeleteStackSetAsync(...)  SubmitAsync(&CloudFormationClient::DeleteStackSet, __VA_ARGS__)
#define DeleteStackSetCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DeleteStackSet, REQUEST)

#define DeregisterTypeAsync(...)  SubmitAsync(&CloudFormationClient::DeregisterType, __VA_ARGS__)
#define DeregisterTypeCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DeregisterType, REQUEST)

#define DescribeAccountLimitsAsync(...)  SubmitAsync(&CloudFormationClient::DescribeAccountLimits, __VA_ARGS__)
#define DescribeAccountLimitsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeAccountLimits, REQUEST)

#define DescribeChangeSetAsync(...)  SubmitAsync(&CloudFormationClient::DescribeChangeSet, __VA_ARGS__)
#define DescribeChangeSetCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeChangeSet, REQUEST)

#define DescribeChangeSetHooksAsync(...)  SubmitAsync(&CloudFormationClient::DescribeChangeSetHooks, __VA_ARGS__)
#define DescribeChangeSetHooksCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeChangeSetHooks, REQUEST)

#define DescribePublisherAsync(...)  SubmitAsync(&CloudFormationClient::DescribePublisher, __VA_ARGS__)
#define DescribePublisherCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribePublisher, REQUEST)

#define DescribeStackDriftDetectionStatusAsync(...)  SubmitAsync(&CloudFormationClient::DescribeStackDriftDetectionStatus, __VA_ARGS__)
#define DescribeStackDriftDetectionStatusCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeStackDriftDetectionStatus, REQUEST)

#define DescribeStackEventsAsync(...)  SubmitAsync(&CloudFormationClient::DescribeStackEvents, __VA_ARGS__)
#define DescribeStackEventsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeStackEvents, REQUEST)

#define DescribeStackInstanceAsync(...)  SubmitAsync(&CloudFormationClient::DescribeStackInstance, __VA_ARGS__)
#define DescribeStackInstanceCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeStackInstance, REQUEST)

#define DescribeStackResourceAsync(...)  SubmitAsync(&CloudFormationClient::DescribeStackResource, __VA_ARGS__)
#define DescribeStackResourceCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeStackResource, REQUEST)

#define DescribeStackResourceDriftsAsync(...)  SubmitAsync(&CloudFormationClient::DescribeStackResourceDrifts, __VA_ARGS__)
#define DescribeStackResourceDriftsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeStackResourceDrifts, REQUEST)

#define DescribeStackResourcesAsync(...)  SubmitAsync(&CloudFormationClient::DescribeStackResources, __VA_ARGS__)
#define DescribeStackResourcesCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeStackResources, REQUEST)

#define DescribeStackSetAsync(...)  SubmitAsync(&CloudFormationClient::DescribeStackSet, __VA_ARGS__)
#define DescribeStackSetCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeStackSet, REQUEST)

#define DescribeStackSetOperationAsync(...)  SubmitAsync(&CloudFormationClient::DescribeStackSetOperation, __VA_ARGS__)
#define DescribeStackSetOperationCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeStackSetOperation, REQUEST)

#define DescribeStacksAsync(...)  SubmitAsync(&CloudFormationClient::DescribeStacks, __VA_ARGS__)
#define DescribeStacksCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeStacks, REQUEST)

#define DescribeTypeAsync(...)  SubmitAsync(&CloudFormationClient::DescribeType, __VA_ARGS__)
#define DescribeTypeCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeType, REQUEST)

#define DescribeTypeRegistrationAsync(...)  SubmitAsync(&CloudFormationClient::DescribeTypeRegistration, __VA_ARGS__)
#define DescribeTypeRegistrationCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DescribeTypeRegistration, REQUEST)

#define DetectStackDriftAsync(...)  SubmitAsync(&CloudFormationClient::DetectStackDrift, __VA_ARGS__)
#define DetectStackDriftCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DetectStackDrift, REQUEST)

#define DetectStackResourceDriftAsync(...)  SubmitAsync(&CloudFormationClient::DetectStackResourceDrift, __VA_ARGS__)
#define DetectStackResourceDriftCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DetectStackResourceDrift, REQUEST)

#define DetectStackSetDriftAsync(...)  SubmitAsync(&CloudFormationClient::DetectStackSetDrift, __VA_ARGS__)
#define DetectStackSetDriftCallable(REQUEST)  SubmitCallable(&CloudFormationClient::DetectStackSetDrift, REQUEST)

#define EstimateTemplateCostAsync(...)  SubmitAsync(&CloudFormationClient::EstimateTemplateCost, __VA_ARGS__)
#define EstimateTemplateCostCallable(REQUEST)  SubmitCallable(&CloudFormationClient::EstimateTemplateCost, REQUEST)

#define ExecuteChangeSetAsync(...)  SubmitAsync(&CloudFormationClient::ExecuteChangeSet, __VA_ARGS__)
#define ExecuteChangeSetCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ExecuteChangeSet, REQUEST)

#define GetStackPolicyAsync(...)  SubmitAsync(&CloudFormationClient::GetStackPolicy, __VA_ARGS__)
#define GetStackPolicyCallable(REQUEST)  SubmitCallable(&CloudFormationClient::GetStackPolicy, REQUEST)

#define GetTemplateAsync(...)  SubmitAsync(&CloudFormationClient::GetTemplate, __VA_ARGS__)
#define GetTemplateCallable(REQUEST)  SubmitCallable(&CloudFormationClient::GetTemplate, REQUEST)

#define GetTemplateSummaryAsync(...)  SubmitAsync(&CloudFormationClient::GetTemplateSummary, __VA_ARGS__)
#define GetTemplateSummaryCallable(REQUEST)  SubmitCallable(&CloudFormationClient::GetTemplateSummary, REQUEST)

#define ImportStacksToStackSetAsync(...)  SubmitAsync(&CloudFormationClient::ImportStacksToStackSet, __VA_ARGS__)
#define ImportStacksToStackSetCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ImportStacksToStackSet, REQUEST)

#define ListChangeSetsAsync(...)  SubmitAsync(&CloudFormationClient::ListChangeSets, __VA_ARGS__)
#define ListChangeSetsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListChangeSets, REQUEST)

#define ListExportsAsync(...)  SubmitAsync(&CloudFormationClient::ListExports, __VA_ARGS__)
#define ListExportsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListExports, REQUEST)

#define ListImportsAsync(...)  SubmitAsync(&CloudFormationClient::ListImports, __VA_ARGS__)
#define ListImportsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListImports, REQUEST)

#define ListStackInstancesAsync(...)  SubmitAsync(&CloudFormationClient::ListStackInstances, __VA_ARGS__)
#define ListStackInstancesCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListStackInstances, REQUEST)

#define ListStackResourcesAsync(...)  SubmitAsync(&CloudFormationClient::ListStackResources, __VA_ARGS__)
#define ListStackResourcesCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListStackResources, REQUEST)

#define ListStackSetOperationResultsAsync(...)  SubmitAsync(&CloudFormationClient::ListStackSetOperationResults, __VA_ARGS__)
#define ListStackSetOperationResultsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListStackSetOperationResults, REQUEST)

#define ListStackSetOperationsAsync(...)  SubmitAsync(&CloudFormationClient::ListStackSetOperations, __VA_ARGS__)
#define ListStackSetOperationsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListStackSetOperations, REQUEST)

#define ListStackSetsAsync(...)  SubmitAsync(&CloudFormationClient::ListStackSets, __VA_ARGS__)
#define ListStackSetsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListStackSets, REQUEST)

#define ListStacksAsync(...)  SubmitAsync(&CloudFormationClient::ListStacks, __VA_ARGS__)
#define ListStacksCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListStacks, REQUEST)

#define ListTypeRegistrationsAsync(...)  SubmitAsync(&CloudFormationClient::ListTypeRegistrations, __VA_ARGS__)
#define ListTypeRegistrationsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListTypeRegistrations, REQUEST)

#define ListTypeVersionsAsync(...)  SubmitAsync(&CloudFormationClient::ListTypeVersions, __VA_ARGS__)
#define ListTypeVersionsCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListTypeVersions, REQUEST)

#define ListTypesAsync(...)  SubmitAsync(&CloudFormationClient::ListTypes, __VA_ARGS__)
#define ListTypesCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ListTypes, REQUEST)

#define PublishTypeAsync(...)  SubmitAsync(&CloudFormationClient::PublishType, __VA_ARGS__)
#define PublishTypeCallable(REQUEST)  SubmitCallable(&CloudFormationClient::PublishType, REQUEST)

#define RecordHandlerProgressAsync(...)  SubmitAsync(&CloudFormationClient::RecordHandlerProgress, __VA_ARGS__)
#define RecordHandlerProgressCallable(REQUEST)  SubmitCallable(&CloudFormationClient::RecordHandlerProgress, REQUEST)

#define RegisterPublisherAsync(...)  SubmitAsync(&CloudFormationClient::RegisterPublisher, __VA_ARGS__)
#define RegisterPublisherCallable(REQUEST)  SubmitCallable(&CloudFormationClient::RegisterPublisher, REQUEST)

#define RegisterTypeAsync(...)  SubmitAsync(&CloudFormationClient::RegisterType, __VA_ARGS__)
#define RegisterTypeCallable(REQUEST)  SubmitCallable(&CloudFormationClient::RegisterType, REQUEST)

#define RollbackStackAsync(...)  SubmitAsync(&CloudFormationClient::RollbackStack, __VA_ARGS__)
#define RollbackStackCallable(REQUEST)  SubmitCallable(&CloudFormationClient::RollbackStack, REQUEST)

#define SetStackPolicyAsync(...)  SubmitAsync(&CloudFormationClient::SetStackPolicy, __VA_ARGS__)
#define SetStackPolicyCallable(REQUEST)  SubmitCallable(&CloudFormationClient::SetStackPolicy, REQUEST)

#define SetTypeConfigurationAsync(...)  SubmitAsync(&CloudFormationClient::SetTypeConfiguration, __VA_ARGS__)
#define SetTypeConfigurationCallable(REQUEST)  SubmitCallable(&CloudFormationClient::SetTypeConfiguration, REQUEST)

#define SetTypeDefaultVersionAsync(...)  SubmitAsync(&CloudFormationClient::SetTypeDefaultVersion, __VA_ARGS__)
#define SetTypeDefaultVersionCallable(REQUEST)  SubmitCallable(&CloudFormationClient::SetTypeDefaultVersion, REQUEST)

#define SignalResourceAsync(...)  SubmitAsync(&CloudFormationClient::SignalResource, __VA_ARGS__)
#define SignalResourceCallable(REQUEST)  SubmitCallable(&CloudFormationClient::SignalResource, REQUEST)

#define StopStackSetOperationAsync(...)  SubmitAsync(&CloudFormationClient::StopStackSetOperation, __VA_ARGS__)
#define StopStackSetOperationCallable(REQUEST)  SubmitCallable(&CloudFormationClient::StopStackSetOperation, REQUEST)

#define TestTypeAsync(...)  SubmitAsync(&CloudFormationClient::TestType, __VA_ARGS__)
#define TestTypeCallable(REQUEST)  SubmitCallable(&CloudFormationClient::TestType, REQUEST)

#define UpdateStackAsync(...)  SubmitAsync(&CloudFormationClient::UpdateStack, __VA_ARGS__)
#define UpdateStackCallable(REQUEST)  SubmitCallable(&CloudFormationClient::UpdateStack, REQUEST)

#define UpdateStackInstancesAsync(...)  SubmitAsync(&CloudFormationClient::UpdateStackInstances, __VA_ARGS__)
#define UpdateStackInstancesCallable(REQUEST)  SubmitCallable(&CloudFormationClient::UpdateStackInstances, REQUEST)

#define UpdateStackSetAsync(...)  SubmitAsync(&CloudFormationClient::UpdateStackSet, __VA_ARGS__)
#define UpdateStackSetCallable(REQUEST)  SubmitCallable(&CloudFormationClient::UpdateStackSet, REQUEST)

#define UpdateTerminationProtectionAsync(...)  SubmitAsync(&CloudFormationClient::UpdateTerminationProtection, __VA_ARGS__)
#define UpdateTerminationProtectionCallable(REQUEST)  SubmitCallable(&CloudFormationClient::UpdateTerminationProtection, REQUEST)

#define ValidateTemplateAsync(...)  SubmitAsync(&CloudFormationClient::ValidateTemplate, __VA_ARGS__)
#define ValidateTemplateCallable(REQUEST)  SubmitCallable(&CloudFormationClient::ValidateTemplate, REQUEST)

