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
#include <aws/guardduty/model/GetOrganizationStatisticsRequest.h>

namespace Aws
{
namespace GuardDuty
{
  /**
   * <p>Amazon GuardDuty is a continuous security monitoring service that analyzes
   * and processes the following foundational data sources - VPC flow logs, Amazon
   * Web Services CloudTrail management event logs, CloudTrail S3 data event logs,
   * EKS audit logs, DNS logs, Amazon EBS volume data, runtime activity belonging to
   * container workloads, such as Amazon EKS, Amazon ECS (including Amazon Web
   * Services Fargate), and Amazon EC2 instances. It uses threat intelligence feeds,
   * such as lists of malicious IPs and domains, and machine learning to identify
   * unexpected, potentially unauthorized, and malicious activity within your Amazon
   * Web Services environment. This can include issues like escalations of
   * privileges, uses of exposed credentials, or communication with malicious IPs,
   * domains, or presence of malware on your Amazon EC2 instances and container
   * workloads. For example, GuardDuty can detect compromised EC2 instances and
   * container workloads serving malware, or mining bitcoin. </p> <p>GuardDuty also
   * monitors Amazon Web Services account access behavior for signs of compromise,
   * such as unauthorized infrastructure deployments like EC2 instances deployed in a
   * Region that has never been used, or unusual API calls like a password policy
   * change to reduce password strength. </p> <p>GuardDuty informs you about the
   * status of your Amazon Web Services environment by producing security findings
   * that you can view in the GuardDuty console or through Amazon EventBridge. For
   * more information, see the <i> <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html">Amazon
   * GuardDuty User Guide</a> </i>. </p>
   */
  class AWS_GUARDDUTY_API GuardDutyClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GuardDutyClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GuardDutyClientConfiguration ClientConfigurationType;
      typedef GuardDutyEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GuardDutyClient(const Aws::GuardDuty::GuardDutyClientConfiguration& clientConfiguration = Aws::GuardDuty::GuardDutyClientConfiguration(),
                        std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GuardDutyClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::GuardDuty::GuardDutyClientConfiguration& clientConfiguration = Aws::GuardDuty::GuardDutyClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GuardDutyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AcceptAdministratorInvitationRequestT = Model::AcceptAdministratorInvitationRequest>
        Model::AcceptAdministratorInvitationOutcomeCallable AcceptAdministratorInvitationCallable(const AcceptAdministratorInvitationRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::AcceptAdministratorInvitation, request);
        }

