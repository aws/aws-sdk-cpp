/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workmail/model/AssociateDelegateToResourceResult.h>
#include <aws/workmail/model/AssociateMemberToGroupResult.h>
#include <aws/workmail/model/CancelMailboxExportJobResult.h>
#include <aws/workmail/model/CreateAliasResult.h>
#include <aws/workmail/model/CreateGroupResult.h>
#include <aws/workmail/model/CreateMobileDeviceAccessRuleResult.h>
#include <aws/workmail/model/CreateOrganizationResult.h>
#include <aws/workmail/model/CreateResourceResult.h>
#include <aws/workmail/model/CreateUserResult.h>
#include <aws/workmail/model/DeleteAccessControlRuleResult.h>
#include <aws/workmail/model/DeleteAliasResult.h>
#include <aws/workmail/model/DeleteEmailMonitoringConfigurationResult.h>
#include <aws/workmail/model/DeleteGroupResult.h>
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
#include <aws/workmail/model/GetMailDomainResult.h>
#include <aws/workmail/model/GetMailboxDetailsResult.h>
#include <aws/workmail/model/GetMobileDeviceAccessEffectResult.h>
#include <aws/workmail/model/GetMobileDeviceAccessOverrideResult.h>
#include <aws/workmail/model/ListAccessControlRulesResult.h>
#include <aws/workmail/model/ListAliasesResult.h>
#include <aws/workmail/model/ListGroupMembersResult.h>
#include <aws/workmail/model/ListGroupsResult.h>
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
#include <aws/workmail/model/UntagResourceResult.h>
#include <aws/workmail/model/UpdateDefaultMailDomainResult.h>
#include <aws/workmail/model/UpdateMailboxQuotaResult.h>
#include <aws/workmail/model/UpdateMobileDeviceAccessRuleResult.h>
#include <aws/workmail/model/UpdatePrimaryEmailAddressResult.h>
#include <aws/workmail/model/UpdateResourceResult.h>
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

namespace WorkMail
{

namespace Model
{
        class AssociateDelegateToResourceRequest;
        class AssociateMemberToGroupRequest;
        class CancelMailboxExportJobRequest;
        class CreateAliasRequest;
        class CreateGroupRequest;
        class CreateMobileDeviceAccessRuleRequest;
        class CreateOrganizationRequest;
        class CreateResourceRequest;
        class CreateUserRequest;
        class DeleteAccessControlRuleRequest;
        class DeleteAliasRequest;
        class DeleteEmailMonitoringConfigurationRequest;
        class DeleteGroupRequest;
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
        class GetMailDomainRequest;
        class GetMailboxDetailsRequest;
        class GetMobileDeviceAccessEffectRequest;
        class GetMobileDeviceAccessOverrideRequest;
        class ListAccessControlRulesRequest;
        class ListAliasesRequest;
        class ListGroupMembersRequest;
        class ListGroupsRequest;
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
        class UntagResourceRequest;
        class UpdateDefaultMailDomainRequest;
        class UpdateMailboxQuotaRequest;
        class UpdateMobileDeviceAccessRuleRequest;
        class UpdatePrimaryEmailAddressRequest;
        class UpdateResourceRequest;

        typedef Aws::Utils::Outcome<AssociateDelegateToResourceResult, WorkMailError> AssociateDelegateToResourceOutcome;
        typedef Aws::Utils::Outcome<AssociateMemberToGroupResult, WorkMailError> AssociateMemberToGroupOutcome;
        typedef Aws::Utils::Outcome<CancelMailboxExportJobResult, WorkMailError> CancelMailboxExportJobOutcome;
        typedef Aws::Utils::Outcome<CreateAliasResult, WorkMailError> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateGroupResult, WorkMailError> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateMobileDeviceAccessRuleResult, WorkMailError> CreateMobileDeviceAccessRuleOutcome;
        typedef Aws::Utils::Outcome<CreateOrganizationResult, WorkMailError> CreateOrganizationOutcome;
        typedef Aws::Utils::Outcome<CreateResourceResult, WorkMailError> CreateResourceOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, WorkMailError> CreateUserOutcome;
        typedef Aws::Utils::Outcome<DeleteAccessControlRuleResult, WorkMailError> DeleteAccessControlRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteAliasResult, WorkMailError> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteEmailMonitoringConfigurationResult, WorkMailError> DeleteEmailMonitoringConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupResult, WorkMailError> DeleteGroupOutcome;
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
        typedef Aws::Utils::Outcome<GetMailDomainResult, WorkMailError> GetMailDomainOutcome;
        typedef Aws::Utils::Outcome<GetMailboxDetailsResult, WorkMailError> GetMailboxDetailsOutcome;
        typedef Aws::Utils::Outcome<GetMobileDeviceAccessEffectResult, WorkMailError> GetMobileDeviceAccessEffectOutcome;
        typedef Aws::Utils::Outcome<GetMobileDeviceAccessOverrideResult, WorkMailError> GetMobileDeviceAccessOverrideOutcome;
        typedef Aws::Utils::Outcome<ListAccessControlRulesResult, WorkMailError> ListAccessControlRulesOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, WorkMailError> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListGroupMembersResult, WorkMailError> ListGroupMembersOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, WorkMailError> ListGroupsOutcome;
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
        typedef Aws::Utils::Outcome<UntagResourceResult, WorkMailError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDefaultMailDomainResult, WorkMailError> UpdateDefaultMailDomainOutcome;
        typedef Aws::Utils::Outcome<UpdateMailboxQuotaResult, WorkMailError> UpdateMailboxQuotaOutcome;
        typedef Aws::Utils::Outcome<UpdateMobileDeviceAccessRuleResult, WorkMailError> UpdateMobileDeviceAccessRuleOutcome;
        typedef Aws::Utils::Outcome<UpdatePrimaryEmailAddressResult, WorkMailError> UpdatePrimaryEmailAddressOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceResult, WorkMailError> UpdateResourceOutcome;

