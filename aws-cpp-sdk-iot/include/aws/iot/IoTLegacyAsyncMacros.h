/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptCertificateTransferAsync(...)  SubmitAsync(&IoTClient::AcceptCertificateTransfer, __VA_ARGS__)
#define AcceptCertificateTransferCallable(REQUEST)  SubmitCallable(&IoTClient::AcceptCertificateTransfer, REQUEST)

#define AddThingToBillingGroupAsync(...)  SubmitAsync(&IoTClient::AddThingToBillingGroup, __VA_ARGS__)
#define AddThingToBillingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::AddThingToBillingGroup, REQUEST)

#define AddThingToThingGroupAsync(...)  SubmitAsync(&IoTClient::AddThingToThingGroup, __VA_ARGS__)
#define AddThingToThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::AddThingToThingGroup, REQUEST)

#define AssociateTargetsWithJobAsync(...)  SubmitAsync(&IoTClient::AssociateTargetsWithJob, __VA_ARGS__)
#define AssociateTargetsWithJobCallable(REQUEST)  SubmitCallable(&IoTClient::AssociateTargetsWithJob, REQUEST)

#define AttachPolicyAsync(...)  SubmitAsync(&IoTClient::AttachPolicy, __VA_ARGS__)
#define AttachPolicyCallable(REQUEST)  SubmitCallable(&IoTClient::AttachPolicy, REQUEST)

#define AttachSecurityProfileAsync(...)  SubmitAsync(&IoTClient::AttachSecurityProfile, __VA_ARGS__)
#define AttachSecurityProfileCallable(REQUEST)  SubmitCallable(&IoTClient::AttachSecurityProfile, REQUEST)

#define AttachThingPrincipalAsync(...)  SubmitAsync(&IoTClient::AttachThingPrincipal, __VA_ARGS__)
#define AttachThingPrincipalCallable(REQUEST)  SubmitCallable(&IoTClient::AttachThingPrincipal, REQUEST)

#define CancelAuditMitigationActionsTaskAsync(...)  SubmitAsync(&IoTClient::CancelAuditMitigationActionsTask, __VA_ARGS__)
#define CancelAuditMitigationActionsTaskCallable(REQUEST)  SubmitCallable(&IoTClient::CancelAuditMitigationActionsTask, REQUEST)

#define CancelAuditTaskAsync(...)  SubmitAsync(&IoTClient::CancelAuditTask, __VA_ARGS__)
#define CancelAuditTaskCallable(REQUEST)  SubmitCallable(&IoTClient::CancelAuditTask, REQUEST)

#define CancelCertificateTransferAsync(...)  SubmitAsync(&IoTClient::CancelCertificateTransfer, __VA_ARGS__)
#define CancelCertificateTransferCallable(REQUEST)  SubmitCallable(&IoTClient::CancelCertificateTransfer, REQUEST)

#define CancelDetectMitigationActionsTaskAsync(...)  SubmitAsync(&IoTClient::CancelDetectMitigationActionsTask, __VA_ARGS__)
#define CancelDetectMitigationActionsTaskCallable(REQUEST)  SubmitCallable(&IoTClient::CancelDetectMitigationActionsTask, REQUEST)

#define CancelJobAsync(...)  SubmitAsync(&IoTClient::CancelJob, __VA_ARGS__)
#define CancelJobCallable(REQUEST)  SubmitCallable(&IoTClient::CancelJob, REQUEST)

#define CancelJobExecutionAsync(...)  SubmitAsync(&IoTClient::CancelJobExecution, __VA_ARGS__)
#define CancelJobExecutionCallable(REQUEST)  SubmitCallable(&IoTClient::CancelJobExecution, REQUEST)

#define ClearDefaultAuthorizerAsync(...)  SubmitAsync(&IoTClient::ClearDefaultAuthorizer, __VA_ARGS__)
#define ClearDefaultAuthorizerCallable(REQUEST)  SubmitCallable(&IoTClient::ClearDefaultAuthorizer, REQUEST)

#define ConfirmTopicRuleDestinationAsync(...)  SubmitAsync(&IoTClient::ConfirmTopicRuleDestination, __VA_ARGS__)
#define ConfirmTopicRuleDestinationCallable(REQUEST)  SubmitCallable(&IoTClient::ConfirmTopicRuleDestination, REQUEST)

#define CreateAuditSuppressionAsync(...)  SubmitAsync(&IoTClient::CreateAuditSuppression, __VA_ARGS__)
#define CreateAuditSuppressionCallable(REQUEST)  SubmitCallable(&IoTClient::CreateAuditSuppression, REQUEST)

#define CreateAuthorizerAsync(...)  SubmitAsync(&IoTClient::CreateAuthorizer, __VA_ARGS__)
#define CreateAuthorizerCallable(REQUEST)  SubmitCallable(&IoTClient::CreateAuthorizer, REQUEST)

#define CreateBillingGroupAsync(...)  SubmitAsync(&IoTClient::CreateBillingGroup, __VA_ARGS__)
#define CreateBillingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::CreateBillingGroup, REQUEST)

#define CreateCertificateFromCsrAsync(...)  SubmitAsync(&IoTClient::CreateCertificateFromCsr, __VA_ARGS__)
#define CreateCertificateFromCsrCallable(REQUEST)  SubmitCallable(&IoTClient::CreateCertificateFromCsr, REQUEST)

#define CreateCustomMetricAsync(...)  SubmitAsync(&IoTClient::CreateCustomMetric, __VA_ARGS__)
#define CreateCustomMetricCallable(REQUEST)  SubmitCallable(&IoTClient::CreateCustomMetric, REQUEST)

#define CreateDimensionAsync(...)  SubmitAsync(&IoTClient::CreateDimension, __VA_ARGS__)
#define CreateDimensionCallable(REQUEST)  SubmitCallable(&IoTClient::CreateDimension, REQUEST)

#define CreateDomainConfigurationAsync(...)  SubmitAsync(&IoTClient::CreateDomainConfiguration, __VA_ARGS__)
#define CreateDomainConfigurationCallable(REQUEST)  SubmitCallable(&IoTClient::CreateDomainConfiguration, REQUEST)

#define CreateDynamicThingGroupAsync(...)  SubmitAsync(&IoTClient::CreateDynamicThingGroup, __VA_ARGS__)
#define CreateDynamicThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::CreateDynamicThingGroup, REQUEST)

#define CreateFleetMetricAsync(...)  SubmitAsync(&IoTClient::CreateFleetMetric, __VA_ARGS__)
#define CreateFleetMetricCallable(REQUEST)  SubmitCallable(&IoTClient::CreateFleetMetric, REQUEST)

#define CreateJobAsync(...)  SubmitAsync(&IoTClient::CreateJob, __VA_ARGS__)
#define CreateJobCallable(REQUEST)  SubmitCallable(&IoTClient::CreateJob, REQUEST)

#define CreateJobTemplateAsync(...)  SubmitAsync(&IoTClient::CreateJobTemplate, __VA_ARGS__)
#define CreateJobTemplateCallable(REQUEST)  SubmitCallable(&IoTClient::CreateJobTemplate, REQUEST)

#define CreateKeysAndCertificateAsync(...)  SubmitAsync(&IoTClient::CreateKeysAndCertificate, __VA_ARGS__)
#define CreateKeysAndCertificateCallable(REQUEST)  SubmitCallable(&IoTClient::CreateKeysAndCertificate, REQUEST)

