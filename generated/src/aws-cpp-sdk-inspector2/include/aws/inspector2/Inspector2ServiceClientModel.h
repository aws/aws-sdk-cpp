/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/inspector2/Inspector2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/inspector2/Inspector2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Inspector2Client header */
#include <aws/inspector2/model/AssociateMemberResult.h>
#include <aws/inspector2/model/BatchGetAccountStatusResult.h>
#include <aws/inspector2/model/BatchGetFreeTrialInfoResult.h>
#include <aws/inspector2/model/CancelFindingsReportResult.h>
#include <aws/inspector2/model/CreateFilterResult.h>
#include <aws/inspector2/model/CreateFindingsReportResult.h>
#include <aws/inspector2/model/DeleteFilterResult.h>
#include <aws/inspector2/model/DescribeOrganizationConfigurationResult.h>
#include <aws/inspector2/model/DisableResult.h>
#include <aws/inspector2/model/DisableDelegatedAdminAccountResult.h>
#include <aws/inspector2/model/DisassociateMemberResult.h>
#include <aws/inspector2/model/EnableResult.h>
#include <aws/inspector2/model/EnableDelegatedAdminAccountResult.h>
#include <aws/inspector2/model/GetConfigurationResult.h>
#include <aws/inspector2/model/GetDelegatedAdminAccountResult.h>
#include <aws/inspector2/model/GetFindingsReportStatusResult.h>
#include <aws/inspector2/model/GetMemberResult.h>
#include <aws/inspector2/model/ListAccountPermissionsResult.h>
#include <aws/inspector2/model/ListCoverageResult.h>
#include <aws/inspector2/model/ListCoverageStatisticsResult.h>
#include <aws/inspector2/model/ListDelegatedAdminAccountsResult.h>
#include <aws/inspector2/model/ListFiltersResult.h>
#include <aws/inspector2/model/ListFindingAggregationsResult.h>
#include <aws/inspector2/model/ListFindingsResult.h>
#include <aws/inspector2/model/ListMembersResult.h>
#include <aws/inspector2/model/ListTagsForResourceResult.h>
#include <aws/inspector2/model/ListUsageTotalsResult.h>
#include <aws/inspector2/model/TagResourceResult.h>
#include <aws/inspector2/model/UntagResourceResult.h>
#include <aws/inspector2/model/UpdateConfigurationResult.h>
#include <aws/inspector2/model/UpdateFilterResult.h>
#include <aws/inspector2/model/UpdateOrganizationConfigurationResult.h>
/* End of service model headers required in Inspector2Client header */

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

  namespace Inspector2
  {
    using Inspector2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Inspector2EndpointProviderBase = Aws::Inspector2::Endpoint::Inspector2EndpointProviderBase;
    using Inspector2EndpointProvider = Aws::Inspector2::Endpoint::Inspector2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Inspector2Client header */
      class AssociateMemberRequest;
      class BatchGetAccountStatusRequest;
      class BatchGetFreeTrialInfoRequest;
      class CancelFindingsReportRequest;
      class CreateFilterRequest;
      class CreateFindingsReportRequest;
      class DeleteFilterRequest;
      class DescribeOrganizationConfigurationRequest;
      class DisableRequest;
      class DisableDelegatedAdminAccountRequest;
      class DisassociateMemberRequest;
      class EnableRequest;
      class EnableDelegatedAdminAccountRequest;
      class GetConfigurationRequest;
      class GetDelegatedAdminAccountRequest;
      class GetFindingsReportStatusRequest;
      class GetMemberRequest;
      class ListAccountPermissionsRequest;
      class ListCoverageRequest;
      class ListCoverageStatisticsRequest;
      class ListDelegatedAdminAccountsRequest;
      class ListFiltersRequest;
      class ListFindingAggregationsRequest;
      class ListFindingsRequest;
      class ListMembersRequest;
      class ListTagsForResourceRequest;
      class ListUsageTotalsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConfigurationRequest;
      class UpdateFilterRequest;
      class UpdateOrganizationConfigurationRequest;
      /* End of service model forward declarations required in Inspector2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateMemberResult, Inspector2Error> AssociateMemberOutcome;
      typedef Aws::Utils::Outcome<BatchGetAccountStatusResult, Inspector2Error> BatchGetAccountStatusOutcome;
      typedef Aws::Utils::Outcome<BatchGetFreeTrialInfoResult, Inspector2Error> BatchGetFreeTrialInfoOutcome;
      typedef Aws::Utils::Outcome<CancelFindingsReportResult, Inspector2Error> CancelFindingsReportOutcome;
      typedef Aws::Utils::Outcome<CreateFilterResult, Inspector2Error> CreateFilterOutcome;
      typedef Aws::Utils::Outcome<CreateFindingsReportResult, Inspector2Error> CreateFindingsReportOutcome;
      typedef Aws::Utils::Outcome<DeleteFilterResult, Inspector2Error> DeleteFilterOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConfigurationResult, Inspector2Error> DescribeOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DisableResult, Inspector2Error> DisableOutcome;
      typedef Aws::Utils::Outcome<DisableDelegatedAdminAccountResult, Inspector2Error> DisableDelegatedAdminAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateMemberResult, Inspector2Error> DisassociateMemberOutcome;
      typedef Aws::Utils::Outcome<EnableResult, Inspector2Error> EnableOutcome;
      typedef Aws::Utils::Outcome<EnableDelegatedAdminAccountResult, Inspector2Error> EnableDelegatedAdminAccountOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationResult, Inspector2Error> GetConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetDelegatedAdminAccountResult, Inspector2Error> GetDelegatedAdminAccountOutcome;
      typedef Aws::Utils::Outcome<GetFindingsReportStatusResult, Inspector2Error> GetFindingsReportStatusOutcome;
      typedef Aws::Utils::Outcome<GetMemberResult, Inspector2Error> GetMemberOutcome;
      typedef Aws::Utils::Outcome<ListAccountPermissionsResult, Inspector2Error> ListAccountPermissionsOutcome;
      typedef Aws::Utils::Outcome<ListCoverageResult, Inspector2Error> ListCoverageOutcome;
      typedef Aws::Utils::Outcome<ListCoverageStatisticsResult, Inspector2Error> ListCoverageStatisticsOutcome;
      typedef Aws::Utils::Outcome<ListDelegatedAdminAccountsResult, Inspector2Error> ListDelegatedAdminAccountsOutcome;
      typedef Aws::Utils::Outcome<ListFiltersResult, Inspector2Error> ListFiltersOutcome;
      typedef Aws::Utils::Outcome<ListFindingAggregationsResult, Inspector2Error> ListFindingAggregationsOutcome;
      typedef Aws::Utils::Outcome<ListFindingsResult, Inspector2Error> ListFindingsOutcome;
      typedef Aws::Utils::Outcome<ListMembersResult, Inspector2Error> ListMembersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Inspector2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListUsageTotalsResult, Inspector2Error> ListUsageTotalsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, Inspector2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, Inspector2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationResult, Inspector2Error> UpdateConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateFilterResult, Inspector2Error> UpdateFilterOutcome;
      typedef Aws::Utils::Outcome<UpdateOrganizationConfigurationResult, Inspector2Error> UpdateOrganizationConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateMemberOutcome> AssociateMemberOutcomeCallable;
      typedef std::future<BatchGetAccountStatusOutcome> BatchGetAccountStatusOutcomeCallable;
      typedef std::future<BatchGetFreeTrialInfoOutcome> BatchGetFreeTrialInfoOutcomeCallable;
      typedef std::future<CancelFindingsReportOutcome> CancelFindingsReportOutcomeCallable;
      typedef std::future<CreateFilterOutcome> CreateFilterOutcomeCallable;
      typedef std::future<CreateFindingsReportOutcome> CreateFindingsReportOutcomeCallable;
      typedef std::future<DeleteFilterOutcome> DeleteFilterOutcomeCallable;
      typedef std::future<DescribeOrganizationConfigurationOutcome> DescribeOrganizationConfigurationOutcomeCallable;
      typedef std::future<DisableOutcome> DisableOutcomeCallable;
      typedef std::future<DisableDelegatedAdminAccountOutcome> DisableDelegatedAdminAccountOutcomeCallable;
      typedef std::future<DisassociateMemberOutcome> DisassociateMemberOutcomeCallable;
      typedef std::future<EnableOutcome> EnableOutcomeCallable;
      typedef std::future<EnableDelegatedAdminAccountOutcome> EnableDelegatedAdminAccountOutcomeCallable;
      typedef std::future<GetConfigurationOutcome> GetConfigurationOutcomeCallable;
      typedef std::future<GetDelegatedAdminAccountOutcome> GetDelegatedAdminAccountOutcomeCallable;
      typedef std::future<GetFindingsReportStatusOutcome> GetFindingsReportStatusOutcomeCallable;
      typedef std::future<GetMemberOutcome> GetMemberOutcomeCallable;
      typedef std::future<ListAccountPermissionsOutcome> ListAccountPermissionsOutcomeCallable;
      typedef std::future<ListCoverageOutcome> ListCoverageOutcomeCallable;
      typedef std::future<ListCoverageStatisticsOutcome> ListCoverageStatisticsOutcomeCallable;
      typedef std::future<ListDelegatedAdminAccountsOutcome> ListDelegatedAdminAccountsOutcomeCallable;
      typedef std::future<ListFiltersOutcome> ListFiltersOutcomeCallable;
      typedef std::future<ListFindingAggregationsOutcome> ListFindingAggregationsOutcomeCallable;
      typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
      typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListUsageTotalsOutcome> ListUsageTotalsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConfigurationOutcome> UpdateConfigurationOutcomeCallable;
      typedef std::future<UpdateFilterOutcome> UpdateFilterOutcomeCallable;
      typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Inspector2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const Inspector2Client*, const Model::AssociateMemberRequest&, const Model::AssociateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchGetAccountStatusRequest&, const Model::BatchGetAccountStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetAccountStatusResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchGetFreeTrialInfoRequest&, const Model::BatchGetFreeTrialInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetFreeTrialInfoResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CancelFindingsReportRequest&, const Model::CancelFindingsReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelFindingsReportResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CreateFilterRequest&, const Model::CreateFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFilterResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CreateFindingsReportRequest&, const Model::CreateFindingsReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFindingsReportResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DeleteFilterRequest&, const Model::DeleteFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFilterResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DescribeOrganizationConfigurationRequest&, const Model::DescribeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DisableRequest&, const Model::DisableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DisableDelegatedAdminAccountRequest&, const Model::DisableDelegatedAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableDelegatedAdminAccountResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DisassociateMemberRequest&, const Model::DisassociateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::EnableRequest&, const Model::EnableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::EnableDelegatedAdminAccountRequest&, const Model::EnableDelegatedAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableDelegatedAdminAccountResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetConfigurationRequest&, const Model::GetConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetDelegatedAdminAccountRequest&, const Model::GetDelegatedAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDelegatedAdminAccountResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetFindingsReportStatusRequest&, const Model::GetFindingsReportStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsReportStatusResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetMemberRequest&, const Model::GetMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListAccountPermissionsRequest&, const Model::ListAccountPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountPermissionsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCoverageRequest&, const Model::ListCoverageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoverageResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCoverageStatisticsRequest&, const Model::ListCoverageStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoverageStatisticsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListDelegatedAdminAccountsRequest&, const Model::ListDelegatedAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDelegatedAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListFiltersRequest&, const Model::ListFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFiltersResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListFindingAggregationsRequest&, const Model::ListFindingAggregationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingAggregationsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListUsageTotalsRequest&, const Model::ListUsageTotalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsageTotalsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateConfigurationRequest&, const Model::UpdateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateFilterRequest&, const Model::UpdateFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFilterResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Inspector2
} // namespace Aws
