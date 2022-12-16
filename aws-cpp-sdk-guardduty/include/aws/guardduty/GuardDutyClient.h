/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/GuardDutyServiceClientModel.h>

namespace Aws
{
namespace GuardDuty
{
  /**
   * <p>Amazon GuardDuty is a continuous security monitoring service that analyzes
   * and processes the following data sources: VPC flow logs, Amazon Web Services
   * CloudTrail management event logs, CloudTrail S3 data event logs, EKS audit logs,
   * DNS logs, and Amazon EBS volume data. It uses threat intelligence feeds, such as
   * lists of malicious IPs and domains, and machine learning to identify unexpected,
   * potentially unauthorized, and malicious activity within your Amazon Web Services
   * environment. This can include issues like escalations of privileges, uses of
   * exposed credentials, or communication with malicious IPs, domains, or presence
   * of malware on your Amazon EC2 instances and container workloads. For example,
   * GuardDuty can detect compromised EC2 instances and container workloads serving
   * malware, or mining bitcoin. </p> <p>GuardDuty also monitors Amazon Web Services
   * account access behavior for signs of compromise, such as unauthorized
   * infrastructure deployments like EC2 instances deployed in a Region that has
   * never been used, or unusual API calls like a password policy change to reduce
   * password strength. </p> <p>GuardDuty informs you about the status of your Amazon
   * Web Services environment by producing security findings that you can view in the
   * GuardDuty console or through Amazon EventBridge. For more information, see the
   * <i> <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html">Amazon
   * GuardDuty User Guide</a> </i>. </p>
   */
  class AWS_GUARDDUTY_API GuardDutyClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GuardDutyClient>
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