#define CreateMitigationActionAsync(...)  SubmitAsync(&IoTClient::CreateMitigationAction, __VA_ARGS__)
#define CreateMitigationActionCallable(REQUEST)  SubmitCallable(&IoTClient::CreateMitigationAction, REQUEST)

#define CreateOTAUpdateAsync(...)  SubmitAsync(&IoTClient::CreateOTAUpdate, __VA_ARGS__)
#define CreateOTAUpdateCallable(REQUEST)  SubmitCallable(&IoTClient::CreateOTAUpdate, REQUEST)

#define CreatePolicyAsync(...)  SubmitAsync(&IoTClient::CreatePolicy, __VA_ARGS__)
#define CreatePolicyCallable(REQUEST)  SubmitCallable(&IoTClient::CreatePolicy, REQUEST)

#define CreatePolicyVersionAsync(...)  SubmitAsync(&IoTClient::CreatePolicyVersion, __VA_ARGS__)
#define CreatePolicyVersionCallable(REQUEST)  SubmitCallable(&IoTClient::CreatePolicyVersion, REQUEST)

#define CreateProvisioningClaimAsync(...)  SubmitAsync(&IoTClient::CreateProvisioningClaim, __VA_ARGS__)
#define CreateProvisioningClaimCallable(REQUEST)  SubmitCallable(&IoTClient::CreateProvisioningClaim, REQUEST)

#define CreateProvisioningTemplateAsync(...)  SubmitAsync(&IoTClient::CreateProvisioningTemplate, __VA_ARGS__)
#define CreateProvisioningTemplateCallable(REQUEST)  SubmitCallable(&IoTClient::CreateProvisioningTemplate, REQUEST)

#define CreateProvisioningTemplateVersionAsync(...)  SubmitAsync(&IoTClient::CreateProvisioningTemplateVersion, __VA_ARGS__)
#define CreateProvisioningTemplateVersionCallable(REQUEST)  SubmitCallable(&IoTClient::CreateProvisioningTemplateVersion, REQUEST)

#define CreateRoleAliasAsync(...)  SubmitAsync(&IoTClient::CreateRoleAlias, __VA_ARGS__)
#define CreateRoleAliasCallable(REQUEST)  SubmitCallable(&IoTClient::CreateRoleAlias, REQUEST)

#define CreateScheduledAuditAsync(...)  SubmitAsync(&IoTClient::CreateScheduledAudit, __VA_ARGS__)
#define CreateScheduledAuditCallable(REQUEST)  SubmitCallable(&IoTClient::CreateScheduledAudit, REQUEST)

#define CreateSecurityProfileAsync(...)  SubmitAsync(&IoTClient::CreateSecurityProfile, __VA_ARGS__)
#define CreateSecurityProfileCallable(REQUEST)  SubmitCallable(&IoTClient::CreateSecurityProfile, REQUEST)

#define CreateStreamAsync(...)  SubmitAsync(&IoTClient::CreateStream, __VA_ARGS__)
#define CreateStreamCallable(REQUEST)  SubmitCallable(&IoTClient::CreateStream, REQUEST)

#define CreateThingAsync(...)  SubmitAsync(&IoTClient::CreateThing, __VA_ARGS__)
#define CreateThingCallable(REQUEST)  SubmitCallable(&IoTClient::CreateThing, REQUEST)

#define CreateThingGroupAsync(...)  SubmitAsync(&IoTClient::CreateThingGroup, __VA_ARGS__)
#define CreateThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::CreateThingGroup, REQUEST)

#define CreateThingTypeAsync(...)  SubmitAsync(&IoTClient::CreateThingType, __VA_ARGS__)
#define CreateThingTypeCallable(REQUEST)  SubmitCallable(&IoTClient::CreateThingType, REQUEST)

#define CreateTopicRuleAsync(...)  SubmitAsync(&IoTClient::CreateTopicRule, __VA_ARGS__)
#define CreateTopicRuleCallable(REQUEST)  SubmitCallable(&IoTClient::CreateTopicRule, REQUEST)

#define CreateTopicRuleDestinationAsync(...)  SubmitAsync(&IoTClient::CreateTopicRuleDestination, __VA_ARGS__)
#define CreateTopicRuleDestinationCallable(REQUEST)  SubmitCallable(&IoTClient::CreateTopicRuleDestination, REQUEST)

#define DeleteAccountAuditConfigurationAsync(...)  SubmitAsync(&IoTClient::DeleteAccountAuditConfiguration, __VA_ARGS__)
#define DeleteAccountAuditConfigurationCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteAccountAuditConfiguration, REQUEST)

#define DeleteAuditSuppressionAsync(...)  SubmitAsync(&IoTClient::DeleteAuditSuppression, __VA_ARGS__)
#define DeleteAuditSuppressionCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteAuditSuppression, REQUEST)

#define DeleteAuthorizerAsync(...)  SubmitAsync(&IoTClient::DeleteAuthorizer, __VA_ARGS__)
#define DeleteAuthorizerCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteAuthorizer, REQUEST)

#define DeleteBillingGroupAsync(...)  SubmitAsync(&IoTClient::DeleteBillingGroup, __VA_ARGS__)
#define DeleteBillingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteBillingGroup, REQUEST)

#define DeleteCACertificateAsync(...)  SubmitAsync(&IoTClient::DeleteCACertificate, __VA_ARGS__)
#define DeleteCACertificateCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteCACertificate, REQUEST)

#define DeleteCertificateAsync(...)  SubmitAsync(&IoTClient::DeleteCertificate, __VA_ARGS__)
#define DeleteCertificateCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteCertificate, REQUEST)

#define DeleteCustomMetricAsync(...)  SubmitAsync(&IoTClient::DeleteCustomMetric, __VA_ARGS__)
#define DeleteCustomMetricCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteCustomMetric, REQUEST)

#define DeleteDimensionAsync(...)  SubmitAsync(&IoTClient::DeleteDimension, __VA_ARGS__)
#define DeleteDimensionCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteDimension, REQUEST)

#define DeleteDomainConfigurationAsync(...)  SubmitAsync(&IoTClient::DeleteDomainConfiguration, __VA_ARGS__)
#define DeleteDomainConfigurationCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteDomainConfiguration, REQUEST)

#define DeleteDynamicThingGroupAsync(...)  SubmitAsync(&IoTClient::DeleteDynamicThingGroup, __VA_ARGS__)
#define DeleteDynamicThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteDynamicThingGroup, REQUEST)

#define DeleteFleetMetricAsync(...)  SubmitAsync(&IoTClient::DeleteFleetMetric, __VA_ARGS__)
#define DeleteFleetMetricCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteFleetMetric, REQUEST)

#define DeleteJobAsync(...)  SubmitAsync(&IoTClient::DeleteJob, __VA_ARGS__)
#define DeleteJobCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteJob, REQUEST)

#define DeleteJobExecutionAsync(...)  SubmitAsync(&IoTClient::DeleteJobExecution, __VA_ARGS__)
#define DeleteJobExecutionCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteJobExecution, REQUEST)

#define DeleteJobTemplateAsync(...)  SubmitAsync(&IoTClient::DeleteJobTemplate, __VA_ARGS__)
#define DeleteJobTemplateCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteJobTemplate, REQUEST)

