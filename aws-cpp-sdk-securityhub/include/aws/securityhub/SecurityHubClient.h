/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/AcceptInvitationResult.h>
#include <aws/securityhub/model/BatchDisableStandardsResult.h>
#include <aws/securityhub/model/BatchEnableStandardsResult.h>
#include <aws/securityhub/model/BatchImportFindingsResult.h>
#include <aws/securityhub/model/BatchUpdateFindingsResult.h>
#include <aws/securityhub/model/CreateActionTargetResult.h>
#include <aws/securityhub/model/CreateInsightResult.h>
#include <aws/securityhub/model/CreateMembersResult.h>
#include <aws/securityhub/model/DeclineInvitationsResult.h>
#include <aws/securityhub/model/DeleteActionTargetResult.h>
#include <aws/securityhub/model/DeleteInsightResult.h>
#include <aws/securityhub/model/DeleteInvitationsResult.h>
#include <aws/securityhub/model/DeleteMembersResult.h>
#include <aws/securityhub/model/DescribeActionTargetsResult.h>
#include <aws/securityhub/model/DescribeHubResult.h>
#include <aws/securityhub/model/DescribeOrganizationConfigurationResult.h>
#include <aws/securityhub/model/DescribeProductsResult.h>
#include <aws/securityhub/model/DescribeStandardsResult.h>
#include <aws/securityhub/model/DescribeStandardsControlsResult.h>
#include <aws/securityhub/model/DisableImportFindingsForProductResult.h>
#include <aws/securityhub/model/DisableOrganizationAdminAccountResult.h>
#include <aws/securityhub/model/DisableSecurityHubResult.h>
#include <aws/securityhub/model/DisassociateFromMasterAccountResult.h>
#include <aws/securityhub/model/DisassociateMembersResult.h>
#include <aws/securityhub/model/EnableImportFindingsForProductResult.h>
#include <aws/securityhub/model/EnableOrganizationAdminAccountResult.h>
#include <aws/securityhub/model/EnableSecurityHubResult.h>
#include <aws/securityhub/model/GetEnabledStandardsResult.h>
#include <aws/securityhub/model/GetFindingsResult.h>
#include <aws/securityhub/model/GetInsightResultsResult.h>
#include <aws/securityhub/model/GetInsightsResult.h>
#include <aws/securityhub/model/GetInvitationsCountResult.h>
#include <aws/securityhub/model/GetMasterAccountResult.h>
#include <aws/securityhub/model/GetMembersResult.h>
#include <aws/securityhub/model/InviteMembersResult.h>
#include <aws/securityhub/model/ListEnabledProductsForImportResult.h>
#include <aws/securityhub/model/ListInvitationsResult.h>
#include <aws/securityhub/model/ListMembersResult.h>
#include <aws/securityhub/model/ListOrganizationAdminAccountsResult.h>
#include <aws/securityhub/model/ListTagsForResourceResult.h>
#include <aws/securityhub/model/TagResourceResult.h>
#include <aws/securityhub/model/UntagResourceResult.h>
#include <aws/securityhub/model/UpdateActionTargetResult.h>
#include <aws/securityhub/model/UpdateFindingsResult.h>
#include <aws/securityhub/model/UpdateInsightResult.h>
#include <aws/securityhub/model/UpdateOrganizationConfigurationResult.h>
#include <aws/securityhub/model/UpdateSecurityHubConfigurationResult.h>
#include <aws/securityhub/model/UpdateStandardsControlResult.h>
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

namespace SecurityHub
{

namespace Model
{
        class AcceptInvitationRequest;
        class BatchDisableStandardsRequest;
        class BatchEnableStandardsRequest;
        class BatchImportFindingsRequest;
        class BatchUpdateFindingsRequest;
        class CreateActionTargetRequest;
        class CreateInsightRequest;
        class CreateMembersRequest;
        class DeclineInvitationsRequest;
        class DeleteActionTargetRequest;
        class DeleteInsightRequest;
        class DeleteInvitationsRequest;
        class DeleteMembersRequest;
        class DescribeActionTargetsRequest;
        class DescribeHubRequest;
        class DescribeOrganizationConfigurationRequest;
        class DescribeProductsRequest;
        class DescribeStandardsRequest;
        class DescribeStandardsControlsRequest;
        class DisableImportFindingsForProductRequest;
        class DisableOrganizationAdminAccountRequest;
        class DisableSecurityHubRequest;
        class DisassociateFromMasterAccountRequest;
        class DisassociateMembersRequest;
        class EnableImportFindingsForProductRequest;
        class EnableOrganizationAdminAccountRequest;
        class EnableSecurityHubRequest;
        class GetEnabledStandardsRequest;
        class GetFindingsRequest;
        class GetInsightResultsRequest;
        class GetInsightsRequest;
        class GetInvitationsCountRequest;
        class GetMasterAccountRequest;
        class GetMembersRequest;
        class InviteMembersRequest;
        class ListEnabledProductsForImportRequest;
        class ListInvitationsRequest;
        class ListMembersRequest;
        class ListOrganizationAdminAccountsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateActionTargetRequest;
        class UpdateFindingsRequest;
        class UpdateInsightRequest;
        class UpdateOrganizationConfigurationRequest;
        class UpdateSecurityHubConfigurationRequest;
        class UpdateStandardsControlRequest;

        typedef Aws::Utils::Outcome<AcceptInvitationResult, SecurityHubError> AcceptInvitationOutcome;
        typedef Aws::Utils::Outcome<BatchDisableStandardsResult, SecurityHubError> BatchDisableStandardsOutcome;
        typedef Aws::Utils::Outcome<BatchEnableStandardsResult, SecurityHubError> BatchEnableStandardsOutcome;
        typedef Aws::Utils::Outcome<BatchImportFindingsResult, SecurityHubError> BatchImportFindingsOutcome;
        typedef Aws::Utils::Outcome<BatchUpdateFindingsResult, SecurityHubError> BatchUpdateFindingsOutcome;
        typedef Aws::Utils::Outcome<CreateActionTargetResult, SecurityHubError> CreateActionTargetOutcome;
        typedef Aws::Utils::Outcome<CreateInsightResult, SecurityHubError> CreateInsightOutcome;
        typedef Aws::Utils::Outcome<CreateMembersResult, SecurityHubError> CreateMembersOutcome;
        typedef Aws::Utils::Outcome<DeclineInvitationsResult, SecurityHubError> DeclineInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteActionTargetResult, SecurityHubError> DeleteActionTargetOutcome;
        typedef Aws::Utils::Outcome<DeleteInsightResult, SecurityHubError> DeleteInsightOutcome;
        typedef Aws::Utils::Outcome<DeleteInvitationsResult, SecurityHubError> DeleteInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteMembersResult, SecurityHubError> DeleteMembersOutcome;
        typedef Aws::Utils::Outcome<DescribeActionTargetsResult, SecurityHubError> DescribeActionTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeHubResult, SecurityHubError> DescribeHubOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationConfigurationResult, SecurityHubError> DescribeOrganizationConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeProductsResult, SecurityHubError> DescribeProductsOutcome;
        typedef Aws::Utils::Outcome<DescribeStandardsResult, SecurityHubError> DescribeStandardsOutcome;
        typedef Aws::Utils::Outcome<DescribeStandardsControlsResult, SecurityHubError> DescribeStandardsControlsOutcome;
        typedef Aws::Utils::Outcome<DisableImportFindingsForProductResult, SecurityHubError> DisableImportFindingsForProductOutcome;
        typedef Aws::Utils::Outcome<DisableOrganizationAdminAccountResult, SecurityHubError> DisableOrganizationAdminAccountOutcome;
        typedef Aws::Utils::Outcome<DisableSecurityHubResult, SecurityHubError> DisableSecurityHubOutcome;
        typedef Aws::Utils::Outcome<DisassociateFromMasterAccountResult, SecurityHubError> DisassociateFromMasterAccountOutcome;
        typedef Aws::Utils::Outcome<DisassociateMembersResult, SecurityHubError> DisassociateMembersOutcome;
        typedef Aws::Utils::Outcome<EnableImportFindingsForProductResult, SecurityHubError> EnableImportFindingsForProductOutcome;
        typedef Aws::Utils::Outcome<EnableOrganizationAdminAccountResult, SecurityHubError> EnableOrganizationAdminAccountOutcome;
        typedef Aws::Utils::Outcome<EnableSecurityHubResult, SecurityHubError> EnableSecurityHubOutcome;
        typedef Aws::Utils::Outcome<GetEnabledStandardsResult, SecurityHubError> GetEnabledStandardsOutcome;
        typedef Aws::Utils::Outcome<GetFindingsResult, SecurityHubError> GetFindingsOutcome;
        typedef Aws::Utils::Outcome<GetInsightResultsResult, SecurityHubError> GetInsightResultsOutcome;
        typedef Aws::Utils::Outcome<GetInsightsResult, SecurityHubError> GetInsightsOutcome;
        typedef Aws::Utils::Outcome<GetInvitationsCountResult, SecurityHubError> GetInvitationsCountOutcome;
        typedef Aws::Utils::Outcome<GetMasterAccountResult, SecurityHubError> GetMasterAccountOutcome;
        typedef Aws::Utils::Outcome<GetMembersResult, SecurityHubError> GetMembersOutcome;
        typedef Aws::Utils::Outcome<InviteMembersResult, SecurityHubError> InviteMembersOutcome;
        typedef Aws::Utils::Outcome<ListEnabledProductsForImportResult, SecurityHubError> ListEnabledProductsForImportOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, SecurityHubError> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, SecurityHubError> ListMembersOutcome;
        typedef Aws::Utils::Outcome<ListOrganizationAdminAccountsResult, SecurityHubError> ListOrganizationAdminAccountsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SecurityHubError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, SecurityHubError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, SecurityHubError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateActionTargetResult, SecurityHubError> UpdateActionTargetOutcome;
        typedef Aws::Utils::Outcome<UpdateFindingsResult, SecurityHubError> UpdateFindingsOutcome;
        typedef Aws::Utils::Outcome<UpdateInsightResult, SecurityHubError> UpdateInsightOutcome;
        typedef Aws::Utils::Outcome<UpdateOrganizationConfigurationResult, SecurityHubError> UpdateOrganizationConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateSecurityHubConfigurationResult, SecurityHubError> UpdateSecurityHubConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateStandardsControlResult, SecurityHubError> UpdateStandardsControlOutcome;

        typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
        typedef std::future<BatchDisableStandardsOutcome> BatchDisableStandardsOutcomeCallable;
        typedef std::future<BatchEnableStandardsOutcome> BatchEnableStandardsOutcomeCallable;
        typedef std::future<BatchImportFindingsOutcome> BatchImportFindingsOutcomeCallable;
        typedef std::future<BatchUpdateFindingsOutcome> BatchUpdateFindingsOutcomeCallable;
        typedef std::future<CreateActionTargetOutcome> CreateActionTargetOutcomeCallable;
        typedef std::future<CreateInsightOutcome> CreateInsightOutcomeCallable;
        typedef std::future<CreateMembersOutcome> CreateMembersOutcomeCallable;
        typedef std::future<DeclineInvitationsOutcome> DeclineInvitationsOutcomeCallable;
        typedef std::future<DeleteActionTargetOutcome> DeleteActionTargetOutcomeCallable;
        typedef std::future<DeleteInsightOutcome> DeleteInsightOutcomeCallable;
        typedef std::future<DeleteInvitationsOutcome> DeleteInvitationsOutcomeCallable;
        typedef std::future<DeleteMembersOutcome> DeleteMembersOutcomeCallable;
        typedef std::future<DescribeActionTargetsOutcome> DescribeActionTargetsOutcomeCallable;
        typedef std::future<DescribeHubOutcome> DescribeHubOutcomeCallable;
        typedef std::future<DescribeOrganizationConfigurationOutcome> DescribeOrganizationConfigurationOutcomeCallable;
        typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
        typedef std::future<DescribeStandardsOutcome> DescribeStandardsOutcomeCallable;
        typedef std::future<DescribeStandardsControlsOutcome> DescribeStandardsControlsOutcomeCallable;
        typedef std::future<DisableImportFindingsForProductOutcome> DisableImportFindingsForProductOutcomeCallable;
        typedef std::future<DisableOrganizationAdminAccountOutcome> DisableOrganizationAdminAccountOutcomeCallable;
        typedef std::future<DisableSecurityHubOutcome> DisableSecurityHubOutcomeCallable;
        typedef std::future<DisassociateFromMasterAccountOutcome> DisassociateFromMasterAccountOutcomeCallable;
        typedef std::future<DisassociateMembersOutcome> DisassociateMembersOutcomeCallable;
        typedef std::future<EnableImportFindingsForProductOutcome> EnableImportFindingsForProductOutcomeCallable;
        typedef std::future<EnableOrganizationAdminAccountOutcome> EnableOrganizationAdminAccountOutcomeCallable;
        typedef std::future<EnableSecurityHubOutcome> EnableSecurityHubOutcomeCallable;
        typedef std::future<GetEnabledStandardsOutcome> GetEnabledStandardsOutcomeCallable;
        typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
        typedef std::future<GetInsightResultsOutcome> GetInsightResultsOutcomeCallable;
        typedef std::future<GetInsightsOutcome> GetInsightsOutcomeCallable;
        typedef std::future<GetInvitationsCountOutcome> GetInvitationsCountOutcomeCallable;
        typedef std::future<GetMasterAccountOutcome> GetMasterAccountOutcomeCallable;
        typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
        typedef std::future<InviteMembersOutcome> InviteMembersOutcomeCallable;
        typedef std::future<ListEnabledProductsForImportOutcome> ListEnabledProductsForImportOutcomeCallable;
        typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
        typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
        typedef std::future<ListOrganizationAdminAccountsOutcome> ListOrganizationAdminAccountsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateActionTargetOutcome> UpdateActionTargetOutcomeCallable;
        typedef std::future<UpdateFindingsOutcome> UpdateFindingsOutcomeCallable;
        typedef std::future<UpdateInsightOutcome> UpdateInsightOutcomeCallable;
        typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
        typedef std::future<UpdateSecurityHubConfigurationOutcome> UpdateSecurityHubConfigurationOutcomeCallable;
        typedef std::future<UpdateStandardsControlOutcome> UpdateStandardsControlOutcomeCallable;
} // namespace Model

  class SecurityHubClient;

