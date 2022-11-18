/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateHttpNamespaceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::CreateHttpNamespace, __VA_ARGS__)
#define CreateHttpNamespaceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::CreateHttpNamespace, REQUEST)

#define CreatePrivateDnsNamespaceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::CreatePrivateDnsNamespace, __VA_ARGS__)
#define CreatePrivateDnsNamespaceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::CreatePrivateDnsNamespace, REQUEST)

#define CreatePublicDnsNamespaceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::CreatePublicDnsNamespace, __VA_ARGS__)
#define CreatePublicDnsNamespaceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::CreatePublicDnsNamespace, REQUEST)

#define CreateServiceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::CreateService, __VA_ARGS__)
#define CreateServiceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::CreateService, REQUEST)

#define DeleteNamespaceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::DeleteNamespace, __VA_ARGS__)
#define DeleteNamespaceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::DeleteNamespace, REQUEST)

#define DeleteServiceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::DeleteService, __VA_ARGS__)
#define DeleteServiceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::DeleteService, REQUEST)

#define DeregisterInstanceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::DeregisterInstance, __VA_ARGS__)
#define DeregisterInstanceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::DeregisterInstance, REQUEST)

#define DiscoverInstancesAsync(...)  SubmitAsync(&ServiceDiscoveryClient::DiscoverInstances, __VA_ARGS__)
#define DiscoverInstancesCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::DiscoverInstances, REQUEST)

#define GetInstanceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::GetInstance, __VA_ARGS__)
#define GetInstanceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::GetInstance, REQUEST)

#define GetInstancesHealthStatusAsync(...)  SubmitAsync(&ServiceDiscoveryClient::GetInstancesHealthStatus, __VA_ARGS__)
#define GetInstancesHealthStatusCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::GetInstancesHealthStatus, REQUEST)

#define GetNamespaceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::GetNamespace, __VA_ARGS__)
#define GetNamespaceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::GetNamespace, REQUEST)

#define GetOperationAsync(...)  SubmitAsync(&ServiceDiscoveryClient::GetOperation, __VA_ARGS__)
#define GetOperationCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::GetOperation, REQUEST)

#define GetServiceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::GetService, __VA_ARGS__)
#define GetServiceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::GetService, REQUEST)

#define ListInstancesAsync(...)  SubmitAsync(&ServiceDiscoveryClient::ListInstances, __VA_ARGS__)
#define ListInstancesCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::ListInstances, REQUEST)

#define ListNamespacesAsync(...)  SubmitAsync(&ServiceDiscoveryClient::ListNamespaces, __VA_ARGS__)
#define ListNamespacesCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::ListNamespaces, REQUEST)

#define ListOperationsAsync(...)  SubmitAsync(&ServiceDiscoveryClient::ListOperations, __VA_ARGS__)
#define ListOperationsCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::ListOperations, REQUEST)

#define ListServicesAsync(...)  SubmitAsync(&ServiceDiscoveryClient::ListServices, __VA_ARGS__)
#define ListServicesCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::ListServices, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::ListTagsForResource, REQUEST)

#define RegisterInstanceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::RegisterInstance, __VA_ARGS__)
#define RegisterInstanceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::RegisterInstance, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::UntagResource, REQUEST)

#define UpdateHttpNamespaceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::UpdateHttpNamespace, __VA_ARGS__)
#define UpdateHttpNamespaceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::UpdateHttpNamespace, REQUEST)

#define UpdateInstanceCustomHealthStatusAsync(...)  SubmitAsync(&ServiceDiscoveryClient::UpdateInstanceCustomHealthStatus, __VA_ARGS__)
#define UpdateInstanceCustomHealthStatusCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::UpdateInstanceCustomHealthStatus, REQUEST)

#define UpdatePrivateDnsNamespaceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::UpdatePrivateDnsNamespace, __VA_ARGS__)
#define UpdatePrivateDnsNamespaceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::UpdatePrivateDnsNamespace, REQUEST)

#define UpdatePublicDnsNamespaceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::UpdatePublicDnsNamespace, __VA_ARGS__)
#define UpdatePublicDnsNamespaceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::UpdatePublicDnsNamespace, REQUEST)

#define UpdateServiceAsync(...)  SubmitAsync(&ServiceDiscoveryClient::UpdateService, __VA_ARGS__)
#define UpdateServiceCallable(REQUEST)  SubmitCallable(&ServiceDiscoveryClient::UpdateService, REQUEST)

