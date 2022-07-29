/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/shield/model/AssociateDRTLogBucketResult.h>
#include <aws/shield/model/AssociateDRTRoleResult.h>
#include <aws/shield/model/AssociateHealthCheckResult.h>
#include <aws/shield/model/AssociateProactiveEngagementDetailsResult.h>
#include <aws/shield/model/CreateProtectionResult.h>
#include <aws/shield/model/CreateProtectionGroupResult.h>
#include <aws/shield/model/CreateSubscriptionResult.h>
#include <aws/shield/model/DeleteProtectionResult.h>
#include <aws/shield/model/DeleteProtectionGroupResult.h>
#include <aws/shield/model/DescribeAttackResult.h>
#include <aws/shield/model/DescribeAttackStatisticsResult.h>
#include <aws/shield/model/DescribeDRTAccessResult.h>
#include <aws/shield/model/DescribeEmergencyContactSettingsResult.h>
#include <aws/shield/model/DescribeProtectionResult.h>
#include <aws/shield/model/DescribeProtectionGroupResult.h>
#include <aws/shield/model/DescribeSubscriptionResult.h>
#include <aws/shield/model/DisableApplicationLayerAutomaticResponseResult.h>
#include <aws/shield/model/DisableProactiveEngagementResult.h>
#include <aws/shield/model/DisassociateDRTLogBucketResult.h>
#include <aws/shield/model/DisassociateDRTRoleResult.h>
#include <aws/shield/model/DisassociateHealthCheckResult.h>
#include <aws/shield/model/EnableApplicationLayerAutomaticResponseResult.h>
#include <aws/shield/model/EnableProactiveEngagementResult.h>
#include <aws/shield/model/GetSubscriptionStateResult.h>
#include <aws/shield/model/ListAttacksResult.h>
#include <aws/shield/model/ListProtectionGroupsResult.h>
#include <aws/shield/model/ListProtectionsResult.h>
#include <aws/shield/model/ListResourcesInProtectionGroupResult.h>
#include <aws/shield/model/ListTagsForResourceResult.h>
#include <aws/shield/model/TagResourceResult.h>
#include <aws/shield/model/UntagResourceResult.h>
#include <aws/shield/model/UpdateApplicationLayerAutomaticResponseResult.h>
#include <aws/shield/model/UpdateEmergencyContactSettingsResult.h>
#include <aws/shield/model/UpdateProtectionGroupResult.h>
#include <aws/shield/model/UpdateSubscriptionResult.h>
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

namespace Shield
{

namespace Model
{
        class AssociateDRTLogBucketRequest;
        class AssociateDRTRoleRequest;
        class AssociateHealthCheckRequest;
        class AssociateProactiveEngagementDetailsRequest;
        class CreateProtectionRequest;
        class CreateProtectionGroupRequest;
        class CreateSubscriptionRequest;
        class DeleteProtectionRequest;
        class DeleteProtectionGroupRequest;
        class DescribeAttackRequest;
        class DescribeAttackStatisticsRequest;
        class DescribeDRTAccessRequest;
        class DescribeEmergencyContactSettingsRequest;
        class DescribeProtectionRequest;
        class DescribeProtectionGroupRequest;
        class DescribeSubscriptionRequest;
        class DisableApplicationLayerAutomaticResponseRequest;
        class DisableProactiveEngagementRequest;
        class DisassociateDRTLogBucketRequest;
        class DisassociateDRTRoleRequest;
        class DisassociateHealthCheckRequest;
        class EnableApplicationLayerAutomaticResponseRequest;
        class EnableProactiveEngagementRequest;
        class GetSubscriptionStateRequest;
        class ListAttacksRequest;
        class ListProtectionGroupsRequest;
        class ListProtectionsRequest;
        class ListResourcesInProtectionGroupRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApplicationLayerAutomaticResponseRequest;
        class UpdateEmergencyContactSettingsRequest;
        class UpdateProtectionGroupRequest;
        class UpdateSubscriptionRequest;