    typedef std::function<void(const SecurityHubClient*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchDisableStandardsRequest&, const Model::BatchDisableStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisableStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchEnableStandardsRequest&, const Model::BatchEnableStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEnableStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchImportFindingsRequest&, const Model::BatchImportFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchImportFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchUpdateFindingsRequest&, const Model::BatchUpdateFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateActionTargetRequest&, const Model::CreateActionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActionTargetResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateInsightRequest&, const Model::CreateInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateMembersRequest&, const Model::CreateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeclineInvitationsRequest&, const Model::DeclineInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteActionTargetRequest&, const Model::DeleteActionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActionTargetResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteInsightRequest&, const Model::DeleteInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteInvitationsRequest&, const Model::DeleteInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteMembersRequest&, const Model::DeleteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeActionTargetsRequest&, const Model::DescribeActionTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActionTargetsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeHubRequest&, const Model::DescribeHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHubResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeOrganizationConfigurationRequest&, const Model::DescribeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeProductsRequest&, const Model::DescribeProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeStandardsRequest&, const Model::DescribeStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeStandardsControlsRequest&, const Model::DescribeStandardsControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStandardsControlsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisableImportFindingsForProductRequest&, const Model::DisableImportFindingsForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableImportFindingsForProductResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisableOrganizationAdminAccountRequest&, const Model::DisableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisableSecurityHubRequest&, const Model::DisableSecurityHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSecurityHubResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisassociateFromMasterAccountRequest&, const Model::DisassociateFromMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFromMasterAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisassociateMembersRequest&, const Model::DisassociateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::EnableImportFindingsForProductRequest&, const Model::EnableImportFindingsForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableImportFindingsForProductResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::EnableOrganizationAdminAccountRequest&, const Model::EnableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::EnableSecurityHubRequest&, const Model::EnableSecurityHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSecurityHubResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetEnabledStandardsRequest&, const Model::GetEnabledStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnabledStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetInsightResultsRequest&, const Model::GetInsightResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightResultsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetInsightsRequest&, const Model::GetInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetInvitationsCountRequest&, const Model::GetInvitationsCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationsCountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetMasterAccountRequest&, const Model::GetMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMasterAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetMembersRequest&, const Model::GetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::InviteMembersRequest&, const Model::InviteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InviteMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListEnabledProductsForImportRequest&, const Model::ListEnabledProductsForImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnabledProductsForImportResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListOrganizationAdminAccountsRequest&, const Model::ListOrganizationAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateActionTargetRequest&, const Model::UpdateActionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateActionTargetResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateFindingsRequest&, const Model::UpdateFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateInsightRequest&, const Model::UpdateInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateSecurityHubConfigurationRequest&, const Model::UpdateSecurityHubConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityHubConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateStandardsControlRequest&, const Model::UpdateStandardsControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStandardsControlResponseReceivedHandler;

  /**
   * <p>Security Hub provides you with a comprehensive view of the security state of
   * your AWS environment and resources. It also provides you with the readiness
   * status of your environment based on controls from supported security standards.
   * Security Hub collects security data from AWS accounts, services, and integrated
   * third-party products and helps you analyze security trends in your environment
   * to identify the highest priority security issues. For more information about
   * Security Hub, see the <i> <a
   * href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">AWS
   * Security Hub User Guide</a> </i>.</p> <p>When you use operations in the Security
   * Hub API, the requests are executed only in the AWS Region that is currently
   * active or in the specific AWS Region that you specify in your request. Any
   * configuration or settings change that results from the operation is applied only
   * to that Region. To make the same change in other Regions, execute the same
   * command for each Region to apply the change to.</p> <p>For example, if your
   * Region is set to <code>us-west-2</code>, when you use <code>
   * <a>CreateMembers</a> </code> to add a member account to Security Hub, the
   * association of the member account with the master account is created only in the
   * <code>us-west-2</code> Region. Security Hub must be enabled for the member
   * account in the same Region that the invitation was sent from.</p> <p>The
   * following throttling limits apply to using Security Hub API operations.</p> <ul>
   * <li> <p> <code> <a>BatchEnableStandards</a> </code> - <code>RateLimit</code> of
   * 1 request per second, <code>BurstLimit</code> of 1 request per second.</p> </li>
   * <li> <p> <code> <a>GetFindings</a> </code> - <code>RateLimit</code> of 3
   * requests per second. <code>BurstLimit</code> of 6 requests per second.</p> </li>
   * <li> <p> <code> <a>UpdateFindings</a> </code> - <code>RateLimit</code> of 1
   * request per second. <code>BurstLimit</code> of 5 requests per second.</p> </li>
   * <li> <p> <code> <a>UpdateStandardsControl</a> </code> - <code>RateLimit</code>
   * of 1 request per second, <code>BurstLimit</code> of 5 requests per second.</p>
   * </li> <li> <p>All other operations - <code>RateLimit</code> of 10 requests per
   * second. <code>BurstLimit</code> of 30 requests per second.</p> </li> </ul>
   */
  class AWS_SECURITYHUB_API SecurityHubClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SecurityHubClient();


        /**
         * <p>Accepts the invitation to be a member account and be monitored by the
         * Security Hub master account that the invitation was sent from.</p> <p>This
         * operation is only used by member accounts that are not added through
         * Organizations.</p> <p>When the member account accepts the invitation, permission
         * is granted to the master account to view findings generated in the member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInvitationOutcome AcceptInvitation(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts the invitation to be a member account and be monitored by the
         * Security Hub master account that the invitation was sent from.</p> <p>This
         * operation is only used by member accounts that are not added through
         * Organizations.</p> <p>When the member account accepts the invitation, permission
         * is granted to the master account to view findings generated in the member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts the invitation to be a member account and be monitored by the
         * Security Hub master account that the invitation was sent from.</p> <p>This
         * operation is only used by member accounts that are not added through
         * Organizations.</p> <p>When the member account accepts the invitation, permission
         * is granted to the master account to view findings generated in the member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInvitationAsync(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the standards specified by the provided
         * <code>StandardsSubscriptionArns</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>AWS Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisableStandardsOutcome BatchDisableStandards(const Model::BatchDisableStandardsRequest& request) const;

        /**
         * <p>Disables the standards specified by the provided
         * <code>StandardsSubscriptionArns</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>AWS Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisableStandardsOutcomeCallable BatchDisableStandardsCallable(const Model::BatchDisableStandardsRequest& request) const;

        /**
         * <p>Disables the standards specified by the provided
         * <code>StandardsSubscriptionArns</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>AWS Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisableStandardsAsync(const Model::BatchDisableStandardsRequest& request, const BatchDisableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the standards specified by the provided <code>StandardsArn</code>. To
         * obtain the ARN for a standard, use the <code> <a>DescribeStandards</a> </code>
         * operation.</p> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>AWS Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEnableStandardsOutcome BatchEnableStandards(const Model::BatchEnableStandardsRequest& request) const;

        /**
         * <p>Enables the standards specified by the provided <code>StandardsArn</code>. To
         * obtain the ARN for a standard, use the <code> <a>DescribeStandards</a> </code>
         * operation.</p> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>AWS Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchEnableStandardsOutcomeCallable BatchEnableStandardsCallable(const Model::BatchEnableStandardsRequest& request) const;

        /**
         * <p>Enables the standards specified by the provided <code>StandardsArn</code>. To
         * obtain the ARN for a standard, use the <code> <a>DescribeStandards</a> </code>
         * operation.</p> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>AWS Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchEnableStandardsAsync(const Model::BatchEnableStandardsRequest& request, const BatchEnableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports security findings generated from an integrated third-party product
         * into Security Hub. This action is requested by the integrated product to import
         * its findings into Security Hub.</p> <p>The maximum allowed size for a finding is
         * 240 Kb. An error is returned for any finding larger than 240 Kb.</p> <p>After a
         * finding is created, <code>BatchImportFindings</code> cannot be used to update
         * the following finding fields and objects, which Security Hub customers use to
         * manage their investigation workflow.</p> <ul> <li> <p> <code>Confidence</code>
         * </p> </li> <li> <p> <code>Criticality</code> </p> </li> <li> <p>
         * <code>Note</code> </p> </li> <li> <p> <code>RelatedFindings</code> </p> </li>
         * <li> <p> <code>Severity</code> </p> </li> <li> <p> <code>Types</code> </p> </li>
         * <li> <p> <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchImportFindingsOutcome BatchImportFindings(const Model::BatchImportFindingsRequest& request) const;

        /**
         * <p>Imports security findings generated from an integrated third-party product
         * into Security Hub. This action is requested by the integrated product to import
         * its findings into Security Hub.</p> <p>The maximum allowed size for a finding is
         * 240 Kb. An error is returned for any finding larger than 240 Kb.</p> <p>After a
         * finding is created, <code>BatchImportFindings</code> cannot be used to update
         * the following finding fields and objects, which Security Hub customers use to
         * manage their investigation workflow.</p> <ul> <li> <p> <code>Confidence</code>
         * </p> </li> <li> <p> <code>Criticality</code> </p> </li> <li> <p>
         * <code>Note</code> </p> </li> <li> <p> <code>RelatedFindings</code> </p> </li>
         * <li> <p> <code>Severity</code> </p> </li> <li> <p> <code>Types</code> </p> </li>
         * <li> <p> <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchImportFindingsOutcomeCallable BatchImportFindingsCallable(const Model::BatchImportFindingsRequest& request) const;

        /**
         * <p>Imports security findings generated from an integrated third-party product
         * into Security Hub. This action is requested by the integrated product to import
         * its findings into Security Hub.</p> <p>The maximum allowed size for a finding is
         * 240 Kb. An error is returned for any finding larger than 240 Kb.</p> <p>After a
         * finding is created, <code>BatchImportFindings</code> cannot be used to update
         * the following finding fields and objects, which Security Hub customers use to
         * manage their investigation workflow.</p> <ul> <li> <p> <code>Confidence</code>
         * </p> </li> <li> <p> <code>Criticality</code> </p> </li> <li> <p>
         * <code>Note</code> </p> </li> <li> <p> <code>RelatedFindings</code> </p> </li>
         * <li> <p> <code>Severity</code> </p> </li> <li> <p> <code>Types</code> </p> </li>
         * <li> <p> <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchImportFindingsAsync(const Model::BatchImportFindingsRequest& request, const BatchImportFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by Security Hub customers to update information about their
         * investigation into a finding. Requested by master accounts or member accounts.
         * Master accounts can update findings for their account and their member accounts.
         * Member accounts can update findings for their account.</p> <p>Updates from
         * <code>BatchUpdateFindings</code> do not affect the value of
         * <code>UpdatedAt</code> for a finding.</p> <p>Master and member accounts can use
         * <code>BatchUpdateFindings</code> to update the following finding fields and
         * objects.</p> <ul> <li> <p> <code>Confidence</code> </p> </li> <li> <p>
         * <code>Criticality</code> </p> </li> <li> <p> <code>Note</code> </p> </li> <li>
         * <p> <code>RelatedFindings</code> </p> </li> <li> <p> <code>Severity</code> </p>
         * </li> <li> <p> <code>Types</code> </p> </li> <li> <p>
         * <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul> <p>You can configure IAM policies to restrict access to fields and
         * field values. For example, you might not want member accounts to be able to
         * suppress findings or change the finding severity. See <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/finding-update-batchupdatefindings.html#batchupdatefindings-configure-access">Configuring
         * access to BatchUpdateFindings</a> in the <i>AWS Security Hub User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateFindingsOutcome BatchUpdateFindings(const Model::BatchUpdateFindingsRequest& request) const;

        /**
         * <p>Used by Security Hub customers to update information about their
         * investigation into a finding. Requested by master accounts or member accounts.
         * Master accounts can update findings for their account and their member accounts.
         * Member accounts can update findings for their account.</p> <p>Updates from
         * <code>BatchUpdateFindings</code> do not affect the value of
         * <code>UpdatedAt</code> for a finding.</p> <p>Master and member accounts can use
         * <code>BatchUpdateFindings</code> to update the following finding fields and
         * objects.</p> <ul> <li> <p> <code>Confidence</code> </p> </li> <li> <p>
         * <code>Criticality</code> </p> </li> <li> <p> <code>Note</code> </p> </li> <li>
         * <p> <code>RelatedFindings</code> </p> </li> <li> <p> <code>Severity</code> </p>
         * </li> <li> <p> <code>Types</code> </p> </li> <li> <p>
         * <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul> <p>You can configure IAM policies to restrict access to fields and
         * field values. For example, you might not want member accounts to be able to
         * suppress findings or change the finding severity. See <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/finding-update-batchupdatefindings.html#batchupdatefindings-configure-access">Configuring
         * access to BatchUpdateFindings</a> in the <i>AWS Security Hub User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateFindingsOutcomeCallable BatchUpdateFindingsCallable(const Model::BatchUpdateFindingsRequest& request) const;

        /**
         * <p>Used by Security Hub customers to update information about their
         * investigation into a finding. Requested by master accounts or member accounts.
         * Master accounts can update findings for their account and their member accounts.
         * Member accounts can update findings for their account.</p> <p>Updates from
         * <code>BatchUpdateFindings</code> do not affect the value of
         * <code>UpdatedAt</code> for a finding.</p> <p>Master and member accounts can use
         * <code>BatchUpdateFindings</code> to update the following finding fields and
         * objects.</p> <ul> <li> <p> <code>Confidence</code> </p> </li> <li> <p>
         * <code>Criticality</code> </p> </li> <li> <p> <code>Note</code> </p> </li> <li>
         * <p> <code>RelatedFindings</code> </p> </li> <li> <p> <code>Severity</code> </p>
         * </li> <li> <p> <code>Types</code> </p> </li> <li> <p>
         * <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul> <p>You can configure IAM policies to restrict access to fields and
         * field values. For example, you might not want member accounts to be able to
         * suppress findings or change the finding severity. See <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/finding-update-batchupdatefindings.html#batchupdatefindings-configure-access">Configuring
         * access to BatchUpdateFindings</a> in the <i>AWS Security Hub User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateFindingsAsync(const Model::BatchUpdateFindingsRequest& request, const BatchUpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom action target in Security Hub.</p> <p>You can use custom
         * actions on findings and insights in Security Hub to trigger target actions in
         * Amazon CloudWatch Events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActionTargetOutcome CreateActionTarget(const Model::CreateActionTargetRequest& request) const;

        /**
         * <p>Creates a custom action target in Security Hub.</p> <p>You can use custom
         * actions on findings and insights in Security Hub to trigger target actions in
         * Amazon CloudWatch Events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateActionTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateActionTargetOutcomeCallable CreateActionTargetCallable(const Model::CreateActionTargetRequest& request) const;

        /**
         * <p>Creates a custom action target in Security Hub.</p> <p>You can use custom
         * actions on findings and insights in Security Hub to trigger target actions in
         * Amazon CloudWatch Events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateActionTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateActionTargetAsync(const Model::CreateActionTargetRequest& request, const CreateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom insight in Security Hub. An insight is a consolidation of
         * findings that relate to a security issue that requires attention or
         * remediation.</p> <p>To group the related findings in the insight, use the
         * <code>GroupByAttribute</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInsightOutcome CreateInsight(const Model::CreateInsightRequest& request) const;

        /**
         * <p>Creates a custom insight in Security Hub. An insight is a consolidation of
         * findings that relate to a security issue that requires attention or
         * remediation.</p> <p>To group the related findings in the insight, use the
         * <code>GroupByAttribute</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInsightOutcomeCallable CreateInsightCallable(const Model::CreateInsightRequest& request) const;

        /**
         * <p>Creates a custom insight in Security Hub. An insight is a consolidation of
         * findings that relate to a security issue that requires attention or
         * remediation.</p> <p>To group the related findings in the insight, use the
         * <code>GroupByAttribute</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInsightAsync(const Model::CreateInsightRequest& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a member association in Security Hub between the specified accounts
         * and the account used to make the request, which is the master account. If you
         * are integrated with Organizations, then the master account is the Security Hub
         * administrator account that is designated by the organization management
         * account.</p> <p> <code>CreateMembers</code> is always used to add accounts that
         * are not organization members.</p> <p>For accounts that are part of an
         * organization, <code>CreateMembers</code> is only used in the following
         * cases:</p> <ul> <li> <p>Security Hub is not configured to automatically add new
         * accounts in an organization.</p> </li> <li> <p>The account was disassociated or
         * deleted in Security Hub.</p> </li> </ul> <p>This action can only be used by an
         * account that has Security Hub enabled. To enable Security Hub, you can use the
         * <code> <a>EnableSecurityHub</a> </code> operation.</p> <p>For accounts that are
         * not organization members, you create the account association and then send an
         * invitation to the member account. To send the invitation, you use the <code>
         * <a>InviteMembers</a> </code> operation. If the account owner accepts the
         * invitation, the account becomes a member account in Security Hub.</p>
         * <p>Accounts that are part of an organization do not receive an invitation. They
         * automatically become a member account in Security Hub.</p> <p>A permissions
         * policy is added that permits the master account to view the findings generated
         * in the member account. When Security Hub is enabled in a member account,
         * findings are sent to both the member and master accounts. </p> <p>To remove the
         * association between the master and member accounts, use the <code>
         * <a>DisassociateFromMasterAccount</a> </code> or <code>
         * <a>DisassociateMembers</a> </code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Creates a member association in Security Hub between the specified accounts
         * and the account used to make the request, which is the master account. If you
         * are integrated with Organizations, then the master account is the Security Hub
         * administrator account that is designated by the organization management
         * account.</p> <p> <code>CreateMembers</code> is always used to add accounts that
         * are not organization members.</p> <p>For accounts that are part of an
         * organization, <code>CreateMembers</code> is only used in the following
         * cases:</p> <ul> <li> <p>Security Hub is not configured to automatically add new
         * accounts in an organization.</p> </li> <li> <p>The account was disassociated or
         * deleted in Security Hub.</p> </li> </ul> <p>This action can only be used by an
         * account that has Security Hub enabled. To enable Security Hub, you can use the
         * <code> <a>EnableSecurityHub</a> </code> operation.</p> <p>For accounts that are
         * not organization members, you create the account association and then send an
         * invitation to the member account. To send the invitation, you use the <code>
         * <a>InviteMembers</a> </code> operation. If the account owner accepts the
         * invitation, the account becomes a member account in Security Hub.</p>
         * <p>Accounts that are part of an organization do not receive an invitation. They
         * automatically become a member account in Security Hub.</p> <p>A permissions
         * policy is added that permits the master account to view the findings generated
         * in the member account. When Security Hub is enabled in a member account,
         * findings are sent to both the member and master accounts. </p> <p>To remove the
         * association between the master and member accounts, use the <code>
         * <a>DisassociateFromMasterAccount</a> </code> or <code>
         * <a>DisassociateMembers</a> </code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMembersOutcomeCallable CreateMembersCallable(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Creates a member association in Security Hub between the specified accounts
         * and the account used to make the request, which is the master account. If you
         * are integrated with Organizations, then the master account is the Security Hub
         * administrator account that is designated by the organization management
         * account.</p> <p> <code>CreateMembers</code> is always used to add accounts that
         * are not organization members.</p> <p>For accounts that are part of an
         * organization, <code>CreateMembers</code> is only used in the following
         * cases:</p> <ul> <li> <p>Security Hub is not configured to automatically add new
         * accounts in an organization.</p> </li> <li> <p>The account was disassociated or
         * deleted in Security Hub.</p> </li> </ul> <p>This action can only be used by an
         * account that has Security Hub enabled. To enable Security Hub, you can use the
         * <code> <a>EnableSecurityHub</a> </code> operation.</p> <p>For accounts that are
         * not organization members, you create the account association and then send an
         * invitation to the member account. To send the invitation, you use the <code>
         * <a>InviteMembers</a> </code> operation. If the account owner accepts the
         * invitation, the account becomes a member account in Security Hub.</p>
         * <p>Accounts that are part of an organization do not receive an invitation. They
         * automatically become a member account in Security Hub.</p> <p>A permissions
         * policy is added that permits the master account to view the findings generated
         * in the member account. When Security Hub is enabled in a member account,
         * findings are sent to both the member and master accounts. </p> <p>To remove the
         * association between the master and member accounts, use the <code>
         * <a>DisassociateFromMasterAccount</a> </code> or <code>
         * <a>DisassociateMembers</a> </code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMembersAsync(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Declines invitations to become a member account.</p> <p>This operation is
         * only used by accounts that are not part of an organization. Organization
         * accounts do not receive invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;

        /**
         * <p>Declines invitations to become a member account.</p> <p>This operation is
         * only used by accounts that are not part of an organization. Organization
         * accounts do not receive invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const Model::DeclineInvitationsRequest& request) const;

        /**
         * <p>Declines invitations to become a member account.</p> <p>This operation is
         * only used by accounts that are not part of an organization. Organization
         * accounts do not receive invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineInvitationsAsync(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom action target from Security Hub.</p> <p>Deleting a custom
         * action target does not affect any findings or insights that were already sent to
         * Amazon CloudWatch Events using the custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActionTargetOutcome DeleteActionTarget(const Model::DeleteActionTargetRequest& request) const;

        /**
         * <p>Deletes a custom action target from Security Hub.</p> <p>Deleting a custom
         * action target does not affect any findings or insights that were already sent to
         * Amazon CloudWatch Events using the custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteActionTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteActionTargetOutcomeCallable DeleteActionTargetCallable(const Model::DeleteActionTargetRequest& request) const;

        /**
         * <p>Deletes a custom action target from Security Hub.</p> <p>Deleting a custom
         * action target does not affect any findings or insights that were already sent to
         * Amazon CloudWatch Events using the custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteActionTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteActionTargetAsync(const Model::DeleteActionTargetRequest& request, const DeleteActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the insight specified by the <code>InsightArn</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightOutcome DeleteInsight(const Model::DeleteInsightRequest& request) const;

        /**
         * <p>Deletes the insight specified by the <code>InsightArn</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInsightOutcomeCallable DeleteInsightCallable(const Model::DeleteInsightRequest& request) const;

        /**
         * <p>Deletes the insight specified by the <code>InsightArn</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInsightAsync(const Model::DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes invitations received by the AWS account to become a member
         * account.</p> <p>This operation is only used by accounts that are not part of an
         * organization. Organization accounts do not receive invitations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;

        /**
         * <p>Deletes invitations received by the AWS account to become a member
         * account.</p> <p>This operation is only used by accounts that are not part of an
         * organization. Organization accounts do not receive invitations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const Model::DeleteInvitationsRequest& request) const;

        /**
         * <p>Deletes invitations received by the AWS account to become a member
         * account.</p> <p>This operation is only used by accounts that are not part of an
         * organization. Organization accounts do not receive invitations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInvitationsAsync(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified member accounts from Security Hub.</p> <p>Can be used
         * to delete member accounts that belong to an organization as well as member
         * accounts that were invited manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes the specified member accounts from Security Hub.</p> <p>Can be used
         * to delete member accounts that belong to an organization as well as member
         * accounts that were invited manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes the specified member accounts from Security Hub.</p> <p>Can be used
         * to delete member accounts that belong to an organization as well as member
         * accounts that were invited manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMembersAsync(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the custom action targets in Security Hub in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeActionTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActionTargetsOutcome DescribeActionTargets(const Model::DescribeActionTargetsRequest& request) const;

        /**
         * <p>Returns a list of the custom action targets in Security Hub in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeActionTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActionTargetsOutcomeCallable DescribeActionTargetsCallable(const Model::DescribeActionTargetsRequest& request) const;

        /**
         * <p>Returns a list of the custom action targets in Security Hub in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeActionTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActionTargetsAsync(const Model::DescribeActionTargetsRequest& request, const DescribeActionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about the Hub resource in your account, including the
         * <code>HubArn</code> and the time when you enabled Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHubOutcome DescribeHub(const Model::DescribeHubRequest& request) const;

        /**
         * <p>Returns details about the Hub resource in your account, including the
         * <code>HubArn</code> and the time when you enabled Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeHub">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHubOutcomeCallable DescribeHubCallable(const Model::DescribeHubRequest& request) const;

        /**
         * <p>Returns details about the Hub resource in your account, including the
         * <code>HubArn</code> and the time when you enabled Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeHub">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHubAsync(const Model::DescribeHubRequest& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the Organizations configuration for Security Hub.
         * Can only be called from a Security Hub administrator account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * <p>Returns information about the Organizations configuration for Security Hub.
         * Can only be called from a Security Hub administrator account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * <p>Returns information about the Organizations configuration for Security Hub.
         * Can only be called from a Security Hub administrator account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationConfigurationAsync(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the available products that you can subscribe to
         * and integrate with Security Hub in order to consolidate findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest& request) const;

        /**
         * <p>Returns information about the available products that you can subscribe to
         * and integrate with Security Hub in order to consolidate findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeProducts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductsOutcomeCallable DescribeProductsCallable(const Model::DescribeProductsRequest& request) const;

        /**
         * <p>Returns information about the available products that you can subscribe to
         * and integrate with Security Hub in order to consolidate findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeProducts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available standards in Security Hub.</p> <p>For each
         * standard, the results include the standard ARN, the name, and a description.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStandardsOutcome DescribeStandards(const Model::DescribeStandardsRequest& request) const;

        /**
         * <p>Returns a list of the available standards in Security Hub.</p> <p>For each
         * standard, the results include the standard ARN, the name, and a description.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStandardsOutcomeCallable DescribeStandardsCallable(const Model::DescribeStandardsRequest& request) const;

        /**
         * <p>Returns a list of the available standards in Security Hub.</p> <p>For each
         * standard, the results include the standard ARN, the name, and a description.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStandardsAsync(const Model::DescribeStandardsRequest& request, const DescribeStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of security standards controls.</p> <p>For each control, the
         * results include information about whether it is currently enabled, the severity,
         * and a link to remediation information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandardsControls">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStandardsControlsOutcome DescribeStandardsControls(const Model::DescribeStandardsControlsRequest& request) const;

        /**
         * <p>Returns a list of security standards controls.</p> <p>For each control, the
         * results include information about whether it is currently enabled, the severity,
         * and a link to remediation information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandardsControls">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStandardsControlsOutcomeCallable DescribeStandardsControlsCallable(const Model::DescribeStandardsControlsRequest& request) const;

        /**
         * <p>Returns a list of security standards controls.</p> <p>For each control, the
         * results include information about whether it is currently enabled, the severity,
         * and a link to remediation information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandardsControls">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStandardsControlsAsync(const Model::DescribeStandardsControlsRequest& request, const DescribeStandardsControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the integration of the specified product with Security Hub. After
         * the integration is disabled, findings from that product are no longer sent to
         * Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableImportFindingsForProductOutcome DisableImportFindingsForProduct(const Model::DisableImportFindingsForProductRequest& request) const;

        /**
         * <p>Disables the integration of the specified product with Security Hub. After
         * the integration is disabled, findings from that product are no longer sent to
         * Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableImportFindingsForProductOutcomeCallable DisableImportFindingsForProductCallable(const Model::DisableImportFindingsForProductRequest& request) const;

        /**
         * <p>Disables the integration of the specified product with Security Hub. After
         * the integration is disabled, findings from that product are no longer sent to
         * Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableImportFindingsForProductAsync(const Model::DisableImportFindingsForProductRequest& request, const DisableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables a Security Hub administrator account. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Disables a Security Hub administrator account. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Disables a Security Hub administrator account. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableOrganizationAdminAccountAsync(const Model::DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables Security Hub in your account only in the current Region. To disable
         * Security Hub in all Regions, you must submit one request per Region where you
         * have enabled Security Hub.</p> <p>When you disable Security Hub for a master
         * account, it doesn't disable Security Hub for any associated member accounts.</p>
         * <p>When you disable Security Hub, your existing findings and insights and any
         * Security Hub configuration settings are deleted after 90 days and cannot be
         * recovered. Any standards that were enabled are disabled, and your master and
         * member account associations are removed.</p> <p>If you want to save your
         * existing findings, you must export them before you disable Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableSecurityHubOutcome DisableSecurityHub(const Model::DisableSecurityHubRequest& request) const;

        /**
         * <p>Disables Security Hub in your account only in the current Region. To disable
         * Security Hub in all Regions, you must submit one request per Region where you
         * have enabled Security Hub.</p> <p>When you disable Security Hub for a master
         * account, it doesn't disable Security Hub for any associated member accounts.</p>
         * <p>When you disable Security Hub, your existing findings and insights and any
         * Security Hub configuration settings are deleted after 90 days and cannot be
         * recovered. Any standards that were enabled are disabled, and your master and
         * member account associations are removed.</p> <p>If you want to save your
         * existing findings, you must export them before you disable Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSecurityHubOutcomeCallable DisableSecurityHubCallable(const Model::DisableSecurityHubRequest& request) const;

        /**
         * <p>Disables Security Hub in your account only in the current Region. To disable
         * Security Hub in all Regions, you must submit one request per Region where you
         * have enabled Security Hub.</p> <p>When you disable Security Hub for a master
         * account, it doesn't disable Security Hub for any associated member accounts.</p>
         * <p>When you disable Security Hub, your existing findings and insights and any
         * Security Hub configuration settings are deleted after 90 days and cannot be
         * recovered. Any standards that were enabled are disabled, and your master and
         * member account associations are removed.</p> <p>If you want to save your
         * existing findings, you must export them before you disable Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSecurityHubAsync(const Model::DisableSecurityHubRequest& request, const DisableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the current Security Hub member account from the associated
         * master account.</p> <p>This operation is only used by accounts that are not part
         * of an organization. For organization accounts, only the master account (the
         * designated Security Hub administrator) can disassociate a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromMasterAccountOutcome DisassociateFromMasterAccount(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * <p>Disassociates the current Security Hub member account from the associated
         * master account.</p> <p>This operation is only used by accounts that are not part
         * of an organization. For organization accounts, only the master account (the
         * designated Security Hub administrator) can disassociate a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromMasterAccountOutcomeCallable DisassociateFromMasterAccountCallable(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * <p>Disassociates the current Security Hub member account from the associated
         * master account.</p> <p>This operation is only used by accounts that are not part
         * of an organization. For organization accounts, only the master account (the
         * designated Security Hub administrator) can disassociate a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromMasterAccountAsync(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified member accounts from the associated master
         * account.</p> <p>Can be used to disassociate both accounts that are in an
         * organization and accounts that were invited manually.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;

        /**
         * <p>Disassociates the specified member accounts from the associated master
         * account.</p> <p>Can be used to disassociate both accounts that are in an
         * organization and accounts that were invited manually.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMembersOutcomeCallable DisassociateMembersCallable(const Model::DisassociateMembersRequest& request) const;

        /**
         * <p>Disassociates the specified member accounts from the associated master
         * account.</p> <p>Can be used to disassociate both accounts that are in an
         * organization and accounts that were invited manually.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMembersAsync(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the integration of a partner product with Security Hub. Integrated
         * products send findings to Security Hub.</p> <p>When you enable a product
         * integration, a permissions policy that grants permission for the product to send
         * findings to Security Hub is applied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableImportFindingsForProductOutcome EnableImportFindingsForProduct(const Model::EnableImportFindingsForProductRequest& request) const;

        /**
         * <p>Enables the integration of a partner product with Security Hub. Integrated
         * products send findings to Security Hub.</p> <p>When you enable a product
         * integration, a permissions policy that grants permission for the product to send
         * findings to Security Hub is applied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableImportFindingsForProductOutcomeCallable EnableImportFindingsForProductCallable(const Model::EnableImportFindingsForProductRequest& request) const;

        /**
         * <p>Enables the integration of a partner product with Security Hub. Integrated
         * products send findings to Security Hub.</p> <p>When you enable a product
         * integration, a permissions policy that grants permission for the product to send
         * findings to Security Hub is applied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableImportFindingsForProductAsync(const Model::EnableImportFindingsForProductRequest& request, const EnableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Designates the Security Hub administrator account for an organization. Can
         * only be called by the organization management account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Designates the Security Hub administrator account for an organization. Can
         * only be called by the organization management account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Designates the Security Hub administrator account for an organization. Can
         * only be called by the organization management account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableOrganizationAdminAccountAsync(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables Security Hub for your account in the current Region or the Region you
         * specify in the request.</p> <p>When you enable Security Hub, you grant to
         * Security Hub the permissions necessary to gather findings from other services
         * that are integrated with Security Hub.</p> <p>When you use the
         * <code>EnableSecurityHub</code> operation to enable Security Hub, you also
         * automatically enable the following standards.</p> <ul> <li> <p>CIS AWS
         * Foundations</p> </li> <li> <p>AWS Foundational Security Best Practices</p> </li>
         * </ul> <p>You do not enable the Payment Card Industry Data Security Standard (PCI
         * DSS) standard. </p> <p>To not enable the automatically enabled standards, set
         * <code>EnableDefaultStandards</code> to <code>false</code>.</p> <p>After you
         * enable Security Hub, to enable a standard, use the <code>
         * <a>BatchEnableStandards</a> </code> operation. To disable a standard, use the
         * <code> <a>BatchDisableStandards</a> </code> operation.</p> <p>To learn more, see
         * <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">Setting
         * Up AWS Security Hub</a> in the <i>AWS Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSecurityHubOutcome EnableSecurityHub(const Model::EnableSecurityHubRequest& request) const;

        /**
         * <p>Enables Security Hub for your account in the current Region or the Region you
         * specify in the request.</p> <p>When you enable Security Hub, you grant to
         * Security Hub the permissions necessary to gather findings from other services
         * that are integrated with Security Hub.</p> <p>When you use the
         * <code>EnableSecurityHub</code> operation to enable Security Hub, you also
         * automatically enable the following standards.</p> <ul> <li> <p>CIS AWS
         * Foundations</p> </li> <li> <p>AWS Foundational Security Best Practices</p> </li>
         * </ul> <p>You do not enable the Payment Card Industry Data Security Standard (PCI
         * DSS) standard. </p> <p>To not enable the automatically enabled standards, set
         * <code>EnableDefaultStandards</code> to <code>false</code>.</p> <p>After you
         * enable Security Hub, to enable a standard, use the <code>
         * <a>BatchEnableStandards</a> </code> operation. To disable a standard, use the
         * <code> <a>BatchDisableStandards</a> </code> operation.</p> <p>To learn more, see
         * <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">Setting
         * Up AWS Security Hub</a> in the <i>AWS Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSecurityHubOutcomeCallable EnableSecurityHubCallable(const Model::EnableSecurityHubRequest& request) const;

        /**
         * <p>Enables Security Hub for your account in the current Region or the Region you
         * specify in the request.</p> <p>When you enable Security Hub, you grant to
         * Security Hub the permissions necessary to gather findings from other services
         * that are integrated with Security Hub.</p> <p>When you use the
         * <code>EnableSecurityHub</code> operation to enable Security Hub, you also
         * automatically enable the following standards.</p> <ul> <li> <p>CIS AWS
         * Foundations</p> </li> <li> <p>AWS Foundational Security Best Practices</p> </li>
         * </ul> <p>You do not enable the Payment Card Industry Data Security Standard (PCI
         * DSS) standard. </p> <p>To not enable the automatically enabled standards, set
         * <code>EnableDefaultStandards</code> to <code>false</code>.</p> <p>After you
         * enable Security Hub, to enable a standard, use the <code>
         * <a>BatchEnableStandards</a> </code> operation. To disable a standard, use the
         * <code> <a>BatchDisableStandards</a> </code> operation.</p> <p>To learn more, see
         * <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">Setting
         * Up AWS Security Hub</a> in the <i>AWS Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSecurityHubAsync(const Model::EnableSecurityHubRequest& request, const EnableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the standards that are currently enabled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnabledStandardsOutcome GetEnabledStandards(const Model::GetEnabledStandardsRequest& request) const;

        /**
         * <p>Returns a list of the standards that are currently enabled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnabledStandardsOutcomeCallable GetEnabledStandardsCallable(const Model::GetEnabledStandardsRequest& request) const;

        /**
         * <p>Returns a list of the standards that are currently enabled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnabledStandardsAsync(const Model::GetEnabledStandardsRequest& request, const GetEnabledStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of findings that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Returns a list of findings that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsOutcomeCallable GetFindingsCallable(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Returns a list of findings that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsAsync(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the results of the Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightResultsOutcome GetInsightResults(const Model::GetInsightResultsRequest& request) const;

        /**
         * <p>Lists the results of the Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightResultsOutcomeCallable GetInsightResultsCallable(const Model::GetInsightResultsRequest& request) const;

        /**
         * <p>Lists the results of the Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightResultsAsync(const Model::GetInsightResultsRequest& request, const GetInsightResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists and describes insights for the specified insight ARNs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightsOutcome GetInsights(const Model::GetInsightsRequest& request) const;

        /**
         * <p>Lists and describes insights for the specified insight ARNs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightsOutcomeCallable GetInsightsCallable(const Model::GetInsightsRequest& request) const;

        /**
         * <p>Lists and describes insights for the specified insight ARNs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightsAsync(const Model::GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the count of all Security Hub membership invitations that were sent
         * to the current member account, not including the currently accepted invitation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;

        /**
         * <p>Returns the count of all Security Hub membership invitations that were sent
         * to the current member account, not including the currently accepted invitation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const Model::GetInvitationsCountRequest& request) const;

        /**
         * <p>Returns the count of all Security Hub membership invitations that were sent
         * to the current member account, not including the currently accepted invitation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvitationsCountAsync(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the details for the Security Hub master account for the current
         * member account.</p> <p>Can be used by both member accounts that are in an
         * organization and accounts that were invited manually.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMasterAccountOutcome GetMasterAccount(const Model::GetMasterAccountRequest& request) const;

        /**
         * <p>Provides the details for the Security Hub master account for the current
         * member account.</p> <p>Can be used by both member accounts that are in an
         * organization and accounts that were invited manually.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMasterAccountOutcomeCallable GetMasterAccountCallable(const Model::GetMasterAccountRequest& request) const;

        /**
         * <p>Provides the details for the Security Hub master account for the current
         * member account.</p> <p>Can be used by both member accounts that are in an
         * organization and accounts that were invited manually.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMasterAccountAsync(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details for the Security Hub member accounts for the specified
         * account IDs.</p> <p>A master account can be either a delegated Security Hub
         * administrator account for an organization or a master account that enabled
         * Security Hub manually.</p> <p>The results include both member accounts that are
         * in an organization and accounts that were invited manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;

        /**
         * <p>Returns the details for the Security Hub member accounts for the specified
         * account IDs.</p> <p>A master account can be either a delegated Security Hub
         * administrator account for an organization or a master account that enabled
         * Security Hub manually.</p> <p>The results include both member accounts that are
         * in an organization and accounts that were invited manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMembersOutcomeCallable GetMembersCallable(const Model::GetMembersRequest& request) const;

        /**
         * <p>Returns the details for the Security Hub member accounts for the specified
         * account IDs.</p> <p>A master account can be either a delegated Security Hub
         * administrator account for an organization or a master account that enabled
         * Security Hub manually.</p> <p>The results include both member accounts that are
         * in an organization and accounts that were invited manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMembersAsync(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Invites other AWS accounts to become member accounts for the Security Hub
         * master account that the invitation is sent from.</p> <p>This operation is only
         * used to invite accounts that do not belong to an organization. Organization
         * accounts do not receive invitations.</p> <p>Before you can use this action to
         * invite a member, you must first use the <code> <a>CreateMembers</a> </code>
         * action to create the member account in Security Hub.</p> <p>When the account
         * owner enables Security Hub and accepts the invitation to become a member
         * account, the master account can view the findings generated from the member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteMembersOutcome InviteMembers(const Model::InviteMembersRequest& request) const;

        /**
         * <p>Invites other AWS accounts to become member accounts for the Security Hub
         * master account that the invitation is sent from.</p> <p>This operation is only
         * used to invite accounts that do not belong to an organization. Organization
         * accounts do not receive invitations.</p> <p>Before you can use this action to
         * invite a member, you must first use the <code> <a>CreateMembers</a> </code>
         * action to create the member account in Security Hub.</p> <p>When the account
         * owner enables Security Hub and accepts the invitation to become a member
         * account, the master account can view the findings generated from the member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InviteMembersOutcomeCallable InviteMembersCallable(const Model::InviteMembersRequest& request) const;

        /**
         * <p>Invites other AWS accounts to become member accounts for the Security Hub
         * master account that the invitation is sent from.</p> <p>This operation is only
         * used to invite accounts that do not belong to an organization. Organization
         * accounts do not receive invitations.</p> <p>Before you can use this action to
         * invite a member, you must first use the <code> <a>CreateMembers</a> </code>
         * action to create the member account in Security Hub.</p> <p>When the account
         * owner enables Security Hub and accepts the invitation to become a member
         * account, the master account can view the findings generated from the member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteMembersAsync(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all findings-generating solutions (products) that you are subscribed to
         * receive findings from in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnabledProductsForImportOutcome ListEnabledProductsForImport(const Model::ListEnabledProductsForImportRequest& request) const;

        /**
         * <p>Lists all findings-generating solutions (products) that you are subscribed to
         * receive findings from in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnabledProductsForImportOutcomeCallable ListEnabledProductsForImportCallable(const Model::ListEnabledProductsForImportRequest& request) const;

        /**
         * <p>Lists all findings-generating solutions (products) that you are subscribed to
         * receive findings from in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnabledProductsForImportAsync(const Model::ListEnabledProductsForImportRequest& request, const ListEnabledProductsForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Security Hub membership invitations that were sent to the current
         * AWS account.</p> <p>This operation is only used by accounts that do not belong
         * to an organization. Organization accounts do not receive
         * invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Lists all Security Hub membership invitations that were sent to the current
         * AWS account.</p> <p>This operation is only used by accounts that do not belong
         * to an organization. Organization accounts do not receive
         * invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Lists all Security Hub membership invitations that were sent to the current
         * AWS account.</p> <p>This operation is only used by accounts that do not belong
         * to an organization. Organization accounts do not receive
         * invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists details about all member accounts for the current Security Hub master
         * account.</p> <p>The results include both member accounts that belong to an
         * organization and member accounts that were invited manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * <p>Lists details about all member accounts for the current Security Hub master
         * account.</p> <p>The results include both member accounts that belong to an
         * organization and member accounts that were invited manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * <p>Lists details about all member accounts for the current Security Hub master
         * account.</p> <p>The results include both member accounts that belong to an
         * organization and member accounts that were invited manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Security Hub administrator accounts. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * <p>Lists the Security Hub administrator accounts. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * <p>Lists the Security Hub administrator accounts. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationAdminAccountsAsync(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags associated with a resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags associated with a resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags associated with a resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and description of a custom action target in Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateActionTargetOutcome UpdateActionTarget(const Model::UpdateActionTargetRequest& request) const;

        /**
         * <p>Updates the name and description of a custom action target in Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateActionTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateActionTargetOutcomeCallable UpdateActionTargetCallable(const Model::UpdateActionTargetRequest& request) const;

        /**
         * <p>Updates the name and description of a custom action target in Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateActionTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateActionTargetAsync(const Model::UpdateActionTargetRequest& request, const UpdateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>UpdateFindings</code> is deprecated. Instead of
         * <code>UpdateFindings</code>, use <code>BatchUpdateFindings</code>.</p>
         * <p>Updates the <code>Note</code> and <code>RecordState</code> of the Security
         * Hub-aggregated findings that the filter attributes specify. Any member account
         * that can view the finding also sees the update to the finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsOutcome UpdateFindings(const Model::UpdateFindingsRequest& request) const;

        /**
         * <p> <code>UpdateFindings</code> is deprecated. Instead of
         * <code>UpdateFindings</code>, use <code>BatchUpdateFindings</code>.</p>
         * <p>Updates the <code>Note</code> and <code>RecordState</code> of the Security
         * Hub-aggregated findings that the filter attributes specify. Any member account
         * that can view the finding also sees the update to the finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsOutcomeCallable UpdateFindingsCallable(const Model::UpdateFindingsRequest& request) const;

        /**
         * <p> <code>UpdateFindings</code> is deprecated. Instead of
         * <code>UpdateFindings</code>, use <code>BatchUpdateFindings</code>.</p>
         * <p>Updates the <code>Note</code> and <code>RecordState</code> of the Security
         * Hub-aggregated findings that the filter attributes specify. Any member account
         * that can view the finding also sees the update to the finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsAsync(const Model::UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Security Hub insight identified by the specified insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInsightOutcome UpdateInsight(const Model::UpdateInsightRequest& request) const;

        /**
         * <p>Updates the Security Hub insight identified by the specified insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInsightOutcomeCallable UpdateInsightCallable(const Model::UpdateInsightRequest& request) const;

        /**
         * <p>Updates the Security Hub insight identified by the specified insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInsightAsync(const Model::UpdateInsightRequest& request, const UpdateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to update the configuration related to Organizations. Can only be called
         * from a Security Hub administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * <p>Used to update the configuration related to Organizations. Can only be called
         * from a Security Hub administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * <p>Used to update the configuration related to Organizations. Can only be called
         * from a Security Hub administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOrganizationConfigurationAsync(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates configuration options for Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateSecurityHubConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityHubConfigurationOutcome UpdateSecurityHubConfiguration(const Model::UpdateSecurityHubConfigurationRequest& request) const;

        /**
         * <p>Updates configuration options for Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateSecurityHubConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityHubConfigurationOutcomeCallable UpdateSecurityHubConfigurationCallable(const Model::UpdateSecurityHubConfigurationRequest& request) const;

        /**
         * <p>Updates configuration options for Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateSecurityHubConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityHubConfigurationAsync(const Model::UpdateSecurityHubConfigurationRequest& request, const UpdateSecurityHubConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to control whether an individual security standard control is enabled or
         * disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateStandardsControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStandardsControlOutcome UpdateStandardsControl(const Model::UpdateStandardsControlRequest& request) const;

        /**
         * <p>Used to control whether an individual security standard control is enabled or
         * disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateStandardsControl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStandardsControlOutcomeCallable UpdateStandardsControlCallable(const Model::UpdateStandardsControlRequest& request) const;

        /**
         * <p>Used to control whether an individual security standard control is enabled or
         * disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateStandardsControl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStandardsControlAsync(const Model::UpdateStandardsControlRequest& request, const UpdateStandardsControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptInvitationAsyncHelper(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDisableStandardsAsyncHelper(const Model::BatchDisableStandardsRequest& request, const BatchDisableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchEnableStandardsAsyncHelper(const Model::BatchEnableStandardsRequest& request, const BatchEnableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchImportFindingsAsyncHelper(const Model::BatchImportFindingsRequest& request, const BatchImportFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdateFindingsAsyncHelper(const Model::BatchUpdateFindingsRequest& request, const BatchUpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateActionTargetAsyncHelper(const Model::CreateActionTargetRequest& request, const CreateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInsightAsyncHelper(const Model::CreateInsightRequest& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMembersAsyncHelper(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeclineInvitationsAsyncHelper(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteActionTargetAsyncHelper(const Model::DeleteActionTargetRequest& request, const DeleteActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInsightAsyncHelper(const Model::DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInvitationsAsyncHelper(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMembersAsyncHelper(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeActionTargetsAsyncHelper(const Model::DescribeActionTargetsRequest& request, const DescribeActionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHubAsyncHelper(const Model::DescribeHubRequest& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationConfigurationAsyncHelper(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductsAsyncHelper(const Model::DescribeProductsRequest& request, const DescribeProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStandardsAsyncHelper(const Model::DescribeStandardsRequest& request, const DescribeStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStandardsControlsAsyncHelper(const Model::DescribeStandardsControlsRequest& request, const DescribeStandardsControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableImportFindingsForProductAsyncHelper(const Model::DisableImportFindingsForProductRequest& request, const DisableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableOrganizationAdminAccountAsyncHelper(const Model::DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableSecurityHubAsyncHelper(const Model::DisableSecurityHubRequest& request, const DisableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateFromMasterAccountAsyncHelper(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMembersAsyncHelper(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableImportFindingsForProductAsyncHelper(const Model::EnableImportFindingsForProductRequest& request, const EnableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableOrganizationAdminAccountAsyncHelper(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableSecurityHubAsyncHelper(const Model::EnableSecurityHubRequest& request, const EnableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEnabledStandardsAsyncHelper(const Model::GetEnabledStandardsRequest& request, const GetEnabledStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsAsyncHelper(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInsightResultsAsyncHelper(const Model::GetInsightResultsRequest& request, const GetInsightResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInsightsAsyncHelper(const Model::GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvitationsCountAsyncHelper(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMasterAccountAsyncHelper(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMembersAsyncHelper(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InviteMembersAsyncHelper(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEnabledProductsForImportAsyncHelper(const Model::ListEnabledProductsForImportRequest& request, const ListEnabledProductsForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvitationsAsyncHelper(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMembersAsyncHelper(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrganizationAdminAccountsAsyncHelper(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateActionTargetAsyncHelper(const Model::UpdateActionTargetRequest& request, const UpdateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFindingsAsyncHelper(const Model::UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInsightAsyncHelper(const Model::UpdateInsightRequest& request, const UpdateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOrganizationConfigurationAsyncHelper(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSecurityHubConfigurationAsyncHelper(const Model::UpdateSecurityHubConfigurationRequest& request, const UpdateSecurityHubConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStandardsControlAsyncHelper(const Model::UpdateStandardsControlRequest& request, const UpdateStandardsControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SecurityHub
} // namespace Aws