#define DeleteMitigationActionAsync(...)  SubmitAsync(&IoTClient::DeleteMitigationAction, __VA_ARGS__)
#define DeleteMitigationActionCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteMitigationAction, REQUEST)

#define DeleteOTAUpdateAsync(...)  SubmitAsync(&IoTClient::DeleteOTAUpdate, __VA_ARGS__)
#define DeleteOTAUpdateCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteOTAUpdate, REQUEST)

#define DeletePolicyAsync(...)  SubmitAsync(&IoTClient::DeletePolicy, __VA_ARGS__)
#define DeletePolicyCallable(REQUEST)  SubmitCallable(&IoTClient::DeletePolicy, REQUEST)

#define DeletePolicyVersionAsync(...)  SubmitAsync(&IoTClient::DeletePolicyVersion, __VA_ARGS__)
#define DeletePolicyVersionCallable(REQUEST)  SubmitCallable(&IoTClient::DeletePolicyVersion, REQUEST)

#define DeleteProvisioningTemplateAsync(...)  SubmitAsync(&IoTClient::DeleteProvisioningTemplate, __VA_ARGS__)
#define DeleteProvisioningTemplateCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteProvisioningTemplate, REQUEST)

#define DeleteProvisioningTemplateVersionAsync(...)  SubmitAsync(&IoTClient::DeleteProvisioningTemplateVersion, __VA_ARGS__)
#define DeleteProvisioningTemplateVersionCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteProvisioningTemplateVersion, REQUEST)

#define DeleteRegistrationCodeAsync(...)  SubmitAsync(&IoTClient::DeleteRegistrationCode, __VA_ARGS__)
#define DeleteRegistrationCodeCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteRegistrationCode, REQUEST)

#define DeleteRoleAliasAsync(...)  SubmitAsync(&IoTClient::DeleteRoleAlias, __VA_ARGS__)
#define DeleteRoleAliasCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteRoleAlias, REQUEST)

#define DeleteScheduledAuditAsync(...)  SubmitAsync(&IoTClient::DeleteScheduledAudit, __VA_ARGS__)
#define DeleteScheduledAuditCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteScheduledAudit, REQUEST)

#define DeleteSecurityProfileAsync(...)  SubmitAsync(&IoTClient::DeleteSecurityProfile, __VA_ARGS__)
#define DeleteSecurityProfileCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteSecurityProfile, REQUEST)

#define DeleteStreamAsync(...)  SubmitAsync(&IoTClient::DeleteStream, __VA_ARGS__)
#define DeleteStreamCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteStream, REQUEST)

#define DeleteThingAsync(...)  SubmitAsync(&IoTClient::DeleteThing, __VA_ARGS__)
#define DeleteThingCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteThing, REQUEST)

#define DeleteThingGroupAsync(...)  SubmitAsync(&IoTClient::DeleteThingGroup, __VA_ARGS__)
#define DeleteThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteThingGroup, REQUEST)

#define DeleteThingTypeAsync(...)  SubmitAsync(&IoTClient::DeleteThingType, __VA_ARGS__)
#define DeleteThingTypeCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteThingType, REQUEST)

#define DeleteTopicRuleAsync(...)  SubmitAsync(&IoTClient::DeleteTopicRule, __VA_ARGS__)
#define DeleteTopicRuleCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteTopicRule, REQUEST)

#define DeleteTopicRuleDestinationAsync(...)  SubmitAsync(&IoTClient::DeleteTopicRuleDestination, __VA_ARGS__)
#define DeleteTopicRuleDestinationCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteTopicRuleDestination, REQUEST)

#define DeleteV2LoggingLevelAsync(...)  SubmitAsync(&IoTClient::DeleteV2LoggingLevel, __VA_ARGS__)
#define DeleteV2LoggingLevelCallable(REQUEST)  SubmitCallable(&IoTClient::DeleteV2LoggingLevel, REQUEST)

#define DeprecateThingTypeAsync(...)  SubmitAsync(&IoTClient::DeprecateThingType, __VA_ARGS__)
#define DeprecateThingTypeCallable(REQUEST)  SubmitCallable(&IoTClient::DeprecateThingType, REQUEST)

#define DescribeAccountAuditConfigurationAsync(...)  SubmitAsync(&IoTClient::DescribeAccountAuditConfiguration, __VA_ARGS__)
#define DescribeAccountAuditConfigurationCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeAccountAuditConfiguration, REQUEST)

#define DescribeAuditFindingAsync(...)  SubmitAsync(&IoTClient::DescribeAuditFinding, __VA_ARGS__)
#define DescribeAuditFindingCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeAuditFinding, REQUEST)

#define DescribeAuditMitigationActionsTaskAsync(...)  SubmitAsync(&IoTClient::DescribeAuditMitigationActionsTask, __VA_ARGS__)
#define DescribeAuditMitigationActionsTaskCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeAuditMitigationActionsTask, REQUEST)

#define DescribeAuditSuppressionAsync(...)  SubmitAsync(&IoTClient::DescribeAuditSuppression, __VA_ARGS__)
#define DescribeAuditSuppressionCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeAuditSuppression, REQUEST)

#define DescribeAuditTaskAsync(...)  SubmitAsync(&IoTClient::DescribeAuditTask, __VA_ARGS__)
#define DescribeAuditTaskCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeAuditTask, REQUEST)

#define DescribeAuthorizerAsync(...)  SubmitAsync(&IoTClient::DescribeAuthorizer, __VA_ARGS__)
#define DescribeAuthorizerCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeAuthorizer, REQUEST)

#define DescribeBillingGroupAsync(...)  SubmitAsync(&IoTClient::DescribeBillingGroup, __VA_ARGS__)
#define DescribeBillingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeBillingGroup, REQUEST)

#define DescribeCACertificateAsync(...)  SubmitAsync(&IoTClient::DescribeCACertificate, __VA_ARGS__)
#define DescribeCACertificateCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeCACertificate, REQUEST)

#define DescribeCertificateAsync(...)  SubmitAsync(&IoTClient::DescribeCertificate, __VA_ARGS__)
#define DescribeCertificateCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeCertificate, REQUEST)

#define DescribeCustomMetricAsync(...)  SubmitAsync(&IoTClient::DescribeCustomMetric, __VA_ARGS__)
#define DescribeCustomMetricCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeCustomMetric, REQUEST)

#define DescribeDefaultAuthorizerAsync(...)  SubmitAsync(&IoTClient::DescribeDefaultAuthorizer, __VA_ARGS__)
#define DescribeDefaultAuthorizerCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeDefaultAuthorizer, REQUEST)

#define DescribeDetectMitigationActionsTaskAsync(...)  SubmitAsync(&IoTClient::DescribeDetectMitigationActionsTask, __VA_ARGS__)
#define DescribeDetectMitigationActionsTaskCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeDetectMitigationActionsTask, REQUEST)

#define DescribeDimensionAsync(...)  SubmitAsync(&IoTClient::DescribeDimension, __VA_ARGS__)
#define DescribeDimensionCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeDimension, REQUEST)

#define DescribeDomainConfigurationAsync(...)  SubmitAsync(&IoTClient::DescribeDomainConfiguration, __VA_ARGS__)
#define DescribeDomainConfigurationCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeDomainConfiguration, REQUEST)

