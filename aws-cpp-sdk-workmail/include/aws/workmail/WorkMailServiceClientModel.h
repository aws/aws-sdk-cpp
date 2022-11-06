/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/workmail/WorkMailErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/workmail/WorkMailEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WorkMailClient header */
#include <aws/workmail/model/AssociateDelegateToResourceResult.h>
#include <aws/workmail/model/AssociateMemberToGroupResult.h>
#include <aws/workmail/model/AssumeImpersonationRoleResult.h>
#include <aws/workmail/model/CancelMailboxExportJobResult.h>
#include <aws/workmail/model/CreateAliasResult.h>
#include <aws/workmail/model/CreateAvailabilityConfigurationResult.h>
#include <aws/workmail/model/CreateGroupResult.h>
#include <aws/workmail/model/CreateImpersonationRoleResult.h>
#include <aws/workmail/model/CreateMobileDeviceAccessRuleResult.h>
#include <aws/workmail/model/CreateOrganizationResult.h>
#include <aws/workmail/model/CreateResourceResult.h>
#include <aws/workmail/model/CreateUserResult.h>
#include <aws/workmail/model/DeleteAccessControlRuleResult.h>
#include <aws/workmail/model/DeleteAliasResult.h>
#include <aws/workmail/model/DeleteAvailabilityConfigurationResult.h>
#include <aws/workmail/model/DeleteEmailMonitoringConfigurationResult.h>
#include <aws/workmail/model/DeleteGroupResult.h>
#include <aws/workmail/model/DeleteImpersonationRoleResult.h>
#include <aws/workmail/model/DeleteMailboxPermissionsResult.h>
#include <aws/workmail/model/DeleteMobileDeviceAccessOverrideResult.h>
#include <aws/workmail/model/DeleteMobileDeviceAccessRuleResult.h>
#include <aws/workmail/model/DeleteOrganizationResult.h>
#include <aws/workmail/model/DeleteResourceResult.h>
#include <aws/workmail/model/DeleteRetentionPolicyResult.h>
#include <aws/workmail/model/DeleteUserResult.h>
#include <aws/workmail/model/DeregisterFromWorkMailResult.h>
#include <aws/workmail/model/DeregisterMailDomainResult.h>
#include <aws/workmail/model/DescribeEmailMonitoringConfigurationResult.h>
#include <aws/workmail/model/DescribeGroupResult.h>
#include <aws/workmail/model/DescribeInboundDmarcSettingsResult.h>
#include <aws/workmail/model/DescribeMailboxExportJobResult.h>
#include <aws/workmail/model/DescribeOrganizationResult.h>
#include <aws/workmail/model/DescribeResourceResult.h>
#include <aws/workmail/model/DescribeUserResult.h>
#include <aws/workmail/model/DisassociateDelegateFromResourceResult.h>
#include <aws/workmail/model/DisassociateMemberFromGroupResult.h>
#include <aws/workmail/model/GetAccessControlEffectResult.h>
#include <aws/workmail/model/GetDefaultRetentionPolicyResult.h>
#include <aws/workmail/model/GetImpersonationRoleResult.h>
#include <aws/workmail/model/GetImpersonationRoleEffectResult.h>
#include <aws/workmail/model/GetMailDomainResult.h>
#include <aws/workmail/model/GetMailboxDetailsResult.h>
#include <aws/workmail/model/GetMobileDeviceAccessEffectResult.h>
#include <aws/workmail/model/GetMobileDeviceAccessOverrideResult.h>
#include <aws/workmail/model/ListAccessControlRulesResult.h>
#include <aws/workmail/model/ListAliasesResult.h>
#include <aws/workmail/model/ListAvailabilityConfigurationsResult.h>
#include <aws/workmail/model/ListGroupMembersResult.h>
#include <aws/workmail/model/ListGroupsResult.h>
#include <aws/workmail/model/ListImpersonationRolesResult.h>
#include <aws/workmail/model/ListMailDomainsResult.h>
#include <aws/workmail/model/ListMailboxExportJobsResult.h>
#include <aws/workmail/model/ListMailboxPermissionsResult.h>
#include <aws/workmail/model/ListMobileDeviceAccessOverridesResult.h>
#include <aws/workmail/model/ListMobileDeviceAccessRulesResult.h>
#include <aws/workmail/model/ListOrganizationsResult.h>
#include <aws/workmail/model/ListResourceDelegatesResult.h>
#include <aws/workmail/model/ListResourcesResult.h>
#include <aws/workmail/model/ListTagsForResourceResult.h>
#include <aws/workmail/model/ListUsersResult.h>
#include <aws/workmail/model/PutAccessControlRuleResult.h>
#include <aws/workmail/model/PutEmailMonitoringConfigurationResult.h>
#include <aws/workmail/model/PutInboundDmarcSettingsResult.h>
#include <aws/workmail/model/PutMailboxPermissionsResult.h>
#include <aws/workmail/model/PutMobileDeviceAccessOverrideResult.h>
#include <aws/workmail/model/PutRetentionPolicyResult.h>
#include <aws/workmail/model/RegisterMailDomainResult.h>
#include <aws/workmail/model/RegisterToWorkMailResult.h>
#include <aws/workmail/model/ResetPasswordResult.h>
#include <aws/workmail/model/StartMailboxExportJobResult.h>
#include <aws/workmail/model/TagResourceResult.h>
#include <aws/workmail/model/TestAvailabilityConfigurationResult.h>
#include <aws/workmail/model/UntagResourceResult.h>
#include <aws/workmail/model/UpdateAvailabilityConfigurationResult.h>
#include <aws/workmail/model/UpdateDefaultMailDomainResult.h>
#include <aws/workmail/model/UpdateImpersonationRoleResult.h>
#include <aws/workmail/model/UpdateMailboxQuotaResult.h>
#include <aws/workmail/model/UpdateMobileDeviceAccessRuleResult.h>
#include <aws/workmail/model/UpdatePrimaryEmailAddressResult.h>
#include <aws/workmail/model/UpdateResourceResult.h>
/* End of service model headers required in WorkMailClient header */

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

  namespace WorkMail
  {
    using WorkMailClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using WorkMailEndpointProviderBase = Aws::WorkMail::Endpoint::WorkMailEndpointProviderBase;
    using WorkMailEndpointProvider = Aws::WorkMail::Endpoint::WorkMailEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WorkMailClient header */
      class AssociateDelegateToResourceRequest;
      class AssociateMemberToGroupRequest;
      class AssumeImpersonationRoleRequest;
      class CancelMailboxExportJobRequest;
      class CreateAliasRequest;
      class CreateAvailabilityConfigurationRequest;
      class CreateGroupRequest;
      class CreateImpersonationRoleRequest;
      class CreateMobileDeviceAccessRuleRequest;
      class CreateOrganizationRequest;
      class CreateResourceRequest;
      class CreateUserRequest;
      class DeleteAccessControlRuleRequest;
      class DeleteAliasRequest;
      class DeleteAvailabilityConfigurationRequest;
      class DeleteEmailMonitoringConfigurationRequest;
      class DeleteGroupRequest;
      class DeleteImpersonationRoleRequest;
      class DeleteMailboxPermissionsRequest;
      class DeleteMobileDeviceAccessOverrideRequest;
      class DeleteMobileDeviceAccessRuleRequest;
      class DeleteOrganizationRequest;
      class DeleteResourceRequest;
      class DeleteRetentionPolicyRequest;
      class DeleteUserRequest;
      class DeregisterFromWorkMailRequest;
      class DeregisterMailDomainRequest;
      class DescribeEmailMonitoringConfigurationRequest;
      class DescribeGroupRequest;
      class DescribeInboundDmarcSettingsRequest;
      class DescribeMailboxExportJobRequest;
      class DescribeOrganizationRequest;
      class DescribeResourceRequest;
      class DescribeUserRequest;
      class DisassociateDelegateFromResourceRequest;
      class DisassociateMemberFromGroupRequest;
      class GetAccessControlEffectRequest;
      class GetDefaultRetentionPolicyRequest;
      class GetImpersonationRoleRequest;
      class GetImpersonationRoleEffectRequest;
      class GetMailDomainRequest;
      class GetMailboxDetailsRequest;
      class GetMobileDeviceAccessEffectRequest;
      class GetMobileDeviceAccessOverrideRequest;
      class ListAccessControlRulesRequest;
      class ListAliasesRequest;
      class ListAvailabilityConfigurationsRequest;
      class ListGroupMembersRequest;
      class ListGroupsRequest;
      class ListImpersonationRolesRequest;
      class ListMailDomainsRequest;
      class ListMailboxExportJobsRequest;
      class ListMailboxPermissionsRequest;
      class ListMobileDeviceAccessOverridesRequest;
      class ListMobileDeviceAccessRulesRequest;
      class ListOrganizationsRequest;
      class ListResourceDelegatesRequest;
      class ListResourcesRequest;
      class ListTagsForResourceRequest;
      class ListUsersRequest;
      class PutAccessControlRuleRequest;
      class PutEmailMonitoringConfigurationRequest;
      class PutInboundDmarcSettingsRequest;
      class PutMailboxPermissionsRequest;
      class PutMobileDeviceAccessOverrideRequest;
      class PutRetentionPolicyRequest;
      class RegisterMailDomainRequest;
      class RegisterToWorkMailRequest;
      class ResetPasswordRequest;
      class StartMailboxExportJobRequest;
      class TagResourceRequest;
      class TestAvailabilityConfigurationRequest;
      class UntagResourceRequest;
      class UpdateAvailabilityConfigurationRequest;
      class UpdateDefaultMailDomainRequest;
      class UpdateImpersonationRoleRequest;
      class UpdateMailboxQuotaRequest;
      class UpdateMobileDeviceAccessRuleRequest;
      class UpdatePrimaryEmailAddressRequest;
      class UpdateResourceRequest;
      /* End of service model forward declarations required in WorkMailClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateDelegateToResourceResult, WorkMailError> AssociateDelegateToResourceOutcome;
      typedef Aws::Utils::Outcome<AssociateMemberToGroupResult, WorkMailError> AssociateMemberToGroupOutcome;
      typedef Aws::Utils::Outcome<AssumeImpersonationRoleResult, WorkMailError> AssumeImpersonationRoleOutcome;
      typedef Aws::Utils::Outcome<CancelMailboxExportJobResult, WorkMailError> CancelMailboxExportJobOutcome;
      typedef Aws::Utils::Outcome<CreateAliasResult, WorkMailError> CreateAliasOutcome;
      typedef Aws::Utils::Outcome<CreateAvailabilityConfigurationResult, WorkMailError> CreateAvailabilityConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateGroupResult, WorkMailError> CreateGroupOutcome;
      typedef Aws::Utils::Outcome<CreateImpersonationRoleResult, WorkMailError> CreateImpersonationRoleOutcome;
      typedef Aws::Utils::Outcome<CreateMobileDeviceAccessRuleResult, WorkMailError> CreateMobileDeviceAccessRuleOutcome;
      typedef Aws::Utils::Outcome<CreateOrganizationResult, WorkMailError> CreateOrganizationOutcome;
      typedef Aws::Utils::Outcome<CreateResourceResult, WorkMailError> CreateResourceOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, WorkMailError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<DeleteAccessControlRuleResult, WorkMailError> DeleteAccessControlRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteAliasResult, WorkMailError> DeleteAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteAvailabilityConfigurationResult, WorkMailError> DeleteAvailabilityConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteEmailMonitoringConfigurationResult, WorkMailError> DeleteEmailMonitoringConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupResult, WorkMailError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteImpersonationRoleResult, WorkMailError> DeleteImpersonationRoleOutcome;
      typedef Aws::Utils::Outcome<DeleteMailboxPermissionsResult, WorkMailError> DeleteMailboxPermissionsOutcome;
      typedef Aws::Utils::Outcome<DeleteMobileDeviceAccessOverrideResult, WorkMailError> DeleteMobileDeviceAccessOverrideOutcome;
      typedef Aws::Utils::Outcome<DeleteMobileDeviceAccessRuleResult, WorkMailError> DeleteMobileDeviceAccessRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteOrganizationResult, WorkMailError> DeleteOrganizationOutcome;
      typedef Aws::Utils::Outcome<DeleteResourceResult, WorkMailError> DeleteResourceOutcome;
      typedef Aws::Utils::Outcome<DeleteRetentionPolicyResult, WorkMailError> DeleteRetentionPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, WorkMailError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DeregisterFromWorkMailResult, WorkMailError> DeregisterFromWorkMailOutcome;
      typedef Aws::Utils::Outcome<DeregisterMailDomainResult, WorkMailError> DeregisterMailDomainOutcome;
      typedef Aws::Utils::Outcome<DescribeEmailMonitoringConfigurationResult, WorkMailError> DescribeEmailMonitoringConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeGroupResult, WorkMailError> DescribeGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeInboundDmarcSettingsResult, WorkMailError> DescribeInboundDmarcSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeMailboxExportJobResult, WorkMailError> DescribeMailboxExportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationResult, WorkMailError> DescribeOrganizationOutcome;
      typedef Aws::Utils::Outcome<DescribeResourceResult, WorkMailError> DescribeResourceOutcome;
      typedef Aws::Utils::Outcome<DescribeUserResult, WorkMailError> DescribeUserOutcome;
      typedef Aws::Utils::Outcome<DisassociateDelegateFromResourceResult, WorkMailError> DisassociateDelegateFromResourceOutcome;
      typedef Aws::Utils::Outcome<DisassociateMemberFromGroupResult, WorkMailError> DisassociateMemberFromGroupOutcome;
      typedef Aws::Utils::Outcome<GetAccessControlEffectResult, WorkMailError> GetAccessControlEffectOutcome;
      typedef Aws::Utils::Outcome<GetDefaultRetentionPolicyResult, WorkMailError> GetDefaultRetentionPolicyOutcome;
      typedef Aws::Utils::Outcome<GetImpersonationRoleResult, WorkMailError> GetImpersonationRoleOutcome;
      typedef Aws::Utils::Outcome<GetImpersonationRoleEffectResult, WorkMailError> GetImpersonationRoleEffectOutcome;
      typedef Aws::Utils::Outcome<GetMailDomainResult, WorkMailError> GetMailDomainOutcome;
      typedef Aws::Utils::Outcome<GetMailboxDetailsResult, WorkMailError> GetMailboxDetailsOutcome;
      typedef Aws::Utils::Outcome<GetMobileDeviceAccessEffectResult, WorkMailError> GetMobileDeviceAccessEffectOutcome;
      typedef Aws::Utils::Outcome<GetMobileDeviceAccessOverrideResult, WorkMailError> GetMobileDeviceAccessOverrideOutcome;
      typedef Aws::Utils::Outcome<ListAccessControlRulesResult, WorkMailError> ListAccessControlRulesOutcome;
      typedef Aws::Utils::Outcome<ListAliasesResult, WorkMailError> ListAliasesOutcome;
      typedef Aws::Utils::Outcome<ListAvailabilityConfigurationsResult, WorkMailError> ListAvailabilityConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListGroupMembersResult, WorkMailError> ListGroupMembersOutcome;
      typedef Aws::Utils::Outcome<ListGroupsResult, WorkMailError> ListGroupsOutcome;
      typedef Aws::Utils::Outcome<ListImpersonationRolesResult, WorkMailError> ListImpersonationRolesOutcome;
      typedef Aws::Utils::Outcome<ListMailDomainsResult, WorkMailError> ListMailDomainsOutcome;
      typedef Aws::Utils::Outcome<ListMailboxExportJobsResult, WorkMailError> ListMailboxExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListMailboxPermissionsResult, WorkMailError> ListMailboxPermissionsOutcome;
      typedef Aws::Utils::Outcome<ListMobileDeviceAccessOverridesResult, WorkMailError> ListMobileDeviceAccessOverridesOutcome;
      typedef Aws::Utils::Outcome<ListMobileDeviceAccessRulesResult, WorkMailError> ListMobileDeviceAccessRulesOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationsResult, WorkMailError> ListOrganizationsOutcome;
      typedef Aws::Utils::Outcome<ListResourceDelegatesResult, WorkMailError> ListResourceDelegatesOutcome;
      typedef Aws::Utils::Outcome<ListResourcesResult, WorkMailError> ListResourcesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, WorkMailError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, WorkMailError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<PutAccessControlRuleResult, WorkMailError> PutAccessControlRuleOutcome;
      typedef Aws::Utils::Outcome<PutEmailMonitoringConfigurationResult, WorkMailError> PutEmailMonitoringConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutInboundDmarcSettingsResult, WorkMailError> PutInboundDmarcSettingsOutcome;
      typedef Aws::Utils::Outcome<PutMailboxPermissionsResult, WorkMailError> PutMailboxPermissionsOutcome;
      typedef Aws::Utils::Outcome<PutMobileDeviceAccessOverrideResult, WorkMailError> PutMobileDeviceAccessOverrideOutcome;
      typedef Aws::Utils::Outcome<PutRetentionPolicyResult, WorkMailError> PutRetentionPolicyOutcome;
      typedef Aws::Utils::Outcome<RegisterMailDomainResult, WorkMailError> RegisterMailDomainOutcome;
      typedef Aws::Utils::Outcome<RegisterToWorkMailResult, WorkMailError> RegisterToWorkMailOutcome;
      typedef Aws::Utils::Outcome<ResetPasswordResult, WorkMailError> ResetPasswordOutcome;
      typedef Aws::Utils::Outcome<StartMailboxExportJobResult, WorkMailError> StartMailboxExportJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, WorkMailError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestAvailabilityConfigurationResult, WorkMailError> TestAvailabilityConfigurationOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, WorkMailError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAvailabilityConfigurationResult, WorkMailError> UpdateAvailabilityConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateDefaultMailDomainResult, WorkMailError> UpdateDefaultMailDomainOutcome;
      typedef Aws::Utils::Outcome<UpdateImpersonationRoleResult, WorkMailError> UpdateImpersonationRoleOutcome;
      typedef Aws::Utils::Outcome<UpdateMailboxQuotaResult, WorkMailError> UpdateMailboxQuotaOutcome;
      typedef Aws::Utils::Outcome<UpdateMobileDeviceAccessRuleResult, WorkMailError> UpdateMobileDeviceAccessRuleOutcome;
      typedef Aws::Utils::Outcome<UpdatePrimaryEmailAddressResult, WorkMailError> UpdatePrimaryEmailAddressOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceResult, WorkMailError> UpdateResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateDelegateToResourceOutcome> AssociateDelegateToResourceOutcomeCallable;
      typedef std::future<AssociateMemberToGroupOutcome> AssociateMemberToGroupOutcomeCallable;
      typedef std::future<AssumeImpersonationRoleOutcome> AssumeImpersonationRoleOutcomeCallable;
      typedef std::future<CancelMailboxExportJobOutcome> CancelMailboxExportJobOutcomeCallable;
      typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
      typedef std::future<CreateAvailabilityConfigurationOutcome> CreateAvailabilityConfigurationOutcomeCallable;
      typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
      typedef std::future<CreateImpersonationRoleOutcome> CreateImpersonationRoleOutcomeCallable;
      typedef std::future<CreateMobileDeviceAccessRuleOutcome> CreateMobileDeviceAccessRuleOutcomeCallable;
      typedef std::future<CreateOrganizationOutcome> CreateOrganizationOutcomeCallable;
      typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<DeleteAccessControlRuleOutcome> DeleteAccessControlRuleOutcomeCallable;
      typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
      typedef std::future<DeleteAvailabilityConfigurationOutcome> DeleteAvailabilityConfigurationOutcomeCallable;
      typedef std::future<DeleteEmailMonitoringConfigurationOutcome> DeleteEmailMonitoringConfigurationOutcomeCallable;
      typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
      typedef std::future<DeleteImpersonationRoleOutcome> DeleteImpersonationRoleOutcomeCallable;
      typedef std::future<DeleteMailboxPermissionsOutcome> DeleteMailboxPermissionsOutcomeCallable;
      typedef std::future<DeleteMobileDeviceAccessOverrideOutcome> DeleteMobileDeviceAccessOverrideOutcomeCallable;
      typedef std::future<DeleteMobileDeviceAccessRuleOutcome> DeleteMobileDeviceAccessRuleOutcomeCallable;
      typedef std::future<DeleteOrganizationOutcome> DeleteOrganizationOutcomeCallable;
      typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
      typedef std::future<DeleteRetentionPolicyOutcome> DeleteRetentionPolicyOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DeregisterFromWorkMailOutcome> DeregisterFromWorkMailOutcomeCallable;
      typedef std::future<DeregisterMailDomainOutcome> DeregisterMailDomainOutcomeCallable;
      typedef std::future<DescribeEmailMonitoringConfigurationOutcome> DescribeEmailMonitoringConfigurationOutcomeCallable;
      typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
      typedef std::future<DescribeInboundDmarcSettingsOutcome> DescribeInboundDmarcSettingsOutcomeCallable;
      typedef std::future<DescribeMailboxExportJobOutcome> DescribeMailboxExportJobOutcomeCallable;
      typedef std::future<DescribeOrganizationOutcome> DescribeOrganizationOutcomeCallable;
      typedef std::future<DescribeResourceOutcome> DescribeResourceOutcomeCallable;
      typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
      typedef std::future<DisassociateDelegateFromResourceOutcome> DisassociateDelegateFromResourceOutcomeCallable;
      typedef std::future<DisassociateMemberFromGroupOutcome> DisassociateMemberFromGroupOutcomeCallable;
      typedef std::future<GetAccessControlEffectOutcome> GetAccessControlEffectOutcomeCallable;
      typedef std::future<GetDefaultRetentionPolicyOutcome> GetDefaultRetentionPolicyOutcomeCallable;
      typedef std::future<GetImpersonationRoleOutcome> GetImpersonationRoleOutcomeCallable;
      typedef std::future<GetImpersonationRoleEffectOutcome> GetImpersonationRoleEffectOutcomeCallable;
      typedef std::future<GetMailDomainOutcome> GetMailDomainOutcomeCallable;
      typedef std::future<GetMailboxDetailsOutcome> GetMailboxDetailsOutcomeCallable;
      typedef std::future<GetMobileDeviceAccessEffectOutcome> GetMobileDeviceAccessEffectOutcomeCallable;
      typedef std::future<GetMobileDeviceAccessOverrideOutcome> GetMobileDeviceAccessOverrideOutcomeCallable;
      typedef std::future<ListAccessControlRulesOutcome> ListAccessControlRulesOutcomeCallable;
      typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
      typedef std::future<ListAvailabilityConfigurationsOutcome> ListAvailabilityConfigurationsOutcomeCallable;
      typedef std::future<ListGroupMembersOutcome> ListGroupMembersOutcomeCallable;
      typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
      typedef std::future<ListImpersonationRolesOutcome> ListImpersonationRolesOutcomeCallable;
      typedef std::future<ListMailDomainsOutcome> ListMailDomainsOutcomeCallable;
      typedef std::future<ListMailboxExportJobsOutcome> ListMailboxExportJobsOutcomeCallable;
      typedef std::future<ListMailboxPermissionsOutcome> ListMailboxPermissionsOutcomeCallable;
      typedef std::future<ListMobileDeviceAccessOverridesOutcome> ListMobileDeviceAccessOverridesOutcomeCallable;
      typedef std::future<ListMobileDeviceAccessRulesOutcome> ListMobileDeviceAccessRulesOutcomeCallable;
      typedef std::future<ListOrganizationsOutcome> ListOrganizationsOutcomeCallable;
      typedef std::future<ListResourceDelegatesOutcome> ListResourceDelegatesOutcomeCallable;
      typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<PutAccessControlRuleOutcome> PutAccessControlRuleOutcomeCallable;
      typedef std::future<PutEmailMonitoringConfigurationOutcome> PutEmailMonitoringConfigurationOutcomeCallable;
      typedef std::future<PutInboundDmarcSettingsOutcome> PutInboundDmarcSettingsOutcomeCallable;
      typedef std::future<PutMailboxPermissionsOutcome> PutMailboxPermissionsOutcomeCallable;
      typedef std::future<PutMobileDeviceAccessOverrideOutcome> PutMobileDeviceAccessOverrideOutcomeCallable;
      typedef std::future<PutRetentionPolicyOutcome> PutRetentionPolicyOutcomeCallable;
      typedef std::future<RegisterMailDomainOutcome> RegisterMailDomainOutcomeCallable;
      typedef std::future<RegisterToWorkMailOutcome> RegisterToWorkMailOutcomeCallable;
      typedef std::future<ResetPasswordOutcome> ResetPasswordOutcomeCallable;
      typedef std::future<StartMailboxExportJobOutcome> StartMailboxExportJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestAvailabilityConfigurationOutcome> TestAvailabilityConfigurationOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAvailabilityConfigurationOutcome> UpdateAvailabilityConfigurationOutcomeCallable;
      typedef std::future<UpdateDefaultMailDomainOutcome> UpdateDefaultMailDomainOutcomeCallable;
      typedef std::future<UpdateImpersonationRoleOutcome> UpdateImpersonationRoleOutcomeCallable;
      typedef std::future<UpdateMailboxQuotaOutcome> UpdateMailboxQuotaOutcomeCallable;
      typedef std::future<UpdateMobileDeviceAccessRuleOutcome> UpdateMobileDeviceAccessRuleOutcomeCallable;
      typedef std::future<UpdatePrimaryEmailAddressOutcome> UpdatePrimaryEmailAddressOutcomeCallable;
      typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WorkMailClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WorkMailClient*, const Model::AssociateDelegateToResourceRequest&, const Model::AssociateDelegateToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDelegateToResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::AssociateMemberToGroupRequest&, const Model::AssociateMemberToGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberToGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::AssumeImpersonationRoleRequest&, const Model::AssumeImpersonationRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssumeImpersonationRoleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CancelMailboxExportJobRequest&, const Model::CancelMailboxExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMailboxExportJobResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateAvailabilityConfigurationRequest&, const Model::CreateAvailabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAvailabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateImpersonationRoleRequest&, const Model::CreateImpersonationRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImpersonationRoleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateMobileDeviceAccessRuleRequest&, const Model::CreateMobileDeviceAccessRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMobileDeviceAccessRuleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateOrganizationRequest&, const Model::CreateOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrganizationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateResourceRequest&, const Model::CreateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteAccessControlRuleRequest&, const Model::DeleteAccessControlRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessControlRuleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteAvailabilityConfigurationRequest&, const Model::DeleteAvailabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAvailabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteEmailMonitoringConfigurationRequest&, const Model::DeleteEmailMonitoringConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailMonitoringConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteImpersonationRoleRequest&, const Model::DeleteImpersonationRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImpersonationRoleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteMailboxPermissionsRequest&, const Model::DeleteMailboxPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMailboxPermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteMobileDeviceAccessOverrideRequest&, const Model::DeleteMobileDeviceAccessOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMobileDeviceAccessOverrideResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteMobileDeviceAccessRuleRequest&, const Model::DeleteMobileDeviceAccessRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMobileDeviceAccessRuleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteOrganizationRequest&, const Model::DeleteOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOrganizationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteResourceRequest&, const Model::DeleteResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteRetentionPolicyRequest&, const Model::DeleteRetentionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRetentionPolicyResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeregisterFromWorkMailRequest&, const Model::DeregisterFromWorkMailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterFromWorkMailResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeregisterMailDomainRequest&, const Model::DeregisterMailDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterMailDomainResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeEmailMonitoringConfigurationRequest&, const Model::DescribeEmailMonitoringConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEmailMonitoringConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeGroupRequest&, const Model::DescribeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeInboundDmarcSettingsRequest&, const Model::DescribeInboundDmarcSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInboundDmarcSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeMailboxExportJobRequest&, const Model::DescribeMailboxExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMailboxExportJobResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeOrganizationRequest&, const Model::DescribeOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeResourceRequest&, const Model::DescribeResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DisassociateDelegateFromResourceRequest&, const Model::DisassociateDelegateFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDelegateFromResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DisassociateMemberFromGroupRequest&, const Model::DisassociateMemberFromGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberFromGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetAccessControlEffectRequest&, const Model::GetAccessControlEffectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessControlEffectResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetDefaultRetentionPolicyRequest&, const Model::GetDefaultRetentionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDefaultRetentionPolicyResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetImpersonationRoleRequest&, const Model::GetImpersonationRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImpersonationRoleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetImpersonationRoleEffectRequest&, const Model::GetImpersonationRoleEffectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImpersonationRoleEffectResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetMailDomainRequest&, const Model::GetMailDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMailDomainResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetMailboxDetailsRequest&, const Model::GetMailboxDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMailboxDetailsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetMobileDeviceAccessEffectRequest&, const Model::GetMobileDeviceAccessEffectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMobileDeviceAccessEffectResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetMobileDeviceAccessOverrideRequest&, const Model::GetMobileDeviceAccessOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMobileDeviceAccessOverrideResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListAccessControlRulesRequest&, const Model::ListAccessControlRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessControlRulesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListAvailabilityConfigurationsRequest&, const Model::ListAvailabilityConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailabilityConfigurationsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListGroupMembersRequest&, const Model::ListGroupMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembersResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListImpersonationRolesRequest&, const Model::ListImpersonationRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImpersonationRolesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListMailDomainsRequest&, const Model::ListMailDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMailDomainsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListMailboxExportJobsRequest&, const Model::ListMailboxExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMailboxExportJobsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListMailboxPermissionsRequest&, const Model::ListMailboxPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMailboxPermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListMobileDeviceAccessOverridesRequest&, const Model::ListMobileDeviceAccessOverridesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMobileDeviceAccessOverridesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListMobileDeviceAccessRulesRequest&, const Model::ListMobileDeviceAccessRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMobileDeviceAccessRulesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListOrganizationsRequest&, const Model::ListOrganizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListResourceDelegatesRequest&, const Model::ListResourceDelegatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceDelegatesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::PutAccessControlRuleRequest&, const Model::PutAccessControlRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccessControlRuleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::PutEmailMonitoringConfigurationRequest&, const Model::PutEmailMonitoringConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailMonitoringConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::PutInboundDmarcSettingsRequest&, const Model::PutInboundDmarcSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInboundDmarcSettingsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::PutMailboxPermissionsRequest&, const Model::PutMailboxPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMailboxPermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::PutMobileDeviceAccessOverrideRequest&, const Model::PutMobileDeviceAccessOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMobileDeviceAccessOverrideResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::PutRetentionPolicyRequest&, const Model::PutRetentionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRetentionPolicyResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::RegisterMailDomainRequest&, const Model::RegisterMailDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterMailDomainResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::RegisterToWorkMailRequest&, const Model::RegisterToWorkMailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterToWorkMailResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ResetPasswordRequest&, const Model::ResetPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetPasswordResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::StartMailboxExportJobRequest&, const Model::StartMailboxExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMailboxExportJobResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::TestAvailabilityConfigurationRequest&, const Model::TestAvailabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestAvailabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateAvailabilityConfigurationRequest&, const Model::UpdateAvailabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAvailabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateDefaultMailDomainRequest&, const Model::UpdateDefaultMailDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDefaultMailDomainResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateImpersonationRoleRequest&, const Model::UpdateImpersonationRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImpersonationRoleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateMailboxQuotaRequest&, const Model::UpdateMailboxQuotaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMailboxQuotaResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateMobileDeviceAccessRuleRequest&, const Model::UpdateMobileDeviceAccessRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMobileDeviceAccessRuleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdatePrimaryEmailAddressRequest&, const Model::UpdatePrimaryEmailAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePrimaryEmailAddressResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateResourceRequest&, const Model::UpdateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WorkMail
} // namespace Aws
