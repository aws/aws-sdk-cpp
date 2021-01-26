/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/elasticloadbalancingv2/model/AddListenerCertificatesResult.h>
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
#include <aws/elasticloadbalancingv2/model/DescribeAccountLimitsResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenerCertificatesResult.h>
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
#include <aws/elasticloadbalancingv2/model/RemoveListenerCertificatesResult.h>
#include <aws/elasticloadbalancingv2/model/RemoveTagsResult.h>
#include <aws/elasticloadbalancingv2/model/SetIpAddressTypeResult.h>
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
        class AddListenerCertificatesRequest;
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
        class DescribeAccountLimitsRequest;
        class DescribeListenerCertificatesRequest;
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
        class RemoveListenerCertificatesRequest;
        class RemoveTagsRequest;
        class SetIpAddressTypeRequest;
        class SetRulePrioritiesRequest;
        class SetSecurityGroupsRequest;
        class SetSubnetsRequest;

        typedef Aws::Utils::Outcome<AddListenerCertificatesResult, ElasticLoadBalancingv2Error> AddListenerCertificatesOutcome;
        typedef Aws::Utils::Outcome<AddTagsResult, ElasticLoadBalancingv2Error> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CreateListenerResult, ElasticLoadBalancingv2Error> CreateListenerOutcome;
        typedef Aws::Utils::Outcome<CreateLoadBalancerResult, ElasticLoadBalancingv2Error> CreateLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<CreateRuleResult, ElasticLoadBalancingv2Error> CreateRuleOutcome;
        typedef Aws::Utils::Outcome<CreateTargetGroupResult, ElasticLoadBalancingv2Error> CreateTargetGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteListenerResult, ElasticLoadBalancingv2Error> DeleteListenerOutcome;
        typedef Aws::Utils::Outcome<DeleteLoadBalancerResult, ElasticLoadBalancingv2Error> DeleteLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<DeleteRuleResult, ElasticLoadBalancingv2Error> DeleteRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteTargetGroupResult, ElasticLoadBalancingv2Error> DeleteTargetGroupOutcome;
        typedef Aws::Utils::Outcome<DeregisterTargetsResult, ElasticLoadBalancingv2Error> DeregisterTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, ElasticLoadBalancingv2Error> DescribeAccountLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeListenerCertificatesResult, ElasticLoadBalancingv2Error> DescribeListenerCertificatesOutcome;
        typedef Aws::Utils::Outcome<DescribeListenersResult, ElasticLoadBalancingv2Error> DescribeListenersOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancerAttributesResult, ElasticLoadBalancingv2Error> DescribeLoadBalancerAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancersResult, ElasticLoadBalancingv2Error> DescribeLoadBalancersOutcome;
        typedef Aws::Utils::Outcome<DescribeRulesResult, ElasticLoadBalancingv2Error> DescribeRulesOutcome;
        typedef Aws::Utils::Outcome<DescribeSSLPoliciesResult, ElasticLoadBalancingv2Error> DescribeSSLPoliciesOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, ElasticLoadBalancingv2Error> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeTargetGroupAttributesResult, ElasticLoadBalancingv2Error> DescribeTargetGroupAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeTargetGroupsResult, ElasticLoadBalancingv2Error> DescribeTargetGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeTargetHealthResult, ElasticLoadBalancingv2Error> DescribeTargetHealthOutcome;
        typedef Aws::Utils::Outcome<ModifyListenerResult, ElasticLoadBalancingv2Error> ModifyListenerOutcome;
        typedef Aws::Utils::Outcome<ModifyLoadBalancerAttributesResult, ElasticLoadBalancingv2Error> ModifyLoadBalancerAttributesOutcome;
        typedef Aws::Utils::Outcome<ModifyRuleResult, ElasticLoadBalancingv2Error> ModifyRuleOutcome;
        typedef Aws::Utils::Outcome<ModifyTargetGroupResult, ElasticLoadBalancingv2Error> ModifyTargetGroupOutcome;
        typedef Aws::Utils::Outcome<ModifyTargetGroupAttributesResult, ElasticLoadBalancingv2Error> ModifyTargetGroupAttributesOutcome;
        typedef Aws::Utils::Outcome<RegisterTargetsResult, ElasticLoadBalancingv2Error> RegisterTargetsOutcome;
        typedef Aws::Utils::Outcome<RemoveListenerCertificatesResult, ElasticLoadBalancingv2Error> RemoveListenerCertificatesOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsResult, ElasticLoadBalancingv2Error> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<SetIpAddressTypeResult, ElasticLoadBalancingv2Error> SetIpAddressTypeOutcome;
        typedef Aws::Utils::Outcome<SetRulePrioritiesResult, ElasticLoadBalancingv2Error> SetRulePrioritiesOutcome;
        typedef Aws::Utils::Outcome<SetSecurityGroupsResult, ElasticLoadBalancingv2Error> SetSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<SetSubnetsResult, ElasticLoadBalancingv2Error> SetSubnetsOutcome;

        typedef std::future<AddListenerCertificatesOutcome> AddListenerCertificatesOutcomeCallable;
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
        typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
        typedef std::future<DescribeListenerCertificatesOutcome> DescribeListenerCertificatesOutcomeCallable;
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
        typedef std::future<RemoveListenerCertificatesOutcome> RemoveListenerCertificatesOutcomeCallable;
        typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
        typedef std::future<SetIpAddressTypeOutcome> SetIpAddressTypeOutcomeCallable;
        typedef std::future<SetRulePrioritiesOutcome> SetRulePrioritiesOutcomeCallable;
        typedef std::future<SetSecurityGroupsOutcome> SetSecurityGroupsOutcomeCallable;
        typedef std::future<SetSubnetsOutcome> SetSubnetsOutcomeCallable;
} // namespace Model

  class ElasticLoadBalancingv2Client;

    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::AddListenerCertificatesRequest&, const Model::AddListenerCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddListenerCertificatesResponseReceivedHandler;
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
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::DescribeListenerCertificatesRequest&, const Model::DescribeListenerCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeListenerCertificatesResponseReceivedHandler;
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
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::RemoveListenerCertificatesRequest&, const Model::RemoveListenerCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveListenerCertificatesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingv2Client*, const Model::SetIpAddressTypeRequest&, const Model::SetIpAddressTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIpAddressTypeResponseReceivedHandler;
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
   * status of the targets.</p> <p>Elastic Load Balancing supports the following
   * types of load balancers: Application Load Balancers, Network Load Balancers,
   * Gateway Load Balancers, and Classic Load Balancers. This reference covers the
   * following load balancer types:</p> <ul> <li> <p>Application Load Balancer -
   * Operates at the application layer (layer 7) and supports HTTP and HTTPS.</p>
   * </li> <li> <p>Network Load Balancer - Operates at the transport layer (layer 4)
   * and supports TCP, TLS, and UDP.</p> </li> <li> <p>Gateway Load Balancer -
   * Operates at the network layer (layer 3).</p> </li> </ul> <p>For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic
   * Load Balancing User Guide</a>.</p> <p>All Elastic Load Balancing operations are
   * idempotent, which means that they complete at most one time. If you repeat an
   * operation, it succeeds.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API ElasticLoadBalancingv2Client : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingv2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticLoadBalancingv2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ElasticLoadBalancingv2Client();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds the specified SSL server certificate to the certificate list for the
         * specified HTTPS or TLS listener.</p> <p>If the certificate in already in the
         * certificate list, the call is successful but the certificate is not added
         * again.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html">HTTPS
         * listeners</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
         * listeners</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddListenerCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::AddListenerCertificatesOutcome AddListenerCertificates(const Model::AddListenerCertificatesRequest& request) const;

        /**
         * <p>Adds the specified SSL server certificate to the certificate list for the
         * specified HTTPS or TLS listener.</p> <p>If the certificate in already in the
         * certificate list, the call is successful but the certificate is not added
         * again.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html">HTTPS
         * listeners</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
         * listeners</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddListenerCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddListenerCertificatesOutcomeCallable AddListenerCertificatesCallable(const Model::AddListenerCertificatesRequest& request) const;

        /**
         * <p>Adds the specified SSL server certificate to the certificate list for the
         * specified HTTPS or TLS listener.</p> <p>If the certificate in already in the
         * certificate list, the call is successful but the certificate is not added
         * again.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html">HTTPS
         * listeners</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS
         * listeners</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddListenerCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddListenerCertificatesAsync(const Model::AddListenerCertificatesRequest& request, const AddListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified Elastic Load Balancing resource. You
         * can tag your Application Load Balancers, Network Load Balancers, Gateway Load
         * Balancers, target groups, listeners, and rules.</p> <p>Each tag consists of a
         * key and an optional value. If a resource already has a tag with the same key,
         * <code>AddTags</code> updates its value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified Elastic Load Balancing resource. You
         * can tag your Application Load Balancers, Network Load Balancers, Gateway Load
         * Balancers, target groups, listeners, and rules.</p> <p>Each tag consists of a
         * key and an optional value. If a resource already has a tag with the same key,
         * <code>AddTags</code> updates its value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified Elastic Load Balancing resource. You
         * can tag your Application Load Balancers, Network Load Balancers, Gateway Load
         * Balancers, target groups, listeners, and rules.</p> <p>Each tag consists of a
         * key and an optional value. If a resource already has a tag with the same key,
         * <code>AddTags</code> updates its value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a listener for the specified Application Load Balancer, Network Load
         * Balancer. or Gateway Load Balancer.</p> <p>For more information, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html">Listeners
         * for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-listeners.html">Listeners
         * for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-listeners.html">Listeners
         * for your Gateway Load Balancers</a> </p> </li> </ul> <p>This operation is
         * idempotent, which means that it completes at most one time. If you attempt to
         * create multiple listeners with the same settings, each call
         * succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListenerOutcome CreateListener(const Model::CreateListenerRequest& request) const;

        /**
         * <p>Creates a listener for the specified Application Load Balancer, Network Load
         * Balancer. or Gateway Load Balancer.</p> <p>For more information, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html">Listeners
         * for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-listeners.html">Listeners
         * for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-listeners.html">Listeners
         * for your Gateway Load Balancers</a> </p> </li> </ul> <p>This operation is
         * idempotent, which means that it completes at most one time. If you attempt to
         * create multiple listeners with the same settings, each call
         * succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request) const;

        /**
         * <p>Creates a listener for the specified Application Load Balancer, Network Load
         * Balancer. or Gateway Load Balancer.</p> <p>For more information, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html">Listeners
         * for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-listeners.html">Listeners
         * for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-listeners.html">Listeners
         * for your Gateway Load Balancers</a> </p> </li> </ul> <p>This operation is
         * idempotent, which means that it completes at most one time. If you attempt to
         * create multiple listeners with the same settings, each call
         * succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Application Load Balancer, Network Load Balancer, or Gateway Load
         * Balancer.</p> <p>For more information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html">Application
         * Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html">Network
         * Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-load-balancers.html">Gateway
         * Load Balancers</a> </p> </li> </ul> <p>This operation is idempotent, which means
         * that it completes at most one time. If you attempt to create multiple load
         * balancers with the same settings, each call succeeds.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * <p>Creates an Application Load Balancer, Network Load Balancer, or Gateway Load
         * Balancer.</p> <p>For more information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html">Application
         * Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html">Network
         * Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-load-balancers.html">Gateway
         * Load Balancers</a> </p> </li> </ul> <p>This operation is idempotent, which means
         * that it completes at most one time. If you attempt to create multiple load
         * balancers with the same settings, each call succeeds.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * <p>Creates an Application Load Balancer, Network Load Balancer, or Gateway Load
         * Balancer.</p> <p>For more information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html">Application
         * Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html">Network
         * Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-load-balancers.html">Gateway
         * Load Balancers</a> </p> </li> </ul> <p>This operation is idempotent, which means
         * that it completes at most one time. If you attempt to create multiple load
         * balancers with the same settings, each call succeeds.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a rule for the specified listener. The listener must be associated
         * with an Application Load Balancer.</p> <p>Each rule consists of a priority, one
         * or more actions, and one or more conditions. Rules are evaluated in priority
         * order, from the lowest value to the highest value. When the conditions for a
         * rule are met, its actions are performed. If the conditions for no rules are met,
         * the actions for the default rule are performed. For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#listener-rules">Listener
         * rules</a> in the <i>Application Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * <p>Creates a rule for the specified listener. The listener must be associated
         * with an Application Load Balancer.</p> <p>Each rule consists of a priority, one
         * or more actions, and one or more conditions. Rules are evaluated in priority
         * order, from the lowest value to the highest value. When the conditions for a
         * rule are met, its actions are performed. If the conditions for no rules are met,
         * the actions for the default rule are performed. For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#listener-rules">Listener
         * rules</a> in the <i>Application Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request) const;

        /**
         * <p>Creates a rule for the specified listener. The listener must be associated
         * with an Application Load Balancer.</p> <p>Each rule consists of a priority, one
         * or more actions, and one or more conditions. Rules are evaluated in priority
         * order, from the lowest value to the highest value. When the conditions for a
         * rule are met, its actions are performed. If the conditions for no rules are met,
         * the actions for the default rule are performed. For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#listener-rules">Listener
         * rules</a> in the <i>Application Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a target group.</p> <p>For more information, see the following:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html">Target
         * groups for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html">Target
         * groups for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/target-groups.html">Target
         * groups for your Gateway Load Balancers</a> </p> </li> </ul> <p>This operation is
         * idempotent, which means that it completes at most one time. If you attempt to
         * create multiple target groups with the same settings, each call
         * succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest& request) const;

        /**
         * <p>Creates a target group.</p> <p>For more information, see the following:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html">Target
         * groups for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html">Target
         * groups for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/target-groups.html">Target
         * groups for your Gateway Load Balancers</a> </p> </li> </ul> <p>This operation is
         * idempotent, which means that it completes at most one time. If you attempt to
         * create multiple target groups with the same settings, each call
         * succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateTargetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request) const;

        /**
         * <p>Creates a target group.</p> <p>For more information, see the following:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html">Target
         * groups for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html">Target
         * groups for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/target-groups.html">Target
         * groups for your Gateway Load Balancers</a> </p> </li> </ul> <p>This operation is
         * idempotent, which means that it completes at most one time. If you attempt to
         * create multiple target groups with the same settings, each call
         * succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CreateTargetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified listener.</p> <p>Alternatively, your listener is
         * deleted when you delete the load balancer to which it is attached.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest& request) const;

        /**
         * <p>Deletes the specified listener.</p> <p>Alternatively, your listener is
         * deleted when you delete the load balancer to which it is attached.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request) const;

        /**
         * <p>Deletes the specified listener.</p> <p>Alternatively, your listener is
         * deleted when you delete the load balancer to which it is attached.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Application Load Balancer, Network Load Balancer, or
         * Gateway Load Balancer. Deleting a load balancer also deletes its listeners.</p>
         * <p>You can't delete a load balancer if deletion protection is enabled. If the
         * load balancer does not exist or has already been deleted, the call succeeds.</p>
         * <p>Deleting a load balancer does not affect its registered targets. For example,
         * your EC2 instances continue to run and are still registered to their target
         * groups. If you no longer need these EC2 instances, you can stop or terminate
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * <p>Deletes the specified Application Load Balancer, Network Load Balancer, or
         * Gateway Load Balancer. Deleting a load balancer also deletes its listeners.</p>
         * <p>You can't delete a load balancer if deletion protection is enabled. If the
         * load balancer does not exist or has already been deleted, the call succeeds.</p>
         * <p>Deleting a load balancer does not affect its registered targets. For example,
         * your EC2 instances continue to run and are still registered to their target
         * groups. If you no longer need these EC2 instances, you can stop or terminate
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * <p>Deletes the specified Application Load Balancer, Network Load Balancer, or
         * Gateway Load Balancer. Deleting a load balancer also deletes its listeners.</p>
         * <p>You can't delete a load balancer if deletion protection is enabled. If the
         * load balancer does not exist or has already been deleted, the call succeeds.</p>
         * <p>Deleting a load balancer does not affect its registered targets. For example,
         * your EC2 instances continue to run and are still registered to their target
         * groups. If you no longer need these EC2 instances, you can stop or terminate
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified rule.</p> <p>You can't delete the default
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Deletes the specified rule.</p> <p>You can't delete the default
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Deletes the specified rule.</p> <p>You can't delete the default
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified target group.</p> <p>You can delete a target group if
         * it is not referenced by any actions. Deleting a target group also deletes any
         * associated health checks. Deleting a target group does not affect its registered
         * targets. For example, any EC2 instances continue to run until you stop or
         * terminate them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTargetGroupOutcome DeleteTargetGroup(const Model::DeleteTargetGroupRequest& request) const;

        /**
         * <p>Deletes the specified target group.</p> <p>You can delete a target group if
         * it is not referenced by any actions. Deleting a target group also deletes any
         * associated health checks. Deleting a target group does not affect its registered
         * targets. For example, any EC2 instances continue to run until you stop or
         * terminate them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DeleteTargetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTargetGroupOutcomeCallable DeleteTargetGroupCallable(const Model::DeleteTargetGroupRequest& request) const;

        /**
         * <p>Deletes the specified target group.</p> <p>You can delete a target group if
         * it is not referenced by any actions. Deleting a target group also deletes any
         * associated health checks. Deleting a target group does not affect its registered
         * targets. For example, any EC2 instances continue to run until you stop or
         * terminate them.</p><p><h3>See Also:</h3>   <a
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
         * <p>Describes the current Elastic Load Balancing resource limits for your AWS
         * account.</p> <p>For more information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Quotas
         * for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-limits.html">Quotas
         * for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/quotas-limits.html">Quotas
         * for your Gateway Load Balancers</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Elastic Load Balancing resource limits for your AWS
         * account.</p> <p>For more information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Quotas
         * for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-limits.html">Quotas
         * for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/quotas-limits.html">Quotas
         * for your Gateway Load Balancers</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Elastic Load Balancing resource limits for your AWS
         * account.</p> <p>For more information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Quotas
         * for your Application Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-limits.html">Quotas
         * for your Network Load Balancers</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/quotas-limits.html">Quotas
         * for your Gateway Load Balancers</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the default certificate and the certificate list for the specified
         * HTTPS or TLS listener.</p> <p>If the default certificate is also in the
         * certificate list, it appears twice in the results (once with
         * <code>IsDefault</code> set to true and once with <code>IsDefault</code> set to
         * false).</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#https-listener-certificates">SSL
         * certificates</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#tls-listener-certificate">Server
         * certificates</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListenerCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeListenerCertificatesOutcome DescribeListenerCertificates(const Model::DescribeListenerCertificatesRequest& request) const;

        /**
         * <p>Describes the default certificate and the certificate list for the specified
         * HTTPS or TLS listener.</p> <p>If the default certificate is also in the
         * certificate list, it appears twice in the results (once with
         * <code>IsDefault</code> set to true and once with <code>IsDefault</code> set to
         * false).</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#https-listener-certificates">SSL
         * certificates</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#tls-listener-certificate">Server
         * certificates</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListenerCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeListenerCertificatesOutcomeCallable DescribeListenerCertificatesCallable(const Model::DescribeListenerCertificatesRequest& request) const;

        /**
         * <p>Describes the default certificate and the certificate list for the specified
         * HTTPS or TLS listener.</p> <p>If the default certificate is also in the
         * certificate list, it appears twice in the results (once with
         * <code>IsDefault</code> set to true and once with <code>IsDefault</code> set to
         * false).</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#https-listener-certificates">SSL
         * certificates</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#tls-listener-certificate">Server
         * certificates</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListenerCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeListenerCertificatesAsync(const Model::DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified listeners or the listeners for the specified
         * Application Load Balancer, Network Load Balancer, or Gateway Load Balancer. You
         * must specify either a load balancer or one or more listeners.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest& request) const;

        /**
         * <p>Describes the specified listeners or the listeners for the specified
         * Application Load Balancer, Network Load Balancer, or Gateway Load Balancer. You
         * must specify either a load balancer or one or more listeners.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListeners">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request) const;

        /**
         * <p>Describes the specified listeners or the listeners for the specified
         * Application Load Balancer, Network Load Balancer, or Gateway Load Balancer. You
         * must specify either a load balancer or one or more listeners.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeListeners">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the attributes for the specified Application Load Balancer, Network
         * Load Balancer, or Gateway Load Balancer.</p> <p>For more information, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Application Load Balancers Guide</i> </p>
         * </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Network Load Balancers Guide</i> </p> </li>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Gateway Load Balancers Guide</i> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerAttributesOutcome DescribeLoadBalancerAttributes(const Model::DescribeLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified Application Load Balancer, Network
         * Load Balancer, or Gateway Load Balancer.</p> <p>For more information, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Application Load Balancers Guide</i> </p>
         * </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Network Load Balancers Guide</i> </p> </li>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Gateway Load Balancers Guide</i> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancerAttributesOutcomeCallable DescribeLoadBalancerAttributesCallable(const Model::DescribeLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified Application Load Balancer, Network
         * Load Balancer, or Gateway Load Balancer.</p> <p>For more information, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Application Load Balancers Guide</i> </p>
         * </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Network Load Balancers Guide</i> </p> </li>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/gateway-load-balancers.html#load-balancer-attributes">Load
         * balancer attributes</a> in the <i>Gateway Load Balancers Guide</i> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancerAttributesAsync(const Model::DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified load balancers or all of your load
         * balancers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Describes the specified load balancers or all of your load
         * balancers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Describes the specified load balancers or all of your load
         * balancers.</p><p><h3>See Also:</h3>   <a
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
         * negotiation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
         * policies</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
         * policies</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeSSLPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSSLPoliciesOutcome DescribeSSLPolicies(const Model::DescribeSSLPoliciesRequest& request) const;

        /**
         * <p>Describes the specified policies or all policies used for SSL
         * negotiation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
         * policies</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
         * policies</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeSSLPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSSLPoliciesOutcomeCallable DescribeSSLPoliciesCallable(const Model::DescribeSSLPoliciesRequest& request) const;

        /**
         * <p>Describes the specified policies or all policies used for SSL
         * negotiation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
         * policies</a> in the <i>Application Load Balancers Guide</i> or <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
         * policies</a> in the <i>Network Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeSSLPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSSLPoliciesAsync(const Model::DescribeSSLPoliciesRequest& request, const DescribeSSLPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the tags for the specified Elastic Load Balancing resources. You
         * can describe the tags for one or more Application Load Balancers, Network Load
         * Balancers, Gateway Load Balancers, target groups, listeners, or
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags for the specified Elastic Load Balancing resources. You
         * can describe the tags for one or more Application Load Balancers, Network Load
         * Balancers, Gateway Load Balancers, target groups, listeners, or
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags for the specified Elastic Load Balancing resources. You
         * can describe the tags for one or more Application Load Balancers, Network Load
         * Balancers, Gateway Load Balancers, target groups, listeners, or
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the attributes for the specified target group.</p> <p>For more
         * information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Application Load Balancers Guide</i> </p> </li>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Network Load Balancers Guide</i> </p> </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Gateway Load Balancers Guide</i> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetGroupAttributesOutcome DescribeTargetGroupAttributes(const Model::DescribeTargetGroupAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified target group.</p> <p>For more
         * information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Application Load Balancers Guide</i> </p> </li>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Network Load Balancers Guide</i> </p> </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Gateway Load Balancers Guide</i> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroupAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTargetGroupAttributesOutcomeCallable DescribeTargetGroupAttributesCallable(const Model::DescribeTargetGroupAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified target group.</p> <p>For more
         * information, see the following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Application Load Balancers Guide</i> </p> </li>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Network Load Balancers Guide</i> </p> </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/target-groups.html#target-group-attributes">Target
         * group attributes</a> in the <i>Gateway Load Balancers Guide</i> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
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
         * one or more target groups, or the ARNs of one or more target
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest& request) const;

        /**
         * <p>Describes the specified target groups or all of your target groups. By
         * default, all target groups are described. Alternatively, you can specify one of
         * the following to filter the results: the ARN of the load balancer, the names of
         * one or more target groups, or the ARNs of one or more target
         * groups.</p><p><h3>See Also:</h3>   <a
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
         * one or more target groups, or the ARNs of one or more target
         * groups.</p><p><h3>See Also:</h3>   <a
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
         * <p>Replaces the specified properties of the specified listener. Any properties
         * that you do not specify remain unchanged.</p> <p>Changing the protocol from
         * HTTPS to HTTP, or from TLS to TCP, removes the security policy and default
         * certificate properties. If you change the protocol from HTTP to HTTPS, or from
         * TCP to TLS, you must add the security policy and default certificate
         * properties.</p> <p>To add an item to a list, remove an item from a list, or
         * update an item in a list, you must provide the entire list. For example, to add
         * an action, specify a list with the current actions plus the new
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyListener">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest& request) const;

        /**
         * <p>Replaces the specified properties of the specified listener. Any properties
         * that you do not specify remain unchanged.</p> <p>Changing the protocol from
         * HTTPS to HTTP, or from TLS to TCP, removes the security policy and default
         * certificate properties. If you change the protocol from HTTP to HTTPS, or from
         * TCP to TLS, you must add the security policy and default certificate
         * properties.</p> <p>To add an item to a list, remove an item from a list, or
         * update an item in a list, you must provide the entire list. For example, to add
         * an action, specify a list with the current actions plus the new
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request) const;

        /**
         * <p>Replaces the specified properties of the specified listener. Any properties
         * that you do not specify remain unchanged.</p> <p>Changing the protocol from
         * HTTPS to HTTP, or from TLS to TCP, removes the security policy and default
         * certificate properties. If you change the protocol from HTTP to HTTPS, or from
         * TCP to TLS, you must add the security policy and default certificate
         * properties.</p> <p>To add an item to a list, remove an item from a list, or
         * update an item in a list, you must provide the entire list. For example, to add
         * an action, specify a list with the current actions plus the new
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attributes of the specified Application Load Balancer,
         * Network Load Balancer, or Gateway Load Balancer.</p> <p>If any of the specified
         * attributes can't be modified as requested, the call fails. Any existing
         * attributes that you do not modify retain their current values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Modifies the specified attributes of the specified Application Load Balancer,
         * Network Load Balancer, or Gateway Load Balancer.</p> <p>If any of the specified
         * attributes can't be modified as requested, the call fails. Any existing
         * attributes that you do not modify retain their current values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Modifies the specified attributes of the specified Application Load Balancer,
         * Network Load Balancer, or Gateway Load Balancer.</p> <p>If any of the specified
         * attributes can't be modified as requested, the call fails. Any existing
         * attributes that you do not modify retain their current values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the specified properties of the specified rule. Any properties that
         * you do not specify are unchanged.</p> <p>To add an item to a list, remove an
         * item from a list, or update an item in a list, you must provide the entire list.
         * For example, to add an action, specify a list with the current actions plus the
         * new action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest& request) const;

        /**
         * <p>Replaces the specified properties of the specified rule. Any properties that
         * you do not specify are unchanged.</p> <p>To add an item to a list, remove an
         * item from a list, or update an item in a list, you must provide the entire list.
         * For example, to add an action, specify a list with the current actions plus the
         * new action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request) const;

        /**
         * <p>Replaces the specified properties of the specified rule. Any properties that
         * you do not specify are unchanged.</p> <p>To add an item to a list, remove an
         * item from a list, or update an item in a list, you must provide the entire list.
         * For example, to add an action, specify a list with the current actions plus the
         * new action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the health checks used when evaluating the health state of the
         * targets in the specified target group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyTargetGroupOutcome ModifyTargetGroup(const Model::ModifyTargetGroupRequest& request) const;

        /**
         * <p>Modifies the health checks used when evaluating the health state of the
         * targets in the specified target group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ModifyTargetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyTargetGroupOutcomeCallable ModifyTargetGroupCallable(const Model::ModifyTargetGroupRequest& request) const;

        /**
         * <p>Modifies the health checks used when evaluating the health state of the
         * targets in the specified target group.</p><p><h3>See Also:</h3>   <a
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
         * <p>Registers the specified targets with the specified target group.</p> <p>If
         * the target is an EC2 instance, it must be in the <code>running</code> state when
         * you register it.</p> <p>By default, the load balancer routes requests to
         * registered targets using the protocol and port for the target group.
         * Alternatively, you can override the port for a target when you register it. You
         * can register each EC2 instance or IP address with the same target group multiple
         * times using different ports.</p> <p>With a Network Load Balancer, you cannot
         * register instances by instance ID if they have the following instance types: C1,
         * CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and T1. You can
         * register instances of these types by IP address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RegisterTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTargetsOutcome RegisterTargets(const Model::RegisterTargetsRequest& request) const;

        /**
         * <p>Registers the specified targets with the specified target group.</p> <p>If
         * the target is an EC2 instance, it must be in the <code>running</code> state when
         * you register it.</p> <p>By default, the load balancer routes requests to
         * registered targets using the protocol and port for the target group.
         * Alternatively, you can override the port for a target when you register it. You
         * can register each EC2 instance or IP address with the same target group multiple
         * times using different ports.</p> <p>With a Network Load Balancer, you cannot
         * register instances by instance ID if they have the following instance types: C1,
         * CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and T1. You can
         * register instances of these types by IP address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RegisterTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTargetsOutcomeCallable RegisterTargetsCallable(const Model::RegisterTargetsRequest& request) const;

        /**
         * <p>Registers the specified targets with the specified target group.</p> <p>If
         * the target is an EC2 instance, it must be in the <code>running</code> state when
         * you register it.</p> <p>By default, the load balancer routes requests to
         * registered targets using the protocol and port for the target group.
         * Alternatively, you can override the port for a target when you register it. You
         * can register each EC2 instance or IP address with the same target group multiple
         * times using different ports.</p> <p>With a Network Load Balancer, you cannot
         * register instances by instance ID if they have the following instance types: C1,
         * CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and T1. You can
         * register instances of these types by IP address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RegisterTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTargetsAsync(const Model::RegisterTargetsRequest& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified certificate from the certificate list for the specified
         * HTTPS or TLS listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveListenerCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveListenerCertificatesOutcome RemoveListenerCertificates(const Model::RemoveListenerCertificatesRequest& request) const;

        /**
         * <p>Removes the specified certificate from the certificate list for the specified
         * HTTPS or TLS listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveListenerCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveListenerCertificatesOutcomeCallable RemoveListenerCertificatesCallable(const Model::RemoveListenerCertificatesRequest& request) const;

        /**
         * <p>Removes the specified certificate from the certificate list for the specified
         * HTTPS or TLS listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveListenerCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveListenerCertificatesAsync(const Model::RemoveListenerCertificatesRequest& request, const RemoveListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified Elastic Load Balancing
         * resources. You can remove the tags for one or more Application Load Balancers,
         * Network Load Balancers, Gateway Load Balancers, target groups, listeners, or
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified Elastic Load Balancing
         * resources. You can remove the tags for one or more Application Load Balancers,
         * Network Load Balancers, Gateway Load Balancers, target groups, listeners, or
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified Elastic Load Balancing
         * resources. You can remove the tags for one or more Application Load Balancers,
         * Network Load Balancers, Gateway Load Balancers, target groups, listeners, or
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RemoveTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the type of IP addresses used by the subnets of the specified
         * Application Load Balancer or Network Load Balancer.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetIpAddressType">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIpAddressTypeOutcome SetIpAddressType(const Model::SetIpAddressTypeRequest& request) const;

        /**
         * <p>Sets the type of IP addresses used by the subnets of the specified
         * Application Load Balancer or Network Load Balancer.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetIpAddressType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIpAddressTypeOutcomeCallable SetIpAddressTypeCallable(const Model::SetIpAddressTypeRequest& request) const;

        /**
         * <p>Sets the type of IP addresses used by the subnets of the specified
         * Application Load Balancer or Network Load Balancer.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetIpAddressType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIpAddressTypeAsync(const Model::SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Associates the specified security groups with the specified Application Load
         * Balancer. The specified security groups override the previously associated
         * security groups.</p> <p>You can't specify a security group for a Network Load
         * Balancer or Gateway Load Balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSecurityGroupsOutcome SetSecurityGroups(const Model::SetSecurityGroupsRequest& request) const;

        /**
         * <p>Associates the specified security groups with the specified Application Load
         * Balancer. The specified security groups override the previously associated
         * security groups.</p> <p>You can't specify a security group for a Network Load
         * Balancer or Gateway Load Balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSecurityGroupsOutcomeCallable SetSecurityGroupsCallable(const Model::SetSecurityGroupsRequest& request) const;

        /**
         * <p>Associates the specified security groups with the specified Application Load
         * Balancer. The specified security groups override the previously associated
         * security groups.</p> <p>You can't specify a security group for a Network Load
         * Balancer or Gateway Load Balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSecurityGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSecurityGroupsAsync(const Model::SetSecurityGroupsRequest& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the Availability Zones for the specified public subnets for the
         * specified Application Load Balancer or Network Load Balancer. The specified
         * subnets replace the previously enabled subnets.</p> <p>When you specify subnets
         * for a Network Load Balancer, you must include all subnets that were enabled
         * previously, with their existing configurations, plus any additional
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSubnetsOutcome SetSubnets(const Model::SetSubnetsRequest& request) const;

        /**
         * <p>Enables the Availability Zones for the specified public subnets for the
         * specified Application Load Balancer or Network Load Balancer. The specified
         * subnets replace the previously enabled subnets.</p> <p>When you specify subnets
         * for a Network Load Balancer, you must include all subnets that were enabled
         * previously, with their existing configurations, plus any additional
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSubnets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSubnetsOutcomeCallable SetSubnetsCallable(const Model::SetSubnetsRequest& request) const;

        /**
         * <p>Enables the Availability Zones for the specified public subnets for the
         * specified Application Load Balancer or Network Load Balancer. The specified
         * subnets replace the previously enabled subnets.</p> <p>When you specify subnets
         * for a Network Load Balancer, you must include all subnets that were enabled
         * previously, with their existing configurations, plus any additional
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SetSubnets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSubnetsAsync(const Model::SetSubnetsRequest& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddListenerCertificatesAsyncHelper(const Model::AddListenerCertificatesRequest& request, const AddListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void DescribeAccountLimitsAsyncHelper(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeListenerCertificatesAsyncHelper(const Model::DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void RemoveListenerCertificatesAsyncHelper(const Model::RemoveListenerCertificatesRequest& request, const RemoveListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetIpAddressTypeAsyncHelper(const Model::SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetRulePrioritiesAsyncHelper(const Model::SetRulePrioritiesRequest& request, const SetRulePrioritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetSecurityGroupsAsyncHelper(const Model::SetSecurityGroupsRequest& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetSubnetsAsyncHelper(const Model::SetSubnetsRequest& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ElasticLoadBalancingv2
} // namespace Aws
