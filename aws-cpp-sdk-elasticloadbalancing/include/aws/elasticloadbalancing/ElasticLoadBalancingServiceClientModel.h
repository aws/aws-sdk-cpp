/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ElasticLoadBalancingClient header */
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
/* End of service model headers required in ElasticLoadBalancingClient header */

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

  namespace ElasticLoadBalancing
  {
    using ElasticLoadBalancingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ElasticLoadBalancingEndpointProviderBase = Aws::ElasticLoadBalancing::Endpoint::ElasticLoadBalancingEndpointProviderBase;
    using ElasticLoadBalancingEndpointProvider = Aws::ElasticLoadBalancing::Endpoint::ElasticLoadBalancingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ElasticLoadBalancingClient header */
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
      /* End of service model forward declarations required in ElasticLoadBalancingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddTagsResult, ElasticLoadBalancingError> AddTagsOutcome;
      typedef Aws::Utils::Outcome<ApplySecurityGroupsToLoadBalancerResult, ElasticLoadBalancingError> ApplySecurityGroupsToLoadBalancerOutcome;
      typedef Aws::Utils::Outcome<AttachLoadBalancerToSubnetsResult, ElasticLoadBalancingError> AttachLoadBalancerToSubnetsOutcome;
      typedef Aws::Utils::Outcome<ConfigureHealthCheckResult, ElasticLoadBalancingError> ConfigureHealthCheckOutcome;
      typedef Aws::Utils::Outcome<CreateAppCookieStickinessPolicyResult, ElasticLoadBalancingError> CreateAppCookieStickinessPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateLBCookieStickinessPolicyResult, ElasticLoadBalancingError> CreateLBCookieStickinessPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateLoadBalancerResult, ElasticLoadBalancingError> CreateLoadBalancerOutcome;
      typedef Aws::Utils::Outcome<CreateLoadBalancerListenersResult, ElasticLoadBalancingError> CreateLoadBalancerListenersOutcome;
      typedef Aws::Utils::Outcome<CreateLoadBalancerPolicyResult, ElasticLoadBalancingError> CreateLoadBalancerPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteLoadBalancerResult, ElasticLoadBalancingError> DeleteLoadBalancerOutcome;
      typedef Aws::Utils::Outcome<DeleteLoadBalancerListenersResult, ElasticLoadBalancingError> DeleteLoadBalancerListenersOutcome;
      typedef Aws::Utils::Outcome<DeleteLoadBalancerPolicyResult, ElasticLoadBalancingError> DeleteLoadBalancerPolicyOutcome;
      typedef Aws::Utils::Outcome<DeregisterInstancesFromLoadBalancerResult, ElasticLoadBalancingError> DeregisterInstancesFromLoadBalancerOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, ElasticLoadBalancingError> DescribeAccountLimitsOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceHealthResult, ElasticLoadBalancingError> DescribeInstanceHealthOutcome;
      typedef Aws::Utils::Outcome<DescribeLoadBalancerAttributesResult, ElasticLoadBalancingError> DescribeLoadBalancerAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeLoadBalancerPoliciesResult, ElasticLoadBalancingError> DescribeLoadBalancerPoliciesOutcome;
      typedef Aws::Utils::Outcome<DescribeLoadBalancerPolicyTypesResult, ElasticLoadBalancingError> DescribeLoadBalancerPolicyTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeLoadBalancersResult, ElasticLoadBalancingError> DescribeLoadBalancersOutcome;
      typedef Aws::Utils::Outcome<DescribeTagsResult, ElasticLoadBalancingError> DescribeTagsOutcome;
      typedef Aws::Utils::Outcome<DetachLoadBalancerFromSubnetsResult, ElasticLoadBalancingError> DetachLoadBalancerFromSubnetsOutcome;
      typedef Aws::Utils::Outcome<DisableAvailabilityZonesForLoadBalancerResult, ElasticLoadBalancingError> DisableAvailabilityZonesForLoadBalancerOutcome;
      typedef Aws::Utils::Outcome<EnableAvailabilityZonesForLoadBalancerResult, ElasticLoadBalancingError> EnableAvailabilityZonesForLoadBalancerOutcome;
      typedef Aws::Utils::Outcome<ModifyLoadBalancerAttributesResult, ElasticLoadBalancingError> ModifyLoadBalancerAttributesOutcome;
      typedef Aws::Utils::Outcome<RegisterInstancesWithLoadBalancerResult, ElasticLoadBalancingError> RegisterInstancesWithLoadBalancerOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsResult, ElasticLoadBalancingError> RemoveTagsOutcome;
      typedef Aws::Utils::Outcome<SetLoadBalancerListenerSSLCertificateResult, ElasticLoadBalancingError> SetLoadBalancerListenerSSLCertificateOutcome;
      typedef Aws::Utils::Outcome<SetLoadBalancerPoliciesForBackendServerResult, ElasticLoadBalancingError> SetLoadBalancerPoliciesForBackendServerOutcome;
      typedef Aws::Utils::Outcome<SetLoadBalancerPoliciesOfListenerResult, ElasticLoadBalancingError> SetLoadBalancerPoliciesOfListenerOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ElasticLoadBalancingClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace ElasticLoadBalancing
} // namespace Aws
