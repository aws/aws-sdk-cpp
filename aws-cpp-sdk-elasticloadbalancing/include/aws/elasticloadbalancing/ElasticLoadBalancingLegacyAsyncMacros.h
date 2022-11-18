/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::AddTags, __VA_ARGS__)
#define AddTagsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::AddTags, REQUEST)

#define ApplySecurityGroupsToLoadBalancerAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancer, __VA_ARGS__)
#define ApplySecurityGroupsToLoadBalancerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancer, REQUEST)

#define AttachLoadBalancerToSubnetsAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::AttachLoadBalancerToSubnets, __VA_ARGS__)
#define AttachLoadBalancerToSubnetsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::AttachLoadBalancerToSubnets, REQUEST)

#define ConfigureHealthCheckAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::ConfigureHealthCheck, __VA_ARGS__)
#define ConfigureHealthCheckCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::ConfigureHealthCheck, REQUEST)

#define CreateAppCookieStickinessPolicyAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::CreateAppCookieStickinessPolicy, __VA_ARGS__)
#define CreateAppCookieStickinessPolicyCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::CreateAppCookieStickinessPolicy, REQUEST)

#define CreateLBCookieStickinessPolicyAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::CreateLBCookieStickinessPolicy, __VA_ARGS__)
#define CreateLBCookieStickinessPolicyCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::CreateLBCookieStickinessPolicy, REQUEST)

#define CreateLoadBalancerAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::CreateLoadBalancer, __VA_ARGS__)
#define CreateLoadBalancerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::CreateLoadBalancer, REQUEST)

#define CreateLoadBalancerListenersAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::CreateLoadBalancerListeners, __VA_ARGS__)
#define CreateLoadBalancerListenersCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::CreateLoadBalancerListeners, REQUEST)

#define CreateLoadBalancerPolicyAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::CreateLoadBalancerPolicy, __VA_ARGS__)
#define CreateLoadBalancerPolicyCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::CreateLoadBalancerPolicy, REQUEST)

#define DeleteLoadBalancerAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DeleteLoadBalancer, __VA_ARGS__)
#define DeleteLoadBalancerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DeleteLoadBalancer, REQUEST)

#define DeleteLoadBalancerListenersAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DeleteLoadBalancerListeners, __VA_ARGS__)
#define DeleteLoadBalancerListenersCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DeleteLoadBalancerListeners, REQUEST)

#define DeleteLoadBalancerPolicyAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DeleteLoadBalancerPolicy, __VA_ARGS__)
#define DeleteLoadBalancerPolicyCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DeleteLoadBalancerPolicy, REQUEST)

#define DeregisterInstancesFromLoadBalancerAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancer, __VA_ARGS__)
#define DeregisterInstancesFromLoadBalancerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancer, REQUEST)

#define DescribeAccountLimitsAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DescribeAccountLimits, __VA_ARGS__)
#define DescribeAccountLimitsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DescribeAccountLimits, REQUEST)

#define DescribeInstanceHealthAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DescribeInstanceHealth, __VA_ARGS__)
#define DescribeInstanceHealthCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DescribeInstanceHealth, REQUEST)

#define DescribeLoadBalancerAttributesAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DescribeLoadBalancerAttributes, __VA_ARGS__)
#define DescribeLoadBalancerAttributesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DescribeLoadBalancerAttributes, REQUEST)

#define DescribeLoadBalancerPoliciesAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DescribeLoadBalancerPolicies, __VA_ARGS__)
#define DescribeLoadBalancerPoliciesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DescribeLoadBalancerPolicies, REQUEST)

#define DescribeLoadBalancerPolicyTypesAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypes, __VA_ARGS__)
#define DescribeLoadBalancerPolicyTypesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypes, REQUEST)

#define DescribeLoadBalancersAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DescribeLoadBalancers, __VA_ARGS__)
#define DescribeLoadBalancersCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DescribeLoadBalancers, REQUEST)

#define DescribeTagsAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DescribeTags, __VA_ARGS__)
#define DescribeTagsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DescribeTags, REQUEST)

#define DetachLoadBalancerFromSubnetsAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DetachLoadBalancerFromSubnets, __VA_ARGS__)
#define DetachLoadBalancerFromSubnetsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DetachLoadBalancerFromSubnets, REQUEST)

#define DisableAvailabilityZonesForLoadBalancerAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancer, __VA_ARGS__)
#define DisableAvailabilityZonesForLoadBalancerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancer, REQUEST)

#define EnableAvailabilityZonesForLoadBalancerAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancer, __VA_ARGS__)
#define EnableAvailabilityZonesForLoadBalancerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancer, REQUEST)

#define ModifyLoadBalancerAttributesAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::ModifyLoadBalancerAttributes, __VA_ARGS__)
#define ModifyLoadBalancerAttributesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::ModifyLoadBalancerAttributes, REQUEST)

#define RegisterInstancesWithLoadBalancerAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancer, __VA_ARGS__)
#define RegisterInstancesWithLoadBalancerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancer, REQUEST)

#define RemoveTagsAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::RemoveTags, __VA_ARGS__)
#define RemoveTagsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::RemoveTags, REQUEST)

#define SetLoadBalancerListenerSSLCertificateAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificate, __VA_ARGS__)
#define SetLoadBalancerListenerSSLCertificateCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificate, REQUEST)

#define SetLoadBalancerPoliciesForBackendServerAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServer, __VA_ARGS__)
#define SetLoadBalancerPoliciesForBackendServerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServer, REQUEST)

#define SetLoadBalancerPoliciesOfListenerAsync(...)  SubmitAsync(&ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListener, __VA_ARGS__)
#define SetLoadBalancerPoliciesOfListenerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListener, REQUEST)

