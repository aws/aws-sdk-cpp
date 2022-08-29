/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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

namespace Inspector2
{

namespace Model
{
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
} // namespace Model

  class Inspector2Client;

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

  /**
   * <p>Amazon Inspector is a vulnerability discovery service that automates
   * continuous scanning for security vulnerabilities within your Amazon EC2 and
   * Amazon ECR environments.</p>
   */
  class AWS_INSPECTOR2_API Inspector2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Inspector2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~Inspector2Client();


        /**
         * <p>Associates an Amazon Web Services account with an Amazon Inspector delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AssociateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberOutcome AssociateMember(const Model::AssociateMemberRequest& request) const;

        /**
         * A Callable wrapper for AssociateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateMemberOutcomeCallable AssociateMemberCallable(const Model::AssociateMemberRequest& request) const;

        /**
         * An Async wrapper for AssociateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateMemberAsync(const Model::AssociateMemberRequest& request, const AssociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Amazon Inspector status of multiple Amazon Web Services
         * accounts within your environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchGetAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetAccountStatusOutcome BatchGetAccountStatus(const Model::BatchGetAccountStatusRequest& request) const;

        /**
         * A Callable wrapper for BatchGetAccountStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetAccountStatusOutcomeCallable BatchGetAccountStatusCallable(const Model::BatchGetAccountStatusRequest& request) const;

        /**
         * An Async wrapper for BatchGetAccountStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetAccountStatusAsync(const Model::BatchGetAccountStatusRequest& request, const BatchGetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets free trial status for multiple Amazon Web Services
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchGetFreeTrialInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFreeTrialInfoOutcome BatchGetFreeTrialInfo(const Model::BatchGetFreeTrialInfoRequest& request) const;

        /**
         * A Callable wrapper for BatchGetFreeTrialInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetFreeTrialInfoOutcomeCallable BatchGetFreeTrialInfoCallable(const Model::BatchGetFreeTrialInfoRequest& request) const;

        /**
         * An Async wrapper for BatchGetFreeTrialInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetFreeTrialInfoAsync(const Model::BatchGetFreeTrialInfoRequest& request, const BatchGetFreeTrialInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the given findings report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CancelFindingsReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelFindingsReportOutcome CancelFindingsReport(const Model::CancelFindingsReportRequest& request) const;

        /**
         * A Callable wrapper for CancelFindingsReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelFindingsReportOutcomeCallable CancelFindingsReportCallable(const Model::CancelFindingsReportRequest& request) const;

        /**
         * An Async wrapper for CancelFindingsReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelFindingsReportAsync(const Model::CancelFindingsReportRequest& request, const CancelFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a filter resource using specified filter criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFilterOutcome CreateFilter(const Model::CreateFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFilterOutcomeCallable CreateFilterCallable(const Model::CreateFilterRequest& request) const;

        /**
         * An Async wrapper for CreateFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFilterAsync(const Model::CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a finding report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateFindingsReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFindingsReportOutcome CreateFindingsReport(const Model::CreateFindingsReportRequest& request) const;

        /**
         * A Callable wrapper for CreateFindingsReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFindingsReportOutcomeCallable CreateFindingsReportCallable(const Model::CreateFindingsReportRequest& request) const;

        /**
         * An Async wrapper for CreateFindingsReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFindingsReportAsync(const Model::CreateFindingsReportRequest& request, const CreateFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a filter resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DeleteFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFilterOutcome DeleteFilter(const Model::DeleteFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFilterOutcomeCallable DeleteFilterCallable(const Model::DeleteFilterRequest& request) const;

        /**
         * An Async wrapper for DeleteFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFilterAsync(const Model::DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe Amazon Inspector configuration settings for an Amazon Web Services
         * organization</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationConfigurationAsync(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables Amazon Inspector scans for one or more Amazon Web Services accounts.
         * Disabling all scan types in an account disables the Amazon Inspector
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Disable">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOutcome Disable(const Model::DisableRequest& request) const;

        /**
         * A Callable wrapper for Disable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableOutcomeCallable DisableCallable(const Model::DisableRequest& request) const;

        /**
         * An Async wrapper for Disable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAsync(const Model::DisableRequest& request, const DisableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the Amazon Inspector delegated administrator for your
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DisableDelegatedAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDelegatedAdminAccountOutcome DisableDelegatedAdminAccount(const Model::DisableDelegatedAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisableDelegatedAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableDelegatedAdminAccountOutcomeCallable DisableDelegatedAdminAccountCallable(const Model::DisableDelegatedAdminAccountRequest& request) const;

        /**
         * An Async wrapper for DisableDelegatedAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableDelegatedAdminAccountAsync(const Model::DisableDelegatedAdminAccountRequest& request, const DisableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a member account from an Amazon Inspector delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DisassociateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberOutcome DisassociateMember(const Model::DisassociateMemberRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMemberOutcomeCallable DisassociateMemberCallable(const Model::DisassociateMemberRequest& request) const;

        /**
         * An Async wrapper for DisassociateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMemberAsync(const Model::DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables Amazon Inspector scans for one or more Amazon Web Services
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Enable">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOutcome Enable(const Model::EnableRequest& request) const;

        /**
         * A Callable wrapper for Enable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableOutcomeCallable EnableCallable(const Model::EnableRequest& request) const;

        /**
         * An Async wrapper for Enable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAsync(const Model::EnableRequest& request, const EnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the Amazon Inspector delegated administrator for your Organizations
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/EnableDelegatedAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDelegatedAdminAccountOutcome EnableDelegatedAdminAccount(const Model::EnableDelegatedAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableDelegatedAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableDelegatedAdminAccountOutcomeCallable EnableDelegatedAdminAccountCallable(const Model::EnableDelegatedAdminAccountRequest& request) const;

        /**
         * An Async wrapper for EnableDelegatedAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableDelegatedAdminAccountAsync(const Model::EnableDelegatedAdminAccountRequest& request, const EnableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves setting configurations for Inspector scans.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationOutcome GetConfiguration(const Model::GetConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigurationOutcomeCallable GetConfigurationCallable(const Model::GetConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigurationAsync(const Model::GetConfigurationRequest& request, const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the Amazon Inspector delegated administrator for
         * your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetDelegatedAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDelegatedAdminAccountOutcome GetDelegatedAdminAccount(const Model::GetDelegatedAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for GetDelegatedAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDelegatedAdminAccountOutcomeCallable GetDelegatedAdminAccountCallable(const Model::GetDelegatedAdminAccountRequest& request) const;

        /**
         * An Async wrapper for GetDelegatedAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDelegatedAdminAccountAsync(const Model::GetDelegatedAdminAccountRequest& request, const GetDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of a findings report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetFindingsReportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsReportStatusOutcome GetFindingsReportStatus(const Model::GetFindingsReportStatusRequest& request) const;

        /**
         * A Callable wrapper for GetFindingsReportStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsReportStatusOutcomeCallable GetFindingsReportStatusCallable(const Model::GetFindingsReportStatusRequest& request) const;

        /**
         * An Async wrapper for GetFindingsReportStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsReportStatusAsync(const Model::GetFindingsReportStatusRequest& request, const GetFindingsReportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets member information for your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;

        /**
         * A Callable wrapper for GetMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMemberOutcomeCallable GetMemberCallable(const Model::GetMemberRequest& request) const;

        /**
         * An Async wrapper for GetMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMemberAsync(const Model::GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the permissions an account has to configure Amazon
         * Inspector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListAccountPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountPermissionsOutcome ListAccountPermissions(const Model::ListAccountPermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListAccountPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountPermissionsOutcomeCallable ListAccountPermissionsCallable(const Model::ListAccountPermissionsRequest& request) const;

        /**
         * An Async wrapper for ListAccountPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountPermissionsAsync(const Model::ListAccountPermissionsRequest& request, const ListAccountPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists coverage details for you environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoverageOutcome ListCoverage(const Model::ListCoverageRequest& request) const;

        /**
         * A Callable wrapper for ListCoverage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCoverageOutcomeCallable ListCoverageCallable(const Model::ListCoverageRequest& request) const;

        /**
         * An Async wrapper for ListCoverage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCoverageAsync(const Model::ListCoverageRequest& request, const ListCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists Amazon Inspector coverage statistics for your
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCoverageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoverageStatisticsOutcome ListCoverageStatistics(const Model::ListCoverageStatisticsRequest& request) const;

        /**
         * A Callable wrapper for ListCoverageStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCoverageStatisticsOutcomeCallable ListCoverageStatisticsCallable(const Model::ListCoverageStatisticsRequest& request) const;

        /**
         * An Async wrapper for ListCoverageStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCoverageStatisticsAsync(const Model::ListCoverageStatisticsRequest& request, const ListCoverageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the Amazon Inspector delegated administrator of your
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListDelegatedAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDelegatedAdminAccountsOutcome ListDelegatedAdminAccounts(const Model::ListDelegatedAdminAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListDelegatedAdminAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDelegatedAdminAccountsOutcomeCallable ListDelegatedAdminAccountsCallable(const Model::ListDelegatedAdminAccountsRequest& request) const;

        /**
         * An Async wrapper for ListDelegatedAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDelegatedAdminAccountsAsync(const Model::ListDelegatedAdminAccountsRequest& request, const ListDelegatedAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the filters associated with your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFiltersOutcome ListFilters(const Model::ListFiltersRequest& request) const;

        /**
         * A Callable wrapper for ListFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFiltersOutcomeCallable ListFiltersCallable(const Model::ListFiltersRequest& request) const;

        /**
         * An Async wrapper for ListFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFiltersAsync(const Model::ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists aggregated finding data for your environment based on specific
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListFindingAggregations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingAggregationsOutcome ListFindingAggregations(const Model::ListFindingAggregationsRequest& request) const;

        /**
         * A Callable wrapper for ListFindingAggregations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingAggregationsOutcomeCallable ListFindingAggregationsCallable(const Model::ListFindingAggregationsRequest& request) const;

        /**
         * An Async wrapper for ListFindingAggregations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingAggregationsAsync(const Model::ListFindingAggregationsRequest& request, const ListFindingAggregationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists findings for your environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsAsync(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List members associated with the Amazon Inspector delegated administrator for
         * your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * A Callable wrapper for ListMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags attached to a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListTagsForResource">AWS
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
         * <p>Lists the Amazon Inspector usage totals over the last 30 days.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListUsageTotals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsageTotalsOutcome ListUsageTotals(const Model::ListUsageTotalsRequest& request) const;

        /**
         * A Callable wrapper for ListUsageTotals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsageTotalsOutcomeCallable ListUsageTotalsCallable(const Model::ListUsageTotalsRequest& request) const;

        /**
         * An Async wrapper for ListUsageTotals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsageTotalsAsync(const Model::ListUsageTotalsRequest& request, const ListUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/TagResource">AWS
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
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UntagResource">AWS
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
         * <p>Updates setting configurations for your Amazon Inspector account. When you
         * use this API as an Amazon Inspector delegated administrator this updates the
         * setting for all accounts you manage. Member accounts in an organization cannot
         * update this setting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationOutcome UpdateConfiguration(const Model::UpdateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationOutcomeCallable UpdateConfigurationCallable(const Model::UpdateConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationAsync(const Model::UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies the action that is to be applied to the findings that match the
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFilterOutcome UpdateFilter(const Model::UpdateFilterRequest& request) const;

        /**
         * A Callable wrapper for UpdateFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFilterOutcomeCallable UpdateFilterCallable(const Model::UpdateFilterRequest& request) const;

        /**
         * An Async wrapper for UpdateFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFilterAsync(const Model::UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configurations for your Amazon Inspector
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOrganizationConfigurationAsync(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateMemberAsyncHelper(const Model::AssociateMemberRequest& request, const AssociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetAccountStatusAsyncHelper(const Model::BatchGetAccountStatusRequest& request, const BatchGetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetFreeTrialInfoAsyncHelper(const Model::BatchGetFreeTrialInfoRequest& request, const BatchGetFreeTrialInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelFindingsReportAsyncHelper(const Model::CancelFindingsReportRequest& request, const CancelFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFilterAsyncHelper(const Model::CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFindingsReportAsyncHelper(const Model::CreateFindingsReportRequest& request, const CreateFindingsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFilterAsyncHelper(const Model::DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationConfigurationAsyncHelper(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableAsyncHelper(const Model::DisableRequest& request, const DisableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableDelegatedAdminAccountAsyncHelper(const Model::DisableDelegatedAdminAccountRequest& request, const DisableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMemberAsyncHelper(const Model::DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableAsyncHelper(const Model::EnableRequest& request, const EnableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableDelegatedAdminAccountAsyncHelper(const Model::EnableDelegatedAdminAccountRequest& request, const EnableDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConfigurationAsyncHelper(const Model::GetConfigurationRequest& request, const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDelegatedAdminAccountAsyncHelper(const Model::GetDelegatedAdminAccountRequest& request, const GetDelegatedAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsReportStatusAsyncHelper(const Model::GetFindingsReportStatusRequest& request, const GetFindingsReportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMemberAsyncHelper(const Model::GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountPermissionsAsyncHelper(const Model::ListAccountPermissionsRequest& request, const ListAccountPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCoverageAsyncHelper(const Model::ListCoverageRequest& request, const ListCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCoverageStatisticsAsyncHelper(const Model::ListCoverageStatisticsRequest& request, const ListCoverageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDelegatedAdminAccountsAsyncHelper(const Model::ListDelegatedAdminAccountsRequest& request, const ListDelegatedAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFiltersAsyncHelper(const Model::ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingAggregationsAsyncHelper(const Model::ListFindingAggregationsRequest& request, const ListFindingAggregationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingsAsyncHelper(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMembersAsyncHelper(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsageTotalsAsyncHelper(const Model::ListUsageTotalsRequest& request, const ListUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConfigurationAsyncHelper(const Model::UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFilterAsyncHelper(const Model::UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOrganizationConfigurationAsyncHelper(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Inspector2
} // namespace Aws
