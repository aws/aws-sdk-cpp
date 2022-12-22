/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/Inspector2ServiceClientModel.h>

namespace Aws
{
namespace Inspector2
{
  /**
   * <p>Amazon Inspector is a vulnerability discovery service that automates
   * continuous scanning for security vulnerabilities within your Amazon EC2 and
   * Amazon ECR environments.</p>
   */
  class AWS_INSPECTOR2_API Inspector2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Inspector2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Inspector2::Inspector2ClientConfiguration& clientConfiguration = Aws::Inspector2::Inspector2ClientConfiguration(),
                         std::shared_ptr<Inspector2EndpointProviderBase> endpointProvider = Aws::MakeShared<Inspector2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<Inspector2EndpointProviderBase> endpointProvider = Aws::MakeShared<Inspector2EndpointProvider>(ALLOCATION_TAG),
                         const Aws::Inspector2::Inspector2ClientConfiguration& clientConfiguration = Aws::Inspector2::Inspector2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Inspector2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<Inspector2EndpointProviderBase> endpointProvider = Aws::MakeShared<Inspector2EndpointProvider>(ALLOCATION_TAG),
                         const Aws::Inspector2::Inspector2ClientConfiguration& clientConfiguration = Aws::Inspector2::Inspector2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Inspector2Client(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Inspector2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * organization.</p><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<Inspector2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Inspector2Client>;
      void init(const Inspector2ClientConfiguration& clientConfiguration);

      Inspector2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Inspector2EndpointProviderBase> m_endpointProvider;
  };

} // namespace Inspector2
} // namespace Aws