        typedef Aws::Utils::Outcome<AssociateDRTLogBucketResult, ShieldError> AssociateDRTLogBucketOutcome;
        typedef Aws::Utils::Outcome<AssociateDRTRoleResult, ShieldError> AssociateDRTRoleOutcome;
        typedef Aws::Utils::Outcome<AssociateHealthCheckResult, ShieldError> AssociateHealthCheckOutcome;
        typedef Aws::Utils::Outcome<AssociateProactiveEngagementDetailsResult, ShieldError> AssociateProactiveEngagementDetailsOutcome;
        typedef Aws::Utils::Outcome<CreateProtectionResult, ShieldError> CreateProtectionOutcome;
        typedef Aws::Utils::Outcome<CreateProtectionGroupResult, ShieldError> CreateProtectionGroupOutcome;
        typedef Aws::Utils::Outcome<CreateSubscriptionResult, ShieldError> CreateSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DeleteProtectionResult, ShieldError> DeleteProtectionOutcome;
        typedef Aws::Utils::Outcome<DeleteProtectionGroupResult, ShieldError> DeleteProtectionGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeAttackResult, ShieldError> DescribeAttackOutcome;
        typedef Aws::Utils::Outcome<DescribeAttackStatisticsResult, ShieldError> DescribeAttackStatisticsOutcome;
        typedef Aws::Utils::Outcome<DescribeDRTAccessResult, ShieldError> DescribeDRTAccessOutcome;
        typedef Aws::Utils::Outcome<DescribeEmergencyContactSettingsResult, ShieldError> DescribeEmergencyContactSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeProtectionResult, ShieldError> DescribeProtectionOutcome;
        typedef Aws::Utils::Outcome<DescribeProtectionGroupResult, ShieldError> DescribeProtectionGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeSubscriptionResult, ShieldError> DescribeSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DisableApplicationLayerAutomaticResponseResult, ShieldError> DisableApplicationLayerAutomaticResponseOutcome;
        typedef Aws::Utils::Outcome<DisableProactiveEngagementResult, ShieldError> DisableProactiveEngagementOutcome;
        typedef Aws::Utils::Outcome<DisassociateDRTLogBucketResult, ShieldError> DisassociateDRTLogBucketOutcome;
        typedef Aws::Utils::Outcome<DisassociateDRTRoleResult, ShieldError> DisassociateDRTRoleOutcome;
        typedef Aws::Utils::Outcome<DisassociateHealthCheckResult, ShieldError> DisassociateHealthCheckOutcome;
        typedef Aws::Utils::Outcome<EnableApplicationLayerAutomaticResponseResult, ShieldError> EnableApplicationLayerAutomaticResponseOutcome;
        typedef Aws::Utils::Outcome<EnableProactiveEngagementResult, ShieldError> EnableProactiveEngagementOutcome;
        typedef Aws::Utils::Outcome<GetSubscriptionStateResult, ShieldError> GetSubscriptionStateOutcome;
        typedef Aws::Utils::Outcome<ListAttacksResult, ShieldError> ListAttacksOutcome;
        typedef Aws::Utils::Outcome<ListProtectionGroupsResult, ShieldError> ListProtectionGroupsOutcome;
        typedef Aws::Utils::Outcome<ListProtectionsResult, ShieldError> ListProtectionsOutcome;
        typedef Aws::Utils::Outcome<ListResourcesInProtectionGroupResult, ShieldError> ListResourcesInProtectionGroupOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ShieldError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ShieldError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, ShieldError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationLayerAutomaticResponseResult, ShieldError> UpdateApplicationLayerAutomaticResponseOutcome;
        typedef Aws::Utils::Outcome<UpdateEmergencyContactSettingsResult, ShieldError> UpdateEmergencyContactSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateProtectionGroupResult, ShieldError> UpdateProtectionGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateSubscriptionResult, ShieldError> UpdateSubscriptionOutcome;