#define DescribeEndpointAsync(...)  SubmitAsync(&IoTClient::DescribeEndpoint, __VA_ARGS__)
#define DescribeEndpointCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeEndpoint, REQUEST)

#define DescribeEventConfigurationsAsync(...)  SubmitAsync(&IoTClient::DescribeEventConfigurations, __VA_ARGS__)
#define DescribeEventConfigurationsCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeEventConfigurations, REQUEST)

#define DescribeFleetMetricAsync(...)  SubmitAsync(&IoTClient::DescribeFleetMetric, __VA_ARGS__)
#define DescribeFleetMetricCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeFleetMetric, REQUEST)

#define DescribeIndexAsync(...)  SubmitAsync(&IoTClient::DescribeIndex, __VA_ARGS__)
#define DescribeIndexCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeIndex, REQUEST)

#define DescribeJobAsync(...)  SubmitAsync(&IoTClient::DescribeJob, __VA_ARGS__)
#define DescribeJobCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeJob, REQUEST)

#define DescribeJobExecutionAsync(...)  SubmitAsync(&IoTClient::DescribeJobExecution, __VA_ARGS__)
#define DescribeJobExecutionCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeJobExecution, REQUEST)

#define DescribeJobTemplateAsync(...)  SubmitAsync(&IoTClient::DescribeJobTemplate, __VA_ARGS__)
#define DescribeJobTemplateCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeJobTemplate, REQUEST)

#define DescribeManagedJobTemplateAsync(...)  SubmitAsync(&IoTClient::DescribeManagedJobTemplate, __VA_ARGS__)
#define DescribeManagedJobTemplateCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeManagedJobTemplate, REQUEST)

#define DescribeMitigationActionAsync(...)  SubmitAsync(&IoTClient::DescribeMitigationAction, __VA_ARGS__)
#define DescribeMitigationActionCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeMitigationAction, REQUEST)

#define DescribeProvisioningTemplateAsync(...)  SubmitAsync(&IoTClient::DescribeProvisioningTemplate, __VA_ARGS__)
#define DescribeProvisioningTemplateCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeProvisioningTemplate, REQUEST)

#define DescribeProvisioningTemplateVersionAsync(...)  SubmitAsync(&IoTClient::DescribeProvisioningTemplateVersion, __VA_ARGS__)
#define DescribeProvisioningTemplateVersionCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeProvisioningTemplateVersion, REQUEST)

#define DescribeRoleAliasAsync(...)  SubmitAsync(&IoTClient::DescribeRoleAlias, __VA_ARGS__)
#define DescribeRoleAliasCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeRoleAlias, REQUEST)

#define DescribeScheduledAuditAsync(...)  SubmitAsync(&IoTClient::DescribeScheduledAudit, __VA_ARGS__)
#define DescribeScheduledAuditCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeScheduledAudit, REQUEST)

#define DescribeSecurityProfileAsync(...)  SubmitAsync(&IoTClient::DescribeSecurityProfile, __VA_ARGS__)
#define DescribeSecurityProfileCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeSecurityProfile, REQUEST)

#define DescribeStreamAsync(...)  SubmitAsync(&IoTClient::DescribeStream, __VA_ARGS__)
#define DescribeStreamCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeStream, REQUEST)

#define DescribeThingAsync(...)  SubmitAsync(&IoTClient::DescribeThing, __VA_ARGS__)
#define DescribeThingCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeThing, REQUEST)

#define DescribeThingGroupAsync(...)  SubmitAsync(&IoTClient::DescribeThingGroup, __VA_ARGS__)
#define DescribeThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeThingGroup, REQUEST)

#define DescribeThingRegistrationTaskAsync(...)  SubmitAsync(&IoTClient::DescribeThingRegistrationTask, __VA_ARGS__)
#define DescribeThingRegistrationTaskCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeThingRegistrationTask, REQUEST)

#define DescribeThingTypeAsync(...)  SubmitAsync(&IoTClient::DescribeThingType, __VA_ARGS__)
#define DescribeThingTypeCallable(REQUEST)  SubmitCallable(&IoTClient::DescribeThingType, REQUEST)

#define DetachPolicyAsync(...)  SubmitAsync(&IoTClient::DetachPolicy, __VA_ARGS__)
#define DetachPolicyCallable(REQUEST)  SubmitCallable(&IoTClient::DetachPolicy, REQUEST)

#define DetachSecurityProfileAsync(...)  SubmitAsync(&IoTClient::DetachSecurityProfile, __VA_ARGS__)
#define DetachSecurityProfileCallable(REQUEST)  SubmitCallable(&IoTClient::DetachSecurityProfile, REQUEST)

#define DetachThingPrincipalAsync(...)  SubmitAsync(&IoTClient::DetachThingPrincipal, __VA_ARGS__)
#define DetachThingPrincipalCallable(REQUEST)  SubmitCallable(&IoTClient::DetachThingPrincipal, REQUEST)

#define DisableTopicRuleAsync(...)  SubmitAsync(&IoTClient::DisableTopicRule, __VA_ARGS__)
#define DisableTopicRuleCallable(REQUEST)  SubmitCallable(&IoTClient::DisableTopicRule, REQUEST)

#define EnableTopicRuleAsync(...)  SubmitAsync(&IoTClient::EnableTopicRule, __VA_ARGS__)
#define EnableTopicRuleCallable(REQUEST)  SubmitCallable(&IoTClient::EnableTopicRule, REQUEST)

#define GetBehaviorModelTrainingSummariesAsync(...)  SubmitAsync(&IoTClient::GetBehaviorModelTrainingSummaries, __VA_ARGS__)
#define GetBehaviorModelTrainingSummariesCallable(REQUEST)  SubmitCallable(&IoTClient::GetBehaviorModelTrainingSummaries, REQUEST)

#define GetBucketsAggregationAsync(...)  SubmitAsync(&IoTClient::GetBucketsAggregation, __VA_ARGS__)
#define GetBucketsAggregationCallable(REQUEST)  SubmitCallable(&IoTClient::GetBucketsAggregation, REQUEST)

#define GetCardinalityAsync(...)  SubmitAsync(&IoTClient::GetCardinality, __VA_ARGS__)
#define GetCardinalityCallable(REQUEST)  SubmitCallable(&IoTClient::GetCardinality, REQUEST)

#define GetEffectivePoliciesAsync(...)  SubmitAsync(&IoTClient::GetEffectivePolicies, __VA_ARGS__)
#define GetEffectivePoliciesCallable(REQUEST)  SubmitCallable(&IoTClient::GetEffectivePolicies, REQUEST)

#define GetIndexingConfigurationAsync(...)  SubmitAsync(&IoTClient::GetIndexingConfiguration, __VA_ARGS__)
#define GetIndexingConfigurationCallable(REQUEST)  SubmitCallable(&IoTClient::GetIndexingConfiguration, REQUEST)

#define GetJobDocumentAsync(...)  SubmitAsync(&IoTClient::GetJobDocument, __VA_ARGS__)
#define GetJobDocumentCallable(REQUEST)  SubmitCallable(&IoTClient::GetJobDocument, REQUEST)

#define GetLoggingOptionsAsync(...)  SubmitAsync(&IoTClient::GetLoggingOptions, __VA_ARGS__)
#define GetLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTClient::GetLoggingOptions, REQUEST)