        typedef std::future<AssociateDelegateToResourceOutcome> AssociateDelegateToResourceOutcomeCallable;
        typedef std::future<AssociateMemberToGroupOutcome> AssociateMemberToGroupOutcomeCallable;
        typedef std::future<CancelMailboxExportJobOutcome> CancelMailboxExportJobOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<CreateMobileDeviceAccessRuleOutcome> CreateMobileDeviceAccessRuleOutcomeCallable;
        typedef std::future<CreateOrganizationOutcome> CreateOrganizationOutcomeCallable;
        typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<DeleteAccessControlRuleOutcome> DeleteAccessControlRuleOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteEmailMonitoringConfigurationOutcome> DeleteEmailMonitoringConfigurationOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
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
        typedef std::future<GetMailDomainOutcome> GetMailDomainOutcomeCallable;
        typedef std::future<GetMailboxDetailsOutcome> GetMailboxDetailsOutcomeCallable;
        typedef std::future<GetMobileDeviceAccessEffectOutcome> GetMobileDeviceAccessEffectOutcomeCallable;
        typedef std::future<GetMobileDeviceAccessOverrideOutcome> GetMobileDeviceAccessOverrideOutcomeCallable;
        typedef std::future<ListAccessControlRulesOutcome> ListAccessControlRulesOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListGroupMembersOutcome> ListGroupMembersOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
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
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDefaultMailDomainOutcome> UpdateDefaultMailDomainOutcomeCallable;
        typedef std::future<UpdateMailboxQuotaOutcome> UpdateMailboxQuotaOutcomeCallable;
        typedef std::future<UpdateMobileDeviceAccessRuleOutcome> UpdateMobileDeviceAccessRuleOutcomeCallable;
        typedef std::future<UpdatePrimaryEmailAddressOutcome> UpdatePrimaryEmailAddressOutcomeCallable;
        typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
} // namespace Model

  class WorkMailClient;

