/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iot/IoTErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iot/IoTEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTClient header */
#include <aws/iot/model/AddThingToBillingGroupResult.h>
#include <aws/iot/model/AddThingToThingGroupResult.h>
#include <aws/iot/model/AssociateTargetsWithJobResult.h>
#include <aws/iot/model/AttachSecurityProfileResult.h>
#include <aws/iot/model/AttachThingPrincipalResult.h>
#include <aws/iot/model/CancelAuditMitigationActionsTaskResult.h>
#include <aws/iot/model/CancelAuditTaskResult.h>
#include <aws/iot/model/CancelDetectMitigationActionsTaskResult.h>
#include <aws/iot/model/CancelJobResult.h>
#include <aws/iot/model/ClearDefaultAuthorizerResult.h>
#include <aws/iot/model/ConfirmTopicRuleDestinationResult.h>
#include <aws/iot/model/CreateAuditSuppressionResult.h>
#include <aws/iot/model/CreateAuthorizerResult.h>
#include <aws/iot/model/CreateBillingGroupResult.h>
#include <aws/iot/model/CreateCertificateFromCsrResult.h>
#include <aws/iot/model/CreateCustomMetricResult.h>
#include <aws/iot/model/CreateDimensionResult.h>
#include <aws/iot/model/CreateDomainConfigurationResult.h>
#include <aws/iot/model/CreateDynamicThingGroupResult.h>
#include <aws/iot/model/CreateFleetMetricResult.h>
#include <aws/iot/model/CreateJobResult.h>
#include <aws/iot/model/CreateJobTemplateResult.h>
#include <aws/iot/model/CreateKeysAndCertificateResult.h>
#include <aws/iot/model/CreateMitigationActionResult.h>
#include <aws/iot/model/CreateOTAUpdateResult.h>
#include <aws/iot/model/CreatePolicyResult.h>
#include <aws/iot/model/CreatePolicyVersionResult.h>
#include <aws/iot/model/CreateProvisioningClaimResult.h>
#include <aws/iot/model/CreateProvisioningTemplateResult.h>
#include <aws/iot/model/CreateProvisioningTemplateVersionResult.h>
#include <aws/iot/model/CreateRoleAliasResult.h>
#include <aws/iot/model/CreateScheduledAuditResult.h>
#include <aws/iot/model/CreateSecurityProfileResult.h>
#include <aws/iot/model/CreateStreamResult.h>
#include <aws/iot/model/CreateThingResult.h>
#include <aws/iot/model/CreateThingGroupResult.h>
#include <aws/iot/model/CreateThingTypeResult.h>
#include <aws/iot/model/CreateTopicRuleDestinationResult.h>
#include <aws/iot/model/DeleteAccountAuditConfigurationResult.h>
#include <aws/iot/model/DeleteAuditSuppressionResult.h>
#include <aws/iot/model/DeleteAuthorizerResult.h>
#include <aws/iot/model/DeleteBillingGroupResult.h>
#include <aws/iot/model/DeleteCACertificateResult.h>
#include <aws/iot/model/DeleteCustomMetricResult.h>
#include <aws/iot/model/DeleteDimensionResult.h>
#include <aws/iot/model/DeleteDomainConfigurationResult.h>
#include <aws/iot/model/DeleteDynamicThingGroupResult.h>
#include <aws/iot/model/DeleteMitigationActionResult.h>
#include <aws/iot/model/DeleteOTAUpdateResult.h>
#include <aws/iot/model/DeleteProvisioningTemplateResult.h>
#include <aws/iot/model/DeleteProvisioningTemplateVersionResult.h>
#include <aws/iot/model/DeleteRegistrationCodeResult.h>
#include <aws/iot/model/DeleteRoleAliasResult.h>
#include <aws/iot/model/DeleteScheduledAuditResult.h>
#include <aws/iot/model/DeleteSecurityProfileResult.h>
#include <aws/iot/model/DeleteStreamResult.h>
#include <aws/iot/model/DeleteThingResult.h>
#include <aws/iot/model/DeleteThingGroupResult.h>
#include <aws/iot/model/DeleteThingTypeResult.h>
#include <aws/iot/model/DeleteTopicRuleDestinationResult.h>
#include <aws/iot/model/DeprecateThingTypeResult.h>
#include <aws/iot/model/DescribeAccountAuditConfigurationResult.h>
#include <aws/iot/model/DescribeAuditFindingResult.h>
#include <aws/iot/model/DescribeAuditMitigationActionsTaskResult.h>
#include <aws/iot/model/DescribeAuditSuppressionResult.h>
#include <aws/iot/model/DescribeAuditTaskResult.h>
#include <aws/iot/model/DescribeAuthorizerResult.h>
#include <aws/iot/model/DescribeBillingGroupResult.h>
#include <aws/iot/model/DescribeCACertificateResult.h>
#include <aws/iot/model/DescribeCertificateResult.h>
#include <aws/iot/model/DescribeCustomMetricResult.h>
#include <aws/iot/model/DescribeDefaultAuthorizerResult.h>
#include <aws/iot/model/DescribeDetectMitigationActionsTaskResult.h>
#include <aws/iot/model/DescribeDimensionResult.h>
#include <aws/iot/model/DescribeDomainConfigurationResult.h>
#include <aws/iot/model/DescribeEndpointResult.h>
#include <aws/iot/model/DescribeEventConfigurationsResult.h>
#include <aws/iot/model/DescribeFleetMetricResult.h>
#include <aws/iot/model/DescribeIndexResult.h>
#include <aws/iot/model/DescribeJobResult.h>
#include <aws/iot/model/DescribeJobExecutionResult.h>
#include <aws/iot/model/DescribeJobTemplateResult.h>
#include <aws/iot/model/DescribeManagedJobTemplateResult.h>
#include <aws/iot/model/DescribeMitigationActionResult.h>
#include <aws/iot/model/DescribeProvisioningTemplateResult.h>
#include <aws/iot/model/DescribeProvisioningTemplateVersionResult.h>
#include <aws/iot/model/DescribeRoleAliasResult.h>
#include <aws/iot/model/DescribeScheduledAuditResult.h>
#include <aws/iot/model/DescribeSecurityProfileResult.h>
#include <aws/iot/model/DescribeStreamResult.h>
#include <aws/iot/model/DescribeThingResult.h>
#include <aws/iot/model/DescribeThingGroupResult.h>
#include <aws/iot/model/DescribeThingRegistrationTaskResult.h>
#include <aws/iot/model/DescribeThingTypeResult.h>
#include <aws/iot/model/DetachSecurityProfileResult.h>
#include <aws/iot/model/DetachThingPrincipalResult.h>
#include <aws/iot/model/GetBehaviorModelTrainingSummariesResult.h>
#include <aws/iot/model/GetBucketsAggregationResult.h>
#include <aws/iot/model/GetCardinalityResult.h>
#include <aws/iot/model/GetEffectivePoliciesResult.h>
#include <aws/iot/model/GetIndexingConfigurationResult.h>
#include <aws/iot/model/GetJobDocumentResult.h>
#include <aws/iot/model/GetLoggingOptionsResult.h>
#include <aws/iot/model/GetOTAUpdateResult.h>
#include <aws/iot/model/GetPercentilesResult.h>
#include <aws/iot/model/GetPolicyResult.h>
#include <aws/iot/model/GetPolicyVersionResult.h>
#include <aws/iot/model/GetRegistrationCodeResult.h>
#include <aws/iot/model/GetStatisticsResult.h>
#include <aws/iot/model/GetTopicRuleResult.h>
#include <aws/iot/model/GetTopicRuleDestinationResult.h>
#include <aws/iot/model/GetV2LoggingOptionsResult.h>
#include <aws/iot/model/ListActiveViolationsResult.h>
#include <aws/iot/model/ListAttachedPoliciesResult.h>
#include <aws/iot/model/ListAuditFindingsResult.h>
#include <aws/iot/model/ListAuditMitigationActionsExecutionsResult.h>
#include <aws/iot/model/ListAuditMitigationActionsTasksResult.h>
#include <aws/iot/model/ListAuditSuppressionsResult.h>
#include <aws/iot/model/ListAuditTasksResult.h>
#include <aws/iot/model/ListAuthorizersResult.h>
#include <aws/iot/model/ListBillingGroupsResult.h>
#include <aws/iot/model/ListCACertificatesResult.h>
#include <aws/iot/model/ListCertificatesResult.h>
#include <aws/iot/model/ListCertificatesByCAResult.h>
#include <aws/iot/model/ListCustomMetricsResult.h>
#include <aws/iot/model/ListDetectMitigationActionsExecutionsResult.h>
#include <aws/iot/model/ListDetectMitigationActionsTasksResult.h>
#include <aws/iot/model/ListDimensionsResult.h>
#include <aws/iot/model/ListDomainConfigurationsResult.h>
#include <aws/iot/model/ListFleetMetricsResult.h>
#include <aws/iot/model/ListIndicesResult.h>
#include <aws/iot/model/ListJobExecutionsForJobResult.h>
#include <aws/iot/model/ListJobExecutionsForThingResult.h>
#include <aws/iot/model/ListJobTemplatesResult.h>
#include <aws/iot/model/ListJobsResult.h>
#include <aws/iot/model/ListManagedJobTemplatesResult.h>
#include <aws/iot/model/ListMetricValuesResult.h>
#include <aws/iot/model/ListMitigationActionsResult.h>
#include <aws/iot/model/ListOTAUpdatesResult.h>
#include <aws/iot/model/ListOutgoingCertificatesResult.h>
#include <aws/iot/model/ListPoliciesResult.h>
#include <aws/iot/model/ListPolicyVersionsResult.h>
#include <aws/iot/model/ListPrincipalThingsResult.h>
#include <aws/iot/model/ListProvisioningTemplateVersionsResult.h>
#include <aws/iot/model/ListProvisioningTemplatesResult.h>
#include <aws/iot/model/ListRelatedResourcesForAuditFindingResult.h>
#include <aws/iot/model/ListRoleAliasesResult.h>
#include <aws/iot/model/ListScheduledAuditsResult.h>
#include <aws/iot/model/ListSecurityProfilesResult.h>
#include <aws/iot/model/ListSecurityProfilesForTargetResult.h>
#include <aws/iot/model/ListStreamsResult.h>
#include <aws/iot/model/ListTagsForResourceResult.h>
#include <aws/iot/model/ListTargetsForPolicyResult.h>
#include <aws/iot/model/ListTargetsForSecurityProfileResult.h>
#include <aws/iot/model/ListThingGroupsResult.h>
#include <aws/iot/model/ListThingGroupsForThingResult.h>
#include <aws/iot/model/ListThingPrincipalsResult.h>
#include <aws/iot/model/ListThingRegistrationTaskReportsResult.h>
#include <aws/iot/model/ListThingRegistrationTasksResult.h>
#include <aws/iot/model/ListThingTypesResult.h>
#include <aws/iot/model/ListThingsResult.h>
#include <aws/iot/model/ListThingsInBillingGroupResult.h>
#include <aws/iot/model/ListThingsInThingGroupResult.h>
#include <aws/iot/model/ListTopicRuleDestinationsResult.h>
#include <aws/iot/model/ListTopicRulesResult.h>
#include <aws/iot/model/ListV2LoggingLevelsResult.h>
#include <aws/iot/model/ListViolationEventsResult.h>
#include <aws/iot/model/PutVerificationStateOnViolationResult.h>
#include <aws/iot/model/RegisterCACertificateResult.h>
#include <aws/iot/model/RegisterCertificateResult.h>
#include <aws/iot/model/RegisterCertificateWithoutCAResult.h>
#include <aws/iot/model/RegisterThingResult.h>
#include <aws/iot/model/RemoveThingFromBillingGroupResult.h>
#include <aws/iot/model/RemoveThingFromThingGroupResult.h>
#include <aws/iot/model/SearchIndexResult.h>
#include <aws/iot/model/SetDefaultAuthorizerResult.h>
#include <aws/iot/model/StartAuditMitigationActionsTaskResult.h>
#include <aws/iot/model/StartDetectMitigationActionsTaskResult.h>
#include <aws/iot/model/StartOnDemandAuditTaskResult.h>
#include <aws/iot/model/StartThingRegistrationTaskResult.h>
#include <aws/iot/model/StopThingRegistrationTaskResult.h>
#include <aws/iot/model/TagResourceResult.h>
#include <aws/iot/model/TestAuthorizationResult.h>
#include <aws/iot/model/TestInvokeAuthorizerResult.h>
#include <aws/iot/model/TransferCertificateResult.h>
#include <aws/iot/model/UntagResourceResult.h>
#include <aws/iot/model/UpdateAccountAuditConfigurationResult.h>
#include <aws/iot/model/UpdateAuditSuppressionResult.h>
#include <aws/iot/model/UpdateAuthorizerResult.h>
#include <aws/iot/model/UpdateBillingGroupResult.h>
#include <aws/iot/model/UpdateCustomMetricResult.h>
#include <aws/iot/model/UpdateDimensionResult.h>
#include <aws/iot/model/UpdateDomainConfigurationResult.h>
#include <aws/iot/model/UpdateDynamicThingGroupResult.h>
#include <aws/iot/model/UpdateEventConfigurationsResult.h>
#include <aws/iot/model/UpdateIndexingConfigurationResult.h>
#include <aws/iot/model/UpdateMitigationActionResult.h>
#include <aws/iot/model/UpdateProvisioningTemplateResult.h>
#include <aws/iot/model/UpdateRoleAliasResult.h>
#include <aws/iot/model/UpdateScheduledAuditResult.h>
#include <aws/iot/model/UpdateSecurityProfileResult.h>
#include <aws/iot/model/UpdateStreamResult.h>
#include <aws/iot/model/UpdateThingResult.h>
#include <aws/iot/model/UpdateThingGroupResult.h>
#include <aws/iot/model/UpdateThingGroupsForThingResult.h>
#include <aws/iot/model/UpdateTopicRuleDestinationResult.h>
#include <aws/iot/model/ValidateSecurityProfileBehaviorsResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in IoTClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace IoT
  {
    using IoTClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTEndpointProviderBase = Aws::IoT::Endpoint::IoTEndpointProviderBase;
    using IoTEndpointProvider = Aws::IoT::Endpoint::IoTEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTClient header */
      class AcceptCertificateTransferRequest;
      class AddThingToBillingGroupRequest;
      class AddThingToThingGroupRequest;
      class AssociateTargetsWithJobRequest;
      class AttachPolicyRequest;
      class AttachSecurityProfileRequest;
      class AttachThingPrincipalRequest;
      class CancelAuditMitigationActionsTaskRequest;
      class CancelAuditTaskRequest;
      class CancelCertificateTransferRequest;
      class CancelDetectMitigationActionsTaskRequest;
      class CancelJobRequest;
      class CancelJobExecutionRequest;
      class ClearDefaultAuthorizerRequest;
      class ConfirmTopicRuleDestinationRequest;
      class CreateAuditSuppressionRequest;
      class CreateAuthorizerRequest;
      class CreateBillingGroupRequest;
      class CreateCertificateFromCsrRequest;
      class CreateCustomMetricRequest;
      class CreateDimensionRequest;
      class CreateDomainConfigurationRequest;
      class CreateDynamicThingGroupRequest;
      class CreateFleetMetricRequest;
      class CreateJobRequest;
      class CreateJobTemplateRequest;
      class CreateKeysAndCertificateRequest;
      class CreateMitigationActionRequest;
      class CreateOTAUpdateRequest;
      class CreatePolicyRequest;
      class CreatePolicyVersionRequest;
      class CreateProvisioningClaimRequest;
      class CreateProvisioningTemplateRequest;
      class CreateProvisioningTemplateVersionRequest;
      class CreateRoleAliasRequest;
      class CreateScheduledAuditRequest;
      class CreateSecurityProfileRequest;
      class CreateStreamRequest;
      class CreateThingRequest;
      class CreateThingGroupRequest;
      class CreateThingTypeRequest;
      class CreateTopicRuleRequest;
      class CreateTopicRuleDestinationRequest;
      class DeleteAccountAuditConfigurationRequest;
      class DeleteAuditSuppressionRequest;
      class DeleteAuthorizerRequest;
      class DeleteBillingGroupRequest;
      class DeleteCACertificateRequest;
      class DeleteCertificateRequest;
      class DeleteCustomMetricRequest;
      class DeleteDimensionRequest;
      class DeleteDomainConfigurationRequest;
      class DeleteDynamicThingGroupRequest;
      class DeleteFleetMetricRequest;
      class DeleteJobRequest;
      class DeleteJobExecutionRequest;
      class DeleteJobTemplateRequest;
      class DeleteMitigationActionRequest;
      class DeleteOTAUpdateRequest;
      class DeletePolicyRequest;
      class DeletePolicyVersionRequest;
      class DeleteProvisioningTemplateRequest;
      class DeleteProvisioningTemplateVersionRequest;
      class DeleteRegistrationCodeRequest;
      class DeleteRoleAliasRequest;
      class DeleteScheduledAuditRequest;
      class DeleteSecurityProfileRequest;
      class DeleteStreamRequest;
      class DeleteThingRequest;
      class DeleteThingGroupRequest;
      class DeleteThingTypeRequest;
      class DeleteTopicRuleRequest;
      class DeleteTopicRuleDestinationRequest;
      class DeleteV2LoggingLevelRequest;
      class DeprecateThingTypeRequest;
      class DescribeAccountAuditConfigurationRequest;
      class DescribeAuditFindingRequest;
      class DescribeAuditMitigationActionsTaskRequest;
      class DescribeAuditSuppressionRequest;
      class DescribeAuditTaskRequest;
      class DescribeAuthorizerRequest;
      class DescribeBillingGroupRequest;
      class DescribeCACertificateRequest;
      class DescribeCertificateRequest;
      class DescribeCustomMetricRequest;
      class DescribeDefaultAuthorizerRequest;
      class DescribeDetectMitigationActionsTaskRequest;
      class DescribeDimensionRequest;
      class DescribeDomainConfigurationRequest;
      class DescribeEndpointRequest;
      class DescribeEventConfigurationsRequest;
      class DescribeFleetMetricRequest;
      class DescribeIndexRequest;
      class DescribeJobRequest;
      class DescribeJobExecutionRequest;
      class DescribeJobTemplateRequest;
      class DescribeManagedJobTemplateRequest;
      class DescribeMitigationActionRequest;
      class DescribeProvisioningTemplateRequest;
      class DescribeProvisioningTemplateVersionRequest;
      class DescribeRoleAliasRequest;
      class DescribeScheduledAuditRequest;
      class DescribeSecurityProfileRequest;
      class DescribeStreamRequest;
      class DescribeThingRequest;
      class DescribeThingGroupRequest;
      class DescribeThingRegistrationTaskRequest;
      class DescribeThingTypeRequest;
      class DetachPolicyRequest;
      class DetachSecurityProfileRequest;
      class DetachThingPrincipalRequest;
      class DisableTopicRuleRequest;
      class EnableTopicRuleRequest;
      class GetBehaviorModelTrainingSummariesRequest;
      class GetBucketsAggregationRequest;
      class GetCardinalityRequest;
      class GetEffectivePoliciesRequest;
      class GetIndexingConfigurationRequest;
      class GetJobDocumentRequest;
      class GetLoggingOptionsRequest;
      class GetOTAUpdateRequest;
      class GetPercentilesRequest;
      class GetPolicyRequest;
      class GetPolicyVersionRequest;
      class GetRegistrationCodeRequest;
      class GetStatisticsRequest;
      class GetTopicRuleRequest;
      class GetTopicRuleDestinationRequest;
      class GetV2LoggingOptionsRequest;
      class ListActiveViolationsRequest;
      class ListAttachedPoliciesRequest;
      class ListAuditFindingsRequest;
      class ListAuditMitigationActionsExecutionsRequest;
      class ListAuditMitigationActionsTasksRequest;
      class ListAuditSuppressionsRequest;
      class ListAuditTasksRequest;
      class ListAuthorizersRequest;
      class ListBillingGroupsRequest;
      class ListCACertificatesRequest;
      class ListCertificatesRequest;
      class ListCertificatesByCARequest;
      class ListCustomMetricsRequest;
      class ListDetectMitigationActionsExecutionsRequest;
      class ListDetectMitigationActionsTasksRequest;
      class ListDimensionsRequest;
      class ListDomainConfigurationsRequest;
      class ListFleetMetricsRequest;
      class ListIndicesRequest;
      class ListJobExecutionsForJobRequest;
      class ListJobExecutionsForThingRequest;
      class ListJobTemplatesRequest;
      class ListJobsRequest;
      class ListManagedJobTemplatesRequest;
      class ListMetricValuesRequest;
      class ListMitigationActionsRequest;
      class ListOTAUpdatesRequest;
      class ListOutgoingCertificatesRequest;
      class ListPoliciesRequest;
      class ListPolicyVersionsRequest;
      class ListPrincipalThingsRequest;
      class ListProvisioningTemplateVersionsRequest;
      class ListProvisioningTemplatesRequest;
      class ListRelatedResourcesForAuditFindingRequest;
      class ListRoleAliasesRequest;
      class ListScheduledAuditsRequest;
      class ListSecurityProfilesRequest;
      class ListSecurityProfilesForTargetRequest;
      class ListStreamsRequest;
      class ListTagsForResourceRequest;
      class ListTargetsForPolicyRequest;
      class ListTargetsForSecurityProfileRequest;
      class ListThingGroupsRequest;
      class ListThingGroupsForThingRequest;
      class ListThingPrincipalsRequest;
      class ListThingRegistrationTaskReportsRequest;
      class ListThingRegistrationTasksRequest;
      class ListThingTypesRequest;
      class ListThingsRequest;
      class ListThingsInBillingGroupRequest;
      class ListThingsInThingGroupRequest;
      class ListTopicRuleDestinationsRequest;
      class ListTopicRulesRequest;
      class ListV2LoggingLevelsRequest;
      class ListViolationEventsRequest;
      class PutVerificationStateOnViolationRequest;
      class RegisterCACertificateRequest;
      class RegisterCertificateRequest;
      class RegisterCertificateWithoutCARequest;
      class RegisterThingRequest;
      class RejectCertificateTransferRequest;
      class RemoveThingFromBillingGroupRequest;
      class RemoveThingFromThingGroupRequest;
      class ReplaceTopicRuleRequest;
      class SearchIndexRequest;
      class SetDefaultAuthorizerRequest;
      class SetDefaultPolicyVersionRequest;
      class SetLoggingOptionsRequest;
      class SetV2LoggingLevelRequest;
      class SetV2LoggingOptionsRequest;
      class StartAuditMitigationActionsTaskRequest;
      class StartDetectMitigationActionsTaskRequest;
      class StartOnDemandAuditTaskRequest;
      class StartThingRegistrationTaskRequest;
      class StopThingRegistrationTaskRequest;
      class TagResourceRequest;
      class TestAuthorizationRequest;
      class TestInvokeAuthorizerRequest;
      class TransferCertificateRequest;
      class UntagResourceRequest;
      class UpdateAccountAuditConfigurationRequest;
      class UpdateAuditSuppressionRequest;
      class UpdateAuthorizerRequest;
      class UpdateBillingGroupRequest;
      class UpdateCACertificateRequest;
      class UpdateCertificateRequest;
      class UpdateCustomMetricRequest;
      class UpdateDimensionRequest;
      class UpdateDomainConfigurationRequest;
      class UpdateDynamicThingGroupRequest;
      class UpdateEventConfigurationsRequest;
      class UpdateFleetMetricRequest;
      class UpdateIndexingConfigurationRequest;
      class UpdateJobRequest;
      class UpdateMitigationActionRequest;
      class UpdateProvisioningTemplateRequest;
      class UpdateRoleAliasRequest;
      class UpdateScheduledAuditRequest;
      class UpdateSecurityProfileRequest;
      class UpdateStreamRequest;
      class UpdateThingRequest;
      class UpdateThingGroupRequest;
      class UpdateThingGroupsForThingRequest;
      class UpdateTopicRuleDestinationRequest;
      class ValidateSecurityProfileBehaviorsRequest;
      /* End of service model forward declarations required in IoTClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> AcceptCertificateTransferOutcome;
      typedef Aws::Utils::Outcome<AddThingToBillingGroupResult, IoTError> AddThingToBillingGroupOutcome;
      typedef Aws::Utils::Outcome<AddThingToThingGroupResult, IoTError> AddThingToThingGroupOutcome;
      typedef Aws::Utils::Outcome<AssociateTargetsWithJobResult, IoTError> AssociateTargetsWithJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> AttachPolicyOutcome;
      typedef Aws::Utils::Outcome<AttachSecurityProfileResult, IoTError> AttachSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<AttachThingPrincipalResult, IoTError> AttachThingPrincipalOutcome;
      typedef Aws::Utils::Outcome<CancelAuditMitigationActionsTaskResult, IoTError> CancelAuditMitigationActionsTaskOutcome;
      typedef Aws::Utils::Outcome<CancelAuditTaskResult, IoTError> CancelAuditTaskOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> CancelCertificateTransferOutcome;
      typedef Aws::Utils::Outcome<CancelDetectMitigationActionsTaskResult, IoTError> CancelDetectMitigationActionsTaskOutcome;
      typedef Aws::Utils::Outcome<CancelJobResult, IoTError> CancelJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> CancelJobExecutionOutcome;
      typedef Aws::Utils::Outcome<ClearDefaultAuthorizerResult, IoTError> ClearDefaultAuthorizerOutcome;
      typedef Aws::Utils::Outcome<ConfirmTopicRuleDestinationResult, IoTError> ConfirmTopicRuleDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateAuditSuppressionResult, IoTError> CreateAuditSuppressionOutcome;
      typedef Aws::Utils::Outcome<CreateAuthorizerResult, IoTError> CreateAuthorizerOutcome;
      typedef Aws::Utils::Outcome<CreateBillingGroupResult, IoTError> CreateBillingGroupOutcome;
      typedef Aws::Utils::Outcome<CreateCertificateFromCsrResult, IoTError> CreateCertificateFromCsrOutcome;
      typedef Aws::Utils::Outcome<CreateCustomMetricResult, IoTError> CreateCustomMetricOutcome;
      typedef Aws::Utils::Outcome<CreateDimensionResult, IoTError> CreateDimensionOutcome;
      typedef Aws::Utils::Outcome<CreateDomainConfigurationResult, IoTError> CreateDomainConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateDynamicThingGroupResult, IoTError> CreateDynamicThingGroupOutcome;
      typedef Aws::Utils::Outcome<CreateFleetMetricResult, IoTError> CreateFleetMetricOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, IoTError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<CreateJobTemplateResult, IoTError> CreateJobTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateKeysAndCertificateResult, IoTError> CreateKeysAndCertificateOutcome;
      typedef Aws::Utils::Outcome<CreateMitigationActionResult, IoTError> CreateMitigationActionOutcome;
      typedef Aws::Utils::Outcome<CreateOTAUpdateResult, IoTError> CreateOTAUpdateOutcome;
      typedef Aws::Utils::Outcome<CreatePolicyResult, IoTError> CreatePolicyOutcome;
      typedef Aws::Utils::Outcome<CreatePolicyVersionResult, IoTError> CreatePolicyVersionOutcome;
      typedef Aws::Utils::Outcome<CreateProvisioningClaimResult, IoTError> CreateProvisioningClaimOutcome;
      typedef Aws::Utils::Outcome<CreateProvisioningTemplateResult, IoTError> CreateProvisioningTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateProvisioningTemplateVersionResult, IoTError> CreateProvisioningTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<CreateRoleAliasResult, IoTError> CreateRoleAliasOutcome;
      typedef Aws::Utils::Outcome<CreateScheduledAuditResult, IoTError> CreateScheduledAuditOutcome;
      typedef Aws::Utils::Outcome<CreateSecurityProfileResult, IoTError> CreateSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<CreateStreamResult, IoTError> CreateStreamOutcome;
      typedef Aws::Utils::Outcome<CreateThingResult, IoTError> CreateThingOutcome;
      typedef Aws::Utils::Outcome<CreateThingGroupResult, IoTError> CreateThingGroupOutcome;
      typedef Aws::Utils::Outcome<CreateThingTypeResult, IoTError> CreateThingTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> CreateTopicRuleOutcome;
      typedef Aws::Utils::Outcome<CreateTopicRuleDestinationResult, IoTError> CreateTopicRuleDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteAccountAuditConfigurationResult, IoTError> DeleteAccountAuditConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteAuditSuppressionResult, IoTError> DeleteAuditSuppressionOutcome;
      typedef Aws::Utils::Outcome<DeleteAuthorizerResult, IoTError> DeleteAuthorizerOutcome;
      typedef Aws::Utils::Outcome<DeleteBillingGroupResult, IoTError> DeleteBillingGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteCACertificateResult, IoTError> DeleteCACertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeleteCertificateOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomMetricResult, IoTError> DeleteCustomMetricOutcome;
      typedef Aws::Utils::Outcome<DeleteDimensionResult, IoTError> DeleteDimensionOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainConfigurationResult, IoTError> DeleteDomainConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteDynamicThingGroupResult, IoTError> DeleteDynamicThingGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeleteFleetMetricOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeleteJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeleteJobExecutionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeleteJobTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteMitigationActionResult, IoTError> DeleteMitigationActionOutcome;
      typedef Aws::Utils::Outcome<DeleteOTAUpdateResult, IoTError> DeleteOTAUpdateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeletePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeletePolicyVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteProvisioningTemplateResult, IoTError> DeleteProvisioningTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteProvisioningTemplateVersionResult, IoTError> DeleteProvisioningTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteRegistrationCodeResult, IoTError> DeleteRegistrationCodeOutcome;
      typedef Aws::Utils::Outcome<DeleteRoleAliasResult, IoTError> DeleteRoleAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteScheduledAuditResult, IoTError> DeleteScheduledAuditOutcome;
      typedef Aws::Utils::Outcome<DeleteSecurityProfileResult, IoTError> DeleteSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteStreamResult, IoTError> DeleteStreamOutcome;
      typedef Aws::Utils::Outcome<DeleteThingResult, IoTError> DeleteThingOutcome;
      typedef Aws::Utils::Outcome<DeleteThingGroupResult, IoTError> DeleteThingGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteThingTypeResult, IoTError> DeleteThingTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeleteTopicRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteTopicRuleDestinationResult, IoTError> DeleteTopicRuleDestinationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeleteV2LoggingLevelOutcome;
      typedef Aws::Utils::Outcome<DeprecateThingTypeResult, IoTError> DeprecateThingTypeOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAuditConfigurationResult, IoTError> DescribeAccountAuditConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeAuditFindingResult, IoTError> DescribeAuditFindingOutcome;
      typedef Aws::Utils::Outcome<DescribeAuditMitigationActionsTaskResult, IoTError> DescribeAuditMitigationActionsTaskOutcome;
      typedef Aws::Utils::Outcome<DescribeAuditSuppressionResult, IoTError> DescribeAuditSuppressionOutcome;
      typedef Aws::Utils::Outcome<DescribeAuditTaskResult, IoTError> DescribeAuditTaskOutcome;
      typedef Aws::Utils::Outcome<DescribeAuthorizerResult, IoTError> DescribeAuthorizerOutcome;
      typedef Aws::Utils::Outcome<DescribeBillingGroupResult, IoTError> DescribeBillingGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeCACertificateResult, IoTError> DescribeCACertificateOutcome;
      typedef Aws::Utils::Outcome<DescribeCertificateResult, IoTError> DescribeCertificateOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomMetricResult, IoTError> DescribeCustomMetricOutcome;
      typedef Aws::Utils::Outcome<DescribeDefaultAuthorizerResult, IoTError> DescribeDefaultAuthorizerOutcome;
      typedef Aws::Utils::Outcome<DescribeDetectMitigationActionsTaskResult, IoTError> DescribeDetectMitigationActionsTaskOutcome;
      typedef Aws::Utils::Outcome<DescribeDimensionResult, IoTError> DescribeDimensionOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainConfigurationResult, IoTError> DescribeDomainConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointResult, IoTError> DescribeEndpointOutcome;
      typedef Aws::Utils::Outcome<DescribeEventConfigurationsResult, IoTError> DescribeEventConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetMetricResult, IoTError> DescribeFleetMetricOutcome;
      typedef Aws::Utils::Outcome<DescribeIndexResult, IoTError> DescribeIndexOutcome;
      typedef Aws::Utils::Outcome<DescribeJobResult, IoTError> DescribeJobOutcome;
      typedef Aws::Utils::Outcome<DescribeJobExecutionResult, IoTError> DescribeJobExecutionOutcome;
      typedef Aws::Utils::Outcome<DescribeJobTemplateResult, IoTError> DescribeJobTemplateOutcome;
      typedef Aws::Utils::Outcome<DescribeManagedJobTemplateResult, IoTError> DescribeManagedJobTemplateOutcome;
      typedef Aws::Utils::Outcome<DescribeMitigationActionResult, IoTError> DescribeMitigationActionOutcome;
      typedef Aws::Utils::Outcome<DescribeProvisioningTemplateResult, IoTError> DescribeProvisioningTemplateOutcome;
      typedef Aws::Utils::Outcome<DescribeProvisioningTemplateVersionResult, IoTError> DescribeProvisioningTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<DescribeRoleAliasResult, IoTError> DescribeRoleAliasOutcome;
      typedef Aws::Utils::Outcome<DescribeScheduledAuditResult, IoTError> DescribeScheduledAuditOutcome;
      typedef Aws::Utils::Outcome<DescribeSecurityProfileResult, IoTError> DescribeSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeStreamResult, IoTError> DescribeStreamOutcome;
      typedef Aws::Utils::Outcome<DescribeThingResult, IoTError> DescribeThingOutcome;
      typedef Aws::Utils::Outcome<DescribeThingGroupResult, IoTError> DescribeThingGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeThingRegistrationTaskResult, IoTError> DescribeThingRegistrationTaskOutcome;
      typedef Aws::Utils::Outcome<DescribeThingTypeResult, IoTError> DescribeThingTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DetachPolicyOutcome;
      typedef Aws::Utils::Outcome<DetachSecurityProfileResult, IoTError> DetachSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<DetachThingPrincipalResult, IoTError> DetachThingPrincipalOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DisableTopicRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> EnableTopicRuleOutcome;
      typedef Aws::Utils::Outcome<GetBehaviorModelTrainingSummariesResult, IoTError> GetBehaviorModelTrainingSummariesOutcome;
      typedef Aws::Utils::Outcome<GetBucketsAggregationResult, IoTError> GetBucketsAggregationOutcome;
      typedef Aws::Utils::Outcome<GetCardinalityResult, IoTError> GetCardinalityOutcome;
      typedef Aws::Utils::Outcome<GetEffectivePoliciesResult, IoTError> GetEffectivePoliciesOutcome;
      typedef Aws::Utils::Outcome<GetIndexingConfigurationResult, IoTError> GetIndexingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetJobDocumentResult, IoTError> GetJobDocumentOutcome;
      typedef Aws::Utils::Outcome<GetLoggingOptionsResult, IoTError> GetLoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<GetOTAUpdateResult, IoTError> GetOTAUpdateOutcome;
      typedef Aws::Utils::Outcome<GetPercentilesResult, IoTError> GetPercentilesOutcome;
      typedef Aws::Utils::Outcome<GetPolicyResult, IoTError> GetPolicyOutcome;
      typedef Aws::Utils::Outcome<GetPolicyVersionResult, IoTError> GetPolicyVersionOutcome;
      typedef Aws::Utils::Outcome<GetRegistrationCodeResult, IoTError> GetRegistrationCodeOutcome;
      typedef Aws::Utils::Outcome<GetStatisticsResult, IoTError> GetStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetTopicRuleResult, IoTError> GetTopicRuleOutcome;
      typedef Aws::Utils::Outcome<GetTopicRuleDestinationResult, IoTError> GetTopicRuleDestinationOutcome;
      typedef Aws::Utils::Outcome<GetV2LoggingOptionsResult, IoTError> GetV2LoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<ListActiveViolationsResult, IoTError> ListActiveViolationsOutcome;
      typedef Aws::Utils::Outcome<ListAttachedPoliciesResult, IoTError> ListAttachedPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListAuditFindingsResult, IoTError> ListAuditFindingsOutcome;
      typedef Aws::Utils::Outcome<ListAuditMitigationActionsExecutionsResult, IoTError> ListAuditMitigationActionsExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListAuditMitigationActionsTasksResult, IoTError> ListAuditMitigationActionsTasksOutcome;
      typedef Aws::Utils::Outcome<ListAuditSuppressionsResult, IoTError> ListAuditSuppressionsOutcome;
      typedef Aws::Utils::Outcome<ListAuditTasksResult, IoTError> ListAuditTasksOutcome;
      typedef Aws::Utils::Outcome<ListAuthorizersResult, IoTError> ListAuthorizersOutcome;
      typedef Aws::Utils::Outcome<ListBillingGroupsResult, IoTError> ListBillingGroupsOutcome;
      typedef Aws::Utils::Outcome<ListCACertificatesResult, IoTError> ListCACertificatesOutcome;
      typedef Aws::Utils::Outcome<ListCertificatesResult, IoTError> ListCertificatesOutcome;
      typedef Aws::Utils::Outcome<ListCertificatesByCAResult, IoTError> ListCertificatesByCAOutcome;
      typedef Aws::Utils::Outcome<ListCustomMetricsResult, IoTError> ListCustomMetricsOutcome;
      typedef Aws::Utils::Outcome<ListDetectMitigationActionsExecutionsResult, IoTError> ListDetectMitigationActionsExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListDetectMitigationActionsTasksResult, IoTError> ListDetectMitigationActionsTasksOutcome;
      typedef Aws::Utils::Outcome<ListDimensionsResult, IoTError> ListDimensionsOutcome;
      typedef Aws::Utils::Outcome<ListDomainConfigurationsResult, IoTError> ListDomainConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListFleetMetricsResult, IoTError> ListFleetMetricsOutcome;
      typedef Aws::Utils::Outcome<ListIndicesResult, IoTError> ListIndicesOutcome;
      typedef Aws::Utils::Outcome<ListJobExecutionsForJobResult, IoTError> ListJobExecutionsForJobOutcome;
      typedef Aws::Utils::Outcome<ListJobExecutionsForThingResult, IoTError> ListJobExecutionsForThingOutcome;
      typedef Aws::Utils::Outcome<ListJobTemplatesResult, IoTError> ListJobTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, IoTError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListManagedJobTemplatesResult, IoTError> ListManagedJobTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListMetricValuesResult, IoTError> ListMetricValuesOutcome;
      typedef Aws::Utils::Outcome<ListMitigationActionsResult, IoTError> ListMitigationActionsOutcome;
      typedef Aws::Utils::Outcome<ListOTAUpdatesResult, IoTError> ListOTAUpdatesOutcome;
      typedef Aws::Utils::Outcome<ListOutgoingCertificatesResult, IoTError> ListOutgoingCertificatesOutcome;
      typedef Aws::Utils::Outcome<ListPoliciesResult, IoTError> ListPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListPolicyVersionsResult, IoTError> ListPolicyVersionsOutcome;
      typedef Aws::Utils::Outcome<ListPrincipalThingsResult, IoTError> ListPrincipalThingsOutcome;
      typedef Aws::Utils::Outcome<ListProvisioningTemplateVersionsResult, IoTError> ListProvisioningTemplateVersionsOutcome;
      typedef Aws::Utils::Outcome<ListProvisioningTemplatesResult, IoTError> ListProvisioningTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListRelatedResourcesForAuditFindingResult, IoTError> ListRelatedResourcesForAuditFindingOutcome;
      typedef Aws::Utils::Outcome<ListRoleAliasesResult, IoTError> ListRoleAliasesOutcome;
      typedef Aws::Utils::Outcome<ListScheduledAuditsResult, IoTError> ListScheduledAuditsOutcome;
      typedef Aws::Utils::Outcome<ListSecurityProfilesResult, IoTError> ListSecurityProfilesOutcome;
      typedef Aws::Utils::Outcome<ListSecurityProfilesForTargetResult, IoTError> ListSecurityProfilesForTargetOutcome;
      typedef Aws::Utils::Outcome<ListStreamsResult, IoTError> ListStreamsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTargetsForPolicyResult, IoTError> ListTargetsForPolicyOutcome;
      typedef Aws::Utils::Outcome<ListTargetsForSecurityProfileResult, IoTError> ListTargetsForSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<ListThingGroupsResult, IoTError> ListThingGroupsOutcome;
      typedef Aws::Utils::Outcome<ListThingGroupsForThingResult, IoTError> ListThingGroupsForThingOutcome;
      typedef Aws::Utils::Outcome<ListThingPrincipalsResult, IoTError> ListThingPrincipalsOutcome;
      typedef Aws::Utils::Outcome<ListThingRegistrationTaskReportsResult, IoTError> ListThingRegistrationTaskReportsOutcome;
      typedef Aws::Utils::Outcome<ListThingRegistrationTasksResult, IoTError> ListThingRegistrationTasksOutcome;
      typedef Aws::Utils::Outcome<ListThingTypesResult, IoTError> ListThingTypesOutcome;
      typedef Aws::Utils::Outcome<ListThingsResult, IoTError> ListThingsOutcome;
      typedef Aws::Utils::Outcome<ListThingsInBillingGroupResult, IoTError> ListThingsInBillingGroupOutcome;
      typedef Aws::Utils::Outcome<ListThingsInThingGroupResult, IoTError> ListThingsInThingGroupOutcome;
      typedef Aws::Utils::Outcome<ListTopicRuleDestinationsResult, IoTError> ListTopicRuleDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListTopicRulesResult, IoTError> ListTopicRulesOutcome;
      typedef Aws::Utils::Outcome<ListV2LoggingLevelsResult, IoTError> ListV2LoggingLevelsOutcome;
      typedef Aws::Utils::Outcome<ListViolationEventsResult, IoTError> ListViolationEventsOutcome;
      typedef Aws::Utils::Outcome<PutVerificationStateOnViolationResult, IoTError> PutVerificationStateOnViolationOutcome;
      typedef Aws::Utils::Outcome<RegisterCACertificateResult, IoTError> RegisterCACertificateOutcome;
      typedef Aws::Utils::Outcome<RegisterCertificateResult, IoTError> RegisterCertificateOutcome;
      typedef Aws::Utils::Outcome<RegisterCertificateWithoutCAResult, IoTError> RegisterCertificateWithoutCAOutcome;
      typedef Aws::Utils::Outcome<RegisterThingResult, IoTError> RegisterThingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> RejectCertificateTransferOutcome;
      typedef Aws::Utils::Outcome<RemoveThingFromBillingGroupResult, IoTError> RemoveThingFromBillingGroupOutcome;
      typedef Aws::Utils::Outcome<RemoveThingFromThingGroupResult, IoTError> RemoveThingFromThingGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> ReplaceTopicRuleOutcome;
      typedef Aws::Utils::Outcome<SearchIndexResult, IoTError> SearchIndexOutcome;
      typedef Aws::Utils::Outcome<SetDefaultAuthorizerResult, IoTError> SetDefaultAuthorizerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> SetDefaultPolicyVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> SetLoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> SetV2LoggingLevelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> SetV2LoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<StartAuditMitigationActionsTaskResult, IoTError> StartAuditMitigationActionsTaskOutcome;
      typedef Aws::Utils::Outcome<StartDetectMitigationActionsTaskResult, IoTError> StartDetectMitigationActionsTaskOutcome;
      typedef Aws::Utils::Outcome<StartOnDemandAuditTaskResult, IoTError> StartOnDemandAuditTaskOutcome;
      typedef Aws::Utils::Outcome<StartThingRegistrationTaskResult, IoTError> StartThingRegistrationTaskOutcome;
      typedef Aws::Utils::Outcome<StopThingRegistrationTaskResult, IoTError> StopThingRegistrationTaskOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoTError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestAuthorizationResult, IoTError> TestAuthorizationOutcome;
      typedef Aws::Utils::Outcome<TestInvokeAuthorizerResult, IoTError> TestInvokeAuthorizerOutcome;
      typedef Aws::Utils::Outcome<TransferCertificateResult, IoTError> TransferCertificateOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoTError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountAuditConfigurationResult, IoTError> UpdateAccountAuditConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateAuditSuppressionResult, IoTError> UpdateAuditSuppressionOutcome;
      typedef Aws::Utils::Outcome<UpdateAuthorizerResult, IoTError> UpdateAuthorizerOutcome;
      typedef Aws::Utils::Outcome<UpdateBillingGroupResult, IoTError> UpdateBillingGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> UpdateCACertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> UpdateCertificateOutcome;
      typedef Aws::Utils::Outcome<UpdateCustomMetricResult, IoTError> UpdateCustomMetricOutcome;
      typedef Aws::Utils::Outcome<UpdateDimensionResult, IoTError> UpdateDimensionOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainConfigurationResult, IoTError> UpdateDomainConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateDynamicThingGroupResult, IoTError> UpdateDynamicThingGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateEventConfigurationsResult, IoTError> UpdateEventConfigurationsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> UpdateFleetMetricOutcome;
      typedef Aws::Utils::Outcome<UpdateIndexingConfigurationResult, IoTError> UpdateIndexingConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> UpdateJobOutcome;
      typedef Aws::Utils::Outcome<UpdateMitigationActionResult, IoTError> UpdateMitigationActionOutcome;
      typedef Aws::Utils::Outcome<UpdateProvisioningTemplateResult, IoTError> UpdateProvisioningTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateRoleAliasResult, IoTError> UpdateRoleAliasOutcome;
      typedef Aws::Utils::Outcome<UpdateScheduledAuditResult, IoTError> UpdateScheduledAuditOutcome;
      typedef Aws::Utils::Outcome<UpdateSecurityProfileResult, IoTError> UpdateSecurityProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateStreamResult, IoTError> UpdateStreamOutcome;
      typedef Aws::Utils::Outcome<UpdateThingResult, IoTError> UpdateThingOutcome;
      typedef Aws::Utils::Outcome<UpdateThingGroupResult, IoTError> UpdateThingGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateThingGroupsForThingResult, IoTError> UpdateThingGroupsForThingOutcome;
      typedef Aws::Utils::Outcome<UpdateTopicRuleDestinationResult, IoTError> UpdateTopicRuleDestinationOutcome;
      typedef Aws::Utils::Outcome<ValidateSecurityProfileBehaviorsResult, IoTError> ValidateSecurityProfileBehaviorsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptCertificateTransferOutcome> AcceptCertificateTransferOutcomeCallable;
      typedef std::future<AddThingToBillingGroupOutcome> AddThingToBillingGroupOutcomeCallable;
      typedef std::future<AddThingToThingGroupOutcome> AddThingToThingGroupOutcomeCallable;
      typedef std::future<AssociateTargetsWithJobOutcome> AssociateTargetsWithJobOutcomeCallable;
      typedef std::future<AttachPolicyOutcome> AttachPolicyOutcomeCallable;
      typedef std::future<AttachSecurityProfileOutcome> AttachSecurityProfileOutcomeCallable;
      typedef std::future<AttachThingPrincipalOutcome> AttachThingPrincipalOutcomeCallable;
      typedef std::future<CancelAuditMitigationActionsTaskOutcome> CancelAuditMitigationActionsTaskOutcomeCallable;
      typedef std::future<CancelAuditTaskOutcome> CancelAuditTaskOutcomeCallable;
      typedef std::future<CancelCertificateTransferOutcome> CancelCertificateTransferOutcomeCallable;
      typedef std::future<CancelDetectMitigationActionsTaskOutcome> CancelDetectMitigationActionsTaskOutcomeCallable;
      typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
      typedef std::future<CancelJobExecutionOutcome> CancelJobExecutionOutcomeCallable;
      typedef std::future<ClearDefaultAuthorizerOutcome> ClearDefaultAuthorizerOutcomeCallable;
      typedef std::future<ConfirmTopicRuleDestinationOutcome> ConfirmTopicRuleDestinationOutcomeCallable;
      typedef std::future<CreateAuditSuppressionOutcome> CreateAuditSuppressionOutcomeCallable;
      typedef std::future<CreateAuthorizerOutcome> CreateAuthorizerOutcomeCallable;
      typedef std::future<CreateBillingGroupOutcome> CreateBillingGroupOutcomeCallable;
      typedef std::future<CreateCertificateFromCsrOutcome> CreateCertificateFromCsrOutcomeCallable;
      typedef std::future<CreateCustomMetricOutcome> CreateCustomMetricOutcomeCallable;
      typedef std::future<CreateDimensionOutcome> CreateDimensionOutcomeCallable;
      typedef std::future<CreateDomainConfigurationOutcome> CreateDomainConfigurationOutcomeCallable;
      typedef std::future<CreateDynamicThingGroupOutcome> CreateDynamicThingGroupOutcomeCallable;
      typedef std::future<CreateFleetMetricOutcome> CreateFleetMetricOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<CreateJobTemplateOutcome> CreateJobTemplateOutcomeCallable;
      typedef std::future<CreateKeysAndCertificateOutcome> CreateKeysAndCertificateOutcomeCallable;
      typedef std::future<CreateMitigationActionOutcome> CreateMitigationActionOutcomeCallable;
      typedef std::future<CreateOTAUpdateOutcome> CreateOTAUpdateOutcomeCallable;
      typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
      typedef std::future<CreatePolicyVersionOutcome> CreatePolicyVersionOutcomeCallable;
      typedef std::future<CreateProvisioningClaimOutcome> CreateProvisioningClaimOutcomeCallable;
      typedef std::future<CreateProvisioningTemplateOutcome> CreateProvisioningTemplateOutcomeCallable;
      typedef std::future<CreateProvisioningTemplateVersionOutcome> CreateProvisioningTemplateVersionOutcomeCallable;
      typedef std::future<CreateRoleAliasOutcome> CreateRoleAliasOutcomeCallable;
      typedef std::future<CreateScheduledAuditOutcome> CreateScheduledAuditOutcomeCallable;
      typedef std::future<CreateSecurityProfileOutcome> CreateSecurityProfileOutcomeCallable;
      typedef std::future<CreateStreamOutcome> CreateStreamOutcomeCallable;
      typedef std::future<CreateThingOutcome> CreateThingOutcomeCallable;
      typedef std::future<CreateThingGroupOutcome> CreateThingGroupOutcomeCallable;
      typedef std::future<CreateThingTypeOutcome> CreateThingTypeOutcomeCallable;
      typedef std::future<CreateTopicRuleOutcome> CreateTopicRuleOutcomeCallable;
      typedef std::future<CreateTopicRuleDestinationOutcome> CreateTopicRuleDestinationOutcomeCallable;
      typedef std::future<DeleteAccountAuditConfigurationOutcome> DeleteAccountAuditConfigurationOutcomeCallable;
      typedef std::future<DeleteAuditSuppressionOutcome> DeleteAuditSuppressionOutcomeCallable;
      typedef std::future<DeleteAuthorizerOutcome> DeleteAuthorizerOutcomeCallable;
      typedef std::future<DeleteBillingGroupOutcome> DeleteBillingGroupOutcomeCallable;
      typedef std::future<DeleteCACertificateOutcome> DeleteCACertificateOutcomeCallable;
      typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
      typedef std::future<DeleteCustomMetricOutcome> DeleteCustomMetricOutcomeCallable;
      typedef std::future<DeleteDimensionOutcome> DeleteDimensionOutcomeCallable;
      typedef std::future<DeleteDomainConfigurationOutcome> DeleteDomainConfigurationOutcomeCallable;
      typedef std::future<DeleteDynamicThingGroupOutcome> DeleteDynamicThingGroupOutcomeCallable;
      typedef std::future<DeleteFleetMetricOutcome> DeleteFleetMetricOutcomeCallable;
      typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
      typedef std::future<DeleteJobExecutionOutcome> DeleteJobExecutionOutcomeCallable;
      typedef std::future<DeleteJobTemplateOutcome> DeleteJobTemplateOutcomeCallable;
      typedef std::future<DeleteMitigationActionOutcome> DeleteMitigationActionOutcomeCallable;
      typedef std::future<DeleteOTAUpdateOutcome> DeleteOTAUpdateOutcomeCallable;
      typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
      typedef std::future<DeletePolicyVersionOutcome> DeletePolicyVersionOutcomeCallable;
      typedef std::future<DeleteProvisioningTemplateOutcome> DeleteProvisioningTemplateOutcomeCallable;
      typedef std::future<DeleteProvisioningTemplateVersionOutcome> DeleteProvisioningTemplateVersionOutcomeCallable;
      typedef std::future<DeleteRegistrationCodeOutcome> DeleteRegistrationCodeOutcomeCallable;
      typedef std::future<DeleteRoleAliasOutcome> DeleteRoleAliasOutcomeCallable;
      typedef std::future<DeleteScheduledAuditOutcome> DeleteScheduledAuditOutcomeCallable;
      typedef std::future<DeleteSecurityProfileOutcome> DeleteSecurityProfileOutcomeCallable;
      typedef std::future<DeleteStreamOutcome> DeleteStreamOutcomeCallable;
      typedef std::future<DeleteThingOutcome> DeleteThingOutcomeCallable;
      typedef std::future<DeleteThingGroupOutcome> DeleteThingGroupOutcomeCallable;
      typedef std::future<DeleteThingTypeOutcome> DeleteThingTypeOutcomeCallable;
      typedef std::future<DeleteTopicRuleOutcome> DeleteTopicRuleOutcomeCallable;
      typedef std::future<DeleteTopicRuleDestinationOutcome> DeleteTopicRuleDestinationOutcomeCallable;
      typedef std::future<DeleteV2LoggingLevelOutcome> DeleteV2LoggingLevelOutcomeCallable;
      typedef std::future<DeprecateThingTypeOutcome> DeprecateThingTypeOutcomeCallable;
      typedef std::future<DescribeAccountAuditConfigurationOutcome> DescribeAccountAuditConfigurationOutcomeCallable;
      typedef std::future<DescribeAuditFindingOutcome> DescribeAuditFindingOutcomeCallable;
      typedef std::future<DescribeAuditMitigationActionsTaskOutcome> DescribeAuditMitigationActionsTaskOutcomeCallable;
      typedef std::future<DescribeAuditSuppressionOutcome> DescribeAuditSuppressionOutcomeCallable;
      typedef std::future<DescribeAuditTaskOutcome> DescribeAuditTaskOutcomeCallable;
      typedef std::future<DescribeAuthorizerOutcome> DescribeAuthorizerOutcomeCallable;
      typedef std::future<DescribeBillingGroupOutcome> DescribeBillingGroupOutcomeCallable;
      typedef std::future<DescribeCACertificateOutcome> DescribeCACertificateOutcomeCallable;
      typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
      typedef std::future<DescribeCustomMetricOutcome> DescribeCustomMetricOutcomeCallable;
      typedef std::future<DescribeDefaultAuthorizerOutcome> DescribeDefaultAuthorizerOutcomeCallable;
      typedef std::future<DescribeDetectMitigationActionsTaskOutcome> DescribeDetectMitigationActionsTaskOutcomeCallable;
      typedef std::future<DescribeDimensionOutcome> DescribeDimensionOutcomeCallable;
      typedef std::future<DescribeDomainConfigurationOutcome> DescribeDomainConfigurationOutcomeCallable;
      typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
      typedef std::future<DescribeEventConfigurationsOutcome> DescribeEventConfigurationsOutcomeCallable;
      typedef std::future<DescribeFleetMetricOutcome> DescribeFleetMetricOutcomeCallable;
      typedef std::future<DescribeIndexOutcome> DescribeIndexOutcomeCallable;
      typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
      typedef std::future<DescribeJobExecutionOutcome> DescribeJobExecutionOutcomeCallable;
      typedef std::future<DescribeJobTemplateOutcome> DescribeJobTemplateOutcomeCallable;
      typedef std::future<DescribeManagedJobTemplateOutcome> DescribeManagedJobTemplateOutcomeCallable;
      typedef std::future<DescribeMitigationActionOutcome> DescribeMitigationActionOutcomeCallable;
      typedef std::future<DescribeProvisioningTemplateOutcome> DescribeProvisioningTemplateOutcomeCallable;
      typedef std::future<DescribeProvisioningTemplateVersionOutcome> DescribeProvisioningTemplateVersionOutcomeCallable;
      typedef std::future<DescribeRoleAliasOutcome> DescribeRoleAliasOutcomeCallable;
      typedef std::future<DescribeScheduledAuditOutcome> DescribeScheduledAuditOutcomeCallable;
      typedef std::future<DescribeSecurityProfileOutcome> DescribeSecurityProfileOutcomeCallable;
      typedef std::future<DescribeStreamOutcome> DescribeStreamOutcomeCallable;
      typedef std::future<DescribeThingOutcome> DescribeThingOutcomeCallable;
      typedef std::future<DescribeThingGroupOutcome> DescribeThingGroupOutcomeCallable;
      typedef std::future<DescribeThingRegistrationTaskOutcome> DescribeThingRegistrationTaskOutcomeCallable;
      typedef std::future<DescribeThingTypeOutcome> DescribeThingTypeOutcomeCallable;
      typedef std::future<DetachPolicyOutcome> DetachPolicyOutcomeCallable;
      typedef std::future<DetachSecurityProfileOutcome> DetachSecurityProfileOutcomeCallable;
      typedef std::future<DetachThingPrincipalOutcome> DetachThingPrincipalOutcomeCallable;
      typedef std::future<DisableTopicRuleOutcome> DisableTopicRuleOutcomeCallable;
      typedef std::future<EnableTopicRuleOutcome> EnableTopicRuleOutcomeCallable;
      typedef std::future<GetBehaviorModelTrainingSummariesOutcome> GetBehaviorModelTrainingSummariesOutcomeCallable;
      typedef std::future<GetBucketsAggregationOutcome> GetBucketsAggregationOutcomeCallable;
      typedef std::future<GetCardinalityOutcome> GetCardinalityOutcomeCallable;
      typedef std::future<GetEffectivePoliciesOutcome> GetEffectivePoliciesOutcomeCallable;
      typedef std::future<GetIndexingConfigurationOutcome> GetIndexingConfigurationOutcomeCallable;
      typedef std::future<GetJobDocumentOutcome> GetJobDocumentOutcomeCallable;
      typedef std::future<GetLoggingOptionsOutcome> GetLoggingOptionsOutcomeCallable;
      typedef std::future<GetOTAUpdateOutcome> GetOTAUpdateOutcomeCallable;
      typedef std::future<GetPercentilesOutcome> GetPercentilesOutcomeCallable;
      typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
      typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
      typedef std::future<GetRegistrationCodeOutcome> GetRegistrationCodeOutcomeCallable;
      typedef std::future<GetStatisticsOutcome> GetStatisticsOutcomeCallable;
      typedef std::future<GetTopicRuleOutcome> GetTopicRuleOutcomeCallable;
      typedef std::future<GetTopicRuleDestinationOutcome> GetTopicRuleDestinationOutcomeCallable;
      typedef std::future<GetV2LoggingOptionsOutcome> GetV2LoggingOptionsOutcomeCallable;
      typedef std::future<ListActiveViolationsOutcome> ListActiveViolationsOutcomeCallable;
      typedef std::future<ListAttachedPoliciesOutcome> ListAttachedPoliciesOutcomeCallable;
      typedef std::future<ListAuditFindingsOutcome> ListAuditFindingsOutcomeCallable;
      typedef std::future<ListAuditMitigationActionsExecutionsOutcome> ListAuditMitigationActionsExecutionsOutcomeCallable;
      typedef std::future<ListAuditMitigationActionsTasksOutcome> ListAuditMitigationActionsTasksOutcomeCallable;
      typedef std::future<ListAuditSuppressionsOutcome> ListAuditSuppressionsOutcomeCallable;
      typedef std::future<ListAuditTasksOutcome> ListAuditTasksOutcomeCallable;
      typedef std::future<ListAuthorizersOutcome> ListAuthorizersOutcomeCallable;
      typedef std::future<ListBillingGroupsOutcome> ListBillingGroupsOutcomeCallable;
      typedef std::future<ListCACertificatesOutcome> ListCACertificatesOutcomeCallable;
      typedef std::future<ListCertificatesOutcome> ListCertificatesOutcomeCallable;
      typedef std::future<ListCertificatesByCAOutcome> ListCertificatesByCAOutcomeCallable;
      typedef std::future<ListCustomMetricsOutcome> ListCustomMetricsOutcomeCallable;
      typedef std::future<ListDetectMitigationActionsExecutionsOutcome> ListDetectMitigationActionsExecutionsOutcomeCallable;
      typedef std::future<ListDetectMitigationActionsTasksOutcome> ListDetectMitigationActionsTasksOutcomeCallable;
      typedef std::future<ListDimensionsOutcome> ListDimensionsOutcomeCallable;
      typedef std::future<ListDomainConfigurationsOutcome> ListDomainConfigurationsOutcomeCallable;
      typedef std::future<ListFleetMetricsOutcome> ListFleetMetricsOutcomeCallable;
      typedef std::future<ListIndicesOutcome> ListIndicesOutcomeCallable;
      typedef std::future<ListJobExecutionsForJobOutcome> ListJobExecutionsForJobOutcomeCallable;
      typedef std::future<ListJobExecutionsForThingOutcome> ListJobExecutionsForThingOutcomeCallable;
      typedef std::future<ListJobTemplatesOutcome> ListJobTemplatesOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListManagedJobTemplatesOutcome> ListManagedJobTemplatesOutcomeCallable;
      typedef std::future<ListMetricValuesOutcome> ListMetricValuesOutcomeCallable;
      typedef std::future<ListMitigationActionsOutcome> ListMitigationActionsOutcomeCallable;
      typedef std::future<ListOTAUpdatesOutcome> ListOTAUpdatesOutcomeCallable;
      typedef std::future<ListOutgoingCertificatesOutcome> ListOutgoingCertificatesOutcomeCallable;
      typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
      typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
      typedef std::future<ListPrincipalThingsOutcome> ListPrincipalThingsOutcomeCallable;
      typedef std::future<ListProvisioningTemplateVersionsOutcome> ListProvisioningTemplateVersionsOutcomeCallable;
      typedef std::future<ListProvisioningTemplatesOutcome> ListProvisioningTemplatesOutcomeCallable;
      typedef std::future<ListRelatedResourcesForAuditFindingOutcome> ListRelatedResourcesForAuditFindingOutcomeCallable;
      typedef std::future<ListRoleAliasesOutcome> ListRoleAliasesOutcomeCallable;
      typedef std::future<ListScheduledAuditsOutcome> ListScheduledAuditsOutcomeCallable;
      typedef std::future<ListSecurityProfilesOutcome> ListSecurityProfilesOutcomeCallable;
      typedef std::future<ListSecurityProfilesForTargetOutcome> ListSecurityProfilesForTargetOutcomeCallable;
      typedef std::future<ListStreamsOutcome> ListStreamsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTargetsForPolicyOutcome> ListTargetsForPolicyOutcomeCallable;
      typedef std::future<ListTargetsForSecurityProfileOutcome> ListTargetsForSecurityProfileOutcomeCallable;
      typedef std::future<ListThingGroupsOutcome> ListThingGroupsOutcomeCallable;
      typedef std::future<ListThingGroupsForThingOutcome> ListThingGroupsForThingOutcomeCallable;
      typedef std::future<ListThingPrincipalsOutcome> ListThingPrincipalsOutcomeCallable;
      typedef std::future<ListThingRegistrationTaskReportsOutcome> ListThingRegistrationTaskReportsOutcomeCallable;
      typedef std::future<ListThingRegistrationTasksOutcome> ListThingRegistrationTasksOutcomeCallable;
      typedef std::future<ListThingTypesOutcome> ListThingTypesOutcomeCallable;
      typedef std::future<ListThingsOutcome> ListThingsOutcomeCallable;
      typedef std::future<ListThingsInBillingGroupOutcome> ListThingsInBillingGroupOutcomeCallable;
      typedef std::future<ListThingsInThingGroupOutcome> ListThingsInThingGroupOutcomeCallable;
      typedef std::future<ListTopicRuleDestinationsOutcome> ListTopicRuleDestinationsOutcomeCallable;
      typedef std::future<ListTopicRulesOutcome> ListTopicRulesOutcomeCallable;
      typedef std::future<ListV2LoggingLevelsOutcome> ListV2LoggingLevelsOutcomeCallable;
      typedef std::future<ListViolationEventsOutcome> ListViolationEventsOutcomeCallable;
      typedef std::future<PutVerificationStateOnViolationOutcome> PutVerificationStateOnViolationOutcomeCallable;
      typedef std::future<RegisterCACertificateOutcome> RegisterCACertificateOutcomeCallable;
      typedef std::future<RegisterCertificateOutcome> RegisterCertificateOutcomeCallable;
      typedef std::future<RegisterCertificateWithoutCAOutcome> RegisterCertificateWithoutCAOutcomeCallable;
      typedef std::future<RegisterThingOutcome> RegisterThingOutcomeCallable;
      typedef std::future<RejectCertificateTransferOutcome> RejectCertificateTransferOutcomeCallable;
      typedef std::future<RemoveThingFromBillingGroupOutcome> RemoveThingFromBillingGroupOutcomeCallable;
      typedef std::future<RemoveThingFromThingGroupOutcome> RemoveThingFromThingGroupOutcomeCallable;
      typedef std::future<ReplaceTopicRuleOutcome> ReplaceTopicRuleOutcomeCallable;
      typedef std::future<SearchIndexOutcome> SearchIndexOutcomeCallable;
      typedef std::future<SetDefaultAuthorizerOutcome> SetDefaultAuthorizerOutcomeCallable;
      typedef std::future<SetDefaultPolicyVersionOutcome> SetDefaultPolicyVersionOutcomeCallable;
      typedef std::future<SetLoggingOptionsOutcome> SetLoggingOptionsOutcomeCallable;
      typedef std::future<SetV2LoggingLevelOutcome> SetV2LoggingLevelOutcomeCallable;
      typedef std::future<SetV2LoggingOptionsOutcome> SetV2LoggingOptionsOutcomeCallable;
      typedef std::future<StartAuditMitigationActionsTaskOutcome> StartAuditMitigationActionsTaskOutcomeCallable;
      typedef std::future<StartDetectMitigationActionsTaskOutcome> StartDetectMitigationActionsTaskOutcomeCallable;
      typedef std::future<StartOnDemandAuditTaskOutcome> StartOnDemandAuditTaskOutcomeCallable;
      typedef std::future<StartThingRegistrationTaskOutcome> StartThingRegistrationTaskOutcomeCallable;
      typedef std::future<StopThingRegistrationTaskOutcome> StopThingRegistrationTaskOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestAuthorizationOutcome> TestAuthorizationOutcomeCallable;
      typedef std::future<TestInvokeAuthorizerOutcome> TestInvokeAuthorizerOutcomeCallable;
      typedef std::future<TransferCertificateOutcome> TransferCertificateOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccountAuditConfigurationOutcome> UpdateAccountAuditConfigurationOutcomeCallable;
      typedef std::future<UpdateAuditSuppressionOutcome> UpdateAuditSuppressionOutcomeCallable;
      typedef std::future<UpdateAuthorizerOutcome> UpdateAuthorizerOutcomeCallable;
      typedef std::future<UpdateBillingGroupOutcome> UpdateBillingGroupOutcomeCallable;
      typedef std::future<UpdateCACertificateOutcome> UpdateCACertificateOutcomeCallable;
      typedef std::future<UpdateCertificateOutcome> UpdateCertificateOutcomeCallable;
      typedef std::future<UpdateCustomMetricOutcome> UpdateCustomMetricOutcomeCallable;
      typedef std::future<UpdateDimensionOutcome> UpdateDimensionOutcomeCallable;
      typedef std::future<UpdateDomainConfigurationOutcome> UpdateDomainConfigurationOutcomeCallable;
      typedef std::future<UpdateDynamicThingGroupOutcome> UpdateDynamicThingGroupOutcomeCallable;
      typedef std::future<UpdateEventConfigurationsOutcome> UpdateEventConfigurationsOutcomeCallable;
      typedef std::future<UpdateFleetMetricOutcome> UpdateFleetMetricOutcomeCallable;
      typedef std::future<UpdateIndexingConfigurationOutcome> UpdateIndexingConfigurationOutcomeCallable;
      typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
      typedef std::future<UpdateMitigationActionOutcome> UpdateMitigationActionOutcomeCallable;
      typedef std::future<UpdateProvisioningTemplateOutcome> UpdateProvisioningTemplateOutcomeCallable;
      typedef std::future<UpdateRoleAliasOutcome> UpdateRoleAliasOutcomeCallable;
      typedef std::future<UpdateScheduledAuditOutcome> UpdateScheduledAuditOutcomeCallable;
      typedef std::future<UpdateSecurityProfileOutcome> UpdateSecurityProfileOutcomeCallable;
      typedef std::future<UpdateStreamOutcome> UpdateStreamOutcomeCallable;
      typedef std::future<UpdateThingOutcome> UpdateThingOutcomeCallable;
      typedef std::future<UpdateThingGroupOutcome> UpdateThingGroupOutcomeCallable;
      typedef std::future<UpdateThingGroupsForThingOutcome> UpdateThingGroupsForThingOutcomeCallable;
      typedef std::future<UpdateTopicRuleDestinationOutcome> UpdateTopicRuleDestinationOutcomeCallable;
      typedef std::future<ValidateSecurityProfileBehaviorsOutcome> ValidateSecurityProfileBehaviorsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTClient*, const Model::AcceptCertificateTransferRequest&, const Model::AcceptCertificateTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptCertificateTransferResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::AddThingToBillingGroupRequest&, const Model::AddThingToBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddThingToBillingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::AddThingToThingGroupRequest&, const Model::AddThingToThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddThingToThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::AssociateTargetsWithJobRequest&, const Model::AssociateTargetsWithJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTargetsWithJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::AttachPolicyRequest&, const Model::AttachPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::AttachSecurityProfileRequest&, const Model::AttachSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::AttachThingPrincipalRequest&, const Model::AttachThingPrincipalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachThingPrincipalResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CancelAuditMitigationActionsTaskRequest&, const Model::CancelAuditMitigationActionsTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelAuditMitigationActionsTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CancelAuditTaskRequest&, const Model::CancelAuditTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelAuditTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CancelCertificateTransferRequest&, const Model::CancelCertificateTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelCertificateTransferResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CancelDetectMitigationActionsTaskRequest&, const Model::CancelDetectMitigationActionsTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDetectMitigationActionsTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CancelJobExecutionRequest&, const Model::CancelJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobExecutionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ClearDefaultAuthorizerRequest&, const Model::ClearDefaultAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClearDefaultAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ConfirmTopicRuleDestinationRequest&, const Model::ConfirmTopicRuleDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmTopicRuleDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateAuditSuppressionRequest&, const Model::CreateAuditSuppressionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAuditSuppressionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateAuthorizerRequest&, const Model::CreateAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateBillingGroupRequest&, const Model::CreateBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBillingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateCertificateFromCsrRequest&, const Model::CreateCertificateFromCsrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCertificateFromCsrResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateCustomMetricRequest&, const Model::CreateCustomMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomMetricResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateDimensionRequest&, const Model::CreateDimensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDimensionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateDomainConfigurationRequest&, const Model::CreateDomainConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateDynamicThingGroupRequest&, const Model::CreateDynamicThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDynamicThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateFleetMetricRequest&, const Model::CreateFleetMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetMetricResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateJobTemplateRequest&, const Model::CreateJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateKeysAndCertificateRequest&, const Model::CreateKeysAndCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeysAndCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateMitigationActionRequest&, const Model::CreateMitigationActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMitigationActionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateOTAUpdateRequest&, const Model::CreateOTAUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOTAUpdateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreatePolicyVersionRequest&, const Model::CreatePolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateProvisioningClaimRequest&, const Model::CreateProvisioningClaimOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisioningClaimResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateProvisioningTemplateRequest&, const Model::CreateProvisioningTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisioningTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateProvisioningTemplateVersionRequest&, const Model::CreateProvisioningTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisioningTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateRoleAliasRequest&, const Model::CreateRoleAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoleAliasResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateScheduledAuditRequest&, const Model::CreateScheduledAuditOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScheduledAuditResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateSecurityProfileRequest&, const Model::CreateSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateStreamRequest&, const Model::CreateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateThingRequest&, const Model::CreateThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateThingGroupRequest&, const Model::CreateThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateThingTypeRequest&, const Model::CreateThingTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThingTypeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateTopicRuleRequest&, const Model::CreateTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateTopicRuleDestinationRequest&, const Model::CreateTopicRuleDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTopicRuleDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteAccountAuditConfigurationRequest&, const Model::DeleteAccountAuditConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountAuditConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteAuditSuppressionRequest&, const Model::DeleteAuditSuppressionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAuditSuppressionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteAuthorizerRequest&, const Model::DeleteAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteBillingGroupRequest&, const Model::DeleteBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBillingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteCACertificateRequest&, const Model::DeleteCACertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCACertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteCertificateRequest&, const Model::DeleteCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteCustomMetricRequest&, const Model::DeleteCustomMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomMetricResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteDimensionRequest&, const Model::DeleteDimensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDimensionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteDomainConfigurationRequest&, const Model::DeleteDomainConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteDynamicThingGroupRequest&, const Model::DeleteDynamicThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDynamicThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteFleetMetricRequest&, const Model::DeleteFleetMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetMetricResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteJobExecutionRequest&, const Model::DeleteJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobExecutionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteJobTemplateRequest&, const Model::DeleteJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteMitigationActionRequest&, const Model::DeleteMitigationActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMitigationActionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteOTAUpdateRequest&, const Model::DeleteOTAUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOTAUpdateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeletePolicyVersionRequest&, const Model::DeletePolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteProvisioningTemplateRequest&, const Model::DeleteProvisioningTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisioningTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteProvisioningTemplateVersionRequest&, const Model::DeleteProvisioningTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisioningTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteRegistrationCodeRequest&, const Model::DeleteRegistrationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegistrationCodeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteRoleAliasRequest&, const Model::DeleteRoleAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoleAliasResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteScheduledAuditRequest&, const Model::DeleteScheduledAuditOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduledAuditResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteSecurityProfileRequest&, const Model::DeleteSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteStreamRequest&, const Model::DeleteStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteThingRequest&, const Model::DeleteThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteThingGroupRequest&, const Model::DeleteThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteThingTypeRequest&, const Model::DeleteThingTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThingTypeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteTopicRuleRequest&, const Model::DeleteTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteTopicRuleDestinationRequest&, const Model::DeleteTopicRuleDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTopicRuleDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteV2LoggingLevelRequest&, const Model::DeleteV2LoggingLevelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteV2LoggingLevelResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeprecateThingTypeRequest&, const Model::DeprecateThingTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprecateThingTypeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeAccountAuditConfigurationRequest&, const Model::DescribeAccountAuditConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAuditConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeAuditFindingRequest&, const Model::DescribeAuditFindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAuditFindingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeAuditMitigationActionsTaskRequest&, const Model::DescribeAuditMitigationActionsTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAuditMitigationActionsTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeAuditSuppressionRequest&, const Model::DescribeAuditSuppressionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAuditSuppressionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeAuditTaskRequest&, const Model::DescribeAuditTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAuditTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeAuthorizerRequest&, const Model::DescribeAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeBillingGroupRequest&, const Model::DescribeBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBillingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeCACertificateRequest&, const Model::DescribeCACertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCACertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeCertificateRequest&, const Model::DescribeCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeCustomMetricRequest&, const Model::DescribeCustomMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomMetricResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeDefaultAuthorizerRequest&, const Model::DescribeDefaultAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDefaultAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeDetectMitigationActionsTaskRequest&, const Model::DescribeDetectMitigationActionsTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDetectMitigationActionsTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeDimensionRequest&, const Model::DescribeDimensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDimensionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeDomainConfigurationRequest&, const Model::DescribeDomainConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeEventConfigurationsRequest&, const Model::DescribeEventConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeFleetMetricRequest&, const Model::DescribeFleetMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetMetricResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeIndexRequest&, const Model::DescribeIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIndexResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeJobExecutionRequest&, const Model::DescribeJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobExecutionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeJobTemplateRequest&, const Model::DescribeJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeManagedJobTemplateRequest&, const Model::DescribeManagedJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeManagedJobTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeMitigationActionRequest&, const Model::DescribeMitigationActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMitigationActionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeProvisioningTemplateRequest&, const Model::DescribeProvisioningTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeProvisioningTemplateVersionRequest&, const Model::DescribeProvisioningTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeRoleAliasRequest&, const Model::DescribeRoleAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRoleAliasResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeScheduledAuditRequest&, const Model::DescribeScheduledAuditOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledAuditResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeSecurityProfileRequest&, const Model::DescribeSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeStreamRequest&, const Model::DescribeStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStreamResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeThingRequest&, const Model::DescribeThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeThingGroupRequest&, const Model::DescribeThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeThingRegistrationTaskRequest&, const Model::DescribeThingRegistrationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThingRegistrationTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeThingTypeRequest&, const Model::DescribeThingTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThingTypeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DetachPolicyRequest&, const Model::DetachPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DetachSecurityProfileRequest&, const Model::DetachSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DetachThingPrincipalRequest&, const Model::DetachThingPrincipalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachThingPrincipalResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DisableTopicRuleRequest&, const Model::DisableTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::EnableTopicRuleRequest&, const Model::EnableTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetBehaviorModelTrainingSummariesRequest&, const Model::GetBehaviorModelTrainingSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBehaviorModelTrainingSummariesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetBucketsAggregationRequest&, const Model::GetBucketsAggregationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketsAggregationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetCardinalityRequest&, const Model::GetCardinalityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCardinalityResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetEffectivePoliciesRequest&, const Model::GetEffectivePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEffectivePoliciesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetIndexingConfigurationRequest&, const Model::GetIndexingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIndexingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetJobDocumentRequest&, const Model::GetJobDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobDocumentResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetLoggingOptionsRequest&, const Model::GetLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetOTAUpdateRequest&, const Model::GetOTAUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOTAUpdateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetPercentilesRequest&, const Model::GetPercentilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPercentilesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetPolicyVersionRequest&, const Model::GetPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetRegistrationCodeRequest&, const Model::GetRegistrationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegistrationCodeResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetStatisticsRequest&, const Model::GetStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStatisticsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetTopicRuleRequest&, const Model::GetTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetTopicRuleDestinationRequest&, const Model::GetTopicRuleDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTopicRuleDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::GetV2LoggingOptionsRequest&, const Model::GetV2LoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetV2LoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListActiveViolationsRequest&, const Model::ListActiveViolationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActiveViolationsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListAttachedPoliciesRequest&, const Model::ListAttachedPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedPoliciesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListAuditFindingsRequest&, const Model::ListAuditFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAuditFindingsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListAuditMitigationActionsExecutionsRequest&, const Model::ListAuditMitigationActionsExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAuditMitigationActionsExecutionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListAuditMitigationActionsTasksRequest&, const Model::ListAuditMitigationActionsTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAuditMitigationActionsTasksResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListAuditSuppressionsRequest&, const Model::ListAuditSuppressionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAuditSuppressionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListAuditTasksRequest&, const Model::ListAuditTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAuditTasksResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListAuthorizersRequest&, const Model::ListAuthorizersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAuthorizersResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListBillingGroupsRequest&, const Model::ListBillingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillingGroupsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListCACertificatesRequest&, const Model::ListCACertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCACertificatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListCertificatesRequest&, const Model::ListCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListCertificatesByCARequest&, const Model::ListCertificatesByCAOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificatesByCAResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListCustomMetricsRequest&, const Model::ListCustomMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomMetricsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListDetectMitigationActionsExecutionsRequest&, const Model::ListDetectMitigationActionsExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDetectMitigationActionsExecutionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListDetectMitigationActionsTasksRequest&, const Model::ListDetectMitigationActionsTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDetectMitigationActionsTasksResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListDimensionsRequest&, const Model::ListDimensionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDimensionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListDomainConfigurationsRequest&, const Model::ListDomainConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListFleetMetricsRequest&, const Model::ListFleetMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetMetricsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListIndicesRequest&, const Model::ListIndicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIndicesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListJobExecutionsForJobRequest&, const Model::ListJobExecutionsForJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobExecutionsForJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListJobExecutionsForThingRequest&, const Model::ListJobExecutionsForThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobExecutionsForThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListJobTemplatesRequest&, const Model::ListJobTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobTemplatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListManagedJobTemplatesRequest&, const Model::ListManagedJobTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedJobTemplatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListMetricValuesRequest&, const Model::ListMetricValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricValuesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListMitigationActionsRequest&, const Model::ListMitigationActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMitigationActionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListOTAUpdatesRequest&, const Model::ListOTAUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOTAUpdatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListOutgoingCertificatesRequest&, const Model::ListOutgoingCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOutgoingCertificatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPolicyVersionsRequest&, const Model::ListPolicyVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyVersionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPrincipalThingsRequest&, const Model::ListPrincipalThingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalThingsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListProvisioningTemplateVersionsRequest&, const Model::ListProvisioningTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListProvisioningTemplatesRequest&, const Model::ListProvisioningTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningTemplatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListRelatedResourcesForAuditFindingRequest&, const Model::ListRelatedResourcesForAuditFindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRelatedResourcesForAuditFindingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListRoleAliasesRequest&, const Model::ListRoleAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoleAliasesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListScheduledAuditsRequest&, const Model::ListScheduledAuditsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScheduledAuditsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListSecurityProfilesRequest&, const Model::ListSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListSecurityProfilesForTargetRequest&, const Model::ListSecurityProfilesForTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilesForTargetResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListStreamsRequest&, const Model::ListStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListTargetsForPolicyRequest&, const Model::ListTargetsForPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetsForPolicyResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListTargetsForSecurityProfileRequest&, const Model::ListTargetsForSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetsForSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingGroupsRequest&, const Model::ListThingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingGroupsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingGroupsForThingRequest&, const Model::ListThingGroupsForThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingGroupsForThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingPrincipalsRequest&, const Model::ListThingPrincipalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingPrincipalsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingRegistrationTaskReportsRequest&, const Model::ListThingRegistrationTaskReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingRegistrationTaskReportsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingRegistrationTasksRequest&, const Model::ListThingRegistrationTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingRegistrationTasksResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingTypesRequest&, const Model::ListThingTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingTypesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingsRequest&, const Model::ListThingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingsInBillingGroupRequest&, const Model::ListThingsInBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingsInBillingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListThingsInThingGroupRequest&, const Model::ListThingsInThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThingsInThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListTopicRuleDestinationsRequest&, const Model::ListTopicRuleDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicRuleDestinationsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListTopicRulesRequest&, const Model::ListTopicRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicRulesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListV2LoggingLevelsRequest&, const Model::ListV2LoggingLevelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListV2LoggingLevelsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListViolationEventsRequest&, const Model::ListViolationEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListViolationEventsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::PutVerificationStateOnViolationRequest&, const Model::PutVerificationStateOnViolationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVerificationStateOnViolationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RegisterCACertificateRequest&, const Model::RegisterCACertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterCACertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RegisterCertificateRequest&, const Model::RegisterCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RegisterCertificateWithoutCARequest&, const Model::RegisterCertificateWithoutCAOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterCertificateWithoutCAResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RegisterThingRequest&, const Model::RegisterThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RejectCertificateTransferRequest&, const Model::RejectCertificateTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectCertificateTransferResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RemoveThingFromBillingGroupRequest&, const Model::RemoveThingFromBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveThingFromBillingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::RemoveThingFromThingGroupRequest&, const Model::RemoveThingFromThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveThingFromThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ReplaceTopicRuleRequest&, const Model::ReplaceTopicRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceTopicRuleResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::SearchIndexRequest&, const Model::SearchIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchIndexResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::SetDefaultAuthorizerRequest&, const Model::SetDefaultAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::SetDefaultPolicyVersionRequest&, const Model::SetDefaultPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::SetLoggingOptionsRequest&, const Model::SetLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::SetV2LoggingLevelRequest&, const Model::SetV2LoggingLevelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetV2LoggingLevelResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::SetV2LoggingOptionsRequest&, const Model::SetV2LoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetV2LoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::StartAuditMitigationActionsTaskRequest&, const Model::StartAuditMitigationActionsTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAuditMitigationActionsTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::StartDetectMitigationActionsTaskRequest&, const Model::StartDetectMitigationActionsTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDetectMitigationActionsTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::StartOnDemandAuditTaskRequest&, const Model::StartOnDemandAuditTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOnDemandAuditTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::StartThingRegistrationTaskRequest&, const Model::StartThingRegistrationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartThingRegistrationTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::StopThingRegistrationTaskRequest&, const Model::StopThingRegistrationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopThingRegistrationTaskResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::TestAuthorizationRequest&, const Model::TestAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestAuthorizationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::TestInvokeAuthorizerRequest&, const Model::TestInvokeAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestInvokeAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::TransferCertificateRequest&, const Model::TransferCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateAccountAuditConfigurationRequest&, const Model::UpdateAccountAuditConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountAuditConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateAuditSuppressionRequest&, const Model::UpdateAuditSuppressionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAuditSuppressionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateAuthorizerRequest&, const Model::UpdateAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateBillingGroupRequest&, const Model::UpdateBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBillingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateCACertificateRequest&, const Model::UpdateCACertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCACertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateCertificateRequest&, const Model::UpdateCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateCustomMetricRequest&, const Model::UpdateCustomMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomMetricResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateDimensionRequest&, const Model::UpdateDimensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDimensionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateDomainConfigurationRequest&, const Model::UpdateDomainConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateDynamicThingGroupRequest&, const Model::UpdateDynamicThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDynamicThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateEventConfigurationsRequest&, const Model::UpdateEventConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateFleetMetricRequest&, const Model::UpdateFleetMetricOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetMetricResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateIndexingConfigurationRequest&, const Model::UpdateIndexingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIndexingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateMitigationActionRequest&, const Model::UpdateMitigationActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMitigationActionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateProvisioningTemplateRequest&, const Model::UpdateProvisioningTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisioningTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateRoleAliasRequest&, const Model::UpdateRoleAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoleAliasResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateScheduledAuditRequest&, const Model::UpdateScheduledAuditOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScheduledAuditResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateSecurityProfileRequest&, const Model::UpdateSecurityProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityProfileResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateStreamRequest&, const Model::UpdateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateThingRequest&, const Model::UpdateThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateThingGroupRequest&, const Model::UpdateThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateThingGroupsForThingRequest&, const Model::UpdateThingGroupsForThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThingGroupsForThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateTopicRuleDestinationRequest&, const Model::UpdateTopicRuleDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTopicRuleDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ValidateSecurityProfileBehaviorsRequest&, const Model::ValidateSecurityProfileBehaviorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateSecurityProfileBehaviorsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoT
} // namespace Aws