#define GetOTAUpdateAsync(...)  SubmitAsync(&IoTClient::GetOTAUpdate, __VA_ARGS__)
#define GetOTAUpdateCallable(REQUEST)  SubmitCallable(&IoTClient::GetOTAUpdate, REQUEST)

#define GetPercentilesAsync(...)  SubmitAsync(&IoTClient::GetPercentiles, __VA_ARGS__)
#define GetPercentilesCallable(REQUEST)  SubmitCallable(&IoTClient::GetPercentiles, REQUEST)

#define GetPolicyAsync(...)  SubmitAsync(&IoTClient::GetPolicy, __VA_ARGS__)
#define GetPolicyCallable(REQUEST)  SubmitCallable(&IoTClient::GetPolicy, REQUEST)

#define GetPolicyVersionAsync(...)  SubmitAsync(&IoTClient::GetPolicyVersion, __VA_ARGS__)
#define GetPolicyVersionCallable(REQUEST)  SubmitCallable(&IoTClient::GetPolicyVersion, REQUEST)

#define GetRegistrationCodeAsync(...)  SubmitAsync(&IoTClient::GetRegistrationCode, __VA_ARGS__)
#define GetRegistrationCodeCallable(REQUEST)  SubmitCallable(&IoTClient::GetRegistrationCode, REQUEST)

#define GetStatisticsAsync(...)  SubmitAsync(&IoTClient::GetStatistics, __VA_ARGS__)
#define GetStatisticsCallable(REQUEST)  SubmitCallable(&IoTClient::GetStatistics, REQUEST)

#define GetTopicRuleAsync(...)  SubmitAsync(&IoTClient::GetTopicRule, __VA_ARGS__)
#define GetTopicRuleCallable(REQUEST)  SubmitCallable(&IoTClient::GetTopicRule, REQUEST)

#define GetTopicRuleDestinationAsync(...)  SubmitAsync(&IoTClient::GetTopicRuleDestination, __VA_ARGS__)
#define GetTopicRuleDestinationCallable(REQUEST)  SubmitCallable(&IoTClient::GetTopicRuleDestination, REQUEST)

#define GetV2LoggingOptionsAsync(...)  SubmitAsync(&IoTClient::GetV2LoggingOptions, __VA_ARGS__)
#define GetV2LoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTClient::GetV2LoggingOptions, REQUEST)

#define ListActiveViolationsAsync(...)  SubmitAsync(&IoTClient::ListActiveViolations, __VA_ARGS__)
#define ListActiveViolationsCallable(REQUEST)  SubmitCallable(&IoTClient::ListActiveViolations, REQUEST)

#define ListAttachedPoliciesAsync(...)  SubmitAsync(&IoTClient::ListAttachedPolicies, __VA_ARGS__)
#define ListAttachedPoliciesCallable(REQUEST)  SubmitCallable(&IoTClient::ListAttachedPolicies, REQUEST)

#define ListAuditFindingsAsync(...)  SubmitAsync(&IoTClient::ListAuditFindings, __VA_ARGS__)
#define ListAuditFindingsCallable(REQUEST)  SubmitCallable(&IoTClient::ListAuditFindings, REQUEST)

#define ListAuditMitigationActionsExecutionsAsync(...)  SubmitAsync(&IoTClient::ListAuditMitigationActionsExecutions, __VA_ARGS__)
#define ListAuditMitigationActionsExecutionsCallable(REQUEST)  SubmitCallable(&IoTClient::ListAuditMitigationActionsExecutions, REQUEST)

#define ListAuditMitigationActionsTasksAsync(...)  SubmitAsync(&IoTClient::ListAuditMitigationActionsTasks, __VA_ARGS__)
#define ListAuditMitigationActionsTasksCallable(REQUEST)  SubmitCallable(&IoTClient::ListAuditMitigationActionsTasks, REQUEST)

#define ListAuditSuppressionsAsync(...)  SubmitAsync(&IoTClient::ListAuditSuppressions, __VA_ARGS__)
#define ListAuditSuppressionsCallable(REQUEST)  SubmitCallable(&IoTClient::ListAuditSuppressions, REQUEST)

#define ListAuditTasksAsync(...)  SubmitAsync(&IoTClient::ListAuditTasks, __VA_ARGS__)
#define ListAuditTasksCallable(REQUEST)  SubmitCallable(&IoTClient::ListAuditTasks, REQUEST)

#define ListAuthorizersAsync(...)  SubmitAsync(&IoTClient::ListAuthorizers, __VA_ARGS__)
#define ListAuthorizersCallable(REQUEST)  SubmitCallable(&IoTClient::ListAuthorizers, REQUEST)

#define ListBillingGroupsAsync(...)  SubmitAsync(&IoTClient::ListBillingGroups, __VA_ARGS__)
#define ListBillingGroupsCallable(REQUEST)  SubmitCallable(&IoTClient::ListBillingGroups, REQUEST)

#define ListCACertificatesAsync(...)  SubmitAsync(&IoTClient::ListCACertificates, __VA_ARGS__)
#define ListCACertificatesCallable(REQUEST)  SubmitCallable(&IoTClient::ListCACertificates, REQUEST)

#define ListCertificatesAsync(...)  SubmitAsync(&IoTClient::ListCertificates, __VA_ARGS__)
#define ListCertificatesCallable(REQUEST)  SubmitCallable(&IoTClient::ListCertificates, REQUEST)

#define ListCertificatesByCAAsync(...)  SubmitAsync(&IoTClient::ListCertificatesByCA, __VA_ARGS__)
#define ListCertificatesByCACallable(REQUEST)  SubmitCallable(&IoTClient::ListCertificatesByCA, REQUEST)

#define ListCustomMetricsAsync(...)  SubmitAsync(&IoTClient::ListCustomMetrics, __VA_ARGS__)
#define ListCustomMetricsCallable(REQUEST)  SubmitCallable(&IoTClient::ListCustomMetrics, REQUEST)

#define ListDetectMitigationActionsExecutionsAsync(...)  SubmitAsync(&IoTClient::ListDetectMitigationActionsExecutions, __VA_ARGS__)
#define ListDetectMitigationActionsExecutionsCallable(REQUEST)  SubmitCallable(&IoTClient::ListDetectMitigationActionsExecutions, REQUEST)

#define ListDetectMitigationActionsTasksAsync(...)  SubmitAsync(&IoTClient::ListDetectMitigationActionsTasks, __VA_ARGS__)
#define ListDetectMitigationActionsTasksCallable(REQUEST)  SubmitCallable(&IoTClient::ListDetectMitigationActionsTasks, REQUEST)

#define ListDimensionsAsync(...)  SubmitAsync(&IoTClient::ListDimensions, __VA_ARGS__)
#define ListDimensionsCallable(REQUEST)  SubmitCallable(&IoTClient::ListDimensions, REQUEST)

#define ListDomainConfigurationsAsync(...)  SubmitAsync(&IoTClient::ListDomainConfigurations, __VA_ARGS__)
#define ListDomainConfigurationsCallable(REQUEST)  SubmitCallable(&IoTClient::ListDomainConfigurations, REQUEST)

#define ListFleetMetricsAsync(...)  SubmitAsync(&IoTClient::ListFleetMetrics, __VA_ARGS__)
#define ListFleetMetricsCallable(REQUEST)  SubmitCallable(&IoTClient::ListFleetMetrics, REQUEST)

