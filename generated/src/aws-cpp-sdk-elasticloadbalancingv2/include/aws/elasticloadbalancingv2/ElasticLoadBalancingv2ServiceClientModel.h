/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ElasticLoadBalancingv2Client header */
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
/* End of service model headers required in ElasticLoadBalancingv2Client header */

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

  namespace ElasticLoadBalancingv2
  {
    using ElasticLoadBalancingv2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ElasticLoadBalancingv2EndpointProviderBase = Aws::ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2EndpointProviderBase;
    using ElasticLoadBalancingv2EndpointProvider = Aws::ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ElasticLoadBalancingv2Client header */
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
      /* End of service model forward declarations required in ElasticLoadBalancingv2Client header */

      /* Service model Outcome class definitions */
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ElasticLoadBalancingv2Client;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