        typedef std::future<AssociateDRTLogBucketOutcome> AssociateDRTLogBucketOutcomeCallable;
        typedef std::future<AssociateDRTRoleOutcome> AssociateDRTRoleOutcomeCallable;
        typedef std::future<AssociateHealthCheckOutcome> AssociateHealthCheckOutcomeCallable;
        typedef std::future<AssociateProactiveEngagementDetailsOutcome> AssociateProactiveEngagementDetailsOutcomeCallable;
        typedef std::future<CreateProtectionOutcome> CreateProtectionOutcomeCallable;
        typedef std::future<CreateProtectionGroupOutcome> CreateProtectionGroupOutcomeCallable;
        typedef std::future<CreateSubscriptionOutcome> CreateSubscriptionOutcomeCallable;
        typedef std::future<DeleteProtectionOutcome> DeleteProtectionOutcomeCallable;
        typedef std::future<DeleteProtectionGroupOutcome> DeleteProtectionGroupOutcomeCallable;
        typedef std::future<DescribeAttackOutcome> DescribeAttackOutcomeCallable;
        typedef std::future<DescribeAttackStatisticsOutcome> DescribeAttackStatisticsOutcomeCallable;
        typedef std::future<DescribeDRTAccessOutcome> DescribeDRTAccessOutcomeCallable;
        typedef std::future<DescribeEmergencyContactSettingsOutcome> DescribeEmergencyContactSettingsOutcomeCallable;
        typedef std::future<DescribeProtectionOutcome> DescribeProtectionOutcomeCallable;
        typedef std::future<DescribeProtectionGroupOutcome> DescribeProtectionGroupOutcomeCallable;
        typedef std::future<DescribeSubscriptionOutcome> DescribeSubscriptionOutcomeCallable;
        typedef std::future<DisableApplicationLayerAutomaticResponseOutcome> DisableApplicationLayerAutomaticResponseOutcomeCallable;
        typedef std::future<DisableProactiveEngagementOutcome> DisableProactiveEngagementOutcomeCallable;
        typedef std::future<DisassociateDRTLogBucketOutcome> DisassociateDRTLogBucketOutcomeCallable;
        typedef std::future<DisassociateDRTRoleOutcome> DisassociateDRTRoleOutcomeCallable;
        typedef std::future<DisassociateHealthCheckOutcome> DisassociateHealthCheckOutcomeCallable;
        typedef std::future<EnableApplicationLayerAutomaticResponseOutcome> EnableApplicationLayerAutomaticResponseOutcomeCallable;
        typedef std::future<EnableProactiveEngagementOutcome> EnableProactiveEngagementOutcomeCallable;
        typedef std::future<GetSubscriptionStateOutcome> GetSubscriptionStateOutcomeCallable;
        typedef std::future<ListAttacksOutcome> ListAttacksOutcomeCallable;
        typedef std::future<ListProtectionGroupsOutcome> ListProtectionGroupsOutcomeCallable;
        typedef std::future<ListProtectionsOutcome> ListProtectionsOutcomeCallable;
        typedef std::future<ListResourcesInProtectionGroupOutcome> ListResourcesInProtectionGroupOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApplicationLayerAutomaticResponseOutcome> UpdateApplicationLayerAutomaticResponseOutcomeCallable;
        typedef std::future<UpdateEmergencyContactSettingsOutcome> UpdateEmergencyContactSettingsOutcomeCallable;
        typedef std::future<UpdateProtectionGroupOutcome> UpdateProtectionGroupOutcomeCallable;
        typedef std::future<UpdateSubscriptionOutcome> UpdateSubscriptionOutcomeCallable;
} // namespace Model

  class ShieldClient;