#define ListIndicesAsync(...)  SubmitAsync(&IoTClient::ListIndices, __VA_ARGS__)
#define ListIndicesCallable(REQUEST)  SubmitCallable(&IoTClient::ListIndices, REQUEST)

#define ListJobExecutionsForJobAsync(...)  SubmitAsync(&IoTClient::ListJobExecutionsForJob, __VA_ARGS__)
#define ListJobExecutionsForJobCallable(REQUEST)  SubmitCallable(&IoTClient::ListJobExecutionsForJob, REQUEST)

#define ListJobExecutionsForThingAsync(...)  SubmitAsync(&IoTClient::ListJobExecutionsForThing, __VA_ARGS__)
#define ListJobExecutionsForThingCallable(REQUEST)  SubmitCallable(&IoTClient::ListJobExecutionsForThing, REQUEST)

#define ListJobTemplatesAsync(...)  SubmitAsync(&IoTClient::ListJobTemplates, __VA_ARGS__)
#define ListJobTemplatesCallable(REQUEST)  SubmitCallable(&IoTClient::ListJobTemplates, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&IoTClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&IoTClient::ListJobs, REQUEST)

#define ListManagedJobTemplatesAsync(...)  SubmitAsync(&IoTClient::ListManagedJobTemplates, __VA_ARGS__)
#define ListManagedJobTemplatesCallable(REQUEST)  SubmitCallable(&IoTClient::ListManagedJobTemplates, REQUEST)

#define ListMetricValuesAsync(...)  SubmitAsync(&IoTClient::ListMetricValues, __VA_ARGS__)
#define ListMetricValuesCallable(REQUEST)  SubmitCallable(&IoTClient::ListMetricValues, REQUEST)

#define ListMitigationActionsAsync(...)  SubmitAsync(&IoTClient::ListMitigationActions, __VA_ARGS__)
#define ListMitigationActionsCallable(REQUEST)  SubmitCallable(&IoTClient::ListMitigationActions, REQUEST)

#define ListOTAUpdatesAsync(...)  SubmitAsync(&IoTClient::ListOTAUpdates, __VA_ARGS__)
#define ListOTAUpdatesCallable(REQUEST)  SubmitCallable(&IoTClient::ListOTAUpdates, REQUEST)

#define ListOutgoingCertificatesAsync(...)  SubmitAsync(&IoTClient::ListOutgoingCertificates, __VA_ARGS__)
#define ListOutgoingCertificatesCallable(REQUEST)  SubmitCallable(&IoTClient::ListOutgoingCertificates, REQUEST)

#define ListPoliciesAsync(...)  SubmitAsync(&IoTClient::ListPolicies, __VA_ARGS__)
#define ListPoliciesCallable(REQUEST)  SubmitCallable(&IoTClient::ListPolicies, REQUEST)

#define ListPolicyVersionsAsync(...)  SubmitAsync(&IoTClient::ListPolicyVersions, __VA_ARGS__)
#define ListPolicyVersionsCallable(REQUEST)  SubmitCallable(&IoTClient::ListPolicyVersions, REQUEST)

#define ListPrincipalThingsAsync(...)  SubmitAsync(&IoTClient::ListPrincipalThings, __VA_ARGS__)
#define ListPrincipalThingsCallable(REQUEST)  SubmitCallable(&IoTClient::ListPrincipalThings, REQUEST)

#define ListProvisioningTemplateVersionsAsync(...)  SubmitAsync(&IoTClient::ListProvisioningTemplateVersions, __VA_ARGS__)
#define ListProvisioningTemplateVersionsCallable(REQUEST)  SubmitCallable(&IoTClient::ListProvisioningTemplateVersions, REQUEST)

#define ListProvisioningTemplatesAsync(...)  SubmitAsync(&IoTClient::ListProvisioningTemplates, __VA_ARGS__)
#define ListProvisioningTemplatesCallable(REQUEST)  SubmitCallable(&IoTClient::ListProvisioningTemplates, REQUEST)

#define ListRelatedResourcesForAuditFindingAsync(...)  SubmitAsync(&IoTClient::ListRelatedResourcesForAuditFinding, __VA_ARGS__)
#define ListRelatedResourcesForAuditFindingCallable(REQUEST)  SubmitCallable(&IoTClient::ListRelatedResourcesForAuditFinding, REQUEST)

#define ListRoleAliasesAsync(...)  SubmitAsync(&IoTClient::ListRoleAliases, __VA_ARGS__)
#define ListRoleAliasesCallable(REQUEST)  SubmitCallable(&IoTClient::ListRoleAliases, REQUEST)

#define ListScheduledAuditsAsync(...)  SubmitAsync(&IoTClient::ListScheduledAudits, __VA_ARGS__)
#define ListScheduledAuditsCallable(REQUEST)  SubmitCallable(&IoTClient::ListScheduledAudits, REQUEST)

#define ListSecurityProfilesAsync(...)  SubmitAsync(&IoTClient::ListSecurityProfiles, __VA_ARGS__)
#define ListSecurityProfilesCallable(REQUEST)  SubmitCallable(&IoTClient::ListSecurityProfiles, REQUEST)

#define ListSecurityProfilesForTargetAsync(...)  SubmitAsync(&IoTClient::ListSecurityProfilesForTarget, __VA_ARGS__)
#define ListSecurityProfilesForTargetCallable(REQUEST)  SubmitCallable(&IoTClient::ListSecurityProfilesForTarget, REQUEST)

#define ListStreamsAsync(...)  SubmitAsync(&IoTClient::ListStreams, __VA_ARGS__)
#define ListStreamsCallable(REQUEST)  SubmitCallable(&IoTClient::ListStreams, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IoTClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IoTClient::ListTagsForResource, REQUEST)

#define ListTargetsForPolicyAsync(...)  SubmitAsync(&IoTClient::ListTargetsForPolicy, __VA_ARGS__)
#define ListTargetsForPolicyCallable(REQUEST)  SubmitCallable(&IoTClient::ListTargetsForPolicy, REQUEST)

#define ListTargetsForSecurityProfileAsync(...)  SubmitAsync(&IoTClient::ListTargetsForSecurityProfile, __VA_ARGS__)
#define ListTargetsForSecurityProfileCallable(REQUEST)  SubmitCallable(&IoTClient::ListTargetsForSecurityProfile, REQUEST)

#define ListThingGroupsAsync(...)  SubmitAsync(&IoTClient::ListThingGroups, __VA_ARGS__)
#define ListThingGroupsCallable(REQUEST)  SubmitCallable(&IoTClient::ListThingGroups, REQUEST)

#define ListThingGroupsForThingAsync(...)  SubmitAsync(&IoTClient::ListThingGroupsForThing, __VA_ARGS__)
#define ListThingGroupsForThingCallable(REQUEST)  SubmitCallable(&IoTClient::ListThingGroupsForThing, REQUEST)

#define ListThingPrincipalsAsync(...)  SubmitAsync(&IoTClient::ListThingPrincipals, __VA_ARGS__)
#define ListThingPrincipalsCallable(REQUEST)  SubmitCallable(&IoTClient::ListThingPrincipals, REQUEST)

