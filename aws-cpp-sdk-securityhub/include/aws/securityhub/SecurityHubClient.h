/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/SecurityHubServiceClientModel.h>
#include <aws/securityhub/SecurityHubLegacyAsyncMacros.h>

namespace Aws
{
namespace SecurityHub
{
  /**
   * <p>Security Hub provides you with a comprehensive view of the security state of
   * your Amazon Web Services environment and resources. It also provides you with
   * the readiness status of your environment based on controls from supported
   * security standards. Security Hub collects security data from Amazon Web Services
   * accounts, services, and integrated third-party products and helps you analyze
   * security trends in your environment to identify the highest priority security
   * issues. For more information about Security Hub, see the <a
   * href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">
   * <i>Security HubUser Guide</i> </a>.</p> <p>When you use operations in the
   * Security Hub API, the requests are executed only in the Amazon Web Services
   * Region that is currently active or in the specific Amazon Web Services Region
   * that you specify in your request. Any configuration or settings change that
   * results from the operation is applied only to that Region. To make the same
   * change in other Regions, execute the same command for each Region to apply the
   * change to.</p> <p>For example, if your Region is set to <code>us-west-2</code>,
   * when you use <code>CreateMembers</code> to add a member account to Security Hub,
   * the association of the member account with the administrator account is created
   * only in the <code>us-west-2</code> Region. Security Hub must be enabled for the
   * member account in the same Region that the invitation was sent from.</p> <p>The
   * following throttling limits apply to using Security Hub API operations.</p> <ul>
   * <li> <p> <code>BatchEnableStandards</code> - <code>RateLimit</code> of 1 request
   * per second, <code>BurstLimit</code> of 1 request per second.</p> </li> <li> <p>
   * <code>GetFindings</code> - <code>RateLimit</code> of 3 requests per second.
   * <code>BurstLimit</code> of 6 requests per second.</p> </li> <li> <p>
   * <code>BatchImportFindings</code> - <code>RateLimit</code> of 10 requests per
   * second. <code>BurstLimit</code> of 30 requests per second.</p> </li> <li> <p>
   * <code>BatchUpdateFindings</code> - <code>RateLimit</code> of 10 requests per
   * second. <code>BurstLimit</code> of 30 requests per second.</p> </li> <li> <p>
   * <code>UpdateStandardsControl</code> - <code>RateLimit</code> of 1 request per
   * second, <code>BurstLimit</code> of 5 requests per second.</p> </li> <li> <p>All
   * other operations - <code>RateLimit</code> of 10 requests per second.
   * <code>BurstLimit</code> of 30 requests per second.</p> </li> </ul>
   */
  class AWS_SECURITYHUB_API SecurityHubClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::SecurityHub::SecurityHubClientConfiguration& clientConfiguration = Aws::SecurityHub::SecurityHubClientConfiguration(),
                          std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider = Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider = Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG),
                          const Aws::SecurityHub::SecurityHubClientConfiguration& clientConfiguration = Aws::SecurityHub::SecurityHubClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider = Aws::MakeShared<SecurityHubEndpointProvider>(ALLOCATION_TAG),
                          const Aws::SecurityHub::SecurityHubClientConfiguration& clientConfiguration = Aws::SecurityHub::SecurityHubClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SecurityHubClient();


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
         * <p>Accepts the invitation to be a member account and be monitored by the
         * Security Hub administrator account that the invitation was sent from.</p>
         * <p>This operation is only used by member accounts that are not added through
         * Organizations.</p> <p>When the member account accepts the invitation, permission
         * is granted to the administrator account to view findings generated in the member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptAdministratorInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptAdministratorInvitationOutcome AcceptAdministratorInvitation(const Model::AcceptAdministratorInvitationRequest& request) const;


