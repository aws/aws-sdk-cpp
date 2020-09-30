/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/AddThingToBillingGroupResult.h>
#include <aws/iot/model/AddThingToThingGroupResult.h>
#include <aws/iot/model/AssociateTargetsWithJobResult.h>
#include <aws/iot/model/AttachSecurityProfileResult.h>
#include <aws/iot/model/AttachThingPrincipalResult.h>
#include <aws/iot/model/CancelAuditMitigationActionsTaskResult.h>
#include <aws/iot/model/CancelAuditTaskResult.h>
#include <aws/iot/model/CancelJobResult.h>
#include <aws/iot/model/ClearDefaultAuthorizerResult.h>
#include <aws/iot/model/ConfirmTopicRuleDestinationResult.h>
#include <aws/iot/model/CreateAuditSuppressionResult.h>
#include <aws/iot/model/CreateAuthorizerResult.h>
#include <aws/iot/model/CreateBillingGroupResult.h>
#include <aws/iot/model/CreateCertificateFromCsrResult.h>
#include <aws/iot/model/CreateDimensionResult.h>
#include <aws/iot/model/CreateDomainConfigurationResult.h>
#include <aws/iot/model/CreateDynamicThingGroupResult.h>
#include <aws/iot/model/CreateJobResult.h>
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
#include <aws/iot/model/DescribeDefaultAuthorizerResult.h>
#include <aws/iot/model/DescribeDimensionResult.h>
#include <aws/iot/model/DescribeDomainConfigurationResult.h>
#include <aws/iot/model/DescribeEndpointResult.h>
#include <aws/iot/model/DescribeEventConfigurationsResult.h>
#include <aws/iot/model/DescribeIndexResult.h>
#include <aws/iot/model/DescribeJobResult.h>
#include <aws/iot/model/DescribeJobExecutionResult.h>
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
#include <aws/iot/model/ListDimensionsResult.h>
#include <aws/iot/model/ListDomainConfigurationsResult.h>
#include <aws/iot/model/ListIndicesResult.h>
#include <aws/iot/model/ListJobExecutionsForJobResult.h>
#include <aws/iot/model/ListJobExecutionsForThingResult.h>
#include <aws/iot/model/ListJobsResult.h>
#include <aws/iot/model/ListMitigationActionsResult.h>
#include <aws/iot/model/ListOTAUpdatesResult.h>
#include <aws/iot/model/ListOutgoingCertificatesResult.h>
#include <aws/iot/model/ListPoliciesResult.h>
#include <aws/iot/model/ListPolicyVersionsResult.h>
#include <aws/iot/model/ListPrincipalThingsResult.h>
#include <aws/iot/model/ListProvisioningTemplateVersionsResult.h>
#include <aws/iot/model/ListProvisioningTemplatesResult.h>
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
#include <aws/iot/model/RegisterCACertificateResult.h>
#include <aws/iot/model/RegisterCertificateResult.h>
#include <aws/iot/model/RegisterCertificateWithoutCAResult.h>
#include <aws/iot/model/RegisterThingResult.h>
#include <aws/iot/model/RemoveThingFromBillingGroupResult.h>
#include <aws/iot/model/RemoveThingFromThingGroupResult.h>
#include <aws/iot/model/SearchIndexResult.h>
#include <aws/iot/model/SetDefaultAuthorizerResult.h>
#include <aws/iot/model/StartAuditMitigationActionsTaskResult.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
        class CancelJobRequest;
        class CancelJobExecutionRequest;
        class ClearDefaultAuthorizerRequest;
        class ConfirmTopicRuleDestinationRequest;
        class CreateAuditSuppressionRequest;
        class CreateAuthorizerRequest;
        class CreateBillingGroupRequest;
        class CreateCertificateFromCsrRequest;
        class CreateDimensionRequest;
        class CreateDomainConfigurationRequest;
        class CreateDynamicThingGroupRequest;
        class CreateJobRequest;
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
        class DeleteDimensionRequest;
        class DeleteDomainConfigurationRequest;
        class DeleteDynamicThingGroupRequest;
        class DeleteJobRequest;
        class DeleteJobExecutionRequest;
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
        class DescribeDefaultAuthorizerRequest;
        class DescribeDimensionRequest;
        class DescribeDomainConfigurationRequest;
        class DescribeEndpointRequest;
        class DescribeEventConfigurationsRequest;
        class DescribeIndexRequest;
        class DescribeJobRequest;
        class DescribeJobExecutionRequest;
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
        class ListDimensionsRequest;
        class ListDomainConfigurationsRequest;
        class ListIndicesRequest;
        class ListJobExecutionsForJobRequest;
        class ListJobExecutionsForThingRequest;
        class ListJobsRequest;
        class ListMitigationActionsRequest;
        class ListOTAUpdatesRequest;
        class ListOutgoingCertificatesRequest;
        class ListPoliciesRequest;
        class ListPolicyVersionsRequest;
        class ListPrincipalThingsRequest;
        class ListProvisioningTemplateVersionsRequest;
        class ListProvisioningTemplatesRequest;
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
        class UpdateDimensionRequest;
        class UpdateDomainConfigurationRequest;
        class UpdateDynamicThingGroupRequest;
        class UpdateEventConfigurationsRequest;
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
        typedef Aws::Utils::Outcome<CancelJobResult, IoTError> CancelJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> CancelJobExecutionOutcome;
        typedef Aws::Utils::Outcome<ClearDefaultAuthorizerResult, IoTError> ClearDefaultAuthorizerOutcome;
        typedef Aws::Utils::Outcome<ConfirmTopicRuleDestinationResult, IoTError> ConfirmTopicRuleDestinationOutcome;
        typedef Aws::Utils::Outcome<CreateAuditSuppressionResult, IoTError> CreateAuditSuppressionOutcome;
        typedef Aws::Utils::Outcome<CreateAuthorizerResult, IoTError> CreateAuthorizerOutcome;
        typedef Aws::Utils::Outcome<CreateBillingGroupResult, IoTError> CreateBillingGroupOutcome;
        typedef Aws::Utils::Outcome<CreateCertificateFromCsrResult, IoTError> CreateCertificateFromCsrOutcome;
        typedef Aws::Utils::Outcome<CreateDimensionResult, IoTError> CreateDimensionOutcome;
        typedef Aws::Utils::Outcome<CreateDomainConfigurationResult, IoTError> CreateDomainConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateDynamicThingGroupResult, IoTError> CreateDynamicThingGroupOutcome;
        typedef Aws::Utils::Outcome<CreateJobResult, IoTError> CreateJobOutcome;
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
        typedef Aws::Utils::Outcome<DeleteDimensionResult, IoTError> DeleteDimensionOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainConfigurationResult, IoTError> DeleteDomainConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteDynamicThingGroupResult, IoTError> DeleteDynamicThingGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeleteJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IoTError> DeleteJobExecutionOutcome;
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
        typedef Aws::Utils::Outcome<DescribeDefaultAuthorizerResult, IoTError> DescribeDefaultAuthorizerOutcome;
        typedef Aws::Utils::Outcome<DescribeDimensionResult, IoTError> DescribeDimensionOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainConfigurationResult, IoTError> DescribeDomainConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointResult, IoTError> DescribeEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeEventConfigurationsResult, IoTError> DescribeEventConfigurationsOutcome;
        typedef Aws::Utils::Outcome<DescribeIndexResult, IoTError> DescribeIndexOutcome;
        typedef Aws::Utils::Outcome<DescribeJobResult, IoTError> DescribeJobOutcome;
        typedef Aws::Utils::Outcome<DescribeJobExecutionResult, IoTError> DescribeJobExecutionOutcome;
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
        typedef Aws::Utils::Outcome<ListDimensionsResult, IoTError> ListDimensionsOutcome;
        typedef Aws::Utils::Outcome<ListDomainConfigurationsResult, IoTError> ListDomainConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListIndicesResult, IoTError> ListIndicesOutcome;
        typedef Aws::Utils::Outcome<ListJobExecutionsForJobResult, IoTError> ListJobExecutionsForJobOutcome;
        typedef Aws::Utils::Outcome<ListJobExecutionsForThingResult, IoTError> ListJobExecutionsForThingOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, IoTError> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListMitigationActionsResult, IoTError> ListMitigationActionsOutcome;
        typedef Aws::Utils::Outcome<ListOTAUpdatesResult, IoTError> ListOTAUpdatesOutcome;
        typedef Aws::Utils::Outcome<ListOutgoingCertificatesResult, IoTError> ListOutgoingCertificatesOutcome;
        typedef Aws::Utils::Outcome<ListPoliciesResult, IoTError> ListPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListPolicyVersionsResult, IoTError> ListPolicyVersionsOutcome;
        typedef Aws::Utils::Outcome<ListPrincipalThingsResult, IoTError> ListPrincipalThingsOutcome;
        typedef Aws::Utils::Outcome<ListProvisioningTemplateVersionsResult, IoTError> ListProvisioningTemplateVersionsOutcome;
        typedef Aws::Utils::Outcome<ListProvisioningTemplatesResult, IoTError> ListProvisioningTemplatesOutcome;
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
        typedef Aws::Utils::Outcome<UpdateDimensionResult, IoTError> UpdateDimensionOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainConfigurationResult, IoTError> UpdateDomainConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateDynamicThingGroupResult, IoTError> UpdateDynamicThingGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateEventConfigurationsResult, IoTError> UpdateEventConfigurationsOutcome;
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
        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CancelJobExecutionOutcome> CancelJobExecutionOutcomeCallable;
        typedef std::future<ClearDefaultAuthorizerOutcome> ClearDefaultAuthorizerOutcomeCallable;
        typedef std::future<ConfirmTopicRuleDestinationOutcome> ConfirmTopicRuleDestinationOutcomeCallable;
        typedef std::future<CreateAuditSuppressionOutcome> CreateAuditSuppressionOutcomeCallable;
        typedef std::future<CreateAuthorizerOutcome> CreateAuthorizerOutcomeCallable;
        typedef std::future<CreateBillingGroupOutcome> CreateBillingGroupOutcomeCallable;
        typedef std::future<CreateCertificateFromCsrOutcome> CreateCertificateFromCsrOutcomeCallable;
        typedef std::future<CreateDimensionOutcome> CreateDimensionOutcomeCallable;
        typedef std::future<CreateDomainConfigurationOutcome> CreateDomainConfigurationOutcomeCallable;
        typedef std::future<CreateDynamicThingGroupOutcome> CreateDynamicThingGroupOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
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
        typedef std::future<DeleteDimensionOutcome> DeleteDimensionOutcomeCallable;
        typedef std::future<DeleteDomainConfigurationOutcome> DeleteDomainConfigurationOutcomeCallable;
        typedef std::future<DeleteDynamicThingGroupOutcome> DeleteDynamicThingGroupOutcomeCallable;
        typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
        typedef std::future<DeleteJobExecutionOutcome> DeleteJobExecutionOutcomeCallable;
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
        typedef std::future<DescribeDefaultAuthorizerOutcome> DescribeDefaultAuthorizerOutcomeCallable;
        typedef std::future<DescribeDimensionOutcome> DescribeDimensionOutcomeCallable;
        typedef std::future<DescribeDomainConfigurationOutcome> DescribeDomainConfigurationOutcomeCallable;
        typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
        typedef std::future<DescribeEventConfigurationsOutcome> DescribeEventConfigurationsOutcomeCallable;
        typedef std::future<DescribeIndexOutcome> DescribeIndexOutcomeCallable;
        typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
        typedef std::future<DescribeJobExecutionOutcome> DescribeJobExecutionOutcomeCallable;
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
        typedef std::future<ListDimensionsOutcome> ListDimensionsOutcomeCallable;
        typedef std::future<ListDomainConfigurationsOutcome> ListDomainConfigurationsOutcomeCallable;
        typedef std::future<ListIndicesOutcome> ListIndicesOutcomeCallable;
        typedef std::future<ListJobExecutionsForJobOutcome> ListJobExecutionsForJobOutcomeCallable;
        typedef std::future<ListJobExecutionsForThingOutcome> ListJobExecutionsForThingOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListMitigationActionsOutcome> ListMitigationActionsOutcomeCallable;
        typedef std::future<ListOTAUpdatesOutcome> ListOTAUpdatesOutcomeCallable;
        typedef std::future<ListOutgoingCertificatesOutcome> ListOutgoingCertificatesOutcomeCallable;
        typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
        typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
        typedef std::future<ListPrincipalThingsOutcome> ListPrincipalThingsOutcomeCallable;
        typedef std::future<ListProvisioningTemplateVersionsOutcome> ListProvisioningTemplateVersionsOutcomeCallable;
        typedef std::future<ListProvisioningTemplatesOutcome> ListProvisioningTemplatesOutcomeCallable;
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
        typedef std::future<UpdateDimensionOutcome> UpdateDimensionOutcomeCallable;
        typedef std::future<UpdateDomainConfigurationOutcome> UpdateDomainConfigurationOutcomeCallable;
        typedef std::future<UpdateDynamicThingGroupOutcome> UpdateDynamicThingGroupOutcomeCallable;
        typedef std::future<UpdateEventConfigurationsOutcome> UpdateEventConfigurationsOutcomeCallable;
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
} // namespace Model

  class IoTClient;

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
    typedef std::function<void(const IoTClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CancelJobExecutionRequest&, const Model::CancelJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobExecutionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ClearDefaultAuthorizerRequest&, const Model::ClearDefaultAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClearDefaultAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ConfirmTopicRuleDestinationRequest&, const Model::ConfirmTopicRuleDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmTopicRuleDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateAuditSuppressionRequest&, const Model::CreateAuditSuppressionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAuditSuppressionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateAuthorizerRequest&, const Model::CreateAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateBillingGroupRequest&, const Model::CreateBillingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBillingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateCertificateFromCsrRequest&, const Model::CreateCertificateFromCsrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCertificateFromCsrResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateDimensionRequest&, const Model::CreateDimensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDimensionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateDomainConfigurationRequest&, const Model::CreateDomainConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateDynamicThingGroupRequest&, const Model::CreateDynamicThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDynamicThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
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
    typedef std::function<void(const IoTClient*, const Model::DeleteDimensionRequest&, const Model::DeleteDimensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDimensionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteDomainConfigurationRequest&, const Model::DeleteDomainConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteDynamicThingGroupRequest&, const Model::DeleteDynamicThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDynamicThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DeleteJobExecutionRequest&, const Model::DeleteJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobExecutionResponseReceivedHandler;
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
    typedef std::function<void(const IoTClient*, const Model::DescribeDefaultAuthorizerRequest&, const Model::DescribeDefaultAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDefaultAuthorizerResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeDimensionRequest&, const Model::DescribeDimensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDimensionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeDomainConfigurationRequest&, const Model::DescribeDomainConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeEventConfigurationsRequest&, const Model::DescribeEventConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeIndexRequest&, const Model::DescribeIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIndexResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::DescribeJobExecutionRequest&, const Model::DescribeJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobExecutionResponseReceivedHandler;
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
    typedef std::function<void(const IoTClient*, const Model::ListDimensionsRequest&, const Model::ListDimensionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDimensionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListDomainConfigurationsRequest&, const Model::ListDomainConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListIndicesRequest&, const Model::ListIndicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIndicesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListJobExecutionsForJobRequest&, const Model::ListJobExecutionsForJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobExecutionsForJobResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListJobExecutionsForThingRequest&, const Model::ListJobExecutionsForThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobExecutionsForThingResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListMitigationActionsRequest&, const Model::ListMitigationActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMitigationActionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListOTAUpdatesRequest&, const Model::ListOTAUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOTAUpdatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListOutgoingCertificatesRequest&, const Model::ListOutgoingCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOutgoingCertificatesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPolicyVersionsRequest&, const Model::ListPolicyVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyVersionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListPrincipalThingsRequest&, const Model::ListPrincipalThingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalThingsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListProvisioningTemplateVersionsRequest&, const Model::ListProvisioningTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::ListProvisioningTemplatesRequest&, const Model::ListProvisioningTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningTemplatesResponseReceivedHandler;
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
    typedef std::function<void(const IoTClient*, const Model::UpdateDimensionRequest&, const Model::UpdateDimensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDimensionResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateDomainConfigurationRequest&, const Model::UpdateDomainConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateDynamicThingGroupRequest&, const Model::UpdateDynamicThingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDynamicThingGroupResponseReceivedHandler;
    typedef std::function<void(const IoTClient*, const Model::UpdateEventConfigurationsRequest&, const Model::UpdateEventConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventConfigurationsResponseReceivedHandler;
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

  /**
   * <fullname>AWS IoT</fullname> <p>AWS IoT provides secure, bi-directional
   * communication between Internet-connected devices (such as sensors, actuators,
   * embedded devices, or smart appliances) and the AWS cloud. You can discover your
   * custom IoT-Data endpoint to communicate with, configure rules for data
   * processing and integration with other services, organize resources associated
   * with each device (Registry), configure logging, and create and manage policies
   * and credentials to authenticate devices.</p> <p>The service endpoints that
   * expose this API are listed in <a
   * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">AWS IoT Core
   * Endpoints and Quotas</a>. You must use the endpoint for the region that has the
   * resources you want to access.</p> <p>The service name used by <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">AWS
   * Signature Version 4</a> to sign the request is: <i>execute-api</i>.</p> <p>For
   * more information about how AWS IoT works, see the <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
   * Guide</a>.</p> <p>For information about how to use the credentials provider for
   * AWS IoT, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing
   * Direct Calls to AWS Services</a>.</p>
   */
  class AWS_IOT_API IoTClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTClient();


        /**
         * <p>Accepts a pending certificate transfer. The default state of the certificate
         * is INACTIVE.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AcceptCertificateTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptCertificateTransferOutcome AcceptCertificateTransfer(const Model::AcceptCertificateTransferRequest& request) const;

        /**
         * <p>Accepts a pending certificate transfer. The default state of the certificate
         * is INACTIVE.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AcceptCertificateTransfer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptCertificateTransferOutcomeCallable AcceptCertificateTransferCallable(const Model::AcceptCertificateTransferRequest& request) const;

        /**
         * <p>Accepts a pending certificate transfer. The default state of the certificate
         * is INACTIVE.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AcceptCertificateTransfer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptCertificateTransferAsync(const Model::AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a thing to a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AddThingToBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AddThingToBillingGroupOutcome AddThingToBillingGroup(const Model::AddThingToBillingGroupRequest& request) const;

        /**
         * <p>Adds a thing to a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AddThingToBillingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddThingToBillingGroupOutcomeCallable AddThingToBillingGroupCallable(const Model::AddThingToBillingGroupRequest& request) const;

        /**
         * <p>Adds a thing to a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AddThingToBillingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddThingToBillingGroupAsync(const Model::AddThingToBillingGroupRequest& request, const AddThingToBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a thing to a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AddThingToThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AddThingToThingGroupOutcome AddThingToThingGroup(const Model::AddThingToThingGroupRequest& request) const;

        /**
         * <p>Adds a thing to a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AddThingToThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddThingToThingGroupOutcomeCallable AddThingToThingGroupCallable(const Model::AddThingToThingGroupRequest& request) const;

        /**
         * <p>Adds a thing to a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AddThingToThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddThingToThingGroupAsync(const Model::AddThingToThingGroupRequest& request, const AddThingToThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a group with a continuous job. The following criteria must be met:
         * </p> <ul> <li> <p>The job must have been created with the
         * <code>targetSelection</code> field set to "CONTINUOUS".</p> </li> <li> <p>The
         * job status must currently be "IN_PROGRESS".</p> </li> <li> <p>The total number
         * of targets associated with a job must not exceed 100.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AssociateTargetsWithJob">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTargetsWithJobOutcome AssociateTargetsWithJob(const Model::AssociateTargetsWithJobRequest& request) const;

        /**
         * <p>Associates a group with a continuous job. The following criteria must be met:
         * </p> <ul> <li> <p>The job must have been created with the
         * <code>targetSelection</code> field set to "CONTINUOUS".</p> </li> <li> <p>The
         * job status must currently be "IN_PROGRESS".</p> </li> <li> <p>The total number
         * of targets associated with a job must not exceed 100.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AssociateTargetsWithJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTargetsWithJobOutcomeCallable AssociateTargetsWithJobCallable(const Model::AssociateTargetsWithJobRequest& request) const;

        /**
         * <p>Associates a group with a continuous job. The following criteria must be met:
         * </p> <ul> <li> <p>The job must have been created with the
         * <code>targetSelection</code> field set to "CONTINUOUS".</p> </li> <li> <p>The
         * job status must currently be "IN_PROGRESS".</p> </li> <li> <p>The total number
         * of targets associated with a job must not exceed 100.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AssociateTargetsWithJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTargetsWithJobAsync(const Model::AssociateTargetsWithJobRequest& request, const AssociateTargetsWithJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a policy to the specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachPolicyOutcome AttachPolicy(const Model::AttachPolicyRequest& request) const;

        /**
         * <p>Attaches a policy to the specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachPolicyOutcomeCallable AttachPolicyCallable(const Model::AttachPolicyRequest& request) const;

        /**
         * <p>Attaches a policy to the specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachPolicyAsync(const Model::AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a Device Defender security profile with a thing group or this
         * account. Each thing group or account can have up to five security profiles
         * associated with it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachSecurityProfileOutcome AttachSecurityProfile(const Model::AttachSecurityProfileRequest& request) const;

        /**
         * <p>Associates a Device Defender security profile with a thing group or this
         * account. Each thing group or account can have up to five security profiles
         * associated with it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachSecurityProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachSecurityProfileOutcomeCallable AttachSecurityProfileCallable(const Model::AttachSecurityProfileRequest& request) const;

        /**
         * <p>Associates a Device Defender security profile with a thing group or this
         * account. Each thing group or account can have up to five security profiles
         * associated with it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachSecurityProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachSecurityProfileAsync(const Model::AttachSecurityProfileRequest& request, const AttachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified principal to the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachThingPrincipal">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachThingPrincipalOutcome AttachThingPrincipal(const Model::AttachThingPrincipalRequest& request) const;

        /**
         * <p>Attaches the specified principal to the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachThingPrincipal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachThingPrincipalOutcomeCallable AttachThingPrincipalCallable(const Model::AttachThingPrincipalRequest& request) const;

        /**
         * <p>Attaches the specified principal to the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachThingPrincipal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachThingPrincipalAsync(const Model::AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a mitigation action task that is in progress. If the task is not in
         * progress, an InvalidRequestException occurs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelAuditMitigationActionsTaskOutcome CancelAuditMitigationActionsTask(const Model::CancelAuditMitigationActionsTaskRequest& request) const;

        /**
         * <p>Cancels a mitigation action task that is in progress. If the task is not in
         * progress, an InvalidRequestException occurs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelAuditMitigationActionsTaskOutcomeCallable CancelAuditMitigationActionsTaskCallable(const Model::CancelAuditMitigationActionsTaskRequest& request) const;

        /**
         * <p>Cancels a mitigation action task that is in progress. If the task is not in
         * progress, an InvalidRequestException occurs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelAuditMitigationActionsTaskAsync(const Model::CancelAuditMitigationActionsTaskRequest& request, const CancelAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an audit that is in progress. The audit can be either scheduled or
         * on-demand. If the audit is not in progress, an "InvalidRequestException"
         * occurs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelAuditTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelAuditTaskOutcome CancelAuditTask(const Model::CancelAuditTaskRequest& request) const;

        /**
         * <p>Cancels an audit that is in progress. The audit can be either scheduled or
         * on-demand. If the audit is not in progress, an "InvalidRequestException"
         * occurs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelAuditTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelAuditTaskOutcomeCallable CancelAuditTaskCallable(const Model::CancelAuditTaskRequest& request) const;

        /**
         * <p>Cancels an audit that is in progress. The audit can be either scheduled or
         * on-demand. If the audit is not in progress, an "InvalidRequestException"
         * occurs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelAuditTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelAuditTaskAsync(const Model::CancelAuditTaskRequest& request, const CancelAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a pending transfer for the specified certificate.</p> <p> <b>Note</b>
         * Only the transfer source account can use this operation to cancel a transfer.
         * (Transfer destinations can use <a>RejectCertificateTransfer</a> instead.) After
         * transfer, AWS IoT returns the certificate to the source account in the INACTIVE
         * state. After the destination account has accepted the transfer, the transfer
         * cannot be cancelled.</p> <p>After a certificate transfer is cancelled, the
         * status of the certificate changes from PENDING_TRANSFER to
         * INACTIVE.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelCertificateTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelCertificateTransferOutcome CancelCertificateTransfer(const Model::CancelCertificateTransferRequest& request) const;

        /**
         * <p>Cancels a pending transfer for the specified certificate.</p> <p> <b>Note</b>
         * Only the transfer source account can use this operation to cancel a transfer.
         * (Transfer destinations can use <a>RejectCertificateTransfer</a> instead.) After
         * transfer, AWS IoT returns the certificate to the source account in the INACTIVE
         * state. After the destination account has accepted the transfer, the transfer
         * cannot be cancelled.</p> <p>After a certificate transfer is cancelled, the
         * status of the certificate changes from PENDING_TRANSFER to
         * INACTIVE.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelCertificateTransfer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelCertificateTransferOutcomeCallable CancelCertificateTransferCallable(const Model::CancelCertificateTransferRequest& request) const;

        /**
         * <p>Cancels a pending transfer for the specified certificate.</p> <p> <b>Note</b>
         * Only the transfer source account can use this operation to cancel a transfer.
         * (Transfer destinations can use <a>RejectCertificateTransfer</a> instead.) After
         * transfer, AWS IoT returns the certificate to the source account in the INACTIVE
         * state. After the destination account has accepted the transfer, the transfer
         * cannot be cancelled.</p> <p>After a certificate transfer is cancelled, the
         * status of the certificate changes from PENDING_TRANSFER to
         * INACTIVE.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelCertificateTransfer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelCertificateTransferAsync(const Model::CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * <p>Cancels a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * <p>Cancels a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the execution of a job for a given thing.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobExecutionOutcome CancelJobExecution(const Model::CancelJobExecutionRequest& request) const;

        /**
         * <p>Cancels the execution of a job for a given thing.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelJobExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobExecutionOutcomeCallable CancelJobExecutionCallable(const Model::CancelJobExecutionRequest& request) const;

        /**
         * <p>Cancels the execution of a job for a given thing.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelJobExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobExecutionAsync(const Model::CancelJobExecutionRequest& request, const CancelJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Clears the default authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ClearDefaultAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::ClearDefaultAuthorizerOutcome ClearDefaultAuthorizer(const Model::ClearDefaultAuthorizerRequest& request) const;

        /**
         * <p>Clears the default authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ClearDefaultAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClearDefaultAuthorizerOutcomeCallable ClearDefaultAuthorizerCallable(const Model::ClearDefaultAuthorizerRequest& request) const;

        /**
         * <p>Clears the default authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ClearDefaultAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ClearDefaultAuthorizerAsync(const Model::ClearDefaultAuthorizerRequest& request, const ClearDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms a topic rule destination. When you create a rule requiring a
         * destination, AWS IoT sends a confirmation message to the endpoint or base
         * address you specify. The message includes a token which you pass back when
         * calling <code>ConfirmTopicRuleDestination</code> to confirm that you own or have
         * access to the endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ConfirmTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmTopicRuleDestinationOutcome ConfirmTopicRuleDestination(const Model::ConfirmTopicRuleDestinationRequest& request) const;

        /**
         * <p>Confirms a topic rule destination. When you create a rule requiring a
         * destination, AWS IoT sends a confirmation message to the endpoint or base
         * address you specify. The message includes a token which you pass back when
         * calling <code>ConfirmTopicRuleDestination</code> to confirm that you own or have
         * access to the endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ConfirmTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmTopicRuleDestinationOutcomeCallable ConfirmTopicRuleDestinationCallable(const Model::ConfirmTopicRuleDestinationRequest& request) const;

        /**
         * <p>Confirms a topic rule destination. When you create a rule requiring a
         * destination, AWS IoT sends a confirmation message to the endpoint or base
         * address you specify. The message includes a token which you pass back when
         * calling <code>ConfirmTopicRuleDestination</code> to confirm that you own or have
         * access to the endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ConfirmTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmTopicRuleDestinationAsync(const Model::ConfirmTopicRuleDestinationRequest& request, const ConfirmTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateAuditSuppression">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAuditSuppressionOutcome CreateAuditSuppression(const Model::CreateAuditSuppressionRequest& request) const;

        /**
         * <p> Creates a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateAuditSuppression">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAuditSuppressionOutcomeCallable CreateAuditSuppressionCallable(const Model::CreateAuditSuppressionRequest& request) const;

        /**
         * <p> Creates a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateAuditSuppression">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAuditSuppressionAsync(const Model::CreateAuditSuppressionRequest& request, const CreateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAuthorizerOutcome CreateAuthorizer(const Model::CreateAuthorizerRequest& request) const;

        /**
         * <p>Creates an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAuthorizerOutcomeCallable CreateAuthorizerCallable(const Model::CreateAuthorizerRequest& request) const;

        /**
         * <p>Creates an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAuthorizerAsync(const Model::CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBillingGroupOutcome CreateBillingGroup(const Model::CreateBillingGroupRequest& request) const;

        /**
         * <p>Creates a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateBillingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBillingGroupOutcomeCallable CreateBillingGroupCallable(const Model::CreateBillingGroupRequest& request) const;

        /**
         * <p>Creates a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateBillingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBillingGroupAsync(const Model::CreateBillingGroupRequest& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an X.509 certificate using the specified certificate signing
         * request.</p> <p> <b>Note:</b> The CSR must include a public key that is either
         * an RSA key with a length of at least 2048 bits or an ECC key from NIST P-256 or
         * NIST P-384 curves. </p> <p> <b>Note:</b> Reusing the same certificate signing
         * request (CSR) results in a distinct certificate.</p> <p>You can create multiple
         * certificates in a batch by creating a directory, copying multiple .csr files
         * into that directory, and then specifying that directory on the command line. The
         * following commands show how to create a batch of certificates given a batch of
         * CSRs.</p> <p>Assuming a set of CSRs are located inside of the directory
         * my-csr-directory:</p> <p>On Linux and OS X, the command is:</p> <p>$ ls
         * my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/{}</p> <p>This command
         * lists all of the CSRs in my-csr-directory and pipes each CSR file name to the
         * aws iot create-certificate-from-csr AWS CLI command to create a certificate for
         * the corresponding CSR.</p> <p>The aws iot create-certificate-from-csr part of
         * the command can also be run in parallel to speed up the certificate creation
         * process:</p> <p>$ ls my-csr-directory/ | xargs -P 10 -I {} aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://my-csr-directory/{}</p> <p>On Windows PowerShell, the command to create
         * certificates for all CSRs in my-csr-directory is:</p> <p>&gt; ls -Name
         * my-csr-directory | %{aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/$_}</p> <p>On a Windows
         * command prompt, the command to create certificates for all CSRs in
         * my-csr-directory is:</p> <p>&gt; forfiles /p my-csr-directory /c "cmd /c aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://@path"</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateCertificateFromCsr">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateFromCsrOutcome CreateCertificateFromCsr(const Model::CreateCertificateFromCsrRequest& request) const;

        /**
         * <p>Creates an X.509 certificate using the specified certificate signing
         * request.</p> <p> <b>Note:</b> The CSR must include a public key that is either
         * an RSA key with a length of at least 2048 bits or an ECC key from NIST P-256 or
         * NIST P-384 curves. </p> <p> <b>Note:</b> Reusing the same certificate signing
         * request (CSR) results in a distinct certificate.</p> <p>You can create multiple
         * certificates in a batch by creating a directory, copying multiple .csr files
         * into that directory, and then specifying that directory on the command line. The
         * following commands show how to create a batch of certificates given a batch of
         * CSRs.</p> <p>Assuming a set of CSRs are located inside of the directory
         * my-csr-directory:</p> <p>On Linux and OS X, the command is:</p> <p>$ ls
         * my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/{}</p> <p>This command
         * lists all of the CSRs in my-csr-directory and pipes each CSR file name to the
         * aws iot create-certificate-from-csr AWS CLI command to create a certificate for
         * the corresponding CSR.</p> <p>The aws iot create-certificate-from-csr part of
         * the command can also be run in parallel to speed up the certificate creation
         * process:</p> <p>$ ls my-csr-directory/ | xargs -P 10 -I {} aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://my-csr-directory/{}</p> <p>On Windows PowerShell, the command to create
         * certificates for all CSRs in my-csr-directory is:</p> <p>&gt; ls -Name
         * my-csr-directory | %{aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/$_}</p> <p>On a Windows
         * command prompt, the command to create certificates for all CSRs in
         * my-csr-directory is:</p> <p>&gt; forfiles /p my-csr-directory /c "cmd /c aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://@path"</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateCertificateFromCsr">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCertificateFromCsrOutcomeCallable CreateCertificateFromCsrCallable(const Model::CreateCertificateFromCsrRequest& request) const;

        /**
         * <p>Creates an X.509 certificate using the specified certificate signing
         * request.</p> <p> <b>Note:</b> The CSR must include a public key that is either
         * an RSA key with a length of at least 2048 bits or an ECC key from NIST P-256 or
         * NIST P-384 curves. </p> <p> <b>Note:</b> Reusing the same certificate signing
         * request (CSR) results in a distinct certificate.</p> <p>You can create multiple
         * certificates in a batch by creating a directory, copying multiple .csr files
         * into that directory, and then specifying that directory on the command line. The
         * following commands show how to create a batch of certificates given a batch of
         * CSRs.</p> <p>Assuming a set of CSRs are located inside of the directory
         * my-csr-directory:</p> <p>On Linux and OS X, the command is:</p> <p>$ ls
         * my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/{}</p> <p>This command
         * lists all of the CSRs in my-csr-directory and pipes each CSR file name to the
         * aws iot create-certificate-from-csr AWS CLI command to create a certificate for
         * the corresponding CSR.</p> <p>The aws iot create-certificate-from-csr part of
         * the command can also be run in parallel to speed up the certificate creation
         * process:</p> <p>$ ls my-csr-directory/ | xargs -P 10 -I {} aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://my-csr-directory/{}</p> <p>On Windows PowerShell, the command to create
         * certificates for all CSRs in my-csr-directory is:</p> <p>&gt; ls -Name
         * my-csr-directory | %{aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/$_}</p> <p>On a Windows
         * command prompt, the command to create certificates for all CSRs in
         * my-csr-directory is:</p> <p>&gt; forfiles /p my-csr-directory /c "cmd /c aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://@path"</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateCertificateFromCsr">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCertificateFromCsrAsync(const Model::CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a dimension that you can use to limit the scope of a metric used in a
         * security profile for AWS IoT Device Defender. For example, using a
         * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
         * only to MQTT topics whose name match the pattern specified in the
         * dimension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDimension">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDimensionOutcome CreateDimension(const Model::CreateDimensionRequest& request) const;

        /**
         * <p>Create a dimension that you can use to limit the scope of a metric used in a
         * security profile for AWS IoT Device Defender. For example, using a
         * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
         * only to MQTT topics whose name match the pattern specified in the
         * dimension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDimension">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDimensionOutcomeCallable CreateDimensionCallable(const Model::CreateDimensionRequest& request) const;

        /**
         * <p>Create a dimension that you can use to limit the scope of a metric used in a
         * security profile for AWS IoT Device Defender. For example, using a
         * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
         * only to MQTT topics whose name match the pattern specified in the
         * dimension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDimension">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDimensionAsync(const Model::CreateDimensionRequest& request, const CreateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a domain configuration.</p>  <p>The domain configuration
         * feature is in public preview and is subject to change.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDomainConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainConfigurationOutcome CreateDomainConfiguration(const Model::CreateDomainConfigurationRequest& request) const;

        /**
         * <p>Creates a domain configuration.</p>  <p>The domain configuration
         * feature is in public preview and is subject to change.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDomainConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainConfigurationOutcomeCallable CreateDomainConfigurationCallable(const Model::CreateDomainConfigurationRequest& request) const;

        /**
         * <p>Creates a domain configuration.</p>  <p>The domain configuration
         * feature is in public preview and is subject to change.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDomainConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainConfigurationAsync(const Model::CreateDomainConfigurationRequest& request, const CreateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dynamic thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDynamicThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDynamicThingGroupOutcome CreateDynamicThingGroup(const Model::CreateDynamicThingGroupRequest& request) const;

        /**
         * <p>Creates a dynamic thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDynamicThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDynamicThingGroupOutcomeCallable CreateDynamicThingGroupCallable(const Model::CreateDynamicThingGroupRequest& request) const;

        /**
         * <p>Creates a dynamic thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDynamicThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDynamicThingGroupAsync(const Model::CreateDynamicThingGroupRequest& request, const CreateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a 2048-bit RSA key pair and issues an X.509 certificate using the
         * issued public key. You can also call <code>CreateKeysAndCertificate</code> over
         * MQTT from a device, for more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-wo-cert.html#provision-mqtt-api">Provisioning
         * MQTT API</a>.</p> <p> <b>Note</b> This is the only time AWS IoT issues the
         * private key for this certificate, so it is important to keep it in a secure
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateKeysAndCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeysAndCertificateOutcome CreateKeysAndCertificate(const Model::CreateKeysAndCertificateRequest& request) const;

        /**
         * <p>Creates a 2048-bit RSA key pair and issues an X.509 certificate using the
         * issued public key. You can also call <code>CreateKeysAndCertificate</code> over
         * MQTT from a device, for more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-wo-cert.html#provision-mqtt-api">Provisioning
         * MQTT API</a>.</p> <p> <b>Note</b> This is the only time AWS IoT issues the
         * private key for this certificate, so it is important to keep it in a secure
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateKeysAndCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeysAndCertificateOutcomeCallable CreateKeysAndCertificateCallable(const Model::CreateKeysAndCertificateRequest& request) const;

        /**
         * <p>Creates a 2048-bit RSA key pair and issues an X.509 certificate using the
         * issued public key. You can also call <code>CreateKeysAndCertificate</code> over
         * MQTT from a device, for more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-wo-cert.html#provision-mqtt-api">Provisioning
         * MQTT API</a>.</p> <p> <b>Note</b> This is the only time AWS IoT issues the
         * private key for this certificate, so it is important to keep it in a secure
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateKeysAndCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeysAndCertificateAsync(const Model::CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines an action that can be applied to audit findings by using
         * StartAuditMitigationActionsTask. Only certain types of mitigation actions can be
         * applied to specific check names. For more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-mitigation-actions.html">Mitigation
         * actions</a>. Each mitigation action can apply only one type of
         * change.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateMitigationAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMitigationActionOutcome CreateMitigationAction(const Model::CreateMitigationActionRequest& request) const;

        /**
         * <p>Defines an action that can be applied to audit findings by using
         * StartAuditMitigationActionsTask. Only certain types of mitigation actions can be
         * applied to specific check names. For more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-mitigation-actions.html">Mitigation
         * actions</a>. Each mitigation action can apply only one type of
         * change.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateMitigationAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMitigationActionOutcomeCallable CreateMitigationActionCallable(const Model::CreateMitigationActionRequest& request) const;

        /**
         * <p>Defines an action that can be applied to audit findings by using
         * StartAuditMitigationActionsTask. Only certain types of mitigation actions can be
         * applied to specific check names. For more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-mitigation-actions.html">Mitigation
         * actions</a>. Each mitigation action can apply only one type of
         * change.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateMitigationAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMitigationActionAsync(const Model::CreateMitigationActionRequest& request, const CreateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS IoT OTAUpdate on a target group of things or
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateOTAUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOTAUpdateOutcome CreateOTAUpdate(const Model::CreateOTAUpdateRequest& request) const;

        /**
         * <p>Creates an AWS IoT OTAUpdate on a target group of things or
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateOTAUpdate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOTAUpdateOutcomeCallable CreateOTAUpdateCallable(const Model::CreateOTAUpdateRequest& request) const;

        /**
         * <p>Creates an AWS IoT OTAUpdate on a target group of things or
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateOTAUpdate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOTAUpdateAsync(const Model::CreateOTAUpdateRequest& request, const CreateOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS IoT policy.</p> <p>The created policy is the default version
         * for the policy. This operation creates a policy version with a version
         * identifier of <b>1</b> and sets <b>1</b> as the policy's default
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates an AWS IoT policy.</p> <p>The created policy is the default version
         * for the policy. This operation creates a policy version with a version
         * identifier of <b>1</b> and sets <b>1</b> as the policy's default
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates an AWS IoT policy.</p> <p>The created policy is the default version
         * for the policy. This operation creates a policy version with a version
         * identifier of <b>1</b> and sets <b>1</b> as the policy's default
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the specified AWS IoT policy. To update a policy,
         * create a new policy version. A managed policy can have up to five versions. If
         * the policy has five versions, you must use <a>DeletePolicyVersion</a> to delete
         * an existing version before you create a new one.</p> <p>Optionally, you can set
         * the new version as the policy's default version. The default version is the
         * operative version (that is, the version that is in effect for the certificates
         * to which the policy is attached).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyVersionOutcome CreatePolicyVersion(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified AWS IoT policy. To update a policy,
         * create a new policy version. A managed policy can have up to five versions. If
         * the policy has five versions, you must use <a>DeletePolicyVersion</a> to delete
         * an existing version before you create a new one.</p> <p>Optionally, you can set
         * the new version as the policy's default version. The default version is the
         * operative version (that is, the version that is in effect for the certificates
         * to which the policy is attached).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicyVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyVersionOutcomeCallable CreatePolicyVersionCallable(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * <p>Creates a new version of the specified AWS IoT policy. To update a policy,
         * create a new policy version. A managed policy can have up to five versions. If
         * the policy has five versions, you must use <a>DeletePolicyVersion</a> to delete
         * an existing version before you create a new one.</p> <p>Optionally, you can set
         * the new version as the policy's default version. The default version is the
         * operative version (that is, the version that is in effect for the certificates
         * to which the policy is attached).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicyVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a provisioning claim.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningClaim">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningClaimOutcome CreateProvisioningClaim(const Model::CreateProvisioningClaimRequest& request) const;

        /**
         * <p>Creates a provisioning claim.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningClaim">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisioningClaimOutcomeCallable CreateProvisioningClaimCallable(const Model::CreateProvisioningClaimRequest& request) const;

        /**
         * <p>Creates a provisioning claim.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningClaim">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisioningClaimAsync(const Model::CreateProvisioningClaimRequest& request, const CreateProvisioningClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a fleet provisioning template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningTemplateOutcome CreateProvisioningTemplate(const Model::CreateProvisioningTemplateRequest& request) const;

        /**
         * <p>Creates a fleet provisioning template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisioningTemplateOutcomeCallable CreateProvisioningTemplateCallable(const Model::CreateProvisioningTemplateRequest& request) const;

        /**
         * <p>Creates a fleet provisioning template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisioningTemplateAsync(const Model::CreateProvisioningTemplateRequest& request, const CreateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of a fleet provisioning template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningTemplateVersionOutcome CreateProvisioningTemplateVersion(const Model::CreateProvisioningTemplateVersionRequest& request) const;

        /**
         * <p>Creates a new version of a fleet provisioning template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisioningTemplateVersionOutcomeCallable CreateProvisioningTemplateVersionCallable(const Model::CreateProvisioningTemplateVersionRequest& request) const;

        /**
         * <p>Creates a new version of a fleet provisioning template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisioningTemplateVersionAsync(const Model::CreateProvisioningTemplateVersionRequest& request, const CreateProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a role alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateRoleAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoleAliasOutcome CreateRoleAlias(const Model::CreateRoleAliasRequest& request) const;

        /**
         * <p>Creates a role alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateRoleAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoleAliasOutcomeCallable CreateRoleAliasCallable(const Model::CreateRoleAliasRequest& request) const;

        /**
         * <p>Creates a role alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateRoleAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoleAliasAsync(const Model::CreateRoleAliasRequest& request, const CreateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a scheduled audit that is run at a specified time
         * interval.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateScheduledAudit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduledAuditOutcome CreateScheduledAudit(const Model::CreateScheduledAuditRequest& request) const;

        /**
         * <p>Creates a scheduled audit that is run at a specified time
         * interval.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateScheduledAudit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScheduledAuditOutcomeCallable CreateScheduledAuditCallable(const Model::CreateScheduledAuditRequest& request) const;

        /**
         * <p>Creates a scheduled audit that is run at a specified time
         * interval.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateScheduledAudit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScheduledAuditAsync(const Model::CreateScheduledAuditRequest& request, const CreateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Device Defender security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityProfileOutcome CreateSecurityProfile(const Model::CreateSecurityProfileRequest& request) const;

        /**
         * <p>Creates a Device Defender security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateSecurityProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecurityProfileOutcomeCallable CreateSecurityProfileCallable(const Model::CreateSecurityProfileRequest& request) const;

        /**
         * <p>Creates a Device Defender security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateSecurityProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityProfileAsync(const Model::CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a stream for delivering one or more large files in chunks over MQTT.
         * A stream transports data bytes in chunks or blocks packaged as MQTT messages
         * from a source like S3. You can have one or more files associated with a
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamOutcome CreateStream(const Model::CreateStreamRequest& request) const;

        /**
         * <p>Creates a stream for delivering one or more large files in chunks over MQTT.
         * A stream transports data bytes in chunks or blocks packaged as MQTT messages
         * from a source like S3. You can have one or more files associated with a
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamOutcomeCallable CreateStreamCallable(const Model::CreateStreamRequest& request) const;

        /**
         * <p>Creates a stream for delivering one or more large files in chunks over MQTT.
         * A stream transports data bytes in chunks or blocks packaged as MQTT messages
         * from a source like S3. You can have one or more files associated with a
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamAsync(const Model::CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a thing record in the registry. If this call is made multiple times
         * using the same thing name and configuration, the call will succeed. If this call
         * is made with the same thing name but different configuration a
         * <code>ResourceAlreadyExistsException</code> is thrown.</p>  <p>This is a
         * control plane operation. See <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a>
         * for information about authorizing control plane actions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThing">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateThingOutcome CreateThing(const Model::CreateThingRequest& request) const;

        /**
         * <p>Creates a thing record in the registry. If this call is made multiple times
         * using the same thing name and configuration, the call will succeed. If this call
         * is made with the same thing name but different configuration a
         * <code>ResourceAlreadyExistsException</code> is thrown.</p>  <p>This is a
         * control plane operation. See <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a>
         * for information about authorizing control plane actions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThing">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThingOutcomeCallable CreateThingCallable(const Model::CreateThingRequest& request) const;

        /**
         * <p>Creates a thing record in the registry. If this call is made multiple times
         * using the same thing name and configuration, the call will succeed. If this call
         * is made with the same thing name but different configuration a
         * <code>ResourceAlreadyExistsException</code> is thrown.</p>  <p>This is a
         * control plane operation. See <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a>
         * for information about authorizing control plane actions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThing">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThingAsync(const Model::CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a thing group.</p>  <p>This is a control plane operation. See <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a>
         * for information about authorizing control plane actions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThingGroupOutcome CreateThingGroup(const Model::CreateThingGroupRequest& request) const;

        /**
         * <p>Create a thing group.</p>  <p>This is a control plane operation. See <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a>
         * for information about authorizing control plane actions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThingGroupOutcomeCallable CreateThingGroupCallable(const Model::CreateThingGroupRequest& request) const;

        /**
         * <p>Create a thing group.</p>  <p>This is a control plane operation. See <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a>
         * for information about authorizing control plane actions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThingGroupAsync(const Model::CreateThingGroupRequest& request, const CreateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new thing type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThingTypeOutcome CreateThingType(const Model::CreateThingTypeRequest& request) const;

        /**
         * <p>Creates a new thing type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThingTypeOutcomeCallable CreateThingTypeCallable(const Model::CreateThingTypeRequest& request) const;

        /**
         * <p>Creates a new thing type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThingTypeAsync(const Model::CreateThingTypeRequest& request, const CreateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a rule. Creating rules is an administrator-level action. Any user who
         * has permission to create rules will be able to access data processed by the
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTopicRuleOutcome CreateTopicRule(const Model::CreateTopicRuleRequest& request) const;

        /**
         * <p>Creates a rule. Creating rules is an administrator-level action. Any user who
         * has permission to create rules will be able to access data processed by the
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateTopicRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTopicRuleOutcomeCallable CreateTopicRuleCallable(const Model::CreateTopicRuleRequest& request) const;

        /**
         * <p>Creates a rule. Creating rules is an administrator-level action. Any user who
         * has permission to create rules will be able to access data processed by the
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateTopicRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTopicRuleAsync(const Model::CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a topic rule destination. The destination must be confirmed prior to
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTopicRuleDestinationOutcome CreateTopicRuleDestination(const Model::CreateTopicRuleDestinationRequest& request) const;

        /**
         * <p>Creates a topic rule destination. The destination must be confirmed prior to
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTopicRuleDestinationOutcomeCallable CreateTopicRuleDestinationCallable(const Model::CreateTopicRuleDestinationRequest& request) const;

        /**
         * <p>Creates a topic rule destination. The destination must be confirmed prior to
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTopicRuleDestinationAsync(const Model::CreateTopicRuleDestinationRequest& request, const CreateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores the default settings for Device Defender audits for this account.
         * Any configuration data you entered is deleted and all audit checks are reset to
         * disabled. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAccountAuditConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAuditConfigurationOutcome DeleteAccountAuditConfiguration(const Model::DeleteAccountAuditConfigurationRequest& request) const;

        /**
         * <p>Restores the default settings for Device Defender audits for this account.
         * Any configuration data you entered is deleted and all audit checks are reset to
         * disabled. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAccountAuditConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountAuditConfigurationOutcomeCallable DeleteAccountAuditConfigurationCallable(const Model::DeleteAccountAuditConfigurationRequest& request) const;

        /**
         * <p>Restores the default settings for Device Defender audits for this account.
         * Any configuration data you entered is deleted and all audit checks are reset to
         * disabled. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAccountAuditConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAuditConfigurationAsync(const Model::DeleteAccountAuditConfigurationRequest& request, const DeleteAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAuditSuppression">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuditSuppressionOutcome DeleteAuditSuppression(const Model::DeleteAuditSuppressionRequest& request) const;

        /**
         * <p> Deletes a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAuditSuppression">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAuditSuppressionOutcomeCallable DeleteAuditSuppressionCallable(const Model::DeleteAuditSuppressionRequest& request) const;

        /**
         * <p> Deletes a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAuditSuppression">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAuditSuppressionAsync(const Model::DeleteAuditSuppressionRequest& request, const DeleteAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuthorizerOutcome DeleteAuthorizer(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * <p>Deletes an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAuthorizerOutcomeCallable DeleteAuthorizerCallable(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * <p>Deletes an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAuthorizerAsync(const Model::DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBillingGroupOutcome DeleteBillingGroup(const Model::DeleteBillingGroupRequest& request) const;

        /**
         * <p>Deletes the billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteBillingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBillingGroupOutcomeCallable DeleteBillingGroupCallable(const Model::DeleteBillingGroupRequest& request) const;

        /**
         * <p>Deletes the billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteBillingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBillingGroupAsync(const Model::DeleteBillingGroupRequest& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a registered CA certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCACertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCACertificateOutcome DeleteCACertificate(const Model::DeleteCACertificateRequest& request) const;

        /**
         * <p>Deletes a registered CA certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCACertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCACertificateOutcomeCallable DeleteCACertificateCallable(const Model::DeleteCACertificateRequest& request) const;

        /**
         * <p>Deletes a registered CA certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCACertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCACertificateAsync(const Model::DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified certificate.</p> <p>A certificate cannot be deleted if
         * it has a policy or IoT thing attached to it or if its status is set to ACTIVE.
         * To delete a certificate, first use the <a>DetachPrincipalPolicy</a> API to
         * detach all policies. Next, use the <a>UpdateCertificate</a> API to set the
         * certificate to the INACTIVE status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * <p>Deletes the specified certificate.</p> <p>A certificate cannot be deleted if
         * it has a policy or IoT thing attached to it or if its status is set to ACTIVE.
         * To delete a certificate, first use the <a>DetachPrincipalPolicy</a> API to
         * detach all policies. Next, use the <a>UpdateCertificate</a> API to set the
         * certificate to the INACTIVE status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * <p>Deletes the specified certificate.</p> <p>A certificate cannot be deleted if
         * it has a policy or IoT thing attached to it or if its status is set to ACTIVE.
         * To delete a certificate, first use the <a>DetachPrincipalPolicy</a> API to
         * detach all policies. Next, use the <a>UpdateCertificate</a> API to set the
         * certificate to the INACTIVE status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified dimension from your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDimension">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDimensionOutcome DeleteDimension(const Model::DeleteDimensionRequest& request) const;

        /**
         * <p>Removes the specified dimension from your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDimension">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDimensionOutcomeCallable DeleteDimensionCallable(const Model::DeleteDimensionRequest& request) const;

        /**
         * <p>Removes the specified dimension from your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDimension">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDimensionAsync(const Model::DeleteDimensionRequest& request, const DeleteDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified domain configuration.</p>  <p>The domain
         * configuration feature is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDomainConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainConfigurationOutcome DeleteDomainConfiguration(const Model::DeleteDomainConfigurationRequest& request) const;

        /**
         * <p>Deletes the specified domain configuration.</p>  <p>The domain
         * configuration feature is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDomainConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainConfigurationOutcomeCallable DeleteDomainConfigurationCallable(const Model::DeleteDomainConfigurationRequest& request) const;

        /**
         * <p>Deletes the specified domain configuration.</p>  <p>The domain
         * configuration feature is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDomainConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainConfigurationAsync(const Model::DeleteDomainConfigurationRequest& request, const DeleteDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dynamic thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDynamicThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDynamicThingGroupOutcome DeleteDynamicThingGroup(const Model::DeleteDynamicThingGroupRequest& request) const;

        /**
         * <p>Deletes a dynamic thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDynamicThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDynamicThingGroupOutcomeCallable DeleteDynamicThingGroupCallable(const Model::DeleteDynamicThingGroupRequest& request) const;

        /**
         * <p>Deletes a dynamic thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDynamicThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDynamicThingGroupAsync(const Model::DeleteDynamicThingGroupRequest& request, const DeleteDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a job and its related job executions.</p> <p>Deleting a job may take
         * time, depending on the number of job executions created for the job and various
         * other factors. While the job is being deleted, the status of the job will be
         * shown as "DELETION_IN_PROGRESS". Attempting to delete or cancel a job whose
         * status is already "DELETION_IN_PROGRESS" will result in an error.</p> <p>Only 10
         * jobs may have status "DELETION_IN_PROGRESS" at the same time, or a
         * LimitExceededException will occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * <p>Deletes a job and its related job executions.</p> <p>Deleting a job may take
         * time, depending on the number of job executions created for the job and various
         * other factors. While the job is being deleted, the status of the job will be
         * shown as "DELETION_IN_PROGRESS". Attempting to delete or cancel a job whose
         * status is already "DELETION_IN_PROGRESS" will result in an error.</p> <p>Only 10
         * jobs may have status "DELETION_IN_PROGRESS" at the same time, or a
         * LimitExceededException will occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request) const;

        /**
         * <p>Deletes a job and its related job executions.</p> <p>Deleting a job may take
         * time, depending on the number of job executions created for the job and various
         * other factors. While the job is being deleted, the status of the job will be
         * shown as "DELETION_IN_PROGRESS". Attempting to delete or cancel a job whose
         * status is already "DELETION_IN_PROGRESS" will result in an error.</p> <p>Only 10
         * jobs may have status "DELETION_IN_PROGRESS" at the same time, or a
         * LimitExceededException will occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a job execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobExecutionOutcome DeleteJobExecution(const Model::DeleteJobExecutionRequest& request) const;

        /**
         * <p>Deletes a job execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJobExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobExecutionOutcomeCallable DeleteJobExecutionCallable(const Model::DeleteJobExecutionRequest& request) const;

        /**
         * <p>Deletes a job execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJobExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobExecutionAsync(const Model::DeleteJobExecutionRequest& request, const DeleteJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a defined mitigation action from your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteMitigationAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMitigationActionOutcome DeleteMitigationAction(const Model::DeleteMitigationActionRequest& request) const;

        /**
         * <p>Deletes a defined mitigation action from your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteMitigationAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMitigationActionOutcomeCallable DeleteMitigationActionCallable(const Model::DeleteMitigationActionRequest& request) const;

        /**
         * <p>Deletes a defined mitigation action from your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteMitigationAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMitigationActionAsync(const Model::DeleteMitigationActionRequest& request, const DeleteMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an OTA update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteOTAUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOTAUpdateOutcome DeleteOTAUpdate(const Model::DeleteOTAUpdateRequest& request) const;

        /**
         * <p>Delete an OTA update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteOTAUpdate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOTAUpdateOutcomeCallable DeleteOTAUpdateCallable(const Model::DeleteOTAUpdateRequest& request) const;

        /**
         * <p>Delete an OTA update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteOTAUpdate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOTAUpdateAsync(const Model::DeleteOTAUpdateRequest& request, const DeleteOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified policy.</p> <p>A policy cannot be deleted if it has
         * non-default versions or it is attached to any certificate.</p> <p>To delete a
         * policy, use the DeletePolicyVersion API to delete all non-default versions of
         * the policy; use the DetachPrincipalPolicy API to detach the policy from any
         * certificate; and then use the DeletePolicy API to delete the policy.</p> <p>When
         * a policy is deleted using DeletePolicy, its default version is deleted with
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified policy.</p> <p>A policy cannot be deleted if it has
         * non-default versions or it is attached to any certificate.</p> <p>To delete a
         * policy, use the DeletePolicyVersion API to delete all non-default versions of
         * the policy; use the DetachPrincipalPolicy API to detach the policy from any
         * certificate; and then use the DeletePolicy API to delete the policy.</p> <p>When
         * a policy is deleted using DeletePolicy, its default version is deleted with
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified policy.</p> <p>A policy cannot be deleted if it has
         * non-default versions or it is attached to any certificate.</p> <p>To delete a
         * policy, use the DeletePolicyVersion API to delete all non-default versions of
         * the policy; use the DetachPrincipalPolicy API to detach the policy from any
         * certificate; and then use the DeletePolicy API to delete the policy.</p> <p>When
         * a policy is deleted using DeletePolicy, its default version is deleted with
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified version of the specified policy. You cannot delete the
         * default version of a policy using this API. To delete the default version of a
         * policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked
         * as the default version, use ListPolicyVersions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyVersionOutcome DeletePolicyVersion(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * <p>Deletes the specified version of the specified policy. You cannot delete the
         * default version of a policy using this API. To delete the default version of a
         * policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked
         * as the default version, use ListPolicyVersions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePolicyVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyVersionOutcomeCallable DeletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * <p>Deletes the specified version of the specified policy. You cannot delete the
         * default version of a policy using this API. To delete the default version of a
         * policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked
         * as the default version, use ListPolicyVersions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePolicyVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a fleet provisioning template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteProvisioningTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisioningTemplateOutcome DeleteProvisioningTemplate(const Model::DeleteProvisioningTemplateRequest& request) const;

        /**
         * <p>Deletes a fleet provisioning template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteProvisioningTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisioningTemplateOutcomeCallable DeleteProvisioningTemplateCallable(const Model::DeleteProvisioningTemplateRequest& request) const;

        /**
         * <p>Deletes a fleet provisioning template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteProvisioningTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisioningTemplateAsync(const Model::DeleteProvisioningTemplateRequest& request, const DeleteProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a fleet provisioning template version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisioningTemplateVersionOutcome DeleteProvisioningTemplateVersion(const Model::DeleteProvisioningTemplateVersionRequest& request) const;

        /**
         * <p>Deletes a fleet provisioning template version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisioningTemplateVersionOutcomeCallable DeleteProvisioningTemplateVersionCallable(const Model::DeleteProvisioningTemplateVersionRequest& request) const;

        /**
         * <p>Deletes a fleet provisioning template version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisioningTemplateVersionAsync(const Model::DeleteProvisioningTemplateVersionRequest& request, const DeleteProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a CA certificate registration code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteRegistrationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistrationCodeOutcome DeleteRegistrationCode(const Model::DeleteRegistrationCodeRequest& request) const;

        /**
         * <p>Deletes a CA certificate registration code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteRegistrationCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegistrationCodeOutcomeCallable DeleteRegistrationCodeCallable(const Model::DeleteRegistrationCodeRequest& request) const;

        /**
         * <p>Deletes a CA certificate registration code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteRegistrationCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegistrationCodeAsync(const Model::DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a role alias</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteRoleAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoleAliasOutcome DeleteRoleAlias(const Model::DeleteRoleAliasRequest& request) const;

        /**
         * <p>Deletes a role alias</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteRoleAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoleAliasOutcomeCallable DeleteRoleAliasCallable(const Model::DeleteRoleAliasRequest& request) const;

        /**
         * <p>Deletes a role alias</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteRoleAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoleAliasAsync(const Model::DeleteRoleAliasRequest& request, const DeleteRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a scheduled audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteScheduledAudit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledAuditOutcome DeleteScheduledAudit(const Model::DeleteScheduledAuditRequest& request) const;

        /**
         * <p>Deletes a scheduled audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteScheduledAudit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduledAuditOutcomeCallable DeleteScheduledAuditCallable(const Model::DeleteScheduledAuditRequest& request) const;

        /**
         * <p>Deletes a scheduled audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteScheduledAudit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduledAuditAsync(const Model::DeleteScheduledAuditRequest& request, const DeleteScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Device Defender security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityProfileOutcome DeleteSecurityProfile(const Model::DeleteSecurityProfileRequest& request) const;

        /**
         * <p>Deletes a Device Defender security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteSecurityProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityProfileOutcomeCallable DeleteSecurityProfileCallable(const Model::DeleteSecurityProfileRequest& request) const;

        /**
         * <p>Deletes a Device Defender security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteSecurityProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityProfileAsync(const Model::DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamOutcome DeleteStream(const Model::DeleteStreamRequest& request) const;

        /**
         * <p>Deletes a stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamOutcomeCallable DeleteStreamCallable(const Model::DeleteStreamRequest& request) const;

        /**
         * <p>Deletes a stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamAsync(const Model::DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified thing. Returns successfully with no error if the
         * deletion is successful or you specify a thing that doesn't exist.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThing">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteThingOutcome DeleteThing(const Model::DeleteThingRequest& request) const;

        /**
         * <p>Deletes the specified thing. Returns successfully with no error if the
         * deletion is successful or you specify a thing that doesn't exist.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThing">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThingOutcomeCallable DeleteThingCallable(const Model::DeleteThingRequest& request) const;

        /**
         * <p>Deletes the specified thing. Returns successfully with no error if the
         * deletion is successful or you specify a thing that doesn't exist.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThing">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThingAsync(const Model::DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThingGroupOutcome DeleteThingGroup(const Model::DeleteThingGroupRequest& request) const;

        /**
         * <p>Deletes a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThingGroupOutcomeCallable DeleteThingGroupCallable(const Model::DeleteThingGroupRequest& request) const;

        /**
         * <p>Deletes a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThingGroupAsync(const Model::DeleteThingGroupRequest& request, const DeleteThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified thing type. You cannot delete a thing type if it has
         * things associated with it. To delete a thing type, first mark it as deprecated
         * by calling <a>DeprecateThingType</a>, then remove any associated things by
         * calling <a>UpdateThing</a> to change the thing type on any associated thing, and
         * finally use <a>DeleteThingType</a> to delete the thing type.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThingType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThingTypeOutcome DeleteThingType(const Model::DeleteThingTypeRequest& request) const;

        /**
         * <p>Deletes the specified thing type. You cannot delete a thing type if it has
         * things associated with it. To delete a thing type, first mark it as deprecated
         * by calling <a>DeprecateThingType</a>, then remove any associated things by
         * calling <a>UpdateThing</a> to change the thing type on any associated thing, and
         * finally use <a>DeleteThingType</a> to delete the thing type.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThingType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThingTypeOutcomeCallable DeleteThingTypeCallable(const Model::DeleteThingTypeRequest& request) const;

        /**
         * <p>Deletes the specified thing type. You cannot delete a thing type if it has
         * things associated with it. To delete a thing type, first mark it as deprecated
         * by calling <a>DeprecateThingType</a>, then remove any associated things by
         * calling <a>UpdateThing</a> to change the thing type on any associated thing, and
         * finally use <a>DeleteThingType</a> to delete the thing type.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThingType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThingTypeAsync(const Model::DeleteThingTypeRequest& request, const DeleteThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTopicRuleOutcome DeleteTopicRule(const Model::DeleteTopicRuleRequest& request) const;

        /**
         * <p>Deletes the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteTopicRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTopicRuleOutcomeCallable DeleteTopicRuleCallable(const Model::DeleteTopicRuleRequest& request) const;

        /**
         * <p>Deletes the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteTopicRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTopicRuleAsync(const Model::DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a topic rule destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTopicRuleDestinationOutcome DeleteTopicRuleDestination(const Model::DeleteTopicRuleDestinationRequest& request) const;

        /**
         * <p>Deletes a topic rule destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTopicRuleDestinationOutcomeCallable DeleteTopicRuleDestinationCallable(const Model::DeleteTopicRuleDestinationRequest& request) const;

        /**
         * <p>Deletes a topic rule destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTopicRuleDestinationAsync(const Model::DeleteTopicRuleDestinationRequest& request, const DeleteTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a logging level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteV2LoggingLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteV2LoggingLevelOutcome DeleteV2LoggingLevel(const Model::DeleteV2LoggingLevelRequest& request) const;

        /**
         * <p>Deletes a logging level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteV2LoggingLevel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteV2LoggingLevelOutcomeCallable DeleteV2LoggingLevelCallable(const Model::DeleteV2LoggingLevelRequest& request) const;

        /**
         * <p>Deletes a logging level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteV2LoggingLevel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteV2LoggingLevelAsync(const Model::DeleteV2LoggingLevelRequest& request, const DeleteV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecates a thing type. You can not associate new things with deprecated
         * thing type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeprecateThingType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateThingTypeOutcome DeprecateThingType(const Model::DeprecateThingTypeRequest& request) const;

        /**
         * <p>Deprecates a thing type. You can not associate new things with deprecated
         * thing type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeprecateThingType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprecateThingTypeOutcomeCallable DeprecateThingTypeCallable(const Model::DeprecateThingTypeRequest& request) const;

        /**
         * <p>Deprecates a thing type. You can not associate new things with deprecated
         * thing type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeprecateThingType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprecateThingTypeAsync(const Model::DeprecateThingTypeRequest& request, const DeprecateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the Device Defender audit settings for this account.
         * Settings include how audit notifications are sent and which audit checks are
         * enabled or disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAccountAuditConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAuditConfigurationOutcome DescribeAccountAuditConfiguration(const Model::DescribeAccountAuditConfigurationRequest& request) const;

        /**
         * <p>Gets information about the Device Defender audit settings for this account.
         * Settings include how audit notifications are sent and which audit checks are
         * enabled or disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAccountAuditConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAuditConfigurationOutcomeCallable DescribeAccountAuditConfigurationCallable(const Model::DescribeAccountAuditConfigurationRequest& request) const;

        /**
         * <p>Gets information about the Device Defender audit settings for this account.
         * Settings include how audit notifications are sent and which audit checks are
         * enabled or disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAccountAuditConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAuditConfigurationAsync(const Model::DescribeAccountAuditConfigurationRequest& request, const DescribeAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a single audit finding. Properties include the reason
         * for noncompliance, the severity of the issue, and when the audit that returned
         * the finding was started.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditFinding">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuditFindingOutcome DescribeAuditFinding(const Model::DescribeAuditFindingRequest& request) const;

        /**
         * <p>Gets information about a single audit finding. Properties include the reason
         * for noncompliance, the severity of the issue, and when the audit that returned
         * the finding was started.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditFinding">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuditFindingOutcomeCallable DescribeAuditFindingCallable(const Model::DescribeAuditFindingRequest& request) const;

        /**
         * <p>Gets information about a single audit finding. Properties include the reason
         * for noncompliance, the severity of the issue, and when the audit that returned
         * the finding was started.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditFinding">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuditFindingAsync(const Model::DescribeAuditFindingRequest& request, const DescribeAuditFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an audit mitigation task that is used to apply
         * mitigation actions to a set of audit findings. Properties include the actions
         * being applied, the audit checks to which they're being applied, the task status,
         * and aggregated task statistics.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuditMitigationActionsTaskOutcome DescribeAuditMitigationActionsTask(const Model::DescribeAuditMitigationActionsTaskRequest& request) const;

        /**
         * <p>Gets information about an audit mitigation task that is used to apply
         * mitigation actions to a set of audit findings. Properties include the actions
         * being applied, the audit checks to which they're being applied, the task status,
         * and aggregated task statistics.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuditMitigationActionsTaskOutcomeCallable DescribeAuditMitigationActionsTaskCallable(const Model::DescribeAuditMitigationActionsTaskRequest& request) const;

        /**
         * <p>Gets information about an audit mitigation task that is used to apply
         * mitigation actions to a set of audit findings. Properties include the actions
         * being applied, the audit checks to which they're being applied, the task status,
         * and aggregated task statistics.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuditMitigationActionsTaskAsync(const Model::DescribeAuditMitigationActionsTaskRequest& request, const DescribeAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets information about a Device Defender audit suppression. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditSuppression">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuditSuppressionOutcome DescribeAuditSuppression(const Model::DescribeAuditSuppressionRequest& request) const;

        /**
         * <p> Gets information about a Device Defender audit suppression. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditSuppression">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuditSuppressionOutcomeCallable DescribeAuditSuppressionCallable(const Model::DescribeAuditSuppressionRequest& request) const;

        /**
         * <p> Gets information about a Device Defender audit suppression. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditSuppression">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuditSuppressionAsync(const Model::DescribeAuditSuppressionRequest& request, const DescribeAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Device Defender audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuditTaskOutcome DescribeAuditTask(const Model::DescribeAuditTaskRequest& request) const;

        /**
         * <p>Gets information about a Device Defender audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuditTaskOutcomeCallable DescribeAuditTaskCallable(const Model::DescribeAuditTaskRequest& request) const;

        /**
         * <p>Gets information about a Device Defender audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuditTaskAsync(const Model::DescribeAuditTaskRequest& request, const DescribeAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuthorizerOutcome DescribeAuthorizer(const Model::DescribeAuthorizerRequest& request) const;

        /**
         * <p>Describes an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuthorizerOutcomeCallable DescribeAuthorizerCallable(const Model::DescribeAuthorizerRequest& request) const;

        /**
         * <p>Describes an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuthorizerAsync(const Model::DescribeAuthorizerRequest& request, const DescribeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBillingGroupOutcome DescribeBillingGroup(const Model::DescribeBillingGroupRequest& request) const;

        /**
         * <p>Returns information about a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeBillingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBillingGroupOutcomeCallable DescribeBillingGroupCallable(const Model::DescribeBillingGroupRequest& request) const;

        /**
         * <p>Returns information about a billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeBillingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBillingGroupAsync(const Model::DescribeBillingGroupRequest& request, const DescribeBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a registered CA certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCACertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCACertificateOutcome DescribeCACertificate(const Model::DescribeCACertificateRequest& request) const;

        /**
         * <p>Describes a registered CA certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCACertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCACertificateOutcomeCallable DescribeCACertificateCallable(const Model::DescribeCACertificateRequest& request) const;

        /**
         * <p>Describes a registered CA certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCACertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCACertificateAsync(const Model::DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest& request) const;

        /**
         * <p>Gets information about the specified certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request) const;

        /**
         * <p>Gets information about the specified certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the default authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDefaultAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDefaultAuthorizerOutcome DescribeDefaultAuthorizer(const Model::DescribeDefaultAuthorizerRequest& request) const;

        /**
         * <p>Describes the default authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDefaultAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDefaultAuthorizerOutcomeCallable DescribeDefaultAuthorizerCallable(const Model::DescribeDefaultAuthorizerRequest& request) const;

        /**
         * <p>Describes the default authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDefaultAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDefaultAuthorizerAsync(const Model::DescribeDefaultAuthorizerRequest& request, const DescribeDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about a dimension that is defined in your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDimension">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDimensionOutcome DescribeDimension(const Model::DescribeDimensionRequest& request) const;

        /**
         * <p>Provides details about a dimension that is defined in your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDimension">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDimensionOutcomeCallable DescribeDimensionCallable(const Model::DescribeDimensionRequest& request) const;

        /**
         * <p>Provides details about a dimension that is defined in your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDimension">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDimensionAsync(const Model::DescribeDimensionRequest& request, const DescribeDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about a domain configuration.</p>  <p>The
         * domain configuration feature is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDomainConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainConfigurationOutcome DescribeDomainConfiguration(const Model::DescribeDomainConfigurationRequest& request) const;

        /**
         * <p>Gets summary information about a domain configuration.</p>  <p>The
         * domain configuration feature is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDomainConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainConfigurationOutcomeCallable DescribeDomainConfigurationCallable(const Model::DescribeDomainConfigurationRequest& request) const;

        /**
         * <p>Gets summary information about a domain configuration.</p>  <p>The
         * domain configuration feature is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDomainConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainConfigurationAsync(const Model::DescribeDomainConfigurationRequest& request, const DescribeDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a unique endpoint specific to the AWS account making the
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Returns a unique endpoint specific to the AWS account making the
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Returns a unique endpoint specific to the AWS account making the
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointAsync(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes event configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEventConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventConfigurationsOutcome DescribeEventConfigurations(const Model::DescribeEventConfigurationsRequest& request) const;

        /**
         * <p>Describes event configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEventConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventConfigurationsOutcomeCallable DescribeEventConfigurationsCallable(const Model::DescribeEventConfigurationsRequest& request) const;

        /**
         * <p>Describes event configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEventConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventConfigurationsAsync(const Model::DescribeEventConfigurationsRequest& request, const DescribeEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a search index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIndexOutcome DescribeIndex(const Model::DescribeIndexRequest& request) const;

        /**
         * <p>Describes a search index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIndexOutcomeCallable DescribeIndexCallable(const Model::DescribeIndexRequest& request) const;

        /**
         * <p>Describes a search index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIndexAsync(const Model::DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Describes a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Describes a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a job execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobExecutionOutcome DescribeJobExecution(const Model::DescribeJobExecutionRequest& request) const;

        /**
         * <p>Describes a job execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJobExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobExecutionOutcomeCallable DescribeJobExecutionCallable(const Model::DescribeJobExecutionRequest& request) const;

        /**
         * <p>Describes a job execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJobExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobExecutionAsync(const Model::DescribeJobExecutionRequest& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a mitigation action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeMitigationAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMitigationActionOutcome DescribeMitigationAction(const Model::DescribeMitigationActionRequest& request) const;

        /**
         * <p>Gets information about a mitigation action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeMitigationAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMitigationActionOutcomeCallable DescribeMitigationActionCallable(const Model::DescribeMitigationActionRequest& request) const;

        /**
         * <p>Gets information about a mitigation action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeMitigationAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMitigationActionAsync(const Model::DescribeMitigationActionRequest& request, const DescribeMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a fleet provisioning template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeProvisioningTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisioningTemplateOutcome DescribeProvisioningTemplate(const Model::DescribeProvisioningTemplateRequest& request) const;

        /**
         * <p>Returns information about a fleet provisioning template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeProvisioningTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningTemplateOutcomeCallable DescribeProvisioningTemplateCallable(const Model::DescribeProvisioningTemplateRequest& request) const;

        /**
         * <p>Returns information about a fleet provisioning template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeProvisioningTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningTemplateAsync(const Model::DescribeProvisioningTemplateRequest& request, const DescribeProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a fleet provisioning template
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisioningTemplateVersionOutcome DescribeProvisioningTemplateVersion(const Model::DescribeProvisioningTemplateVersionRequest& request) const;

        /**
         * <p>Returns information about a fleet provisioning template
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningTemplateVersionOutcomeCallable DescribeProvisioningTemplateVersionCallable(const Model::DescribeProvisioningTemplateVersionRequest& request) const;

        /**
         * <p>Returns information about a fleet provisioning template
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningTemplateVersionAsync(const Model::DescribeProvisioningTemplateVersionRequest& request, const DescribeProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a role alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeRoleAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRoleAliasOutcome DescribeRoleAlias(const Model::DescribeRoleAliasRequest& request) const;

        /**
         * <p>Describes a role alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeRoleAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRoleAliasOutcomeCallable DescribeRoleAliasCallable(const Model::DescribeRoleAliasRequest& request) const;

        /**
         * <p>Describes a role alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeRoleAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRoleAliasAsync(const Model::DescribeRoleAliasRequest& request, const DescribeRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a scheduled audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeScheduledAudit">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledAuditOutcome DescribeScheduledAudit(const Model::DescribeScheduledAuditRequest& request) const;

        /**
         * <p>Gets information about a scheduled audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeScheduledAudit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledAuditOutcomeCallable DescribeScheduledAuditCallable(const Model::DescribeScheduledAuditRequest& request) const;

        /**
         * <p>Gets information about a scheduled audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeScheduledAudit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledAuditAsync(const Model::DescribeScheduledAuditRequest& request, const DescribeScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Device Defender security profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityProfileOutcome DescribeSecurityProfile(const Model::DescribeSecurityProfileRequest& request) const;

        /**
         * <p>Gets information about a Device Defender security profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeSecurityProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityProfileOutcomeCallable DescribeSecurityProfileCallable(const Model::DescribeSecurityProfileRequest& request) const;

        /**
         * <p>Gets information about a Device Defender security profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeSecurityProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityProfileAsync(const Model::DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamOutcome DescribeStream(const Model::DescribeStreamRequest& request) const;

        /**
         * <p>Gets information about a stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStreamOutcomeCallable DescribeStreamCallable(const Model::DescribeStreamRequest& request) const;

        /**
         * <p>Gets information about a stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStreamAsync(const Model::DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThing">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThingOutcome DescribeThing(const Model::DescribeThingRequest& request) const;

        /**
         * <p>Gets information about the specified thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingOutcomeCallable DescribeThingCallable(const Model::DescribeThingRequest& request) const;

        /**
         * <p>Gets information about the specified thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingAsync(const Model::DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThingGroupOutcome DescribeThingGroup(const Model::DescribeThingGroupRequest& request) const;

        /**
         * <p>Describe a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingGroupOutcomeCallable DescribeThingGroupCallable(const Model::DescribeThingGroupRequest& request) const;

        /**
         * <p>Describe a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingGroupAsync(const Model::DescribeThingGroupRequest& request, const DescribeThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a bulk thing provisioning task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingRegistrationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThingRegistrationTaskOutcome DescribeThingRegistrationTask(const Model::DescribeThingRegistrationTaskRequest& request) const;

        /**
         * <p>Describes a bulk thing provisioning task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingRegistrationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingRegistrationTaskOutcomeCallable DescribeThingRegistrationTaskCallable(const Model::DescribeThingRegistrationTaskRequest& request) const;

        /**
         * <p>Describes a bulk thing provisioning task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingRegistrationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingRegistrationTaskAsync(const Model::DescribeThingRegistrationTaskRequest& request, const DescribeThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified thing type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThingTypeOutcome DescribeThingType(const Model::DescribeThingTypeRequest& request) const;

        /**
         * <p>Gets information about the specified thing type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingTypeOutcomeCallable DescribeThingTypeCallable(const Model::DescribeThingTypeRequest& request) const;

        /**
         * <p>Gets information about the specified thing type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingTypeAsync(const Model::DescribeThingTypeRequest& request, const DescribeThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a policy from the specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest& request) const;

        /**
         * <p>Detaches a policy from the specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachPolicyOutcomeCallable DetachPolicyCallable(const Model::DetachPolicyRequest& request) const;

        /**
         * <p>Detaches a policy from the specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachPolicyAsync(const Model::DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a Device Defender security profile from a thing group or from
         * this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachSecurityProfileOutcome DetachSecurityProfile(const Model::DetachSecurityProfileRequest& request) const;

        /**
         * <p>Disassociates a Device Defender security profile from a thing group or from
         * this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachSecurityProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachSecurityProfileOutcomeCallable DetachSecurityProfileCallable(const Model::DetachSecurityProfileRequest& request) const;

        /**
         * <p>Disassociates a Device Defender security profile from a thing group or from
         * this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachSecurityProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachSecurityProfileAsync(const Model::DetachSecurityProfileRequest& request, const DetachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches the specified principal from the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p>  <p>This call is asynchronous. It might take
         * several seconds for the detachment to propagate.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachThingPrincipal">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachThingPrincipalOutcome DetachThingPrincipal(const Model::DetachThingPrincipalRequest& request) const;

        /**
         * <p>Detaches the specified principal from the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p>  <p>This call is asynchronous. It might take
         * several seconds for the detachment to propagate.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachThingPrincipal">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachThingPrincipalOutcomeCallable DetachThingPrincipalCallable(const Model::DetachThingPrincipalRequest& request) const;

        /**
         * <p>Detaches the specified principal from the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p>  <p>This call is asynchronous. It might take
         * several seconds for the detachment to propagate.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachThingPrincipal">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachThingPrincipalAsync(const Model::DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DisableTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableTopicRuleOutcome DisableTopicRule(const Model::DisableTopicRuleRequest& request) const;

        /**
         * <p>Disables the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DisableTopicRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableTopicRuleOutcomeCallable DisableTopicRuleCallable(const Model::DisableTopicRuleRequest& request) const;

        /**
         * <p>Disables the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DisableTopicRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableTopicRuleAsync(const Model::DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/EnableTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableTopicRuleOutcome EnableTopicRule(const Model::EnableTopicRuleRequest& request) const;

        /**
         * <p>Enables the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/EnableTopicRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableTopicRuleOutcomeCallable EnableTopicRuleCallable(const Model::EnableTopicRuleRequest& request) const;

        /**
         * <p>Enables the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/EnableTopicRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableTopicRuleAsync(const Model::EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the approximate count of unique values that match the
         * query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetCardinality">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCardinalityOutcome GetCardinality(const Model::GetCardinalityRequest& request) const;

        /**
         * <p>Returns the approximate count of unique values that match the
         * query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetCardinality">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCardinalityOutcomeCallable GetCardinalityCallable(const Model::GetCardinalityRequest& request) const;

        /**
         * <p>Returns the approximate count of unique values that match the
         * query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetCardinality">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCardinalityAsync(const Model::GetCardinalityRequest& request, const GetCardinalityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the policies that have an effect on the authorization behavior
         * of the specified device when it connects to the AWS IoT device
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetEffectivePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEffectivePoliciesOutcome GetEffectivePolicies(const Model::GetEffectivePoliciesRequest& request) const;

        /**
         * <p>Gets a list of the policies that have an effect on the authorization behavior
         * of the specified device when it connects to the AWS IoT device
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetEffectivePolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEffectivePoliciesOutcomeCallable GetEffectivePoliciesCallable(const Model::GetEffectivePoliciesRequest& request) const;

        /**
         * <p>Gets a list of the policies that have an effect on the authorization behavior
         * of the specified device when it connects to the AWS IoT device
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetEffectivePolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEffectivePoliciesAsync(const Model::GetEffectivePoliciesRequest& request, const GetEffectivePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the indexing configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetIndexingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIndexingConfigurationOutcome GetIndexingConfiguration(const Model::GetIndexingConfigurationRequest& request) const;

        /**
         * <p>Gets the indexing configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetIndexingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIndexingConfigurationOutcomeCallable GetIndexingConfigurationCallable(const Model::GetIndexingConfigurationRequest& request) const;

        /**
         * <p>Gets the indexing configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetIndexingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIndexingConfigurationAsync(const Model::GetIndexingConfigurationRequest& request, const GetIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a job document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetJobDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobDocumentOutcome GetJobDocument(const Model::GetJobDocumentRequest& request) const;

        /**
         * <p>Gets a job document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetJobDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobDocumentOutcomeCallable GetJobDocumentCallable(const Model::GetJobDocumentRequest& request) const;

        /**
         * <p>Gets a job document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetJobDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobDocumentAsync(const Model::GetJobDocumentRequest& request, const GetJobDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the logging options.</p> <p>NOTE: use of this command is not
         * recommended. Use <code>GetV2LoggingOptions</code> instead.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggingOptionsOutcome GetLoggingOptions(const Model::GetLoggingOptionsRequest& request) const;

        /**
         * <p>Gets the logging options.</p> <p>NOTE: use of this command is not
         * recommended. Use <code>GetV2LoggingOptions</code> instead.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetLoggingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggingOptionsOutcomeCallable GetLoggingOptionsCallable(const Model::GetLoggingOptionsRequest& request) const;

        /**
         * <p>Gets the logging options.</p> <p>NOTE: use of this command is not
         * recommended. Use <code>GetV2LoggingOptions</code> instead.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetLoggingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggingOptionsAsync(const Model::GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an OTA update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetOTAUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOTAUpdateOutcome GetOTAUpdate(const Model::GetOTAUpdateRequest& request) const;

        /**
         * <p>Gets an OTA update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetOTAUpdate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOTAUpdateOutcomeCallable GetOTAUpdateCallable(const Model::GetOTAUpdateRequest& request) const;

        /**
         * <p>Gets an OTA update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetOTAUpdate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOTAUpdateAsync(const Model::GetOTAUpdateRequest& request, const GetOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Groups the aggregated values that match the query into percentile groupings.
         * The default percentile groupings are: 1,5,25,50,75,95,99, although you can
         * specify your own when you call <code>GetPercentiles</code>. This function
         * returns a value for each percentile group specified (or the default percentile
         * groupings). The percentile group "1" contains the aggregated field value that
         * occurs in approximately one percent of the values that match the query. The
         * percentile group "5" contains the aggregated field value that occurs in
         * approximately five percent of the values that match the query, and so on. The
         * result is an approximation, the more values that match the query, the more
         * accurate the percentile values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPercentiles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPercentilesOutcome GetPercentiles(const Model::GetPercentilesRequest& request) const;

        /**
         * <p>Groups the aggregated values that match the query into percentile groupings.
         * The default percentile groupings are: 1,5,25,50,75,95,99, although you can
         * specify your own when you call <code>GetPercentiles</code>. This function
         * returns a value for each percentile group specified (or the default percentile
         * groupings). The percentile group "1" contains the aggregated field value that
         * occurs in approximately one percent of the values that match the query. The
         * percentile group "5" contains the aggregated field value that occurs in
         * approximately five percent of the values that match the query, and so on. The
         * result is an approximation, the more values that match the query, the more
         * accurate the percentile values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPercentiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPercentilesOutcomeCallable GetPercentilesCallable(const Model::GetPercentilesRequest& request) const;

        /**
         * <p>Groups the aggregated values that match the query into percentile groupings.
         * The default percentile groupings are: 1,5,25,50,75,95,99, although you can
         * specify your own when you call <code>GetPercentiles</code>. This function
         * returns a value for each percentile group specified (or the default percentile
         * groupings). The percentile group "1" contains the aggregated field value that
         * occurs in approximately one percent of the values that match the query. The
         * percentile group "5" contains the aggregated field value that occurs in
         * approximately five percent of the values that match the query, and so on. The
         * result is an approximation, the more values that match the query, the more
         * accurate the percentile values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPercentiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPercentilesAsync(const Model::GetPercentilesRequest& request, const GetPercentilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified policy with the policy document of the
         * default version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Gets information about the specified policy with the policy document of the
         * default version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicy">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Gets information about the specified policy with the policy document of the
         * default version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicy">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified policy version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyVersionOutcome GetPolicyVersion(const Model::GetPolicyVersionRequest& request) const;

        /**
         * <p>Gets information about the specified policy version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicyVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const Model::GetPolicyVersionRequest& request) const;

        /**
         * <p>Gets information about the specified policy version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicyVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a registration code used to register a CA certificate with AWS
         * IoT.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetRegistrationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistrationCodeOutcome GetRegistrationCode(const Model::GetRegistrationCodeRequest& request) const;

        /**
         * <p>Gets a registration code used to register a CA certificate with AWS
         * IoT.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetRegistrationCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegistrationCodeOutcomeCallable GetRegistrationCodeCallable(const Model::GetRegistrationCodeRequest& request) const;

        /**
         * <p>Gets a registration code used to register a CA certificate with AWS
         * IoT.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetRegistrationCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegistrationCodeAsync(const Model::GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the count, average, sum, minimum, maximum, sum of squares, variance,
         * and standard deviation for the specified aggregated field. If the aggregation
         * field is of type <code>String</code>, only the count statistic is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatisticsOutcome GetStatistics(const Model::GetStatisticsRequest& request) const;

        /**
         * <p>Returns the count, average, sum, minimum, maximum, sum of squares, variance,
         * and standard deviation for the specified aggregated field. If the aggregation
         * field is of type <code>String</code>, only the count statistic is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStatisticsOutcomeCallable GetStatisticsCallable(const Model::GetStatisticsRequest& request) const;

        /**
         * <p>Returns the count, average, sum, minimum, maximum, sum of squares, variance,
         * and standard deviation for the specified aggregated field. If the aggregation
         * field is of type <code>String</code>, only the count statistic is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStatisticsAsync(const Model::GetStatisticsRequest& request, const GetStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTopicRuleOutcome GetTopicRule(const Model::GetTopicRuleRequest& request) const;

        /**
         * <p>Gets information about the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetTopicRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTopicRuleOutcomeCallable GetTopicRuleCallable(const Model::GetTopicRuleRequest& request) const;

        /**
         * <p>Gets information about the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetTopicRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTopicRuleAsync(const Model::GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a topic rule destination.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTopicRuleDestinationOutcome GetTopicRuleDestination(const Model::GetTopicRuleDestinationRequest& request) const;

        /**
         * <p>Gets information about a topic rule destination.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTopicRuleDestinationOutcomeCallable GetTopicRuleDestinationCallable(const Model::GetTopicRuleDestinationRequest& request) const;

        /**
         * <p>Gets information about a topic rule destination.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTopicRuleDestinationAsync(const Model::GetTopicRuleDestinationRequest& request, const GetTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the fine grained logging options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetV2LoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetV2LoggingOptionsOutcome GetV2LoggingOptions(const Model::GetV2LoggingOptionsRequest& request) const;

        /**
         * <p>Gets the fine grained logging options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetV2LoggingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetV2LoggingOptionsOutcomeCallable GetV2LoggingOptionsCallable(const Model::GetV2LoggingOptionsRequest& request) const;

        /**
         * <p>Gets the fine grained logging options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetV2LoggingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetV2LoggingOptionsAsync(const Model::GetV2LoggingOptionsRequest& request, const GetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the active violations for a given Device Defender security
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListActiveViolations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActiveViolationsOutcome ListActiveViolations(const Model::ListActiveViolationsRequest& request) const;

        /**
         * <p>Lists the active violations for a given Device Defender security
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListActiveViolations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActiveViolationsOutcomeCallable ListActiveViolationsCallable(const Model::ListActiveViolationsRequest& request) const;

        /**
         * <p>Lists the active violations for a given Device Defender security
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListActiveViolations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActiveViolationsAsync(const Model::ListActiveViolationsRequest& request, const ListActiveViolationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the policies attached to the specified thing group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAttachedPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedPoliciesOutcome ListAttachedPolicies(const Model::ListAttachedPoliciesRequest& request) const;

        /**
         * <p>Lists the policies attached to the specified thing group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAttachedPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedPoliciesOutcomeCallable ListAttachedPoliciesCallable(const Model::ListAttachedPoliciesRequest& request) const;

        /**
         * <p>Lists the policies attached to the specified thing group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAttachedPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedPoliciesAsync(const Model::ListAttachedPoliciesRequest& request, const ListAttachedPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the findings (results) of a Device Defender audit or of the audits
         * performed during a specified time period. (Findings are retained for 90
         * days.)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditFindingsOutcome ListAuditFindings(const Model::ListAuditFindingsRequest& request) const;

        /**
         * <p>Lists the findings (results) of a Device Defender audit or of the audits
         * performed during a specified time period. (Findings are retained for 90
         * days.)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditFindingsOutcomeCallable ListAuditFindingsCallable(const Model::ListAuditFindingsRequest& request) const;

        /**
         * <p>Lists the findings (results) of a Device Defender audit or of the audits
         * performed during a specified time period. (Findings are retained for 90
         * days.)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditFindingsAsync(const Model::ListAuditFindingsRequest& request, const ListAuditFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of audit mitigation action tasks that were
         * executed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditMitigationActionsExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditMitigationActionsExecutionsOutcome ListAuditMitigationActionsExecutions(const Model::ListAuditMitigationActionsExecutionsRequest& request) const;

        /**
         * <p>Gets the status of audit mitigation action tasks that were
         * executed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditMitigationActionsExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditMitigationActionsExecutionsOutcomeCallable ListAuditMitigationActionsExecutionsCallable(const Model::ListAuditMitigationActionsExecutionsRequest& request) const;

        /**
         * <p>Gets the status of audit mitigation action tasks that were
         * executed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditMitigationActionsExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditMitigationActionsExecutionsAsync(const Model::ListAuditMitigationActionsExecutionsRequest& request, const ListAuditMitigationActionsExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of audit mitigation action tasks that match the specified
         * filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditMitigationActionsTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditMitigationActionsTasksOutcome ListAuditMitigationActionsTasks(const Model::ListAuditMitigationActionsTasksRequest& request) const;

        /**
         * <p>Gets a list of audit mitigation action tasks that match the specified
         * filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditMitigationActionsTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditMitigationActionsTasksOutcomeCallable ListAuditMitigationActionsTasksCallable(const Model::ListAuditMitigationActionsTasksRequest& request) const;

        /**
         * <p>Gets a list of audit mitigation action tasks that match the specified
         * filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditMitigationActionsTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditMitigationActionsTasksAsync(const Model::ListAuditMitigationActionsTasksRequest& request, const ListAuditMitigationActionsTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists your Device Defender audit listings. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditSuppressions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditSuppressionsOutcome ListAuditSuppressions(const Model::ListAuditSuppressionsRequest& request) const;

        /**
         * <p> Lists your Device Defender audit listings. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditSuppressions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditSuppressionsOutcomeCallable ListAuditSuppressionsCallable(const Model::ListAuditSuppressionsRequest& request) const;

        /**
         * <p> Lists your Device Defender audit listings. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditSuppressions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditSuppressionsAsync(const Model::ListAuditSuppressionsRequest& request, const ListAuditSuppressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Device Defender audits that have been performed during a given time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditTasksOutcome ListAuditTasks(const Model::ListAuditTasksRequest& request) const;

        /**
         * <p>Lists the Device Defender audits that have been performed during a given time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditTasksOutcomeCallable ListAuditTasksCallable(const Model::ListAuditTasksRequest& request) const;

        /**
         * <p>Lists the Device Defender audits that have been performed during a given time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditTasksAsync(const Model::ListAuditTasksRequest& request, const ListAuditTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the authorizers registered in your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuthorizers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuthorizersOutcome ListAuthorizers(const Model::ListAuthorizersRequest& request) const;

        /**
         * <p>Lists the authorizers registered in your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuthorizers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuthorizersOutcomeCallable ListAuthorizersCallable(const Model::ListAuthorizersRequest& request) const;

        /**
         * <p>Lists the authorizers registered in your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuthorizers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuthorizersAsync(const Model::ListAuthorizersRequest& request, const ListAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the billing groups you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListBillingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillingGroupsOutcome ListBillingGroups(const Model::ListBillingGroupsRequest& request) const;

        /**
         * <p>Lists the billing groups you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListBillingGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBillingGroupsOutcomeCallable ListBillingGroupsCallable(const Model::ListBillingGroupsRequest& request) const;

        /**
         * <p>Lists the billing groups you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListBillingGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBillingGroupsAsync(const Model::ListBillingGroupsRequest& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the CA certificates registered for your AWS account.</p> <p>The results
         * are paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCACertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCACertificatesOutcome ListCACertificates(const Model::ListCACertificatesRequest& request) const;

        /**
         * <p>Lists the CA certificates registered for your AWS account.</p> <p>The results
         * are paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCACertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCACertificatesOutcomeCallable ListCACertificatesCallable(const Model::ListCACertificatesRequest& request) const;

        /**
         * <p>Lists the CA certificates registered for your AWS account.</p> <p>The results
         * are paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCACertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCACertificatesAsync(const Model::ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the certificates registered in your AWS account.</p> <p>The results are
         * paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificatesOutcome ListCertificates(const Model::ListCertificatesRequest& request) const;

        /**
         * <p>Lists the certificates registered in your AWS account.</p> <p>The results are
         * paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const Model::ListCertificatesRequest& request) const;

        /**
         * <p>Lists the certificates registered in your AWS account.</p> <p>The results are
         * paginated with a default page size of 25. You can use the returned marker to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesAsync(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the device certificates signed by the specified CA
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificatesByCA">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificatesByCAOutcome ListCertificatesByCA(const Model::ListCertificatesByCARequest& request) const;

        /**
         * <p>List the device certificates signed by the specified CA
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificatesByCA">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificatesByCAOutcomeCallable ListCertificatesByCACallable(const Model::ListCertificatesByCARequest& request) const;

        /**
         * <p>List the device certificates signed by the specified CA
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificatesByCA">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesByCAAsync(const Model::ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the set of dimensions that are defined for your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDimensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDimensionsOutcome ListDimensions(const Model::ListDimensionsRequest& request) const;

        /**
         * <p>List the set of dimensions that are defined for your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDimensions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDimensionsOutcomeCallable ListDimensionsCallable(const Model::ListDimensionsRequest& request) const;

        /**
         * <p>List the set of dimensions that are defined for your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDimensions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDimensionsAsync(const Model::ListDimensionsRequest& request, const ListDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of domain configurations for the user. This list is sorted
         * alphabetically by domain configuration name.</p>  <p>The domain
         * configuration feature is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDomainConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainConfigurationsOutcome ListDomainConfigurations(const Model::ListDomainConfigurationsRequest& request) const;

        /**
         * <p>Gets a list of domain configurations for the user. This list is sorted
         * alphabetically by domain configuration name.</p>  <p>The domain
         * configuration feature is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDomainConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainConfigurationsOutcomeCallable ListDomainConfigurationsCallable(const Model::ListDomainConfigurationsRequest& request) const;

        /**
         * <p>Gets a list of domain configurations for the user. This list is sorted
         * alphabetically by domain configuration name.</p>  <p>The domain
         * configuration feature is in public preview and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDomainConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainConfigurationsAsync(const Model::ListDomainConfigurationsRequest& request, const ListDomainConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the search indices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListIndices">AWS API
         * Reference</a></p>
         */
        virtual Model::ListIndicesOutcome ListIndices(const Model::ListIndicesRequest& request) const;

        /**
         * <p>Lists the search indices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListIndices">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIndicesOutcomeCallable ListIndicesCallable(const Model::ListIndicesRequest& request) const;

        /**
         * <p>Lists the search indices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListIndices">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIndicesAsync(const Model::ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the job executions for a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobExecutionsForJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobExecutionsForJobOutcome ListJobExecutionsForJob(const Model::ListJobExecutionsForJobRequest& request) const;

        /**
         * <p>Lists the job executions for a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobExecutionsForJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobExecutionsForJobOutcomeCallable ListJobExecutionsForJobCallable(const Model::ListJobExecutionsForJobRequest& request) const;

        /**
         * <p>Lists the job executions for a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobExecutionsForJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobExecutionsForJobAsync(const Model::ListJobExecutionsForJobRequest& request, const ListJobExecutionsForJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the job executions for the specified thing.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobExecutionsForThing">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobExecutionsForThingOutcome ListJobExecutionsForThing(const Model::ListJobExecutionsForThingRequest& request) const;

        /**
         * <p>Lists the job executions for the specified thing.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobExecutionsForThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobExecutionsForThingOutcomeCallable ListJobExecutionsForThingCallable(const Model::ListJobExecutionsForThingRequest& request) const;

        /**
         * <p>Lists the job executions for the specified thing.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobExecutionsForThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobExecutionsForThingAsync(const Model::ListJobExecutionsForThingRequest& request, const ListJobExecutionsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p>Lists jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobs">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p>Lists jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobs">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all mitigation actions that match the specified filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListMitigationActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMitigationActionsOutcome ListMitigationActions(const Model::ListMitigationActionsRequest& request) const;

        /**
         * <p>Gets a list of all mitigation actions that match the specified filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListMitigationActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMitigationActionsOutcomeCallable ListMitigationActionsCallable(const Model::ListMitigationActionsRequest& request) const;

        /**
         * <p>Gets a list of all mitigation actions that match the specified filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListMitigationActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMitigationActionsAsync(const Model::ListMitigationActionsRequest& request, const ListMitigationActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists OTA updates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListOTAUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOTAUpdatesOutcome ListOTAUpdates(const Model::ListOTAUpdatesRequest& request) const;

        /**
         * <p>Lists OTA updates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListOTAUpdates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOTAUpdatesOutcomeCallable ListOTAUpdatesCallable(const Model::ListOTAUpdatesRequest& request) const;

        /**
         * <p>Lists OTA updates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListOTAUpdates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOTAUpdatesAsync(const Model::ListOTAUpdatesRequest& request, const ListOTAUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists certificates that are being transferred but not yet
         * accepted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListOutgoingCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOutgoingCertificatesOutcome ListOutgoingCertificates(const Model::ListOutgoingCertificatesRequest& request) const;

        /**
         * <p>Lists certificates that are being transferred but not yet
         * accepted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListOutgoingCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOutgoingCertificatesOutcomeCallable ListOutgoingCertificatesCallable(const Model::ListOutgoingCertificatesRequest& request) const;

        /**
         * <p>Lists certificates that are being transferred but not yet
         * accepted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListOutgoingCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOutgoingCertificatesAsync(const Model::ListOutgoingCertificatesRequest& request, const ListOutgoingCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Lists your policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Lists your policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the versions of the specified policy and identifies the default
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicyVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * <p>Lists the versions of the specified policy and identifies the default
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicyVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * <p>Lists the versions of the specified policy and identifies the default
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicyVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the things associated with the specified principal. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPrincipalThings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalThingsOutcome ListPrincipalThings(const Model::ListPrincipalThingsRequest& request) const;

        /**
         * <p>Lists the things associated with the specified principal. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPrincipalThings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrincipalThingsOutcomeCallable ListPrincipalThingsCallable(const Model::ListPrincipalThingsRequest& request) const;

        /**
         * <p>Lists the things associated with the specified principal. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPrincipalThings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPrincipalThingsAsync(const Model::ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of fleet provisioning template versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListProvisioningTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningTemplateVersionsOutcome ListProvisioningTemplateVersions(const Model::ListProvisioningTemplateVersionsRequest& request) const;

        /**
         * <p>A list of fleet provisioning template versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListProvisioningTemplateVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisioningTemplateVersionsOutcomeCallable ListProvisioningTemplateVersionsCallable(const Model::ListProvisioningTemplateVersionsRequest& request) const;

        /**
         * <p>A list of fleet provisioning template versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListProvisioningTemplateVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisioningTemplateVersionsAsync(const Model::ListProvisioningTemplateVersionsRequest& request, const ListProvisioningTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the fleet provisioning templates in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListProvisioningTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningTemplatesOutcome ListProvisioningTemplates(const Model::ListProvisioningTemplatesRequest& request) const;

        /**
         * <p>Lists the fleet provisioning templates in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListProvisioningTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisioningTemplatesOutcomeCallable ListProvisioningTemplatesCallable(const Model::ListProvisioningTemplatesRequest& request) const;

        /**
         * <p>Lists the fleet provisioning templates in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListProvisioningTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisioningTemplatesAsync(const Model::ListProvisioningTemplatesRequest& request, const ListProvisioningTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the role aliases registered in your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListRoleAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoleAliasesOutcome ListRoleAliases(const Model::ListRoleAliasesRequest& request) const;

        /**
         * <p>Lists the role aliases registered in your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListRoleAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoleAliasesOutcomeCallable ListRoleAliasesCallable(const Model::ListRoleAliasesRequest& request) const;

        /**
         * <p>Lists the role aliases registered in your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListRoleAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoleAliasesAsync(const Model::ListRoleAliasesRequest& request, const ListRoleAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of your scheduled audits.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListScheduledAudits">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScheduledAuditsOutcome ListScheduledAudits(const Model::ListScheduledAuditsRequest& request) const;

        /**
         * <p>Lists all of your scheduled audits.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListScheduledAudits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListScheduledAuditsOutcomeCallable ListScheduledAuditsCallable(const Model::ListScheduledAuditsRequest& request) const;

        /**
         * <p>Lists all of your scheduled audits.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListScheduledAudits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListScheduledAuditsAsync(const Model::ListScheduledAuditsRequest& request, const ListScheduledAuditsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Device Defender security profiles you have created. You can use
         * filters to list only those security profiles associated with a thing group or
         * only those associated with your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilesOutcome ListSecurityProfiles(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * <p>Lists the Device Defender security profiles you have created. You can use
         * filters to list only those security profiles associated with a thing group or
         * only those associated with your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityProfilesOutcomeCallable ListSecurityProfilesCallable(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * <p>Lists the Device Defender security profiles you have created. You can use
         * filters to list only those security profiles associated with a thing group or
         * only those associated with your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityProfilesAsync(const Model::ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Device Defender security profiles attached to a target (thing
         * group).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListSecurityProfilesForTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilesForTargetOutcome ListSecurityProfilesForTarget(const Model::ListSecurityProfilesForTargetRequest& request) const;

        /**
         * <p>Lists the Device Defender security profiles attached to a target (thing
         * group).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListSecurityProfilesForTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityProfilesForTargetOutcomeCallable ListSecurityProfilesForTargetCallable(const Model::ListSecurityProfilesForTargetRequest& request) const;

        /**
         * <p>Lists the Device Defender security profiles attached to a target (thing
         * group).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListSecurityProfilesForTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityProfilesForTargetAsync(const Model::ListSecurityProfilesForTargetRequest& request, const ListSecurityProfilesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the streams in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListStreams">AWS API
         * Reference</a></p>
         */
        virtual Model::ListStreamsOutcome ListStreams(const Model::ListStreamsRequest& request) const;

        /**
         * <p>Lists all of the streams in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListStreams">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamsOutcomeCallable ListStreamsCallable(const Model::ListStreamsRequest& request) const;

        /**
         * <p>Lists all of the streams in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListStreams">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamsAsync(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List targets for the specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsForPolicyOutcome ListTargetsForPolicy(const Model::ListTargetsForPolicyRequest& request) const;

        /**
         * <p>List targets for the specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsForPolicyOutcomeCallable ListTargetsForPolicyCallable(const Model::ListTargetsForPolicyRequest& request) const;

        /**
         * <p>List targets for the specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsForPolicyAsync(const Model::ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the targets (thing groups) associated with a given Device Defender
         * security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTargetsForSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsForSecurityProfileOutcome ListTargetsForSecurityProfile(const Model::ListTargetsForSecurityProfileRequest& request) const;

        /**
         * <p>Lists the targets (thing groups) associated with a given Device Defender
         * security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTargetsForSecurityProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsForSecurityProfileOutcomeCallable ListTargetsForSecurityProfileCallable(const Model::ListTargetsForSecurityProfileRequest& request) const;

        /**
         * <p>Lists the targets (thing groups) associated with a given Device Defender
         * security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTargetsForSecurityProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsForSecurityProfileAsync(const Model::ListTargetsForSecurityProfileRequest& request, const ListTargetsForSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the thing groups in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingGroupsOutcome ListThingGroups(const Model::ListThingGroupsRequest& request) const;

        /**
         * <p>List the thing groups in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingGroupsOutcomeCallable ListThingGroupsCallable(const Model::ListThingGroupsRequest& request) const;

        /**
         * <p>List the thing groups in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingGroupsAsync(const Model::ListThingGroupsRequest& request, const ListThingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the thing groups to which the specified thing belongs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingGroupsForThing">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingGroupsForThingOutcome ListThingGroupsForThing(const Model::ListThingGroupsForThingRequest& request) const;

        /**
         * <p>List the thing groups to which the specified thing belongs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingGroupsForThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingGroupsForThingOutcomeCallable ListThingGroupsForThingCallable(const Model::ListThingGroupsForThingRequest& request) const;

        /**
         * <p>List the thing groups to which the specified thing belongs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingGroupsForThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingGroupsForThingAsync(const Model::ListThingGroupsForThingRequest& request, const ListThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the principals associated with the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingPrincipals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingPrincipalsOutcome ListThingPrincipals(const Model::ListThingPrincipalsRequest& request) const;

        /**
         * <p>Lists the principals associated with the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingPrincipals">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingPrincipalsOutcomeCallable ListThingPrincipalsCallable(const Model::ListThingPrincipalsRequest& request) const;

        /**
         * <p>Lists the principals associated with the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingPrincipals">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingPrincipalsAsync(const Model::ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Information about the thing registration tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingRegistrationTaskReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingRegistrationTaskReportsOutcome ListThingRegistrationTaskReports(const Model::ListThingRegistrationTaskReportsRequest& request) const;

        /**
         * <p>Information about the thing registration tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingRegistrationTaskReports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingRegistrationTaskReportsOutcomeCallable ListThingRegistrationTaskReportsCallable(const Model::ListThingRegistrationTaskReportsRequest& request) const;

        /**
         * <p>Information about the thing registration tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingRegistrationTaskReports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingRegistrationTaskReportsAsync(const Model::ListThingRegistrationTaskReportsRequest& request, const ListThingRegistrationTaskReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List bulk thing provisioning tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingRegistrationTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingRegistrationTasksOutcome ListThingRegistrationTasks(const Model::ListThingRegistrationTasksRequest& request) const;

        /**
         * <p>List bulk thing provisioning tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingRegistrationTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingRegistrationTasksOutcomeCallable ListThingRegistrationTasksCallable(const Model::ListThingRegistrationTasksRequest& request) const;

        /**
         * <p>List bulk thing provisioning tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingRegistrationTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingRegistrationTasksAsync(const Model::ListThingRegistrationTasksRequest& request, const ListThingRegistrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing thing types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingTypesOutcome ListThingTypes(const Model::ListThingTypesRequest& request) const;

        /**
         * <p>Lists the existing thing types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingTypesOutcomeCallable ListThingTypesCallable(const Model::ListThingTypesRequest& request) const;

        /**
         * <p>Lists the existing thing types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingTypesAsync(const Model::ListThingTypesRequest& request, const ListThingTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b>
         * parameters to filter your things. For example, calling <code>ListThings</code>
         * with attributeName=Color and attributeValue=Red retrieves all things in the
         * registry that contain an attribute <b>Color</b> with the value <b>Red</b>. </p>
         *  <p>You will not be charged for calling this API if an <code>Access
         * denied</code> error is returned. You will also not be charged if no attributes
         * or pagination token was provided in request and no pagination token and no
         * results were returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThings">AWS API
         * Reference</a></p>
         */
        virtual Model::ListThingsOutcome ListThings(const Model::ListThingsRequest& request) const;

        /**
         * <p>Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b>
         * parameters to filter your things. For example, calling <code>ListThings</code>
         * with attributeName=Color and attributeValue=Red retrieves all things in the
         * registry that contain an attribute <b>Color</b> with the value <b>Red</b>. </p>
         *  <p>You will not be charged for calling this API if an <code>Access
         * denied</code> error is returned. You will also not be charged if no attributes
         * or pagination token was provided in request and no pagination token and no
         * results were returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThings">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingsOutcomeCallable ListThingsCallable(const Model::ListThingsRequest& request) const;

        /**
         * <p>Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b>
         * parameters to filter your things. For example, calling <code>ListThings</code>
         * with attributeName=Color and attributeValue=Red retrieves all things in the
         * registry that contain an attribute <b>Color</b> with the value <b>Red</b>. </p>
         *  <p>You will not be charged for calling this API if an <code>Access
         * denied</code> error is returned. You will also not be charged if no attributes
         * or pagination token was provided in request and no pagination token and no
         * results were returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThings">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingsAsync(const Model::ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the things you have added to the given billing group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingsInBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingsInBillingGroupOutcome ListThingsInBillingGroup(const Model::ListThingsInBillingGroupRequest& request) const;

        /**
         * <p>Lists the things you have added to the given billing group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingsInBillingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingsInBillingGroupOutcomeCallable ListThingsInBillingGroupCallable(const Model::ListThingsInBillingGroupRequest& request) const;

        /**
         * <p>Lists the things you have added to the given billing group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingsInBillingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingsInBillingGroupAsync(const Model::ListThingsInBillingGroupRequest& request, const ListThingsInBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the things in the specified group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingsInThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingsInThingGroupOutcome ListThingsInThingGroup(const Model::ListThingsInThingGroupRequest& request) const;

        /**
         * <p>Lists the things in the specified group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingsInThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingsInThingGroupOutcomeCallable ListThingsInThingGroupCallable(const Model::ListThingsInThingGroupRequest& request) const;

        /**
         * <p>Lists the things in the specified group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingsInThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingsInThingGroupAsync(const Model::ListThingsInThingGroupRequest& request, const ListThingsInThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the topic rule destinations in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTopicRuleDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTopicRuleDestinationsOutcome ListTopicRuleDestinations(const Model::ListTopicRuleDestinationsRequest& request) const;

        /**
         * <p>Lists all the topic rule destinations in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTopicRuleDestinations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTopicRuleDestinationsOutcomeCallable ListTopicRuleDestinationsCallable(const Model::ListTopicRuleDestinationsRequest& request) const;

        /**
         * <p>Lists all the topic rule destinations in your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTopicRuleDestinations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTopicRuleDestinationsAsync(const Model::ListTopicRuleDestinationsRequest& request, const ListTopicRuleDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the rules for the specific topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTopicRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTopicRulesOutcome ListTopicRules(const Model::ListTopicRulesRequest& request) const;

        /**
         * <p>Lists the rules for the specific topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTopicRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTopicRulesOutcomeCallable ListTopicRulesCallable(const Model::ListTopicRulesRequest& request) const;

        /**
         * <p>Lists the rules for the specific topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTopicRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTopicRulesAsync(const Model::ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists logging levels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListV2LoggingLevels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListV2LoggingLevelsOutcome ListV2LoggingLevels(const Model::ListV2LoggingLevelsRequest& request) const;

        /**
         * <p>Lists logging levels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListV2LoggingLevels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListV2LoggingLevelsOutcomeCallable ListV2LoggingLevelsCallable(const Model::ListV2LoggingLevelsRequest& request) const;

        /**
         * <p>Lists logging levels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListV2LoggingLevels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListV2LoggingLevelsAsync(const Model::ListV2LoggingLevelsRequest& request, const ListV2LoggingLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Device Defender security profile violations discovered during the
         * given time period. You can use filters to limit the results to those alerts
         * issued for a particular security profile, behavior, or thing
         * (device).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListViolationEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListViolationEventsOutcome ListViolationEvents(const Model::ListViolationEventsRequest& request) const;

        /**
         * <p>Lists the Device Defender security profile violations discovered during the
         * given time period. You can use filters to limit the results to those alerts
         * issued for a particular security profile, behavior, or thing
         * (device).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListViolationEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListViolationEventsOutcomeCallable ListViolationEventsCallable(const Model::ListViolationEventsRequest& request) const;

        /**
         * <p>Lists the Device Defender security profile violations discovered during the
         * given time period. You can use filters to limit the results to those alerts
         * issued for a particular security profile, behavior, or thing
         * (device).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListViolationEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListViolationEventsAsync(const Model::ListViolationEventsRequest& request, const ListViolationEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a CA certificate with AWS IoT. This CA certificate can then be used
         * to sign device certificates, which can be then registered with AWS IoT. You can
         * register up to 10 CA certificates per AWS account that have the same subject
         * field. This enables you to have up to 10 certificate authorities sign your
         * device certificates. If you have more than one CA certificate registered, make
         * sure you pass the CA certificate when you register your device certificates with
         * the RegisterCertificate API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCACertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCACertificateOutcome RegisterCACertificate(const Model::RegisterCACertificateRequest& request) const;

        /**
         * <p>Registers a CA certificate with AWS IoT. This CA certificate can then be used
         * to sign device certificates, which can be then registered with AWS IoT. You can
         * register up to 10 CA certificates per AWS account that have the same subject
         * field. This enables you to have up to 10 certificate authorities sign your
         * device certificates. If you have more than one CA certificate registered, make
         * sure you pass the CA certificate when you register your device certificates with
         * the RegisterCertificate API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCACertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCACertificateOutcomeCallable RegisterCACertificateCallable(const Model::RegisterCACertificateRequest& request) const;

        /**
         * <p>Registers a CA certificate with AWS IoT. This CA certificate can then be used
         * to sign device certificates, which can be then registered with AWS IoT. You can
         * register up to 10 CA certificates per AWS account that have the same subject
         * field. This enables you to have up to 10 certificate authorities sign your
         * device certificates. If you have more than one CA certificate registered, make
         * sure you pass the CA certificate when you register your device certificates with
         * the RegisterCertificate API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCACertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCACertificateAsync(const Model::RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a device certificate with AWS IoT. If you have more than one CA
         * certificate that has the same subject field, you must specify the CA certificate
         * that was used to sign the device certificate being registered.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCertificateOutcome RegisterCertificate(const Model::RegisterCertificateRequest& request) const;

        /**
         * <p>Registers a device certificate with AWS IoT. If you have more than one CA
         * certificate that has the same subject field, you must specify the CA certificate
         * that was used to sign the device certificate being registered.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCertificateOutcomeCallable RegisterCertificateCallable(const Model::RegisterCertificateRequest& request) const;

        /**
         * <p>Registers a device certificate with AWS IoT. If you have more than one CA
         * certificate that has the same subject field, you must specify the CA certificate
         * that was used to sign the device certificate being registered.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCertificateAsync(const Model::RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Register a certificate that does not have a certificate authority
         * (CA).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificateWithoutCA">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCertificateWithoutCAOutcome RegisterCertificateWithoutCA(const Model::RegisterCertificateWithoutCARequest& request) const;

        /**
         * <p>Register a certificate that does not have a certificate authority
         * (CA).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificateWithoutCA">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCertificateWithoutCAOutcomeCallable RegisterCertificateWithoutCACallable(const Model::RegisterCertificateWithoutCARequest& request) const;

        /**
         * <p>Register a certificate that does not have a certificate authority
         * (CA).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificateWithoutCA">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCertificateWithoutCAAsync(const Model::RegisterCertificateWithoutCARequest& request, const RegisterCertificateWithoutCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a thing in the device registry. RegisterThing calls other AWS IoT
         * control plane APIs. These calls might exceed your account level <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_iot">
         * AWS IoT Throttling Limits</a> and cause throttle errors. Please contact <a
         * href="https://console.aws.amazon.com/support/home">AWS Customer Support</a> to
         * raise your throttling limits if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterThing">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterThingOutcome RegisterThing(const Model::RegisterThingRequest& request) const;

        /**
         * <p>Provisions a thing in the device registry. RegisterThing calls other AWS IoT
         * control plane APIs. These calls might exceed your account level <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_iot">
         * AWS IoT Throttling Limits</a> and cause throttle errors. Please contact <a
         * href="https://console.aws.amazon.com/support/home">AWS Customer Support</a> to
         * raise your throttling limits if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterThingOutcomeCallable RegisterThingCallable(const Model::RegisterThingRequest& request) const;

        /**
         * <p>Provisions a thing in the device registry. RegisterThing calls other AWS IoT
         * control plane APIs. These calls might exceed your account level <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_iot">
         * AWS IoT Throttling Limits</a> and cause throttle errors. Please contact <a
         * href="https://console.aws.amazon.com/support/home">AWS Customer Support</a> to
         * raise your throttling limits if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterThingAsync(const Model::RegisterThingRequest& request, const RegisterThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a pending certificate transfer. After AWS IoT rejects a certificate
         * transfer, the certificate status changes from <b>PENDING_TRANSFER</b> to
         * <b>INACTIVE</b>.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p> <p>This operation
         * can only be called by the transfer destination. After it is called, the
         * certificate will be returned to the source's account in the INACTIVE
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RejectCertificateTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectCertificateTransferOutcome RejectCertificateTransfer(const Model::RejectCertificateTransferRequest& request) const;

        /**
         * <p>Rejects a pending certificate transfer. After AWS IoT rejects a certificate
         * transfer, the certificate status changes from <b>PENDING_TRANSFER</b> to
         * <b>INACTIVE</b>.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p> <p>This operation
         * can only be called by the transfer destination. After it is called, the
         * certificate will be returned to the source's account in the INACTIVE
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RejectCertificateTransfer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectCertificateTransferOutcomeCallable RejectCertificateTransferCallable(const Model::RejectCertificateTransferRequest& request) const;

        /**
         * <p>Rejects a pending certificate transfer. After AWS IoT rejects a certificate
         * transfer, the certificate status changes from <b>PENDING_TRANSFER</b> to
         * <b>INACTIVE</b>.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p> <p>This operation
         * can only be called by the transfer destination. After it is called, the
         * certificate will be returned to the source's account in the INACTIVE
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RejectCertificateTransfer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectCertificateTransferAsync(const Model::RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the given thing from the billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RemoveThingFromBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveThingFromBillingGroupOutcome RemoveThingFromBillingGroup(const Model::RemoveThingFromBillingGroupRequest& request) const;

        /**
         * <p>Removes the given thing from the billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RemoveThingFromBillingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveThingFromBillingGroupOutcomeCallable RemoveThingFromBillingGroupCallable(const Model::RemoveThingFromBillingGroupRequest& request) const;

        /**
         * <p>Removes the given thing from the billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RemoveThingFromBillingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveThingFromBillingGroupAsync(const Model::RemoveThingFromBillingGroupRequest& request, const RemoveThingFromBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove the specified thing from the specified group.</p> <p>You must specify
         * either a <code>thingGroupArn</code> or a <code>thingGroupName</code> to identify
         * the thing group and either a <code>thingArn</code> or a <code>thingName</code>
         * to identify the thing to remove from the thing group. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RemoveThingFromThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveThingFromThingGroupOutcome RemoveThingFromThingGroup(const Model::RemoveThingFromThingGroupRequest& request) const;

        /**
         * <p>Remove the specified thing from the specified group.</p> <p>You must specify
         * either a <code>thingGroupArn</code> or a <code>thingGroupName</code> to identify
         * the thing group and either a <code>thingArn</code> or a <code>thingName</code>
         * to identify the thing to remove from the thing group. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RemoveThingFromThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveThingFromThingGroupOutcomeCallable RemoveThingFromThingGroupCallable(const Model::RemoveThingFromThingGroupRequest& request) const;

        /**
         * <p>Remove the specified thing from the specified group.</p> <p>You must specify
         * either a <code>thingGroupArn</code> or a <code>thingGroupName</code> to identify
         * the thing group and either a <code>thingArn</code> or a <code>thingName</code>
         * to identify the thing to remove from the thing group. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RemoveThingFromThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveThingFromThingGroupAsync(const Model::RemoveThingFromThingGroupRequest& request, const RemoveThingFromThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the rule. You must specify all parameters for the new rule. Creating
         * rules is an administrator-level action. Any user who has permission to create
         * rules will be able to access data processed by the rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ReplaceTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceTopicRuleOutcome ReplaceTopicRule(const Model::ReplaceTopicRuleRequest& request) const;

        /**
         * <p>Replaces the rule. You must specify all parameters for the new rule. Creating
         * rules is an administrator-level action. Any user who has permission to create
         * rules will be able to access data processed by the rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ReplaceTopicRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceTopicRuleOutcomeCallable ReplaceTopicRuleCallable(const Model::ReplaceTopicRuleRequest& request) const;

        /**
         * <p>Replaces the rule. You must specify all parameters for the new rule. Creating
         * rules is an administrator-level action. Any user who has permission to create
         * rules will be able to access data processed by the rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ReplaceTopicRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceTopicRuleAsync(const Model::ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The query search index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SearchIndex">AWS API
         * Reference</a></p>
         */
        virtual Model::SearchIndexOutcome SearchIndex(const Model::SearchIndexRequest& request) const;

        /**
         * <p>The query search index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SearchIndex">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchIndexOutcomeCallable SearchIndexCallable(const Model::SearchIndexRequest& request) const;

        /**
         * <p>The query search index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SearchIndex">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchIndexAsync(const Model::SearchIndexRequest& request, const SearchIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the default authorizer. This will be used if a websocket connection is
         * made without specifying an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetDefaultAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultAuthorizerOutcome SetDefaultAuthorizer(const Model::SetDefaultAuthorizerRequest& request) const;

        /**
         * <p>Sets the default authorizer. This will be used if a websocket connection is
         * made without specifying an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetDefaultAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultAuthorizerOutcomeCallable SetDefaultAuthorizerCallable(const Model::SetDefaultAuthorizerRequest& request) const;

        /**
         * <p>Sets the default authorizer. This will be used if a websocket connection is
         * made without specifying an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetDefaultAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultAuthorizerAsync(const Model::SetDefaultAuthorizerRequest& request, const SetDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version. This action affects all certificates to which the policy is
         * attached. To list the principals the policy is attached to, use the
         * ListPrincipalPolicy API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetDefaultPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultPolicyVersionOutcome SetDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version. This action affects all certificates to which the policy is
         * attached. To list the principals the policy is attached to, use the
         * ListPrincipalPolicy API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetDefaultPolicyVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version. This action affects all certificates to which the policy is
         * attached. To list the principals the policy is attached to, use the
         * ListPrincipalPolicy API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetDefaultPolicyVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the logging options.</p> <p>NOTE: use of this command is not
         * recommended. Use <code>SetV2LoggingOptions</code> instead.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::SetLoggingOptionsOutcome SetLoggingOptions(const Model::SetLoggingOptionsRequest& request) const;

        /**
         * <p>Sets the logging options.</p> <p>NOTE: use of this command is not
         * recommended. Use <code>SetV2LoggingOptions</code> instead.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetLoggingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLoggingOptionsOutcomeCallable SetLoggingOptionsCallable(const Model::SetLoggingOptionsRequest& request) const;

        /**
         * <p>Sets the logging options.</p> <p>NOTE: use of this command is not
         * recommended. Use <code>SetV2LoggingOptions</code> instead.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetLoggingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLoggingOptionsAsync(const Model::SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the logging level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetV2LoggingLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::SetV2LoggingLevelOutcome SetV2LoggingLevel(const Model::SetV2LoggingLevelRequest& request) const;

        /**
         * <p>Sets the logging level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetV2LoggingLevel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetV2LoggingLevelOutcomeCallable SetV2LoggingLevelCallable(const Model::SetV2LoggingLevelRequest& request) const;

        /**
         * <p>Sets the logging level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetV2LoggingLevel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetV2LoggingLevelAsync(const Model::SetV2LoggingLevelRequest& request, const SetV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the logging options for the V2 logging service.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetV2LoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::SetV2LoggingOptionsOutcome SetV2LoggingOptions(const Model::SetV2LoggingOptionsRequest& request) const;

        /**
         * <p>Sets the logging options for the V2 logging service.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetV2LoggingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetV2LoggingOptionsOutcomeCallable SetV2LoggingOptionsCallable(const Model::SetV2LoggingOptionsRequest& request) const;

        /**
         * <p>Sets the logging options for the V2 logging service.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetV2LoggingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetV2LoggingOptionsAsync(const Model::SetV2LoggingOptionsRequest& request, const SetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a task that applies a set of mitigation actions to the specified
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAuditMitigationActionsTaskOutcome StartAuditMitigationActionsTask(const Model::StartAuditMitigationActionsTaskRequest& request) const;

        /**
         * <p>Starts a task that applies a set of mitigation actions to the specified
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAuditMitigationActionsTaskOutcomeCallable StartAuditMitigationActionsTaskCallable(const Model::StartAuditMitigationActionsTaskRequest& request) const;

        /**
         * <p>Starts a task that applies a set of mitigation actions to the specified
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAuditMitigationActionsTaskAsync(const Model::StartAuditMitigationActionsTaskRequest& request, const StartAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an on-demand Device Defender audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartOnDemandAuditTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOnDemandAuditTaskOutcome StartOnDemandAuditTask(const Model::StartOnDemandAuditTaskRequest& request) const;

        /**
         * <p>Starts an on-demand Device Defender audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartOnDemandAuditTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOnDemandAuditTaskOutcomeCallable StartOnDemandAuditTaskCallable(const Model::StartOnDemandAuditTaskRequest& request) const;

        /**
         * <p>Starts an on-demand Device Defender audit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartOnDemandAuditTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartOnDemandAuditTaskAsync(const Model::StartOnDemandAuditTaskRequest& request, const StartOnDemandAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a bulk thing provisioning task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartThingRegistrationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartThingRegistrationTaskOutcome StartThingRegistrationTask(const Model::StartThingRegistrationTaskRequest& request) const;

        /**
         * <p>Creates a bulk thing provisioning task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartThingRegistrationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartThingRegistrationTaskOutcomeCallable StartThingRegistrationTaskCallable(const Model::StartThingRegistrationTaskRequest& request) const;

        /**
         * <p>Creates a bulk thing provisioning task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartThingRegistrationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartThingRegistrationTaskAsync(const Model::StartThingRegistrationTaskRequest& request, const StartThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a bulk thing provisioning task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StopThingRegistrationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StopThingRegistrationTaskOutcome StopThingRegistrationTask(const Model::StopThingRegistrationTaskRequest& request) const;

        /**
         * <p>Cancels a bulk thing provisioning task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StopThingRegistrationTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopThingRegistrationTaskOutcomeCallable StopThingRegistrationTaskCallable(const Model::StopThingRegistrationTaskRequest& request) const;

        /**
         * <p>Cancels a bulk thing provisioning task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StopThingRegistrationTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopThingRegistrationTaskAsync(const Model::StopThingRegistrationTaskRequest& request, const StopThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests if a specified principal is authorized to perform an AWS IoT action on
         * a specified resource. Use this to test and debug the authorization behavior of
         * devices that connect to the AWS IoT device gateway.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TestAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::TestAuthorizationOutcome TestAuthorization(const Model::TestAuthorizationRequest& request) const;

        /**
         * <p>Tests if a specified principal is authorized to perform an AWS IoT action on
         * a specified resource. Use this to test and debug the authorization behavior of
         * devices that connect to the AWS IoT device gateway.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TestAuthorization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestAuthorizationOutcomeCallable TestAuthorizationCallable(const Model::TestAuthorizationRequest& request) const;

        /**
         * <p>Tests if a specified principal is authorized to perform an AWS IoT action on
         * a specified resource. Use this to test and debug the authorization behavior of
         * devices that connect to the AWS IoT device gateway.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TestAuthorization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestAuthorizationAsync(const Model::TestAuthorizationRequest& request, const TestAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests a custom authorization behavior by invoking a specified custom
         * authorizer. Use this to test and debug the custom authorization behavior of
         * devices that connect to the AWS IoT device gateway.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TestInvokeAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::TestInvokeAuthorizerOutcome TestInvokeAuthorizer(const Model::TestInvokeAuthorizerRequest& request) const;

        /**
         * <p>Tests a custom authorization behavior by invoking a specified custom
         * authorizer. Use this to test and debug the custom authorization behavior of
         * devices that connect to the AWS IoT device gateway.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TestInvokeAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestInvokeAuthorizerOutcomeCallable TestInvokeAuthorizerCallable(const Model::TestInvokeAuthorizerRequest& request) const;

        /**
         * <p>Tests a custom authorization behavior by invoking a specified custom
         * authorizer. Use this to test and debug the custom authorization behavior of
         * devices that connect to the AWS IoT device gateway.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TestInvokeAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestInvokeAuthorizerAsync(const Model::TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transfers the specified certificate to the specified AWS account.</p> <p>You
         * can cancel the transfer until it is acknowledged by the recipient.</p> <p>No
         * notification is sent to the transfer destination's account. It is up to the
         * caller to notify the transfer target.</p> <p>The certificate being transferred
         * must not be in the ACTIVE state. You can use the UpdateCertificate API to
         * deactivate it.</p> <p>The certificate must not have any policies attached to it.
         * You can use the DetachPrincipalPolicy API to detach them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferCertificateOutcome TransferCertificate(const Model::TransferCertificateRequest& request) const;

        /**
         * <p>Transfers the specified certificate to the specified AWS account.</p> <p>You
         * can cancel the transfer until it is acknowledged by the recipient.</p> <p>No
         * notification is sent to the transfer destination's account. It is up to the
         * caller to notify the transfer target.</p> <p>The certificate being transferred
         * must not be in the ACTIVE state. You can use the UpdateCertificate API to
         * deactivate it.</p> <p>The certificate must not have any policies attached to it.
         * You can use the DetachPrincipalPolicy API to detach them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransferCertificateOutcomeCallable TransferCertificateCallable(const Model::TransferCertificateRequest& request) const;

        /**
         * <p>Transfers the specified certificate to the specified AWS account.</p> <p>You
         * can cancel the transfer until it is acknowledged by the recipient.</p> <p>No
         * notification is sent to the transfer destination's account. It is up to the
         * caller to notify the transfer target.</p> <p>The certificate being transferred
         * must not be in the ACTIVE state. You can use the UpdateCertificate API to
         * deactivate it.</p> <p>The certificate must not have any policies attached to it.
         * You can use the DetachPrincipalPolicy API to detach them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransferCertificateAsync(const Model::TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures or reconfigures the Device Defender audit settings for this
         * account. Settings include how audit notifications are sent and which audit
         * checks are enabled or disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAccountAuditConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountAuditConfigurationOutcome UpdateAccountAuditConfiguration(const Model::UpdateAccountAuditConfigurationRequest& request) const;

        /**
         * <p>Configures or reconfigures the Device Defender audit settings for this
         * account. Settings include how audit notifications are sent and which audit
         * checks are enabled or disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAccountAuditConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountAuditConfigurationOutcomeCallable UpdateAccountAuditConfigurationCallable(const Model::UpdateAccountAuditConfigurationRequest& request) const;

        /**
         * <p>Configures or reconfigures the Device Defender audit settings for this
         * account. Settings include how audit notifications are sent and which audit
         * checks are enabled or disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAccountAuditConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountAuditConfigurationAsync(const Model::UpdateAccountAuditConfigurationRequest& request, const UpdateAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAuditSuppression">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuditSuppressionOutcome UpdateAuditSuppression(const Model::UpdateAuditSuppressionRequest& request) const;

        /**
         * <p> Updates a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAuditSuppression">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuditSuppressionOutcomeCallable UpdateAuditSuppressionCallable(const Model::UpdateAuditSuppressionRequest& request) const;

        /**
         * <p> Updates a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAuditSuppression">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuditSuppressionAsync(const Model::UpdateAuditSuppressionRequest& request, const UpdateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthorizerOutcome UpdateAuthorizer(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * <p>Updates an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuthorizerOutcomeCallable UpdateAuthorizerCallable(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * <p>Updates an authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuthorizerAsync(const Model::UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates information about the billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBillingGroupOutcome UpdateBillingGroup(const Model::UpdateBillingGroupRequest& request) const;

        /**
         * <p>Updates information about the billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateBillingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBillingGroupOutcomeCallable UpdateBillingGroupCallable(const Model::UpdateBillingGroupRequest& request) const;

        /**
         * <p>Updates information about the billing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateBillingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBillingGroupAsync(const Model::UpdateBillingGroupRequest& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a registered CA certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCACertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCACertificateOutcome UpdateCACertificate(const Model::UpdateCACertificateRequest& request) const;

        /**
         * <p>Updates a registered CA certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCACertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCACertificateOutcomeCallable UpdateCACertificateCallable(const Model::UpdateCACertificateRequest& request) const;

        /**
         * <p>Updates a registered CA certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCACertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCACertificateAsync(const Model::UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of the specified certificate. This operation is
         * idempotent.</p> <p>Certificates must be in the ACTIVE state to authenticate
         * devices that use a certificate to connect to AWS IoT.</p> <p>Within a few
         * minutes of updating a certificate from the ACTIVE state to any other state, AWS
         * IoT disconnects all devices that used that certificate to connect. Devices
         * cannot use a certificate that is not in the ACTIVE state to
         * reconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCertificateOutcome UpdateCertificate(const Model::UpdateCertificateRequest& request) const;

        /**
         * <p>Updates the status of the specified certificate. This operation is
         * idempotent.</p> <p>Certificates must be in the ACTIVE state to authenticate
         * devices that use a certificate to connect to AWS IoT.</p> <p>Within a few
         * minutes of updating a certificate from the ACTIVE state to any other state, AWS
         * IoT disconnects all devices that used that certificate to connect. Devices
         * cannot use a certificate that is not in the ACTIVE state to
         * reconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCertificateOutcomeCallable UpdateCertificateCallable(const Model::UpdateCertificateRequest& request) const;

        /**
         * <p>Updates the status of the specified certificate. This operation is
         * idempotent.</p> <p>Certificates must be in the ACTIVE state to authenticate
         * devices that use a certificate to connect to AWS IoT.</p> <p>Within a few
         * minutes of updating a certificate from the ACTIVE state to any other state, AWS
         * IoT disconnects all devices that used that certificate to connect. Devices
         * cannot use a certificate that is not in the ACTIVE state to
         * reconnect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCertificateAsync(const Model::UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the definition for a dimension. You cannot change the type of a
         * dimension after it is created (you can delete it and re-create
         * it).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDimension">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDimensionOutcome UpdateDimension(const Model::UpdateDimensionRequest& request) const;

        /**
         * <p>Updates the definition for a dimension. You cannot change the type of a
         * dimension after it is created (you can delete it and re-create
         * it).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDimension">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDimensionOutcomeCallable UpdateDimensionCallable(const Model::UpdateDimensionRequest& request) const;

        /**
         * <p>Updates the definition for a dimension. You cannot change the type of a
         * dimension after it is created (you can delete it and re-create
         * it).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDimension">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDimensionAsync(const Model::UpdateDimensionRequest& request, const UpdateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates values stored in the domain configuration. Domain configurations for
         * default endpoints can't be updated.</p>  <p>The domain configuration
         * feature is in public preview and is subject to change.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDomainConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainConfigurationOutcome UpdateDomainConfiguration(const Model::UpdateDomainConfigurationRequest& request) const;

        /**
         * <p>Updates values stored in the domain configuration. Domain configurations for
         * default endpoints can't be updated.</p>  <p>The domain configuration
         * feature is in public preview and is subject to change.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDomainConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainConfigurationOutcomeCallable UpdateDomainConfigurationCallable(const Model::UpdateDomainConfigurationRequest& request) const;

        /**
         * <p>Updates values stored in the domain configuration. Domain configurations for
         * default endpoints can't be updated.</p>  <p>The domain configuration
         * feature is in public preview and is subject to change.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDomainConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainConfigurationAsync(const Model::UpdateDomainConfigurationRequest& request, const UpdateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a dynamic thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDynamicThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDynamicThingGroupOutcome UpdateDynamicThingGroup(const Model::UpdateDynamicThingGroupRequest& request) const;

        /**
         * <p>Updates a dynamic thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDynamicThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDynamicThingGroupOutcomeCallable UpdateDynamicThingGroupCallable(const Model::UpdateDynamicThingGroupRequest& request) const;

        /**
         * <p>Updates a dynamic thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDynamicThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDynamicThingGroupAsync(const Model::UpdateDynamicThingGroupRequest& request, const UpdateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the event configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateEventConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventConfigurationsOutcome UpdateEventConfigurations(const Model::UpdateEventConfigurationsRequest& request) const;

        /**
         * <p>Updates the event configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateEventConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventConfigurationsOutcomeCallable UpdateEventConfigurationsCallable(const Model::UpdateEventConfigurationsRequest& request) const;

        /**
         * <p>Updates the event configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateEventConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventConfigurationsAsync(const Model::UpdateEventConfigurationsRequest& request, const UpdateEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the search configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateIndexingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIndexingConfigurationOutcome UpdateIndexingConfiguration(const Model::UpdateIndexingConfigurationRequest& request) const;

        /**
         * <p>Updates the search configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateIndexingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIndexingConfigurationOutcomeCallable UpdateIndexingConfigurationCallable(const Model::UpdateIndexingConfigurationRequest& request) const;

        /**
         * <p>Updates the search configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateIndexingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIndexingConfigurationAsync(const Model::UpdateIndexingConfigurationRequest& request, const UpdateIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates supported fields of the specified job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;

        /**
         * <p>Updates supported fields of the specified job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobOutcomeCallable UpdateJobCallable(const Model::UpdateJobRequest& request) const;

        /**
         * <p>Updates supported fields of the specified job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the definition for the specified mitigation action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateMitigationAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMitigationActionOutcome UpdateMitigationAction(const Model::UpdateMitigationActionRequest& request) const;

        /**
         * <p>Updates the definition for the specified mitigation action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateMitigationAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMitigationActionOutcomeCallable UpdateMitigationActionCallable(const Model::UpdateMitigationActionRequest& request) const;

        /**
         * <p>Updates the definition for the specified mitigation action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateMitigationAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMitigationActionAsync(const Model::UpdateMitigationActionRequest& request, const UpdateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a fleet provisioning template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateProvisioningTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisioningTemplateOutcome UpdateProvisioningTemplate(const Model::UpdateProvisioningTemplateRequest& request) const;

        /**
         * <p>Updates a fleet provisioning template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateProvisioningTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisioningTemplateOutcomeCallable UpdateProvisioningTemplateCallable(const Model::UpdateProvisioningTemplateRequest& request) const;

        /**
         * <p>Updates a fleet provisioning template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateProvisioningTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProvisioningTemplateAsync(const Model::UpdateProvisioningTemplateRequest& request, const UpdateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a role alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateRoleAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoleAliasOutcome UpdateRoleAlias(const Model::UpdateRoleAliasRequest& request) const;

        /**
         * <p>Updates a role alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateRoleAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoleAliasOutcomeCallable UpdateRoleAliasCallable(const Model::UpdateRoleAliasRequest& request) const;

        /**
         * <p>Updates a role alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateRoleAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoleAliasAsync(const Model::UpdateRoleAliasRequest& request, const UpdateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a scheduled audit, including which checks are performed and how often
         * the audit takes place.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateScheduledAudit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScheduledAuditOutcome UpdateScheduledAudit(const Model::UpdateScheduledAuditRequest& request) const;

        /**
         * <p>Updates a scheduled audit, including which checks are performed and how often
         * the audit takes place.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateScheduledAudit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScheduledAuditOutcomeCallable UpdateScheduledAuditCallable(const Model::UpdateScheduledAuditRequest& request) const;

        /**
         * <p>Updates a scheduled audit, including which checks are performed and how often
         * the audit takes place.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateScheduledAudit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScheduledAuditAsync(const Model::UpdateScheduledAuditRequest& request, const UpdateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Device Defender security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityProfileOutcome UpdateSecurityProfile(const Model::UpdateSecurityProfileRequest& request) const;

        /**
         * <p>Updates a Device Defender security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateSecurityProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityProfileOutcomeCallable UpdateSecurityProfileCallable(const Model::UpdateSecurityProfileRequest& request) const;

        /**
         * <p>Updates a Device Defender security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateSecurityProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityProfileAsync(const Model::UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing stream. The stream version will be incremented by
         * one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamOutcome UpdateStream(const Model::UpdateStreamRequest& request) const;

        /**
         * <p>Updates an existing stream. The stream version will be incremented by
         * one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamOutcomeCallable UpdateStreamCallable(const Model::UpdateStreamRequest& request) const;

        /**
         * <p>Updates an existing stream. The stream version will be incremented by
         * one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamAsync(const Model::UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the data for a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThing">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateThingOutcome UpdateThing(const Model::UpdateThingRequest& request) const;

        /**
         * <p>Updates the data for a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThing">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThingOutcomeCallable UpdateThingCallable(const Model::UpdateThingRequest& request) const;

        /**
         * <p>Updates the data for a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThing">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThingAsync(const Model::UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThingGroupOutcome UpdateThingGroup(const Model::UpdateThingGroupRequest& request) const;

        /**
         * <p>Update a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThingGroupOutcomeCallable UpdateThingGroupCallable(const Model::UpdateThingGroupRequest& request) const;

        /**
         * <p>Update a thing group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThingGroupAsync(const Model::UpdateThingGroupRequest& request, const UpdateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the groups to which the thing belongs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThingGroupsForThing">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThingGroupsForThingOutcome UpdateThingGroupsForThing(const Model::UpdateThingGroupsForThingRequest& request) const;

        /**
         * <p>Updates the groups to which the thing belongs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThingGroupsForThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThingGroupsForThingOutcomeCallable UpdateThingGroupsForThingCallable(const Model::UpdateThingGroupsForThingRequest& request) const;

        /**
         * <p>Updates the groups to which the thing belongs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThingGroupsForThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThingGroupsForThingAsync(const Model::UpdateThingGroupsForThingRequest& request, const UpdateThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a topic rule destination. You use this to change the status, endpoint
         * URL, or confirmation URL of the destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTopicRuleDestinationOutcome UpdateTopicRuleDestination(const Model::UpdateTopicRuleDestinationRequest& request) const;

        /**
         * <p>Updates a topic rule destination. You use this to change the status, endpoint
         * URL, or confirmation URL of the destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTopicRuleDestinationOutcomeCallable UpdateTopicRuleDestinationCallable(const Model::UpdateTopicRuleDestinationRequest& request) const;

        /**
         * <p>Updates a topic rule destination. You use this to change the status, endpoint
         * URL, or confirmation URL of the destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateTopicRuleDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTopicRuleDestinationAsync(const Model::UpdateTopicRuleDestinationRequest& request, const UpdateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates a Device Defender security profile behaviors
         * specification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ValidateSecurityProfileBehaviors">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateSecurityProfileBehaviorsOutcome ValidateSecurityProfileBehaviors(const Model::ValidateSecurityProfileBehaviorsRequest& request) const;

        /**
         * <p>Validates a Device Defender security profile behaviors
         * specification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ValidateSecurityProfileBehaviors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateSecurityProfileBehaviorsOutcomeCallable ValidateSecurityProfileBehaviorsCallable(const Model::ValidateSecurityProfileBehaviorsRequest& request) const;

        /**
         * <p>Validates a Device Defender security profile behaviors
         * specification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ValidateSecurityProfileBehaviors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateSecurityProfileBehaviorsAsync(const Model::ValidateSecurityProfileBehaviorsRequest& request, const ValidateSecurityProfileBehaviorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptCertificateTransferAsyncHelper(const Model::AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddThingToBillingGroupAsyncHelper(const Model::AddThingToBillingGroupRequest& request, const AddThingToBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddThingToThingGroupAsyncHelper(const Model::AddThingToThingGroupRequest& request, const AddThingToThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateTargetsWithJobAsyncHelper(const Model::AssociateTargetsWithJobRequest& request, const AssociateTargetsWithJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachPolicyAsyncHelper(const Model::AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachSecurityProfileAsyncHelper(const Model::AttachSecurityProfileRequest& request, const AttachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachThingPrincipalAsyncHelper(const Model::AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelAuditMitigationActionsTaskAsyncHelper(const Model::CancelAuditMitigationActionsTaskRequest& request, const CancelAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelAuditTaskAsyncHelper(const Model::CancelAuditTaskRequest& request, const CancelAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelCertificateTransferAsyncHelper(const Model::CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelJobAsyncHelper(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelJobExecutionAsyncHelper(const Model::CancelJobExecutionRequest& request, const CancelJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ClearDefaultAuthorizerAsyncHelper(const Model::ClearDefaultAuthorizerRequest& request, const ClearDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmTopicRuleDestinationAsyncHelper(const Model::ConfirmTopicRuleDestinationRequest& request, const ConfirmTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAuditSuppressionAsyncHelper(const Model::CreateAuditSuppressionRequest& request, const CreateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAuthorizerAsyncHelper(const Model::CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBillingGroupAsyncHelper(const Model::CreateBillingGroupRequest& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCertificateFromCsrAsyncHelper(const Model::CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDimensionAsyncHelper(const Model::CreateDimensionRequest& request, const CreateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainConfigurationAsyncHelper(const Model::CreateDomainConfigurationRequest& request, const CreateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDynamicThingGroupAsyncHelper(const Model::CreateDynamicThingGroupRequest& request, const CreateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateKeysAndCertificateAsyncHelper(const Model::CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMitigationActionAsyncHelper(const Model::CreateMitigationActionRequest& request, const CreateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOTAUpdateAsyncHelper(const Model::CreateOTAUpdateRequest& request, const CreateOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePolicyAsyncHelper(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePolicyVersionAsyncHelper(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProvisioningClaimAsyncHelper(const Model::CreateProvisioningClaimRequest& request, const CreateProvisioningClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProvisioningTemplateAsyncHelper(const Model::CreateProvisioningTemplateRequest& request, const CreateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProvisioningTemplateVersionAsyncHelper(const Model::CreateProvisioningTemplateVersionRequest& request, const CreateProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoleAliasAsyncHelper(const Model::CreateRoleAliasRequest& request, const CreateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateScheduledAuditAsyncHelper(const Model::CreateScheduledAuditRequest& request, const CreateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSecurityProfileAsyncHelper(const Model::CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamAsyncHelper(const Model::CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateThingAsyncHelper(const Model::CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateThingGroupAsyncHelper(const Model::CreateThingGroupRequest& request, const CreateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateThingTypeAsyncHelper(const Model::CreateThingTypeRequest& request, const CreateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTopicRuleAsyncHelper(const Model::CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTopicRuleDestinationAsyncHelper(const Model::CreateTopicRuleDestinationRequest& request, const CreateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountAuditConfigurationAsyncHelper(const Model::DeleteAccountAuditConfigurationRequest& request, const DeleteAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAuditSuppressionAsyncHelper(const Model::DeleteAuditSuppressionRequest& request, const DeleteAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAuthorizerAsyncHelper(const Model::DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBillingGroupAsyncHelper(const Model::DeleteBillingGroupRequest& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCACertificateAsyncHelper(const Model::DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCertificateAsyncHelper(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDimensionAsyncHelper(const Model::DeleteDimensionRequest& request, const DeleteDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainConfigurationAsyncHelper(const Model::DeleteDomainConfigurationRequest& request, const DeleteDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDynamicThingGroupAsyncHelper(const Model::DeleteDynamicThingGroupRequest& request, const DeleteDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobAsyncHelper(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobExecutionAsyncHelper(const Model::DeleteJobExecutionRequest& request, const DeleteJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMitigationActionAsyncHelper(const Model::DeleteMitigationActionRequest& request, const DeleteMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOTAUpdateAsyncHelper(const Model::DeleteOTAUpdateRequest& request, const DeleteOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyVersionAsyncHelper(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProvisioningTemplateAsyncHelper(const Model::DeleteProvisioningTemplateRequest& request, const DeleteProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProvisioningTemplateVersionAsyncHelper(const Model::DeleteProvisioningTemplateVersionRequest& request, const DeleteProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRegistrationCodeAsyncHelper(const Model::DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoleAliasAsyncHelper(const Model::DeleteRoleAliasRequest& request, const DeleteRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScheduledAuditAsyncHelper(const Model::DeleteScheduledAuditRequest& request, const DeleteScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSecurityProfileAsyncHelper(const Model::DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamAsyncHelper(const Model::DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteThingAsyncHelper(const Model::DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteThingGroupAsyncHelper(const Model::DeleteThingGroupRequest& request, const DeleteThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteThingTypeAsyncHelper(const Model::DeleteThingTypeRequest& request, const DeleteThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTopicRuleAsyncHelper(const Model::DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTopicRuleDestinationAsyncHelper(const Model::DeleteTopicRuleDestinationRequest& request, const DeleteTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteV2LoggingLevelAsyncHelper(const Model::DeleteV2LoggingLevelRequest& request, const DeleteV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeprecateThingTypeAsyncHelper(const Model::DeprecateThingTypeRequest& request, const DeprecateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAuditConfigurationAsyncHelper(const Model::DescribeAccountAuditConfigurationRequest& request, const DescribeAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAuditFindingAsyncHelper(const Model::DescribeAuditFindingRequest& request, const DescribeAuditFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAuditMitigationActionsTaskAsyncHelper(const Model::DescribeAuditMitigationActionsTaskRequest& request, const DescribeAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAuditSuppressionAsyncHelper(const Model::DescribeAuditSuppressionRequest& request, const DescribeAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAuditTaskAsyncHelper(const Model::DescribeAuditTaskRequest& request, const DescribeAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAuthorizerAsyncHelper(const Model::DescribeAuthorizerRequest& request, const DescribeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBillingGroupAsyncHelper(const Model::DescribeBillingGroupRequest& request, const DescribeBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCACertificateAsyncHelper(const Model::DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCertificateAsyncHelper(const Model::DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDefaultAuthorizerAsyncHelper(const Model::DescribeDefaultAuthorizerRequest& request, const DescribeDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDimensionAsyncHelper(const Model::DescribeDimensionRequest& request, const DescribeDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainConfigurationAsyncHelper(const Model::DescribeDomainConfigurationRequest& request, const DescribeDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointAsyncHelper(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventConfigurationsAsyncHelper(const Model::DescribeEventConfigurationsRequest& request, const DescribeEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIndexAsyncHelper(const Model::DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobAsyncHelper(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobExecutionAsyncHelper(const Model::DescribeJobExecutionRequest& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMitigationActionAsyncHelper(const Model::DescribeMitigationActionRequest& request, const DescribeMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisioningTemplateAsyncHelper(const Model::DescribeProvisioningTemplateRequest& request, const DescribeProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProvisioningTemplateVersionAsyncHelper(const Model::DescribeProvisioningTemplateVersionRequest& request, const DescribeProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRoleAliasAsyncHelper(const Model::DescribeRoleAliasRequest& request, const DescribeRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduledAuditAsyncHelper(const Model::DescribeScheduledAuditRequest& request, const DescribeScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSecurityProfileAsyncHelper(const Model::DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStreamAsyncHelper(const Model::DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeThingAsyncHelper(const Model::DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeThingGroupAsyncHelper(const Model::DescribeThingGroupRequest& request, const DescribeThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeThingRegistrationTaskAsyncHelper(const Model::DescribeThingRegistrationTaskRequest& request, const DescribeThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeThingTypeAsyncHelper(const Model::DescribeThingTypeRequest& request, const DescribeThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachPolicyAsyncHelper(const Model::DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachSecurityProfileAsyncHelper(const Model::DetachSecurityProfileRequest& request, const DetachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachThingPrincipalAsyncHelper(const Model::DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableTopicRuleAsyncHelper(const Model::DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableTopicRuleAsyncHelper(const Model::EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCardinalityAsyncHelper(const Model::GetCardinalityRequest& request, const GetCardinalityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEffectivePoliciesAsyncHelper(const Model::GetEffectivePoliciesRequest& request, const GetEffectivePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIndexingConfigurationAsyncHelper(const Model::GetIndexingConfigurationRequest& request, const GetIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobDocumentAsyncHelper(const Model::GetJobDocumentRequest& request, const GetJobDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoggingOptionsAsyncHelper(const Model::GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOTAUpdateAsyncHelper(const Model::GetOTAUpdateRequest& request, const GetOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPercentilesAsyncHelper(const Model::GetPercentilesRequest& request, const GetPercentilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyVersionAsyncHelper(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegistrationCodeAsyncHelper(const Model::GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStatisticsAsyncHelper(const Model::GetStatisticsRequest& request, const GetStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTopicRuleAsyncHelper(const Model::GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTopicRuleDestinationAsyncHelper(const Model::GetTopicRuleDestinationRequest& request, const GetTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetV2LoggingOptionsAsyncHelper(const Model::GetV2LoggingOptionsRequest& request, const GetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListActiveViolationsAsyncHelper(const Model::ListActiveViolationsRequest& request, const ListActiveViolationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedPoliciesAsyncHelper(const Model::ListAttachedPoliciesRequest& request, const ListAttachedPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAuditFindingsAsyncHelper(const Model::ListAuditFindingsRequest& request, const ListAuditFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAuditMitigationActionsExecutionsAsyncHelper(const Model::ListAuditMitigationActionsExecutionsRequest& request, const ListAuditMitigationActionsExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAuditMitigationActionsTasksAsyncHelper(const Model::ListAuditMitigationActionsTasksRequest& request, const ListAuditMitigationActionsTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAuditSuppressionsAsyncHelper(const Model::ListAuditSuppressionsRequest& request, const ListAuditSuppressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAuditTasksAsyncHelper(const Model::ListAuditTasksRequest& request, const ListAuditTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAuthorizersAsyncHelper(const Model::ListAuthorizersRequest& request, const ListAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBillingGroupsAsyncHelper(const Model::ListBillingGroupsRequest& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCACertificatesAsyncHelper(const Model::ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCertificatesAsyncHelper(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCertificatesByCAAsyncHelper(const Model::ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDimensionsAsyncHelper(const Model::ListDimensionsRequest& request, const ListDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainConfigurationsAsyncHelper(const Model::ListDomainConfigurationsRequest& request, const ListDomainConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIndicesAsyncHelper(const Model::ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobExecutionsForJobAsyncHelper(const Model::ListJobExecutionsForJobRequest& request, const ListJobExecutionsForJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobExecutionsForThingAsyncHelper(const Model::ListJobExecutionsForThingRequest& request, const ListJobExecutionsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMitigationActionsAsyncHelper(const Model::ListMitigationActionsRequest& request, const ListMitigationActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOTAUpdatesAsyncHelper(const Model::ListOTAUpdatesRequest& request, const ListOTAUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOutgoingCertificatesAsyncHelper(const Model::ListOutgoingCertificatesRequest& request, const ListOutgoingCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPoliciesAsyncHelper(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPolicyVersionsAsyncHelper(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPrincipalThingsAsyncHelper(const Model::ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProvisioningTemplateVersionsAsyncHelper(const Model::ListProvisioningTemplateVersionsRequest& request, const ListProvisioningTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProvisioningTemplatesAsyncHelper(const Model::ListProvisioningTemplatesRequest& request, const ListProvisioningTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoleAliasesAsyncHelper(const Model::ListRoleAliasesRequest& request, const ListRoleAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListScheduledAuditsAsyncHelper(const Model::ListScheduledAuditsRequest& request, const ListScheduledAuditsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityProfilesAsyncHelper(const Model::ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityProfilesForTargetAsyncHelper(const Model::ListSecurityProfilesForTargetRequest& request, const ListSecurityProfilesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamsAsyncHelper(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTargetsForPolicyAsyncHelper(const Model::ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTargetsForSecurityProfileAsyncHelper(const Model::ListTargetsForSecurityProfileRequest& request, const ListTargetsForSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingGroupsAsyncHelper(const Model::ListThingGroupsRequest& request, const ListThingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingGroupsForThingAsyncHelper(const Model::ListThingGroupsForThingRequest& request, const ListThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingPrincipalsAsyncHelper(const Model::ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingRegistrationTaskReportsAsyncHelper(const Model::ListThingRegistrationTaskReportsRequest& request, const ListThingRegistrationTaskReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingRegistrationTasksAsyncHelper(const Model::ListThingRegistrationTasksRequest& request, const ListThingRegistrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingTypesAsyncHelper(const Model::ListThingTypesRequest& request, const ListThingTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingsAsyncHelper(const Model::ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingsInBillingGroupAsyncHelper(const Model::ListThingsInBillingGroupRequest& request, const ListThingsInBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThingsInThingGroupAsyncHelper(const Model::ListThingsInThingGroupRequest& request, const ListThingsInThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTopicRuleDestinationsAsyncHelper(const Model::ListTopicRuleDestinationsRequest& request, const ListTopicRuleDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTopicRulesAsyncHelper(const Model::ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListV2LoggingLevelsAsyncHelper(const Model::ListV2LoggingLevelsRequest& request, const ListV2LoggingLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListViolationEventsAsyncHelper(const Model::ListViolationEventsRequest& request, const ListViolationEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterCACertificateAsyncHelper(const Model::RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterCertificateAsyncHelper(const Model::RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterCertificateWithoutCAAsyncHelper(const Model::RegisterCertificateWithoutCARequest& request, const RegisterCertificateWithoutCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterThingAsyncHelper(const Model::RegisterThingRequest& request, const RegisterThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectCertificateTransferAsyncHelper(const Model::RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveThingFromBillingGroupAsyncHelper(const Model::RemoveThingFromBillingGroupRequest& request, const RemoveThingFromBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveThingFromThingGroupAsyncHelper(const Model::RemoveThingFromThingGroupRequest& request, const RemoveThingFromThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReplaceTopicRuleAsyncHelper(const Model::ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchIndexAsyncHelper(const Model::SearchIndexRequest& request, const SearchIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDefaultAuthorizerAsyncHelper(const Model::SetDefaultAuthorizerRequest& request, const SetDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDefaultPolicyVersionAsyncHelper(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetLoggingOptionsAsyncHelper(const Model::SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetV2LoggingLevelAsyncHelper(const Model::SetV2LoggingLevelRequest& request, const SetV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetV2LoggingOptionsAsyncHelper(const Model::SetV2LoggingOptionsRequest& request, const SetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartAuditMitigationActionsTaskAsyncHelper(const Model::StartAuditMitigationActionsTaskRequest& request, const StartAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartOnDemandAuditTaskAsyncHelper(const Model::StartOnDemandAuditTaskRequest& request, const StartOnDemandAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartThingRegistrationTaskAsyncHelper(const Model::StartThingRegistrationTaskRequest& request, const StartThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopThingRegistrationTaskAsyncHelper(const Model::StopThingRegistrationTaskRequest& request, const StopThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestAuthorizationAsyncHelper(const Model::TestAuthorizationRequest& request, const TestAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestInvokeAuthorizerAsyncHelper(const Model::TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TransferCertificateAsyncHelper(const Model::TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountAuditConfigurationAsyncHelper(const Model::UpdateAccountAuditConfigurationRequest& request, const UpdateAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAuditSuppressionAsyncHelper(const Model::UpdateAuditSuppressionRequest& request, const UpdateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAuthorizerAsyncHelper(const Model::UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBillingGroupAsyncHelper(const Model::UpdateBillingGroupRequest& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCACertificateAsyncHelper(const Model::UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCertificateAsyncHelper(const Model::UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDimensionAsyncHelper(const Model::UpdateDimensionRequest& request, const UpdateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainConfigurationAsyncHelper(const Model::UpdateDomainConfigurationRequest& request, const UpdateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDynamicThingGroupAsyncHelper(const Model::UpdateDynamicThingGroupRequest& request, const UpdateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEventConfigurationsAsyncHelper(const Model::UpdateEventConfigurationsRequest& request, const UpdateEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIndexingConfigurationAsyncHelper(const Model::UpdateIndexingConfigurationRequest& request, const UpdateIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobAsyncHelper(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMitigationActionAsyncHelper(const Model::UpdateMitigationActionRequest& request, const UpdateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProvisioningTemplateAsyncHelper(const Model::UpdateProvisioningTemplateRequest& request, const UpdateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoleAliasAsyncHelper(const Model::UpdateRoleAliasRequest& request, const UpdateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateScheduledAuditAsyncHelper(const Model::UpdateScheduledAuditRequest& request, const UpdateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSecurityProfileAsyncHelper(const Model::UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStreamAsyncHelper(const Model::UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThingAsyncHelper(const Model::UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThingGroupAsyncHelper(const Model::UpdateThingGroupRequest& request, const UpdateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThingGroupsForThingAsyncHelper(const Model::UpdateThingGroupsForThingRequest& request, const UpdateThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTopicRuleDestinationAsyncHelper(const Model::UpdateTopicRuleDestinationRequest& request, const UpdateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ValidateSecurityProfileBehaviorsAsyncHelper(const Model::ValidateSecurityProfileBehaviorsRequest& request, const ValidateSecurityProfileBehaviorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoT
} // namespace Aws