#define ListThingRegistrationTaskReportsAsync(...)  SubmitAsync(&IoTClient::ListThingRegistrationTaskReports, __VA_ARGS__)
#define ListThingRegistrationTaskReportsCallable(REQUEST)  SubmitCallable(&IoTClient::ListThingRegistrationTaskReports, REQUEST)

#define ListThingRegistrationTasksAsync(...)  SubmitAsync(&IoTClient::ListThingRegistrationTasks, __VA_ARGS__)
#define ListThingRegistrationTasksCallable(REQUEST)  SubmitCallable(&IoTClient::ListThingRegistrationTasks, REQUEST)

#define ListThingTypesAsync(...)  SubmitAsync(&IoTClient::ListThingTypes, __VA_ARGS__)
#define ListThingTypesCallable(REQUEST)  SubmitCallable(&IoTClient::ListThingTypes, REQUEST)

#define ListThingsAsync(...)  SubmitAsync(&IoTClient::ListThings, __VA_ARGS__)
#define ListThingsCallable(REQUEST)  SubmitCallable(&IoTClient::ListThings, REQUEST)

#define ListThingsInBillingGroupAsync(...)  SubmitAsync(&IoTClient::ListThingsInBillingGroup, __VA_ARGS__)
#define ListThingsInBillingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::ListThingsInBillingGroup, REQUEST)

#define ListThingsInThingGroupAsync(...)  SubmitAsync(&IoTClient::ListThingsInThingGroup, __VA_ARGS__)
#define ListThingsInThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::ListThingsInThingGroup, REQUEST)

#define ListTopicRuleDestinationsAsync(...)  SubmitAsync(&IoTClient::ListTopicRuleDestinations, __VA_ARGS__)
#define ListTopicRuleDestinationsCallable(REQUEST)  SubmitCallable(&IoTClient::ListTopicRuleDestinations, REQUEST)

#define ListTopicRulesAsync(...)  SubmitAsync(&IoTClient::ListTopicRules, __VA_ARGS__)
#define ListTopicRulesCallable(REQUEST)  SubmitCallable(&IoTClient::ListTopicRules, REQUEST)

#define ListV2LoggingLevelsAsync(...)  SubmitAsync(&IoTClient::ListV2LoggingLevels, __VA_ARGS__)
#define ListV2LoggingLevelsCallable(REQUEST)  SubmitCallable(&IoTClient::ListV2LoggingLevels, REQUEST)

#define ListViolationEventsAsync(...)  SubmitAsync(&IoTClient::ListViolationEvents, __VA_ARGS__)
#define ListViolationEventsCallable(REQUEST)  SubmitCallable(&IoTClient::ListViolationEvents, REQUEST)

#define PutVerificationStateOnViolationAsync(...)  SubmitAsync(&IoTClient::PutVerificationStateOnViolation, __VA_ARGS__)
#define PutVerificationStateOnViolationCallable(REQUEST)  SubmitCallable(&IoTClient::PutVerificationStateOnViolation, REQUEST)

#define RegisterCACertificateAsync(...)  SubmitAsync(&IoTClient::RegisterCACertificate, __VA_ARGS__)
#define RegisterCACertificateCallable(REQUEST)  SubmitCallable(&IoTClient::RegisterCACertificate, REQUEST)

#define RegisterCertificateAsync(...)  SubmitAsync(&IoTClient::RegisterCertificate, __VA_ARGS__)
#define RegisterCertificateCallable(REQUEST)  SubmitCallable(&IoTClient::RegisterCertificate, REQUEST)

#define RegisterCertificateWithoutCAAsync(...)  SubmitAsync(&IoTClient::RegisterCertificateWithoutCA, __VA_ARGS__)
#define RegisterCertificateWithoutCACallable(REQUEST)  SubmitCallable(&IoTClient::RegisterCertificateWithoutCA, REQUEST)

#define RegisterThingAsync(...)  SubmitAsync(&IoTClient::RegisterThing, __VA_ARGS__)
#define RegisterThingCallable(REQUEST)  SubmitCallable(&IoTClient::RegisterThing, REQUEST)

#define RejectCertificateTransferAsync(...)  SubmitAsync(&IoTClient::RejectCertificateTransfer, __VA_ARGS__)
#define RejectCertificateTransferCallable(REQUEST)  SubmitCallable(&IoTClient::RejectCertificateTransfer, REQUEST)

#define RemoveThingFromBillingGroupAsync(...)  SubmitAsync(&IoTClient::RemoveThingFromBillingGroup, __VA_ARGS__)
#define RemoveThingFromBillingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::RemoveThingFromBillingGroup, REQUEST)

#define RemoveThingFromThingGroupAsync(...)  SubmitAsync(&IoTClient::RemoveThingFromThingGroup, __VA_ARGS__)
#define RemoveThingFromThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::RemoveThingFromThingGroup, REQUEST)

#define ReplaceTopicRuleAsync(...)  SubmitAsync(&IoTClient::ReplaceTopicRule, __VA_ARGS__)
#define ReplaceTopicRuleCallable(REQUEST)  SubmitCallable(&IoTClient::ReplaceTopicRule, REQUEST)

#define SearchIndexAsync(...)  SubmitAsync(&IoTClient::SearchIndex, __VA_ARGS__)
#define SearchIndexCallable(REQUEST)  SubmitCallable(&IoTClient::SearchIndex, REQUEST)

#define SetDefaultAuthorizerAsync(...)  SubmitAsync(&IoTClient::SetDefaultAuthorizer, __VA_ARGS__)
#define SetDefaultAuthorizerCallable(REQUEST)  SubmitCallable(&IoTClient::SetDefaultAuthorizer, REQUEST)

#define SetDefaultPolicyVersionAsync(...)  SubmitAsync(&IoTClient::SetDefaultPolicyVersion, __VA_ARGS__)
#define SetDefaultPolicyVersionCallable(REQUEST)  SubmitCallable(&IoTClient::SetDefaultPolicyVersion, REQUEST)

#define SetLoggingOptionsAsync(...)  SubmitAsync(&IoTClient::SetLoggingOptions, __VA_ARGS__)
#define SetLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTClient::SetLoggingOptions, REQUEST)

#define SetV2LoggingLevelAsync(...)  SubmitAsync(&IoTClient::SetV2LoggingLevel, __VA_ARGS__)
#define SetV2LoggingLevelCallable(REQUEST)  SubmitCallable(&IoTClient::SetV2LoggingLevel, REQUEST)

#define SetV2LoggingOptionsAsync(...)  SubmitAsync(&IoTClient::SetV2LoggingOptions, __VA_ARGS__)
#define SetV2LoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTClient::SetV2LoggingOptions, REQUEST)

#define StartAuditMitigationActionsTaskAsync(...)  SubmitAsync(&IoTClient::StartAuditMitigationActionsTask, __VA_ARGS__)
#define StartAuditMitigationActionsTaskCallable(REQUEST)  SubmitCallable(&IoTClient::StartAuditMitigationActionsTask, REQUEST)

#define StartDetectMitigationActionsTaskAsync(...)  SubmitAsync(&IoTClient::StartDetectMitigationActionsTask, __VA_ARGS__)
#define StartDetectMitigationActionsTaskCallable(REQUEST)  SubmitCallable(&IoTClient::StartDetectMitigationActionsTask, REQUEST)

