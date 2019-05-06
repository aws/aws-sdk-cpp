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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticloadbalancing/model/AddTagsResult.h>
#include <aws/elasticloadbalancing/model/ApplySecurityGroupsToLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/AttachLoadBalancerToSubnetsResult.h>
#include <aws/elasticloadbalancing/model/ConfigureHealthCheckResult.h>
#include <aws/elasticloadbalancing/model/CreateAppCookieStickinessPolicyResult.h>
#include <aws/elasticloadbalancing/model/CreateLBCookieStickinessPolicyResult.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerListenersResult.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerPolicyResult.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerListenersResult.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerPolicyResult.h>
#include <aws/elasticloadbalancing/model/DeregisterInstancesFromLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/DescribeAccountLimitsResult.h>
#include <aws/elasticloadbalancing/model/DescribeInstanceHealthResult.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerAttributesResult.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPoliciesResult.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesResult.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersResult.h>
#include <aws/elasticloadbalancing/model/DescribeTagsResult.h>
#include <aws/elasticloadbalancing/model/DetachLoadBalancerFromSubnetsResult.h>
#include <aws/elasticloadbalancing/model/DisableAvailabilityZonesForLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/EnableAvailabilityZonesForLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/ModifyLoadBalancerAttributesResult.h>
#include <aws/elasticloadbalancing/model/RegisterInstancesWithLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/RemoveTagsResult.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerListenerSSLCertificateResult.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesForBackendServerResult.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesOfListenerResult.h>
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

namespace ElasticLoadBalancing
{

namespace Model
{
        class AddTagsRequest;
        class ApplySecurityGroupsToLoadBalancerRequest;
        class AttachLoadBalancerToSubnetsRequest;
        class ConfigureHealthCheckRequest;
        class CreateAppCookieStickinessPolicyRequest;
        class CreateLBCookieStickinessPolicyRequest;
        class CreateLoadBalancerRequest;
        class CreateLoadBalancerListenersRequest;
        class CreateLoadBalancerPolicyRequest;
        class DeleteLoadBalancerRequest;
        class DeleteLoadBalancerListenersRequest;
        class DeleteLoadBalancerPolicyRequest;
        class DeregisterInstancesFromLoadBalancerRequest;
        class DescribeAccountLimitsRequest;
        class DescribeInstanceHealthRequest;
        class DescribeLoadBalancerAttributesRequest;
        class DescribeLoadBalancerPoliciesRequest;
        class DescribeLoadBalancerPolicyTypesRequest;
        class DescribeLoadBalancersRequest;
        class DescribeTagsRequest;
        class DetachLoadBalancerFromSubnetsRequest;
        class DisableAvailabilityZonesForLoadBalancerRequest;
        class EnableAvailabilityZonesForLoadBalancerRequest;
        class ModifyLoadBalancerAttributesRequest;
        class RegisterInstancesWithLoadBalancerRequest;
        class RemoveTagsRequest;
        class SetLoadBalancerListenerSSLCertificateRequest;
        class SetLoadBalancerPoliciesForBackendServerRequest;
        class SetLoadBalancerPoliciesOfListenerRequest;

        typedef Aws::Utils::Outcome<AddTagsResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> AddTagsOutcome;
        typedef Aws::Utils::Outcome<ApplySecurityGroupsToLoadBalancerResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> ApplySecurityGroupsToLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<AttachLoadBalancerToSubnetsResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> AttachLoadBalancerToSubnetsOutcome;
        typedef Aws::Utils::Outcome<ConfigureHealthCheckResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> ConfigureHealthCheckOutcome;
        typedef Aws::Utils::Outcome<CreateAppCookieStickinessPolicyResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> CreateAppCookieStickinessPolicyOutcome;
        typedef Aws::Utils::Outcome<CreateLBCookieStickinessPolicyResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> CreateLBCookieStickinessPolicyOutcome;
        typedef Aws::Utils::Outcome<CreateLoadBalancerResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> CreateLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<CreateLoadBalancerListenersResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> CreateLoadBalancerListenersOutcome;
        typedef Aws::Utils::Outcome<CreateLoadBalancerPolicyResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> CreateLoadBalancerPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteLoadBalancerResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DeleteLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<DeleteLoadBalancerListenersResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DeleteLoadBalancerListenersOutcome;
        typedef Aws::Utils::Outcome<DeleteLoadBalancerPolicyResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DeleteLoadBalancerPolicyOutcome;
        typedef Aws::Utils::Outcome<DeregisterInstancesFromLoadBalancerResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DeregisterInstancesFromLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DescribeAccountLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceHealthResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DescribeInstanceHealthOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancerAttributesResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DescribeLoadBalancerAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancerPoliciesResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DescribeLoadBalancerPoliciesOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancerPolicyTypesResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DescribeLoadBalancerPolicyTypesOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBalancersResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DescribeLoadBalancersOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DetachLoadBalancerFromSubnetsResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DetachLoadBalancerFromSubnetsOutcome;
        typedef Aws::Utils::Outcome<DisableAvailabilityZonesForLoadBalancerResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> DisableAvailabilityZonesForLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<EnableAvailabilityZonesForLoadBalancerResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> EnableAvailabilityZonesForLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<ModifyLoadBalancerAttributesResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> ModifyLoadBalancerAttributesOutcome;
        typedef Aws::Utils::Outcome<RegisterInstancesWithLoadBalancerResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> RegisterInstancesWithLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<SetLoadBalancerListenerSSLCertificateResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> SetLoadBalancerListenerSSLCertificateOutcome;
        typedef Aws::Utils::Outcome<SetLoadBalancerPoliciesForBackendServerResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> SetLoadBalancerPoliciesForBackendServerOutcome;
        typedef Aws::Utils::Outcome<SetLoadBalancerPoliciesOfListenerResult, Aws::Client::AWSError<ElasticLoadBalancingErrors>> SetLoadBalancerPoliciesOfListenerOutcome;

        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<ApplySecurityGroupsToLoadBalancerOutcome> ApplySecurityGroupsToLoadBalancerOutcomeCallable;
        typedef std::future<AttachLoadBalancerToSubnetsOutcome> AttachLoadBalancerToSubnetsOutcomeCallable;
        typedef std::future<ConfigureHealthCheckOutcome> ConfigureHealthCheckOutcomeCallable;
        typedef std::future<CreateAppCookieStickinessPolicyOutcome> CreateAppCookieStickinessPolicyOutcomeCallable;
        typedef std::future<CreateLBCookieStickinessPolicyOutcome> CreateLBCookieStickinessPolicyOutcomeCallable;
        typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
        typedef std::future<CreateLoadBalancerListenersOutcome> CreateLoadBalancerListenersOutcomeCallable;
        typedef std::future<CreateLoadBalancerPolicyOutcome> CreateLoadBalancerPolicyOutcomeCallable;
        typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
        typedef std::future<DeleteLoadBalancerListenersOutcome> DeleteLoadBalancerListenersOutcomeCallable;
        typedef std::future<DeleteLoadBalancerPolicyOutcome> DeleteLoadBalancerPolicyOutcomeCallable;
        typedef std::future<DeregisterInstancesFromLoadBalancerOutcome> DeregisterInstancesFromLoadBalancerOutcomeCallable;
        typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
        typedef std::future<DescribeInstanceHealthOutcome> DescribeInstanceHealthOutcomeCallable;
        typedef std::future<DescribeLoadBalancerAttributesOutcome> DescribeLoadBalancerAttributesOutcomeCallable;
        typedef std::future<DescribeLoadBalancerPoliciesOutcome> DescribeLoadBalancerPoliciesOutcomeCallable;
        typedef std::future<DescribeLoadBalancerPolicyTypesOutcome> DescribeLoadBalancerPolicyTypesOutcomeCallable;
        typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DetachLoadBalancerFromSubnetsOutcome> DetachLoadBalancerFromSubnetsOutcomeCallable;
        typedef std::future<DisableAvailabilityZonesForLoadBalancerOutcome> DisableAvailabilityZonesForLoadBalancerOutcomeCallable;
        typedef std::future<EnableAvailabilityZonesForLoadBalancerOutcome> EnableAvailabilityZonesForLoadBalancerOutcomeCallable;
        typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
        typedef std::future<RegisterInstancesWithLoadBalancerOutcome> RegisterInstancesWithLoadBalancerOutcomeCallable;
        typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
        typedef std::future<SetLoadBalancerListenerSSLCertificateOutcome> SetLoadBalancerListenerSSLCertificateOutcomeCallable;
        typedef std::future<SetLoadBalancerPoliciesForBackendServerOutcome> SetLoadBalancerPoliciesForBackendServerOutcomeCallable;
        typedef std::future<SetLoadBalancerPoliciesOfListenerOutcome> SetLoadBalancerPoliciesOfListenerOutcomeCallable;
} // namespace Model

