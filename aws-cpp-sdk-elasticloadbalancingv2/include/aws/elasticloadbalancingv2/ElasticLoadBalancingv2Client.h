﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticloadbalancingv2/model/AddTagsResult.h>
#include <aws/elasticloadbalancingv2/model/CreateListenerResult.h>
#include <aws/elasticloadbalancingv2/model/CreateLoadBalancerResult.h>
#include <aws/elasticloadbalancingv2/model/CreateRuleResult.h>
#include <aws/elasticloadbalancingv2/model/CreateTargetGroupResult.h>
#include <aws/elasticloadbalancingv2/model/DeleteListenerResult.h>
#include <aws/elasticloadbalancingv2/model/DeleteLoadBalancerResult.h>
#include <aws/elasticloadbalancingv2/model/DeleteRuleResult.h>
#include <aws/elasticloadbalancingv2/model/DeleteTargetGroupResult.h>
#include <aws/elasticloadbalancingv2/model/DeregisterTargetsResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenersResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancerAttributesResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeRulesResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeSSLPoliciesResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeTagsResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupAttributesResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupsResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthResult.h>
#include <aws/elasticloadbalancingv2/model/ModifyListenerResult.h>
#include <aws/elasticloadbalancingv2/model/ModifyLoadBalancerAttributesResult.h>
#include <aws/elasticloadbalancingv2/model/ModifyRuleResult.h>
#include <aws/elasticloadbalancingv2/model/ModifyTargetGroupResult.h>
#include <aws/elasticloadbalancingv2/model/ModifyTargetGroupAttributesResult.h>
#include <aws/elasticloadbalancingv2/model/RegisterTargetsResult.h>
#include <aws/elasticloadbalancingv2/model/RemoveTagsResult.h>
#include <aws/elasticloadbalancingv2/model/SetRulePrioritiesResult.h>
#include <aws/elasticloadbalancingv2/model/SetSecurityGroupsResult.h>
#include <aws/elasticloadbalancingv2/model/SetSubnetsResult.h>
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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace ElasticLoadBalancingv2
{

namespace Model
{
        class AddTagsRequest;
        class CreateListenerRequest;
        class CreateLoadBalancerRequest;
        class CreateRuleRequest;
        class CreateTargetGroupRequest;
        class DeleteListenerRequest;
        class DeleteLoadBalancerRequest;
        class DeleteRuleRequest;
        class DeleteTargetGroupRequest;
        class DeregisterTargetsRequest;
        class DescribeListenersRequest;
        class DescribeLoadBalancerAttributesRequest;
        class DescribeLoadBalancersRequest;
        class DescribeRulesRequest;
        class DescribeSSLPoliciesRequest;
        class DescribeTagsRequest;
        class DescribeTargetGroupAttributesRequest;
        class DescribeTargetGroupsRequest;
        class DescribeTargetHealthRequest;
        class ModifyListenerRequest;
        class ModifyLoadBalancerAttributesRequest;
        class ModifyRuleRequest;
        class ModifyTargetGroupRequest;
        class ModifyTargetGroupAttributesRequest;
        class RegisterTargetsRequest;
        class RemoveTagsRequest;
        class SetRulePrioritiesRequest;
        class SetSecurityGroupsRequest;
        class SetSubnetsRequest;

        typedef Aws::Utils::Outcome<AddTagsResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CreateListenerResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> CreateListenerOutcome;
        typedef Aws::Utils::Outcome<CreateLoadBalancerResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> CreateLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<CreateRuleResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> CreateRuleOutcome;
        typedef Aws::Utils::Outcome<CreateTargetGroupResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> CreateTargetGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteListenerResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DeleteListenerOutcome;
        typedef Aws::Utils::Outcome<DeleteLoadBalancerResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DeleteLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<DeleteRuleResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DeleteRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteTargetGroupResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DeleteTargetGroupOutcome;
        typedef Aws::Utils::Outcome<DeregisterTargetsResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DeregisterTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeListenersResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DescribeListenersOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancerAttributesResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DescribeLoadBalancerAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancersResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DescribeLoadBalancersOutcome;
        typedef Aws::Utils::Outcome<DescribeRulesResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DescribeRulesOutcome;
        typedef Aws::Utils::Outcome<DescribeSSLPoliciesResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DescribeSSLPoliciesOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeTargetGroupAttributesResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DescribeTargetGroupAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeTargetGroupsResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DescribeTargetGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeTargetHealthResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> DescribeTargetHealthOutcome;
        typedef Aws::Utils::Outcome<ModifyListenerResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> ModifyListenerOutcome;
        typedef Aws::Utils::Outcome<ModifyLoadBalancerAttributesResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> ModifyLoadBalancerAttributesOutcome;
        typedef Aws::Utils::Outcome<ModifyRuleResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> ModifyRuleOutcome;
        typedef Aws::Utils::Outcome<ModifyTargetGroupResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> ModifyTargetGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyTargetGroupAttributesResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> ModifyTargetGroupAttributesOutcome;
        typedef Aws::Utils::Outcome<RegisterTargetsResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> RegisterTargetsOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<SetRulePrioritiesResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> SetRulePrioritiesOutcome;
        typedef Aws::Utils::Outcome<SetSecurityGroupsResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> SetSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<SetSubnetsResult, Aws::Client::AWSError<ElasticLoadBalancingv2Errors>> SetSubnetsOutcome;

        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
        typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
        typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
        typedef std::future<CreateTargetGroupOutcome> CreateTargetGroupOutcomeCallable;
        typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
        typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
        typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
        typedef std::future<DeleteTargetGroupOutcome> DeleteTargetGroupOutcomeCallable;
        typedef std::future<DeregisterTargetsOutcome> DeregisterTargetsOutcomeCallable;
        typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
        typedef std::future<DescribeLoadBalancerAttributesOutcome> DescribeLoadBalancerAttributesOutcomeCallable;
        typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
        typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
        typedef std::future<DescribeSSLPoliciesOutcome> DescribeSSLPoliciesOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DescribeTargetGroupAttributesOutcome> DescribeTargetGroupAttributesOutcomeCallable;
        typedef std::future<DescribeTargetGroupsOutcome> DescribeTargetGroupsOutcomeCallable;
        typedef std::future<DescribeTargetHealthOutcome> DescribeTargetHealthOutcomeCallable;
        typedef std::future<ModifyListenerOutcome> ModifyListenerOutcomeCallable;
        typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
        typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
        typedef std::future<ModifyTargetGroupOutcome> ModifyTargetGroupOutcomeCallable;
        typedef std::future<ModifyTargetGroupAttributesOutcome> ModifyTargetGroupAttributesOutcomeCallable;
        typedef std::future<RegisterTargetsOutcome> RegisterTargetsOutcomeCallable;
        typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
        typedef std::future<SetRulePrioritiesOutcome> SetRulePrioritiesOutcomeCallable;
        typedef std::future<SetSecurityGroupsOutcome> SetSecurityGroupsOutcomeCallable;
        typedef std::future<SetSubnetsOutcome> SetSubnetsOutcomeCallable;
} // namespace Model

  class ElasticLoadBalancingv2Client;

    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::CreateListenerRequest&, const Model::CreateListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateListenerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::CreateLoadBalancerRequest&, const Model::CreateLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::CreateTargetGroupRequest&, const Model::CreateTargetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTargetGroupResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DeleteListenerRequest&, const Model::DeleteListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteListenerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DeleteLoadBalancerRequest&, const Model::DeleteLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DeleteTargetGroupRequest&, const Model::DeleteTargetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTargetGroupResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DeregisterTargetsRequest&, const Model::DeregisterTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTargetsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeListenersRequest&, const Model::DescribeListenersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeListenersResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeLoadBalancerAttributesRequest&, const Model::DescribeLoadBalancerAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBalancerAttributesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeLoadBalancersRequest&, const Model::DescribeLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeRulesRequest&, const Model::DescribeRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRulesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeSSLPoliciesRequest&, const Model::DescribeSSLPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSSLPoliciesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeTargetGroupAttributesRequest&, const Model::DescribeTargetGroupAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTargetGroupAttributesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeTargetGroupsRequest&, const Model::DescribeTargetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTargetGroupsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeTargetHealthRequest&, const Model::DescribeTargetHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTargetHealthResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::ModifyListenerRequest&, const Model::ModifyListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyListenerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::ModifyLoadBalancerAttributesRequest&, const Model::ModifyLoadBalancerAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyLoadBalancerAttributesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::ModifyRuleRequest&, const Model::ModifyRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyRuleResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::ModifyTargetGroupRequest&, const Model::ModifyTargetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyTargetGroupResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::ModifyTargetGroupAttributesRequest&, const Model::ModifyTargetGroupAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyTargetGroupAttributesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::RegisterTargetsRequest&, const Model::RegisterTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTargetsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::SetRulePrioritiesRequest&, const Model::SetRulePrioritiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetRulePrioritiesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::SetSecurityGroupsRequest&, const Model::SetSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::SetSubnetsRequest&, const Model::SetSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSubnetsResponseReceivedHandler;

  /**
   * <fullname>Elastic Load Balancing</fullname> <p>A load balancer distributes
   * incoming traffic across targets, such as your EC2 instances. This enables you to
   * increase the availability of your application. The load balancer also monitors
   * the health of its registered targets and ensures that it routes traffic only to
   * healthy targets. You configure your load balancer to accept incoming traffic by
   * specifying one or more listeners, which are configured with a protocol and port
   * number for connections from clients to the load balancer. You configure a target
   * group with a protocol and port number for connections from the load balancer to
   * the targets, and with health check settings to be used when checking the health
   * status of the targets.</p> <p>Elastic Load Balancing supports two types of load
   * balancers: Classic Load Balancers and Application Load Balancers. A Classic Load
   * Balancer makes routing and load balancing decisions either at the transport
   * layer (TCP/SSL) or the application layer (HTTP/HTTPS), and supports either
   * EC2-Classic or a VPC. An Application Load Balancer makes routing and load
   * balancing decisions at the application layer (HTTP/HTTPS), supports path-based
   * routing, and can route requests to one or more ports on each EC2 instance or
   * container instance in your virtual private cloud (VPC). For more information,
   * see the <a
   * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic
   * Load Balancing User Guide</a>.</p> <p>This reference covers the 2015-12-01 API,
   * which supports Application Load Balancers. The 2012-06-01 API supports Classic
   * Load Balancers.</p> <p>To get started, complete the following tasks:</p> <ol>
   * <li> <p>Create an Application Load Balancer using <a>CreateLoadBalancer</a>.</p>
   * </li> <li> <p>Create a target group using <a>CreateTargetGroup</a>.</p> </li>
   * <li> <p>Register targets for the target group using <a>RegisterTargets</a>.</p>
   * </li> <li> <p>Create one or more listeners for your load balancer using
   * <a>CreateListener</a>.</p> </li> <li> <p>(Optional) Create one or more rules for
   * content routing based on URL using <a>CreateRule</a>.</p> </li> </ol> <p>To
   * delete an Application Load Balancer and its related resources, complete the
   * following tasks:</p> <ol> <li> <p>Delete the load balancer using
   * <a>DeleteLoadBalancer</a>.</p> </li> <li> <p>Delete the target group using
   * <a>DeleteTargetGroup</a>.</p> </li> </ol> <p>All Elastic Load Balancing
   * operations are idempotent, which means that they complete at most one time. If
   * you repeat an operation, it succeeds.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API ElasticLoadBalancingv2Client : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticLoadBalancingv2Client(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~ElasticLoadBalancingv2Client();

       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds the specified tags to the specified resource. You can tag your
         * Application Load Balancers and your target groups.</p> <p>Each tag consists of a
         * key and an optional value. If a resource already has a tag with the same key,
         * <code>AddTags</code> updates its value.</p> <p>To list the current tags for your
         * resources, use <a>DescribeTags</a>. To remove tags from your resources, use
         * <a>RemoveTags</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource. You can tag your
         * Application Load Balancers and your target groups.</p> <p>Each tag consists of a
         * key and an optional value. If a resource already has a tag with the same key,
         * <code>AddTags</code> updates its value.</p> <p>To list the current tags for your
         * resources, use <a>DescribeTags</a>. To remove tags from your resources, use
         * <a>RemoveTags</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource. You can tag your
         * Application Load Balancers and your target groups.</p> <p>Each tag consists of a
         * key and an optional value. If a resource already has a tag with the same key,
         * <code>AddTags</code> updates its value.</p> <p>To list the current tags for your
         * resources, use <a>DescribeTags</a>. To remove tags from your resources, use
         * <a>RemoveTags</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a listener for the specified Application Load Balancer.</p> <p>You
         * can create up to 10 listeners per load balancer.</p> <p>To update a listener,
         * use <a>ModifyListener</a>. When you are finished with a listener, you can delete
         * it using <a>DeleteListener</a>. If you are finished with both the listener and
         * the load balancer, you can delete them both using <a>DeleteLoadBalancer</a>.</p>
         * <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html">Listeners
         * for Your Application Load Balancers</a> in the <i>Application Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListenerOutcome CreateListener(const Model::CreateListenerRequest& request) const;

        /**
         * <p>Creates a listener for the specified Application Load Balancer.</p> <p>You
         * can create up to 10 listeners per load balancer.</p> <p>To update a listener,
         * use <a>ModifyListener</a>. When you are finished with a listener, you can delete
         * it using <a>DeleteListener</a>. If you are finished with both the listener and
         * the load balancer, you can delete them both using <a>DeleteLoadBalancer</a>.</p>
         * <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html">Listeners
         * for Your Application Load Balancers</a> in the <i>Application Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request) const;

        /**
         * <p>Creates a listener for the specified Application Load Balancer.</p> <p>You
         * can create up to 10 listeners per load balancer.</p> <p>To update a listener,
         * use <a>ModifyListener</a>. When you are finished with a listener, you can delete
         * it using <a>DeleteListener</a>. If you are finished with both the listener and
         * the load balancer, you can delete them both using <a>DeleteLoadBalancer</a>.</p>
         * <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html">Listeners
         * for Your Application Load Balancers</a> in the <i>Application Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Application Load Balancer.</p> <p>To create listeners for your
         * load balancer, use <a>CreateListener</a>. You can add security groups, subnets,
         * and tags when you create your load balancer, or you can add them later using
         * <a>SetSecurityGroups</a>, <a>SetSubnets</a>, and <a>AddTags</a>.</p> <p>To
         * describe your current load balancers, see <a>DescribeLoadBalancers</a>. When you
         * are finished with a load balancer, you can delete it using
         * <a>DeleteLoadBalancer</a>.</p> <p>You can create up to 20 load balancers per
         * region per account. You can request an increase for the number of load balancers
         * for your account. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Limits
         * for Your Application Load Balancer</a> in the <i>Application Load Balancers
         * Guide</i>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html">Application
         * Load Balancers</a> in the <i>Application Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * <p>Creates an Application Load Balancer.</p> <p>To create listeners for your
         * load balancer, use <a>CreateListener</a>. You can add security groups, subnets,
         * and tags when you create your load balancer, or you can add them later using
         * <a>SetSecurityGroups</a>, <a>SetSubnets</a>, and <a>AddTags</a>.</p> <p>To
         * describe your current load balancers, see <a>DescribeLoadBalancers</a>. When you
         * are finished with a load balancer, you can delete it using
         * <a>DeleteLoadBalancer</a>.</p> <p>You can create up to 20 load balancers per
         * region per account. You can request an increase for the number of load balancers
         * for your account. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Limits
         * for Your Application Load Balancer</a> in the <i>Application Load Balancers
         * Guide</i>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html">Application
         * Load Balancers</a> in the <i>Application Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * <p>Creates an Application Load Balancer.</p> <p>To create listeners for your
         * load balancer, use <a>CreateListener</a>. You can add security groups, subnets,
         * and tags when you create your load balancer, or you can add them later using
         * <a>SetSecurityGroups</a>, <a>SetSubnets</a>, and <a>AddTags</a>.</p> <p>To
         * describe your current load balancers, see <a>DescribeLoadBalancers</a>. When you
         * are finished with a load balancer, you can delete it using
         * <a>DeleteLoadBalancer</a>.</p> <p>You can create up to 20 load balancers per
         * region per account. You can request an increase for the number of load balancers
         * for your account. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Limits
         * for Your Application Load Balancer</a> in the <i>Application Load Balancers
         * Guide</i>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html">Application
         * Load Balancers</a> in the <i>Application Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a rule for the specified listener.</p> <p>Each rule can have one
         * action and one condition. Rules are evaluated in priority order, from the lowest
         * value to the highest value. When the condition for a rule is met, the specified
         * action is taken. If no conditions are met, the default action for the default
         * rule is taken. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#listener-rules">Listener
         * Rules</a> in the <i>Application Load Balancers Guide</i>.</p> <p>To view your
         * current rules, use <a>DescribeRules</a>. To update a rule, use
         * <a>ModifyRule</a>. To set the priorities of your rules, use
         * <a>SetRulePriorities</a>. To delete a rule, use <a>DeleteRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * <p>Creates a rule for the specified listener.</p> <p>Each rule can have one
         * action and one condition. Rules are evaluated in priority order, from the lowest
         * value to the highest value. When the condition for a rule is met, the specified
         * action is taken. If no conditions are met, the default action for the default
         * rule is taken. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#listener-rules">Listener
         * Rules</a> in the <i>Application Load Balancers Guide</i>.</p> <p>To view your
         * current rules, use <a>DescribeRules</a>. To update a rule, use
         * <a>ModifyRule</a>. To set the priorities of your rules, use
         * <a>SetRulePriorities</a>. To delete a rule, use <a>DeleteRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request) const;

        /**
         * <p>Creates a rule for the specified listener.</p> <p>Each rule can have one
         * action and one condition. Rules are evaluated in priority order, from the lowest
         * value to the highest value. When the condition for a rule is met, the specified
         * action is taken. If no conditions are met, the default action for the default
         * rule is taken. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#listener-rules">Listener
         * Rules</a> in the <i>Application Load Balancers Guide</i>.</p> <p>To view your
         * current rules, use <a>DescribeRules</a>. To update a rule, use
         * <a>ModifyRule</a>. To set the priorities of your rules, use
         * <a>SetRulePriorities</a>. To delete a rule, use <a>DeleteRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a target group.</p> <p>To register targets with the target group, use
         * <a>RegisterTargets</a>. To update the health check settings for the target
         * group, use <a>ModifyTargetGroup</a>. To monitor the health of targets in the
         * target group, use <a>DescribeTargetHealth</a>.</p> <p>To route traffic to the
         * targets in a target group, specify the target group in an action using
         * <a>CreateListener</a> or <a>CreateRule</a>.</p> <p>To delete a target group, use
         * <a>DeleteTargetGroup</a>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html">Target
         * Groups for Your Application Load Balancers</a> in the <i>Application Load
         * Balancers Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest& request) const;

        /**
         * <p>Creates a target group.</p> <p>To register targets with the target group, use
         * <a>RegisterTargets</a>. To update the health check settings for the target
         * group, use <a>ModifyTargetGroup</a>. To monitor the health of targets in the
         * target group, use <a>DescribeTargetHealth</a>.</p> <p>To route traffic to the
         * targets in a target group, specify the target group in an action using
         * <a>CreateListener</a> or <a>CreateRule</a>.</p> <p>To delete a target group, use
         * <a>DeleteTargetGroup</a>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html">Target
         * Groups for Your Application Load Balancers</a> in the <i>Application Load
         * Balancers Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateTargetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request) const;

        /**
         * <p>Creates a target group.</p> <p>To register targets with the target group, use
         * <a>RegisterTargets</a>. To update the health check settings for the target
         * group, use <a>ModifyTargetGroup</a>. To monitor the health of targets in the
         * target group, use <a>DescribeTargetHealth</a>.</p> <p>To route traffic to the
         * targets in a target group, specify the target group in an action using
         * <a>CreateListener</a> or <a>CreateRule</a>.</p> <p>To delete a target group, use
         * <a>DeleteTargetGroup</a>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html">Target
         * Groups for Your Application Load Balancers</a> in the <i>Application Load
         * Balancers Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateTargetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified listener.</p> <p>Alternatively, your listener is
         * deleted when you delete the load balancer it is attached to using
         * <a>DeleteLoadBalancer</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest& request) const;

        /**
         * <p>Deletes the specified listener.</p> <p>Alternatively, your listener is
         * deleted when you delete the load balancer it is attached to using
         * <a>DeleteLoadBalancer</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request) const;

        /**
         * <p>Deletes the specified listener.</p> <p>Alternatively, your listener is
         * deleted when you delete the load balancer it is attached to using
         * <a>DeleteLoadBalancer</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Application Load Balancer and its attached
         * listeners.</p> <p>You can't delete a load balancer if deletion protection is
         * enabled. If the load balancer does not exist or has already been deleted, the
         * call succeeds.</p> <p>Deleting a load balancer does not affect its registered
         * targets. For example, your EC2 instances continue to run and are still
         * registered to their target groups. If you no longer need these EC2 instances,
         * you can stop or terminate them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * <p>Deletes the specified Application Load Balancer and its attached
         * listeners.</p> <p>You can't delete a load balancer if deletion protection is
         * enabled. If the load balancer does not exist or has already been deleted, the
         * call succeeds.</p> <p>Deleting a load balancer does not affect its registered
         * targets. For example, your EC2 instances continue to run and are still
         * registered to their target groups. If you no longer need these EC2 instances,
         * you can stop or terminate them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * <p>Deletes the specified Application Load Balancer and its attached
         * listeners.</p> <p>You can't delete a load balancer if deletion protection is
         * enabled. If the load balancer does not exist or has already been deleted, the
         * call succeeds.</p> <p>Deleting a load balancer does not affect its registered
         * targets. For example, your EC2 instances continue to run and are still
         * registered to their target groups. If you no longer need these EC2 instances,
         * you can stop or terminate them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Deletes the specified rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Deletes the specified rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified target group.</p> <p>You can delete a target group if
         * it is not referenced by any actions. Deleting a target group also deletes any
         * associated health checks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTargetGroupOutcome DeleteTargetGroup(const Model::DeleteTargetGroupRequest& request) const;

        /**
         * <p>Deletes the specified target group.</p> <p>You can delete a target group if
         * it is not referenced by any actions. Deleting a target group also deletes any
         * associated health checks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteTargetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTargetGroupOutcomeCallable DeleteTargetGroupCallable(const Model::DeleteTargetGroupRequest& request) const;

        /**
         * <p>Deletes the specified target group.</p> <p>You can delete a target group if
         * it is not referenced by any actions. Deleting a target group also deletes any
         * associated health checks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteTargetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTargetGroupAsync(const Model::DeleteTargetGroupRequest& request, const DeleteTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified targets from the specified target group. After the
         * targets are deregistered, they no longer receive traffic from the load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeregisterTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTargetsOutcome DeregisterTargets(const Model::DeregisterTargetsRequest& request) const;

        /**
         * <p>Deregisters the specified targets from the specified target group. After the
         * targets are deregistered, they no longer receive traffic from the load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeregisterTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTargetsOutcomeCallable DeregisterTargetsCallable(const Model::DeregisterTargetsRequest& request) const;

        /**
         * <p>Deregisters the specified targets from the specified target group. After the
         * targets are deregistered, they no longer receive traffic from the load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeregisterTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTargetsAsync(const Model::DeregisterTargetsRequest& request, const DeregisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified listeners or the listeners for the specified
         * Application Load Balancer. You must specify either a load balancer or one or
         * more listeners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest& request) const;

        /**
         * <p>Describes the specified listeners or the listeners for the specified
         * Application Load Balancer. You must specify either a load balancer or one or
         * more listeners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListeners">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request) const;

        /**
         * <p>Describes the specified listeners or the listeners for the specified
         * Application Load Balancer. You must specify either a load balancer or one or
         * more listeners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListeners">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the attributes for the specified Application Load
         * Balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerAttributesOutcome DescribeLoadBalancerAttributes(const Model::DescribeLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified Application Load
         * Balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancerAttributesOutcomeCallable DescribeLoadBalancerAttributesCallable(const Model::DescribeLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified Application Load
         * Balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancerAttributesAsync(const Model::DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified Application Load Balancers or all of your Application
         * Load Balancers.</p> <p>To describe the listeners for a load balancer, use
         * <a>DescribeListeners</a>. To describe the attributes for a load balancer, use
         * <a>DescribeLoadBalancerAttributes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Describes the specified Application Load Balancers or all of your Application
         * Load Balancers.</p> <p>To describe the listeners for a load balancer, use
         * <a>DescribeListeners</a>. To describe the attributes for a load balancer, use
         * <a>DescribeLoadBalancerAttributes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Describes the specified Application Load Balancers or all of your Application
         * Load Balancers.</p> <p>To describe the listeners for a load balancer, use
         * <a>DescribeListeners</a>. To describe the attributes for a load balancer, use
         * <a>DescribeLoadBalancerAttributes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified rules or the rules for the specified listener. You
         * must specify either a listener or one or more rules.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest& request) const;

        /**
         * <p>Describes the specified rules or the rules for the specified listener. You
         * must specify either a listener or one or more rules.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request) const;

        /**
         * <p>Describes the specified rules or the rules for the specified listener. You
         * must specify either a listener or one or more rules.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified policies or all policies used for SSL
         * negotiation.</p> <p>Note that the only supported policy at this time is
         * ELBSecurityPolicy-2015-05.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeSSLPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSSLPoliciesOutcome DescribeSSLPolicies(const Model::DescribeSSLPoliciesRequest& request) const;

        /**
         * <p>Describes the specified policies or all policies used for SSL
         * negotiation.</p> <p>Note that the only supported policy at this time is
         * ELBSecurityPolicy-2015-05.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeSSLPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSSLPoliciesOutcomeCallable DescribeSSLPoliciesCallable(const Model::DescribeSSLPoliciesRequest& request) const;

        /**
         * <p>Describes the specified policies or all policies used for SSL
         * negotiation.</p> <p>Note that the only supported policy at this time is
         * ELBSecurityPolicy-2015-05.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeSSLPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSSLPoliciesAsync(const Model::DescribeSSLPoliciesRequest& request, const DescribeSSLPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the tags for the specified resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags for the specified resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags for the specified resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the attributes for the specified target group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetGroupAttributesOutcome DescribeTargetGroupAttributes(const Model::DescribeTargetGroupAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified target group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroupAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTargetGroupAttributesOutcomeCallable DescribeTargetGroupAttributesCallable(const Model::DescribeTargetGroupAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified target group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroupAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTargetGroupAttributesAsync(const Model::DescribeTargetGroupAttributesRequest& request, const DescribeTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified target groups or all of your target groups. By
         * default, all target groups are described. Alternatively, you can specify one of
         * the following to filter the results: the ARN of the load balancer, the names of
         * one or more target groups, or the ARNs of one or more target groups.</p> <p>To
         * describe the targets for a target group, use <a>DescribeTargetHealth</a>. To
         * describe the attributes of a target group, use
         * <a>DescribeTargetGroupAttributes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest& request) const;

        /**
         * <p>Describes the specified target groups or all of your target groups. By
         * default, all target groups are described. Alternatively, you can specify one of
         * the following to filter the results: the ARN of the load balancer, the names of
         * one or more target groups, or the ARNs of one or more target groups.</p> <p>To
         * describe the targets for a target group, use <a>DescribeTargetHealth</a>. To
         * describe the attributes of a target group, use
         * <a>DescribeTargetGroupAttributes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const Model::DescribeTargetGroupsRequest& request) const;

        /**
         * <p>Describes the specified target groups or all of your target groups. By
         * default, all target groups are described. Alternatively, you can specify one of
         * the following to filter the results: the ARN of the load balancer, the names of
         * one or more target groups, or the ARNs of one or more target groups.</p> <p>To
         * describe the targets for a target group, use <a>DescribeTargetHealth</a>. To
         * describe the attributes of a target group, use
         * <a>DescribeTargetGroupAttributes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTargetGroupsAsync(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the health of the specified targets or all of your
         * targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetHealthOutcome DescribeTargetHealth(const Model::DescribeTargetHealthRequest& request) const;

        /**
         * <p>Describes the health of the specified targets or all of your
         * targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetHealth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const Model::DescribeTargetHealthRequest& request) const;

        /**
         * <p>Describes the health of the specified targets or all of your
         * targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTargetHealthAsync(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified properties of the specified listener.</p> <p>Any
         * properties that you do not specify retain their current values. However,
         * changing the protocol from HTTPS to HTTP removes the security policy and SSL
         * certificate properties. If you change the protocol from HTTP to HTTPS, you must
         * add the security policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyListener">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest& request) const;

        /**
         * <p>Modifies the specified properties of the specified listener.</p> <p>Any
         * properties that you do not specify retain their current values. However,
         * changing the protocol from HTTPS to HTTP removes the security policy and SSL
         * certificate properties. If you change the protocol from HTTP to HTTPS, you must
         * add the security policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request) const;

        /**
         * <p>Modifies the specified properties of the specified listener.</p> <p>Any
         * properties that you do not specify retain their current values. However,
         * changing the protocol from HTTPS to HTTP removes the security policy and SSL
         * certificate properties. If you change the protocol from HTTP to HTTPS, you must
         * add the security policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attributes of the specified Application Load
         * Balancer.</p> <p>If any of the specified attributes can't be modified as
         * requested, the call fails. Any existing attributes that you do not modify retain
         * their current values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Modifies the specified attributes of the specified Application Load
         * Balancer.</p> <p>If any of the specified attributes can't be modified as
         * requested, the call fails. Any existing attributes that you do not modify retain
         * their current values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Modifies the specified attributes of the specified Application Load
         * Balancer.</p> <p>If any of the specified attributes can't be modified as
         * requested, the call fails. Any existing attributes that you do not modify retain
         * their current values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified rule.</p> <p>Any existing properties that you do not
         * modify retain their current values.</p> <p>To modify the default action, use
         * <a>ModifyListener</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest& request) const;

        /**
         * <p>Modifies the specified rule.</p> <p>Any existing properties that you do not
         * modify retain their current values.</p> <p>To modify the default action, use
         * <a>ModifyListener</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request) const;

        /**
         * <p>Modifies the specified rule.</p> <p>Any existing properties that you do not
         * modify retain their current values.</p> <p>To modify the default action, use
         * <a>ModifyListener</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the health checks used when evaluating the health state of the
         * targets in the specified target group.</p> <p>To monitor the health of the
         * targets, use <a>DescribeTargetHealth</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTargetGroupOutcome ModifyTargetGroup(const Model::ModifyTargetGroupRequest& request) const;

        /**
         * <p>Modifies the health checks used when evaluating the health state of the
         * targets in the specified target group.</p> <p>To monitor the health of the
         * targets, use <a>DescribeTargetHealth</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTargetGroupOutcomeCallable ModifyTargetGroupCallable(const Model::ModifyTargetGroupRequest& request) const;

        /**
         * <p>Modifies the health checks used when evaluating the health state of the
         * targets in the specified target group.</p> <p>To monitor the health of the
         * targets, use <a>DescribeTargetHealth</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTargetGroupAsync(const Model::ModifyTargetGroupRequest& request, const ModifyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attributes of the specified target
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTargetGroupAttributesOutcome ModifyTargetGroupAttributes(const Model::ModifyTargetGroupAttributesRequest& request) const;

        /**
         * <p>Modifies the specified attributes of the specified target
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroupAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTargetGroupAttributesOutcomeCallable ModifyTargetGroupAttributesCallable(const Model::ModifyTargetGroupAttributesRequest& request) const;

        /**
         * <p>Modifies the specified attributes of the specified target
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroupAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyTargetGroupAttributesAsync(const Model::ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers the specified targets with the specified target group.</p> <p>By
         * default, the load balancer routes requests to registered targets using the
         * protocol and port number for the target group. Alternatively, you can override
         * the port for a target when you register it.</p> <p>The target must be in the
         * virtual private cloud (VPC) that you specified for the target group. If the
         * target is an EC2 instance, it can't be in the <code>stopped</code> or
         * <code>running</code> state when you register it.</p> <p>To remove a target from
         * a target group, use <a>DeregisterTargets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RegisterTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTargetsOutcome RegisterTargets(const Model::RegisterTargetsRequest& request) const;

        /**
         * <p>Registers the specified targets with the specified target group.</p> <p>By
         * default, the load balancer routes requests to registered targets using the
         * protocol and port number for the target group. Alternatively, you can override
         * the port for a target when you register it.</p> <p>The target must be in the
         * virtual private cloud (VPC) that you specified for the target group. If the
         * target is an EC2 instance, it can't be in the <code>stopped</code> or
         * <code>running</code> state when you register it.</p> <p>To remove a target from
         * a target group, use <a>DeregisterTargets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RegisterTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTargetsOutcomeCallable RegisterTargetsCallable(const Model::RegisterTargetsRequest& request) const;

        /**
         * <p>Registers the specified targets with the specified target group.</p> <p>By
         * default, the load balancer routes requests to registered targets using the
         * protocol and port number for the target group. Alternatively, you can override
         * the port for a target when you register it.</p> <p>The target must be in the
         * virtual private cloud (VPC) that you specified for the target group. If the
         * target is an EC2 instance, it can't be in the <code>stopped</code> or
         * <code>running</code> state when you register it.</p> <p>To remove a target from
         * a target group, use <a>DeregisterTargets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RegisterTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTargetsAsync(const Model::RegisterTargetsRequest& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p> <p>To list the
         * current tags for your resources, use <a>DescribeTags</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p> <p>To list the
         * current tags for your resources, use <a>DescribeTags</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p> <p>To list the
         * current tags for your resources, use <a>DescribeTags</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the priorities of the specified rules.</p> <p>You can reorder the rules
         * as long as there are no priority conflicts in the new order. Any existing rules
         * that you do not specify retain their current priority.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetRulePriorities">AWS
         * API Reference</a></p>
         */
        virtual Model::SetRulePrioritiesOutcome SetRulePriorities(const Model::SetRulePrioritiesRequest& request) const;

        /**
         * <p>Sets the priorities of the specified rules.</p> <p>You can reorder the rules
         * as long as there are no priority conflicts in the new order. Any existing rules
         * that you do not specify retain their current priority.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetRulePriorities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetRulePrioritiesOutcomeCallable SetRulePrioritiesCallable(const Model::SetRulePrioritiesRequest& request) const;

        /**
         * <p>Sets the priorities of the specified rules.</p> <p>You can reorder the rules
         * as long as there are no priority conflicts in the new order. Any existing rules
         * that you do not specify retain their current priority.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetRulePriorities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetRulePrioritiesAsync(const Model::SetRulePrioritiesRequest& request, const SetRulePrioritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified security groups with the specified load balancer.
         * The specified security groups override the previously associated security
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSecurityGroupsOutcome SetSecurityGroups(const Model::SetSecurityGroupsRequest& request) const;

        /**
         * <p>Associates the specified security groups with the specified load balancer.
         * The specified security groups override the previously associated security
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSecurityGroupsOutcomeCallable SetSecurityGroupsCallable(const Model::SetSecurityGroupsRequest& request) const;

        /**
         * <p>Associates the specified security groups with the specified load balancer.
         * The specified security groups override the previously associated security
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSecurityGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSecurityGroupsAsync(const Model::SetSecurityGroupsRequest& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the Availability Zone for the specified subnets for the specified
         * load balancer. The specified subnets replace the previously enabled
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSubnetsOutcome SetSubnets(const Model::SetSubnetsRequest& request) const;

        /**
         * <p>Enables the Availability Zone for the specified subnets for the specified
         * load balancer. The specified subnets replace the previously enabled
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSubnets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSubnetsOutcomeCallable SetSubnetsCallable(const Model::SetSubnetsRequest& request) const;

        /**
         * <p>Enables the Availability Zone for the specified subnets for the specified
         * load balancer. The specified subnets replace the previously enabled
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSubnets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSubnetsAsync(const Model::SetSubnetsRequest& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateListenerAsyncHelper(const Model::CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoadBalancerAsyncHelper(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRuleAsyncHelper(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTargetGroupAsyncHelper(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteListenerAsyncHelper(const Model::DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoadBalancerAsyncHelper(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRuleAsyncHelper(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTargetGroupAsyncHelper(const Model::DeleteTargetGroupRequest& request, const DeleteTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterTargetsAsyncHelper(const Model::DeregisterTargetsRequest& request, const DeregisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeListenersAsyncHelper(const Model::DescribeListenersRequest& request, const DescribeListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBalancerAttributesAsyncHelper(const Model::DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBalancersAsyncHelper(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRulesAsyncHelper(const Model::DescribeRulesRequest& request, const DescribeRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSSLPoliciesAsyncHelper(const Model::DescribeSSLPoliciesRequest& request, const DescribeSSLPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTargetGroupAttributesAsyncHelper(const Model::DescribeTargetGroupAttributesRequest& request, const DescribeTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTargetGroupsAsyncHelper(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTargetHealthAsyncHelper(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyListenerAsyncHelper(const Model::ModifyListenerRequest& request, const ModifyListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyLoadBalancerAttributesAsyncHelper(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyRuleAsyncHelper(const Model::ModifyRuleRequest& request, const ModifyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyTargetGroupAsyncHelper(const Model::ModifyTargetGroupRequest& request, const ModifyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyTargetGroupAttributesAsyncHelper(const Model::ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterTargetsAsyncHelper(const Model::RegisterTargetsRequest& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetRulePrioritiesAsyncHelper(const Model::SetRulePrioritiesRequest& request, const SetRulePrioritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetSecurityGroupsAsyncHelper(const Model::SetSecurityGroupsRequest& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetSubnetsAsyncHelper(const Model::SetSubnetsRequest& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace ElasticLoadBalancingv2
} // namespace Aws
