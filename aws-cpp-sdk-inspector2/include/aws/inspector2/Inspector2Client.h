/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/Inspector2ServiceClientModel.h>
#include <aws/inspector2/Inspector2LegacyAsyncMacros.h>

namespace Aws
{
namespace Inspector2
{
  /**
   * <p>Amazon Inspector is a vulnerability discovery service that automates
   * continuous scanning for security vulnerabilities within your Amazon EC2 and
   * Amazon ECR environments.</p>
   */
  class AWS_INSPECTOR2_API Inspector2Client : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Associates an Amazon Web Services account with an Amazon Inspector delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AssociateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberOutcome AssociateMember(const Model::AssociateMemberRequest& request) const;


        /**
         * <p>Retrieves the Amazon Inspector status of multiple Amazon Web Services
         * accounts within your environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchGetAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetAccountStatusOutcome BatchGetAccountStatus(const Model::BatchGetAccountStatusRequest& request) const;


        /**
         * <p>Gets free trial status for multiple Amazon Web Services
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/BatchGetFreeTrialInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFreeTrialInfoOutcome BatchGetFreeTrialInfo(const Model::BatchGetFreeTrialInfoRequest& request) const;


        /**
         * <p>Cancels the given findings report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CancelFindingsReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelFindingsReportOutcome CancelFindingsReport(const Model::CancelFindingsReportRequest& request) const;


        /**
         * <p>Creates a filter resource using specified filter criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFilterOutcome CreateFilter(const Model::CreateFilterRequest& request) const;


        /**
         * <p>Creates a finding report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateFindingsReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFindingsReportOutcome CreateFindingsReport(const Model::CreateFindingsReportRequest& request) const;


        /**
         * <p>Deletes a filter resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DeleteFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFilterOutcome DeleteFilter(const Model::DeleteFilterRequest& request) const;


        /**
         * <p>Describe Amazon Inspector configuration settings for an Amazon Web Services
         * organization</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;


        /**
         * <p>Disables Amazon Inspector scans for one or more Amazon Web Services accounts.
         * Disabling all scan types in an account disables the Amazon Inspector
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Disable">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOutcome Disable(const Model::DisableRequest& request) const;


        /**
         * <p>Disables the Amazon Inspector delegated administrator for your
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DisableDelegatedAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDelegatedAdminAccountOutcome DisableDelegatedAdminAccount(const Model::DisableDelegatedAdminAccountRequest& request) const;


        /**
         * <p>Disassociates a member account from an Amazon Inspector delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DisassociateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberOutcome DisassociateMember(const Model::DisassociateMemberRequest& request) const;


        /**
         * <p>Enables Amazon Inspector scans for one or more Amazon Web Services
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Enable">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOutcome Enable(const Model::EnableRequest& request) const;


        /**
         * <p>Enables the Amazon Inspector delegated administrator for your Organizations
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/EnableDelegatedAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDelegatedAdminAccountOutcome EnableDelegatedAdminAccount(const Model::EnableDelegatedAdminAccountRequest& request) const;


        /**
         * <p>Retrieves setting configurations for Inspector scans.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationOutcome GetConfiguration(const Model::GetConfigurationRequest& request) const;


        /**
         * <p>Retrieves information about the Amazon Inspector delegated administrator for
         * your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetDelegatedAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDelegatedAdminAccountOutcome GetDelegatedAdminAccount(const Model::GetDelegatedAdminAccountRequest& request) const;


        /**
         * <p>Gets the status of a findings report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetFindingsReportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsReportStatusOutcome GetFindingsReportStatus(const Model::GetFindingsReportStatusRequest& request) const;


        /**
         * <p>Gets member information for your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;


        /**
         * <p>Lists the permissions an account has to configure Amazon
         * Inspector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListAccountPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountPermissionsOutcome ListAccountPermissions(const Model::ListAccountPermissionsRequest& request) const;


        /**
         * <p>Lists coverage details for you environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoverageOutcome ListCoverage(const Model::ListCoverageRequest& request) const;


        /**
         * <p>Lists Amazon Inspector coverage statistics for your
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCoverageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoverageStatisticsOutcome ListCoverageStatistics(const Model::ListCoverageStatisticsRequest& request) const;


        /**
         * <p>Lists information about the Amazon Inspector delegated administrator of your
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListDelegatedAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDelegatedAdminAccountsOutcome ListDelegatedAdminAccounts(const Model::ListDelegatedAdminAccountsRequest& request) const;


        /**
         * <p>Lists the filters associated with your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFiltersOutcome ListFilters(const Model::ListFiltersRequest& request) const;


        /**
         * <p>Lists aggregated finding data for your environment based on specific
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListFindingAggregations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingAggregationsOutcome ListFindingAggregations(const Model::ListFindingAggregationsRequest& request) const;


        /**
         * <p>Lists findings for your environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;


        /**
         * <p>List members associated with the Amazon Inspector delegated administrator for
         * your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;


        /**
         * <p>Lists all tags attached to a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists the Amazon Inspector usage totals over the last 30 days.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListUsageTotals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsageTotalsOutcome ListUsageTotals(const Model::ListUsageTotalsRequest& request) const;


        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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
         * <p>Specifies the action that is to be applied to the findings that match the
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFilterOutcome UpdateFilter(const Model::UpdateFilterRequest& request) const;


        /**
         * <p>Updates the configurations for your Amazon Inspector
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Inspector2EndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const Inspector2ClientConfiguration& clientConfiguration);

      Inspector2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Inspector2EndpointProviderBase> m_endpointProvider;
  };

} // namespace Inspector2
} // namespace Aws