        /**
         * <p>Accepts the invitation to be a member account and get monitored by a
         * GuardDuty administrator account that sent the invitation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AcceptAdministratorInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptAdministratorInvitationOutcome AcceptAdministratorInvitation(const Model::AcceptAdministratorInvitationRequest& request) const;

        /**
         * A Callable wrapper for AcceptAdministratorInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptAdministratorInvitationOutcomeCallable AcceptAdministratorInvitationCallable(const Model::AcceptAdministratorInvitationRequest& request) const;

        /**
         * An Async wrapper for AcceptAdministratorInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptAdministratorInvitationAsync(const Model::AcceptAdministratorInvitationRequest& request, const AcceptAdministratorInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ArchiveFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ArchiveFindingsOutcomeCallable ArchiveFindingsCallable(const Model::ArchiveFindingsRequest& request) const;

        /**
         * An Async wrapper for ArchiveFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ArchiveFindingsAsync(const Model::ArchiveFindingsRequest& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDetectorOutcomeCallable CreateDetectorCallable(const Model::CreateDetectorRequest& request) const;

        /**
         * An Async wrapper for CreateDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDetectorAsync(const Model::CreateDetectorRequest& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a filter using the specified finding criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateFilter">AWS
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
         * A Callable wrapper for CreateIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIPSetOutcomeCallable CreateIPSetCallable(const Model::CreateIPSetRequest& request) const;

        /**
         * An Async wrapper for CreateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIPSetAsync(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMembersOutcomeCallable CreateMembersCallable(const Model::CreateMembersRequest& request) const;

        /**
         * An Async wrapper for CreateMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMembersAsync(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a publishing destination to export findings to. The resource to
         * export findings to must exist before you use this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreatePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublishingDestinationOutcome CreatePublishingDestination(const Model::CreatePublishingDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreatePublishingDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublishingDestinationOutcomeCallable CreatePublishingDestinationCallable(const Model::CreatePublishingDestinationRequest& request) const;

        /**
         * An Async wrapper for CreatePublishingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublishingDestinationAsync(const Model::CreatePublishingDestinationRequest& request, const CreatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates example findings of types specified by the list of finding types.
         * If 'NULL' is specified for <code>findingTypes</code>, the API generates example
         * findings of all supported finding types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * A Callable wrapper for CreateSampleFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSampleFindingsOutcomeCallable CreateSampleFindingsCallable(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * An Async wrapper for CreateSampleFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSampleFindingsAsync(const Model::CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP
         * addresses. GuardDuty generates findings based on ThreatIntelSets. Only users of
         * the administrator account can use this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThreatIntelSetOutcome CreateThreatIntelSet(const Model::CreateThreatIntelSetRequest& request) const;

        /**
         * A Callable wrapper for CreateThreatIntelSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThreatIntelSetOutcomeCallable CreateThreatIntelSetCallable(const Model::CreateThreatIntelSetRequest& request) const;

        /**
         * An Async wrapper for CreateThreatIntelSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThreatIntelSetAsync(const Model::CreateThreatIntelSetRequest& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Declines invitations sent to the current member account by Amazon Web
         * Services accounts specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;

        /**
         * A Callable wrapper for DeclineInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const Model::DeclineInvitationsRequest& request) const;

        /**
         * An Async wrapper for DeclineInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineInvitationsAsync(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon GuardDuty detector that is specified by the detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDetectorOutcome DeleteDetector(const Model::DeleteDetectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDetectorOutcomeCallable DeleteDetectorCallable(const Model::DeleteDetectorRequest& request) const;

        /**
         * An Async wrapper for DeleteDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDetectorAsync(const Model::DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteFilter">AWS
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
         * <p>Deletes the IPSet specified by the <code>ipSetId</code>. IPSets are called
         * trusted IP lists in the console user interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIPSetOutcome DeleteIPSet(const Model::DeleteIPSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIPSetOutcomeCallable DeleteIPSetCallable(const Model::DeleteIPSetRequest& request) const;

        /**
         * An Async wrapper for DeleteIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIPSetAsync(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes invitations sent to the current member account by Amazon Web Services
         * accounts specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const Model::DeleteInvitationsRequest& request) const;

        /**
         * An Async wrapper for DeleteInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInvitationsAsync(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes GuardDuty member accounts (to the current GuardDuty administrator
         * account) specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * A Callable wrapper for DeleteMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const Model::DeleteMembersRequest& request) const;

        /**
         * An Async wrapper for DeleteMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMembersAsync(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the publishing definition with the specified
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeletePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublishingDestinationOutcome DeletePublishingDestination(const Model::DeletePublishingDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeletePublishingDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublishingDestinationOutcomeCallable DeletePublishingDestinationCallable(const Model::DeletePublishingDestinationRequest& request) const;

        /**
         * An Async wrapper for DeletePublishingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublishingDestinationAsync(const Model::DeletePublishingDestinationRequest& request, const DeletePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThreatIntelSetOutcome DeleteThreatIntelSet(const Model::DeleteThreatIntelSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteThreatIntelSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThreatIntelSetOutcomeCallable DeleteThreatIntelSetCallable(const Model::DeleteThreatIntelSetRequest& request) const;

        /**
         * An Async wrapper for DeleteThreatIntelSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThreatIntelSetAsync(const Model::DeleteThreatIntelSetRequest& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of malware scans. Each member account can view the malware
         * scans for their own accounts. An administrator can view the malware scans for
         * all the member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribeMalwareScans">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMalwareScansOutcome DescribeMalwareScans(const Model::DescribeMalwareScansRequest& request) const;

        /**
         * A Callable wrapper for DescribeMalwareScans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMalwareScansOutcomeCallable DescribeMalwareScansCallable(const Model::DescribeMalwareScansRequest& request) const;

        /**
         * An Async wrapper for DescribeMalwareScans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMalwareScansAsync(const Model::DescribeMalwareScansRequest& request, const DescribeMalwareScansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the account selected as the delegated administrator
         * for GuardDuty.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribeOrganizationConfiguration">AWS
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
         * <p>Returns information about the publishing destination specified by the
         * provided <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePublishingDestinationOutcome DescribePublishingDestination(const Model::DescribePublishingDestinationRequest& request) const;

        /**
         * A Callable wrapper for DescribePublishingDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePublishingDestinationOutcomeCallable DescribePublishingDestinationCallable(const Model::DescribePublishingDestinationRequest& request) const;

        /**
         * An Async wrapper for DescribePublishingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePublishingDestinationAsync(const Model::DescribePublishingDestinationRequest& request, const DescribePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an Amazon Web Services account within the Organization as the
         * GuardDuty delegated administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for DisableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableOrganizationAdminAccountAsync(const Model::DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the current GuardDuty member account from its administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromAdministratorAccountOutcome DisassociateFromAdministratorAccount(const Model::DisassociateFromAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFromAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromAdministratorAccountOutcomeCallable DisassociateFromAdministratorAccountCallable(const Model::DisassociateFromAdministratorAccountRequest& request) const;

        /**
         * An Async wrapper for DisassociateFromAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromAdministratorAccountAsync(const Model::DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates GuardDuty member accounts (to the current administrator
         * account) specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMembersOutcomeCallable DisassociateMembersCallable(const Model::DisassociateMembersRequest& request) const;

        /**
         * An Async wrapper for DisassociateMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMembersAsync(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables an Amazon Web Services account within the organization as the
         * GuardDuty delegated administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for EnableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableOrganizationAdminAccountAsync(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the details for the GuardDuty administrator account associated with
         * the current GuardDuty member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdministratorAccountOutcome GetAdministratorAccount(const Model::GetAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAdministratorAccountOutcomeCallable GetAdministratorAccountCallable(const Model::GetAdministratorAccountRequest& request) const;

        /**
         * An Async wrapper for GetAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAdministratorAccountAsync(const Model::GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorOutcome GetDetector(const Model::GetDetectorRequest& request) const;

        /**
         * A Callable wrapper for GetDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDetectorOutcomeCallable GetDetectorCallable(const Model::GetDetectorRequest& request) const;

        /**
         * An Async wrapper for GetDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDetectorAsync(const Model::GetDetectorRequest& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the filter specified by the filter name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFilterOutcome GetFilter(const Model::GetFilterRequest& request) const;

        /**
         * A Callable wrapper for GetFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFilterOutcomeCallable GetFilterCallable(const Model::GetFilterRequest& request) const;

        /**
         * An Async wrapper for GetFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFilterAsync(const Model::GetFilterRequest& request, const GetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Amazon GuardDuty findings specified by finding IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * A Callable wrapper for GetFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsOutcomeCallable GetFindingsCallable(const Model::GetFindingsRequest& request) const;

        /**
         * An Async wrapper for GetFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsAsync(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists Amazon GuardDuty findings statistics for the specified detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsStatisticsOutcome GetFindingsStatistics(const Model::GetFindingsStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetFindingsStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsStatisticsOutcomeCallable GetFindingsStatisticsCallable(const Model::GetFindingsStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetFindingsStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsStatisticsAsync(const Model::GetFindingsStatisticsRequest& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the IPSet specified by the <code>ipSetId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIPSetOutcome GetIPSet(const Model::GetIPSetRequest& request) const;

        /**
         * A Callable wrapper for GetIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIPSetOutcomeCallable GetIPSetCallable(const Model::GetIPSetRequest& request) const;

        /**
         * An Async wrapper for GetIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIPSetAsync(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the count of all GuardDuty membership invitations that were sent to
         * the current member account except the currently accepted
         * invitation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;

        /**
         * A Callable wrapper for GetInvitationsCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const Model::GetInvitationsCountRequest& request) const;

        /**
         * An Async wrapper for GetInvitationsCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvitationsCountAsync(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the malware scan settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMalwareScanSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMalwareScanSettingsOutcome GetMalwareScanSettings(const Model::GetMalwareScanSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetMalwareScanSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMalwareScanSettingsOutcomeCallable GetMalwareScanSettingsCallable(const Model::GetMalwareScanSettingsRequest& request) const;

        /**
         * An Async wrapper for GetMalwareScanSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMalwareScanSettingsAsync(const Model::GetMalwareScanSettingsRequest& request, const GetMalwareScanSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes which data sources are enabled for the member account's
         * detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMemberDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberDetectorsOutcome GetMemberDetectors(const Model::GetMemberDetectorsRequest& request) const;

        /**
         * A Callable wrapper for GetMemberDetectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMemberDetectorsOutcomeCallable GetMemberDetectorsCallable(const Model::GetMemberDetectorsRequest& request) const;

        /**
         * An Async wrapper for GetMemberDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMemberDetectorsAsync(const Model::GetMemberDetectorsRequest& request, const GetMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves GuardDuty member accounts (of the current GuardDuty administrator
         * account) specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;

        /**
         * A Callable wrapper for GetMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMembersOutcomeCallable GetMembersCallable(const Model::GetMembersRequest& request) const;

        /**
         * An Async wrapper for GetMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMembersAsync(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the number of days left for each data source used in the free trial
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetRemainingFreeTrialDays">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRemainingFreeTrialDaysOutcome GetRemainingFreeTrialDays(const Model::GetRemainingFreeTrialDaysRequest& request) const;

        /**
         * A Callable wrapper for GetRemainingFreeTrialDays that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRemainingFreeTrialDaysOutcomeCallable GetRemainingFreeTrialDaysCallable(const Model::GetRemainingFreeTrialDaysRequest& request) const;

        /**
         * An Async wrapper for GetRemainingFreeTrialDays that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRemainingFreeTrialDaysAsync(const Model::GetRemainingFreeTrialDaysRequest& request, const GetRemainingFreeTrialDaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the ThreatIntelSet that is specified by the ThreatIntelSet
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThreatIntelSetOutcome GetThreatIntelSet(const Model::GetThreatIntelSetRequest& request) const;

        /**
         * A Callable wrapper for GetThreatIntelSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetThreatIntelSetOutcomeCallable GetThreatIntelSetCallable(const Model::GetThreatIntelSetRequest& request) const;

        /**
         * An Async wrapper for GetThreatIntelSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetThreatIntelSetAsync(const Model::GetThreatIntelSetRequest& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for GetUsageStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageStatisticsOutcomeCallable GetUsageStatisticsCallable(const Model::GetUsageStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetUsageStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageStatisticsAsync(const Model::GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for InviteMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InviteMembersOutcomeCallable InviteMembersCallable(const Model::InviteMembersRequest& request) const;

        /**
         * An Async wrapper for InviteMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteMembersAsync(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists detectorIds of all the existing Amazon GuardDuty detector
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorsOutcome ListDetectors(const Model::ListDetectorsRequest& request) const;

        /**
         * A Callable wrapper for ListDetectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDetectorsOutcomeCallable ListDetectorsCallable(const Model::ListDetectorsRequest& request) const;

        /**
         * An Async wrapper for ListDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDetectorsAsync(const Model::ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of the current filters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFilters">AWS
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
         * <p>Lists Amazon GuardDuty findings for the specified detector ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindings">AWS
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
         * <p>Lists the IPSets of the GuardDuty service specified by the detector ID. If
         * you use this operation from a member account, the IPSets returned are the IPSets
         * from the associated administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListIPSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIPSetsOutcome ListIPSets(const Model::ListIPSetsRequest& request) const;

        /**
         * A Callable wrapper for ListIPSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIPSetsOutcomeCallable ListIPSetsCallable(const Model::ListIPSetsRequest& request) const;

        /**
         * An Async wrapper for ListIPSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIPSetsAsync(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all GuardDuty membership invitations that were sent to the current
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * A Callable wrapper for ListInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * An Async wrapper for ListInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists details about all member accounts for the current GuardDuty
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListMembers">AWS
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
         * <p>Lists the accounts configured as GuardDuty delegated
         * administrators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationAdminAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * An Async wrapper for ListOrganizationAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationAdminAccountsAsync(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of publishing destinations associated with the specified
         * <code>detectorId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListPublishingDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublishingDestinationsOutcome ListPublishingDestinations(const Model::ListPublishingDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListPublishingDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPublishingDestinationsOutcomeCallable ListPublishingDestinationsCallable(const Model::ListPublishingDestinationsRequest& request) const;

        /**
         * An Async wrapper for ListPublishingDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPublishingDestinationsAsync(const Model::ListPublishingDestinationsRequest& request, const ListPublishingDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListThreatIntelSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThreatIntelSetsOutcomeCallable ListThreatIntelSetsCallable(const Model::ListThreatIntelSetsRequest& request) const;

        /**
         * An Async wrapper for ListThreatIntelSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThreatIntelSetsAsync(const Model::ListThreatIntelSetsRequest& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Turns on GuardDuty monitoring of the specified member accounts. Use this
         * operation to restart monitoring of accounts that you stopped monitoring with the
         * <code>StopMonitoringMembers</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitoringMembersOutcome StartMonitoringMembers(const Model::StartMonitoringMembersRequest& request) const;

        /**
         * A Callable wrapper for StartMonitoringMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMonitoringMembersOutcomeCallable StartMonitoringMembersCallable(const Model::StartMonitoringMembersRequest& request) const;

        /**
         * An Async wrapper for StartMonitoringMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMonitoringMembersAsync(const Model::StartMonitoringMembersRequest& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops GuardDuty monitoring for the specified member accounts. Use the
         * <code>StartMonitoringMembers</code> operation to restart monitoring for those
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMonitoringMembersOutcome StopMonitoringMembers(const Model::StopMonitoringMembersRequest& request) const;

        /**
         * A Callable wrapper for StopMonitoringMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMonitoringMembersOutcomeCallable StopMonitoringMembersCallable(const Model::StopMonitoringMembersRequest& request) const;

        /**
         * An Async wrapper for StopMonitoringMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMonitoringMembersAsync(const Model::StopMonitoringMembersRequest& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TagResource">AWS
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
         * <p>Unarchives GuardDuty findings specified by the
         * <code>findingIds</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnarchiveFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UnarchiveFindingsOutcome UnarchiveFindings(const Model::UnarchiveFindingsRequest& request) const;

        /**
         * A Callable wrapper for UnarchiveFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnarchiveFindingsOutcomeCallable UnarchiveFindingsCallable(const Model::UnarchiveFindingsRequest& request) const;

        /**
         * An Async wrapper for UnarchiveFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnarchiveFindingsAsync(const Model::UnarchiveFindingsRequest& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UntagResource">AWS
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
         * <p>Updates the Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorOutcome UpdateDetector(const Model::UpdateDetectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDetectorOutcomeCallable UpdateDetectorCallable(const Model::UpdateDetectorRequest& request) const;

        /**
         * An Async wrapper for UpdateDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDetectorAsync(const Model::UpdateDetectorRequest& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFilter">AWS
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
         * <p>Marks the specified GuardDuty findings as useful or not useful.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFindingsFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsFeedbackOutcome UpdateFindingsFeedback(const Model::UpdateFindingsFeedbackRequest& request) const;

        /**
         * A Callable wrapper for UpdateFindingsFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsFeedbackOutcomeCallable UpdateFindingsFeedbackCallable(const Model::UpdateFindingsFeedbackRequest& request) const;

        /**
         * An Async wrapper for UpdateFindingsFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsFeedbackAsync(const Model::UpdateFindingsFeedbackRequest& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the IPSet specified by the IPSet ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIPSetOutcomeCallable UpdateIPSetCallable(const Model::UpdateIPSetRequest& request) const;

        /**
         * An Async wrapper for UpdateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIPSetAsync(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the malware scan settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateMalwareScanSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMalwareScanSettingsOutcome UpdateMalwareScanSettings(const Model::UpdateMalwareScanSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateMalwareScanSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMalwareScanSettingsOutcomeCallable UpdateMalwareScanSettingsCallable(const Model::UpdateMalwareScanSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateMalwareScanSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMalwareScanSettingsAsync(const Model::UpdateMalwareScanSettingsRequest& request, const UpdateMalwareScanSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Contains information on member accounts to be updated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateMemberDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberDetectorsOutcome UpdateMemberDetectors(const Model::UpdateMemberDetectorsRequest& request) const;

        /**
         * A Callable wrapper for UpdateMemberDetectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMemberDetectorsOutcomeCallable UpdateMemberDetectorsCallable(const Model::UpdateMemberDetectorsRequest& request) const;

        /**
         * An Async wrapper for UpdateMemberDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMemberDetectorsAsync(const Model::UpdateMemberDetectorsRequest& request, const UpdateMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the delegated administrator account with the values
         * provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateOrganizationConfiguration">AWS
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

        /**
         * <p>Updates information about the publishing destination specified by the
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdatePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublishingDestinationOutcome UpdatePublishingDestination(const Model::UpdatePublishingDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdatePublishingDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePublishingDestinationOutcomeCallable UpdatePublishingDestinationCallable(const Model::UpdatePublishingDestinationRequest& request) const;

        /**
         * An Async wrapper for UpdatePublishingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePublishingDestinationAsync(const Model::UpdatePublishingDestinationRequest& request, const UpdatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThreatIntelSetOutcome UpdateThreatIntelSet(const Model::UpdateThreatIntelSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateThreatIntelSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThreatIntelSetOutcomeCallable UpdateThreatIntelSetCallable(const Model::UpdateThreatIntelSetRequest& request) const;

        /**
         * An Async wrapper for UpdateThreatIntelSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThreatIntelSetAsync(const Model::UpdateThreatIntelSetRequest& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GuardDutyEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GuardDutyClient>;
      void init(const GuardDutyClientConfiguration& clientConfiguration);

      GuardDutyClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GuardDutyEndpointProviderBase> m_endpointProvider;
  };

} // namespace GuardDuty
} // namespace Aws
