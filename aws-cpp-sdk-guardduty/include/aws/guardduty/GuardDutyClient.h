/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/GuardDutyServiceClientModel.h>
#include <aws/guardduty/GuardDutyLegacyAsyncMacros.h>

namespace Aws
{
namespace GuardDuty
{
  /**
   * <p>Amazon GuardDuty is a continuous security monitoring service that analyzes
   * and processes the following data sources: VPC flow logs, Amazon Web Services
   * CloudTrail management event logs, CloudTrail S3 data event logs, EKS audit logs,
   * and DNS logs. It uses threat intelligence feeds (such as lists of malicious IPs
   * and domains) and machine learning to identify unexpected, potentially
   * unauthorized, and malicious activity within your Amazon Web Services
   * environment. This can include issues like escalations of privileges, uses of
   * exposed credentials, or communication with malicious IPs, URLs, or domains. For
   * example, GuardDuty can detect compromised EC2 instances that serve malware or
   * mine bitcoin. </p> <p>GuardDuty also monitors Amazon Web Services account access
   * behavior for signs of compromise. Some examples of this are unauthorized
   * infrastructure deployments such as EC2 instances deployed in a Region that has
   * never been used, or unusual API calls like a password policy change to reduce
   * password strength. </p> <p>GuardDuty informs you of the status of your Amazon
   * Web Services environment by producing security findings that you can view in the
   * GuardDuty console or through Amazon CloudWatch events. For more information, see
   * the <i> <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html">Amazon
   * GuardDuty User Guide</a> </i>. </p>
   */
  class AWS_GUARDDUTY_API GuardDutyClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GuardDutyClient(const Aws::GuardDuty::GuardDutyClientConfiguration& clientConfiguration = Aws::GuardDuty::GuardDutyClientConfiguration(),
                        std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider = Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GuardDutyClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider = Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG),
                        const Aws::GuardDuty::GuardDutyClientConfiguration& clientConfiguration = Aws::GuardDuty::GuardDutyClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GuardDutyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider = Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG),
                        const Aws::GuardDuty::GuardDutyClientConfiguration& clientConfiguration = Aws::GuardDuty::GuardDutyClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GuardDutyClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GuardDutyClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GuardDutyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GuardDutyClient();


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
         * <p>Accepts the invitation to be a member account and get monitored by a
         * GuardDuty administrator account that sent the invitation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AcceptAdministratorInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptAdministratorInvitationOutcome AcceptAdministratorInvitation(const Model::AcceptAdministratorInvitationRequest& request) const;