    typedef std::function<void(const WorkMailClient*, const Model::AssociateDelegateToResourceRequest&, const Model::AssociateDelegateToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDelegateToResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::AssociateMemberToGroupRequest&, const Model::AssociateMemberToGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberToGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CancelMailboxExportJobRequest&, const Model::CancelMailboxExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMailboxExportJobResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateMobileDeviceAccessRuleRequest&, const Model::CreateMobileDeviceAccessRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMobileDeviceAccessRuleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateOrganizationRequest&, const Model::CreateOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrganizationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateResourceRequest&, const Model::CreateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteAccessControlRuleRequest&, const Model::DeleteAccessControlRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessControlRuleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteEmailMonitoringConfigurationRequest&, const Model::DeleteEmailMonitoringConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailMonitoringConfigurationResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
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
    typedef std::function<void(const WorkMailClient*, const Model::GetMailDomainRequest&, const Model::GetMailDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMailDomainResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetMailboxDetailsRequest&, const Model::GetMailboxDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMailboxDetailsResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetMobileDeviceAccessEffectRequest&, const Model::GetMobileDeviceAccessEffectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMobileDeviceAccessEffectResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::GetMobileDeviceAccessOverrideRequest&, const Model::GetMobileDeviceAccessOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMobileDeviceAccessOverrideResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListAccessControlRulesRequest&, const Model::ListAccessControlRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessControlRulesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListGroupMembersRequest&, const Model::ListGroupMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupMembersResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
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
    typedef std::function<void(const WorkMailClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateDefaultMailDomainRequest&, const Model::UpdateDefaultMailDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDefaultMailDomainResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateMailboxQuotaRequest&, const Model::UpdateMailboxQuotaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMailboxQuotaResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateMobileDeviceAccessRuleRequest&, const Model::UpdateMobileDeviceAccessRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMobileDeviceAccessRuleResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdatePrimaryEmailAddressRequest&, const Model::UpdatePrimaryEmailAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePrimaryEmailAddressResponseReceivedHandler;
    typedef std::function<void(const WorkMailClient*, const Model::UpdateResourceRequest&, const Model::UpdateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceResponseReceivedHandler;

  /**
   * <p>Amazon WorkMail is a secure, managed business email and calendaring service
   * with support for existing desktop and mobile email clients. You can access your
   * email, contacts, and calendars using Microsoft Outlook, your browser, or other
   * native iOS and Android email applications. You can integrate WorkMail with your
   * existing corporate directory and control both the keys that encrypt your data
   * and the location in which your data is stored.</p> <p>The WorkMail API is
   * designed for the following scenarios:</p> <ul> <li> <p>Listing and describing
   * organizations</p> </li> </ul> <ul> <li> <p>Managing users</p> </li> </ul> <ul>
   * <li> <p>Managing groups</p> </li> </ul> <ul> <li> <p>Managing resources</p>
   * </li> </ul> <p>All WorkMail API operations are Amazon-authenticated and
   * certificate-signed. They not only require the use of the AWS SDK, but also allow
   * for the exclusive use of AWS Identity and Access Management users and roles to
   * help facilitate access, trust, and permission policies. By creating a role and
   * allowing an IAM user to access the WorkMail site, the IAM user gains full
   * administrative visibility into the entire WorkMail organization (or as set in
   * the IAM policy). This includes, but is not limited to, the ability to create,
   * update, and delete users, groups, and resources. This allows developers to
   * perform the scenarios listed above, as well as give users the ability to grant
   * access on a selective basis using the IAM model.</p>
   */
  class AWS_WORKMAIL_API WorkMailClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkMailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WorkMailClient();


        /**
         * <p>Adds a member (user or group) to the resource's set of
         * delegates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateDelegateToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDelegateToResourceOutcome AssociateDelegateToResource(const Model::AssociateDelegateToResourceRequest& request) const;

        /**
         * A Callable wrapper for AssociateDelegateToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDelegateToResourceOutcomeCallable AssociateDelegateToResourceCallable(const Model::AssociateDelegateToResourceRequest& request) const;

        /**
         * An Async wrapper for AssociateDelegateToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDelegateToResourceAsync(const Model::AssociateDelegateToResourceRequest& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a member (user or group) to the group's set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateMemberToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberToGroupOutcome AssociateMemberToGroup(const Model::AssociateMemberToGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociateMemberToGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateMemberToGroupOutcomeCallable AssociateMemberToGroupCallable(const Model::AssociateMemberToGroupRequest& request) const;

        /**
         * An Async wrapper for AssociateMemberToGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateMemberToGroupAsync(const Model::AssociateMemberToGroupRequest& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a mailbox export job.</p>  <p>If the mailbox export job is near
         * completion, it might not be possible to cancel it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CancelMailboxExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMailboxExportJobOutcome CancelMailboxExportJob(const Model::CancelMailboxExportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelMailboxExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelMailboxExportJobOutcomeCallable CancelMailboxExportJobCallable(const Model::CancelMailboxExportJobRequest& request) const;

        /**
         * An Async wrapper for CancelMailboxExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelMailboxExportJobAsync(const Model::CancelMailboxExportJobRequest& request, const CancelMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an alias to the set of a given member (user or group) of Amazon
         * WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * An Async wrapper for CreateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a group that can be used in Amazon WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new mobile device access rule for the specified Amazon WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateMobileDeviceAccessRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMobileDeviceAccessRuleOutcome CreateMobileDeviceAccessRule(const Model::CreateMobileDeviceAccessRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateMobileDeviceAccessRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMobileDeviceAccessRuleOutcomeCallable CreateMobileDeviceAccessRuleCallable(const Model::CreateMobileDeviceAccessRuleRequest& request) const;

        /**
         * An Async wrapper for CreateMobileDeviceAccessRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMobileDeviceAccessRuleAsync(const Model::CreateMobileDeviceAccessRuleRequest& request, const CreateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon WorkMail organization. Optionally, you can choose to
         * associate an existing AWS Directory Service directory with your organization. If
         * an AWS Directory Service directory ID is specified, the organization alias must
         * match the directory alias. If you choose not to associate an existing directory
         * with your organization, then we create a new Amazon WorkMail directory for you.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/add_new_organization.html">Adding
         * an organization</a> in the <i>Amazon WorkMail Administrator Guide</i>.</p>
         * <p>You can associate multiple email domains with an organization, then set your
         * default email domain from the Amazon WorkMail console. You can also associate a
         * domain that is managed in an Amazon Route 53 public hosted zone. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/add_domain.html">Adding
         * a domain</a> and <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/default_domain.html">Choosing
         * the default domain</a> in the <i>Amazon WorkMail Administrator Guide</i>.</p>
         * <p>Optionally, you can use a customer managed master key from AWS Key Management
         * Service (AWS KMS) to encrypt email for your organization. If you don't associate
         * an AWS KMS key, Amazon WorkMail creates a default AWS managed master key for
         * you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest& request) const;

        /**
         * A Callable wrapper for CreateOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOrganizationOutcomeCallable CreateOrganizationCallable(const Model::CreateOrganizationRequest& request) const;

        /**
         * An Async wrapper for CreateOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOrganizationAsync(const Model::CreateOrganizationRequest& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon WorkMail resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;

        /**
         * A Callable wrapper for CreateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request) const;

        /**
         * An Async wrapper for CreateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user who can be used in Amazon WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an access control rule for the specified WorkMail organization.</p>
         *  <p>Deleting already deleted and non-existing rules does not produce an
         * error. In those cases, the service sends back an HTTP 200 response with an empty
         * HTTP body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAccessControlRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessControlRuleOutcome DeleteAccessControlRule(const Model::DeleteAccessControlRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessControlRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessControlRuleOutcomeCallable DeleteAccessControlRuleCallable(const Model::DeleteAccessControlRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessControlRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessControlRuleAsync(const Model::DeleteAccessControlRuleRequest& request, const DeleteAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one or more specified aliases from a set of aliases for a given
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the email monitoring configuration for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteEmailMonitoringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailMonitoringConfigurationOutcome DeleteEmailMonitoringConfiguration(const Model::DeleteEmailMonitoringConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailMonitoringConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailMonitoringConfigurationOutcomeCallable DeleteEmailMonitoringConfigurationCallable(const Model::DeleteEmailMonitoringConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteEmailMonitoringConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailMonitoringConfigurationAsync(const Model::DeleteEmailMonitoringConfigurationRequest& request, const DeleteEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a group from Amazon WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes permissions granted to a member (user or group).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMailboxPermissionsOutcome DeleteMailboxPermissions(const Model::DeleteMailboxPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteMailboxPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMailboxPermissionsOutcomeCallable DeleteMailboxPermissionsCallable(const Model::DeleteMailboxPermissionsRequest& request) const;

        /**
         * An Async wrapper for DeleteMailboxPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMailboxPermissionsAsync(const Model::DeleteMailboxPermissionsRequest& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the mobile device access override for the given WorkMail
         * organization, user, and device.</p>  <p>Deleting already deleted and
         * non-existing overrides does not produce an error. In those cases, the service
         * sends back an HTTP 200 response with an empty HTTP body.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMobileDeviceAccessOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMobileDeviceAccessOverrideOutcome DeleteMobileDeviceAccessOverride(const Model::DeleteMobileDeviceAccessOverrideRequest& request) const;

        /**
         * A Callable wrapper for DeleteMobileDeviceAccessOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMobileDeviceAccessOverrideOutcomeCallable DeleteMobileDeviceAccessOverrideCallable(const Model::DeleteMobileDeviceAccessOverrideRequest& request) const;

        /**
         * An Async wrapper for DeleteMobileDeviceAccessOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMobileDeviceAccessOverrideAsync(const Model::DeleteMobileDeviceAccessOverrideRequest& request, const DeleteMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a mobile device access rule for the specified Amazon WorkMail
         * organization.</p>  <p>Deleting already deleted and non-existing rules does
         * not produce an error. In those cases, the service sends back an HTTP 200
         * response with an empty HTTP body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMobileDeviceAccessRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMobileDeviceAccessRuleOutcome DeleteMobileDeviceAccessRule(const Model::DeleteMobileDeviceAccessRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteMobileDeviceAccessRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMobileDeviceAccessRuleOutcomeCallable DeleteMobileDeviceAccessRuleCallable(const Model::DeleteMobileDeviceAccessRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteMobileDeviceAccessRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMobileDeviceAccessRuleAsync(const Model::DeleteMobileDeviceAccessRuleRequest& request, const DeleteMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon WorkMail organization and all underlying AWS resources
         * managed by Amazon WorkMail as part of the organization. You can choose whether
         * to delete the associated directory. For more information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/remove_organization.html">Removing
         * an organization</a> in the <i>Amazon WorkMail Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationOutcome DeleteOrganization(const Model::DeleteOrganizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOrganizationOutcomeCallable DeleteOrganizationCallable(const Model::DeleteOrganizationRequest& request) const;

        /**
         * An Async wrapper for DeleteOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOrganizationAsync(const Model::DeleteOrganizationRequest& request, const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceOutcomeCallable DeleteResourceCallable(const Model::DeleteResourceRequest& request) const;

        /**
         * An Async wrapper for DeleteResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified retention policy from the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetentionPolicyOutcome DeleteRetentionPolicy(const Model::DeleteRetentionPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteRetentionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRetentionPolicyOutcomeCallable DeleteRetentionPolicyCallable(const Model::DeleteRetentionPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteRetentionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRetentionPolicyAsync(const Model::DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user from Amazon WorkMail and all subsequent systems. Before you
         * can delete a user, the user state must be <code>DISABLED</code>. Use the
         * <a>DescribeUser</a> action to confirm the user state.</p> <p>Deleting a user is
         * permanent and cannot be undone. WorkMail archives user mailboxes for 30 days
         * before they are permanently removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Mark a user, group, or resource as no longer used in Amazon WorkMail. This
         * action disassociates the mailbox and schedules it for clean-up. WorkMail keeps
         * mailboxes for 30 days before they are permanently removed. The functionality in
         * the console is <i>Disable</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeregisterFromWorkMail">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterFromWorkMailOutcome DeregisterFromWorkMail(const Model::DeregisterFromWorkMailRequest& request) const;

        /**
         * A Callable wrapper for DeregisterFromWorkMail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterFromWorkMailOutcomeCallable DeregisterFromWorkMailCallable(const Model::DeregisterFromWorkMailRequest& request) const;

        /**
         * An Async wrapper for DeregisterFromWorkMail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterFromWorkMailAsync(const Model::DeregisterFromWorkMailRequest& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a domain from Amazon WorkMail, stops email routing to WorkMail, and
         * removes the authorization allowing WorkMail use. SES keeps the domain because
         * other applications may use it. You must first remove any email address used by
         * WorkMail entities before you remove the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeregisterMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterMailDomainOutcome DeregisterMailDomain(const Model::DeregisterMailDomainRequest& request) const;

        /**
         * A Callable wrapper for DeregisterMailDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterMailDomainOutcomeCallable DeregisterMailDomainCallable(const Model::DeregisterMailDomainRequest& request) const;

        /**
         * An Async wrapper for DeregisterMailDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterMailDomainAsync(const Model::DeregisterMailDomainRequest& request, const DeregisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current email monitoring configuration for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeEmailMonitoringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEmailMonitoringConfigurationOutcome DescribeEmailMonitoringConfiguration(const Model::DescribeEmailMonitoringConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeEmailMonitoringConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEmailMonitoringConfigurationOutcomeCallable DescribeEmailMonitoringConfigurationCallable(const Model::DescribeEmailMonitoringConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeEmailMonitoringConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEmailMonitoringConfigurationAsync(const Model::DescribeEmailMonitoringConfigurationRequest& request, const DescribeEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data available for the group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the settings in a DMARC policy for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeInboundDmarcSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInboundDmarcSettingsOutcome DescribeInboundDmarcSettings(const Model::DescribeInboundDmarcSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInboundDmarcSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInboundDmarcSettingsOutcomeCallable DescribeInboundDmarcSettingsCallable(const Model::DescribeInboundDmarcSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeInboundDmarcSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInboundDmarcSettingsAsync(const Model::DescribeInboundDmarcSettingsRequest& request, const DescribeInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current status of a mailbox export job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeMailboxExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMailboxExportJobOutcome DescribeMailboxExportJob(const Model::DescribeMailboxExportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeMailboxExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMailboxExportJobOutcomeCallable DescribeMailboxExportJobCallable(const Model::DescribeMailboxExportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeMailboxExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMailboxExportJobAsync(const Model::DescribeMailboxExportJobRequest& request, const DescribeMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides more information regarding a given organization based on its
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationOutcomeCallable DescribeOrganizationCallable(const Model::DescribeOrganizationRequest& request) const;

        /**
         * An Async wrapper for DescribeOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationAsync(const Model::DescribeOrganizationRequest& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data available for the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceOutcome DescribeResource(const Model::DescribeResourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceOutcomeCallable DescribeResourceCallable(const Model::DescribeResourceRequest& request) const;

        /**
         * An Async wrapper for DescribeResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceAsync(const Model::DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information regarding the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a member from the resource's set of delegates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateDelegateFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDelegateFromResourceOutcome DisassociateDelegateFromResource(const Model::DisassociateDelegateFromResourceRequest& request) const;

        /**
         * A Callable wrapper for DisassociateDelegateFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDelegateFromResourceOutcomeCallable DisassociateDelegateFromResourceCallable(const Model::DisassociateDelegateFromResourceRequest& request) const;

        /**
         * An Async wrapper for DisassociateDelegateFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDelegateFromResourceAsync(const Model::DisassociateDelegateFromResourceRequest& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a member from a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateMemberFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberFromGroupOutcome DisassociateMemberFromGroup(const Model::DisassociateMemberFromGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMemberFromGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMemberFromGroupOutcomeCallable DisassociateMemberFromGroupCallable(const Model::DisassociateMemberFromGroupRequest& request) const;

        /**
         * An Async wrapper for DisassociateMemberFromGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMemberFromGroupAsync(const Model::DisassociateMemberFromGroupRequest& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the effects of an organization's access control rules as they apply to a
         * specified IPv4 address, access protocol action, or user ID. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetAccessControlEffect">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessControlEffectOutcome GetAccessControlEffect(const Model::GetAccessControlEffectRequest& request) const;

        /**
         * A Callable wrapper for GetAccessControlEffect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessControlEffectOutcomeCallable GetAccessControlEffectCallable(const Model::GetAccessControlEffectRequest& request) const;

        /**
         * An Async wrapper for GetAccessControlEffect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessControlEffectAsync(const Model::GetAccessControlEffectRequest& request, const GetAccessControlEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the default retention policy details for the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetDefaultRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultRetentionPolicyOutcome GetDefaultRetentionPolicy(const Model::GetDefaultRetentionPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetDefaultRetentionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDefaultRetentionPolicyOutcomeCallable GetDefaultRetentionPolicyCallable(const Model::GetDefaultRetentionPolicyRequest& request) const;

        /**
         * An Async wrapper for GetDefaultRetentionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDefaultRetentionPolicyAsync(const Model::GetDefaultRetentionPolicyRequest& request, const GetDefaultRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details for a mail domain, including domain records required to
         * configure your domain with recommended security.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMailDomainOutcome GetMailDomain(const Model::GetMailDomainRequest& request) const;

        /**
         * A Callable wrapper for GetMailDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMailDomainOutcomeCallable GetMailDomainCallable(const Model::GetMailDomainRequest& request) const;

        /**
         * An Async wrapper for GetMailDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMailDomainAsync(const Model::GetMailDomainRequest& request, const GetMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a user's mailbox details for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMailboxDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMailboxDetailsOutcome GetMailboxDetails(const Model::GetMailboxDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetMailboxDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMailboxDetailsOutcomeCallable GetMailboxDetailsCallable(const Model::GetMailboxDetailsRequest& request) const;

        /**
         * An Async wrapper for GetMailboxDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMailboxDetailsAsync(const Model::GetMailboxDetailsRequest& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Simulates the effect of the mobile device access rules for the given
         * attributes of a sample access event. Use this method to test the effects of the
         * current set of mobile device access rules for the Amazon WorkMail organization
         * for a particular user's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMobileDeviceAccessEffect">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMobileDeviceAccessEffectOutcome GetMobileDeviceAccessEffect(const Model::GetMobileDeviceAccessEffectRequest& request) const;

        /**
         * A Callable wrapper for GetMobileDeviceAccessEffect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMobileDeviceAccessEffectOutcomeCallable GetMobileDeviceAccessEffectCallable(const Model::GetMobileDeviceAccessEffectRequest& request) const;

        /**
         * An Async wrapper for GetMobileDeviceAccessEffect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMobileDeviceAccessEffectAsync(const Model::GetMobileDeviceAccessEffectRequest& request, const GetMobileDeviceAccessEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the mobile device access override for the given WorkMail organization,
         * user, and device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMobileDeviceAccessOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMobileDeviceAccessOverrideOutcome GetMobileDeviceAccessOverride(const Model::GetMobileDeviceAccessOverrideRequest& request) const;

        /**
         * A Callable wrapper for GetMobileDeviceAccessOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMobileDeviceAccessOverrideOutcomeCallable GetMobileDeviceAccessOverrideCallable(const Model::GetMobileDeviceAccessOverrideRequest& request) const;

        /**
         * An Async wrapper for GetMobileDeviceAccessOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMobileDeviceAccessOverrideAsync(const Model::GetMobileDeviceAccessOverrideRequest& request, const GetMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the access control rules for the specified organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAccessControlRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessControlRulesOutcome ListAccessControlRules(const Model::ListAccessControlRulesRequest& request) const;

        /**
         * A Callable wrapper for ListAccessControlRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessControlRulesOutcomeCallable ListAccessControlRulesCallable(const Model::ListAccessControlRulesRequest& request) const;

        /**
         * An Async wrapper for ListAccessControlRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessControlRulesAsync(const Model::ListAccessControlRulesRequest& request, const ListAccessControlRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a paginated call to list the aliases associated with a given
         * entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * An Async wrapper for ListAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an overview of the members of a group. Users and groups can be
         * members of a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroupMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembersOutcome ListGroupMembers(const Model::ListGroupMembersRequest& request) const;

        /**
         * A Callable wrapper for ListGroupMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupMembersOutcomeCallable ListGroupMembersCallable(const Model::ListGroupMembersRequest& request) const;

        /**
         * An Async wrapper for ListGroupMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupMembersAsync(const Model::ListGroupMembersRequest& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summaries of the organization's groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the mail domains in a given Amazon WorkMail organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailDomainsOutcome ListMailDomains(const Model::ListMailDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListMailDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMailDomainsOutcomeCallable ListMailDomainsCallable(const Model::ListMailDomainsRequest& request) const;

        /**
         * An Async wrapper for ListMailDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMailDomainsAsync(const Model::ListMailDomainsRequest& request, const ListMailDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the mailbox export jobs started for the specified organization within
         * the last seven days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailboxExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailboxExportJobsOutcome ListMailboxExportJobs(const Model::ListMailboxExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListMailboxExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMailboxExportJobsOutcomeCallable ListMailboxExportJobsCallable(const Model::ListMailboxExportJobsRequest& request) const;

        /**
         * An Async wrapper for ListMailboxExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMailboxExportJobsAsync(const Model::ListMailboxExportJobsRequest& request, const ListMailboxExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the mailbox permissions associated with a user, group, or resource
         * mailbox.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailboxPermissionsOutcome ListMailboxPermissions(const Model::ListMailboxPermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListMailboxPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMailboxPermissionsOutcomeCallable ListMailboxPermissionsCallable(const Model::ListMailboxPermissionsRequest& request) const;

        /**
         * An Async wrapper for ListMailboxPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMailboxPermissionsAsync(const Model::ListMailboxPermissionsRequest& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the mobile device access overrides for any given combination of
         * WorkMail organization, user, or device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMobileDeviceAccessOverrides">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMobileDeviceAccessOverridesOutcome ListMobileDeviceAccessOverrides(const Model::ListMobileDeviceAccessOverridesRequest& request) const;

        /**
         * A Callable wrapper for ListMobileDeviceAccessOverrides that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMobileDeviceAccessOverridesOutcomeCallable ListMobileDeviceAccessOverridesCallable(const Model::ListMobileDeviceAccessOverridesRequest& request) const;

        /**
         * An Async wrapper for ListMobileDeviceAccessOverrides that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMobileDeviceAccessOverridesAsync(const Model::ListMobileDeviceAccessOverridesRequest& request, const ListMobileDeviceAccessOverridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the mobile device access rules for the specified Amazon WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMobileDeviceAccessRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMobileDeviceAccessRulesOutcome ListMobileDeviceAccessRules(const Model::ListMobileDeviceAccessRulesRequest& request) const;

        /**
         * A Callable wrapper for ListMobileDeviceAccessRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMobileDeviceAccessRulesOutcomeCallable ListMobileDeviceAccessRulesCallable(const Model::ListMobileDeviceAccessRulesRequest& request) const;

        /**
         * An Async wrapper for ListMobileDeviceAccessRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMobileDeviceAccessRulesAsync(const Model::ListMobileDeviceAccessRulesRequest& request, const ListMobileDeviceAccessRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summaries of the customer's organizations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListOrganizations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationsOutcome ListOrganizations(const Model::ListOrganizationsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationsOutcomeCallable ListOrganizationsCallable(const Model::ListOrganizationsRequest& request) const;

        /**
         * An Async wrapper for ListOrganizations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationsAsync(const Model::ListOrganizationsRequest& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the delegates associated with a resource. Users and groups can be
         * resource delegates and answer requests on behalf of the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResourceDelegates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDelegatesOutcome ListResourceDelegates(const Model::ListResourceDelegatesRequest& request) const;

        /**
         * A Callable wrapper for ListResourceDelegates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceDelegatesOutcomeCallable ListResourceDelegatesCallable(const Model::ListResourceDelegatesRequest& request) const;

        /**
         * An Async wrapper for ListResourceDelegates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceDelegatesAsync(const Model::ListResourceDelegatesRequest& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summaries of the organization's resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * An Async wrapper for ListResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags applied to an Amazon WorkMail organization
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summaries of the organization's users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new access control rule for the specified organization. The rule
         * allows or denies access to the organization for the specified IPv4 addresses,
         * access protocol actions, and user IDs. Adding a new rule with the same name as
         * an existing rule replaces the older rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutAccessControlRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessControlRuleOutcome PutAccessControlRule(const Model::PutAccessControlRuleRequest& request) const;

        /**
         * A Callable wrapper for PutAccessControlRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccessControlRuleOutcomeCallable PutAccessControlRuleCallable(const Model::PutAccessControlRuleRequest& request) const;

        /**
         * An Async wrapper for PutAccessControlRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccessControlRuleAsync(const Model::PutAccessControlRuleRequest& request, const PutAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the email monitoring configuration for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutEmailMonitoringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailMonitoringConfigurationOutcome PutEmailMonitoringConfiguration(const Model::PutEmailMonitoringConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutEmailMonitoringConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailMonitoringConfigurationOutcomeCallable PutEmailMonitoringConfigurationCallable(const Model::PutEmailMonitoringConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutEmailMonitoringConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailMonitoringConfigurationAsync(const Model::PutEmailMonitoringConfigurationRequest& request, const PutEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables a DMARC policy for a given organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutInboundDmarcSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInboundDmarcSettingsOutcome PutInboundDmarcSettings(const Model::PutInboundDmarcSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutInboundDmarcSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInboundDmarcSettingsOutcomeCallable PutInboundDmarcSettingsCallable(const Model::PutInboundDmarcSettingsRequest& request) const;

        /**
         * An Async wrapper for PutInboundDmarcSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInboundDmarcSettingsAsync(const Model::PutInboundDmarcSettingsRequest& request, const PutInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets permissions for a user, group, or resource. This replaces any
         * pre-existing permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMailboxPermissionsOutcome PutMailboxPermissions(const Model::PutMailboxPermissionsRequest& request) const;

        /**
         * A Callable wrapper for PutMailboxPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMailboxPermissionsOutcomeCallable PutMailboxPermissionsCallable(const Model::PutMailboxPermissionsRequest& request) const;

        /**
         * An Async wrapper for PutMailboxPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMailboxPermissionsAsync(const Model::PutMailboxPermissionsRequest& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a mobile device access override for the given WorkMail
         * organization, user, and device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutMobileDeviceAccessOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMobileDeviceAccessOverrideOutcome PutMobileDeviceAccessOverride(const Model::PutMobileDeviceAccessOverrideRequest& request) const;

        /**
         * A Callable wrapper for PutMobileDeviceAccessOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMobileDeviceAccessOverrideOutcomeCallable PutMobileDeviceAccessOverrideCallable(const Model::PutMobileDeviceAccessOverrideRequest& request) const;

        /**
         * An Async wrapper for PutMobileDeviceAccessOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMobileDeviceAccessOverrideAsync(const Model::PutMobileDeviceAccessOverrideRequest& request, const PutMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts a retention policy to the specified organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionPolicyOutcome PutRetentionPolicy(const Model::PutRetentionPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutRetentionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRetentionPolicyOutcomeCallable PutRetentionPolicyCallable(const Model::PutRetentionPolicyRequest& request) const;

        /**
         * An Async wrapper for PutRetentionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRetentionPolicyAsync(const Model::PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a new domain in Amazon WorkMail and SES, and configures it for use
         * by WorkMail. Emails received by SES for this domain are routed to the specified
         * WorkMail organization, and WorkMail has permanent permission to use the
         * specified domain for sending your users' emails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RegisterMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterMailDomainOutcome RegisterMailDomain(const Model::RegisterMailDomainRequest& request) const;

        /**
         * A Callable wrapper for RegisterMailDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterMailDomainOutcomeCallable RegisterMailDomainCallable(const Model::RegisterMailDomainRequest& request) const;

        /**
         * An Async wrapper for RegisterMailDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterMailDomainAsync(const Model::RegisterMailDomainRequest& request, const RegisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an existing and disabled user, group, or resource for Amazon
         * WorkMail use by associating a mailbox and calendaring capabilities. It performs
         * no change if the user, group, or resource is enabled and fails if the user,
         * group, or resource is deleted. This operation results in the accumulation of
         * costs. For more information, see <a
         * href="https://aws.amazon.com/workmail/pricing">Pricing</a>. The equivalent
         * console functionality for this operation is <i>Enable</i>. </p> <p>Users can
         * either be created by calling the <a>CreateUser</a> API operation or they can be
         * synchronized from your directory. For more information, see
         * <a>DeregisterFromWorkMail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RegisterToWorkMail">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterToWorkMailOutcome RegisterToWorkMail(const Model::RegisterToWorkMailRequest& request) const;

        /**
         * A Callable wrapper for RegisterToWorkMail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterToWorkMailOutcomeCallable RegisterToWorkMailCallable(const Model::RegisterToWorkMailRequest& request) const;

        /**
         * An Async wrapper for RegisterToWorkMail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterToWorkMailAsync(const Model::RegisterToWorkMailRequest& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the administrator to reset the password for a user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ResetPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetPasswordOutcome ResetPassword(const Model::ResetPasswordRequest& request) const;

        /**
         * A Callable wrapper for ResetPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetPasswordOutcomeCallable ResetPasswordCallable(const Model::ResetPasswordRequest& request) const;

        /**
         * An Async wrapper for ResetPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetPasswordAsync(const Model::ResetPasswordRequest& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a mailbox export job to export MIME-format email messages and calendar
         * items from the specified mailbox to the specified Amazon Simple Storage Service
         * (Amazon S3) bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/mail-export.html">Exporting
         * mailbox content</a> in the <i>Amazon WorkMail Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/StartMailboxExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMailboxExportJobOutcome StartMailboxExportJob(const Model::StartMailboxExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartMailboxExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMailboxExportJobOutcomeCallable StartMailboxExportJobCallable(const Model::StartMailboxExportJobRequest& request) const;

        /**
         * An Async wrapper for StartMailboxExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMailboxExportJobAsync(const Model::StartMailboxExportJobRequest& request, const StartMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies the specified tags to the specified Amazon WorkMail organization
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Untags the specified tags from the specified Amazon WorkMail organization
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the default mail domain for an organization. The default mail domain
         * is used by the WorkMail AWS Console to suggest an email address when enabling a
         * mail user. You can only have one default domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateDefaultMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDefaultMailDomainOutcome UpdateDefaultMailDomain(const Model::UpdateDefaultMailDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateDefaultMailDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDefaultMailDomainOutcomeCallable UpdateDefaultMailDomainCallable(const Model::UpdateDefaultMailDomainRequest& request) const;

        /**
         * An Async wrapper for UpdateDefaultMailDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDefaultMailDomainAsync(const Model::UpdateDefaultMailDomainRequest& request, const UpdateDefaultMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a user's current mailbox quota for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateMailboxQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMailboxQuotaOutcome UpdateMailboxQuota(const Model::UpdateMailboxQuotaRequest& request) const;

        /**
         * A Callable wrapper for UpdateMailboxQuota that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMailboxQuotaOutcomeCallable UpdateMailboxQuotaCallable(const Model::UpdateMailboxQuotaRequest& request) const;

        /**
         * An Async wrapper for UpdateMailboxQuota that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMailboxQuotaAsync(const Model::UpdateMailboxQuotaRequest& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a mobile device access rule for the specified Amazon WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateMobileDeviceAccessRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMobileDeviceAccessRuleOutcome UpdateMobileDeviceAccessRule(const Model::UpdateMobileDeviceAccessRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateMobileDeviceAccessRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMobileDeviceAccessRuleOutcomeCallable UpdateMobileDeviceAccessRuleCallable(const Model::UpdateMobileDeviceAccessRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateMobileDeviceAccessRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMobileDeviceAccessRuleAsync(const Model::UpdateMobileDeviceAccessRuleRequest& request, const UpdateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the primary email for a user, group, or resource. The current email
         * is moved into the list of aliases (or swapped between an existing alias and the
         * current primary email), and the email provided in the input is promoted as the
         * primary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdatePrimaryEmailAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePrimaryEmailAddressOutcome UpdatePrimaryEmailAddress(const Model::UpdatePrimaryEmailAddressRequest& request) const;

        /**
         * A Callable wrapper for UpdatePrimaryEmailAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePrimaryEmailAddressOutcomeCallable UpdatePrimaryEmailAddressCallable(const Model::UpdatePrimaryEmailAddressRequest& request) const;

        /**
         * An Async wrapper for UpdatePrimaryEmailAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePrimaryEmailAddressAsync(const Model::UpdatePrimaryEmailAddressRequest& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates data for the resource. To have the latest information, it must be
         * preceded by a <a>DescribeResource</a> call. The dataset in the request should be
         * the one expected when performing another <code>DescribeResource</code>
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const Model::UpdateResourceRequest& request) const;

        /**
         * An Async wrapper for UpdateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceAsync(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateDelegateToResourceAsyncHelper(const Model::AssociateDelegateToResourceRequest& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateMemberToGroupAsyncHelper(const Model::AssociateMemberToGroupRequest& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelMailboxExportJobAsyncHelper(const Model::CancelMailboxExportJobRequest& request, const CancelMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMobileDeviceAccessRuleAsyncHelper(const Model::CreateMobileDeviceAccessRuleRequest& request, const CreateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOrganizationAsyncHelper(const Model::CreateOrganizationRequest& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceAsyncHelper(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccessControlRuleAsyncHelper(const Model::DeleteAccessControlRuleRequest& request, const DeleteAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEmailMonitoringConfigurationAsyncHelper(const Model::DeleteEmailMonitoringConfigurationRequest& request, const DeleteEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMailboxPermissionsAsyncHelper(const Model::DeleteMailboxPermissionsRequest& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMobileDeviceAccessOverrideAsyncHelper(const Model::DeleteMobileDeviceAccessOverrideRequest& request, const DeleteMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMobileDeviceAccessRuleAsyncHelper(const Model::DeleteMobileDeviceAccessRuleRequest& request, const DeleteMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOrganizationAsyncHelper(const Model::DeleteOrganizationRequest& request, const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourceAsyncHelper(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRetentionPolicyAsyncHelper(const Model::DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterFromWorkMailAsyncHelper(const Model::DeregisterFromWorkMailRequest& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterMailDomainAsyncHelper(const Model::DeregisterMailDomainRequest& request, const DeregisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEmailMonitoringConfigurationAsyncHelper(const Model::DescribeEmailMonitoringConfigurationRequest& request, const DescribeEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGroupAsyncHelper(const Model::DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInboundDmarcSettingsAsyncHelper(const Model::DescribeInboundDmarcSettingsRequest& request, const DescribeInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMailboxExportJobAsyncHelper(const Model::DescribeMailboxExportJobRequest& request, const DescribeMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationAsyncHelper(const Model::DescribeOrganizationRequest& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourceAsyncHelper(const Model::DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDelegateFromResourceAsyncHelper(const Model::DisassociateDelegateFromResourceRequest& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMemberFromGroupAsyncHelper(const Model::DisassociateMemberFromGroupRequest& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessControlEffectAsyncHelper(const Model::GetAccessControlEffectRequest& request, const GetAccessControlEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDefaultRetentionPolicyAsyncHelper(const Model::GetDefaultRetentionPolicyRequest& request, const GetDefaultRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMailDomainAsyncHelper(const Model::GetMailDomainRequest& request, const GetMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMailboxDetailsAsyncHelper(const Model::GetMailboxDetailsRequest& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMobileDeviceAccessEffectAsyncHelper(const Model::GetMobileDeviceAccessEffectRequest& request, const GetMobileDeviceAccessEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMobileDeviceAccessOverrideAsyncHelper(const Model::GetMobileDeviceAccessOverrideRequest& request, const GetMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccessControlRulesAsyncHelper(const Model::ListAccessControlRulesRequest& request, const ListAccessControlRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupMembersAsyncHelper(const Model::ListGroupMembersRequest& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMailDomainsAsyncHelper(const Model::ListMailDomainsRequest& request, const ListMailDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMailboxExportJobsAsyncHelper(const Model::ListMailboxExportJobsRequest& request, const ListMailboxExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMailboxPermissionsAsyncHelper(const Model::ListMailboxPermissionsRequest& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMobileDeviceAccessOverridesAsyncHelper(const Model::ListMobileDeviceAccessOverridesRequest& request, const ListMobileDeviceAccessOverridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMobileDeviceAccessRulesAsyncHelper(const Model::ListMobileDeviceAccessRulesRequest& request, const ListMobileDeviceAccessRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrganizationsAsyncHelper(const Model::ListOrganizationsRequest& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceDelegatesAsyncHelper(const Model::ListResourceDelegatesRequest& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesAsyncHelper(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAccessControlRuleAsyncHelper(const Model::PutAccessControlRuleRequest& request, const PutAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEmailMonitoringConfigurationAsyncHelper(const Model::PutEmailMonitoringConfigurationRequest& request, const PutEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutInboundDmarcSettingsAsyncHelper(const Model::PutInboundDmarcSettingsRequest& request, const PutInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMailboxPermissionsAsyncHelper(const Model::PutMailboxPermissionsRequest& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMobileDeviceAccessOverrideAsyncHelper(const Model::PutMobileDeviceAccessOverrideRequest& request, const PutMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRetentionPolicyAsyncHelper(const Model::PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterMailDomainAsyncHelper(const Model::RegisterMailDomainRequest& request, const RegisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterToWorkMailAsyncHelper(const Model::RegisterToWorkMailRequest& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetPasswordAsyncHelper(const Model::ResetPasswordRequest& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMailboxExportJobAsyncHelper(const Model::StartMailboxExportJobRequest& request, const StartMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDefaultMailDomainAsyncHelper(const Model::UpdateDefaultMailDomainRequest& request, const UpdateDefaultMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMailboxQuotaAsyncHelper(const Model::UpdateMailboxQuotaRequest& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMobileDeviceAccessRuleAsyncHelper(const Model::UpdateMobileDeviceAccessRuleRequest& request, const UpdateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePrimaryEmailAddressAsyncHelper(const Model::UpdatePrimaryEmailAddressRequest& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceAsyncHelper(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WorkMail
} // namespace Aws