#define StartOnDemandAuditTaskAsync(...)  SubmitAsync(&IoTClient::StartOnDemandAuditTask, __VA_ARGS__)
#define StartOnDemandAuditTaskCallable(REQUEST)  SubmitCallable(&IoTClient::StartOnDemandAuditTask, REQUEST)

#define StartThingRegistrationTaskAsync(...)  SubmitAsync(&IoTClient::StartThingRegistrationTask, __VA_ARGS__)
#define StartThingRegistrationTaskCallable(REQUEST)  SubmitCallable(&IoTClient::StartThingRegistrationTask, REQUEST)

#define StopThingRegistrationTaskAsync(...)  SubmitAsync(&IoTClient::StopThingRegistrationTask, __VA_ARGS__)
#define StopThingRegistrationTaskCallable(REQUEST)  SubmitCallable(&IoTClient::StopThingRegistrationTask, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IoTClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IoTClient::TagResource, REQUEST)

#define TestAuthorizationAsync(...)  SubmitAsync(&IoTClient::TestAuthorization, __VA_ARGS__)
#define TestAuthorizationCallable(REQUEST)  SubmitCallable(&IoTClient::TestAuthorization, REQUEST)

#define TestInvokeAuthorizerAsync(...)  SubmitAsync(&IoTClient::TestInvokeAuthorizer, __VA_ARGS__)
#define TestInvokeAuthorizerCallable(REQUEST)  SubmitCallable(&IoTClient::TestInvokeAuthorizer, REQUEST)

#define TransferCertificateAsync(...)  SubmitAsync(&IoTClient::TransferCertificate, __VA_ARGS__)
#define TransferCertificateCallable(REQUEST)  SubmitCallable(&IoTClient::TransferCertificate, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IoTClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IoTClient::UntagResource, REQUEST)

#define UpdateAccountAuditConfigurationAsync(...)  SubmitAsync(&IoTClient::UpdateAccountAuditConfiguration, __VA_ARGS__)
#define UpdateAccountAuditConfigurationCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateAccountAuditConfiguration, REQUEST)

#define UpdateAuditSuppressionAsync(...)  SubmitAsync(&IoTClient::UpdateAuditSuppression, __VA_ARGS__)
#define UpdateAuditSuppressionCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateAuditSuppression, REQUEST)

#define UpdateAuthorizerAsync(...)  SubmitAsync(&IoTClient::UpdateAuthorizer, __VA_ARGS__)
#define UpdateAuthorizerCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateAuthorizer, REQUEST)

#define UpdateBillingGroupAsync(...)  SubmitAsync(&IoTClient::UpdateBillingGroup, __VA_ARGS__)
#define UpdateBillingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateBillingGroup, REQUEST)

#define UpdateCACertificateAsync(...)  SubmitAsync(&IoTClient::UpdateCACertificate, __VA_ARGS__)
#define UpdateCACertificateCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateCACertificate, REQUEST)

#define UpdateCertificateAsync(...)  SubmitAsync(&IoTClient::UpdateCertificate, __VA_ARGS__)
#define UpdateCertificateCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateCertificate, REQUEST)

#define UpdateCustomMetricAsync(...)  SubmitAsync(&IoTClient::UpdateCustomMetric, __VA_ARGS__)
#define UpdateCustomMetricCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateCustomMetric, REQUEST)

#define UpdateDimensionAsync(...)  SubmitAsync(&IoTClient::UpdateDimension, __VA_ARGS__)
#define UpdateDimensionCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateDimension, REQUEST)

#define UpdateDomainConfigurationAsync(...)  SubmitAsync(&IoTClient::UpdateDomainConfiguration, __VA_ARGS__)
#define UpdateDomainConfigurationCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateDomainConfiguration, REQUEST)

#define UpdateDynamicThingGroupAsync(...)  SubmitAsync(&IoTClient::UpdateDynamicThingGroup, __VA_ARGS__)
#define UpdateDynamicThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateDynamicThingGroup, REQUEST)

#define UpdateEventConfigurationsAsync(...)  SubmitAsync(&IoTClient::UpdateEventConfigurations, __VA_ARGS__)
#define UpdateEventConfigurationsCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateEventConfigurations, REQUEST)

#define UpdateFleetMetricAsync(...)  SubmitAsync(&IoTClient::UpdateFleetMetric, __VA_ARGS__)
#define UpdateFleetMetricCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateFleetMetric, REQUEST)

#define UpdateIndexingConfigurationAsync(...)  SubmitAsync(&IoTClient::UpdateIndexingConfiguration, __VA_ARGS__)
#define UpdateIndexingConfigurationCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateIndexingConfiguration, REQUEST)

#define UpdateJobAsync(...)  SubmitAsync(&IoTClient::UpdateJob, __VA_ARGS__)
#define UpdateJobCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateJob, REQUEST)

#define UpdateMitigationActionAsync(...)  SubmitAsync(&IoTClient::UpdateMitigationAction, __VA_ARGS__)
#define UpdateMitigationActionCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateMitigationAction, REQUEST)

#define UpdateProvisioningTemplateAsync(...)  SubmitAsync(&IoTClient::UpdateProvisioningTemplate, __VA_ARGS__)
#define UpdateProvisioningTemplateCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateProvisioningTemplate, REQUEST)

#define UpdateRoleAliasAsync(...)  SubmitAsync(&IoTClient::UpdateRoleAlias, __VA_ARGS__)
#define UpdateRoleAliasCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateRoleAlias, REQUEST)

#define UpdateScheduledAuditAsync(...)  SubmitAsync(&IoTClient::UpdateScheduledAudit, __VA_ARGS__)
#define UpdateScheduledAuditCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateScheduledAudit, REQUEST)

#define UpdateSecurityProfileAsync(...)  SubmitAsync(&IoTClient::UpdateSecurityProfile, __VA_ARGS__)
#define UpdateSecurityProfileCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateSecurityProfile, REQUEST)

#define UpdateStreamAsync(...)  SubmitAsync(&IoTClient::UpdateStream, __VA_ARGS__)
#define UpdateStreamCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateStream, REQUEST)

#define UpdateThingAsync(...)  SubmitAsync(&IoTClient::UpdateThing, __VA_ARGS__)
#define UpdateThingCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateThing, REQUEST)

#define UpdateThingGroupAsync(...)  SubmitAsync(&IoTClient::UpdateThingGroup, __VA_ARGS__)
#define UpdateThingGroupCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateThingGroup, REQUEST)

#define UpdateThingGroupsForThingAsync(...)  SubmitAsync(&IoTClient::UpdateThingGroupsForThing, __VA_ARGS__)
#define UpdateThingGroupsForThingCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateThingGroupsForThing, REQUEST)

#define UpdateTopicRuleDestinationAsync(...)  SubmitAsync(&IoTClient::UpdateTopicRuleDestination, __VA_ARGS__)
#define UpdateTopicRuleDestinationCallable(REQUEST)  SubmitCallable(&IoTClient::UpdateTopicRuleDestination, REQUEST)

#define ValidateSecurityProfileBehaviorsAsync(...)  SubmitAsync(&IoTClient::ValidateSecurityProfileBehaviors, __VA_ARGS__)
#define ValidateSecurityProfileBehaviorsCallable(REQUEST)  SubmitCallable(&IoTClient::ValidateSecurityProfileBehaviors, REQUEST)