        /**
         * <p>Disables the standards specified by the provided
         * <code>StandardsSubscriptionArns</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisableStandardsOutcome BatchDisableStandards(const Model::BatchDisableStandardsRequest& request) const;


        /**
         * <p>Enables the standards specified by the provided <code>StandardsArn</code>. To
         * obtain the ARN for a standard, use the <code>DescribeStandards</code>
         * operation.</p> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEnableStandardsOutcome BatchEnableStandards(const Model::BatchEnableStandardsRequest& request) const;


        /**
         * <p>Imports security findings generated by a finding provider into Security Hub.
         * This action is requested by the finding provider to import its findings into
         * Security Hub.</p> <p> <code>BatchImportFindings</code> must be called by one of
         * the following:</p> <ul> <li> <p>The Amazon Web Services account that is
         * associated with a finding if you are using the <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-custom-providers.html#securityhub-custom-providers-bfi-reqs">default
         * product ARN</a> or are a partner sending findings from within a customer's
         * Amazon Web Services account. In these cases, the identifier of the account that
         * you are calling <code>BatchImportFindings</code> from needs to be the same as
         * the <code>AwsAccountId</code> attribute for the finding.</p> </li> <li> <p>An
         * Amazon Web Services account that Security Hub has allow-listed for an official
         * partner integration. In this case, you can call <code>BatchImportFindings</code>
         * from the allow-listed account and send findings from different customer accounts
         * in the same batch.</p> </li> </ul> <p>The maximum allowed size for a finding is
         * 240 Kb. An error is returned for any finding larger than 240 Kb.</p> <p>After a
         * finding is created, <code>BatchImportFindings</code> cannot be used to update
         * the following finding fields and objects, which Security Hub customers use to
         * manage their investigation workflow.</p> <ul> <li> <p> <code>Note</code> </p>
         * </li> <li> <p> <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul> <p>Finding providers also should not use
         * <code>BatchImportFindings</code> to update the following attributes.</p> <ul>
         * <li> <p> <code>Confidence</code> </p> </li> <li> <p> <code>Criticality</code>
         * </p> </li> <li> <p> <code>RelatedFindings</code> </p> </li> <li> <p>
         * <code>Severity</code> </p> </li> <li> <p> <code>Types</code> </p> </li> </ul>
         * <p>Instead, finding providers use <code>FindingProviderFields</code> to provide
         * values for these attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchImportFindingsOutcome BatchImportFindings(const Model::BatchImportFindingsRequest& request) const;


        /**
         * <p>Used by Security Hub customers to update information about their
         * investigation into a finding. Requested by administrator accounts or member
         * accounts. Administrator accounts can update findings for their account and their
         * member accounts. Member accounts can update findings for their account.</p>
         * <p>Updates from <code>BatchUpdateFindings</code> do not affect the value of
         * <code>UpdatedAt</code> for a finding.</p> <p>Administrator and member accounts
         * can use <code>BatchUpdateFindings</code> to update the following finding fields
         * and objects.</p> <ul> <li> <p> <code>Confidence</code> </p> </li> <li> <p>
         * <code>Criticality</code> </p> </li> <li> <p> <code>Note</code> </p> </li> <li>
         * <p> <code>RelatedFindings</code> </p> </li> <li> <p> <code>Severity</code> </p>
         * </li> <li> <p> <code>Types</code> </p> </li> <li> <p>
         * <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul> <p>You can configure IAM policies to restrict access to fields and
         * field values. For example, you might not want member accounts to be able to
         * suppress findings or change the finding severity. See <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/finding-update-batchupdatefindings.html#batchupdatefindings-configure-access">Configuring
         * access to BatchUpdateFindings</a> in the <i>Security Hub User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateFindingsOutcome BatchUpdateFindings(const Model::BatchUpdateFindingsRequest& request) const;


        /**
         * <p>Creates a custom action target in Security Hub.</p> <p>You can use custom
         * actions on findings and insights in Security Hub to trigger target actions in
         * Amazon CloudWatch Events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActionTargetOutcome CreateActionTarget(const Model::CreateActionTargetRequest& request) const;


        /**
         * <p>Used to enable finding aggregation. Must be called from the aggregation
         * Region.</p> <p>For more details about cross-Region replication, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/finding-aggregation.html">Configuring
         * finding aggregation</a> in the <i>Security Hub User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateFindingAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFindingAggregatorOutcome CreateFindingAggregator(const Model::CreateFindingAggregatorRequest& request) const;


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
         * <p>Creates a member association in Security Hub between the specified accounts
         * and the account used to make the request, which is the administrator account. If
         * you are integrated with Organizations, then the administrator account is
         * designated by the organization management account.</p> <p>
         * <code>CreateMembers</code> is always used to add accounts that are not
         * organization members.</p> <p>For accounts that are managed using Organizations,
         * <code>CreateMembers</code> is only used in the following cases:</p> <ul> <li>
         * <p>Security Hub is not configured to automatically add new organization
         * accounts.</p> </li> <li> <p>The account was disassociated or deleted in Security
         * Hub.</p> </li> </ul> <p>This action can only be used by an account that has
         * Security Hub enabled. To enable Security Hub, you can use the
         * <code>EnableSecurityHub</code> operation.</p> <p>For accounts that are not
         * organization members, you create the account association and then send an
         * invitation to the member account. To send the invitation, you use the
         * <code>InviteMembers</code> operation. If the account owner accepts the
         * invitation, the account becomes a member account in Security Hub.</p>
         * <p>Accounts that are managed using Organizations do not receive an invitation.
         * They automatically become a member account in Security Hub.</p> <ul> <li> <p>If
         * the organization account does not have Security Hub enabled, then Security Hub
         * and the default standards are automatically enabled. Note that Security Hub
         * cannot be enabled automatically for the organization management account. The
         * organization management account must enable Security Hub before the
         * administrator account enables it as a member account.</p> </li> <li> <p>For
         * organization accounts that already have Security Hub enabled, Security Hub does
         * not make any other changes to those accounts. It does not change their enabled
         * standards or controls.</p> </li> </ul> <p>A permissions policy is added that
         * permits the administrator account to view the findings generated in the member
         * account.</p> <p>To remove the association between the administrator and member
         * accounts, use the <code>DisassociateFromMasterAccount</code> or
         * <code>DisassociateMembers</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;


        /**
         * <p>Declines invitations to become a member account.</p> <p>This operation is
         * only used by accounts that are not part of an organization. Organization
         * accounts do not receive invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;


        /**
         * <p>Deletes a custom action target from Security Hub.</p> <p>Deleting a custom
         * action target does not affect any findings or insights that were already sent to
         * Amazon CloudWatch Events using the custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActionTargetOutcome DeleteActionTarget(const Model::DeleteActionTargetRequest& request) const;


        /**
         * <p>Deletes a finding aggregator. When you delete the finding aggregator, you
         * stop finding aggregation.</p> <p>When you stop finding aggregation, findings
         * that were already aggregated to the aggregation Region are still visible from
         * the aggregation Region. New findings and finding updates are not aggregated.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteFindingAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFindingAggregatorOutcome DeleteFindingAggregator(const Model::DeleteFindingAggregatorRequest& request) const;


        /**
         * <p>Deletes the insight specified by the <code>InsightArn</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightOutcome DeleteInsight(const Model::DeleteInsightRequest& request) const;


        /**
         * <p>Deletes invitations received by the Amazon Web Services account to become a
         * member account.</p> <p>This operation is only used by accounts that are not part
         * of an organization. Organization accounts do not receive
         * invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;


        /**
         * <p>Deletes the specified member accounts from Security Hub.</p> <p>Can be used
         * to delete member accounts that belong to an organization as well as member
         * accounts that were invited manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;


        /**
         * <p>Returns a list of the custom action targets in Security Hub in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeActionTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActionTargetsOutcome DescribeActionTargets(const Model::DescribeActionTargetsRequest& request) const;


        /**
         * <p>Returns details about the Hub resource in your account, including the
         * <code>HubArn</code> and the time when you enabled Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHubOutcome DescribeHub(const Model::DescribeHubRequest& request) const;


        /**
         * <p>Returns information about the Organizations configuration for Security Hub.
         * Can only be called from a Security Hub administrator account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;


        /**
         * <p>Returns information about product integrations in Security Hub.</p> <p>You
         * can optionally provide an integration ARN. If you provide an integration ARN,
         * then the results only include that integration.</p> <p>If you do not provide an
         * integration ARN, then the results include all of the available product
         * integrations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest& request) const;


        /**
         * <p>Returns a list of the available standards in Security Hub.</p> <p>For each
         * standard, the results include the standard ARN, the name, and a description.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStandardsOutcome DescribeStandards(const Model::DescribeStandardsRequest& request) const;


        /**
         * <p>Returns a list of security standards controls.</p> <p>For each control, the
         * results include information about whether it is currently enabled, the severity,
         * and a link to remediation information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandardsControls">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStandardsControlsOutcome DescribeStandardsControls(const Model::DescribeStandardsControlsRequest& request) const;


        /**
         * <p>Disables the integration of the specified product with Security Hub. After
         * the integration is disabled, findings from that product are no longer sent to
         * Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableImportFindingsForProductOutcome DisableImportFindingsForProduct(const Model::DisableImportFindingsForProductRequest& request) const;


        /**
         * <p>Disables a Security Hub administrator account. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;


        /**
         * <p>Disables Security Hub in your account only in the current Region. To disable
         * Security Hub in all Regions, you must submit one request per Region where you
         * have enabled Security Hub.</p> <p>When you disable Security Hub for an
         * administrator account, it doesn't disable Security Hub for any associated member
         * accounts.</p> <p>When you disable Security Hub, your existing findings and
         * insights and any Security Hub configuration settings are deleted after 90 days
         * and cannot be recovered. Any standards that were enabled are disabled, and your
         * administrator and member account associations are removed.</p> <p>If you want to
         * save your existing findings, you must export them before you disable Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableSecurityHubOutcome DisableSecurityHub(const Model::DisableSecurityHubRequest& request) const;


        /**
         * <p>Disassociates the current Security Hub member account from the associated
         * administrator account.</p> <p>This operation is only used by accounts that are
         * not part of an organization. For organization accounts, only the administrator
         * account can disassociate a member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromAdministratorAccountOutcome DisassociateFromAdministratorAccount(const Model::DisassociateFromAdministratorAccountRequest& request) const;


        /**
         * <p>Disassociates the specified member accounts from the associated administrator
         * account.</p> <p>Can be used to disassociate both accounts that are managed using
         * Organizations and accounts that were invited manually.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;


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
         * <p>Designates the Security Hub administrator account for an organization. Can
         * only be called by the organization management account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;


        /**
         * <p>Enables Security Hub for your account in the current Region or the Region you
         * specify in the request.</p> <p>When you enable Security Hub, you grant to
         * Security Hub the permissions necessary to gather findings from other services
         * that are integrated with Security Hub.</p> <p>When you use the
         * <code>EnableSecurityHub</code> operation to enable Security Hub, you also
         * automatically enable the following standards.</p> <ul> <li> <p>CIS Amazon Web
         * Services Foundations</p> </li> <li> <p>Amazon Web Services Foundational Security
         * Best Practices</p> </li> </ul> <p>You do not enable the Payment Card Industry
         * Data Security Standard (PCI DSS) standard. </p> <p>To not enable the
         * automatically enabled standards, set <code>EnableDefaultStandards</code> to
         * <code>false</code>.</p> <p>After you enable Security Hub, to enable a standard,
         * use the <code>BatchEnableStandards</code> operation. To disable a standard, use
         * the <code>BatchDisableStandards</code> operation.</p> <p>To learn more, see the
         * <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">setup
         * information</a> in the <i>Security Hub User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSecurityHubOutcome EnableSecurityHub(const Model::EnableSecurityHubRequest& request) const;


        /**
         * <p>Provides the details for the Security Hub administrator account for the
         * current member account.</p> <p>Can be used by both member accounts that are
         * managed using Organizations and accounts that were invited
         * manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdministratorAccountOutcome GetAdministratorAccount(const Model::GetAdministratorAccountRequest& request) const;


        /**
         * <p>Returns a list of the standards that are currently enabled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnabledStandardsOutcome GetEnabledStandards(const Model::GetEnabledStandardsRequest& request) const;


        /**
         * <p>Returns the current finding aggregation configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindingAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingAggregatorOutcome GetFindingAggregator(const Model::GetFindingAggregatorRequest& request) const;


        /**
         * <p>Returns a list of findings that match the specified criteria.</p> <p>If
         * finding aggregation is enabled, then when you call <code>GetFindings</code> from
         * the aggregation Region, the results include all of the matching findings from
         * both the aggregation Region and the linked Regions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;


        /**
         * <p>Lists the results of the Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightResultsOutcome GetInsightResults(const Model::GetInsightResultsRequest& request) const;


        /**
         * <p>Lists and describes insights for the specified insight ARNs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightsOutcome GetInsights(const Model::GetInsightsRequest& request) const;


        /**
         * <p>Returns the count of all Security Hub membership invitations that were sent
         * to the current member account, not including the currently accepted invitation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;


        /**
         * <p>Returns the details for the Security Hub member accounts for the specified
         * account IDs.</p> <p>An administrator account can be either the delegated
         * Security Hub administrator account for an organization or an administrator
         * account that enabled Security Hub manually.</p> <p>The results include both
         * member accounts that are managed using Organizations and accounts that were
         * invited manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;


        /**
         * <p>Invites other Amazon Web Services accounts to become member accounts for the
         * Security Hub administrator account that the invitation is sent from.</p> <p>This
         * operation is only used to invite accounts that do not belong to an organization.
         * Organization accounts do not receive invitations.</p> <p>Before you can use this
         * action to invite a member, you must first use the <code>CreateMembers</code>
         * action to create the member account in Security Hub.</p> <p>When the account
         * owner enables Security Hub and accepts the invitation to become a member
         * account, the administrator account can view the findings generated from the
         * member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteMembersOutcome InviteMembers(const Model::InviteMembersRequest& request) const;


        /**
         * <p>Lists all findings-generating solutions (products) that you are subscribed to
         * receive findings from in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnabledProductsForImportOutcome ListEnabledProductsForImport(const Model::ListEnabledProductsForImportRequest& request) const;


        /**
         * <p>If finding aggregation is enabled, then <code>ListFindingAggregators</code>
         * returns the ARN of the finding aggregator. You can run this operation from any
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListFindingAggregators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingAggregatorsOutcome ListFindingAggregators(const Model::ListFindingAggregatorsRequest& request) const;


        /**
         * <p>Lists all Security Hub membership invitations that were sent to the current
         * Amazon Web Services account.</p> <p>This operation is only used by accounts that
         * are managed by invitation. Accounts that are managed using the integration with
         * Organizations do not receive invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;


        /**
         * <p>Lists details about all member accounts for the current Security Hub
         * administrator account.</p> <p>The results include both member accounts that
         * belong to an organization and member accounts that were invited
         * manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;


        /**
         * <p>Lists the Security Hub administrator accounts. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;


        /**
         * <p>Returns a list of tags associated with a resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Adds one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the name and description of a custom action target in Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateActionTargetOutcome UpdateActionTarget(const Model::UpdateActionTargetRequest& request) const;


        /**
         * <p>Updates the finding aggregation configuration. Used to update the Region
         * linking mode and the list of included or excluded Regions. You cannot use
         * <code>UpdateFindingAggregator</code> to change the aggregation Region.</p>
         * <p>You must run <code>UpdateFindingAggregator</code> from the current
         * aggregation Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindingAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingAggregatorOutcome UpdateFindingAggregator(const Model::UpdateFindingAggregatorRequest& request) const;


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
         * <p>Updates the Security Hub insight identified by the specified insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInsightOutcome UpdateInsight(const Model::UpdateInsightRequest& request) const;


        /**
         * <p>Used to update the configuration related to Organizations. Can only be called
         * from a Security Hub administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;


        /**
         * <p>Updates configuration options for Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateSecurityHubConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityHubConfigurationOutcome UpdateSecurityHubConfiguration(const Model::UpdateSecurityHubConfigurationRequest& request) const;


        /**
         * <p>Used to control whether an individual security standard control is enabled or
         * disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateStandardsControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStandardsControlOutcome UpdateStandardsControl(const Model::UpdateStandardsControlRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SecurityHubEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SecurityHubClientConfiguration& clientConfiguration);

      SecurityHubClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SecurityHubEndpointProviderBase> m_endpointProvider;
  };

} // namespace SecurityHub
} // namespace Aws