        /**
         * An Async wrapper for AcceptAdministratorInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptAdministratorInvitationRequestT = Model::AcceptAdministratorInvitationRequest>
        void AcceptAdministratorInvitationAsync(const AcceptAdministratorInvitationRequestT& request, const AcceptAdministratorInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::AcceptAdministratorInvitation, request, handler, context);
        }

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
        template<typename ArchiveFindingsRequestT = Model::ArchiveFindingsRequest>
        Model::ArchiveFindingsOutcomeCallable ArchiveFindingsCallable(const ArchiveFindingsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ArchiveFindings, request);
        }

        /**
         * An Async wrapper for ArchiveFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ArchiveFindingsRequestT = Model::ArchiveFindingsRequest>
        void ArchiveFindingsAsync(const ArchiveFindingsRequestT& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ArchiveFindings, request, handler, context);
        }

        /**
         * <p>Creates a single GuardDuty detector. A detector is a resource that represents
         * the GuardDuty service. To start using GuardDuty, you must create a detector in
         * each Region where you enable the service. You can have only one detector per
         * account per Region. All data sources are enabled in a new detector by
         * default.</p> <ul> <li> <p>When you don't specify any <code>features</code>, with
         * an exception to <code>RUNTIME_MONITORING</code>, all the optional features are
         * enabled by default.</p> </li> <li> <p>When you specify some of the
         * <code>features</code>, any feature that is not specified in the API call gets
         * enabled by default, with an exception to <code>RUNTIME_MONITORING</code>. </p>
         * </li> </ul> <p>Specifying both EKS Runtime Monitoring
         * (<code>EKS_RUNTIME_MONITORING</code>) and Runtime Monitoring
         * (<code>RUNTIME_MONITORING</code>) will cause an error. You can add only one of
         * these two features because Runtime Monitoring already includes the threat
         * detection for Amazon EKS resources. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/runtime-monitoring.html">Runtime
         * Monitoring</a>.</p> <p>There might be regional differences because some data
         * sources might not be available in all the Amazon Web Services Regions where
         * GuardDuty is presently supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDetectorOutcome CreateDetector(const Model::CreateDetectorRequest& request) const;

        /**
         * A Callable wrapper for CreateDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDetectorRequestT = Model::CreateDetectorRequest>
        Model::CreateDetectorOutcomeCallable CreateDetectorCallable(const CreateDetectorRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::CreateDetector, request);
        }

        /**
         * An Async wrapper for CreateDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDetectorRequestT = Model::CreateDetectorRequest>
        void CreateDetectorAsync(const CreateDetectorRequestT& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::CreateDetector, request, handler, context);
        }

        /**
         * <p>Creates a filter using the specified finding criteria. The maximum number of
         * saved filters per Amazon Web Services account per Region is 100. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_limits.html">Quotas
         * for GuardDuty</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFilterOutcome CreateFilter(const Model::CreateFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFilterRequestT = Model::CreateFilterRequest>
        Model::CreateFilterOutcomeCallable CreateFilterCallable(const CreateFilterRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::CreateFilter, request);
        }

        /**
         * An Async wrapper for CreateFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFilterRequestT = Model::CreateFilterRequest>
        void CreateFilterAsync(const CreateFilterRequestT& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::CreateFilter, request, handler, context);
        }

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
        template<typename CreateIPSetRequestT = Model::CreateIPSetRequest>
        Model::CreateIPSetOutcomeCallable CreateIPSetCallable(const CreateIPSetRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::CreateIPSet, request);
        }

        /**
         * An Async wrapper for CreateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIPSetRequestT = Model::CreateIPSetRequest>
        void CreateIPSetAsync(const CreateIPSetRequestT& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::CreateIPSet, request, handler, context);
        }

        /**
         * <p>Creates member accounts of the current Amazon Web Services account by
         * specifying a list of Amazon Web Services account IDs. This step is a
         * prerequisite for managing the associated member accounts either by invitation or
         * through an organization.</p> <p>As a delegated administrator, using
         * <code>CreateMembers</code> will enable GuardDuty in the added member accounts,
         * with the exception of the organization delegated administrator account. A
         * delegated administrator must enable GuardDuty prior to being added as a
         * member.</p> <p>When you use CreateMembers as an Organizations delegated
         * administrator, GuardDuty applies your organization's auto-enable settings to the
         * member accounts in this request, irrespective of the accounts being new or
         * existing members. For more information about the existing auto-enable settings
         * for your organization, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_DescribeOrganizationConfiguration.html">DescribeOrganizationConfiguration</a>.</p>
         * <p>If you are adding accounts by invitation, before using <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_InviteMembers.html">InviteMembers</a>,
         * use <code>CreateMembers</code> after GuardDuty has been enabled in potential
         * member accounts.</p> <p>If you disassociate a member from a GuardDuty delegated
         * administrator, the member account details obtained from this API, including the
         * associated email addresses, will be retained. This is done so that the delegated
         * administrator can invoke the <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_InviteMembers.html">InviteMembers</a>
         * API without the need to invoke the CreateMembers API again. To remove the
         * details associated with a member account, the delegated administrator must
         * invoke the <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_DeleteMembers.html">DeleteMembers</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;

        /**
         * A Callable wrapper for CreateMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMembersRequestT = Model::CreateMembersRequest>
        Model::CreateMembersOutcomeCallable CreateMembersCallable(const CreateMembersRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::CreateMembers, request);
        }

        /**
         * An Async wrapper for CreateMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMembersRequestT = Model::CreateMembersRequest>
        void CreateMembersAsync(const CreateMembersRequestT& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::CreateMembers, request, handler, context);
        }

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
        template<typename CreatePublishingDestinationRequestT = Model::CreatePublishingDestinationRequest>
        Model::CreatePublishingDestinationOutcomeCallable CreatePublishingDestinationCallable(const CreatePublishingDestinationRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::CreatePublishingDestination, request);
        }

        /**
         * An Async wrapper for CreatePublishingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePublishingDestinationRequestT = Model::CreatePublishingDestinationRequest>
        void CreatePublishingDestinationAsync(const CreatePublishingDestinationRequestT& request, const CreatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::CreatePublishingDestination, request, handler, context);
        }

        /**
         * <p>Generates sample findings of types specified by the list of finding types. If
         * 'NULL' is specified for <code>findingTypes</code>, the API generates sample
         * findings of all supported finding types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * A Callable wrapper for CreateSampleFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSampleFindingsRequestT = Model::CreateSampleFindingsRequest>
        Model::CreateSampleFindingsOutcomeCallable CreateSampleFindingsCallable(const CreateSampleFindingsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::CreateSampleFindings, request);
        }

        /**
         * An Async wrapper for CreateSampleFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSampleFindingsRequestT = Model::CreateSampleFindingsRequest>
        void CreateSampleFindingsAsync(const CreateSampleFindingsRequestT& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::CreateSampleFindings, request, handler, context);
        }

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
        template<typename CreateThreatIntelSetRequestT = Model::CreateThreatIntelSetRequest>
        Model::CreateThreatIntelSetOutcomeCallable CreateThreatIntelSetCallable(const CreateThreatIntelSetRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::CreateThreatIntelSet, request);
        }

        /**
         * An Async wrapper for CreateThreatIntelSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateThreatIntelSetRequestT = Model::CreateThreatIntelSetRequest>
        void CreateThreatIntelSetAsync(const CreateThreatIntelSetRequestT& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::CreateThreatIntelSet, request, handler, context);
        }

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
        template<typename DeclineInvitationsRequestT = Model::DeclineInvitationsRequest>
        Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const DeclineInvitationsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DeclineInvitations, request);
        }

        /**
         * An Async wrapper for DeclineInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeclineInvitationsRequestT = Model::DeclineInvitationsRequest>
        void DeclineInvitationsAsync(const DeclineInvitationsRequestT& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DeclineInvitations, request, handler, context);
        }

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
        template<typename DeleteDetectorRequestT = Model::DeleteDetectorRequest>
        Model::DeleteDetectorOutcomeCallable DeleteDetectorCallable(const DeleteDetectorRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DeleteDetector, request);
        }

        /**
         * An Async wrapper for DeleteDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDetectorRequestT = Model::DeleteDetectorRequest>
        void DeleteDetectorAsync(const DeleteDetectorRequestT& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DeleteDetector, request, handler, context);
        }

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
        template<typename DeleteFilterRequestT = Model::DeleteFilterRequest>
        Model::DeleteFilterOutcomeCallable DeleteFilterCallable(const DeleteFilterRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DeleteFilter, request);
        }

        /**
         * An Async wrapper for DeleteFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFilterRequestT = Model::DeleteFilterRequest>
        void DeleteFilterAsync(const DeleteFilterRequestT& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DeleteFilter, request, handler, context);
        }

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
        template<typename DeleteIPSetRequestT = Model::DeleteIPSetRequest>
        Model::DeleteIPSetOutcomeCallable DeleteIPSetCallable(const DeleteIPSetRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DeleteIPSet, request);
        }

        /**
         * An Async wrapper for DeleteIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIPSetRequestT = Model::DeleteIPSetRequest>
        void DeleteIPSetAsync(const DeleteIPSetRequestT& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DeleteIPSet, request, handler, context);
        }

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
        template<typename DeleteInvitationsRequestT = Model::DeleteInvitationsRequest>
        Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const DeleteInvitationsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DeleteInvitations, request);
        }

        /**
         * An Async wrapper for DeleteInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInvitationsRequestT = Model::DeleteInvitationsRequest>
        void DeleteInvitationsAsync(const DeleteInvitationsRequestT& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DeleteInvitations, request, handler, context);
        }

        /**
         * <p>Deletes GuardDuty member accounts (to the current GuardDuty administrator
         * account) specified by the account IDs.</p> <p>With
         * <code>autoEnableOrganizationMembers</code> configuration for your organization
         * set to <code>ALL</code>, you'll receive an error if you attempt to disable
         * GuardDuty for a member account in your organization.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * A Callable wrapper for DeleteMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMembersRequestT = Model::DeleteMembersRequest>
        Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const DeleteMembersRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DeleteMembers, request);
        }

        /**
         * An Async wrapper for DeleteMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMembersRequestT = Model::DeleteMembersRequest>
        void DeleteMembersAsync(const DeleteMembersRequestT& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DeleteMembers, request, handler, context);
        }

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
        template<typename DeletePublishingDestinationRequestT = Model::DeletePublishingDestinationRequest>
        Model::DeletePublishingDestinationOutcomeCallable DeletePublishingDestinationCallable(const DeletePublishingDestinationRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DeletePublishingDestination, request);
        }

        /**
         * An Async wrapper for DeletePublishingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePublishingDestinationRequestT = Model::DeletePublishingDestinationRequest>
        void DeletePublishingDestinationAsync(const DeletePublishingDestinationRequestT& request, const DeletePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DeletePublishingDestination, request, handler, context);
        }

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
        template<typename DeleteThreatIntelSetRequestT = Model::DeleteThreatIntelSetRequest>
        Model::DeleteThreatIntelSetOutcomeCallable DeleteThreatIntelSetCallable(const DeleteThreatIntelSetRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DeleteThreatIntelSet, request);
        }

        /**
         * An Async wrapper for DeleteThreatIntelSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteThreatIntelSetRequestT = Model::DeleteThreatIntelSetRequest>
        void DeleteThreatIntelSetAsync(const DeleteThreatIntelSetRequestT& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DeleteThreatIntelSet, request, handler, context);
        }

        /**
         * <p>Returns a list of malware scans. Each member account can view the malware
         * scans for their own accounts. An administrator can view the malware scans for
         * all the member accounts.</p> <p>There might be regional differences because some
         * data sources might not be available in all the Amazon Web Services Regions where
         * GuardDuty is presently supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribeMalwareScans">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMalwareScansOutcome DescribeMalwareScans(const Model::DescribeMalwareScansRequest& request) const;

        /**
         * A Callable wrapper for DescribeMalwareScans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMalwareScansRequestT = Model::DescribeMalwareScansRequest>
        Model::DescribeMalwareScansOutcomeCallable DescribeMalwareScansCallable(const DescribeMalwareScansRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DescribeMalwareScans, request);
        }

        /**
         * An Async wrapper for DescribeMalwareScans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMalwareScansRequestT = Model::DescribeMalwareScansRequest>
        void DescribeMalwareScansAsync(const DescribeMalwareScansRequestT& request, const DescribeMalwareScansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DescribeMalwareScans, request, handler, context);
        }

        /**
         * <p>Returns information about the account selected as the delegated administrator
         * for GuardDuty.</p> <p>There might be regional differences because some data
         * sources might not be available in all the Amazon Web Services Regions where
         * GuardDuty is presently supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DescribeOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        void DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequestT& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DescribeOrganizationConfiguration, request, handler, context);
        }

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
        template<typename DescribePublishingDestinationRequestT = Model::DescribePublishingDestinationRequest>
        Model::DescribePublishingDestinationOutcomeCallable DescribePublishingDestinationCallable(const DescribePublishingDestinationRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DescribePublishingDestination, request);
        }

        /**
         * An Async wrapper for DescribePublishingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePublishingDestinationRequestT = Model::DescribePublishingDestinationRequest>
        void DescribePublishingDestinationAsync(const DescribePublishingDestinationRequestT& request, const DescribePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DescribePublishingDestination, request, handler, context);
        }

        /**
         * <p>Removes the existing GuardDuty delegated administrator of the organization.
         * Only the organization's management account can run this API
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableOrganizationAdminAccountRequestT = Model::DisableOrganizationAdminAccountRequest>
        Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const DisableOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DisableOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for DisableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableOrganizationAdminAccountRequestT = Model::DisableOrganizationAdminAccountRequest>
        void DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountRequestT& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DisableOrganizationAdminAccount, request, handler, context);
        }

        /**
         * <p>Disassociates the current GuardDuty member account from its administrator
         * account.</p> <p>When you disassociate an invited member from a GuardDuty
         * delegated administrator, the member account details obtained from the <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">CreateMembers</a>
         * API, including the associated email addresses, are retained. This is done so
         * that the delegated administrator can invoke the <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_InviteMembers.html">InviteMembers</a>
         * API without the need to invoke the CreateMembers API again. To remove the
         * details associated with a member account, the delegated administrator must
         * invoke the <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_DeleteMembers.html">DeleteMembers</a>
         * API. </p> <p>With <code>autoEnableOrganizationMembers</code> configuration for
         * your organization set to <code>ALL</code>, you'll receive an error if you
         * attempt to disable GuardDuty in a member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromAdministratorAccountOutcome DisassociateFromAdministratorAccount(const Model::DisassociateFromAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFromAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateFromAdministratorAccountRequestT = Model::DisassociateFromAdministratorAccountRequest>
        Model::DisassociateFromAdministratorAccountOutcomeCallable DisassociateFromAdministratorAccountCallable(const DisassociateFromAdministratorAccountRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DisassociateFromAdministratorAccount, request);
        }

        /**
         * An Async wrapper for DisassociateFromAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFromAdministratorAccountRequestT = Model::DisassociateFromAdministratorAccountRequest>
        void DisassociateFromAdministratorAccountAsync(const DisassociateFromAdministratorAccountRequestT& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DisassociateFromAdministratorAccount, request, handler, context);
        }

        /**
         * <p>Disassociates GuardDuty member accounts (from the current administrator
         * account) specified by the account IDs.</p> <p>When you disassociate an invited
         * member from a GuardDuty delegated administrator, the member account details
         * obtained from the <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">CreateMembers</a>
         * API, including the associated email addresses, are retained. This is done so
         * that the delegated administrator can invoke the <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_InviteMembers.html">InviteMembers</a>
         * API without the need to invoke the CreateMembers API again. To remove the
         * details associated with a member account, the delegated administrator must
         * invoke the <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_DeleteMembers.html">DeleteMembers</a>
         * API. </p> <p>With <code>autoEnableOrganizationMembers</code> configuration for
         * your organization set to <code>ALL</code>, you'll receive an error if you
         * attempt to disassociate a member account before removing them from your
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMembersRequestT = Model::DisassociateMembersRequest>
        Model::DisassociateMembersOutcomeCallable DisassociateMembersCallable(const DisassociateMembersRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::DisassociateMembers, request);
        }

        /**
         * An Async wrapper for DisassociateMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMembersRequestT = Model::DisassociateMembersRequest>
        void DisassociateMembersAsync(const DisassociateMembersRequestT& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::DisassociateMembers, request, handler, context);
        }

        /**
         * <p>Designates an Amazon Web Services account within the organization as your
         * GuardDuty delegated administrator. Only the organization's management account
         * can run this API operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableOrganizationAdminAccountRequestT = Model::EnableOrganizationAdminAccountRequest>
        Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::EnableOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for EnableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableOrganizationAdminAccountRequestT = Model::EnableOrganizationAdminAccountRequest>
        void EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequestT& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::EnableOrganizationAdminAccount, request, handler, context);
        }

        /**
         * <p>Provides the details of the GuardDuty administrator account associated with
         * the current GuardDuty member account.</p>  <p>If the organization's
         * management account or a delegated administrator runs this API, it will return
         * success (<code>HTTP 200</code>) but no content.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdministratorAccountOutcome GetAdministratorAccount(const Model::GetAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAdministratorAccountRequestT = Model::GetAdministratorAccountRequest>
        Model::GetAdministratorAccountOutcomeCallable GetAdministratorAccountCallable(const GetAdministratorAccountRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetAdministratorAccount, request);
        }

        /**
         * An Async wrapper for GetAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAdministratorAccountRequestT = Model::GetAdministratorAccountRequest>
        void GetAdministratorAccountAsync(const GetAdministratorAccountRequestT& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetAdministratorAccount, request, handler, context);
        }

        /**
         * <p>Retrieves aggregated statistics for your account. If you are a GuardDuty
         * administrator, you can retrieve the statistics for all the resources associated
         * with the active member accounts in your organization who have enabled Runtime
         * Monitoring and have the GuardDuty security agent running on their
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetCoverageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoverageStatisticsOutcome GetCoverageStatistics(const Model::GetCoverageStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetCoverageStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCoverageStatisticsRequestT = Model::GetCoverageStatisticsRequest>
        Model::GetCoverageStatisticsOutcomeCallable GetCoverageStatisticsCallable(const GetCoverageStatisticsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetCoverageStatistics, request);
        }

        /**
         * An Async wrapper for GetCoverageStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCoverageStatisticsRequestT = Model::GetCoverageStatisticsRequest>
        void GetCoverageStatisticsAsync(const GetCoverageStatisticsRequestT& request, const GetCoverageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetCoverageStatistics, request, handler, context);
        }

        /**
         * <p>Retrieves an Amazon GuardDuty detector specified by the detectorId.</p>
         * <p>There might be regional differences because some data sources might not be
         * available in all the Amazon Web Services Regions where GuardDuty is presently
         * supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorOutcome GetDetector(const Model::GetDetectorRequest& request) const;

        /**
         * A Callable wrapper for GetDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDetectorRequestT = Model::GetDetectorRequest>
        Model::GetDetectorOutcomeCallable GetDetectorCallable(const GetDetectorRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetDetector, request);
        }

        /**
         * An Async wrapper for GetDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDetectorRequestT = Model::GetDetectorRequest>
        void GetDetectorAsync(const GetDetectorRequestT& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetDetector, request, handler, context);
        }

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
        template<typename GetFilterRequestT = Model::GetFilterRequest>
        Model::GetFilterOutcomeCallable GetFilterCallable(const GetFilterRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetFilter, request);
        }

        /**
         * An Async wrapper for GetFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFilterRequestT = Model::GetFilterRequest>
        void GetFilterAsync(const GetFilterRequestT& request, const GetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetFilter, request, handler, context);
        }

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
        template<typename GetFindingsRequestT = Model::GetFindingsRequest>
        Model::GetFindingsOutcomeCallable GetFindingsCallable(const GetFindingsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetFindings, request);
        }

        /**
         * An Async wrapper for GetFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingsRequestT = Model::GetFindingsRequest>
        void GetFindingsAsync(const GetFindingsRequestT& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetFindings, request, handler, context);
        }

        /**
         * <p>Lists Amazon GuardDuty findings statistics for the specified detector ID.</p>
         * <p>There might be regional differences because some flags might not be available
         * in all the Regions where GuardDuty is currently supported. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsStatisticsOutcome GetFindingsStatistics(const Model::GetFindingsStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetFindingsStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFindingsStatisticsRequestT = Model::GetFindingsStatisticsRequest>
        Model::GetFindingsStatisticsOutcomeCallable GetFindingsStatisticsCallable(const GetFindingsStatisticsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetFindingsStatistics, request);
        }

        /**
         * An Async wrapper for GetFindingsStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingsStatisticsRequestT = Model::GetFindingsStatisticsRequest>
        void GetFindingsStatisticsAsync(const GetFindingsStatisticsRequestT& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetFindingsStatistics, request, handler, context);
        }

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
        template<typename GetIPSetRequestT = Model::GetIPSetRequest>
        Model::GetIPSetOutcomeCallable GetIPSetCallable(const GetIPSetRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetIPSet, request);
        }

        /**
         * An Async wrapper for GetIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIPSetRequestT = Model::GetIPSetRequest>
        void GetIPSetAsync(const GetIPSetRequestT& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetIPSet, request, handler, context);
        }

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
        template<typename GetInvitationsCountRequestT = Model::GetInvitationsCountRequest>
        Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const GetInvitationsCountRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetInvitationsCount, request);
        }

        /**
         * An Async wrapper for GetInvitationsCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvitationsCountRequestT = Model::GetInvitationsCountRequest>
        void GetInvitationsCountAsync(const GetInvitationsCountRequestT& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetInvitationsCount, request, handler, context);
        }

        /**
         * <p>Returns the details of the malware scan settings.</p> <p>There might be
         * regional differences because some data sources might not be available in all the
         * Amazon Web Services Regions where GuardDuty is presently supported. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMalwareScanSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMalwareScanSettingsOutcome GetMalwareScanSettings(const Model::GetMalwareScanSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetMalwareScanSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMalwareScanSettingsRequestT = Model::GetMalwareScanSettingsRequest>
        Model::GetMalwareScanSettingsOutcomeCallable GetMalwareScanSettingsCallable(const GetMalwareScanSettingsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetMalwareScanSettings, request);
        }

        /**
         * An Async wrapper for GetMalwareScanSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMalwareScanSettingsRequestT = Model::GetMalwareScanSettingsRequest>
        void GetMalwareScanSettingsAsync(const GetMalwareScanSettingsRequestT& request, const GetMalwareScanSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetMalwareScanSettings, request, handler, context);
        }

        /**
         * <p>Describes which data sources are enabled for the member account's
         * detector.</p> <p>There might be regional differences because some data sources
         * might not be available in all the Amazon Web Services Regions where GuardDuty is
         * presently supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMemberDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberDetectorsOutcome GetMemberDetectors(const Model::GetMemberDetectorsRequest& request) const;

        /**
         * A Callable wrapper for GetMemberDetectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMemberDetectorsRequestT = Model::GetMemberDetectorsRequest>
        Model::GetMemberDetectorsOutcomeCallable GetMemberDetectorsCallable(const GetMemberDetectorsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetMemberDetectors, request);
        }

        /**
         * An Async wrapper for GetMemberDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMemberDetectorsRequestT = Model::GetMemberDetectorsRequest>
        void GetMemberDetectorsAsync(const GetMemberDetectorsRequestT& request, const GetMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetMemberDetectors, request, handler, context);
        }

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
        template<typename GetMembersRequestT = Model::GetMembersRequest>
        Model::GetMembersOutcomeCallable GetMembersCallable(const GetMembersRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetMembers, request);
        }

        /**
         * An Async wrapper for GetMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMembersRequestT = Model::GetMembersRequest>
        void GetMembersAsync(const GetMembersRequestT& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetMembers, request, handler, context);
        }

        /**
         * <p>Retrieves how many active member accounts have each feature enabled within
         * GuardDuty. Only a delegated GuardDuty administrator of an organization can run
         * this API.</p> <p>When you create a new organization, it might take up to 24
         * hours to generate the statistics for the entire organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetOrganizationStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationStatisticsOutcome GetOrganizationStatistics(const Model::GetOrganizationStatisticsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetOrganizationStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOrganizationStatisticsRequestT = Model::GetOrganizationStatisticsRequest>
        Model::GetOrganizationStatisticsOutcomeCallable GetOrganizationStatisticsCallable(const GetOrganizationStatisticsRequestT& request = {}) const
        {
            return SubmitCallable(&GuardDutyClient::GetOrganizationStatistics, request);
        }

        /**
         * An Async wrapper for GetOrganizationStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOrganizationStatisticsRequestT = Model::GetOrganizationStatisticsRequest>
        void GetOrganizationStatisticsAsync(const GetOrganizationStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetOrganizationStatisticsRequestT& request = {}) const
        {
            return SubmitAsync(&GuardDutyClient::GetOrganizationStatistics, request, handler, context);
        }

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
        template<typename GetRemainingFreeTrialDaysRequestT = Model::GetRemainingFreeTrialDaysRequest>
        Model::GetRemainingFreeTrialDaysOutcomeCallable GetRemainingFreeTrialDaysCallable(const GetRemainingFreeTrialDaysRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetRemainingFreeTrialDays, request);
        }

        /**
         * An Async wrapper for GetRemainingFreeTrialDays that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRemainingFreeTrialDaysRequestT = Model::GetRemainingFreeTrialDaysRequest>
        void GetRemainingFreeTrialDaysAsync(const GetRemainingFreeTrialDaysRequestT& request, const GetRemainingFreeTrialDaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetRemainingFreeTrialDays, request, handler, context);
        }

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
        template<typename GetThreatIntelSetRequestT = Model::GetThreatIntelSetRequest>
        Model::GetThreatIntelSetOutcomeCallable GetThreatIntelSetCallable(const GetThreatIntelSetRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetThreatIntelSet, request);
        }

        /**
         * An Async wrapper for GetThreatIntelSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetThreatIntelSetRequestT = Model::GetThreatIntelSetRequest>
        void GetThreatIntelSetAsync(const GetThreatIntelSetRequestT& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetThreatIntelSet, request, handler, context);
        }

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
        template<typename GetUsageStatisticsRequestT = Model::GetUsageStatisticsRequest>
        Model::GetUsageStatisticsOutcomeCallable GetUsageStatisticsCallable(const GetUsageStatisticsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::GetUsageStatistics, request);
        }

        /**
         * An Async wrapper for GetUsageStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsageStatisticsRequestT = Model::GetUsageStatisticsRequest>
        void GetUsageStatisticsAsync(const GetUsageStatisticsRequestT& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::GetUsageStatistics, request, handler, context);
        }

        /**
         * <p>Invites Amazon Web Services accounts to become members of an organization
         * administered by the Amazon Web Services account that invokes this API. If you
         * are using Amazon Web Services Organizations to manage your GuardDuty
         * environment, this step is not needed. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_organizations.html">Managing
         * accounts with organizations</a>.</p> <p>To invite Amazon Web Services accounts,
         * the first step is to ensure that GuardDuty has been enabled in the potential
         * member accounts. You can now invoke this API to add accounts by invitation. The
         * invited accounts can either accept or decline the invitation from their
         * GuardDuty accounts. Each invited Amazon Web Services account can choose to
         * accept the invitation from only one Amazon Web Services account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_invitations.html">Managing
         * GuardDuty accounts by invitation</a>.</p> <p>After the invite has been accepted
         * and you choose to disassociate a member account (by using <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_DisassociateMembers.html">DisassociateMembers</a>)
         * from your account, the details of the member account obtained by invoking <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">CreateMembers</a>,
         * including the associated email addresses, will be retained. This is done so that
         * you can invoke InviteMembers without the need to invoke <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_CreateMembers.html">CreateMembers</a>
         * again. To remove the details associated with a member account, you must also
         * invoke <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_DeleteMembers.html">DeleteMembers</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InviteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteMembersOutcome InviteMembers(const Model::InviteMembersRequest& request) const;

        /**
         * A Callable wrapper for InviteMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InviteMembersRequestT = Model::InviteMembersRequest>
        Model::InviteMembersOutcomeCallable InviteMembersCallable(const InviteMembersRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::InviteMembers, request);
        }

        /**
         * An Async wrapper for InviteMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InviteMembersRequestT = Model::InviteMembersRequest>
        void InviteMembersAsync(const InviteMembersRequestT& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::InviteMembers, request, handler, context);
        }

        /**
         * <p>Lists coverage details for your GuardDuty account. If you're a GuardDuty
         * administrator, you can retrieve all resources associated with the active member
         * accounts in your organization.</p> <p>Make sure the accounts have Runtime
         * Monitoring enabled and GuardDuty agent running on their resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListCoverage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoverageOutcome ListCoverage(const Model::ListCoverageRequest& request) const;

        /**
         * A Callable wrapper for ListCoverage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCoverageRequestT = Model::ListCoverageRequest>
        Model::ListCoverageOutcomeCallable ListCoverageCallable(const ListCoverageRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListCoverage, request);
        }

        /**
         * An Async wrapper for ListCoverage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCoverageRequestT = Model::ListCoverageRequest>
        void ListCoverageAsync(const ListCoverageRequestT& request, const ListCoverageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListCoverage, request, handler, context);
        }

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
        template<typename ListDetectorsRequestT = Model::ListDetectorsRequest>
        Model::ListDetectorsOutcomeCallable ListDetectorsCallable(const ListDetectorsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListDetectors, request);
        }

        /**
         * An Async wrapper for ListDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDetectorsRequestT = Model::ListDetectorsRequest>
        void ListDetectorsAsync(const ListDetectorsRequestT& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListDetectors, request, handler, context);
        }

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
        template<typename ListFiltersRequestT = Model::ListFiltersRequest>
        Model::ListFiltersOutcomeCallable ListFiltersCallable(const ListFiltersRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListFilters, request);
        }

        /**
         * An Async wrapper for ListFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFiltersRequestT = Model::ListFiltersRequest>
        void ListFiltersAsync(const ListFiltersRequestT& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListFilters, request, handler, context);
        }

        /**
         * <p>Lists GuardDuty findings for the specified detector ID.</p> <p>There might be
         * regional differences because some flags might not be available in all the
         * Regions where GuardDuty is currently supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        Model::ListFindingsOutcomeCallable ListFindingsCallable(const ListFindingsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListFindings, request);
        }

        /**
         * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        void ListFindingsAsync(const ListFindingsRequestT& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListFindings, request, handler, context);
        }

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
        template<typename ListIPSetsRequestT = Model::ListIPSetsRequest>
        Model::ListIPSetsOutcomeCallable ListIPSetsCallable(const ListIPSetsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListIPSets, request);
        }

        /**
         * An Async wrapper for ListIPSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIPSetsRequestT = Model::ListIPSetsRequest>
        void ListIPSetsAsync(const ListIPSetsRequestT& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListIPSets, request, handler, context);
        }

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
        template<typename ListInvitationsRequestT = Model::ListInvitationsRequest>
        Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const ListInvitationsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListInvitations, request);
        }

        /**
         * An Async wrapper for ListInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvitationsRequestT = Model::ListInvitationsRequest>
        void ListInvitationsAsync(const ListInvitationsRequestT& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListInvitations, request, handler, context);
        }

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
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        Model::ListMembersOutcomeCallable ListMembersCallable(const ListMembersRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListMembers, request);
        }

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        void ListMembersAsync(const ListMembersRequestT& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListMembers, request, handler, context);
        }

        /**
         * <p>Lists the accounts designated as GuardDuty delegated administrators. Only the
         * organization's management account can run this API operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationAdminAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationAdminAccountsRequestT = Model::ListOrganizationAdminAccountsRequest>
        Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListOrganizationAdminAccounts, request);
        }

        /**
         * An Async wrapper for ListOrganizationAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationAdminAccountsRequestT = Model::ListOrganizationAdminAccountsRequest>
        void ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequestT& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListOrganizationAdminAccounts, request, handler, context);
        }

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
        template<typename ListPublishingDestinationsRequestT = Model::ListPublishingDestinationsRequest>
        Model::ListPublishingDestinationsOutcomeCallable ListPublishingDestinationsCallable(const ListPublishingDestinationsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListPublishingDestinations, request);
        }

        /**
         * An Async wrapper for ListPublishingDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPublishingDestinationsRequestT = Model::ListPublishingDestinationsRequest>
        void ListPublishingDestinationsAsync(const ListPublishingDestinationsRequestT& request, const ListPublishingDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListPublishingDestinations, request, handler, context);
        }

        /**
         * <p>Lists tags for a resource. Tagging is currently supported for detectors,
         * finding filters, IP sets, threat intel sets, and publishing destination, with a
         * limit of 50 tags per resource. When invoked, this operation returns all assigned
         * tags for a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename ListThreatIntelSetsRequestT = Model::ListThreatIntelSetsRequest>
        Model::ListThreatIntelSetsOutcomeCallable ListThreatIntelSetsCallable(const ListThreatIntelSetsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::ListThreatIntelSets, request);
        }

        /**
         * An Async wrapper for ListThreatIntelSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThreatIntelSetsRequestT = Model::ListThreatIntelSetsRequest>
        void ListThreatIntelSetsAsync(const ListThreatIntelSetsRequestT& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::ListThreatIntelSets, request, handler, context);
        }

        /**
         * <p>Initiates the malware scan. Invoking this API will automatically create the
         * <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/slr-permissions-malware-protection.html">Service-linked
         * role</a> in the corresponding account.</p> <p>When the malware scan starts, you
         * can use the associated scan ID to track the status of the scan. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_DescribeMalwareScans.html">DescribeMalwareScans</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMalwareScan">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMalwareScanOutcome StartMalwareScan(const Model::StartMalwareScanRequest& request) const;

        /**
         * A Callable wrapper for StartMalwareScan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMalwareScanRequestT = Model::StartMalwareScanRequest>
        Model::StartMalwareScanOutcomeCallable StartMalwareScanCallable(const StartMalwareScanRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::StartMalwareScan, request);
        }

        /**
         * An Async wrapper for StartMalwareScan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMalwareScanRequestT = Model::StartMalwareScanRequest>
        void StartMalwareScanAsync(const StartMalwareScanRequestT& request, const StartMalwareScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::StartMalwareScan, request, handler, context);
        }

        /**
         * <p>Turns on GuardDuty monitoring of the specified member accounts. Use this
         * operation to restart monitoring of accounts that you stopped monitoring with the
         * <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_StopMonitoringMembers.html">StopMonitoringMembers</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitoringMembersOutcome StartMonitoringMembers(const Model::StartMonitoringMembersRequest& request) const;

        /**
         * A Callable wrapper for StartMonitoringMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMonitoringMembersRequestT = Model::StartMonitoringMembersRequest>
        Model::StartMonitoringMembersOutcomeCallable StartMonitoringMembersCallable(const StartMonitoringMembersRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::StartMonitoringMembers, request);
        }

        /**
         * An Async wrapper for StartMonitoringMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMonitoringMembersRequestT = Model::StartMonitoringMembersRequest>
        void StartMonitoringMembersAsync(const StartMonitoringMembersRequestT& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::StartMonitoringMembers, request, handler, context);
        }

        /**
         * <p>Stops GuardDuty monitoring for the specified member accounts. Use the
         * <code>StartMonitoringMembers</code> operation to restart monitoring for those
         * accounts.</p> <p>With <code>autoEnableOrganizationMembers</code> configuration
         * for your organization set to <code>ALL</code>, you'll receive an error if you
         * attempt to stop monitoring the member accounts in your
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMonitoringMembersOutcome StopMonitoringMembers(const Model::StopMonitoringMembersRequest& request) const;

        /**
         * A Callable wrapper for StopMonitoringMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopMonitoringMembersRequestT = Model::StopMonitoringMembersRequest>
        Model::StopMonitoringMembersOutcomeCallable StopMonitoringMembersCallable(const StopMonitoringMembersRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::StopMonitoringMembers, request);
        }

        /**
         * An Async wrapper for StopMonitoringMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopMonitoringMembersRequestT = Model::StopMonitoringMembersRequest>
        void StopMonitoringMembersAsync(const StopMonitoringMembersRequestT& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::StopMonitoringMembers, request, handler, context);
        }

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::TagResource, request, handler, context);
        }

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
        template<typename UnarchiveFindingsRequestT = Model::UnarchiveFindingsRequest>
        Model::UnarchiveFindingsOutcomeCallable UnarchiveFindingsCallable(const UnarchiveFindingsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UnarchiveFindings, request);
        }

        /**
         * An Async wrapper for UnarchiveFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnarchiveFindingsRequestT = Model::UnarchiveFindingsRequest>
        void UnarchiveFindingsAsync(const UnarchiveFindingsRequestT& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UnarchiveFindings, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the GuardDuty detector specified by the detector ID.</p>
         * <p>Specifying both EKS Runtime Monitoring (<code>EKS_RUNTIME_MONITORING</code>)
         * and Runtime Monitoring (<code>RUNTIME_MONITORING</code>) will cause an error.
         * You can add only one of these two features because Runtime Monitoring already
         * includes the threat detection for Amazon EKS resources. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/runtime-monitoring.html">Runtime
         * Monitoring</a>.</p> <p>There might be regional differences because some data
         * sources might not be available in all the Amazon Web Services Regions where
         * GuardDuty is presently supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorOutcome UpdateDetector(const Model::UpdateDetectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDetectorRequestT = Model::UpdateDetectorRequest>
        Model::UpdateDetectorOutcomeCallable UpdateDetectorCallable(const UpdateDetectorRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UpdateDetector, request);
        }

        /**
         * An Async wrapper for UpdateDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDetectorRequestT = Model::UpdateDetectorRequest>
        void UpdateDetectorAsync(const UpdateDetectorRequestT& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UpdateDetector, request, handler, context);
        }

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
        template<typename UpdateFilterRequestT = Model::UpdateFilterRequest>
        Model::UpdateFilterOutcomeCallable UpdateFilterCallable(const UpdateFilterRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UpdateFilter, request);
        }

        /**
         * An Async wrapper for UpdateFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFilterRequestT = Model::UpdateFilterRequest>
        void UpdateFilterAsync(const UpdateFilterRequestT& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UpdateFilter, request, handler, context);
        }

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
        template<typename UpdateFindingsFeedbackRequestT = Model::UpdateFindingsFeedbackRequest>
        Model::UpdateFindingsFeedbackOutcomeCallable UpdateFindingsFeedbackCallable(const UpdateFindingsFeedbackRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UpdateFindingsFeedback, request);
        }

        /**
         * An Async wrapper for UpdateFindingsFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFindingsFeedbackRequestT = Model::UpdateFindingsFeedbackRequest>
        void UpdateFindingsFeedbackAsync(const UpdateFindingsFeedbackRequestT& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UpdateFindingsFeedback, request, handler, context);
        }

        /**
         * <p>Updates the IPSet specified by the IPSet ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIPSetRequestT = Model::UpdateIPSetRequest>
        Model::UpdateIPSetOutcomeCallable UpdateIPSetCallable(const UpdateIPSetRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UpdateIPSet, request);
        }

        /**
         * An Async wrapper for UpdateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIPSetRequestT = Model::UpdateIPSetRequest>
        void UpdateIPSetAsync(const UpdateIPSetRequestT& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UpdateIPSet, request, handler, context);
        }

        /**
         * <p>Updates the malware scan settings.</p> <p>There might be regional differences
         * because some data sources might not be available in all the Amazon Web Services
         * Regions where GuardDuty is presently supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateMalwareScanSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMalwareScanSettingsOutcome UpdateMalwareScanSettings(const Model::UpdateMalwareScanSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateMalwareScanSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMalwareScanSettingsRequestT = Model::UpdateMalwareScanSettingsRequest>
        Model::UpdateMalwareScanSettingsOutcomeCallable UpdateMalwareScanSettingsCallable(const UpdateMalwareScanSettingsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UpdateMalwareScanSettings, request);
        }

        /**
         * An Async wrapper for UpdateMalwareScanSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMalwareScanSettingsRequestT = Model::UpdateMalwareScanSettingsRequest>
        void UpdateMalwareScanSettingsAsync(const UpdateMalwareScanSettingsRequestT& request, const UpdateMalwareScanSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UpdateMalwareScanSettings, request, handler, context);
        }

        /**
         * <p>Contains information on member accounts to be updated.</p> <p>Specifying both
         * EKS Runtime Monitoring (<code>EKS_RUNTIME_MONITORING</code>) and Runtime
         * Monitoring (<code>RUNTIME_MONITORING</code>) will cause an error. You can add
         * only one of these two features because Runtime Monitoring already includes the
         * threat detection for Amazon EKS resources. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/runtime-monitoring.html">Runtime
         * Monitoring</a>.</p> <p>There might be regional differences because some data
         * sources might not be available in all the Amazon Web Services Regions where
         * GuardDuty is presently supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateMemberDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberDetectorsOutcome UpdateMemberDetectors(const Model::UpdateMemberDetectorsRequest& request) const;

        /**
         * A Callable wrapper for UpdateMemberDetectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMemberDetectorsRequestT = Model::UpdateMemberDetectorsRequest>
        Model::UpdateMemberDetectorsOutcomeCallable UpdateMemberDetectorsCallable(const UpdateMemberDetectorsRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UpdateMemberDetectors, request);
        }

        /**
         * An Async wrapper for UpdateMemberDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMemberDetectorsRequestT = Model::UpdateMemberDetectorsRequest>
        void UpdateMemberDetectorsAsync(const UpdateMemberDetectorsRequestT& request, const UpdateMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UpdateMemberDetectors, request, handler, context);
        }

        /**
         * <p>Configures the delegated administrator account with the provided values. You
         * must provide a value for either <code>autoEnableOrganizationMembers</code> or
         * <code>autoEnable</code>, but not both. </p> <p>Specifying both EKS Runtime
         * Monitoring (<code>EKS_RUNTIME_MONITORING</code>) and Runtime Monitoring
         * (<code>RUNTIME_MONITORING</code>) will cause an error. You can add only one of
         * these two features because Runtime Monitoring already includes the threat
         * detection for Amazon EKS resources. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/runtime-monitoring.html">Runtime
         * Monitoring</a>.</p> <p>There might be regional differences because some data
         * sources might not be available in all the Amazon Web Services Regions where
         * GuardDuty is presently supported. For more information, see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_regions.html">Regions
         * and endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UpdateOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        void UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequestT& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UpdateOrganizationConfiguration, request, handler, context);
        }

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
        template<typename UpdatePublishingDestinationRequestT = Model::UpdatePublishingDestinationRequest>
        Model::UpdatePublishingDestinationOutcomeCallable UpdatePublishingDestinationCallable(const UpdatePublishingDestinationRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UpdatePublishingDestination, request);
        }

        /**
         * An Async wrapper for UpdatePublishingDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePublishingDestinationRequestT = Model::UpdatePublishingDestinationRequest>
        void UpdatePublishingDestinationAsync(const UpdatePublishingDestinationRequestT& request, const UpdatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UpdatePublishingDestination, request, handler, context);
        }

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
        template<typename UpdateThreatIntelSetRequestT = Model::UpdateThreatIntelSetRequest>
        Model::UpdateThreatIntelSetOutcomeCallable UpdateThreatIntelSetCallable(const UpdateThreatIntelSetRequestT& request) const
        {
            return SubmitCallable(&GuardDutyClient::UpdateThreatIntelSet, request);
        }

        /**
         * An Async wrapper for UpdateThreatIntelSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThreatIntelSetRequestT = Model::UpdateThreatIntelSetRequest>
        void UpdateThreatIntelSetAsync(const UpdateThreatIntelSetRequestT& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GuardDutyClient::UpdateThreatIntelSet, request, handler, context);
        }


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
