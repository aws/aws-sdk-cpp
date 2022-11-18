/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/shield/ShieldServiceClientModel.h>
#include <aws/shield/ShieldLegacyAsyncMacros.h>

namespace Aws
{
namespace Shield
{
  /**
   * <fullname>Shield Advanced</fullname> <p>This is the <i>Shield Advanced API
   * Reference</i>. This guide is for developers who need detailed information about
   * the Shield Advanced API actions, data types, and errors. For detailed
   * information about WAF and Shield Advanced features and an overview of how to use
   * the WAF and Shield Advanced APIs, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield
   * Developer Guide</a>.</p>
   */
  class AWS_SHIELD_API ShieldClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Shield::ShieldClientConfiguration& clientConfiguration = Aws::Shield::ShieldClientConfiguration(),
                     std::shared_ptr<ShieldEndpointProviderBase> endpointProvider = Aws::MakeShared<ShieldEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<ShieldEndpointProviderBase> endpointProvider = Aws::MakeShared<ShieldEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Shield::ShieldClientConfiguration& clientConfiguration = Aws::Shield::ShieldClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ShieldClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<ShieldEndpointProviderBase> endpointProvider = Aws::MakeShared<ShieldEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Shield::ShieldClientConfiguration& clientConfiguration = Aws::Shield::ShieldClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ShieldClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ShieldClient();


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
         * <p>Authorizes the Shield Response Team (SRT) to access the specified Amazon S3
         * bucket containing log data such as Application Load Balancer access logs,
         * CloudFront logs, or logs from third party sources. You can associate up to 10
         * Amazon S3 buckets with your subscription.</p> <p>To use the services of the SRT
         * and make an <code>AssociateDRTLogBucket</code> request, you must be subscribed
         * to the <a href="http://aws.amazon.com/premiumsupport/business-support/">Business
         * Support plan</a> or the <a
         * href="http://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTLogBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDRTLogBucketOutcome AssociateDRTLogBucket(const Model::AssociateDRTLogBucketRequest& request) const;