  class ElasticLoadBalancingClient;

    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::ApplySecurityGroupsToLoadBalancerRequest&, const Model::ApplySecurityGroupsToLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplySecurityGroupsToLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::AttachLoadBalancerToSubnetsRequest&, const Model::AttachLoadBalancerToSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachLoadBalancerToSubnetsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::ConfigureHealthCheckRequest&, const Model::ConfigureHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureHealthCheckResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::CreateAppCookieStickinessPolicyRequest&, const Model::CreateAppCookieStickinessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppCookieStickinessPolicyResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::CreateLBCookieStickinessPolicyRequest&, const Model::CreateLBCookieStickinessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLBCookieStickinessPolicyResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::CreateLoadBalancerRequest&, const Model::CreateLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::CreateLoadBalancerListenersRequest&, const Model::CreateLoadBalancerListenersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoadBalancerListenersResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::CreateLoadBalancerPolicyRequest&, const Model::CreateLoadBalancerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoadBalancerPolicyResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DeleteLoadBalancerRequest&, const Model::DeleteLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DeleteLoadBalancerListenersRequest&, const Model::DeleteLoadBalancerListenersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoadBalancerListenersResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DeleteLoadBalancerPolicyRequest&, const Model::DeleteLoadBalancerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoadBalancerPolicyResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DeregisterInstancesFromLoadBalancerRequest&, const Model::DeregisterInstancesFromLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterInstancesFromLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DescribeInstanceHealthRequest&, const Model::DescribeInstanceHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceHealthResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DescribeLoadBalancerAttributesRequest&, const Model::DescribeLoadBalancerAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBalancerAttributesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DescribeLoadBalancerPoliciesRequest&, const Model::DescribeLoadBalancerPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBalancerPoliciesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DescribeLoadBalancerPolicyTypesRequest&, const Model::DescribeLoadBalancerPolicyTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBalancerPolicyTypesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DescribeLoadBalancersRequest&, const Model::DescribeLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DetachLoadBalancerFromSubnetsRequest&, const Model::DetachLoadBalancerFromSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachLoadBalancerFromSubnetsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::DisableAvailabilityZonesForLoadBalancerRequest&, const Model::DisableAvailabilityZonesForLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAvailabilityZonesForLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::EnableAvailabilityZonesForLoadBalancerRequest&, const Model::EnableAvailabilityZonesForLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAvailabilityZonesForLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::ModifyLoadBalancerAttributesRequest&, const Model::ModifyLoadBalancerAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyLoadBalancerAttributesResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::RegisterInstancesWithLoadBalancerRequest&, const Model::RegisterInstancesWithLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterInstancesWithLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::SetLoadBalancerListenerSSLCertificateRequest&, const Model::SetLoadBalancerListenerSSLCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLoadBalancerListenerSSLCertificateResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::SetLoadBalancerPoliciesForBackendServerRequest&, const Model::SetLoadBalancerPoliciesForBackendServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLoadBalancerPoliciesForBackendServerResponseReceivedHandler;
    typedef std::function<void(const ElasticLoadBalancingClient*, const Model::SetLoadBalancerPoliciesOfListenerRequest&, const Model::SetLoadBalancerPoliciesOfListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLoadBalancerPoliciesOfListenerResponseReceivedHandler;

  /**
   * <fullname>Elastic Load Balancing</fullname> <p>A load balancer can distribute
   * incoming traffic across your EC2 instances. This enables you to increase the
   * availability of your application. The load balancer also monitors the health of
   * its registered instances and ensures that it routes traffic only to healthy
   * instances. You configure your load balancer to accept incoming traffic by
   * specifying one or more listeners, which are configured with a protocol and port
   * number for connections from clients to the load balancer and a protocol and port
   * number for connections from the load balancer to the instances.</p> <p>Elastic
   * Load Balancing supports three types of load balancers: Application Load
   * Balancers, Network Load Balancers, and Classic Load Balancers. You can select a
   * load balancer based on your application needs. For more information, see the <a
   * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic
   * Load Balancing User Guide</a>.</p> <p>This reference covers the 2012-06-01 API,
   * which supports Classic Load Balancers. The 2015-12-01 API supports Application
   * Load Balancers and Network Load Balancers.</p> <p>To get started, create a load
   * balancer with one or more listeners using <a>CreateLoadBalancer</a>. Register
   * your instances with the load balancer using
   * <a>RegisterInstancesWithLoadBalancer</a>.</p> <p>All Elastic Load Balancing
   * operations are <i>idempotent</i>, which means that they complete at most one
   * time. If you repeat an operation, it succeeds with a 200 OK response code.</p>
   */
  class AWS_ELASTICLOADBALANCING_API ElasticLoadBalancingClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticLoadBalancingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticLoadBalancingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ElasticLoadBalancingClient();

        inline virtual const char* GetServiceClientName() const override { return "Elastic Load Balancing"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds the specified tags to the specified load balancer. Each load balancer
         * can have a maximum of 10 tags.</p> <p>Each tag consists of a key and an optional
         * value. If a tag with the same key is already associated with the load balancer,
         * <code>AddTags</code> updates its value.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
         * Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified load balancer. Each load balancer
         * can have a maximum of 10 tags.</p> <p>Each tag consists of a key and an optional
         * value. If a tag with the same key is already associated with the load balancer,
         * <code>AddTags</code> updates its value.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
         * Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AddTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified load balancer. Each load balancer
         * can have a maximum of 10 tags.</p> <p>Each tag consists of a key and an optional
         * value. If a tag with the same key is already associated with the load balancer,
         * <code>AddTags</code> updates its value.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
         * Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates one or more security groups with your load balancer in a virtual
         * private cloud (VPC). The specified security groups override the previously
         * associated security groups.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-security-groups.html#elb-vpc-security-groups">Security
         * Groups for Load Balancers in a VPC</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ApplySecurityGroupsToLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplySecurityGroupsToLoadBalancerOutcome ApplySecurityGroupsToLoadBalancer(const Model::ApplySecurityGroupsToLoadBalancerRequest& request) const;

        /**
         * <p>Associates one or more security groups with your load balancer in a virtual
         * private cloud (VPC). The specified security groups override the previously
         * associated security groups.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-security-groups.html#elb-vpc-security-groups">Security
         * Groups for Load Balancers in a VPC</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ApplySecurityGroupsToLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApplySecurityGroupsToLoadBalancerOutcomeCallable ApplySecurityGroupsToLoadBalancerCallable(const Model::ApplySecurityGroupsToLoadBalancerRequest& request) const;

        /**
         * <p>Associates one or more security groups with your load balancer in a virtual
         * private cloud (VPC). The specified security groups override the previously
         * associated security groups.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-security-groups.html#elb-vpc-security-groups">Security
         * Groups for Load Balancers in a VPC</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ApplySecurityGroupsToLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplySecurityGroupsToLoadBalancerAsync(const Model::ApplySecurityGroupsToLoadBalancerRequest& request, const ApplySecurityGroupsToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more subnets to the set of configured subnets for the specified
         * load balancer.</p> <p>The load balancer evenly distributes requests across all
         * registered subnets. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-manage-subnets.html">Add
         * or Remove Subnets for Your Load Balancer in a VPC</a> in the <i>Classic Load
         * Balancers Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AttachLoadBalancerToSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancerToSubnetsOutcome AttachLoadBalancerToSubnets(const Model::AttachLoadBalancerToSubnetsRequest& request) const;

        /**
         * <p>Adds one or more subnets to the set of configured subnets for the specified
         * load balancer.</p> <p>The load balancer evenly distributes requests across all
         * registered subnets. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-manage-subnets.html">Add
         * or Remove Subnets for Your Load Balancer in a VPC</a> in the <i>Classic Load
         * Balancers Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AttachLoadBalancerToSubnets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachLoadBalancerToSubnetsOutcomeCallable AttachLoadBalancerToSubnetsCallable(const Model::AttachLoadBalancerToSubnetsRequest& request) const;

        /**
         * <p>Adds one or more subnets to the set of configured subnets for the specified
         * load balancer.</p> <p>The load balancer evenly distributes requests across all
         * registered subnets. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-manage-subnets.html">Add
         * or Remove Subnets for Your Load Balancer in a VPC</a> in the <i>Classic Load
         * Balancers Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AttachLoadBalancerToSubnets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachLoadBalancerToSubnetsAsync(const Model::AttachLoadBalancerToSubnetsRequest& request, const AttachLoadBalancerToSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies the health check settings to use when evaluating the health state
         * of your EC2 instances.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-healthchecks.html">Configure
         * Health Checks for Your Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ConfigureHealthCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureHealthCheckOutcome ConfigureHealthCheck(const Model::ConfigureHealthCheckRequest& request) const;

        /**
         * <p>Specifies the health check settings to use when evaluating the health state
         * of your EC2 instances.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-healthchecks.html">Configure
         * Health Checks for Your Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ConfigureHealthCheck">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfigureHealthCheckOutcomeCallable ConfigureHealthCheckCallable(const Model::ConfigureHealthCheckRequest& request) const;

        /**
         * <p>Specifies the health check settings to use when evaluating the health state
         * of your EC2 instances.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-healthchecks.html">Configure
         * Health Checks for Your Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ConfigureHealthCheck">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfigureHealthCheckAsync(const Model::ConfigureHealthCheckRequest& request, const ConfigureHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a stickiness policy with sticky session lifetimes that follow that
         * of an application-generated cookie. This policy can be associated only with
         * HTTP/HTTPS listeners.</p> <p>This policy is similar to the policy created by
         * <a>CreateLBCookieStickinessPolicy</a>, except that the lifetime of the special
         * Elastic Load Balancing cookie, <code>AWSELB</code>, follows the lifetime of the
         * application-generated cookie specified in the policy configuration. The load
         * balancer only inserts a new stickiness cookie when the application response
         * includes a new application cookie.</p> <p>If the application cookie is
         * explicitly removed or expires, the session stops being sticky until a new
         * application cookie is issued.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-application">Application-Controlled
         * Session Stickiness</a> in the <i>Classic Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateAppCookieStickinessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppCookieStickinessPolicyOutcome CreateAppCookieStickinessPolicy(const Model::CreateAppCookieStickinessPolicyRequest& request) const;

        /**
         * <p>Generates a stickiness policy with sticky session lifetimes that follow that
         * of an application-generated cookie. This policy can be associated only with
         * HTTP/HTTPS listeners.</p> <p>This policy is similar to the policy created by
         * <a>CreateLBCookieStickinessPolicy</a>, except that the lifetime of the special
         * Elastic Load Balancing cookie, <code>AWSELB</code>, follows the lifetime of the
         * application-generated cookie specified in the policy configuration. The load
         * balancer only inserts a new stickiness cookie when the application response
         * includes a new application cookie.</p> <p>If the application cookie is
         * explicitly removed or expires, the session stops being sticky until a new
         * application cookie is issued.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-application">Application-Controlled
         * Session Stickiness</a> in the <i>Classic Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateAppCookieStickinessPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppCookieStickinessPolicyOutcomeCallable CreateAppCookieStickinessPolicyCallable(const Model::CreateAppCookieStickinessPolicyRequest& request) const;

        /**
         * <p>Generates a stickiness policy with sticky session lifetimes that follow that
         * of an application-generated cookie. This policy can be associated only with
         * HTTP/HTTPS listeners.</p> <p>This policy is similar to the policy created by
         * <a>CreateLBCookieStickinessPolicy</a>, except that the lifetime of the special
         * Elastic Load Balancing cookie, <code>AWSELB</code>, follows the lifetime of the
         * application-generated cookie specified in the policy configuration. The load
         * balancer only inserts a new stickiness cookie when the application response
         * includes a new application cookie.</p> <p>If the application cookie is
         * explicitly removed or expires, the session stops being sticky until a new
         * application cookie is issued.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-application">Application-Controlled
         * Session Stickiness</a> in the <i>Classic Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateAppCookieStickinessPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppCookieStickinessPolicyAsync(const Model::CreateAppCookieStickinessPolicyRequest& request, const CreateAppCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a stickiness policy with sticky session lifetimes controlled by the
         * lifetime of the browser (user-agent) or a specified expiration period. This
         * policy can be associated only with HTTP/HTTPS listeners.</p> <p>When a load
         * balancer implements this policy, the load balancer uses a special cookie to
         * track the instance for each request. When the load balancer receives a request,
         * it first checks to see if this cookie is present in the request. If so, the load
         * balancer sends the request to the application server specified in the cookie. If
         * not, the load balancer sends the request to a server that is chosen based on the
         * existing load-balancing algorithm.</p> <p>A cookie is inserted into the response
         * for binding subsequent requests from the same user to that server. The validity
         * of the cookie is based on the cookie expiration time, which is specified in the
         * policy configuration.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-duration">Duration-Based
         * Session Stickiness</a> in the <i>Classic Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLBCookieStickinessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLBCookieStickinessPolicyOutcome CreateLBCookieStickinessPolicy(const Model::CreateLBCookieStickinessPolicyRequest& request) const;

        /**
         * <p>Generates a stickiness policy with sticky session lifetimes controlled by the
         * lifetime of the browser (user-agent) or a specified expiration period. This
         * policy can be associated only with HTTP/HTTPS listeners.</p> <p>When a load
         * balancer implements this policy, the load balancer uses a special cookie to
         * track the instance for each request. When the load balancer receives a request,
         * it first checks to see if this cookie is present in the request. If so, the load
         * balancer sends the request to the application server specified in the cookie. If
         * not, the load balancer sends the request to a server that is chosen based on the
         * existing load-balancing algorithm.</p> <p>A cookie is inserted into the response
         * for binding subsequent requests from the same user to that server. The validity
         * of the cookie is based on the cookie expiration time, which is specified in the
         * policy configuration.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-duration">Duration-Based
         * Session Stickiness</a> in the <i>Classic Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLBCookieStickinessPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLBCookieStickinessPolicyOutcomeCallable CreateLBCookieStickinessPolicyCallable(const Model::CreateLBCookieStickinessPolicyRequest& request) const;

        /**
         * <p>Generates a stickiness policy with sticky session lifetimes controlled by the
         * lifetime of the browser (user-agent) or a specified expiration period. This
         * policy can be associated only with HTTP/HTTPS listeners.</p> <p>When a load
         * balancer implements this policy, the load balancer uses a special cookie to
         * track the instance for each request. When the load balancer receives a request,
         * it first checks to see if this cookie is present in the request. If so, the load
         * balancer sends the request to the application server specified in the cookie. If
         * not, the load balancer sends the request to a server that is chosen based on the
         * existing load-balancing algorithm.</p> <p>A cookie is inserted into the response
         * for binding subsequent requests from the same user to that server. The validity
         * of the cookie is based on the cookie expiration time, which is specified in the
         * policy configuration.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-duration">Duration-Based
         * Session Stickiness</a> in the <i>Classic Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLBCookieStickinessPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLBCookieStickinessPolicyAsync(const Model::CreateLBCookieStickinessPolicyRequest& request, const CreateLBCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Classic Load Balancer.</p> <p>You can add listeners, security
         * groups, subnets, and tags when you create your load balancer, or you can add
         * them later using <a>CreateLoadBalancerListeners</a>,
         * <a>ApplySecurityGroupsToLoadBalancer</a>, <a>AttachLoadBalancerToSubnets</a>,
         * and <a>AddTags</a>.</p> <p>To describe your current load balancers, see
         * <a>DescribeLoadBalancers</a>. When you are finished with a load balancer, you
         * can delete it using <a>DeleteLoadBalancer</a>.</p> <p>You can create up to 20
         * load balancers per region per account. You can request an increase for the
         * number of load balancers for your account. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-limits.html">Limits
         * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * <p>Creates a Classic Load Balancer.</p> <p>You can add listeners, security
         * groups, subnets, and tags when you create your load balancer, or you can add
         * them later using <a>CreateLoadBalancerListeners</a>,
         * <a>ApplySecurityGroupsToLoadBalancer</a>, <a>AttachLoadBalancerToSubnets</a>,
         * and <a>AddTags</a>.</p> <p>To describe your current load balancers, see
         * <a>DescribeLoadBalancers</a>. When you are finished with a load balancer, you
         * can delete it using <a>DeleteLoadBalancer</a>.</p> <p>You can create up to 20
         * load balancers per region per account. You can request an increase for the
         * number of load balancers for your account. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-limits.html">Limits
         * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * <p>Creates a Classic Load Balancer.</p> <p>You can add listeners, security
         * groups, subnets, and tags when you create your load balancer, or you can add
         * them later using <a>CreateLoadBalancerListeners</a>,
         * <a>ApplySecurityGroupsToLoadBalancer</a>, <a>AttachLoadBalancerToSubnets</a>,
         * and <a>AddTags</a>.</p> <p>To describe your current load balancers, see
         * <a>DescribeLoadBalancers</a>. When you are finished with a load balancer, you
         * can delete it using <a>DeleteLoadBalancer</a>.</p> <p>You can create up to 20
         * load balancers per region per account. You can request an increase for the
         * number of load balancers for your account. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-limits.html">Limits
         * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more listeners for the specified load balancer. If a listener
         * with the specified port does not already exist, it is created; otherwise, the
         * properties of the new listener must match the properties of the existing
         * listener.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
         * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancerListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerListenersOutcome CreateLoadBalancerListeners(const Model::CreateLoadBalancerListenersRequest& request) const;

        /**
         * <p>Creates one or more listeners for the specified load balancer. If a listener
         * with the specified port does not already exist, it is created; otherwise, the
         * properties of the new listener must match the properties of the existing
         * listener.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
         * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancerListeners">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerListenersOutcomeCallable CreateLoadBalancerListenersCallable(const Model::CreateLoadBalancerListenersRequest& request) const;

        /**
         * <p>Creates one or more listeners for the specified load balancer. If a listener
         * with the specified port does not already exist, it is created; otherwise, the
         * properties of the new listener must match the properties of the existing
         * listener.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
         * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancerListeners">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerListenersAsync(const Model::CreateLoadBalancerListenersRequest& request, const CreateLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a policy with the specified attributes for the specified load
         * balancer.</p> <p>Policies are settings that are saved for your load balancer and
         * that can be applied to the listener or the application server, depending on the
         * policy type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancerPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerPolicyOutcome CreateLoadBalancerPolicy(const Model::CreateLoadBalancerPolicyRequest& request) const;

        /**
         * <p>Creates a policy with the specified attributes for the specified load
         * balancer.</p> <p>Policies are settings that are saved for your load balancer and
         * that can be applied to the listener or the application server, depending on the
         * policy type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancerPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerPolicyOutcomeCallable CreateLoadBalancerPolicyCallable(const Model::CreateLoadBalancerPolicyRequest& request) const;

        /**
         * <p>Creates a policy with the specified attributes for the specified load
         * balancer.</p> <p>Policies are settings that are saved for your load balancer and
         * that can be applied to the listener or the application server, depending on the
         * policy type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateLoadBalancerPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerPolicyAsync(const Model::CreateLoadBalancerPolicyRequest& request, const CreateLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified load balancer.</p> <p>If you are attempting to recreate
         * a load balancer, you must reconfigure all settings. The DNS name associated with
         * a deleted load balancer are no longer usable. The name and associated DNS record
         * of the deleted load balancer no longer exist and traffic sent to any of its IP
         * addresses is no longer delivered to your instances.</p> <p>If the load balancer
         * does not exist or has already been deleted, the call to
         * <code>DeleteLoadBalancer</code> still succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * <p>Deletes the specified load balancer.</p> <p>If you are attempting to recreate
         * a load balancer, you must reconfigure all settings. The DNS name associated with
         * a deleted load balancer are no longer usable. The name and associated DNS record
         * of the deleted load balancer no longer exist and traffic sent to any of its IP
         * addresses is no longer delivered to your instances.</p> <p>If the load balancer
         * does not exist or has already been deleted, the call to
         * <code>DeleteLoadBalancer</code> still succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * <p>Deletes the specified load balancer.</p> <p>If you are attempting to recreate
         * a load balancer, you must reconfigure all settings. The DNS name associated with
         * a deleted load balancer are no longer usable. The name and associated DNS record
         * of the deleted load balancer no longer exist and traffic sent to any of its IP
         * addresses is no longer delivered to your instances.</p> <p>If the load balancer
         * does not exist or has already been deleted, the call to
         * <code>DeleteLoadBalancer</code> still succeeds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified listeners from the specified load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancerListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerListenersOutcome DeleteLoadBalancerListeners(const Model::DeleteLoadBalancerListenersRequest& request) const;

        /**
         * <p>Deletes the specified listeners from the specified load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancerListeners">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerListenersOutcomeCallable DeleteLoadBalancerListenersCallable(const Model::DeleteLoadBalancerListenersRequest& request) const;

        /**
         * <p>Deletes the specified listeners from the specified load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancerListeners">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerListenersAsync(const Model::DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified policy from the specified load balancer. This policy
         * must not be enabled for any listeners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancerPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerPolicyOutcome DeleteLoadBalancerPolicy(const Model::DeleteLoadBalancerPolicyRequest& request) const;

        /**
         * <p>Deletes the specified policy from the specified load balancer. This policy
         * must not be enabled for any listeners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancerPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerPolicyOutcomeCallable DeleteLoadBalancerPolicyCallable(const Model::DeleteLoadBalancerPolicyRequest& request) const;

        /**
         * <p>Deletes the specified policy from the specified load balancer. This policy
         * must not be enabled for any listeners.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeleteLoadBalancerPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerPolicyAsync(const Model::DeleteLoadBalancerPolicyRequest& request, const DeleteLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified instances from the specified load balancer. After
         * the instance is deregistered, it no longer receives traffic from the load
         * balancer.</p> <p>You can use <a>DescribeLoadBalancers</a> to verify that the
         * instance is deregistered from the load balancer.</p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-deregister-register-instances.html">Register
         * or De-Register EC2 Instances</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeregisterInstancesFromLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterInstancesFromLoadBalancerOutcome DeregisterInstancesFromLoadBalancer(const Model::DeregisterInstancesFromLoadBalancerRequest& request) const;

        /**
         * <p>Deregisters the specified instances from the specified load balancer. After
         * the instance is deregistered, it no longer receives traffic from the load
         * balancer.</p> <p>You can use <a>DescribeLoadBalancers</a> to verify that the
         * instance is deregistered from the load balancer.</p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-deregister-register-instances.html">Register
         * or De-Register EC2 Instances</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeregisterInstancesFromLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterInstancesFromLoadBalancerOutcomeCallable DeregisterInstancesFromLoadBalancerCallable(const Model::DeregisterInstancesFromLoadBalancerRequest& request) const;

        /**
         * <p>Deregisters the specified instances from the specified load balancer. After
         * the instance is deregistered, it no longer receives traffic from the load
         * balancer.</p> <p>You can use <a>DescribeLoadBalancers</a> to verify that the
         * instance is deregistered from the load balancer.</p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-deregister-register-instances.html">Register
         * or De-Register EC2 Instances</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DeregisterInstancesFromLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterInstancesFromLoadBalancerAsync(const Model::DeregisterInstancesFromLoadBalancerRequest& request, const DeregisterInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current Elastic Load Balancing resource limits for your AWS
         * account.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-limits.html">Limits
         * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Elastic Load Balancing resource limits for your AWS
         * account.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-limits.html">Limits
         * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Elastic Load Balancing resource limits for your AWS
         * account.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-limits.html">Limits
         * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the state of the specified instances with respect to the specified
         * load balancer. If no instances are specified, the call describes the state of
         * all instances that are currently registered with the load balancer. If instances
         * are specified, their state is returned even if they are no longer registered
         * with the load balancer. The state of terminated instances is not
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeInstanceHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceHealthOutcome DescribeInstanceHealth(const Model::DescribeInstanceHealthRequest& request) const;

        /**
         * <p>Describes the state of the specified instances with respect to the specified
         * load balancer. If no instances are specified, the call describes the state of
         * all instances that are currently registered with the load balancer. If instances
         * are specified, their state is returned even if they are no longer registered
         * with the load balancer. The state of terminated instances is not
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeInstanceHealth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceHealthOutcomeCallable DescribeInstanceHealthCallable(const Model::DescribeInstanceHealthRequest& request) const;

        /**
         * <p>Describes the state of the specified instances with respect to the specified
         * load balancer. If no instances are specified, the call describes the state of
         * all instances that are currently registered with the load balancer. If instances
         * are specified, their state is returned even if they are no longer registered
         * with the load balancer. The state of terminated instances is not
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeInstanceHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceHealthAsync(const Model::DescribeInstanceHealthRequest& request, const DescribeInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the attributes for the specified load balancer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerAttributesOutcome DescribeLoadBalancerAttributes(const Model::DescribeLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified load balancer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancerAttributesOutcomeCallable DescribeLoadBalancerAttributesCallable(const Model::DescribeLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Describes the attributes for the specified load balancer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancerAttributesAsync(const Model::DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified policies.</p> <p>If you specify a load balancer name,
         * the action returns the descriptions of all policies created for the load
         * balancer. If you specify a policy name associated with your load balancer, the
         * action returns the description of that policy. If you don't specify a load
         * balancer name, the action returns descriptions of the specified sample policies,
         * or descriptions of all sample policies. The names of the sample policies have
         * the <code>ELBSample-</code> prefix.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerPoliciesOutcome DescribeLoadBalancerPolicies(const Model::DescribeLoadBalancerPoliciesRequest& request) const;

        /**
         * <p>Describes the specified policies.</p> <p>If you specify a load balancer name,
         * the action returns the descriptions of all policies created for the load
         * balancer. If you specify a policy name associated with your load balancer, the
         * action returns the description of that policy. If you don't specify a load
         * balancer name, the action returns descriptions of the specified sample policies,
         * or descriptions of all sample policies. The names of the sample policies have
         * the <code>ELBSample-</code> prefix.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancerPoliciesOutcomeCallable DescribeLoadBalancerPoliciesCallable(const Model::DescribeLoadBalancerPoliciesRequest& request) const;

        /**
         * <p>Describes the specified policies.</p> <p>If you specify a load balancer name,
         * the action returns the descriptions of all policies created for the load
         * balancer. If you specify a policy name associated with your load balancer, the
         * action returns the description of that policy. If you don't specify a load
         * balancer name, the action returns descriptions of the specified sample policies,
         * or descriptions of all sample policies. The names of the sample policies have
         * the <code>ELBSample-</code> prefix.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancerPoliciesAsync(const Model::DescribeLoadBalancerPoliciesRequest& request, const DescribeLoadBalancerPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified load balancer policy types or all load balancer
         * policy types.</p> <p>The description of each type indicates how it can be used.
         * For example, some policies can be used only with layer 7 listeners, some
         * policies can be used only with layer 4 listeners, and some policies can be used
         * only with your EC2 instances.</p> <p>You can use <a>CreateLoadBalancerPolicy</a>
         * to create a policy configuration for any of these policy types. Then, depending
         * on the policy type, use either <a>SetLoadBalancerPoliciesOfListener</a> or
         * <a>SetLoadBalancerPoliciesForBackendServer</a> to set the policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPolicyTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancerPolicyTypesOutcome DescribeLoadBalancerPolicyTypes(const Model::DescribeLoadBalancerPolicyTypesRequest& request) const;

        /**
         * <p>Describes the specified load balancer policy types or all load balancer
         * policy types.</p> <p>The description of each type indicates how it can be used.
         * For example, some policies can be used only with layer 7 listeners, some
         * policies can be used only with layer 4 listeners, and some policies can be used
         * only with your EC2 instances.</p> <p>You can use <a>CreateLoadBalancerPolicy</a>
         * to create a policy configuration for any of these policy types. Then, depending
         * on the policy type, use either <a>SetLoadBalancerPoliciesOfListener</a> or
         * <a>SetLoadBalancerPoliciesForBackendServer</a> to set the policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPolicyTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancerPolicyTypesOutcomeCallable DescribeLoadBalancerPolicyTypesCallable(const Model::DescribeLoadBalancerPolicyTypesRequest& request) const;

        /**
         * <p>Describes the specified load balancer policy types or all load balancer
         * policy types.</p> <p>The description of each type indicates how it can be used.
         * For example, some policies can be used only with layer 7 listeners, some
         * policies can be used only with layer 4 listeners, and some policies can be used
         * only with your EC2 instances.</p> <p>You can use <a>CreateLoadBalancerPolicy</a>
         * to create a policy configuration for any of these policy types. Then, depending
         * on the policy type, use either <a>SetLoadBalancerPoliciesOfListener</a> or
         * <a>SetLoadBalancerPoliciesForBackendServer</a> to set the policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPolicyTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancerPolicyTypesAsync(const Model::DescribeLoadBalancerPolicyTypesRequest& request, const DescribeLoadBalancerPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified the load balancers. If no load balancers are
         * specified, the call describes all of your load balancers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Describes the specified the load balancers. If no load balancers are
         * specified, the call describes all of your load balancers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;

        /**
         * <p>Describes the specified the load balancers. If no load balancers are
         * specified, the call describes all of your load balancers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the tags associated with the specified load
         * balancers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags associated with the specified load
         * balancers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the tags associated with the specified load
         * balancers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified subnets from the set of configured subnets for the load
         * balancer.</p> <p>After a subnet is removed, all EC2 instances registered with
         * the load balancer in the removed subnet go into the <code>OutOfService</code>
         * state. Then, the load balancer balances the traffic among the remaining routable
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DetachLoadBalancerFromSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachLoadBalancerFromSubnetsOutcome DetachLoadBalancerFromSubnets(const Model::DetachLoadBalancerFromSubnetsRequest& request) const;

        /**
         * <p>Removes the specified subnets from the set of configured subnets for the load
         * balancer.</p> <p>After a subnet is removed, all EC2 instances registered with
         * the load balancer in the removed subnet go into the <code>OutOfService</code>
         * state. Then, the load balancer balances the traffic among the remaining routable
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DetachLoadBalancerFromSubnets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachLoadBalancerFromSubnetsOutcomeCallable DetachLoadBalancerFromSubnetsCallable(const Model::DetachLoadBalancerFromSubnetsRequest& request) const;

        /**
         * <p>Removes the specified subnets from the set of configured subnets for the load
         * balancer.</p> <p>After a subnet is removed, all EC2 instances registered with
         * the load balancer in the removed subnet go into the <code>OutOfService</code>
         * state. Then, the load balancer balances the traffic among the remaining routable
         * subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DetachLoadBalancerFromSubnets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachLoadBalancerFromSubnetsAsync(const Model::DetachLoadBalancerFromSubnetsRequest& request, const DetachLoadBalancerFromSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified Availability Zones from the set of Availability Zones
         * for the specified load balancer in EC2-Classic or a default VPC.</p> <p>For load
         * balancers in a non-default VPC, use <a>DetachLoadBalancerFromSubnets</a>.</p>
         * <p>There must be at least one Availability Zone registered with a load balancer
         * at all times. After an Availability Zone is removed, all instances registered
         * with the load balancer that are in the removed Availability Zone go into the
         * <code>OutOfService</code> state. Then, the load balancer attempts to equally
         * balance the traffic among its remaining Availability Zones.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-az.html">Add
         * or Remove Availability Zones</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DisableAvailabilityZonesForLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAvailabilityZonesForLoadBalancerOutcome DisableAvailabilityZonesForLoadBalancer(const Model::DisableAvailabilityZonesForLoadBalancerRequest& request) const;

        /**
         * <p>Removes the specified Availability Zones from the set of Availability Zones
         * for the specified load balancer in EC2-Classic or a default VPC.</p> <p>For load
         * balancers in a non-default VPC, use <a>DetachLoadBalancerFromSubnets</a>.</p>
         * <p>There must be at least one Availability Zone registered with a load balancer
         * at all times. After an Availability Zone is removed, all instances registered
         * with the load balancer that are in the removed Availability Zone go into the
         * <code>OutOfService</code> state. Then, the load balancer attempts to equally
         * balance the traffic among its remaining Availability Zones.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-az.html">Add
         * or Remove Availability Zones</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DisableAvailabilityZonesForLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAvailabilityZonesForLoadBalancerOutcomeCallable DisableAvailabilityZonesForLoadBalancerCallable(const Model::DisableAvailabilityZonesForLoadBalancerRequest& request) const;

        /**
         * <p>Removes the specified Availability Zones from the set of Availability Zones
         * for the specified load balancer in EC2-Classic or a default VPC.</p> <p>For load
         * balancers in a non-default VPC, use <a>DetachLoadBalancerFromSubnets</a>.</p>
         * <p>There must be at least one Availability Zone registered with a load balancer
         * at all times. After an Availability Zone is removed, all instances registered
         * with the load balancer that are in the removed Availability Zone go into the
         * <code>OutOfService</code> state. Then, the load balancer attempts to equally
         * balance the traffic among its remaining Availability Zones.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-az.html">Add
         * or Remove Availability Zones</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DisableAvailabilityZonesForLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAvailabilityZonesForLoadBalancerAsync(const Model::DisableAvailabilityZonesForLoadBalancerRequest& request, const DisableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified Availability Zones to the set of Availability Zones for
         * the specified load balancer in EC2-Classic or a default VPC.</p> <p>For load
         * balancers in a non-default VPC, use <a>AttachLoadBalancerToSubnets</a>.</p>
         * <p>The load balancer evenly distributes requests across all its registered
         * Availability Zones that contain instances. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-az.html">Add
         * or Remove Availability Zones</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/EnableAvailabilityZonesForLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAvailabilityZonesForLoadBalancerOutcome EnableAvailabilityZonesForLoadBalancer(const Model::EnableAvailabilityZonesForLoadBalancerRequest& request) const;

        /**
         * <p>Adds the specified Availability Zones to the set of Availability Zones for
         * the specified load balancer in EC2-Classic or a default VPC.</p> <p>For load
         * balancers in a non-default VPC, use <a>AttachLoadBalancerToSubnets</a>.</p>
         * <p>The load balancer evenly distributes requests across all its registered
         * Availability Zones that contain instances. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-az.html">Add
         * or Remove Availability Zones</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/EnableAvailabilityZonesForLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAvailabilityZonesForLoadBalancerOutcomeCallable EnableAvailabilityZonesForLoadBalancerCallable(const Model::EnableAvailabilityZonesForLoadBalancerRequest& request) const;

        /**
         * <p>Adds the specified Availability Zones to the set of Availability Zones for
         * the specified load balancer in EC2-Classic or a default VPC.</p> <p>For load
         * balancers in a non-default VPC, use <a>AttachLoadBalancerToSubnets</a>.</p>
         * <p>The load balancer evenly distributes requests across all its registered
         * Availability Zones that contain instances. For more information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-az.html">Add
         * or Remove Availability Zones</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/EnableAvailabilityZonesForLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAvailabilityZonesForLoadBalancerAsync(const Model::EnableAvailabilityZonesForLoadBalancerRequest& request, const EnableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the attributes of the specified load balancer.</p> <p>You can modify
         * the load balancer attributes, such as <code>AccessLogs</code>,
         * <code>ConnectionDraining</code>, and <code>CrossZoneLoadBalancing</code> by
         * either enabling or disabling them. Or, you can modify the load balancer
         * attribute <code>ConnectionSettings</code> by specifying an idle connection
         * timeout value for your load balancer.</p> <p>For more information, see the
         * following in the <i>Classic Load Balancers Guide</i>:</p> <ul> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-crosszone-lb.html">Cross-Zone
         * Load Balancing</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-conn-drain.html">Connection
         * Draining</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/access-log-collection.html">Access
         * Logs</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-idle-timeout.html">Idle
         * Connection Timeout</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Modifies the attributes of the specified load balancer.</p> <p>You can modify
         * the load balancer attributes, such as <code>AccessLogs</code>,
         * <code>ConnectionDraining</code>, and <code>CrossZoneLoadBalancing</code> by
         * either enabling or disabling them. Or, you can modify the load balancer
         * attribute <code>ConnectionSettings</code> by specifying an idle connection
         * timeout value for your load balancer.</p> <p>For more information, see the
         * following in the <i>Classic Load Balancers Guide</i>:</p> <ul> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-crosszone-lb.html">Cross-Zone
         * Load Balancing</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-conn-drain.html">Connection
         * Draining</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/access-log-collection.html">Access
         * Logs</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-idle-timeout.html">Idle
         * Connection Timeout</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request) const;

        /**
         * <p>Modifies the attributes of the specified load balancer.</p> <p>You can modify
         * the load balancer attributes, such as <code>AccessLogs</code>,
         * <code>ConnectionDraining</code>, and <code>CrossZoneLoadBalancing</code> by
         * either enabling or disabling them. Or, you can modify the load balancer
         * attribute <code>ConnectionSettings</code> by specifying an idle connection
         * timeout value for your load balancer.</p> <p>For more information, see the
         * following in the <i>Classic Load Balancers Guide</i>:</p> <ul> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-crosszone-lb.html">Cross-Zone
         * Load Balancing</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-conn-drain.html">Connection
         * Draining</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/access-log-collection.html">Access
         * Logs</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-idle-timeout.html">Idle
         * Connection Timeout</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ModifyLoadBalancerAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified instances to the specified load balancer.</p> <p>The
         * instance must be a running instance in the same network as the load balancer
         * (EC2-Classic or the same VPC). If you have EC2-Classic instances and a load
         * balancer in a VPC with ClassicLink enabled, you can link the EC2-Classic
         * instances to that VPC and then register the linked EC2-Classic instances with
         * the load balancer in the VPC.</p> <p>Note that
         * <code>RegisterInstanceWithLoadBalancer</code> completes when the request has
         * been registered. Instance registration takes a little time to complete. To check
         * the state of the registered instances, use <a>DescribeLoadBalancers</a> or
         * <a>DescribeInstanceHealth</a>.</p> <p>After the instance is registered, it
         * starts receiving traffic and requests from the load balancer. Any instance that
         * is not in one of the Availability Zones registered for the load balancer is
         * moved to the <code>OutOfService</code> state. If an Availability Zone is added
         * to the load balancer later, any instances registered with the load balancer move
         * to the <code>InService</code> state.</p> <p>To deregister instances from a load
         * balancer, use <a>DeregisterInstancesFromLoadBalancer</a>.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-deregister-register-instances.html">Register
         * or De-Register EC2 Instances</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/RegisterInstancesWithLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterInstancesWithLoadBalancerOutcome RegisterInstancesWithLoadBalancer(const Model::RegisterInstancesWithLoadBalancerRequest& request) const;

        /**
         * <p>Adds the specified instances to the specified load balancer.</p> <p>The
         * instance must be a running instance in the same network as the load balancer
         * (EC2-Classic or the same VPC). If you have EC2-Classic instances and a load
         * balancer in a VPC with ClassicLink enabled, you can link the EC2-Classic
         * instances to that VPC and then register the linked EC2-Classic instances with
         * the load balancer in the VPC.</p> <p>Note that
         * <code>RegisterInstanceWithLoadBalancer</code> completes when the request has
         * been registered. Instance registration takes a little time to complete. To check
         * the state of the registered instances, use <a>DescribeLoadBalancers</a> or
         * <a>DescribeInstanceHealth</a>.</p> <p>After the instance is registered, it
         * starts receiving traffic and requests from the load balancer. Any instance that
         * is not in one of the Availability Zones registered for the load balancer is
         * moved to the <code>OutOfService</code> state. If an Availability Zone is added
         * to the load balancer later, any instances registered with the load balancer move
         * to the <code>InService</code> state.</p> <p>To deregister instances from a load
         * balancer, use <a>DeregisterInstancesFromLoadBalancer</a>.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-deregister-register-instances.html">Register
         * or De-Register EC2 Instances</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/RegisterInstancesWithLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterInstancesWithLoadBalancerOutcomeCallable RegisterInstancesWithLoadBalancerCallable(const Model::RegisterInstancesWithLoadBalancerRequest& request) const;

        /**
         * <p>Adds the specified instances to the specified load balancer.</p> <p>The
         * instance must be a running instance in the same network as the load balancer
         * (EC2-Classic or the same VPC). If you have EC2-Classic instances and a load
         * balancer in a VPC with ClassicLink enabled, you can link the EC2-Classic
         * instances to that VPC and then register the linked EC2-Classic instances with
         * the load balancer in the VPC.</p> <p>Note that
         * <code>RegisterInstanceWithLoadBalancer</code> completes when the request has
         * been registered. Instance registration takes a little time to complete. To check
         * the state of the registered instances, use <a>DescribeLoadBalancers</a> or
         * <a>DescribeInstanceHealth</a>.</p> <p>After the instance is registered, it
         * starts receiving traffic and requests from the load balancer. Any instance that
         * is not in one of the Availability Zones registered for the load balancer is
         * moved to the <code>OutOfService</code> state. If an Availability Zone is added
         * to the load balancer later, any instances registered with the load balancer move
         * to the <code>InService</code> state.</p> <p>To deregister instances from a load
         * balancer, use <a>DeregisterInstancesFromLoadBalancer</a>.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-deregister-register-instances.html">Register
         * or De-Register EC2 Instances</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/RegisterInstancesWithLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterInstancesWithLoadBalancerAsync(const Model::RegisterInstancesWithLoadBalancerRequest& request, const RegisterInstancesWithLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified load balancer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified load balancer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/RemoveTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified load balancer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/RemoveTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the certificate that terminates the specified listener's SSL
         * connections. The specified certificate replaces any prior certificate that was
         * used on the same load balancer and port.</p> <p>For more information about
         * updating your SSL certificate, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-update-ssl-cert.html">Replace
         * the SSL Certificate for Your Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerListenerSSLCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::SetLoadBalancerListenerSSLCertificateOutcome SetLoadBalancerListenerSSLCertificate(const Model::SetLoadBalancerListenerSSLCertificateRequest& request) const;

        /**
         * <p>Sets the certificate that terminates the specified listener's SSL
         * connections. The specified certificate replaces any prior certificate that was
         * used on the same load balancer and port.</p> <p>For more information about
         * updating your SSL certificate, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-update-ssl-cert.html">Replace
         * the SSL Certificate for Your Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerListenerSSLCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLoadBalancerListenerSSLCertificateOutcomeCallable SetLoadBalancerListenerSSLCertificateCallable(const Model::SetLoadBalancerListenerSSLCertificateRequest& request) const;

        /**
         * <p>Sets the certificate that terminates the specified listener's SSL
         * connections. The specified certificate replaces any prior certificate that was
         * used on the same load balancer and port.</p> <p>For more information about
         * updating your SSL certificate, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-update-ssl-cert.html">Replace
         * the SSL Certificate for Your Load Balancer</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerListenerSSLCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLoadBalancerListenerSSLCertificateAsync(const Model::SetLoadBalancerListenerSSLCertificateRequest& request, const SetLoadBalancerListenerSSLCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the set of policies associated with the specified port on which the
         * EC2 instance is listening with a new set of policies. At this time, only the
         * back-end server authentication policy type can be applied to the instance ports;
         * this policy type is composed of multiple public key policies.</p> <p>Each time
         * you use <code>SetLoadBalancerPoliciesForBackendServer</code> to enable the
         * policies, use the <code>PolicyNames</code> parameter to list the policies that
         * you want to enable.</p> <p>You can use <a>DescribeLoadBalancers</a> or
         * <a>DescribeLoadBalancerPolicies</a> to verify that the policy is associated with
         * the EC2 instance.</p> <p>For more information about enabling back-end instance
         * authentication, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-create-https-ssl-load-balancer.html#configure_backendauth_clt">Configure
         * Back-end Instance Authentication</a> in the <i>Classic Load Balancers Guide</i>.
         * For more information about Proxy Protocol, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-proxy-protocol.html">Configure
         * Proxy Protocol Support</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerPoliciesForBackendServer">AWS
         * API Reference</a></p>
         */
        virtual Model::SetLoadBalancerPoliciesForBackendServerOutcome SetLoadBalancerPoliciesForBackendServer(const Model::SetLoadBalancerPoliciesForBackendServerRequest& request) const;

        /**
         * <p>Replaces the set of policies associated with the specified port on which the
         * EC2 instance is listening with a new set of policies. At this time, only the
         * back-end server authentication policy type can be applied to the instance ports;
         * this policy type is composed of multiple public key policies.</p> <p>Each time
         * you use <code>SetLoadBalancerPoliciesForBackendServer</code> to enable the
         * policies, use the <code>PolicyNames</code> parameter to list the policies that
         * you want to enable.</p> <p>You can use <a>DescribeLoadBalancers</a> or
         * <a>DescribeLoadBalancerPolicies</a> to verify that the policy is associated with
         * the EC2 instance.</p> <p>For more information about enabling back-end instance
         * authentication, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-create-https-ssl-load-balancer.html#configure_backendauth_clt">Configure
         * Back-end Instance Authentication</a> in the <i>Classic Load Balancers Guide</i>.
         * For more information about Proxy Protocol, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-proxy-protocol.html">Configure
         * Proxy Protocol Support</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerPoliciesForBackendServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLoadBalancerPoliciesForBackendServerOutcomeCallable SetLoadBalancerPoliciesForBackendServerCallable(const Model::SetLoadBalancerPoliciesForBackendServerRequest& request) const;

        /**
         * <p>Replaces the set of policies associated with the specified port on which the
         * EC2 instance is listening with a new set of policies. At this time, only the
         * back-end server authentication policy type can be applied to the instance ports;
         * this policy type is composed of multiple public key policies.</p> <p>Each time
         * you use <code>SetLoadBalancerPoliciesForBackendServer</code> to enable the
         * policies, use the <code>PolicyNames</code> parameter to list the policies that
         * you want to enable.</p> <p>You can use <a>DescribeLoadBalancers</a> or
         * <a>DescribeLoadBalancerPolicies</a> to verify that the policy is associated with
         * the EC2 instance.</p> <p>For more information about enabling back-end instance
         * authentication, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-create-https-ssl-load-balancer.html#configure_backendauth_clt">Configure
         * Back-end Instance Authentication</a> in the <i>Classic Load Balancers Guide</i>.
         * For more information about Proxy Protocol, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-proxy-protocol.html">Configure
         * Proxy Protocol Support</a> in the <i>Classic Load Balancers
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerPoliciesForBackendServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLoadBalancerPoliciesForBackendServerAsync(const Model::SetLoadBalancerPoliciesForBackendServerRequest& request, const SetLoadBalancerPoliciesForBackendServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the current set of policies for the specified load balancer port
         * with the specified set of policies.</p> <p>To enable back-end server
         * authentication, use <a>SetLoadBalancerPoliciesForBackendServer</a>.</p> <p>For
         * more information about setting policies, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/ssl-config-update.html">Update
         * the SSL Negotiation Configuration</a>, <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-duration">Duration-Based
         * Session Stickiness</a>, and <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-application">Application-Controlled
         * Session Stickiness</a> in the <i>Classic Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerPoliciesOfListener">AWS
         * API Reference</a></p>
         */
        virtual Model::SetLoadBalancerPoliciesOfListenerOutcome SetLoadBalancerPoliciesOfListener(const Model::SetLoadBalancerPoliciesOfListenerRequest& request) const;

        /**
         * <p>Replaces the current set of policies for the specified load balancer port
         * with the specified set of policies.</p> <p>To enable back-end server
         * authentication, use <a>SetLoadBalancerPoliciesForBackendServer</a>.</p> <p>For
         * more information about setting policies, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/ssl-config-update.html">Update
         * the SSL Negotiation Configuration</a>, <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-duration">Duration-Based
         * Session Stickiness</a>, and <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-application">Application-Controlled
         * Session Stickiness</a> in the <i>Classic Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerPoliciesOfListener">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLoadBalancerPoliciesOfListenerOutcomeCallable SetLoadBalancerPoliciesOfListenerCallable(const Model::SetLoadBalancerPoliciesOfListenerRequest& request) const;

        /**
         * <p>Replaces the current set of policies for the specified load balancer port
         * with the specified set of policies.</p> <p>To enable back-end server
         * authentication, use <a>SetLoadBalancerPoliciesForBackendServer</a>.</p> <p>For
         * more information about setting policies, see <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/ssl-config-update.html">Update
         * the SSL Negotiation Configuration</a>, <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-duration">Duration-Based
         * Session Stickiness</a>, and <a
         * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-application">Application-Controlled
         * Session Stickiness</a> in the <i>Classic Load Balancers Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerPoliciesOfListener">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLoadBalancerPoliciesOfListenerAsync(const Model::SetLoadBalancerPoliciesOfListenerRequest& request, const SetLoadBalancerPoliciesOfListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ApplySecurityGroupsToLoadBalancerAsyncHelper(const Model::ApplySecurityGroupsToLoadBalancerRequest& request, const ApplySecurityGroupsToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachLoadBalancerToSubnetsAsyncHelper(const Model::AttachLoadBalancerToSubnetsRequest& request, const AttachLoadBalancerToSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfigureHealthCheckAsyncHelper(const Model::ConfigureHealthCheckRequest& request, const ConfigureHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppCookieStickinessPolicyAsyncHelper(const Model::CreateAppCookieStickinessPolicyRequest& request, const CreateAppCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLBCookieStickinessPolicyAsyncHelper(const Model::CreateLBCookieStickinessPolicyRequest& request, const CreateLBCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoadBalancerAsyncHelper(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoadBalancerListenersAsyncHelper(const Model::CreateLoadBalancerListenersRequest& request, const CreateLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoadBalancerPolicyAsyncHelper(const Model::CreateLoadBalancerPolicyRequest& request, const CreateLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoadBalancerAsyncHelper(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoadBalancerListenersAsyncHelper(const Model::DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoadBalancerPolicyAsyncHelper(const Model::DeleteLoadBalancerPolicyRequest& request, const DeleteLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterInstancesFromLoadBalancerAsyncHelper(const Model::DeregisterInstancesFromLoadBalancerRequest& request, const DeregisterInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountLimitsAsyncHelper(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceHealthAsyncHelper(const Model::DescribeInstanceHealthRequest& request, const DescribeInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBalancerAttributesAsyncHelper(const Model::DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBalancerPoliciesAsyncHelper(const Model::DescribeLoadBalancerPoliciesRequest& request, const DescribeLoadBalancerPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBalancerPolicyTypesAsyncHelper(const Model::DescribeLoadBalancerPolicyTypesRequest& request, const DescribeLoadBalancerPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBalancersAsyncHelper(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachLoadBalancerFromSubnetsAsyncHelper(const Model::DetachLoadBalancerFromSubnetsRequest& request, const DetachLoadBalancerFromSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableAvailabilityZonesForLoadBalancerAsyncHelper(const Model::DisableAvailabilityZonesForLoadBalancerRequest& request, const DisableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableAvailabilityZonesForLoadBalancerAsyncHelper(const Model::EnableAvailabilityZonesForLoadBalancerRequest& request, const EnableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyLoadBalancerAttributesAsyncHelper(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterInstancesWithLoadBalancerAsyncHelper(const Model::RegisterInstancesWithLoadBalancerRequest& request, const RegisterInstancesWithLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetLoadBalancerListenerSSLCertificateAsyncHelper(const Model::SetLoadBalancerListenerSSLCertificateRequest& request, const SetLoadBalancerListenerSSLCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetLoadBalancerPoliciesForBackendServerAsyncHelper(const Model::SetLoadBalancerPoliciesForBackendServerRequest& request, const SetLoadBalancerPoliciesForBackendServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetLoadBalancerPoliciesOfListenerAsyncHelper(const Model::SetLoadBalancerPoliciesOfListenerRequest& request, const SetLoadBalancerPoliciesOfListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ElasticLoadBalancing
} // namespace Aws
