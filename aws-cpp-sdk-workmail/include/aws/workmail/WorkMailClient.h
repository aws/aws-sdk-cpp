/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workmail/WorkMailServiceClientModel.h>
#include <aws/workmail/WorkMailLegacyAsyncMacros.h>

namespace Aws
{
namespace WorkMail
{
  /**
   * <p>WorkMail is a secure, managed business email and calendaring service with
   * support for existing desktop and mobile email clients. You can access your
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::WorkMail::WorkMailClientConfiguration& clientConfiguration = Aws::WorkMail::WorkMailClientConfiguration(),
                       std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG),
                       const Aws::WorkMail::WorkMailClientConfiguration& clientConfiguration = Aws::WorkMail::WorkMailClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkMailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG),
                       const Aws::WorkMail::WorkMailClientConfiguration& clientConfiguration = Aws::WorkMail::WorkMailClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkMailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkMailClient();


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
         * <p>Adds a member (user or group) to the resource's set of
         * delegates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateDelegateToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDelegateToResourceOutcome AssociateDelegateToResource(const Model::AssociateDelegateToResourceRequest& request) const;


        /**
         * <p>Adds a member (user or group) to the group's set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateMemberToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberToGroupOutcome AssociateMemberToGroup(const Model::AssociateMemberToGroupRequest& request) const;


        /**
         * <p>Assumes an impersonation role for the given WorkMail organization. This
         * method returns an authentication token you can use to make impersonated
         * calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssumeImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::AssumeImpersonationRoleOutcome AssumeImpersonationRole(const Model::AssumeImpersonationRoleRequest& request) const;


        /**
         * <p>Cancels a mailbox export job.</p>  <p>If the mailbox export job is near
         * completion, it might not be possible to cancel it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CancelMailboxExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMailboxExportJobOutcome CancelMailboxExportJob(const Model::CancelMailboxExportJobRequest& request) const;


        /**
         * <p>Adds an alias to the set of a given member (user or group) of
         * WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;


        /**
         * <p>Creates an <code>AvailabilityConfiguration</code> for the given WorkMail
         * organization and domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateAvailabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAvailabilityConfigurationOutcome CreateAvailabilityConfiguration(const Model::CreateAvailabilityConfigurationRequest& request) const;


        /**
         * <p>Creates a group that can be used in WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;


        /**
         * <p>Creates an impersonation role for the given WorkMail organization.</p> <p>
         * <i>Idempotency</i> ensures that an API request completes no more than one time.
         * With an idempotent request, if the original request completes successfully, any
         * subsequent retries also complete successfully without performing any further
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImpersonationRoleOutcome CreateImpersonationRole(const Model::CreateImpersonationRoleRequest& request) const;


        /**
         * <p>Creates a new mobile device access rule for the specified WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateMobileDeviceAccessRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMobileDeviceAccessRuleOutcome CreateMobileDeviceAccessRule(const Model::CreateMobileDeviceAccessRuleRequest& request) const;


        /**
         * <p>Creates a new WorkMail organization. Optionally, you can choose to associate
         * an existing AWS Directory Service directory with your organization. If an AWS
         * Directory Service directory ID is specified, the organization alias must match
         * the directory alias. If you choose not to associate an existing directory with
         * your organization, then we create a new WorkMail directory for you. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/add_new_organization.html">Adding
         * an organization</a> in the <i>WorkMail Administrator Guide</i>.</p> <p>You can
         * associate multiple email domains with an organization, then choose your default
         * email domain from the WorkMail console. You can also associate a domain that is
         * managed in an Amazon Route 53 public hosted zone. For more information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/add_domain.html">Adding
         * a domain</a> and <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/default_domain.html">Choosing
         * the default domain</a> in the <i>WorkMail Administrator Guide</i>.</p>
         * <p>Optionally, you can use a customer managed key from AWS Key Management
         * Service (AWS KMS) to encrypt email for your organization. If you don't associate
         * an AWS KMS key, WorkMail creates a default, AWS managed key for
         * you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest& request) const;


        /**
         * <p>Creates a new WorkMail resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;


        /**
         * <p>Creates a user who can be used in WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;


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
         * <p>Remove one or more specified aliases from a set of aliases for a given
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;


        /**
         * <p>Deletes the <code>AvailabilityConfiguration</code> for the given WorkMail
         * organization and domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAvailabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAvailabilityConfigurationOutcome DeleteAvailabilityConfiguration(const Model::DeleteAvailabilityConfigurationRequest& request) const;


        /**
         * <p>Deletes the email monitoring configuration for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteEmailMonitoringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailMonitoringConfigurationOutcome DeleteEmailMonitoringConfiguration(const Model::DeleteEmailMonitoringConfigurationRequest& request) const;


        /**
         * <p>Deletes a group from WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;


        /**
         * <p>Deletes an impersonation role for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImpersonationRoleOutcome DeleteImpersonationRole(const Model::DeleteImpersonationRoleRequest& request) const;


        /**
         * <p>Deletes permissions granted to a member (user or group).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMailboxPermissionsOutcome DeleteMailboxPermissions(const Model::DeleteMailboxPermissionsRequest& request) const;


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
         * <p>Deletes a mobile device access rule for the specified WorkMail
         * organization.</p>  <p>Deleting already deleted and non-existing rules does
         * not produce an error. In those cases, the service sends back an HTTP 200
         * response with an empty HTTP body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMobileDeviceAccessRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMobileDeviceAccessRuleOutcome DeleteMobileDeviceAccessRule(const Model::DeleteMobileDeviceAccessRuleRequest& request) const;


        /**
         * <p>Deletes an WorkMail organization and all underlying AWS resources managed by
         * WorkMail as part of the organization. You can choose whether to delete the
         * associated directory. For more information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/remove_organization.html">Removing
         * an organization</a> in the <i>WorkMail Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationOutcome DeleteOrganization(const Model::DeleteOrganizationRequest& request) const;


        /**
         * <p>Deletes the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;


        /**
         * <p>Deletes the specified retention policy from the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetentionPolicyOutcome DeleteRetentionPolicy(const Model::DeleteRetentionPolicyRequest& request) const;


        /**
         * <p>Deletes a user from WorkMail and all subsequent systems. Before you can
         * delete a user, the user state must be <code>DISABLED</code>. Use the
         * <a>DescribeUser</a> action to confirm the user state.</p> <p>Deleting a user is
         * permanent and cannot be undone. WorkMail archives user mailboxes for 30 days
         * before they are permanently removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Mark a user, group, or resource as no longer used in WorkMail. This action
         * disassociates the mailbox and schedules it for clean-up. WorkMail keeps
         * mailboxes for 30 days before they are permanently removed. The functionality in
         * the console is <i>Disable</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeregisterFromWorkMail">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterFromWorkMailOutcome DeregisterFromWorkMail(const Model::DeregisterFromWorkMailRequest& request) const;


        /**
         * <p>Removes a domain from WorkMail, stops email routing to WorkMail, and removes
         * the authorization allowing WorkMail use. SES keeps the domain because other
         * applications may use it. You must first remove any email address used by
         * WorkMail entities before you remove the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeregisterMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterMailDomainOutcome DeregisterMailDomain(const Model::DeregisterMailDomainRequest& request) const;


        /**
         * <p>Describes the current email monitoring configuration for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeEmailMonitoringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEmailMonitoringConfigurationOutcome DescribeEmailMonitoringConfiguration(const Model::DescribeEmailMonitoringConfigurationRequest& request) const;


        /**
         * <p>Returns the data available for the group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;


        /**
         * <p>Lists the settings in a DMARC policy for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeInboundDmarcSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInboundDmarcSettingsOutcome DescribeInboundDmarcSettings(const Model::DescribeInboundDmarcSettingsRequest& request) const;


        /**
         * <p>Describes the current status of a mailbox export job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeMailboxExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMailboxExportJobOutcome DescribeMailboxExportJob(const Model::DescribeMailboxExportJobRequest& request) const;


        /**
         * <p>Provides more information regarding a given organization based on its
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest& request) const;


        /**
         * <p>Returns the data available for the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceOutcome DescribeResource(const Model::DescribeResourceRequest& request) const;


        /**
         * <p>Provides information regarding the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;


        /**
         * <p>Removes a member from the resource's set of delegates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateDelegateFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDelegateFromResourceOutcome DisassociateDelegateFromResource(const Model::DisassociateDelegateFromResourceRequest& request) const;


        /**
         * <p>Removes a member from a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateMemberFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberFromGroupOutcome DisassociateMemberFromGroup(const Model::DisassociateMemberFromGroupRequest& request) const;


        /**
         * <p>Gets the effects of an organization's access control rules as they apply to a
         * specified IPv4 address, access protocol action, and user ID or impersonation
         * role ID. You must provide either the user ID or impersonation role ID.
         * Impersonation role ID can only be used with Action EWS.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetAccessControlEffect">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessControlEffectOutcome GetAccessControlEffect(const Model::GetAccessControlEffectRequest& request) const;


        /**
         * <p>Gets the default retention policy details for the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetDefaultRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultRetentionPolicyOutcome GetDefaultRetentionPolicy(const Model::GetDefaultRetentionPolicyRequest& request) const;


        /**
         * <p>Gets the impersonation role details for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImpersonationRoleOutcome GetImpersonationRole(const Model::GetImpersonationRoleRequest& request) const;


        /**
         * <p>Tests whether the given impersonation role can impersonate a target
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetImpersonationRoleEffect">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImpersonationRoleEffectOutcome GetImpersonationRoleEffect(const Model::GetImpersonationRoleEffectRequest& request) const;


        /**
         * <p>Gets details for a mail domain, including domain records required to
         * configure your domain with recommended security.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMailDomainOutcome GetMailDomain(const Model::GetMailDomainRequest& request) const;


        /**
         * <p>Requests a user's mailbox details for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMailboxDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMailboxDetailsOutcome GetMailboxDetails(const Model::GetMailboxDetailsRequest& request) const;


        /**
         * <p>Simulates the effect of the mobile device access rules for the given
         * attributes of a sample access event. Use this method to test the effects of the
         * current set of mobile device access rules for the WorkMail organization for a
         * particular user's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMobileDeviceAccessEffect">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMobileDeviceAccessEffectOutcome GetMobileDeviceAccessEffect(const Model::GetMobileDeviceAccessEffectRequest& request) const;


        /**
         * <p>Gets the mobile device access override for the given WorkMail organization,
         * user, and device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMobileDeviceAccessOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMobileDeviceAccessOverrideOutcome GetMobileDeviceAccessOverride(const Model::GetMobileDeviceAccessOverrideRequest& request) const;


        /**
         * <p>Lists the access control rules for the specified organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAccessControlRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessControlRulesOutcome ListAccessControlRules(const Model::ListAccessControlRulesRequest& request) const;


        /**
         * <p>Creates a paginated call to list the aliases associated with a given
         * entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;


        /**
         * <p>List all the <code>AvailabilityConfiguration</code>'s for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAvailabilityConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailabilityConfigurationsOutcome ListAvailabilityConfigurations(const Model::ListAvailabilityConfigurationsRequest& request) const;


        /**
         * <p>Returns an overview of the members of a group. Users and groups can be
         * members of a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroupMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembersOutcome ListGroupMembers(const Model::ListGroupMembersRequest& request) const;


        /**
         * <p>Returns summaries of the organization's groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;


        /**
         * <p>Lists all the impersonation roles for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListImpersonationRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImpersonationRolesOutcome ListImpersonationRoles(const Model::ListImpersonationRolesRequest& request) const;


        /**
         * <p>Lists the mail domains in a given WorkMail organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailDomainsOutcome ListMailDomains(const Model::ListMailDomainsRequest& request) const;


        /**
         * <p>Lists the mailbox export jobs started for the specified organization within
         * the last seven days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailboxExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailboxExportJobsOutcome ListMailboxExportJobs(const Model::ListMailboxExportJobsRequest& request) const;


        /**
         * <p>Lists the mailbox permissions associated with a user, group, or resource
         * mailbox.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailboxPermissionsOutcome ListMailboxPermissions(const Model::ListMailboxPermissionsRequest& request) const;


        /**
         * <p>Lists all the mobile device access overrides for any given combination of
         * WorkMail organization, user, or device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMobileDeviceAccessOverrides">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMobileDeviceAccessOverridesOutcome ListMobileDeviceAccessOverrides(const Model::ListMobileDeviceAccessOverridesRequest& request) const;


        /**
         * <p>Lists the mobile device access rules for the specified WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMobileDeviceAccessRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMobileDeviceAccessRulesOutcome ListMobileDeviceAccessRules(const Model::ListMobileDeviceAccessRulesRequest& request) const;


        /**
         * <p>Returns summaries of the customer's organizations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListOrganizations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationsOutcome ListOrganizations(const Model::ListOrganizationsRequest& request) const;


        /**
         * <p>Lists the delegates associated with a resource. Users and groups can be
         * resource delegates and answer requests on behalf of the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResourceDelegates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDelegatesOutcome ListResourceDelegates(const Model::ListResourceDelegatesRequest& request) const;


        /**
         * <p>Returns summaries of the organization's resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;


        /**
         * <p>Lists the tags applied to an WorkMail organization resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Returns summaries of the organization's users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;


        /**
         * <p>Adds a new access control rule for the specified organization. The rule
         * allows or denies access to the organization for the specified IPv4 addresses,
         * access protocol actions, user IDs and impersonation IDs. Adding a new rule with
         * the same name as an existing rule replaces the older rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutAccessControlRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessControlRuleOutcome PutAccessControlRule(const Model::PutAccessControlRuleRequest& request) const;


        /**
         * <p>Creates or updates the email monitoring configuration for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutEmailMonitoringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailMonitoringConfigurationOutcome PutEmailMonitoringConfiguration(const Model::PutEmailMonitoringConfigurationRequest& request) const;


        /**
         * <p>Enables or disables a DMARC policy for a given organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutInboundDmarcSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInboundDmarcSettingsOutcome PutInboundDmarcSettings(const Model::PutInboundDmarcSettingsRequest& request) const;


        /**
         * <p>Sets permissions for a user, group, or resource. This replaces any
         * pre-existing permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMailboxPermissionsOutcome PutMailboxPermissions(const Model::PutMailboxPermissionsRequest& request) const;


        /**
         * <p>Creates or updates a mobile device access override for the given WorkMail
         * organization, user, and device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutMobileDeviceAccessOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMobileDeviceAccessOverrideOutcome PutMobileDeviceAccessOverride(const Model::PutMobileDeviceAccessOverrideRequest& request) const;


        /**
         * <p>Puts a retention policy to the specified organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionPolicyOutcome PutRetentionPolicy(const Model::PutRetentionPolicyRequest& request) const;


        /**
         * <p>Registers a new domain in WorkMail and SES, and configures it for use by
         * WorkMail. Emails received by SES for this domain are routed to the specified
         * WorkMail organization, and WorkMail has permanent permission to use the
         * specified domain for sending your users' emails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RegisterMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterMailDomainOutcome RegisterMailDomain(const Model::RegisterMailDomainRequest& request) const;


        /**
         * <p>Registers an existing and disabled user, group, or resource for WorkMail use
         * by associating a mailbox and calendaring capabilities. It performs no change if
         * the user, group, or resource is enabled and fails if the user, group, or
         * resource is deleted. This operation results in the accumulation of costs. For
         * more information, see <a
         * href="https://aws.amazon.com/workmail/pricing">Pricing</a>. The equivalent
         * console functionality for this operation is <i>Enable</i>.</p> <p>Users can
         * either be created by calling the <a>CreateUser</a> API operation or they can be
         * synchronized from your directory. For more information, see
         * <a>DeregisterFromWorkMail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RegisterToWorkMail">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterToWorkMailOutcome RegisterToWorkMail(const Model::RegisterToWorkMailRequest& request) const;


        /**
         * <p>Allows the administrator to reset the password for a user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ResetPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetPasswordOutcome ResetPassword(const Model::ResetPasswordRequest& request) const;


        /**
         * <p>Starts a mailbox export job to export MIME-format email messages and calendar
         * items from the specified mailbox to the specified Amazon Simple Storage Service
         * (Amazon S3) bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/mail-export.html">Exporting
         * mailbox content</a> in the <i>WorkMail Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/StartMailboxExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMailboxExportJobOutcome StartMailboxExportJob(const Model::StartMailboxExportJobRequest& request) const;


        /**
         * <p>Applies the specified tags to the specified WorkMailorganization
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Performs a test on an availability provider to ensure that access is allowed.
         * For EWS, it verifies the provided credentials can be used to successfully log
         * in. For Lambda, it verifies that the Lambda function can be invoked and that the
         * resource access policy was configured to deny anonymous access. An anonymous
         * invocation is one done without providing either a <code>SourceArn</code> or
         * <code>SourceAccount</code> header.</p>  <p>The request must contain either
         * one provider definition (<code>EwsProvider</code> or
         * <code>LambdaProvider</code>) or the <code>DomainName</code> parameter. If the
         * <code>DomainName</code> parameter is provided, the configuration stored under
         * the <code>DomainName</code> will be tested.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/TestAvailabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::TestAvailabilityConfigurationOutcome TestAvailabilityConfiguration(const Model::TestAvailabilityConfigurationRequest& request) const;


        /**
         * <p>Untags the specified tags from the specified WorkMail organization
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an existing <code>AvailabilityConfiguration</code> for the given
         * WorkMail organization and domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateAvailabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAvailabilityConfigurationOutcome UpdateAvailabilityConfiguration(const Model::UpdateAvailabilityConfigurationRequest& request) const;


        /**
         * <p>Updates the default mail domain for an organization. The default mail domain
         * is used by the WorkMail AWS Console to suggest an email address when enabling a
         * mail user. You can only have one default domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateDefaultMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDefaultMailDomainOutcome UpdateDefaultMailDomain(const Model::UpdateDefaultMailDomainRequest& request) const;


        /**
         * <p>Updates an impersonation role for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImpersonationRoleOutcome UpdateImpersonationRole(const Model::UpdateImpersonationRoleRequest& request) const;


        /**
         * <p>Updates a user's current mailbox quota for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateMailboxQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMailboxQuotaOutcome UpdateMailboxQuota(const Model::UpdateMailboxQuotaRequest& request) const;


        /**
         * <p>Updates a mobile device access rule for the specified WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateMobileDeviceAccessRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMobileDeviceAccessRuleOutcome UpdateMobileDeviceAccessRule(const Model::UpdateMobileDeviceAccessRuleRequest& request) const;


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
         * <p>Updates data for the resource. To have the latest information, it must be
         * preceded by a <a>DescribeResource</a> call. The dataset in the request should be
         * the one expected when performing another <code>DescribeResource</code>
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkMailEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const WorkMailClientConfiguration& clientConfiguration);

      WorkMailClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkMailEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkMail
} // namespace Aws