        /**
         * <p>Authorizes the Shield Response Team (SRT) using the specified role, to access
         * your Amazon Web Services account to assist with DDoS attack mitigation during
         * potential attacks. This enables the SRT to inspect your WAF configuration and
         * create or update WAF rules and web ACLs.</p> <p>You can associate only one
         * <code>RoleArn</code> with your subscription. If you submit an
         * <code>AssociateDRTRole</code> request for an account that already has an
         * associated role, the new <code>RoleArn</code> will replace the existing
         * <code>RoleArn</code>. </p> <p>Prior to making the <code>AssociateDRTRole</code>
         * request, you must attach the <code>AWSShieldDRTAccessPolicy</code> managed
         * policy to the role that you'll specify in the request. You can access this
         * policy in the IAM console at <a
         * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>.
         * For more information see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Adding
         * and removing IAM identity permissions</a>. The role must also trust the service
         * principal <code>drt.shield.amazonaws.com</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
         * JSON policy elements: Principal</a>.</p> <p>The SRT will have access only to
         * your WAF and Shield resources. By submitting this request, you authorize the SRT
         * to inspect your WAF and Shield configuration and create and update WAF rules and
         * web ACLs on your behalf. The SRT takes these actions only if explicitly
         * authorized by you.</p> <p>You must have the <code>iam:PassRole</code> permission
         * to make an <code>AssociateDRTRole</code> request. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">Granting
         * a user permissions to pass a role to an Amazon Web Services service</a>. </p>
         * <p>To use the services of the SRT and make an <code>AssociateDRTRole</code>
         * request, you must be subscribed to the <a
         * href="http://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="http://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTRole">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDRTRoleOutcome AssociateDRTRole(const Model::AssociateDRTRoleRequest& request) const;


        /**
         * <p>Adds health-based detection to the Shield Advanced protection for a resource.
         * Shield Advanced health-based detection uses the health of your Amazon Web
         * Services resource to improve responsiveness and accuracy in attack detection and
         * response. </p> <p>You define the health check in Route 53 and then associate it
         * with your Shield Advanced protection. For more information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/ddos-overview.html#ddos-advanced-health-check-option">Shield
         * Advanced Health-Based Detection</a> in the <i>WAF Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateHealthCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateHealthCheckOutcome AssociateHealthCheck(const Model::AssociateHealthCheckRequest& request) const;


        /**
         * <p>Initializes proactive engagement and sets the list of contacts for the Shield
         * Response Team (SRT) to use. You must provide at least one phone number in the
         * emergency contact list. </p> <p>After you have initialized proactive engagement
         * using this call, to disable or enable proactive engagement, use the calls
         * <code>DisableProactiveEngagement</code> and
         * <code>EnableProactiveEngagement</code>. </p>  <p>This call defines the
         * list of email addresses and phone numbers that the SRT can use to contact you
         * for escalations to the SRT and to initiate proactive customer support.</p>
         * <p>The contacts that you provide in the request replace any contacts that were
         * already defined. If you already have contacts defined and want to use them,
         * retrieve the list using <code>DescribeEmergencyContactSettings</code> and then
         * provide it to this call. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateProactiveEngagementDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateProactiveEngagementDetailsOutcome AssociateProactiveEngagementDetails(const Model::AssociateProactiveEngagementDetailsRequest& request) const;


        /**
         * <p>Enables Shield Advanced for a specific Amazon Web Services resource. The
         * resource can be an Amazon CloudFront distribution, Amazon Route 53 hosted zone,
         * Global Accelerator standard accelerator, Elastic IP Address, Application Load
         * Balancer, or a Classic Load Balancer. You can protect Amazon EC2 instances and
         * Network Load Balancers by association with protected Amazon EC2 Elastic IP
         * addresses.</p> <p>You can add protection to only a single resource with each
         * <code>CreateProtection</code> request. You can add protection to multiple
         * resources at once through the Shield Advanced console at <a
         * href="https://console.aws.amazon.com/wafv2/shieldv2#/">https://console.aws.amazon.com/wafv2/shieldv2#/</a>.
         * For more information see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/getting-started-ddos.html">Getting
         * Started with Shield Advanced</a> and <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/configure-new-protection.html">Adding
         * Shield Advanced protection to Amazon Web Services resources</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProtectionOutcome CreateProtection(const Model::CreateProtectionRequest& request) const;


        /**
         * <p>Creates a grouping of protected resources so they can be handled as a
         * collective. This resource grouping improves the accuracy of detection and
         * reduces false positives. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProtectionGroupOutcome CreateProtectionGroup(const Model::CreateProtectionGroupRequest& request) const;


        /**
         * <p>Activates Shield Advanced for an account.</p>  <p>For accounts that are
         * members of an Organizations organization, Shield Advanced subscriptions are
         * billed against the organization's payer account, regardless of whether the payer
         * account itself is subscribed. </p>  <p>When you initially create a
         * subscription, your subscription is set to be automatically renewed at the end of
         * the existing subscription period. You can change this by submitting an
         * <code>UpdateSubscription</code> request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionOutcome CreateSubscription(const Model::CreateSubscriptionRequest& request) const;


        /**
         * <p>Deletes an Shield Advanced <a>Protection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProtectionOutcome DeleteProtection(const Model::DeleteProtectionRequest& request) const;


        /**
         * <p>Removes the specified protection group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProtectionGroupOutcome DeleteProtectionGroup(const Model::DeleteProtectionGroupRequest& request) const;


        /**
         * <p>Describes the details of a DDoS attack. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttack">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAttackOutcome DescribeAttack(const Model::DescribeAttackRequest& request) const;


        /**
         * <p>Provides information about the number and type of attacks Shield has detected
         * in the last year for all resources that belong to your account, regardless of
         * whether you've defined Shield protections for them. This operation is available
         * to Shield customers as well as to Shield Advanced customers.</p> <p>The
         * operation returns data for the time range of midnight UTC, one year ago, to
         * midnight UTC, today. For example, if the current time is <code>2020-10-26
         * 15:39:32 PDT</code>, equal to <code>2020-10-26 22:39:32 UTC</code>, then the
         * time range for the attack data returned is from <code>2019-10-26 00:00:00
         * UTC</code> to <code>2020-10-26 00:00:00 UTC</code>. </p> <p>The time range
         * indicates the period covered by the attack statistics data items.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttackStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAttackStatisticsOutcome DescribeAttackStatistics(const Model::DescribeAttackStatisticsRequest& request) const;


        /**
         * <p>Returns the current role and list of Amazon S3 log buckets used by the Shield
         * Response Team (SRT) to access your Amazon Web Services account while assisting
         * with attack mitigation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeDRTAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDRTAccessOutcome DescribeDRTAccess(const Model::DescribeDRTAccessRequest& request) const;


        /**
         * <p>A list of email addresses and phone numbers that the Shield Response Team
         * (SRT) can use to contact you if you have proactive engagement enabled, for
         * escalations to the SRT and to initiate proactive customer support.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeEmergencyContactSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEmergencyContactSettingsOutcome DescribeEmergencyContactSettings(const Model::DescribeEmergencyContactSettingsRequest& request) const;


        /**
         * <p>Lists the details of a <a>Protection</a> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectionOutcome DescribeProtection(const Model::DescribeProtectionRequest& request) const;


        /**
         * <p>Returns the specification for the specified protection group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectionGroupOutcome DescribeProtectionGroup(const Model::DescribeProtectionGroupRequest& request) const;


        /**
         * <p>Provides details about the Shield Advanced subscription for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscriptionOutcome DescribeSubscription(const Model::DescribeSubscriptionRequest& request) const;


        /**
         * <p>Disable the Shield Advanced automatic application layer DDoS mitigation
         * feature for the protected resource. This stops Shield Advanced from creating,
         * verifying, and applying WAF rules for attacks that it detects for the resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisableApplicationLayerAutomaticResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableApplicationLayerAutomaticResponseOutcome DisableApplicationLayerAutomaticResponse(const Model::DisableApplicationLayerAutomaticResponseRequest& request) const;


        /**
         * <p>Removes authorization from the Shield Response Team (SRT) to notify contacts
         * about escalations to the SRT and to initiate proactive customer
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisableProactiveEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableProactiveEngagementOutcome DisableProactiveEngagement(const Model::DisableProactiveEngagementRequest& request) const;


        /**
         * <p>Removes the Shield Response Team's (SRT) access to the specified Amazon S3
         * bucket containing the logs that you shared previously.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTLogBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDRTLogBucketOutcome DisassociateDRTLogBucket(const Model::DisassociateDRTLogBucketRequest& request) const;


        /**
         * <p>Removes the Shield Response Team's (SRT) access to your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDRTRoleOutcome DisassociateDRTRole(const Model::DisassociateDRTRoleRequest& request) const;


        /**
         * <p>Removes health-based detection from the Shield Advanced protection for a
         * resource. Shield Advanced health-based detection uses the health of your Amazon
         * Web Services resource to improve responsiveness and accuracy in attack detection
         * and response. </p> <p>You define the health check in Route 53 and then associate
         * or disassociate it with your Shield Advanced protection. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/ddos-overview.html#ddos-advanced-health-check-option">Shield
         * Advanced Health-Based Detection</a> in the <i>WAF Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateHealthCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateHealthCheckOutcome DisassociateHealthCheck(const Model::DisassociateHealthCheckRequest& request) const;


        /**
         * <p>Enable the Shield Advanced automatic application layer DDoS mitigation for
         * the protected resource. </p>  <p>This feature is available for Amazon
         * CloudFront distributions and Application Load Balancers only.</p> 
         * <p>This causes Shield Advanced to create, verify, and apply WAF rules for DDoS
         * attacks that it detects for the resource. Shield Advanced applies the rules in a
         * Shield rule group inside the web ACL that you've associated with the resource.
         * For information about how automatic mitigation works and the requirements for
         * using it, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/ddos-advanced-automatic-app-layer-response.html">Shield
         * Advanced automatic application layer DDoS mitigation</a>.</p>  <p>Don't
         * use this action to make changes to automatic mitigation settings when it's
         * already enabled for a resource. Instead, use
         * <a>UpdateApplicationLayerAutomaticResponse</a>.</p>  <p>To use this
         * feature, you must associate a web ACL with the protected resource. The web ACL
         * must be created using the latest version of WAF (v2). You can associate the web
         * ACL through the Shield Advanced console at <a
         * href="https://console.aws.amazon.com/wafv2/shieldv2#/">https://console.aws.amazon.com/wafv2/shieldv2#/</a>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/getting-started-ddos.html">Getting
         * Started with Shield Advanced</a>. You can also associate the web ACL to the
         * resource through the WAF console or the WAF API, but you must manage Shield
         * Advanced automatic mitigation through Shield Advanced. For information about
         * WAF, see <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/EnableApplicationLayerAutomaticResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableApplicationLayerAutomaticResponseOutcome EnableApplicationLayerAutomaticResponse(const Model::EnableApplicationLayerAutomaticResponseRequest& request) const;


        /**
         * <p>Authorizes the Shield Response Team (SRT) to use email and phone to notify
         * contacts about escalations to the SRT and to initiate proactive customer
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/EnableProactiveEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableProactiveEngagementOutcome EnableProactiveEngagement(const Model::EnableProactiveEngagementRequest& request) const;


        /**
         * <p>Returns the <code>SubscriptionState</code>, either <code>Active</code> or
         * <code>Inactive</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/GetSubscriptionState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionStateOutcome GetSubscriptionState(const Model::GetSubscriptionStateRequest& request) const;


        /**
         * <p>Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListAttacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttacksOutcome ListAttacks(const Model::ListAttacksRequest& request) const;


        /**
         * <p>Retrieves <a>ProtectionGroup</a> objects for the account. You can retrieve
         * all protection groups or you can provide filtering criteria and retrieve just
         * the subset of protection groups that match the criteria. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtectionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectionGroupsOutcome ListProtectionGroups(const Model::ListProtectionGroupsRequest& request) const;


        /**
         * <p>Retrieves <a>Protection</a> objects for the account. You can retrieve all
         * protections or you can provide filtering criteria and retrieve just the subset
         * of protections that match the criteria. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectionsOutcome ListProtections(const Model::ListProtectionsRequest& request) const;


        /**
         * <p>Retrieves the resources that are included in the protection group.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListResourcesInProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesInProtectionGroupOutcome ListResourcesInProtectionGroup(const Model::ListResourcesInProtectionGroupRequest& request) const;


        /**
         * <p>Gets information about Amazon Web Services tags for a specified Amazon
         * Resource Name (ARN) in Shield.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Adds or updates tags for a resource in Shield.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from a resource in Shield.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an existing Shield Advanced automatic application layer DDoS
         * mitigation configuration for the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateApplicationLayerAutomaticResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationLayerAutomaticResponseOutcome UpdateApplicationLayerAutomaticResponse(const Model::UpdateApplicationLayerAutomaticResponseRequest& request) const;


        /**
         * <p>Updates the details of the list of email addresses and phone numbers that the
         * Shield Response Team (SRT) can use to contact you if you have proactive
         * engagement enabled, for escalations to the SRT and to initiate proactive
         * customer support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateEmergencyContactSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmergencyContactSettingsOutcome UpdateEmergencyContactSettings(const Model::UpdateEmergencyContactSettingsRequest& request) const;


        /**
         * <p>Updates an existing protection group. A protection group is a grouping of
         * protected resources so they can be handled as a collective. This resource
         * grouping improves the accuracy of detection and reduces false positives.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProtectionGroupOutcome UpdateProtectionGroup(const Model::UpdateProtectionGroupRequest& request) const;


        /**
         * <p>Updates the details of an existing subscription. Only enter values for
         * parameters you want to change. Empty parameters are not updated.</p> 
         * <p>For accounts that are members of an Organizations organization, Shield
         * Advanced subscriptions are billed against the organization's payer account,
         * regardless of whether the payer account itself is subscribed. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionOutcome UpdateSubscription(const Model::UpdateSubscriptionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ShieldEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ShieldClientConfiguration& clientConfiguration);

      ShieldClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ShieldEndpointProviderBase> m_endpointProvider;
  };

} // namespace Shield
} // namespace Aws
