/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/shield/model/CreateProtectionResult.h>
#include <aws/shield/model/CreateSubscriptionResult.h>
#include <aws/shield/model/DeleteProtectionResult.h>
#include <aws/shield/model/DescribeAttackResult.h>
#include <aws/shield/model/DescribeDRTAccessResult.h>
#include <aws/shield/model/DescribeEmergencyContactSettingsResult.h>
#include <aws/shield/model/DescribeProtectionResult.h>
#include <aws/shield/model/DescribeSubscriptionResult.h>
#include <aws/shield/model/DisassociateDRTLogBucketResult.h>
#include <aws/shield/model/DisassociateDRTRoleResult.h>
#include <aws/shield/model/GetSubscriptionStateResult.h>
#include <aws/shield/model/ListAttacksResult.h>
#include <aws/shield/model/ListProtectionsResult.h>
#include <aws/shield/model/UpdateEmergencyContactSettingsResult.h>
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
        class CreateProtectionRequest;
        class CreateSubscriptionRequest;
        class DeleteProtectionRequest;
        class DescribeAttackRequest;
        class DescribeDRTAccessRequest;
        class DescribeEmergencyContactSettingsRequest;
        class DescribeProtectionRequest;
        class DescribeSubscriptionRequest;
        class DisassociateDRTLogBucketRequest;
        class DisassociateDRTRoleRequest;
        class GetSubscriptionStateRequest;
        class ListAttacksRequest;
        class ListProtectionsRequest;
        class UpdateEmergencyContactSettingsRequest;
        class UpdateSubscriptionRequest;

        typedef Aws::Utils::Outcome<AssociateDRTLogBucketResult, Aws::Client::AWSError<ShieldErrors>> AssociateDRTLogBucketOutcome;
        typedef Aws::Utils::Outcome<AssociateDRTRoleResult, Aws::Client::AWSError<ShieldErrors>> AssociateDRTRoleOutcome;
        typedef Aws::Utils::Outcome<CreateProtectionResult, Aws::Client::AWSError<ShieldErrors>> CreateProtectionOutcome;
        typedef Aws::Utils::Outcome<CreateSubscriptionResult, Aws::Client::AWSError<ShieldErrors>> CreateSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DeleteProtectionResult, Aws::Client::AWSError<ShieldErrors>> DeleteProtectionOutcome;
        typedef Aws::Utils::Outcome<DescribeAttackResult, Aws::Client::AWSError<ShieldErrors>> DescribeAttackOutcome;
        typedef Aws::Utils::Outcome<DescribeDRTAccessResult, Aws::Client::AWSError<ShieldErrors>> DescribeDRTAccessOutcome;
        typedef Aws::Utils::Outcome<DescribeEmergencyContactSettingsResult, Aws::Client::AWSError<ShieldErrors>> DescribeEmergencyContactSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeProtectionResult, Aws::Client::AWSError<ShieldErrors>> DescribeProtectionOutcome;
        typedef Aws::Utils::Outcome<DescribeSubscriptionResult, Aws::Client::AWSError<ShieldErrors>> DescribeSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DisassociateDRTLogBucketResult, Aws::Client::AWSError<ShieldErrors>> DisassociateDRTLogBucketOutcome;
        typedef Aws::Utils::Outcome<DisassociateDRTRoleResult, Aws::Client::AWSError<ShieldErrors>> DisassociateDRTRoleOutcome;
        typedef Aws::Utils::Outcome<GetSubscriptionStateResult, Aws::Client::AWSError<ShieldErrors>> GetSubscriptionStateOutcome;
        typedef Aws::Utils::Outcome<ListAttacksResult, Aws::Client::AWSError<ShieldErrors>> ListAttacksOutcome;
        typedef Aws::Utils::Outcome<ListProtectionsResult, Aws::Client::AWSError<ShieldErrors>> ListProtectionsOutcome;
        typedef Aws::Utils::Outcome<UpdateEmergencyContactSettingsResult, Aws::Client::AWSError<ShieldErrors>> UpdateEmergencyContactSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateSubscriptionResult, Aws::Client::AWSError<ShieldErrors>> UpdateSubscriptionOutcome;

        typedef std::future<AssociateDRTLogBucketOutcome> AssociateDRTLogBucketOutcomeCallable;
        typedef std::future<AssociateDRTRoleOutcome> AssociateDRTRoleOutcomeCallable;
        typedef std::future<CreateProtectionOutcome> CreateProtectionOutcomeCallable;
        typedef std::future<CreateSubscriptionOutcome> CreateSubscriptionOutcomeCallable;
        typedef std::future<DeleteProtectionOutcome> DeleteProtectionOutcomeCallable;
        typedef std::future<DescribeAttackOutcome> DescribeAttackOutcomeCallable;
        typedef std::future<DescribeDRTAccessOutcome> DescribeDRTAccessOutcomeCallable;
        typedef std::future<DescribeEmergencyContactSettingsOutcome> DescribeEmergencyContactSettingsOutcomeCallable;
        typedef std::future<DescribeProtectionOutcome> DescribeProtectionOutcomeCallable;
        typedef std::future<DescribeSubscriptionOutcome> DescribeSubscriptionOutcomeCallable;
        typedef std::future<DisassociateDRTLogBucketOutcome> DisassociateDRTLogBucketOutcomeCallable;
        typedef std::future<DisassociateDRTRoleOutcome> DisassociateDRTRoleOutcomeCallable;
        typedef std::future<GetSubscriptionStateOutcome> GetSubscriptionStateOutcomeCallable;
        typedef std::future<ListAttacksOutcome> ListAttacksOutcomeCallable;
        typedef std::future<ListProtectionsOutcome> ListProtectionsOutcomeCallable;
        typedef std::future<UpdateEmergencyContactSettingsOutcome> UpdateEmergencyContactSettingsOutcomeCallable;
        typedef std::future<UpdateSubscriptionOutcome> UpdateSubscriptionOutcomeCallable;
} // namespace Model

  class ShieldClient;

    typedef std::function<void(const ShieldClient*, const Model::AssociateDRTLogBucketRequest&, const Model::AssociateDRTLogBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDRTLogBucketResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::AssociateDRTRoleRequest&, const Model::AssociateDRTRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDRTRoleResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::CreateProtectionRequest&, const Model::CreateProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::CreateSubscriptionRequest&, const Model::CreateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DeleteProtectionRequest&, const Model::DeleteProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeAttackRequest&, const Model::DescribeAttackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAttackResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeDRTAccessRequest&, const Model::DescribeDRTAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDRTAccessResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeEmergencyContactSettingsRequest&, const Model::DescribeEmergencyContactSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEmergencyContactSettingsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeProtectionRequest&, const Model::DescribeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeSubscriptionRequest&, const Model::DescribeSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscriptionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisassociateDRTLogBucketRequest&, const Model::DisassociateDRTLogBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDRTLogBucketResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisassociateDRTRoleRequest&, const Model::DisassociateDRTRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDRTRoleResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::GetSubscriptionStateRequest&, const Model::GetSubscriptionStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionStateResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListAttacksRequest&, const Model::ListAttacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttacksResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListProtectionsRequest&, const Model::ListProtectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectionsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateEmergencyContactSettingsRequest&, const Model::UpdateEmergencyContactSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmergencyContactSettingsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateSubscriptionRequest&, const Model::UpdateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionResponseReceivedHandler;

  /**
   * <fullname>AWS Shield Advanced</fullname> <p>This is the <i>AWS Shield Advanced
   * API Reference</i>. This guide is for developers who need detailed information
   * about the AWS Shield Advanced API actions, data types, and errors. For detailed
   * information about AWS WAF and AWS Shield Advanced features and an overview of
   * how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS
   * Shield Developer Guide</a>.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "Shield"; }


        /**
         * <p>Authorizes the DDoS Response team (DRT) to access the specified Amazon S3
         * bucket containing your flow logs. You can associate up to 10 Amazon S3 buckets
         * with your subscription.</p> <p>To use the services of the DRT and make an
         * <code>AssociateDRTLogBucket</code> request, you must be subscribed to the <a
         * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTLogBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDRTLogBucketOutcome AssociateDRTLogBucket(const Model::AssociateDRTLogBucketRequest& request) const;

        /**
         * <p>Authorizes the DDoS Response team (DRT) to access the specified Amazon S3
         * bucket containing your flow logs. You can associate up to 10 Amazon S3 buckets
         * with your subscription.</p> <p>To use the services of the DRT and make an
         * <code>AssociateDRTLogBucket</code> request, you must be subscribed to the <a
         * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTLogBucket">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDRTLogBucketOutcomeCallable AssociateDRTLogBucketCallable(const Model::AssociateDRTLogBucketRequest& request) const;

        /**
         * <p>Authorizes the DDoS Response team (DRT) to access the specified Amazon S3
         * bucket containing your flow logs. You can associate up to 10 Amazon S3 buckets
         * with your subscription.</p> <p>To use the services of the DRT and make an
         * <code>AssociateDRTLogBucket</code> request, you must be subscribed to the <a
         * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTLogBucket">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDRTLogBucketAsync(const Model::AssociateDRTLogBucketRequest& request, const AssociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Authorizes the DDoS Response team (DRT), using the specified role, to access
         * your AWS account to assist with DDoS attack mitigation during potential attacks.
         * This enables the DRT to inspect your AWS WAF configuration and create or update
         * AWS WAF rules and web ACLs.</p> <p>You can associate only one
         * <code>RoleArn</code> with your subscription. If you submit an
         * <code>AssociateDRTRole</code> request for an account that already has an
         * associated role, the new <code>RoleArn</code> will replace the existing
         * <code>RoleArn</code>. </p> <p>Prior to making the <code>AssociateDRTRole</code>
         * request, you must attach the <a
         * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
         * managed policy to the role you will specify in the request. For more information
         * see <a href="
         * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
         * and Detaching IAM Policies</a>. The role must also trust the service principal
         * <code> drt.shield.amazonaws.com</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
         * JSON Policy Elements: Principal</a>.</p> <p>The DRT will have access only to
         * your AWS WAF and Shield resources. By submitting this request, you authorize the
         * DRT to inspect your AWS WAF and Shield configuration and create and update AWS
         * WAF rules and web ACLs on your behalf. The DRT takes these actions only if
         * explicitly authorized by you.</p> <p>You must have the <code>iam:PassRole</code>
         * permission to make an <code>AssociateDRTRole</code> request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">Granting
         * a User Permissions to Pass a Role to an AWS Service</a>. </p> <p>To use the
         * services of the DRT and make an <code>AssociateDRTRole</code> request, you must
         * be subscribed to the <a
         * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTRole">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDRTRoleOutcome AssociateDRTRole(const Model::AssociateDRTRoleRequest& request) const;

        /**
         * <p>Authorizes the DDoS Response team (DRT), using the specified role, to access
         * your AWS account to assist with DDoS attack mitigation during potential attacks.
         * This enables the DRT to inspect your AWS WAF configuration and create or update
         * AWS WAF rules and web ACLs.</p> <p>You can associate only one
         * <code>RoleArn</code> with your subscription. If you submit an
         * <code>AssociateDRTRole</code> request for an account that already has an
         * associated role, the new <code>RoleArn</code> will replace the existing
         * <code>RoleArn</code>. </p> <p>Prior to making the <code>AssociateDRTRole</code>
         * request, you must attach the <a
         * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
         * managed policy to the role you will specify in the request. For more information
         * see <a href="
         * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
         * and Detaching IAM Policies</a>. The role must also trust the service principal
         * <code> drt.shield.amazonaws.com</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
         * JSON Policy Elements: Principal</a>.</p> <p>The DRT will have access only to
         * your AWS WAF and Shield resources. By submitting this request, you authorize the
         * DRT to inspect your AWS WAF and Shield configuration and create and update AWS
         * WAF rules and web ACLs on your behalf. The DRT takes these actions only if
         * explicitly authorized by you.</p> <p>You must have the <code>iam:PassRole</code>
         * permission to make an <code>AssociateDRTRole</code> request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">Granting
         * a User Permissions to Pass a Role to an AWS Service</a>. </p> <p>To use the
         * services of the DRT and make an <code>AssociateDRTRole</code> request, you must
         * be subscribed to the <a
         * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDRTRoleOutcomeCallable AssociateDRTRoleCallable(const Model::AssociateDRTRoleRequest& request) const;

        /**
         * <p>Authorizes the DDoS Response team (DRT), using the specified role, to access
         * your AWS account to assist with DDoS attack mitigation during potential attacks.
         * This enables the DRT to inspect your AWS WAF configuration and create or update
         * AWS WAF rules and web ACLs.</p> <p>You can associate only one
         * <code>RoleArn</code> with your subscription. If you submit an
         * <code>AssociateDRTRole</code> request for an account that already has an
         * associated role, the new <code>RoleArn</code> will replace the existing
         * <code>RoleArn</code>. </p> <p>Prior to making the <code>AssociateDRTRole</code>
         * request, you must attach the <a
         * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
         * managed policy to the role you will specify in the request. For more information
         * see <a href="
         * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
         * and Detaching IAM Policies</a>. The role must also trust the service principal
         * <code> drt.shield.amazonaws.com</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
         * JSON Policy Elements: Principal</a>.</p> <p>The DRT will have access only to
         * your AWS WAF and Shield resources. By submitting this request, you authorize the
         * DRT to inspect your AWS WAF and Shield configuration and create and update AWS
         * WAF rules and web ACLs on your behalf. The DRT takes these actions only if
         * explicitly authorized by you.</p> <p>You must have the <code>iam:PassRole</code>
         * permission to make an <code>AssociateDRTRole</code> request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">Granting
         * a User Permissions to Pass a Role to an AWS Service</a>. </p> <p>To use the
         * services of the DRT and make an <code>AssociateDRTRole</code> request, you must
         * be subscribed to the <a
         * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AssociateDRTRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDRTRoleAsync(const Model::AssociateDRTRoleRequest& request, const AssociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables AWS Shield Advanced for a specific AWS resource. The resource can be
         * an Amazon CloudFront distribution, Elastic Load Balancing load balancer, AWS
         * Global Accelerator accelerator, Elastic IP Address, or an Amazon Route 53 hosted
         * zone.</p> <p>You can add protection to only a single resource with each
         * CreateProtection request. If you want to add protection to multiple resources at
         * once, use the <a href="https://console.aws.amazon.com/waf/">AWS WAF console</a>.
         * For more information see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/getting-started-ddos.html">Getting
         * Started with AWS Shield Advanced</a> and <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/configure-new-protection.html">Add
         * AWS Shield Advanced Protection to more AWS Resources</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProtectionOutcome CreateProtection(const Model::CreateProtectionRequest& request) const;

        /**
         * <p>Enables AWS Shield Advanced for a specific AWS resource. The resource can be
         * an Amazon CloudFront distribution, Elastic Load Balancing load balancer, AWS
         * Global Accelerator accelerator, Elastic IP Address, or an Amazon Route 53 hosted
         * zone.</p> <p>You can add protection to only a single resource with each
         * CreateProtection request. If you want to add protection to multiple resources at
         * once, use the <a href="https://console.aws.amazon.com/waf/">AWS WAF console</a>.
         * For more information see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/getting-started-ddos.html">Getting
         * Started with AWS Shield Advanced</a> and <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/configure-new-protection.html">Add
         * AWS Shield Advanced Protection to more AWS Resources</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProtectionOutcomeCallable CreateProtectionCallable(const Model::CreateProtectionRequest& request) const;

        /**
         * <p>Enables AWS Shield Advanced for a specific AWS resource. The resource can be
         * an Amazon CloudFront distribution, Elastic Load Balancing load balancer, AWS
         * Global Accelerator accelerator, Elastic IP Address, or an Amazon Route 53 hosted
         * zone.</p> <p>You can add protection to only a single resource with each
         * CreateProtection request. If you want to add protection to multiple resources at
         * once, use the <a href="https://console.aws.amazon.com/waf/">AWS WAF console</a>.
         * For more information see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/getting-started-ddos.html">Getting
         * Started with AWS Shield Advanced</a> and <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/configure-new-protection.html">Add
         * AWS Shield Advanced Protection to more AWS Resources</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProtectionAsync(const Model::CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Activates AWS Shield Advanced for an account.</p> <p>As part of this request
         * you can specify <code>EmergencySettings</code> that automaticaly grant the DDoS
         * response team (DRT) needed permissions to assist you during a suspected DDoS
         * attack. For more information see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/authorize-DRT.html">Authorize
         * the DDoS Response Team to Create Rules and Web ACLs on Your Behalf</a>.</p>
         * <p>When you initally create a subscription, your subscription is set to be
         * automatically renewed at the end of the existing subscription period. You can
         * change this by submitting an <code>UpdateSubscription</code> request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionOutcome CreateSubscription(const Model::CreateSubscriptionRequest& request) const;

        /**
         * <p>Activates AWS Shield Advanced for an account.</p> <p>As part of this request
         * you can specify <code>EmergencySettings</code> that automaticaly grant the DDoS
         * response team (DRT) needed permissions to assist you during a suspected DDoS
         * attack. For more information see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/authorize-DRT.html">Authorize
         * the DDoS Response Team to Create Rules and Web ACLs on Your Behalf</a>.</p>
         * <p>When you initally create a subscription, your subscription is set to be
         * automatically renewed at the end of the existing subscription period. You can
         * change this by submitting an <code>UpdateSubscription</code> request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriptionOutcomeCallable CreateSubscriptionCallable(const Model::CreateSubscriptionRequest& request) const;

        /**
         * <p>Activates AWS Shield Advanced for an account.</p> <p>As part of this request
         * you can specify <code>EmergencySettings</code> that automaticaly grant the DDoS
         * response team (DRT) needed permissions to assist you during a suspected DDoS
         * attack. For more information see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/authorize-DRT.html">Authorize
         * the DDoS Response Team to Create Rules and Web ACLs on Your Behalf</a>.</p>
         * <p>When you initally create a subscription, your subscription is set to be
         * automatically renewed at the end of the existing subscription period. You can
         * change this by submitting an <code>UpdateSubscription</code> request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/CreateSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriptionAsync(const Model::CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Shield Advanced <a>Protection</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProtectionOutcome DeleteProtection(const Model::DeleteProtectionRequest& request) const;

        /**
         * <p>Deletes an AWS Shield Advanced <a>Protection</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProtectionOutcomeCallable DeleteProtectionCallable(const Model::DeleteProtectionRequest& request) const;

        /**
         * <p>Deletes an AWS Shield Advanced <a>Protection</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DeleteProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProtectionAsync(const Model::DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of a DDoS attack. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttack">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAttackOutcome DescribeAttack(const Model::DescribeAttackRequest& request) const;

        /**
         * <p>Describes the details of a DDoS attack. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAttackOutcomeCallable DescribeAttackCallable(const Model::DescribeAttackRequest& request) const;

        /**
         * <p>Describes the details of a DDoS attack. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeAttack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAttackAsync(const Model::DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current role and list of Amazon S3 log buckets used by the DDoS
         * Response team (DRT) to access your AWS account while assisting with attack
         * mitigation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeDRTAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDRTAccessOutcome DescribeDRTAccess(const Model::DescribeDRTAccessRequest& request) const;

        /**
         * <p>Returns the current role and list of Amazon S3 log buckets used by the DDoS
         * Response team (DRT) to access your AWS account while assisting with attack
         * mitigation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeDRTAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDRTAccessOutcomeCallable DescribeDRTAccessCallable(const Model::DescribeDRTAccessRequest& request) const;

        /**
         * <p>Returns the current role and list of Amazon S3 log buckets used by the DDoS
         * Response team (DRT) to access your AWS account while assisting with attack
         * mitigation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeDRTAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDRTAccessAsync(const Model::DescribeDRTAccessRequest& request, const DescribeDRTAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the email addresses that the DRT can use to contact you during a
         * suspected attack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeEmergencyContactSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEmergencyContactSettingsOutcome DescribeEmergencyContactSettings(const Model::DescribeEmergencyContactSettingsRequest& request) const;

        /**
         * <p>Lists the email addresses that the DRT can use to contact you during a
         * suspected attack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeEmergencyContactSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEmergencyContactSettingsOutcomeCallable DescribeEmergencyContactSettingsCallable(const Model::DescribeEmergencyContactSettingsRequest& request) const;

        /**
         * <p>Lists the email addresses that the DRT can use to contact you during a
         * suspected attack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeEmergencyContactSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the details of a <a>Protection</a> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProtectionOutcomeCallable DescribeProtectionCallable(const Model::DescribeProtectionRequest& request) const;

        /**
         * <p>Lists the details of a <a>Protection</a> object.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProtectionAsync(const Model::DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about the AWS Shield Advanced subscription for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscriptionOutcome DescribeSubscription(const Model::DescribeSubscriptionRequest& request) const;

        /**
         * <p>Provides details about the AWS Shield Advanced subscription for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubscriptionOutcomeCallable DescribeSubscriptionCallable(const Model::DescribeSubscriptionRequest& request) const;

        /**
         * <p>Provides details about the AWS Shield Advanced subscription for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DescribeSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubscriptionAsync(const Model::DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the DDoS Response team's (DRT) access to the specified Amazon S3
         * bucket containing your flow logs.</p> <p>To make a
         * <code>DisassociateDRTLogBucket</code> request, you must be subscribed to the <a
         * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>. However, if you are not subscribed to one of these support
         * plans, but had been previously and had granted the DRT access to your account,
         * you can submit a <code>DisassociateDRTLogBucket</code> request to remove this
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTLogBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDRTLogBucketOutcome DisassociateDRTLogBucket(const Model::DisassociateDRTLogBucketRequest& request) const;

        /**
         * <p>Removes the DDoS Response team's (DRT) access to the specified Amazon S3
         * bucket containing your flow logs.</p> <p>To make a
         * <code>DisassociateDRTLogBucket</code> request, you must be subscribed to the <a
         * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>. However, if you are not subscribed to one of these support
         * plans, but had been previously and had granted the DRT access to your account,
         * you can submit a <code>DisassociateDRTLogBucket</code> request to remove this
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTLogBucket">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDRTLogBucketOutcomeCallable DisassociateDRTLogBucketCallable(const Model::DisassociateDRTLogBucketRequest& request) const;

        /**
         * <p>Removes the DDoS Response team's (DRT) access to the specified Amazon S3
         * bucket containing your flow logs.</p> <p>To make a
         * <code>DisassociateDRTLogBucket</code> request, you must be subscribed to the <a
         * href="https://aws.amazon.com/premiumsupport/business-support/">Business Support
         * plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>. However, if you are not subscribed to one of these support
         * plans, but had been previously and had granted the DRT access to your account,
         * you can submit a <code>DisassociateDRTLogBucket</code> request to remove this
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTLogBucket">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDRTLogBucketAsync(const Model::DisassociateDRTLogBucketRequest& request, const DisassociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the DDoS Response team's (DRT) access to your AWS account.</p> <p>To
         * make a <code>DisassociateDRTRole</code> request, you must be subscribed to the
         * <a href="https://aws.amazon.com/premiumsupport/business-support/">Business
         * Support plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>. However, if you are not subscribed to one of these support
         * plans, but had been previously and had granted the DRT access to your account,
         * you can submit a <code>DisassociateDRTRole</code> request to remove this
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDRTRoleOutcome DisassociateDRTRole(const Model::DisassociateDRTRoleRequest& request) const;

        /**
         * <p>Removes the DDoS Response team's (DRT) access to your AWS account.</p> <p>To
         * make a <code>DisassociateDRTRole</code> request, you must be subscribed to the
         * <a href="https://aws.amazon.com/premiumsupport/business-support/">Business
         * Support plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>. However, if you are not subscribed to one of these support
         * plans, but had been previously and had granted the DRT access to your account,
         * you can submit a <code>DisassociateDRTRole</code> request to remove this
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDRTRoleOutcomeCallable DisassociateDRTRoleCallable(const Model::DisassociateDRTRoleRequest& request) const;

        /**
         * <p>Removes the DDoS Response team's (DRT) access to your AWS account.</p> <p>To
         * make a <code>DisassociateDRTRole</code> request, you must be subscribed to the
         * <a href="https://aws.amazon.com/premiumsupport/business-support/">Business
         * Support plan</a> or the <a
         * href="https://aws.amazon.com/premiumsupport/enterprise-support/">Enterprise
         * Support plan</a>. However, if you are not subscribed to one of these support
         * plans, but had been previously and had granted the DRT access to your account,
         * you can submit a <code>DisassociateDRTRole</code> request to remove this
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/DisassociateDRTRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDRTRoleAsync(const Model::DisassociateDRTRoleRequest& request, const DisassociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <code>SubscriptionState</code>, either <code>Active</code> or
         * <code>Inactive</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/GetSubscriptionState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionStateOutcome GetSubscriptionState(const Model::GetSubscriptionStateRequest& request) const;

        /**
         * <p>Returns the <code>SubscriptionState</code>, either <code>Active</code> or
         * <code>Inactive</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/GetSubscriptionState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubscriptionStateOutcomeCallable GetSubscriptionStateCallable(const Model::GetSubscriptionStateRequest& request) const;

        /**
         * <p>Returns the <code>SubscriptionState</code>, either <code>Active</code> or
         * <code>Inactive</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/GetSubscriptionState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListAttacks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttacksOutcomeCallable ListAttacksCallable(const Model::ListAttacksRequest& request) const;

        /**
         * <p>Returns all ongoing DDoS attacks or all DDoS attacks during a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListAttacks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttacksAsync(const Model::ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all <a>Protection</a> objects for the account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectionsOutcome ListProtections(const Model::ListProtectionsRequest& request) const;

        /**
         * <p>Lists all <a>Protection</a> objects for the account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProtectionsOutcomeCallable ListProtectionsCallable(const Model::ListProtectionsRequest& request) const;

        /**
         * <p>Lists all <a>Protection</a> objects for the account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ListProtections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProtectionsAsync(const Model::ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details of the list of email addresses that the DRT can use to
         * contact you during a suspected attack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateEmergencyContactSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmergencyContactSettingsOutcome UpdateEmergencyContactSettings(const Model::UpdateEmergencyContactSettingsRequest& request) const;

        /**
         * <p>Updates the details of the list of email addresses that the DRT can use to
         * contact you during a suspected attack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateEmergencyContactSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmergencyContactSettingsOutcomeCallable UpdateEmergencyContactSettingsCallable(const Model::UpdateEmergencyContactSettingsRequest& request) const;

        /**
         * <p>Updates the details of the list of email addresses that the DRT can use to
         * contact you during a suspected attack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateEmergencyContactSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmergencyContactSettingsAsync(const Model::UpdateEmergencyContactSettingsRequest& request, const UpdateEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details of an existing subscription. Only enter values for
         * parameters you want to change. Empty parameters are not updated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionOutcome UpdateSubscription(const Model::UpdateSubscriptionRequest& request) const;

        /**
         * <p>Updates the details of an existing subscription. Only enter values for
         * parameters you want to change. Empty parameters are not updated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriptionOutcomeCallable UpdateSubscriptionCallable(const Model::UpdateSubscriptionRequest& request) const;

        /**
         * <p>Updates the details of an existing subscription. Only enter values for
         * parameters you want to change. Empty parameters are not updated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/UpdateSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriptionAsync(const Model::UpdateSubscriptionRequest& request, const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateDRTLogBucketAsyncHelper(const Model::AssociateDRTLogBucketRequest& request, const AssociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateDRTRoleAsyncHelper(const Model::AssociateDRTRoleRequest& request, const AssociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProtectionAsyncHelper(const Model::CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubscriptionAsyncHelper(const Model::CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProtectionAsyncHelper(const Model::DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAttackAsyncHelper(const Model::DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDRTAccessAsyncHelper(const Model::DescribeDRTAccessRequest& request, const DescribeDRTAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEmergencyContactSettingsAsyncHelper(const Model::DescribeEmergencyContactSettingsRequest& request, const DescribeEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProtectionAsyncHelper(const Model::DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubscriptionAsyncHelper(const Model::DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDRTLogBucketAsyncHelper(const Model::DisassociateDRTLogBucketRequest& request, const DisassociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDRTRoleAsyncHelper(const Model::DisassociateDRTRoleRequest& request, const DisassociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSubscriptionStateAsyncHelper(const Model::GetSubscriptionStateRequest& request, const GetSubscriptionStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttacksAsyncHelper(const Model::ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProtectionsAsyncHelper(const Model::ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEmergencyContactSettingsAsyncHelper(const Model::UpdateEmergencyContactSettingsRequest& request, const UpdateEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSubscriptionAsyncHelper(const Model::UpdateSubscriptionRequest& request, const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Shield
} // namespace Aws