    typedef std::function<void(const ShieldClient*, const Model::AssociateDRTLogBucketRequest&, const Model::AssociateDRTLogBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDRTLogBucketResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::AssociateDRTRoleRequest&, const Model::AssociateDRTRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDRTRoleResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::AssociateHealthCheckRequest&, const Model::AssociateHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateHealthCheckResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::AssociateProactiveEngagementDetailsRequest&, const Model::AssociateProactiveEngagementDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateProactiveEngagementDetailsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::CreateProtectionRequest&, const Model::CreateProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::CreateProtectionGroupRequest&, const Model::CreateProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::CreateSubscriptionRequest&, const Model::CreateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DeleteProtectionRequest&, const Model::DeleteProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DeleteProtectionGroupRequest&, const Model::DeleteProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeAttackRequest&, const Model::DescribeAttackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAttackResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeAttackStatisticsRequest&, const Model::DescribeAttackStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAttackStatisticsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeDRTAccessRequest&, const Model::DescribeDRTAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDRTAccessResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeEmergencyContactSettingsRequest&, const Model::DescribeEmergencyContactSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEmergencyContactSettingsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeProtectionRequest&, const Model::DescribeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeProtectionGroupRequest&, const Model::DescribeProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeSubscriptionRequest&, const Model::DescribeSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscriptionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisableApplicationLayerAutomaticResponseRequest&, const Model::DisableApplicationLayerAutomaticResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableApplicationLayerAutomaticResponseResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisableProactiveEngagementRequest&, const Model::DisableProactiveEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableProactiveEngagementResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisassociateDRTLogBucketRequest&, const Model::DisassociateDRTLogBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDRTLogBucketResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisassociateDRTRoleRequest&, const Model::DisassociateDRTRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDRTRoleResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisassociateHealthCheckRequest&, const Model::DisassociateHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateHealthCheckResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::EnableApplicationLayerAutomaticResponseRequest&, const Model::EnableApplicationLayerAutomaticResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableApplicationLayerAutomaticResponseResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::EnableProactiveEngagementRequest&, const Model::EnableProactiveEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableProactiveEngagementResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::GetSubscriptionStateRequest&, const Model::GetSubscriptionStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionStateResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListAttacksRequest&, const Model::ListAttacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttacksResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListProtectionGroupsRequest&, const Model::ListProtectionGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectionGroupsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListProtectionsRequest&, const Model::ListProtectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectionsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListResourcesInProtectionGroupRequest&, const Model::ListResourcesInProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesInProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateApplicationLayerAutomaticResponseRequest&, const Model::UpdateApplicationLayerAutomaticResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationLayerAutomaticResponseResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateEmergencyContactSettingsRequest&, const Model::UpdateEmergencyContactSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmergencyContactSettingsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateProtectionGroupRequest&, const Model::UpdateProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateSubscriptionRequest&, const Model::UpdateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ShieldClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ShieldClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ShieldClient();


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
         * A Callable wrapper for AssociateDRTLogBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDRTLogBucketOutcomeCallable AssociateDRTLogBucketCallable(const Model::AssociateDRTLogBucketRequest& request) const;

        /**
         * An Async wrapper for AssociateDRTLogBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDRTLogBucketAsync(const Model::AssociateDRTLogBucketRequest& request, const AssociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for AssociateDRTRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDRTRoleOutcomeCallable AssociateDRTRoleCallable(const Model::AssociateDRTRoleRequest& request) const;

        /**
         * An Async wrapper for AssociateDRTRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDRTRoleAsync(const Model::AssociateDRTRoleRequest& request, const AssociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for AssociateHealthCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateHealthCheckOutcomeCallable AssociateHealthCheckCallable(const Model::AssociateHealthCheckRequest& request) const;

        /**
         * An Async wrapper for AssociateHealthCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateHealthCheckAsync(const Model::AssociateHealthCheckRequest& request, const AssociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for AssociateProactiveEngagementDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateProactiveEngagementDetailsOutcomeCallable AssociateProactiveEngagementDetailsCallable(const Model::AssociateProactiveEngagementDetailsRequest& request) const;

        /**
         * An Async wrapper for AssociateProactiveEngagementDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateProactiveEngagementDetailsAsync(const Model::AssociateProactiveEngagementDetailsRequest& request, const AssociateProactiveEngagementDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProtectionOutcomeCallable CreateProtectionCallable(const Model::CreateProtectionRequest& request) const;

        /**
         * An Async wrapper for CreateProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProtectionAsync(const Model::CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a grouping of protected resources so they can be handled as a
         * collective. This resource grouping improves the accuracy of detection and
         * reduces false positives. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProtectionGroupOutcome CreateProtectionGroup(const Model::CreateProtectionGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProtectionGroupOutcomeCallable CreateProtectionGroupCallable(const Model::CreateProtectionGroupRequest& request) const;

        /**
         * An Async wrapper for CreateProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProtectionGroupAsync(const Model::CreateProtectionGroupRequest& request, const CreateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriptionOutcomeCallable CreateSubscriptionCallable(const Model::CreateSubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriptionAsync(const Model::CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Shield Advanced <a>Protection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProtectionOutcome DeleteProtection(const Model::DeleteProtectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProtectionOutcomeCallable DeleteProtectionCallable(const Model::DeleteProtectionRequest& request) const;

        /**
         * An Async wrapper for DeleteProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProtectionAsync(const Model::DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified protection group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProtectionGroupOutcome DeleteProtectionGroup(const Model::DeleteProtectionGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProtectionGroupOutcomeCallable DeleteProtectionGroupCallable(const Model::DeleteProtectionGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProtectionGroupAsync(const Model::DeleteProtectionGroupRequest& request, const DeleteProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of a DDoS attack. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttack">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAttackOutcome DescribeAttack(const Model::DescribeAttackRequest& request) const;

        /**
         * A Callable wrapper for DescribeAttack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAttackOutcomeCallable DescribeAttackCallable(const Model::DescribeAttackRequest& request) const;

        /**
         * An Async wrapper for DescribeAttack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAttackAsync(const Model::DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DescribeAttackStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAttackStatisticsOutcomeCallable DescribeAttackStatisticsCallable(const Model::DescribeAttackStatisticsRequest& request) const;

        /**
         * An Async wrapper for DescribeAttackStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAttackStatisticsAsync(const Model::DescribeAttackStatisticsRequest& request, const DescribeAttackStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current role and list of Amazon S3 log buckets used by the Shield
         * Response Team (SRT) to access your Amazon Web Services account while assisting
         * with attack mitigation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeDRTAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDRTAccessOutcome DescribeDRTAccess(const Model::DescribeDRTAccessRequest& request) const;

        /**
         * A Callable wrapper for DescribeDRTAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDRTAccessOutcomeCallable DescribeDRTAccessCallable(const Model::DescribeDRTAccessRequest& request) const;

        /**
         * An Async wrapper for DescribeDRTAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDRTAccessAsync(const Model::DescribeDRTAccessRequest& request, const DescribeDRTAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DescribeEmergencyContactSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEmergencyContactSettingsOutcomeCallable DescribeEmergencyContactSettingsCallable(const Model::DescribeEmergencyContactSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeEmergencyContactSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEmergencyContactSettingsAsync(const Model::DescribeEmergencyContactSettingsRequest& request, const DescribeEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the details of a <a>Protection</a> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectionOutcome DescribeProtection(const Model::DescribeProtectionRequest& request) const;

        /**
         * A Callable wrapper for DescribeProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProtectionOutcomeCallable DescribeProtectionCallable(const Model::DescribeProtectionRequest& request) const;

        /**
         * An Async wrapper for DescribeProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProtectionAsync(const Model::DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the specification for the specified protection group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectionGroupOutcome DescribeProtectionGroup(const Model::DescribeProtectionGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProtectionGroupOutcomeCallable DescribeProtectionGroupCallable(const Model::DescribeProtectionGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProtectionGroupAsync(const Model::DescribeProtectionGroupRequest& request, const DescribeProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about the Shield Advanced subscription for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscriptionOutcome DescribeSubscription(const Model::DescribeSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DescribeSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubscriptionOutcomeCallable DescribeSubscriptionCallable(const Model::DescribeSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DescribeSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubscriptionAsync(const Model::DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DisableApplicationLayerAutomaticResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableApplicationLayerAutomaticResponseOutcomeCallable DisableApplicationLayerAutomaticResponseCallable(const Model::DisableApplicationLayerAutomaticResponseRequest& request) const;

        /**
         * An Async wrapper for DisableApplicationLayerAutomaticResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableApplicationLayerAutomaticResponseAsync(const Model::DisableApplicationLayerAutomaticResponseRequest& request, const DisableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes authorization from the Shield Response Team (SRT) to notify contacts
         * about escalations to the SRT and to initiate proactive customer
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisableProactiveEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableProactiveEngagementOutcome DisableProactiveEngagement(const Model::DisableProactiveEngagementRequest& request) const;

        /**
         * A Callable wrapper for DisableProactiveEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableProactiveEngagementOutcomeCallable DisableProactiveEngagementCallable(const Model::DisableProactiveEngagementRequest& request) const;

        /**
         * An Async wrapper for DisableProactiveEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableProactiveEngagementAsync(const Model::DisableProactiveEngagementRequest& request, const DisableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the Shield Response Team's (SRT) access to the specified Amazon S3
         * bucket containing the logs that you shared previously.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTLogBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDRTLogBucketOutcome DisassociateDRTLogBucket(const Model::DisassociateDRTLogBucketRequest& request) const;

        /**
         * A Callable wrapper for DisassociateDRTLogBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDRTLogBucketOutcomeCallable DisassociateDRTLogBucketCallable(const Model::DisassociateDRTLogBucketRequest& request) const;

        /**
         * An Async wrapper for DisassociateDRTLogBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDRTLogBucketAsync(const Model::DisassociateDRTLogBucketRequest& request, const DisassociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the Shield Response Team's (SRT) access to your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDRTRoleOutcome DisassociateDRTRole(const Model::DisassociateDRTRoleRequest& request) const;

        /**
         * A Callable wrapper for DisassociateDRTRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDRTRoleOutcomeCallable DisassociateDRTRoleCallable(const Model::DisassociateDRTRoleRequest& request) const;

        /**
         * An Async wrapper for DisassociateDRTRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDRTRoleAsync(const Model::DisassociateDRTRoleRequest& request, const DisassociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DisassociateHealthCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateHealthCheckOutcomeCallable DisassociateHealthCheckCallable(const Model::DisassociateHealthCheckRequest& request) const;

        /**
         * An Async wrapper for DisassociateHealthCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateHealthCheckAsync(const Model::DisassociateHealthCheckRequest& request, const DisassociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for EnableApplicationLayerAutomaticResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableApplicationLayerAutomaticResponseOutcomeCallable EnableApplicationLayerAutomaticResponseCallable(const Model::EnableApplicationLayerAutomaticResponseRequest& request) const;

        /**
         * An Async wrapper for EnableApplicationLayerAutomaticResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableApplicationLayerAutomaticResponseAsync(const Model::EnableApplicationLayerAutomaticResponseRequest& request, const EnableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Authorizes the Shield Response Team (SRT) to use email and phone to notify
         * contacts about escalations to the SRT and to initiate proactive customer
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/EnableProactiveEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableProactiveEngagementOutcome EnableProactiveEngagement(const Model::EnableProactiveEngagementRequest& request) const;

        /**
         * A Callable wrapper for EnableProactiveEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableProactiveEngagementOutcomeCallable EnableProactiveEngagementCallable(const Model::EnableProactiveEngagementRequest& request) const;

        /**
         * An Async wrapper for EnableProactiveEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableProactiveEngagementAsync(const Model::EnableProactiveEngagementRequest& request, const EnableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <code>SubscriptionState</code>, either <code>Active</code> or
         * <code>Inactive</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/GetSubscriptionState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionStateOutcome GetSubscriptionState(const Model::GetSubscriptionStateRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriptionState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubscriptionStateOutcomeCallable GetSubscriptionStateCallable(const Model::GetSubscriptionStateRequest& request) const;

        /**
         * An Async wrapper for GetSubscriptionState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubscriptionStateAsync(const Model::GetSubscriptionStateRequest& request, const GetSubscriptionStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListAttacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttacksOutcome ListAttacks(const Model::ListAttacksRequest& request) const;

        /**
         * A Callable wrapper for ListAttacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttacksOutcomeCallable ListAttacksCallable(const Model::ListAttacksRequest& request) const;

        /**
         * An Async wrapper for ListAttacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttacksAsync(const Model::ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListProtectionGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProtectionGroupsOutcomeCallable ListProtectionGroupsCallable(const Model::ListProtectionGroupsRequest& request) const;

        /**
         * An Async wrapper for ListProtectionGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProtectionGroupsAsync(const Model::ListProtectionGroupsRequest& request, const ListProtectionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves <a>Protection</a> objects for the account. You can retrieve all
         * protections or you can provide filtering criteria and retrieve just the subset
         * of protections that match the criteria. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectionsOutcome ListProtections(const Model::ListProtectionsRequest& request) const;

        /**
         * A Callable wrapper for ListProtections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProtectionsOutcomeCallable ListProtectionsCallable(const Model::ListProtectionsRequest& request) const;

        /**
         * An Async wrapper for ListProtections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProtectionsAsync(const Model::ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resources that are included in the protection group.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListResourcesInProtectionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesInProtectionGroupOutcome ListResourcesInProtectionGroup(const Model::ListResourcesInProtectionGroupRequest& request) const;

        /**
         * A Callable wrapper for ListResourcesInProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesInProtectionGroupOutcomeCallable ListResourcesInProtectionGroupCallable(const Model::ListResourcesInProtectionGroupRequest& request) const;

        /**
         * An Async wrapper for ListResourcesInProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesInProtectionGroupAsync(const Model::ListResourcesInProtectionGroupRequest& request, const ListResourcesInProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about Amazon Web Services tags for a specified Amazon
         * Resource Name (ARN) in Shield.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListTagsForResource">AWS
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
         * <p>Adds or updates tags for a resource in Shield.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/TagResource">AWS
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
         * <p>Removes tags from a resource in Shield.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UntagResource">AWS
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
         * <p>Updates an existing Shield Advanced automatic application layer DDoS
         * mitigation configuration for the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateApplicationLayerAutomaticResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationLayerAutomaticResponseOutcome UpdateApplicationLayerAutomaticResponse(const Model::UpdateApplicationLayerAutomaticResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationLayerAutomaticResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationLayerAutomaticResponseOutcomeCallable UpdateApplicationLayerAutomaticResponseCallable(const Model::UpdateApplicationLayerAutomaticResponseRequest& request) const;

        /**
         * An Async wrapper for UpdateApplicationLayerAutomaticResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationLayerAutomaticResponseAsync(const Model::UpdateApplicationLayerAutomaticResponseRequest& request, const UpdateApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for UpdateEmergencyContactSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmergencyContactSettingsOutcomeCallable UpdateEmergencyContactSettingsCallable(const Model::UpdateEmergencyContactSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateEmergencyContactSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmergencyContactSettingsAsync(const Model::UpdateEmergencyContactSettingsRequest& request, const UpdateEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for UpdateProtectionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProtectionGroupOutcomeCallable UpdateProtectionGroupCallable(const Model::UpdateProtectionGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateProtectionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProtectionGroupAsync(const Model::UpdateProtectionGroupRequest& request, const UpdateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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

        /**
         * A Callable wrapper for UpdateSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriptionOutcomeCallable UpdateSubscriptionCallable(const Model::UpdateSubscriptionRequest& request) const;

        /**
         * An Async wrapper for UpdateSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriptionAsync(const Model::UpdateSubscriptionRequest& request, const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateDRTLogBucketAsyncHelper(const Model::AssociateDRTLogBucketRequest& request, const AssociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateDRTRoleAsyncHelper(const Model::AssociateDRTRoleRequest& request, const AssociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateHealthCheckAsyncHelper(const Model::AssociateHealthCheckRequest& request, const AssociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateProactiveEngagementDetailsAsyncHelper(const Model::AssociateProactiveEngagementDetailsRequest& request, const AssociateProactiveEngagementDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProtectionAsyncHelper(const Model::CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProtectionGroupAsyncHelper(const Model::CreateProtectionGroupRequest& request, const CreateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubscriptionAsyncHelper(const Model::CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProtectionAsyncHelper(const Model::DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProtectionGroupAsyncHelper(const Model::DeleteProtectionGroupRequest& request, const DeleteProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAttackAsyncHelper(const Model::DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAttackStatisticsAsyncHelper(const Model::DescribeAttackStatisticsRequest& request, const DescribeAttackStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDRTAccessAsyncHelper(const Model::DescribeDRTAccessRequest& request, const DescribeDRTAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEmergencyContactSettingsAsyncHelper(const Model::DescribeEmergencyContactSettingsRequest& request, const DescribeEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProtectionAsyncHelper(const Model::DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProtectionGroupAsyncHelper(const Model::DescribeProtectionGroupRequest& request, const DescribeProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubscriptionAsyncHelper(const Model::DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableApplicationLayerAutomaticResponseAsyncHelper(const Model::DisableApplicationLayerAutomaticResponseRequest& request, const DisableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableProactiveEngagementAsyncHelper(const Model::DisableProactiveEngagementRequest& request, const DisableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDRTLogBucketAsyncHelper(const Model::DisassociateDRTLogBucketRequest& request, const DisassociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDRTRoleAsyncHelper(const Model::DisassociateDRTRoleRequest& request, const DisassociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateHealthCheckAsyncHelper(const Model::DisassociateHealthCheckRequest& request, const DisassociateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableApplicationLayerAutomaticResponseAsyncHelper(const Model::EnableApplicationLayerAutomaticResponseRequest& request, const EnableApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableProactiveEngagementAsyncHelper(const Model::EnableProactiveEngagementRequest& request, const EnableProactiveEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSubscriptionStateAsyncHelper(const Model::GetSubscriptionStateRequest& request, const GetSubscriptionStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttacksAsyncHelper(const Model::ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProtectionGroupsAsyncHelper(const Model::ListProtectionGroupsRequest& request, const ListProtectionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProtectionsAsyncHelper(const Model::ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesInProtectionGroupAsyncHelper(const Model::ListResourcesInProtectionGroupRequest& request, const ListResourcesInProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationLayerAutomaticResponseAsyncHelper(const Model::UpdateApplicationLayerAutomaticResponseRequest& request, const UpdateApplicationLayerAutomaticResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEmergencyContactSettingsAsyncHelper(const Model::UpdateEmergencyContactSettingsRequest& request, const UpdateEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProtectionGroupAsyncHelper(const Model::UpdateProtectionGroupRequest& request, const UpdateProtectionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSubscriptionAsyncHelper(const Model::UpdateSubscriptionRequest& request, const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Shield
} // namespace Aws
