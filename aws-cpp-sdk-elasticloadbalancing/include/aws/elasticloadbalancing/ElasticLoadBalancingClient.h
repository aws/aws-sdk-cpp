/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
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
#include <future>

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

  typedef Utils::Outcome<AddTagsResult, Client::AWSError<ElasticLoadBalancingErrors>> AddTagsOutcome;
  typedef Utils::Outcome<ApplySecurityGroupsToLoadBalancerResult, Client::AWSError<ElasticLoadBalancingErrors>> ApplySecurityGroupsToLoadBalancerOutcome;
  typedef Utils::Outcome<AttachLoadBalancerToSubnetsResult, Client::AWSError<ElasticLoadBalancingErrors>> AttachLoadBalancerToSubnetsOutcome;
  typedef Utils::Outcome<ConfigureHealthCheckResult, Client::AWSError<ElasticLoadBalancingErrors>> ConfigureHealthCheckOutcome;
  typedef Utils::Outcome<CreateAppCookieStickinessPolicyResult, Client::AWSError<ElasticLoadBalancingErrors>> CreateAppCookieStickinessPolicyOutcome;
  typedef Utils::Outcome<CreateLBCookieStickinessPolicyResult, Client::AWSError<ElasticLoadBalancingErrors>> CreateLBCookieStickinessPolicyOutcome;
  typedef Utils::Outcome<CreateLoadBalancerResult, Client::AWSError<ElasticLoadBalancingErrors>> CreateLoadBalancerOutcome;
  typedef Utils::Outcome<CreateLoadBalancerListenersResult, Client::AWSError<ElasticLoadBalancingErrors>> CreateLoadBalancerListenersOutcome;
  typedef Utils::Outcome<CreateLoadBalancerPolicyResult, Client::AWSError<ElasticLoadBalancingErrors>> CreateLoadBalancerPolicyOutcome;
  typedef Utils::Outcome<DeleteLoadBalancerResult, Client::AWSError<ElasticLoadBalancingErrors>> DeleteLoadBalancerOutcome;
  typedef Utils::Outcome<DeleteLoadBalancerListenersResult, Client::AWSError<ElasticLoadBalancingErrors>> DeleteLoadBalancerListenersOutcome;
  typedef Utils::Outcome<DeleteLoadBalancerPolicyResult, Client::AWSError<ElasticLoadBalancingErrors>> DeleteLoadBalancerPolicyOutcome;
  typedef Utils::Outcome<DeregisterInstancesFromLoadBalancerResult, Client::AWSError<ElasticLoadBalancingErrors>> DeregisterInstancesFromLoadBalancerOutcome;
  typedef Utils::Outcome<DescribeInstanceHealthResult, Client::AWSError<ElasticLoadBalancingErrors>> DescribeInstanceHealthOutcome;
  typedef Utils::Outcome<DescribeLoadBalancerAttributesResult, Client::AWSError<ElasticLoadBalancingErrors>> DescribeLoadBalancerAttributesOutcome;
  typedef Utils::Outcome<DescribeLoadBalancerPoliciesResult, Client::AWSError<ElasticLoadBalancingErrors>> DescribeLoadBalancerPoliciesOutcome;
  typedef Utils::Outcome<DescribeLoadBalancerPolicyTypesResult, Client::AWSError<ElasticLoadBalancingErrors>> DescribeLoadBalancerPolicyTypesOutcome;
  typedef Utils::Outcome<DescribeLoadBalancersResult, Client::AWSError<ElasticLoadBalancingErrors>> DescribeLoadBalancersOutcome;
  typedef Utils::Outcome<DescribeTagsResult, Client::AWSError<ElasticLoadBalancingErrors>> DescribeTagsOutcome;
  typedef Utils::Outcome<DetachLoadBalancerFromSubnetsResult, Client::AWSError<ElasticLoadBalancingErrors>> DetachLoadBalancerFromSubnetsOutcome;
  typedef Utils::Outcome<DisableAvailabilityZonesForLoadBalancerResult, Client::AWSError<ElasticLoadBalancingErrors>> DisableAvailabilityZonesForLoadBalancerOutcome;
  typedef Utils::Outcome<EnableAvailabilityZonesForLoadBalancerResult, Client::AWSError<ElasticLoadBalancingErrors>> EnableAvailabilityZonesForLoadBalancerOutcome;
  typedef Utils::Outcome<ModifyLoadBalancerAttributesResult, Client::AWSError<ElasticLoadBalancingErrors>> ModifyLoadBalancerAttributesOutcome;
  typedef Utils::Outcome<RegisterInstancesWithLoadBalancerResult, Client::AWSError<ElasticLoadBalancingErrors>> RegisterInstancesWithLoadBalancerOutcome;
  typedef Utils::Outcome<RemoveTagsResult, Client::AWSError<ElasticLoadBalancingErrors>> RemoveTagsOutcome;
  typedef Utils::Outcome<SetLoadBalancerListenerSSLCertificateResult, Client::AWSError<ElasticLoadBalancingErrors>> SetLoadBalancerListenerSSLCertificateOutcome;
  typedef Utils::Outcome<SetLoadBalancerPoliciesForBackendServerResult, Client::AWSError<ElasticLoadBalancingErrors>> SetLoadBalancerPoliciesForBackendServerOutcome;
  typedef Utils::Outcome<SetLoadBalancerPoliciesOfListenerResult, Client::AWSError<ElasticLoadBalancingErrors>> SetLoadBalancerPoliciesOfListenerOutcome;

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

  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::AddTagsRequest&, const Model::AddTagsOutcome&> AddTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::ApplySecurityGroupsToLoadBalancerRequest&, const Model::ApplySecurityGroupsToLoadBalancerOutcome&> ApplySecurityGroupsToLoadBalancerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::AttachLoadBalancerToSubnetsRequest&, const Model::AttachLoadBalancerToSubnetsOutcome&> AttachLoadBalancerToSubnetsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::ConfigureHealthCheckRequest&, const Model::ConfigureHealthCheckOutcome&> ConfigureHealthCheckOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::CreateAppCookieStickinessPolicyRequest&, const Model::CreateAppCookieStickinessPolicyOutcome&> CreateAppCookieStickinessPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::CreateLBCookieStickinessPolicyRequest&, const Model::CreateLBCookieStickinessPolicyOutcome&> CreateLBCookieStickinessPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::CreateLoadBalancerRequest&, const Model::CreateLoadBalancerOutcome&> CreateLoadBalancerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::CreateLoadBalancerListenersRequest&, const Model::CreateLoadBalancerListenersOutcome&> CreateLoadBalancerListenersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::CreateLoadBalancerPolicyRequest&, const Model::CreateLoadBalancerPolicyOutcome&> CreateLoadBalancerPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DeleteLoadBalancerRequest&, const Model::DeleteLoadBalancerOutcome&> DeleteLoadBalancerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DeleteLoadBalancerListenersRequest&, const Model::DeleteLoadBalancerListenersOutcome&> DeleteLoadBalancerListenersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DeleteLoadBalancerPolicyRequest&, const Model::DeleteLoadBalancerPolicyOutcome&> DeleteLoadBalancerPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DeregisterInstancesFromLoadBalancerRequest&, const Model::DeregisterInstancesFromLoadBalancerOutcome&> DeregisterInstancesFromLoadBalancerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DescribeInstanceHealthRequest&, const Model::DescribeInstanceHealthOutcome&> DescribeInstanceHealthOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DescribeLoadBalancerAttributesRequest&, const Model::DescribeLoadBalancerAttributesOutcome&> DescribeLoadBalancerAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DescribeLoadBalancerPoliciesRequest&, const Model::DescribeLoadBalancerPoliciesOutcome&> DescribeLoadBalancerPoliciesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DescribeLoadBalancerPolicyTypesRequest&, const Model::DescribeLoadBalancerPolicyTypesOutcome&> DescribeLoadBalancerPolicyTypesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DescribeLoadBalancersRequest&, const Model::DescribeLoadBalancersOutcome&> DescribeLoadBalancersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&> DescribeTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DetachLoadBalancerFromSubnetsRequest&, const Model::DetachLoadBalancerFromSubnetsOutcome&> DetachLoadBalancerFromSubnetsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::DisableAvailabilityZonesForLoadBalancerRequest&, const Model::DisableAvailabilityZonesForLoadBalancerOutcome&> DisableAvailabilityZonesForLoadBalancerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::EnableAvailabilityZonesForLoadBalancerRequest&, const Model::EnableAvailabilityZonesForLoadBalancerOutcome&> EnableAvailabilityZonesForLoadBalancerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::ModifyLoadBalancerAttributesRequest&, const Model::ModifyLoadBalancerAttributesOutcome&> ModifyLoadBalancerAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::RegisterInstancesWithLoadBalancerRequest&, const Model::RegisterInstancesWithLoadBalancerOutcome&> RegisterInstancesWithLoadBalancerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&> RemoveTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::SetLoadBalancerListenerSSLCertificateRequest&, const Model::SetLoadBalancerListenerSSLCertificateOutcome&> SetLoadBalancerListenerSSLCertificateOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::SetLoadBalancerPoliciesForBackendServerRequest&, const Model::SetLoadBalancerPoliciesForBackendServerOutcome&> SetLoadBalancerPoliciesForBackendServerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticLoadBalancingClient, const Model::SetLoadBalancerPoliciesOfListenerRequest&, const Model::SetLoadBalancerPoliciesOfListenerOutcome&> SetLoadBalancerPoliciesOfListenerOutcomeReceivedEvent;

  /*
    <fullname>Elastic Load Balancing</fullname> <p>Elastic Load Balancing automatically distributes incoming web traffic across multiple Amazon EC2 instances.</p> <p>All Elastic Load Balancing actions and commands are <i>idempotent</i>, which means that they complete no more than one time. If you repeat a request or a command, the action succeeds with a 200 OK response code.</p> <p>For detailed information about the features of Elastic Load Balancing, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenarios.html">Managing Load Balancers</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
  */
  class AWS_ELASTICLOADBALANCING_API ElasticLoadBalancingClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      ElasticLoadBalancingClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      ElasticLoadBalancingClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      ElasticLoadBalancingClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~ElasticLoadBalancingClient();

     /*
       <p>Adds the specified tags to the specified load balancer. Each load balancer can have a maximum of 10 tags.</p> <p>Each tag consists of a key and an optional value. If a tag with the same key is already associated with the load balancer, <code>AddTags</code> updates its value.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#tagging-elb">Tagging</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

     /*
       <p>Adds the specified tags to the specified load balancer. Each load balancer can have a maximum of 10 tags.</p> <p>Each tag consists of a key and an optional value. If a tag with the same key is already associated with the load balancer, <code>AddTags</code> updates its value.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#tagging-elb">Tagging</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

     /*
       <p>Adds the specified tags to the specified load balancer. Each load balancer can have a maximum of 10 tags.</p> <p>Each tag consists of a key and an optional value. If a tag with the same key is already associated with the load balancer, <code>AddTags</code> updates its value.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#tagging-elb">Tagging</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddTagsAsync(const Model::AddTagsRequest& request) const;

     /*
       <p>Associates one or more security groups with your load balancer in a virtual private cloud (VPC). The specified security groups override the previously associated security groups.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/USVPC_ApplySG.html">Manage Security Groups for Amazon VPC</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::ApplySecurityGroupsToLoadBalancerOutcome ApplySecurityGroupsToLoadBalancer(const Model::ApplySecurityGroupsToLoadBalancerRequest& request) const;

     /*
       <p>Associates one or more security groups with your load balancer in a virtual private cloud (VPC). The specified security groups override the previously associated security groups.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/USVPC_ApplySG.html">Manage Security Groups for Amazon VPC</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ApplySecurityGroupsToLoadBalancerOutcomeCallable ApplySecurityGroupsToLoadBalancerCallable(const Model::ApplySecurityGroupsToLoadBalancerRequest& request) const;

     /*
       <p>Associates one or more security groups with your load balancer in a virtual private cloud (VPC). The specified security groups override the previously associated security groups.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/USVPC_ApplySG.html">Manage Security Groups for Amazon VPC</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ApplySecurityGroupsToLoadBalancerAsync(const Model::ApplySecurityGroupsToLoadBalancerRequest& request) const;

     /*
       <p>Adds one or more subnets to the set of configured subnets for the specified load balancer.</p> <p>The load balancer evenly distributes requests across all registered subnets. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenariosForVPC.html">Elastic Load Balancing in Amazon VPC</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::AttachLoadBalancerToSubnetsOutcome AttachLoadBalancerToSubnets(const Model::AttachLoadBalancerToSubnetsRequest& request) const;

     /*
       <p>Adds one or more subnets to the set of configured subnets for the specified load balancer.</p> <p>The load balancer evenly distributes requests across all registered subnets. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenariosForVPC.html">Elastic Load Balancing in Amazon VPC</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AttachLoadBalancerToSubnetsOutcomeCallable AttachLoadBalancerToSubnetsCallable(const Model::AttachLoadBalancerToSubnetsRequest& request) const;

     /*
       <p>Adds one or more subnets to the set of configured subnets for the specified load balancer.</p> <p>The load balancer evenly distributes requests across all registered subnets. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenariosForVPC.html">Elastic Load Balancing in Amazon VPC</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AttachLoadBalancerToSubnetsAsync(const Model::AttachLoadBalancerToSubnetsRequest& request) const;

     /*
       <p>Specifies the health check settings to use when evaluating the health state of your back-end instances.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#healthcheck">Health Checks</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::ConfigureHealthCheckOutcome ConfigureHealthCheck(const Model::ConfigureHealthCheckRequest& request) const;

     /*
       <p>Specifies the health check settings to use when evaluating the health state of your back-end instances.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#healthcheck">Health Checks</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ConfigureHealthCheckOutcomeCallable ConfigureHealthCheckCallable(const Model::ConfigureHealthCheckRequest& request) const;

     /*
       <p>Specifies the health check settings to use when evaluating the health state of your back-end instances.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#healthcheck">Health Checks</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ConfigureHealthCheckAsync(const Model::ConfigureHealthCheckRequest& request) const;

     /*
       <p>Generates a stickiness policy with sticky session lifetimes that follow that of an application-generated cookie. This policy can be associated only with HTTP/HTTPS listeners.</p> <p>This policy is similar to the policy created by <a>CreateLBCookieStickinessPolicy</a>, except that the lifetime of the special Elastic Load Balancing cookie, <code>AWSELB</code>, follows the lifetime of the application-generated cookie specified in the policy configuration. The load balancer only inserts a new stickiness cookie when the application response includes a new application cookie.</p> <p>If the application cookie is explicitly removed or expires, the session stops being sticky until a new application cookie is issued.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_StickySessions.html#US_EnableStickySessionsAppCookies">Application-Controlled Session Stickiness</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::CreateAppCookieStickinessPolicyOutcome CreateAppCookieStickinessPolicy(const Model::CreateAppCookieStickinessPolicyRequest& request) const;

     /*
       <p>Generates a stickiness policy with sticky session lifetimes that follow that of an application-generated cookie. This policy can be associated only with HTTP/HTTPS listeners.</p> <p>This policy is similar to the policy created by <a>CreateLBCookieStickinessPolicy</a>, except that the lifetime of the special Elastic Load Balancing cookie, <code>AWSELB</code>, follows the lifetime of the application-generated cookie specified in the policy configuration. The load balancer only inserts a new stickiness cookie when the application response includes a new application cookie.</p> <p>If the application cookie is explicitly removed or expires, the session stops being sticky until a new application cookie is issued.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_StickySessions.html#US_EnableStickySessionsAppCookies">Application-Controlled Session Stickiness</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateAppCookieStickinessPolicyOutcomeCallable CreateAppCookieStickinessPolicyCallable(const Model::CreateAppCookieStickinessPolicyRequest& request) const;

     /*
       <p>Generates a stickiness policy with sticky session lifetimes that follow that of an application-generated cookie. This policy can be associated only with HTTP/HTTPS listeners.</p> <p>This policy is similar to the policy created by <a>CreateLBCookieStickinessPolicy</a>, except that the lifetime of the special Elastic Load Balancing cookie, <code>AWSELB</code>, follows the lifetime of the application-generated cookie specified in the policy configuration. The load balancer only inserts a new stickiness cookie when the application response includes a new application cookie.</p> <p>If the application cookie is explicitly removed or expires, the session stops being sticky until a new application cookie is issued.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_StickySessions.html#US_EnableStickySessionsAppCookies">Application-Controlled Session Stickiness</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateAppCookieStickinessPolicyAsync(const Model::CreateAppCookieStickinessPolicyRequest& request) const;

     /*
       <p>Generates a stickiness policy with sticky session lifetimes controlled by the lifetime of the browser (user-agent) or a specified expiration period. This policy can be associated only with HTTP/HTTPS listeners.</p> <p>When a load balancer implements this policy, the load balancer uses a special cookie to track the back-end server instance for each request. When the load balancer receives a request, it first checks to see if this cookie is present in the request. If so, the load balancer sends the request to the application server specified in the cookie. If not, the load balancer sends the request to a server that is chosen based on the existing load-balancing algorithm.</p> <p>A cookie is inserted into the response for binding subsequent requests from the same user to that server. The validity of the cookie is based on the cookie expiration time, which is specified in the policy configuration.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_StickySessions.html#US_EnableStickySessionsLBCookies">Duration-Based Session Stickiness</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::CreateLBCookieStickinessPolicyOutcome CreateLBCookieStickinessPolicy(const Model::CreateLBCookieStickinessPolicyRequest& request) const;

     /*
       <p>Generates a stickiness policy with sticky session lifetimes controlled by the lifetime of the browser (user-agent) or a specified expiration period. This policy can be associated only with HTTP/HTTPS listeners.</p> <p>When a load balancer implements this policy, the load balancer uses a special cookie to track the back-end server instance for each request. When the load balancer receives a request, it first checks to see if this cookie is present in the request. If so, the load balancer sends the request to the application server specified in the cookie. If not, the load balancer sends the request to a server that is chosen based on the existing load-balancing algorithm.</p> <p>A cookie is inserted into the response for binding subsequent requests from the same user to that server. The validity of the cookie is based on the cookie expiration time, which is specified in the policy configuration.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_StickySessions.html#US_EnableStickySessionsLBCookies">Duration-Based Session Stickiness</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateLBCookieStickinessPolicyOutcomeCallable CreateLBCookieStickinessPolicyCallable(const Model::CreateLBCookieStickinessPolicyRequest& request) const;

     /*
       <p>Generates a stickiness policy with sticky session lifetimes controlled by the lifetime of the browser (user-agent) or a specified expiration period. This policy can be associated only with HTTP/HTTPS listeners.</p> <p>When a load balancer implements this policy, the load balancer uses a special cookie to track the back-end server instance for each request. When the load balancer receives a request, it first checks to see if this cookie is present in the request. If so, the load balancer sends the request to the application server specified in the cookie. If not, the load balancer sends the request to a server that is chosen based on the existing load-balancing algorithm.</p> <p>A cookie is inserted into the response for binding subsequent requests from the same user to that server. The validity of the cookie is based on the cookie expiration time, which is specified in the policy configuration.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_StickySessions.html#US_EnableStickySessionsLBCookies">Duration-Based Session Stickiness</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateLBCookieStickinessPolicyAsync(const Model::CreateLBCookieStickinessPolicyRequest& request) const;

     /*
       <p>Creates a load balancer.</p> <p>If the call completes successfully, a new load balancer is created with a unique Domain Name Service (DNS) name. The DNS name includes the name of the AWS region in which the load balancer was created. For example, the DNS name might end with either of the following:</p> <ul> <li> <code>us-east-1.elb.amazonaws.com</code> </li> <li> <code>us-west-2.elb.amazonaws.com</code> </li> </ul> <p>For information about the AWS regions supported by Elastic Load Balancing, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elb_region">Regions and Endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p> <p>You can create up to 20 load balancers per region per account. You can request an increase for the number of load balancers for your account. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/elb-limits.html">Elastic Load Balancing Limits</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p> <p>Elastic Load Balancing supports load balancing your EC2 instances launched in either the EC2-Classic or EC2-VPC platform. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenariosForEC2.html">Elastic Load Balancing in EC2-Classic</a> or <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenariosForVPC.html">Elastic Load Balancing in a VPC</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest& request) const;

     /*
       <p>Creates a load balancer.</p> <p>If the call completes successfully, a new load balancer is created with a unique Domain Name Service (DNS) name. The DNS name includes the name of the AWS region in which the load balancer was created. For example, the DNS name might end with either of the following:</p> <ul> <li> <code>us-east-1.elb.amazonaws.com</code> </li> <li> <code>us-west-2.elb.amazonaws.com</code> </li> </ul> <p>For information about the AWS regions supported by Elastic Load Balancing, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elb_region">Regions and Endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p> <p>You can create up to 20 load balancers per region per account. You can request an increase for the number of load balancers for your account. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/elb-limits.html">Elastic Load Balancing Limits</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p> <p>Elastic Load Balancing supports load balancing your EC2 instances launched in either the EC2-Classic or EC2-VPC platform. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenariosForEC2.html">Elastic Load Balancing in EC2-Classic</a> or <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenariosForVPC.html">Elastic Load Balancing in a VPC</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;

     /*
       <p>Creates a load balancer.</p> <p>If the call completes successfully, a new load balancer is created with a unique Domain Name Service (DNS) name. The DNS name includes the name of the AWS region in which the load balancer was created. For example, the DNS name might end with either of the following:</p> <ul> <li> <code>us-east-1.elb.amazonaws.com</code> </li> <li> <code>us-west-2.elb.amazonaws.com</code> </li> </ul> <p>For information about the AWS regions supported by Elastic Load Balancing, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elb_region">Regions and Endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p> <p>You can create up to 20 load balancers per region per account. You can request an increase for the number of load balancers for your account. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/elb-limits.html">Elastic Load Balancing Limits</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p> <p>Elastic Load Balancing supports load balancing your EC2 instances launched in either the EC2-Classic or EC2-VPC platform. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenariosForEC2.html">Elastic Load Balancing in EC2-Classic</a> or <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/UserScenariosForVPC.html">Elastic Load Balancing in a VPC</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request) const;

     /*
       <p>Creates one or more listeners for the specified load balancer. If a listener with the specified port does not already exist, it is created; otherwise, the properties of the new listener must match the properties of the existing listener.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/us-add-listener.html">Add a Listener to Your Load Balancer</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::CreateLoadBalancerListenersOutcome CreateLoadBalancerListeners(const Model::CreateLoadBalancerListenersRequest& request) const;

     /*
       <p>Creates one or more listeners for the specified load balancer. If a listener with the specified port does not already exist, it is created; otherwise, the properties of the new listener must match the properties of the existing listener.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/us-add-listener.html">Add a Listener to Your Load Balancer</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateLoadBalancerListenersOutcomeCallable CreateLoadBalancerListenersCallable(const Model::CreateLoadBalancerListenersRequest& request) const;

     /*
       <p>Creates one or more listeners for the specified load balancer. If a listener with the specified port does not already exist, it is created; otherwise, the properties of the new listener must match the properties of the existing listener.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/us-add-listener.html">Add a Listener to Your Load Balancer</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateLoadBalancerListenersAsync(const Model::CreateLoadBalancerListenersRequest& request) const;

     /*
       <p>Creates a policy with the specified attributes for the specified load balancer.</p> <p>Policies are settings that are saved for your load balancer and that can be applied to the front-end listener or the back-end application server, depending on the policy type.</p>
     */
     Model::CreateLoadBalancerPolicyOutcome CreateLoadBalancerPolicy(const Model::CreateLoadBalancerPolicyRequest& request) const;

     /*
       <p>Creates a policy with the specified attributes for the specified load balancer.</p> <p>Policies are settings that are saved for your load balancer and that can be applied to the front-end listener or the back-end application server, depending on the policy type.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateLoadBalancerPolicyOutcomeCallable CreateLoadBalancerPolicyCallable(const Model::CreateLoadBalancerPolicyRequest& request) const;

     /*
       <p>Creates a policy with the specified attributes for the specified load balancer.</p> <p>Policies are settings that are saved for your load balancer and that can be applied to the front-end listener or the back-end application server, depending on the policy type.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateLoadBalancerPolicyAsync(const Model::CreateLoadBalancerPolicyRequest& request) const;

     /*
       <p>Deletes the specified load balancer.</p> <p>If you are attempting to recreate a load balancer, you must reconfigure all settings. The DNS name associated with a deleted load balancer are no longer usable. The name and associated DNS record of the deleted load balancer no longer exist and traffic sent to any of its IP addresses is no longer delivered to back-end instances.</p> <p>If the load balancer does not exist or has already been deleted, the call to <code>DeleteLoadBalancer</code> still succeeds.</p>
     */
     Model::DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest& request) const;

     /*
       <p>Deletes the specified load balancer.</p> <p>If you are attempting to recreate a load balancer, you must reconfigure all settings. The DNS name associated with a deleted load balancer are no longer usable. The name and associated DNS record of the deleted load balancer no longer exist and traffic sent to any of its IP addresses is no longer delivered to back-end instances.</p> <p>If the load balancer does not exist or has already been deleted, the call to <code>DeleteLoadBalancer</code> still succeeds.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;

     /*
       <p>Deletes the specified load balancer.</p> <p>If you are attempting to recreate a load balancer, you must reconfigure all settings. The DNS name associated with a deleted load balancer are no longer usable. The name and associated DNS record of the deleted load balancer no longer exist and traffic sent to any of its IP addresses is no longer delivered to back-end instances.</p> <p>If the load balancer does not exist or has already been deleted, the call to <code>DeleteLoadBalancer</code> still succeeds.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request) const;

     /*
       <p>Deletes the specified listeners from the specified load balancer.</p>
     */
     Model::DeleteLoadBalancerListenersOutcome DeleteLoadBalancerListeners(const Model::DeleteLoadBalancerListenersRequest& request) const;

     /*
       <p>Deletes the specified listeners from the specified load balancer.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteLoadBalancerListenersOutcomeCallable DeleteLoadBalancerListenersCallable(const Model::DeleteLoadBalancerListenersRequest& request) const;

     /*
       <p>Deletes the specified listeners from the specified load balancer.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteLoadBalancerListenersAsync(const Model::DeleteLoadBalancerListenersRequest& request) const;

     /*
       <p>Deletes the specified policy from the specified load balancer. This policy must not be enabled for any listeners.</p>
     */
     Model::DeleteLoadBalancerPolicyOutcome DeleteLoadBalancerPolicy(const Model::DeleteLoadBalancerPolicyRequest& request) const;

     /*
       <p>Deletes the specified policy from the specified load balancer. This policy must not be enabled for any listeners.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteLoadBalancerPolicyOutcomeCallable DeleteLoadBalancerPolicyCallable(const Model::DeleteLoadBalancerPolicyRequest& request) const;

     /*
       <p>Deletes the specified policy from the specified load balancer. This policy must not be enabled for any listeners.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteLoadBalancerPolicyAsync(const Model::DeleteLoadBalancerPolicyRequest& request) const;

     /*
       <p>Deregisters the specified instances from the specified load balancer. After the instance is deregistered, it no longer receives traffic from the load balancer.</p> <p>You can use <a>DescribeLoadBalancers</a> to verify that the instance is deregistered from the load balancer.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_DeReg_Reg_Instances.html">Deregister and Register Amazon EC2 Instances</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::DeregisterInstancesFromLoadBalancerOutcome DeregisterInstancesFromLoadBalancer(const Model::DeregisterInstancesFromLoadBalancerRequest& request) const;

     /*
       <p>Deregisters the specified instances from the specified load balancer. After the instance is deregistered, it no longer receives traffic from the load balancer.</p> <p>You can use <a>DescribeLoadBalancers</a> to verify that the instance is deregistered from the load balancer.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_DeReg_Reg_Instances.html">Deregister and Register Amazon EC2 Instances</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeregisterInstancesFromLoadBalancerOutcomeCallable DeregisterInstancesFromLoadBalancerCallable(const Model::DeregisterInstancesFromLoadBalancerRequest& request) const;

     /*
       <p>Deregisters the specified instances from the specified load balancer. After the instance is deregistered, it no longer receives traffic from the load balancer.</p> <p>You can use <a>DescribeLoadBalancers</a> to verify that the instance is deregistered from the load balancer.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_DeReg_Reg_Instances.html">Deregister and Register Amazon EC2 Instances</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeregisterInstancesFromLoadBalancerAsync(const Model::DeregisterInstancesFromLoadBalancerRequest& request) const;

     /*
       <p>Describes the state of the specified instances registered with the specified load balancer. If no instances are specified, the call describes the state of all instances registered with the load balancer, not including any terminated instances.</p>
     */
     Model::DescribeInstanceHealthOutcome DescribeInstanceHealth(const Model::DescribeInstanceHealthRequest& request) const;

     /*
       <p>Describes the state of the specified instances registered with the specified load balancer. If no instances are specified, the call describes the state of all instances registered with the load balancer, not including any terminated instances.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeInstanceHealthOutcomeCallable DescribeInstanceHealthCallable(const Model::DescribeInstanceHealthRequest& request) const;

     /*
       <p>Describes the state of the specified instances registered with the specified load balancer. If no instances are specified, the call describes the state of all instances registered with the load balancer, not including any terminated instances.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeInstanceHealthAsync(const Model::DescribeInstanceHealthRequest& request) const;

     /*
       <p>Describes the attributes for the specified load balancer.</p>
     */
     Model::DescribeLoadBalancerAttributesOutcome DescribeLoadBalancerAttributes(const Model::DescribeLoadBalancerAttributesRequest& request) const;

     /*
       <p>Describes the attributes for the specified load balancer.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLoadBalancerAttributesOutcomeCallable DescribeLoadBalancerAttributesCallable(const Model::DescribeLoadBalancerAttributesRequest& request) const;

     /*
       <p>Describes the attributes for the specified load balancer.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLoadBalancerAttributesAsync(const Model::DescribeLoadBalancerAttributesRequest& request) const;

     /*
       <p>Describes the specified policies.</p> <p>If you specify a load balancer name, the action returns the descriptions of all policies created for the load balancer. If you specify a policy name associated with your load balancer, the action returns the description of that policy. If you don't specify a load balancer name, the action returns descriptions of the specified sample policies, or descriptions of all sample policies. The names of the sample policies have the <code>ELBSample-</code> prefix.</p>
     */
     Model::DescribeLoadBalancerPoliciesOutcome DescribeLoadBalancerPolicies(const Model::DescribeLoadBalancerPoliciesRequest& request) const;

     /*
       <p>Describes the specified policies.</p> <p>If you specify a load balancer name, the action returns the descriptions of all policies created for the load balancer. If you specify a policy name associated with your load balancer, the action returns the description of that policy. If you don't specify a load balancer name, the action returns descriptions of the specified sample policies, or descriptions of all sample policies. The names of the sample policies have the <code>ELBSample-</code> prefix.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLoadBalancerPoliciesOutcomeCallable DescribeLoadBalancerPoliciesCallable(const Model::DescribeLoadBalancerPoliciesRequest& request) const;

     /*
       <p>Describes the specified policies.</p> <p>If you specify a load balancer name, the action returns the descriptions of all policies created for the load balancer. If you specify a policy name associated with your load balancer, the action returns the description of that policy. If you don't specify a load balancer name, the action returns descriptions of the specified sample policies, or descriptions of all sample policies. The names of the sample policies have the <code>ELBSample-</code> prefix.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLoadBalancerPoliciesAsync(const Model::DescribeLoadBalancerPoliciesRequest& request) const;

     /*
       <p>Describes the specified load balancer policy types.</p> <p>You can use these policy types with <a>CreateLoadBalancerPolicy</a> to create policy configurations for a load balancer.</p>
     */
     Model::DescribeLoadBalancerPolicyTypesOutcome DescribeLoadBalancerPolicyTypes(const Model::DescribeLoadBalancerPolicyTypesRequest& request) const;

     /*
       <p>Describes the specified load balancer policy types.</p> <p>You can use these policy types with <a>CreateLoadBalancerPolicy</a> to create policy configurations for a load balancer.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLoadBalancerPolicyTypesOutcomeCallable DescribeLoadBalancerPolicyTypesCallable(const Model::DescribeLoadBalancerPolicyTypesRequest& request) const;

     /*
       <p>Describes the specified load balancer policy types.</p> <p>You can use these policy types with <a>CreateLoadBalancerPolicy</a> to create policy configurations for a load balancer.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLoadBalancerPolicyTypesAsync(const Model::DescribeLoadBalancerPolicyTypesRequest& request) const;

     /*
       <p>Describes the specified the load balancers. If no load balancers are specified, the call describes all of your load balancers.</p>
     */
     Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

     /*
       <p>Describes the specified the load balancers. If no load balancers are specified, the call describes all of your load balancers.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;

     /*
       <p>Describes the specified the load balancers. If no load balancers are specified, the call describes all of your load balancers.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request) const;

     /*
       <p>Describes the tags associated with the specified load balancers.</p>
     */
     Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

     /*
       <p>Describes the tags associated with the specified load balancers.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

     /*
       <p>Describes the tags associated with the specified load balancers.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeTagsAsync(const Model::DescribeTagsRequest& request) const;

     /*
       <p>Removes the specified subnets from the set of configured subnets for the load balancer.</p> <p>After a subnet is removed, all EC2 instances registered with the load balancer in the removed subnet go into the <code>OutOfService</code> state. Then, the load balancer balances the traffic among the remaining routable subnets.</p>
     */
     Model::DetachLoadBalancerFromSubnetsOutcome DetachLoadBalancerFromSubnets(const Model::DetachLoadBalancerFromSubnetsRequest& request) const;

     /*
       <p>Removes the specified subnets from the set of configured subnets for the load balancer.</p> <p>After a subnet is removed, all EC2 instances registered with the load balancer in the removed subnet go into the <code>OutOfService</code> state. Then, the load balancer balances the traffic among the remaining routable subnets.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DetachLoadBalancerFromSubnetsOutcomeCallable DetachLoadBalancerFromSubnetsCallable(const Model::DetachLoadBalancerFromSubnetsRequest& request) const;

     /*
       <p>Removes the specified subnets from the set of configured subnets for the load balancer.</p> <p>After a subnet is removed, all EC2 instances registered with the load balancer in the removed subnet go into the <code>OutOfService</code> state. Then, the load balancer balances the traffic among the remaining routable subnets.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DetachLoadBalancerFromSubnetsAsync(const Model::DetachLoadBalancerFromSubnetsRequest& request) const;

     /*
       <p>Removes the specified Availability Zones from the set of Availability Zones for the specified load balancer.</p> <p>There must be at least one Availability Zone registered with a load balancer at all times. After an Availability Zone is removed, all instances registered with the load balancer that are in the removed Availability Zone go into the <code>OutOfService</code> state. Then, the load balancer attempts to equally balance the traffic among its remaining Availability Zones.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_ShrinkLBApp04.html">Disable an Availability Zone from a Load-Balanced Application</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::DisableAvailabilityZonesForLoadBalancerOutcome DisableAvailabilityZonesForLoadBalancer(const Model::DisableAvailabilityZonesForLoadBalancerRequest& request) const;

     /*
       <p>Removes the specified Availability Zones from the set of Availability Zones for the specified load balancer.</p> <p>There must be at least one Availability Zone registered with a load balancer at all times. After an Availability Zone is removed, all instances registered with the load balancer that are in the removed Availability Zone go into the <code>OutOfService</code> state. Then, the load balancer attempts to equally balance the traffic among its remaining Availability Zones.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_ShrinkLBApp04.html">Disable an Availability Zone from a Load-Balanced Application</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DisableAvailabilityZonesForLoadBalancerOutcomeCallable DisableAvailabilityZonesForLoadBalancerCallable(const Model::DisableAvailabilityZonesForLoadBalancerRequest& request) const;

     /*
       <p>Removes the specified Availability Zones from the set of Availability Zones for the specified load balancer.</p> <p>There must be at least one Availability Zone registered with a load balancer at all times. After an Availability Zone is removed, all instances registered with the load balancer that are in the removed Availability Zone go into the <code>OutOfService</code> state. Then, the load balancer attempts to equally balance the traffic among its remaining Availability Zones.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_ShrinkLBApp04.html">Disable an Availability Zone from a Load-Balanced Application</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DisableAvailabilityZonesForLoadBalancerAsync(const Model::DisableAvailabilityZonesForLoadBalancerRequest& request) const;

     /*
       <p>Adds the specified Availability Zones to the set of Availability Zones for the specified load balancer.</p> <p>The load balancer evenly distributes requests across all its registered Availability Zones that contain instances.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_AddLBAvailabilityZone.html">Add Availability Zone</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::EnableAvailabilityZonesForLoadBalancerOutcome EnableAvailabilityZonesForLoadBalancer(const Model::EnableAvailabilityZonesForLoadBalancerRequest& request) const;

     /*
       <p>Adds the specified Availability Zones to the set of Availability Zones for the specified load balancer.</p> <p>The load balancer evenly distributes requests across all its registered Availability Zones that contain instances.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_AddLBAvailabilityZone.html">Add Availability Zone</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::EnableAvailabilityZonesForLoadBalancerOutcomeCallable EnableAvailabilityZonesForLoadBalancerCallable(const Model::EnableAvailabilityZonesForLoadBalancerRequest& request) const;

     /*
       <p>Adds the specified Availability Zones to the set of Availability Zones for the specified load balancer.</p> <p>The load balancer evenly distributes requests across all its registered Availability Zones that contain instances.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_AddLBAvailabilityZone.html">Add Availability Zone</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void EnableAvailabilityZonesForLoadBalancerAsync(const Model::EnableAvailabilityZonesForLoadBalancerRequest& request) const;

     /*
       <p>Modifies the attributes of the specified load balancer.</p> <p>You can modify the load balancer attributes, such as <code>AccessLogs</code>, <code>ConnectionDraining</code>, and <code>CrossZoneLoadBalancing</code> by either enabling or disabling them. Or, you can modify the load balancer attribute <code>ConnectionSettings</code> by specifying an idle connection timeout value for your load balancer.</p> <p>For more information, see the following in the <i>Elastic Load Balancing Developer Guide</i>:</p> <ul> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#request-routing">Cross-Zone Load Balancing</a></li> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection Draining</a></li> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/access-log-collection.html">Access Logs</a></li> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#idle-timeout">Idle Connection Timeout</a></li> </ul>
     */
     Model::ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest& request) const;

     /*
       <p>Modifies the attributes of the specified load balancer.</p> <p>You can modify the load balancer attributes, such as <code>AccessLogs</code>, <code>ConnectionDraining</code>, and <code>CrossZoneLoadBalancing</code> by either enabling or disabling them. Or, you can modify the load balancer attribute <code>ConnectionSettings</code> by specifying an idle connection timeout value for your load balancer.</p> <p>For more information, see the following in the <i>Elastic Load Balancing Developer Guide</i>:</p> <ul> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#request-routing">Cross-Zone Load Balancing</a></li> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection Draining</a></li> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/access-log-collection.html">Access Logs</a></li> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#idle-timeout">Idle Connection Timeout</a></li> </ul>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request) const;

     /*
       <p>Modifies the attributes of the specified load balancer.</p> <p>You can modify the load balancer attributes, such as <code>AccessLogs</code>, <code>ConnectionDraining</code>, and <code>CrossZoneLoadBalancing</code> by either enabling or disabling them. Or, you can modify the load balancer attribute <code>ConnectionSettings</code> by specifying an idle connection timeout value for your load balancer.</p> <p>For more information, see the following in the <i>Elastic Load Balancing Developer Guide</i>:</p> <ul> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#request-routing">Cross-Zone Load Balancing</a></li> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection Draining</a></li> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/access-log-collection.html">Access Logs</a></li> <li><a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#idle-timeout">Idle Connection Timeout</a></li> </ul>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request) const;

     /*
       <p>Adds the specified instances to the specified load balancer.</p> <p>The instance must be a running instance in the same network as the load balancer (EC2-Classic or the same VPC). If you have EC2-Classic instances and a load balancer in a VPC with ClassicLink enabled, you can link the EC2-Classic instances to that VPC and then register the linked EC2-Classic instances with the load balancer in the VPC.</p> <p>Note that <code>RegisterInstanceWithLoadBalancer</code> completes when the request has been registered. Instance registration happens shortly afterwards. To check the state of the registered instances, use <a>DescribeLoadBalancers</a> or <a>DescribeInstanceHealth</a>.</p> <p>After the instance is registered, it starts receiving traffic and requests from the load balancer. Any instance that is not in one of the Availability Zones registered for the load balancer is moved to the <code>OutOfService</code> state. If an Availability Zone is added to the load balancer later, any instances registered with the load balancer move to the <code>InService</code> state.</p> <p>If you stop an instance registered with a load balancer and then start it, the IP addresses associated with the instance changes. Elastic Load Balancing cannot recognize the new IP address, which prevents it from routing traffic to the instances. We recommend that you use the following sequence: stop the instance, deregister the instance, start the instance, and then register the instance. To deregister instances from a load balancer, use <a>DeregisterInstancesFromLoadBalancer</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_DeReg_Reg_Instances.html">Deregister and Register EC2 Instances</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::RegisterInstancesWithLoadBalancerOutcome RegisterInstancesWithLoadBalancer(const Model::RegisterInstancesWithLoadBalancerRequest& request) const;

     /*
       <p>Adds the specified instances to the specified load balancer.</p> <p>The instance must be a running instance in the same network as the load balancer (EC2-Classic or the same VPC). If you have EC2-Classic instances and a load balancer in a VPC with ClassicLink enabled, you can link the EC2-Classic instances to that VPC and then register the linked EC2-Classic instances with the load balancer in the VPC.</p> <p>Note that <code>RegisterInstanceWithLoadBalancer</code> completes when the request has been registered. Instance registration happens shortly afterwards. To check the state of the registered instances, use <a>DescribeLoadBalancers</a> or <a>DescribeInstanceHealth</a>.</p> <p>After the instance is registered, it starts receiving traffic and requests from the load balancer. Any instance that is not in one of the Availability Zones registered for the load balancer is moved to the <code>OutOfService</code> state. If an Availability Zone is added to the load balancer later, any instances registered with the load balancer move to the <code>InService</code> state.</p> <p>If you stop an instance registered with a load balancer and then start it, the IP addresses associated with the instance changes. Elastic Load Balancing cannot recognize the new IP address, which prevents it from routing traffic to the instances. We recommend that you use the following sequence: stop the instance, deregister the instance, start the instance, and then register the instance. To deregister instances from a load balancer, use <a>DeregisterInstancesFromLoadBalancer</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_DeReg_Reg_Instances.html">Deregister and Register EC2 Instances</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterInstancesWithLoadBalancerOutcomeCallable RegisterInstancesWithLoadBalancerCallable(const Model::RegisterInstancesWithLoadBalancerRequest& request) const;

     /*
       <p>Adds the specified instances to the specified load balancer.</p> <p>The instance must be a running instance in the same network as the load balancer (EC2-Classic or the same VPC). If you have EC2-Classic instances and a load balancer in a VPC with ClassicLink enabled, you can link the EC2-Classic instances to that VPC and then register the linked EC2-Classic instances with the load balancer in the VPC.</p> <p>Note that <code>RegisterInstanceWithLoadBalancer</code> completes when the request has been registered. Instance registration happens shortly afterwards. To check the state of the registered instances, use <a>DescribeLoadBalancers</a> or <a>DescribeInstanceHealth</a>.</p> <p>After the instance is registered, it starts receiving traffic and requests from the load balancer. Any instance that is not in one of the Availability Zones registered for the load balancer is moved to the <code>OutOfService</code> state. If an Availability Zone is added to the load balancer later, any instances registered with the load balancer move to the <code>InService</code> state.</p> <p>If you stop an instance registered with a load balancer and then start it, the IP addresses associated with the instance changes. Elastic Load Balancing cannot recognize the new IP address, which prevents it from routing traffic to the instances. We recommend that you use the following sequence: stop the instance, deregister the instance, start the instance, and then register the instance. To deregister instances from a load balancer, use <a>DeregisterInstancesFromLoadBalancer</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_DeReg_Reg_Instances.html">Deregister and Register EC2 Instances</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterInstancesWithLoadBalancerAsync(const Model::RegisterInstancesWithLoadBalancerRequest& request) const;

     /*
       <p>Removes one or more tags from the specified load balancer.</p>
     */
     Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

     /*
       <p>Removes one or more tags from the specified load balancer.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

     /*
       <p>Removes one or more tags from the specified load balancer.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemoveTagsAsync(const Model::RemoveTagsRequest& request) const;

     /*
       <p>Sets the certificate that terminates the specified listener's SSL connections. The specified certificate replaces any prior certificate that was used on the same load balancer and port.</p> <p>For more information about updating your SSL certificate, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_UpdatingLoadBalancerSSL.html">Updating an SSL Certificate for a Load Balancer</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>
     */
     Model::SetLoadBalancerListenerSSLCertificateOutcome SetLoadBalancerListenerSSLCertificate(const Model::SetLoadBalancerListenerSSLCertificateRequest& request) const;

     /*
       <p>Sets the certificate that terminates the specified listener's SSL connections. The specified certificate replaces any prior certificate that was used on the same load balancer and port.</p> <p>For more information about updating your SSL certificate, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_UpdatingLoadBalancerSSL.html">Updating an SSL Certificate for a Load Balancer</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetLoadBalancerListenerSSLCertificateOutcomeCallable SetLoadBalancerListenerSSLCertificateCallable(const Model::SetLoadBalancerListenerSSLCertificateRequest& request) const;

     /*
       <p>Sets the certificate that terminates the specified listener's SSL connections. The specified certificate replaces any prior certificate that was used on the same load balancer and port.</p> <p>For more information about updating your SSL certificate, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/US_UpdatingLoadBalancerSSL.html">Updating an SSL Certificate for a Load Balancer</a> in the <i>Elastic Load Balancing Developer Guide</i>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetLoadBalancerListenerSSLCertificateAsync(const Model::SetLoadBalancerListenerSSLCertificateRequest& request) const;

     /*
       <p>Replaces the set of policies associated with the specified port on which the back-end server is listening with a new set of policies. At this time, only the back-end server authentication policy type can be applied to the back-end ports; this policy type is composed of multiple public key policies.</p> <p>Each time you use <code>SetLoadBalancerPoliciesForBackendServer</code> to enable the policies, use the <code>PolicyNames</code> parameter to list the policies that you want to enable.</p> <p>You can use <a>DescribeLoadBalancers</a> or <a>DescribeLoadBalancerPolicies</a> to verify that the policy is associated with the back-end server.</p>
     */
     Model::SetLoadBalancerPoliciesForBackendServerOutcome SetLoadBalancerPoliciesForBackendServer(const Model::SetLoadBalancerPoliciesForBackendServerRequest& request) const;

     /*
       <p>Replaces the set of policies associated with the specified port on which the back-end server is listening with a new set of policies. At this time, only the back-end server authentication policy type can be applied to the back-end ports; this policy type is composed of multiple public key policies.</p> <p>Each time you use <code>SetLoadBalancerPoliciesForBackendServer</code> to enable the policies, use the <code>PolicyNames</code> parameter to list the policies that you want to enable.</p> <p>You can use <a>DescribeLoadBalancers</a> or <a>DescribeLoadBalancerPolicies</a> to verify that the policy is associated with the back-end server.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetLoadBalancerPoliciesForBackendServerOutcomeCallable SetLoadBalancerPoliciesForBackendServerCallable(const Model::SetLoadBalancerPoliciesForBackendServerRequest& request) const;

     /*
       <p>Replaces the set of policies associated with the specified port on which the back-end server is listening with a new set of policies. At this time, only the back-end server authentication policy type can be applied to the back-end ports; this policy type is composed of multiple public key policies.</p> <p>Each time you use <code>SetLoadBalancerPoliciesForBackendServer</code> to enable the policies, use the <code>PolicyNames</code> parameter to list the policies that you want to enable.</p> <p>You can use <a>DescribeLoadBalancers</a> or <a>DescribeLoadBalancerPolicies</a> to verify that the policy is associated with the back-end server.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetLoadBalancerPoliciesForBackendServerAsync(const Model::SetLoadBalancerPoliciesForBackendServerRequest& request) const;

     /*
       <p>Associates, updates, or disables a policy with a listener for the specified load balancer. You can associate multiple policies with a listener.</p>
     */
     Model::SetLoadBalancerPoliciesOfListenerOutcome SetLoadBalancerPoliciesOfListener(const Model::SetLoadBalancerPoliciesOfListenerRequest& request) const;

     /*
       <p>Associates, updates, or disables a policy with a listener for the specified load balancer. You can associate multiple policies with a listener.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetLoadBalancerPoliciesOfListenerOutcomeCallable SetLoadBalancerPoliciesOfListenerCallable(const Model::SetLoadBalancerPoliciesOfListenerRequest& request) const;

     /*
       <p>Associates, updates, or disables a policy with a listener for the specified load balancer. You can associate multiple policies with a listener.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetLoadBalancerPoliciesOfListenerAsync(const Model::SetLoadBalancerPoliciesOfListenerRequest& request) const;

   /**
    * Adds an event handler for AddTagsAsync to call upon completion to the handler chain. You need to call this to
    * use AddTagsAsync.
    */
    inline void RegisterAddTagsOutcomeReceivedHandler(const AddTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddTags.
    */
    inline void ClearAllAddTagsOutcomeReceivedHandlers()
    {
      m_onAddTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ApplySecurityGroupsToLoadBalancerAsync to call upon completion to the handler chain. You need to call this to
    * use ApplySecurityGroupsToLoadBalancerAsync.
    */
    inline void RegisterApplySecurityGroupsToLoadBalancerOutcomeReceivedHandler(const ApplySecurityGroupsToLoadBalancerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onApplySecurityGroupsToLoadBalancerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ApplySecurityGroupsToLoadBalancer.
    */
    inline void ClearAllApplySecurityGroupsToLoadBalancerOutcomeReceivedHandlers()
    {
      m_onApplySecurityGroupsToLoadBalancerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AttachLoadBalancerToSubnetsAsync to call upon completion to the handler chain. You need to call this to
    * use AttachLoadBalancerToSubnetsAsync.
    */
    inline void RegisterAttachLoadBalancerToSubnetsOutcomeReceivedHandler(const AttachLoadBalancerToSubnetsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAttachLoadBalancerToSubnetsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AttachLoadBalancerToSubnets.
    */
    inline void ClearAllAttachLoadBalancerToSubnetsOutcomeReceivedHandlers()
    {
      m_onAttachLoadBalancerToSubnetsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ConfigureHealthCheckAsync to call upon completion to the handler chain. You need to call this to
    * use ConfigureHealthCheckAsync.
    */
    inline void RegisterConfigureHealthCheckOutcomeReceivedHandler(const ConfigureHealthCheckOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onConfigureHealthCheckOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ConfigureHealthCheck.
    */
    inline void ClearAllConfigureHealthCheckOutcomeReceivedHandlers()
    {
      m_onConfigureHealthCheckOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateAppCookieStickinessPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use CreateAppCookieStickinessPolicyAsync.
    */
    inline void RegisterCreateAppCookieStickinessPolicyOutcomeReceivedHandler(const CreateAppCookieStickinessPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateAppCookieStickinessPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateAppCookieStickinessPolicy.
    */
    inline void ClearAllCreateAppCookieStickinessPolicyOutcomeReceivedHandlers()
    {
      m_onCreateAppCookieStickinessPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateLBCookieStickinessPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use CreateLBCookieStickinessPolicyAsync.
    */
    inline void RegisterCreateLBCookieStickinessPolicyOutcomeReceivedHandler(const CreateLBCookieStickinessPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateLBCookieStickinessPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateLBCookieStickinessPolicy.
    */
    inline void ClearAllCreateLBCookieStickinessPolicyOutcomeReceivedHandlers()
    {
      m_onCreateLBCookieStickinessPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateLoadBalancerAsync to call upon completion to the handler chain. You need to call this to
    * use CreateLoadBalancerAsync.
    */
    inline void RegisterCreateLoadBalancerOutcomeReceivedHandler(const CreateLoadBalancerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateLoadBalancerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateLoadBalancer.
    */
    inline void ClearAllCreateLoadBalancerOutcomeReceivedHandlers()
    {
      m_onCreateLoadBalancerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateLoadBalancerListenersAsync to call upon completion to the handler chain. You need to call this to
    * use CreateLoadBalancerListenersAsync.
    */
    inline void RegisterCreateLoadBalancerListenersOutcomeReceivedHandler(const CreateLoadBalancerListenersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateLoadBalancerListenersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateLoadBalancerListeners.
    */
    inline void ClearAllCreateLoadBalancerListenersOutcomeReceivedHandlers()
    {
      m_onCreateLoadBalancerListenersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateLoadBalancerPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use CreateLoadBalancerPolicyAsync.
    */
    inline void RegisterCreateLoadBalancerPolicyOutcomeReceivedHandler(const CreateLoadBalancerPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateLoadBalancerPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateLoadBalancerPolicy.
    */
    inline void ClearAllCreateLoadBalancerPolicyOutcomeReceivedHandlers()
    {
      m_onCreateLoadBalancerPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteLoadBalancerAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteLoadBalancerAsync.
    */
    inline void RegisterDeleteLoadBalancerOutcomeReceivedHandler(const DeleteLoadBalancerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteLoadBalancerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteLoadBalancer.
    */
    inline void ClearAllDeleteLoadBalancerOutcomeReceivedHandlers()
    {
      m_onDeleteLoadBalancerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteLoadBalancerListenersAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteLoadBalancerListenersAsync.
    */
    inline void RegisterDeleteLoadBalancerListenersOutcomeReceivedHandler(const DeleteLoadBalancerListenersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteLoadBalancerListenersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteLoadBalancerListeners.
    */
    inline void ClearAllDeleteLoadBalancerListenersOutcomeReceivedHandlers()
    {
      m_onDeleteLoadBalancerListenersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteLoadBalancerPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteLoadBalancerPolicyAsync.
    */
    inline void RegisterDeleteLoadBalancerPolicyOutcomeReceivedHandler(const DeleteLoadBalancerPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteLoadBalancerPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteLoadBalancerPolicy.
    */
    inline void ClearAllDeleteLoadBalancerPolicyOutcomeReceivedHandlers()
    {
      m_onDeleteLoadBalancerPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeregisterInstancesFromLoadBalancerAsync to call upon completion to the handler chain. You need to call this to
    * use DeregisterInstancesFromLoadBalancerAsync.
    */
    inline void RegisterDeregisterInstancesFromLoadBalancerOutcomeReceivedHandler(const DeregisterInstancesFromLoadBalancerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeregisterInstancesFromLoadBalancerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeregisterInstancesFromLoadBalancer.
    */
    inline void ClearAllDeregisterInstancesFromLoadBalancerOutcomeReceivedHandlers()
    {
      m_onDeregisterInstancesFromLoadBalancerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeInstanceHealthAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeInstanceHealthAsync.
    */
    inline void RegisterDescribeInstanceHealthOutcomeReceivedHandler(const DescribeInstanceHealthOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeInstanceHealthOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeInstanceHealth.
    */
    inline void ClearAllDescribeInstanceHealthOutcomeReceivedHandlers()
    {
      m_onDescribeInstanceHealthOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLoadBalancerAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLoadBalancerAttributesAsync.
    */
    inline void RegisterDescribeLoadBalancerAttributesOutcomeReceivedHandler(const DescribeLoadBalancerAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLoadBalancerAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLoadBalancerAttributes.
    */
    inline void ClearAllDescribeLoadBalancerAttributesOutcomeReceivedHandlers()
    {
      m_onDescribeLoadBalancerAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLoadBalancerPoliciesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLoadBalancerPoliciesAsync.
    */
    inline void RegisterDescribeLoadBalancerPoliciesOutcomeReceivedHandler(const DescribeLoadBalancerPoliciesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLoadBalancerPoliciesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLoadBalancerPolicies.
    */
    inline void ClearAllDescribeLoadBalancerPoliciesOutcomeReceivedHandlers()
    {
      m_onDescribeLoadBalancerPoliciesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLoadBalancerPolicyTypesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLoadBalancerPolicyTypesAsync.
    */
    inline void RegisterDescribeLoadBalancerPolicyTypesOutcomeReceivedHandler(const DescribeLoadBalancerPolicyTypesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLoadBalancerPolicyTypesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLoadBalancerPolicyTypes.
    */
    inline void ClearAllDescribeLoadBalancerPolicyTypesOutcomeReceivedHandlers()
    {
      m_onDescribeLoadBalancerPolicyTypesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLoadBalancersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLoadBalancersAsync.
    */
    inline void RegisterDescribeLoadBalancersOutcomeReceivedHandler(const DescribeLoadBalancersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLoadBalancersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLoadBalancers.
    */
    inline void ClearAllDescribeLoadBalancersOutcomeReceivedHandlers()
    {
      m_onDescribeLoadBalancersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeTagsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeTagsAsync.
    */
    inline void RegisterDescribeTagsOutcomeReceivedHandler(const DescribeTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeTags.
    */
    inline void ClearAllDescribeTagsOutcomeReceivedHandlers()
    {
      m_onDescribeTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DetachLoadBalancerFromSubnetsAsync to call upon completion to the handler chain. You need to call this to
    * use DetachLoadBalancerFromSubnetsAsync.
    */
    inline void RegisterDetachLoadBalancerFromSubnetsOutcomeReceivedHandler(const DetachLoadBalancerFromSubnetsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDetachLoadBalancerFromSubnetsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DetachLoadBalancerFromSubnets.
    */
    inline void ClearAllDetachLoadBalancerFromSubnetsOutcomeReceivedHandlers()
    {
      m_onDetachLoadBalancerFromSubnetsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DisableAvailabilityZonesForLoadBalancerAsync to call upon completion to the handler chain. You need to call this to
    * use DisableAvailabilityZonesForLoadBalancerAsync.
    */
    inline void RegisterDisableAvailabilityZonesForLoadBalancerOutcomeReceivedHandler(const DisableAvailabilityZonesForLoadBalancerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDisableAvailabilityZonesForLoadBalancerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DisableAvailabilityZonesForLoadBalancer.
    */
    inline void ClearAllDisableAvailabilityZonesForLoadBalancerOutcomeReceivedHandlers()
    {
      m_onDisableAvailabilityZonesForLoadBalancerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for EnableAvailabilityZonesForLoadBalancerAsync to call upon completion to the handler chain. You need to call this to
    * use EnableAvailabilityZonesForLoadBalancerAsync.
    */
    inline void RegisterEnableAvailabilityZonesForLoadBalancerOutcomeReceivedHandler(const EnableAvailabilityZonesForLoadBalancerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onEnableAvailabilityZonesForLoadBalancerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for EnableAvailabilityZonesForLoadBalancer.
    */
    inline void ClearAllEnableAvailabilityZonesForLoadBalancerOutcomeReceivedHandlers()
    {
      m_onEnableAvailabilityZonesForLoadBalancerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyLoadBalancerAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyLoadBalancerAttributesAsync.
    */
    inline void RegisterModifyLoadBalancerAttributesOutcomeReceivedHandler(const ModifyLoadBalancerAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyLoadBalancerAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyLoadBalancerAttributes.
    */
    inline void ClearAllModifyLoadBalancerAttributesOutcomeReceivedHandlers()
    {
      m_onModifyLoadBalancerAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterInstancesWithLoadBalancerAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterInstancesWithLoadBalancerAsync.
    */
    inline void RegisterRegisterInstancesWithLoadBalancerOutcomeReceivedHandler(const RegisterInstancesWithLoadBalancerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterInstancesWithLoadBalancerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterInstancesWithLoadBalancer.
    */
    inline void ClearAllRegisterInstancesWithLoadBalancerOutcomeReceivedHandlers()
    {
      m_onRegisterInstancesWithLoadBalancerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemoveTagsAsync to call upon completion to the handler chain. You need to call this to
    * use RemoveTagsAsync.
    */
    inline void RegisterRemoveTagsOutcomeReceivedHandler(const RemoveTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemoveTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemoveTags.
    */
    inline void ClearAllRemoveTagsOutcomeReceivedHandlers()
    {
      m_onRemoveTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetLoadBalancerListenerSSLCertificateAsync to call upon completion to the handler chain. You need to call this to
    * use SetLoadBalancerListenerSSLCertificateAsync.
    */
    inline void RegisterSetLoadBalancerListenerSSLCertificateOutcomeReceivedHandler(const SetLoadBalancerListenerSSLCertificateOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetLoadBalancerListenerSSLCertificateOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetLoadBalancerListenerSSLCertificate.
    */
    inline void ClearAllSetLoadBalancerListenerSSLCertificateOutcomeReceivedHandlers()
    {
      m_onSetLoadBalancerListenerSSLCertificateOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetLoadBalancerPoliciesForBackendServerAsync to call upon completion to the handler chain. You need to call this to
    * use SetLoadBalancerPoliciesForBackendServerAsync.
    */
    inline void RegisterSetLoadBalancerPoliciesForBackendServerOutcomeReceivedHandler(const SetLoadBalancerPoliciesForBackendServerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetLoadBalancerPoliciesForBackendServerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetLoadBalancerPoliciesForBackendServer.
    */
    inline void ClearAllSetLoadBalancerPoliciesForBackendServerOutcomeReceivedHandlers()
    {
      m_onSetLoadBalancerPoliciesForBackendServerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetLoadBalancerPoliciesOfListenerAsync to call upon completion to the handler chain. You need to call this to
    * use SetLoadBalancerPoliciesOfListenerAsync.
    */
    inline void RegisterSetLoadBalancerPoliciesOfListenerOutcomeReceivedHandler(const SetLoadBalancerPoliciesOfListenerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetLoadBalancerPoliciesOfListenerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetLoadBalancerPoliciesOfListener.
    */
    inline void ClearAllSetLoadBalancerPoliciesOfListenerOutcomeReceivedHandlers()
    {
      m_onSetLoadBalancerPoliciesOfListenerOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AddTagsAsyncHelper(const Model::AddTagsRequest& request) const;
    void ApplySecurityGroupsToLoadBalancerAsyncHelper(const Model::ApplySecurityGroupsToLoadBalancerRequest& request) const;
    void AttachLoadBalancerToSubnetsAsyncHelper(const Model::AttachLoadBalancerToSubnetsRequest& request) const;
    void ConfigureHealthCheckAsyncHelper(const Model::ConfigureHealthCheckRequest& request) const;
    void CreateAppCookieStickinessPolicyAsyncHelper(const Model::CreateAppCookieStickinessPolicyRequest& request) const;
    void CreateLBCookieStickinessPolicyAsyncHelper(const Model::CreateLBCookieStickinessPolicyRequest& request) const;
    void CreateLoadBalancerAsyncHelper(const Model::CreateLoadBalancerRequest& request) const;
    void CreateLoadBalancerListenersAsyncHelper(const Model::CreateLoadBalancerListenersRequest& request) const;
    void CreateLoadBalancerPolicyAsyncHelper(const Model::CreateLoadBalancerPolicyRequest& request) const;
    void DeleteLoadBalancerAsyncHelper(const Model::DeleteLoadBalancerRequest& request) const;
    void DeleteLoadBalancerListenersAsyncHelper(const Model::DeleteLoadBalancerListenersRequest& request) const;
    void DeleteLoadBalancerPolicyAsyncHelper(const Model::DeleteLoadBalancerPolicyRequest& request) const;
    void DeregisterInstancesFromLoadBalancerAsyncHelper(const Model::DeregisterInstancesFromLoadBalancerRequest& request) const;
    void DescribeInstanceHealthAsyncHelper(const Model::DescribeInstanceHealthRequest& request) const;
    void DescribeLoadBalancerAttributesAsyncHelper(const Model::DescribeLoadBalancerAttributesRequest& request) const;
    void DescribeLoadBalancerPoliciesAsyncHelper(const Model::DescribeLoadBalancerPoliciesRequest& request) const;
    void DescribeLoadBalancerPolicyTypesAsyncHelper(const Model::DescribeLoadBalancerPolicyTypesRequest& request) const;
    void DescribeLoadBalancersAsyncHelper(const Model::DescribeLoadBalancersRequest& request) const;
    void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request) const;
    void DetachLoadBalancerFromSubnetsAsyncHelper(const Model::DetachLoadBalancerFromSubnetsRequest& request) const;
    void DisableAvailabilityZonesForLoadBalancerAsyncHelper(const Model::DisableAvailabilityZonesForLoadBalancerRequest& request) const;
    void EnableAvailabilityZonesForLoadBalancerAsyncHelper(const Model::EnableAvailabilityZonesForLoadBalancerRequest& request) const;
    void ModifyLoadBalancerAttributesAsyncHelper(const Model::ModifyLoadBalancerAttributesRequest& request) const;
    void RegisterInstancesWithLoadBalancerAsyncHelper(const Model::RegisterInstancesWithLoadBalancerRequest& request) const;
    void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request) const;
    void SetLoadBalancerListenerSSLCertificateAsyncHelper(const Model::SetLoadBalancerListenerSSLCertificateRequest& request) const;
    void SetLoadBalancerPoliciesForBackendServerAsyncHelper(const Model::SetLoadBalancerPoliciesForBackendServerRequest& request) const;
    void SetLoadBalancerPoliciesOfListenerAsyncHelper(const Model::SetLoadBalancerPoliciesOfListenerRequest& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AddTagsOutcomeReceivedEvent m_onAddTagsOutcomeReceived;
    ApplySecurityGroupsToLoadBalancerOutcomeReceivedEvent m_onApplySecurityGroupsToLoadBalancerOutcomeReceived;
    AttachLoadBalancerToSubnetsOutcomeReceivedEvent m_onAttachLoadBalancerToSubnetsOutcomeReceived;
    ConfigureHealthCheckOutcomeReceivedEvent m_onConfigureHealthCheckOutcomeReceived;
    CreateAppCookieStickinessPolicyOutcomeReceivedEvent m_onCreateAppCookieStickinessPolicyOutcomeReceived;
    CreateLBCookieStickinessPolicyOutcomeReceivedEvent m_onCreateLBCookieStickinessPolicyOutcomeReceived;
    CreateLoadBalancerOutcomeReceivedEvent m_onCreateLoadBalancerOutcomeReceived;
    CreateLoadBalancerListenersOutcomeReceivedEvent m_onCreateLoadBalancerListenersOutcomeReceived;
    CreateLoadBalancerPolicyOutcomeReceivedEvent m_onCreateLoadBalancerPolicyOutcomeReceived;
    DeleteLoadBalancerOutcomeReceivedEvent m_onDeleteLoadBalancerOutcomeReceived;
    DeleteLoadBalancerListenersOutcomeReceivedEvent m_onDeleteLoadBalancerListenersOutcomeReceived;
    DeleteLoadBalancerPolicyOutcomeReceivedEvent m_onDeleteLoadBalancerPolicyOutcomeReceived;
    DeregisterInstancesFromLoadBalancerOutcomeReceivedEvent m_onDeregisterInstancesFromLoadBalancerOutcomeReceived;
    DescribeInstanceHealthOutcomeReceivedEvent m_onDescribeInstanceHealthOutcomeReceived;
    DescribeLoadBalancerAttributesOutcomeReceivedEvent m_onDescribeLoadBalancerAttributesOutcomeReceived;
    DescribeLoadBalancerPoliciesOutcomeReceivedEvent m_onDescribeLoadBalancerPoliciesOutcomeReceived;
    DescribeLoadBalancerPolicyTypesOutcomeReceivedEvent m_onDescribeLoadBalancerPolicyTypesOutcomeReceived;
    DescribeLoadBalancersOutcomeReceivedEvent m_onDescribeLoadBalancersOutcomeReceived;
    DescribeTagsOutcomeReceivedEvent m_onDescribeTagsOutcomeReceived;
    DetachLoadBalancerFromSubnetsOutcomeReceivedEvent m_onDetachLoadBalancerFromSubnetsOutcomeReceived;
    DisableAvailabilityZonesForLoadBalancerOutcomeReceivedEvent m_onDisableAvailabilityZonesForLoadBalancerOutcomeReceived;
    EnableAvailabilityZonesForLoadBalancerOutcomeReceivedEvent m_onEnableAvailabilityZonesForLoadBalancerOutcomeReceived;
    ModifyLoadBalancerAttributesOutcomeReceivedEvent m_onModifyLoadBalancerAttributesOutcomeReceived;
    RegisterInstancesWithLoadBalancerOutcomeReceivedEvent m_onRegisterInstancesWithLoadBalancerOutcomeReceived;
    RemoveTagsOutcomeReceivedEvent m_onRemoveTagsOutcomeReceived;
    SetLoadBalancerListenerSSLCertificateOutcomeReceivedEvent m_onSetLoadBalancerListenerSSLCertificateOutcomeReceived;
    SetLoadBalancerPoliciesForBackendServerOutcomeReceivedEvent m_onSetLoadBalancerPoliciesForBackendServerOutcomeReceived;
    SetLoadBalancerPoliciesOfListenerOutcomeReceivedEvent m_onSetLoadBalancerPoliciesOfListenerOutcomeReceived;
  };

} // namespace ElasticLoadBalancing
} // namespace Aws