        /**
         * <p>Archives GuardDuty findings that are specified by the list of finding
         * IDs.</p>  <p>Only the administrator account can archive findings. Member
         * accounts don't have permission to archive findings from their accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ArchiveFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ArchiveFindingsOutcome ArchiveFindings(const Model::ArchiveFindingsRequest& request) const;


        /**
         * <p>Creates a single Amazon GuardDuty detector. A detector is a resource that
         * represents the GuardDuty service. To start using GuardDuty, you must create a
         * detector in each Region where you enable the service. You can have only one
         * detector per account per Region. All data sources are enabled in a new detector
         * by default.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDetectorOutcome CreateDetector(const Model::CreateDetectorRequest& request) const;


        /**
         * <p>Creates a filter using the specified finding criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFilterOutcome CreateFilter(const Model::CreateFilterRequest& request) const;


        /**
         * <p>Creates a new IPSet, which is called a trusted IP list in the console user
         * interface. An IPSet is a list of IP addresses that are trusted for secure
         * communication with Amazon Web Services infrastructure and applications.
         * GuardDuty doesn't generate findings for IP addresses that are included in
         * IPSets. Only users from the administrator account can use this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIPSetOutcome CreateIPSet(const Model::CreateIPSetRequest& request) const;


        /**
         * <p>Creates member accounts of the current Amazon Web Services account by
         * specifying a list of Amazon Web Services account IDs. This step is a
         * prerequisite for managing the associated member accounts either by invitation or
         * through an organization.</p> <p>When using <code>Create Members</code> as an
         * organizations delegated administrator this action will enable GuardDuty in the
         * added member accounts, with the exception of the organization delegated
         * administrator account, which must enable GuardDuty prior to being added as a
         * member.</p> <p>If you are adding accounts by invitation use this action after
         * GuardDuty has been enabled in potential member accounts and before using <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_InviteMembers.html">
         * <code>Invite Members</code> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;


        /**
         * <p>Creates a publishing destination to export findings to. The resource to
         * export findings to must exist before you use this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreatePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublishingDestinationOutcome CreatePublishingDestination(const Model::CreatePublishingDestinationRequest& request) const;


        /**
         * <p>Generates example findings of types specified by the list of finding types.
         * If 'NULL' is specified for <code>findingTypes</code>, the API generates example
         * findings of all supported finding types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;


        /**
         * <p>Creates a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP
         * addresses. GuardDuty generates findings based on ThreatIntelSets. Only users of
         * the administrator account can use this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThreatIntelSetOutcome CreateThreatIntelSet(const Model::CreateThreatIntelSetRequest& request) const;


        /**
         * <p>Declines invitations sent to the current member account by Amazon Web
         * Services accounts specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;


        /**
         * <p>Deletes an Amazon GuardDuty detector that is specified by the detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDetectorOutcome DeleteDetector(const Model::DeleteDetectorRequest& request) const;


        /**
         * <p>Deletes the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFilterOutcome DeleteFilter(const Model::DeleteFilterRequest& request) const;


        /**
         * <p>Deletes the IPSet specified by the <code>ipSetId</code>. IPSets are called
         * trusted IP lists in the console user interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIPSetOutcome DeleteIPSet(const Model::DeleteIPSetRequest& request) const;


        /**
         * <p>Deletes invitations sent to the current member account by Amazon Web Services
         * accounts specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;


        /**
         * <p>Deletes GuardDuty member accounts (to the current GuardDuty administrator
         * account) specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;


        /**
         * <p>Deletes the publishing definition with the specified
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeletePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublishingDestinationOutcome DeletePublishingDestination(const Model::DeletePublishingDestinationRequest& request) const;


        /**
         * <p>Deletes the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThreatIntelSetOutcome DeleteThreatIntelSet(const Model::DeleteThreatIntelSetRequest& request) const;


        /**
         * <p>Returns a list of malware scans. Each member account can view the malware
         * scans for their own accounts. An administrator can view the malware scans for
         * all the member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribeMalwareScans">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMalwareScansOutcome DescribeMalwareScans(const Model::DescribeMalwareScansRequest& request) const;


        /**
         * <p>Returns information about the account selected as the delegated administrator
         * for GuardDuty.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;


        /**
         * <p>Returns information about the publishing destination specified by the
         * provided <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePublishingDestinationOutcome DescribePublishingDestination(const Model::DescribePublishingDestinationRequest& request) const;


        /**
         * <p>Disables an Amazon Web Services account within the Organization as the
         * GuardDuty delegated administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;


        /**
         * <p>Disassociates the current GuardDuty member account from its administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromAdministratorAccountOutcome DisassociateFromAdministratorAccount(const Model::DisassociateFromAdministratorAccountRequest& request) const;


        /**
         * <p>Disassociates GuardDuty member accounts (to the current administrator
         * account) specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;


        /**
         * <p>Enables an Amazon Web Services account within the organization as the
         * GuardDuty delegated administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;


        /**
         * <p>Provides the details for the GuardDuty administrator account associated with
         * the current GuardDuty member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdministratorAccountOutcome GetAdministratorAccount(const Model::GetAdministratorAccountRequest& request) const;


        /**
         * <p>Retrieves an Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorOutcome GetDetector(const Model::GetDetectorRequest& request) const;


        /**
         * <p>Returns the details of the filter specified by the filter name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFilterOutcome GetFilter(const Model::GetFilterRequest& request) const;


        /**
         * <p>Describes Amazon GuardDuty findings specified by finding IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;


        /**
         * <p>Lists Amazon GuardDuty findings statistics for the specified detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsStatisticsOutcome GetFindingsStatistics(const Model::GetFindingsStatisticsRequest& request) const;


        /**
         * <p>Retrieves the IPSet specified by the <code>ipSetId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIPSetOutcome GetIPSet(const Model::GetIPSetRequest& request) const;


        /**
         * <p>Returns the count of all GuardDuty membership invitations that were sent to
         * the current member account except the currently accepted
         * invitation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;


        /**
         * <p>Returns the details of the malware scan settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMalwareScanSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMalwareScanSettingsOutcome GetMalwareScanSettings(const Model::GetMalwareScanSettingsRequest& request) const;


        /**
         * <p>Describes which data sources are enabled for the member account's
         * detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMemberDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberDetectorsOutcome GetMemberDetectors(const Model::GetMemberDetectorsRequest& request) const;


        /**
         * <p>Retrieves GuardDuty member accounts (of the current GuardDuty administrator
         * account) specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;


        /**
         * <p>Provides the number of days left for each data source used in the free trial
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetRemainingFreeTrialDays">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRemainingFreeTrialDaysOutcome GetRemainingFreeTrialDays(const Model::GetRemainingFreeTrialDaysRequest& request) const;


        /**
         * <p>Retrieves the ThreatIntelSet that is specified by the ThreatIntelSet
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThreatIntelSetOutcome GetThreatIntelSet(const Model::GetThreatIntelSetRequest& request) const;


        /**
         * <p>Lists Amazon GuardDuty usage statistics over the last 30 days for the
         * specified detector ID. For newly enabled detectors or data sources, the cost
         * returned will include only the usage so far under 30 days. This may differ from
         * the cost metrics in the console, which project usage over 30 days to provide a
         * monthly cost estimate. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/monitoring_costs.html#usage-calculations">Understanding
         * How Usage Costs are Calculated</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetUsageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageStatisticsOutcome GetUsageStatistics(const Model::GetUsageStatisticsRequest& request) const;


        /**
         * <p>Invites other Amazon Web Services accounts (created as members of the current
         * Amazon Web Services account by CreateMembers) to enable GuardDuty, and allow the
         * current Amazon Web Services account to view and manage these accounts' findings
         * on their behalf as the GuardDuty administrator account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InviteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteMembersOutcome InviteMembers(const Model::InviteMembersRequest& request) const;


        /**
         * <p>Lists detectorIds of all the existing Amazon GuardDuty detector
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorsOutcome ListDetectors(const Model::ListDetectorsRequest& request) const;


        /**
         * <p>Returns a paginated list of the current filters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFiltersOutcome ListFilters(const Model::ListFiltersRequest& request) const;


        /**
         * <p>Lists Amazon GuardDuty findings for the specified detector ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;


        /**
         * <p>Lists the IPSets of the GuardDuty service specified by the detector ID. If
         * you use this operation from a member account, the IPSets returned are the IPSets
         * from the associated administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListIPSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIPSetsOutcome ListIPSets(const Model::ListIPSetsRequest& request) const;


        /**
         * <p>Lists all GuardDuty membership invitations that were sent to the current
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;


        /**
         * <p>Lists details about all member accounts for the current GuardDuty
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;


        /**
         * <p>Lists the accounts configured as GuardDuty delegated
         * administrators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;


        /**
         * <p>Returns a list of publishing destinations associated with the specified
         * <code>detectorId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListPublishingDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublishingDestinationsOutcome ListPublishingDestinations(const Model::ListPublishingDestinationsRequest& request) const;


        /**
         * <p>Lists tags for a resource. Tagging is currently supported for detectors,
         * finding filters, IP sets, and threat intel sets, with a limit of 50 tags per
         * resource. When invoked, this operation returns all assigned tags for a given
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists the ThreatIntelSets of the GuardDuty service specified by the detector
         * ID. If you use this operation from a member account, the ThreatIntelSets
         * associated with the administrator account are returned.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListThreatIntelSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThreatIntelSetsOutcome ListThreatIntelSets(const Model::ListThreatIntelSetsRequest& request) const;


        /**
         * <p>Turns on GuardDuty monitoring of the specified member accounts. Use this
         * operation to restart monitoring of accounts that you stopped monitoring with the
         * <code>StopMonitoringMembers</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitoringMembersOutcome StartMonitoringMembers(const Model::StartMonitoringMembersRequest& request) const;


        /**
         * <p>Stops GuardDuty monitoring for the specified member accounts. Use the
         * <code>StartMonitoringMembers</code> operation to restart monitoring for those
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMonitoringMembersOutcome StopMonitoringMembers(const Model::StopMonitoringMembersRequest& request) const;


        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Unarchives GuardDuty findings specified by the
         * <code>findingIds</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnarchiveFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UnarchiveFindingsOutcome UnarchiveFindings(const Model::UnarchiveFindingsRequest& request) const;


        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorOutcome UpdateDetector(const Model::UpdateDetectorRequest& request) const;


        /**
         * <p>Updates the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFilterOutcome UpdateFilter(const Model::UpdateFilterRequest& request) const;


        /**
         * <p>Marks the specified GuardDuty findings as useful or not useful.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFindingsFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsFeedbackOutcome UpdateFindingsFeedback(const Model::UpdateFindingsFeedbackRequest& request) const;


        /**
         * <p>Updates the IPSet specified by the IPSet ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;


        /**
         * <p>Updates the malware scan settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateMalwareScanSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMalwareScanSettingsOutcome UpdateMalwareScanSettings(const Model::UpdateMalwareScanSettingsRequest& request) const;


        /**
         * <p>Contains information on member accounts to be updated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateMemberDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberDetectorsOutcome UpdateMemberDetectors(const Model::UpdateMemberDetectorsRequest& request) const;


        /**
         * <p>Updates the delegated administrator account with the values
         * provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;


        /**
         * <p>Updates information about the publishing destination specified by the
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdatePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublishingDestinationOutcome UpdatePublishingDestination(const Model::UpdatePublishingDestinationRequest& request) const;


        /**
         * <p>Updates the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThreatIntelSetOutcome UpdateThreatIntelSet(const Model::UpdateThreatIntelSetRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GuardDutyEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const GuardDutyClientConfiguration& clientConfiguration);

      GuardDutyClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GuardDutyEndpointProviderBase> m_endpointProvider;
  };

} // namespace GuardDuty
} // namespace Aws
