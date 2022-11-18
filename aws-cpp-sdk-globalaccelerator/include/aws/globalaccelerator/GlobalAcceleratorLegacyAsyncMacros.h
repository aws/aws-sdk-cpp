/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddCustomRoutingEndpointsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::AddCustomRoutingEndpoints, __VA_ARGS__)
#define AddCustomRoutingEndpointsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::AddCustomRoutingEndpoints, REQUEST)

#define AddEndpointsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::AddEndpoints, __VA_ARGS__)
#define AddEndpointsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::AddEndpoints, REQUEST)

#define AdvertiseByoipCidrAsync(...)  SubmitAsync(&GlobalAcceleratorClient::AdvertiseByoipCidr, __VA_ARGS__)
#define AdvertiseByoipCidrCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::AdvertiseByoipCidr, REQUEST)

#define AllowCustomRoutingTrafficAsync(...)  SubmitAsync(&GlobalAcceleratorClient::AllowCustomRoutingTraffic, __VA_ARGS__)
#define AllowCustomRoutingTrafficCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::AllowCustomRoutingTraffic, REQUEST)

#define CreateAcceleratorAsync(...)  SubmitAsync(&GlobalAcceleratorClient::CreateAccelerator, __VA_ARGS__)
#define CreateAcceleratorCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::CreateAccelerator, REQUEST)

#define CreateCustomRoutingAcceleratorAsync(...)  SubmitAsync(&GlobalAcceleratorClient::CreateCustomRoutingAccelerator, __VA_ARGS__)
#define CreateCustomRoutingAcceleratorCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::CreateCustomRoutingAccelerator, REQUEST)

#define CreateCustomRoutingEndpointGroupAsync(...)  SubmitAsync(&GlobalAcceleratorClient::CreateCustomRoutingEndpointGroup, __VA_ARGS__)
#define CreateCustomRoutingEndpointGroupCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::CreateCustomRoutingEndpointGroup, REQUEST)

#define CreateCustomRoutingListenerAsync(...)  SubmitAsync(&GlobalAcceleratorClient::CreateCustomRoutingListener, __VA_ARGS__)
#define CreateCustomRoutingListenerCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::CreateCustomRoutingListener, REQUEST)

#define CreateEndpointGroupAsync(...)  SubmitAsync(&GlobalAcceleratorClient::CreateEndpointGroup, __VA_ARGS__)
#define CreateEndpointGroupCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::CreateEndpointGroup, REQUEST)

#define CreateListenerAsync(...)  SubmitAsync(&GlobalAcceleratorClient::CreateListener, __VA_ARGS__)
#define CreateListenerCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::CreateListener, REQUEST)

#define DeleteAcceleratorAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DeleteAccelerator, __VA_ARGS__)
#define DeleteAcceleratorCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DeleteAccelerator, REQUEST)

#define DeleteCustomRoutingAcceleratorAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DeleteCustomRoutingAccelerator, __VA_ARGS__)
#define DeleteCustomRoutingAcceleratorCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DeleteCustomRoutingAccelerator, REQUEST)

#define DeleteCustomRoutingEndpointGroupAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroup, __VA_ARGS__)
#define DeleteCustomRoutingEndpointGroupCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DeleteCustomRoutingEndpointGroup, REQUEST)

#define DeleteCustomRoutingListenerAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DeleteCustomRoutingListener, __VA_ARGS__)
#define DeleteCustomRoutingListenerCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DeleteCustomRoutingListener, REQUEST)

#define DeleteEndpointGroupAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DeleteEndpointGroup, __VA_ARGS__)
#define DeleteEndpointGroupCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DeleteEndpointGroup, REQUEST)

#define DeleteListenerAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DeleteListener, __VA_ARGS__)
#define DeleteListenerCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DeleteListener, REQUEST)

#define DenyCustomRoutingTrafficAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DenyCustomRoutingTraffic, __VA_ARGS__)
#define DenyCustomRoutingTrafficCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DenyCustomRoutingTraffic, REQUEST)

#define DeprovisionByoipCidrAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DeprovisionByoipCidr, __VA_ARGS__)
#define DeprovisionByoipCidrCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DeprovisionByoipCidr, REQUEST)

#define DescribeAcceleratorAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DescribeAccelerator, __VA_ARGS__)
#define DescribeAcceleratorCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DescribeAccelerator, REQUEST)

#define DescribeAcceleratorAttributesAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DescribeAcceleratorAttributes, __VA_ARGS__)
#define DescribeAcceleratorAttributesCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DescribeAcceleratorAttributes, REQUEST)

#define DescribeCustomRoutingAcceleratorAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DescribeCustomRoutingAccelerator, __VA_ARGS__)
#define DescribeCustomRoutingAcceleratorCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DescribeCustomRoutingAccelerator, REQUEST)

#define DescribeCustomRoutingAcceleratorAttributesAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributes, __VA_ARGS__)
#define DescribeCustomRoutingAcceleratorAttributesCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DescribeCustomRoutingAcceleratorAttributes, REQUEST)

#define DescribeCustomRoutingEndpointGroupAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroup, __VA_ARGS__)
#define DescribeCustomRoutingEndpointGroupCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DescribeCustomRoutingEndpointGroup, REQUEST)

#define DescribeCustomRoutingListenerAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DescribeCustomRoutingListener, __VA_ARGS__)
#define DescribeCustomRoutingListenerCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DescribeCustomRoutingListener, REQUEST)

#define DescribeEndpointGroupAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DescribeEndpointGroup, __VA_ARGS__)
#define DescribeEndpointGroupCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DescribeEndpointGroup, REQUEST)

#define DescribeListenerAsync(...)  SubmitAsync(&GlobalAcceleratorClient::DescribeListener, __VA_ARGS__)
#define DescribeListenerCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::DescribeListener, REQUEST)

#define ListAcceleratorsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListAccelerators, __VA_ARGS__)
#define ListAcceleratorsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListAccelerators, REQUEST)

#define ListByoipCidrsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListByoipCidrs, __VA_ARGS__)
#define ListByoipCidrsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListByoipCidrs, REQUEST)

#define ListCustomRoutingAcceleratorsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingAccelerators, __VA_ARGS__)
#define ListCustomRoutingAcceleratorsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingAccelerators, REQUEST)

#define ListCustomRoutingEndpointGroupsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingEndpointGroups, __VA_ARGS__)
#define ListCustomRoutingEndpointGroupsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingEndpointGroups, REQUEST)

#define ListCustomRoutingListenersAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingListeners, __VA_ARGS__)
#define ListCustomRoutingListenersCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingListeners, REQUEST)

#define ListCustomRoutingPortMappingsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingPortMappings, __VA_ARGS__)
#define ListCustomRoutingPortMappingsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingPortMappings, REQUEST)

#define ListCustomRoutingPortMappingsByDestinationAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestination, __VA_ARGS__)
#define ListCustomRoutingPortMappingsByDestinationCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListCustomRoutingPortMappingsByDestination, REQUEST)

#define ListEndpointGroupsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListEndpointGroups, __VA_ARGS__)
#define ListEndpointGroupsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListEndpointGroups, REQUEST)

#define ListListenersAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListListeners, __VA_ARGS__)
#define ListListenersCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListListeners, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ListTagsForResource, REQUEST)

#define ProvisionByoipCidrAsync(...)  SubmitAsync(&GlobalAcceleratorClient::ProvisionByoipCidr, __VA_ARGS__)
#define ProvisionByoipCidrCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::ProvisionByoipCidr, REQUEST)

#define RemoveCustomRoutingEndpointsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::RemoveCustomRoutingEndpoints, __VA_ARGS__)
#define RemoveCustomRoutingEndpointsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::RemoveCustomRoutingEndpoints, REQUEST)

#define RemoveEndpointsAsync(...)  SubmitAsync(&GlobalAcceleratorClient::RemoveEndpoints, __VA_ARGS__)
#define RemoveEndpointsCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::RemoveEndpoints, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&GlobalAcceleratorClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&GlobalAcceleratorClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::UntagResource, REQUEST)

#define UpdateAcceleratorAsync(...)  SubmitAsync(&GlobalAcceleratorClient::UpdateAccelerator, __VA_ARGS__)
#define UpdateAcceleratorCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::UpdateAccelerator, REQUEST)

#define UpdateAcceleratorAttributesAsync(...)  SubmitAsync(&GlobalAcceleratorClient::UpdateAcceleratorAttributes, __VA_ARGS__)
#define UpdateAcceleratorAttributesCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::UpdateAcceleratorAttributes, REQUEST)

#define UpdateCustomRoutingAcceleratorAsync(...)  SubmitAsync(&GlobalAcceleratorClient::UpdateCustomRoutingAccelerator, __VA_ARGS__)
#define UpdateCustomRoutingAcceleratorCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::UpdateCustomRoutingAccelerator, REQUEST)

#define UpdateCustomRoutingAcceleratorAttributesAsync(...)  SubmitAsync(&GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributes, __VA_ARGS__)
#define UpdateCustomRoutingAcceleratorAttributesCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::UpdateCustomRoutingAcceleratorAttributes, REQUEST)

#define UpdateCustomRoutingListenerAsync(...)  SubmitAsync(&GlobalAcceleratorClient::UpdateCustomRoutingListener, __VA_ARGS__)
#define UpdateCustomRoutingListenerCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::UpdateCustomRoutingListener, REQUEST)

#define UpdateEndpointGroupAsync(...)  SubmitAsync(&GlobalAcceleratorClient::UpdateEndpointGroup, __VA_ARGS__)
#define UpdateEndpointGroupCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::UpdateEndpointGroup, REQUEST)

#define UpdateListenerAsync(...)  SubmitAsync(&GlobalAcceleratorClient::UpdateListener, __VA_ARGS__)
#define UpdateListenerCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::UpdateListener, REQUEST)

#define WithdrawByoipCidrAsync(...)  SubmitAsync(&GlobalAcceleratorClient::WithdrawByoipCidr, __VA_ARGS__)
#define WithdrawByoipCidrCallable(REQUEST)  SubmitCallable(&GlobalAcceleratorClient::WithdrawByoipCidr, REQUEST)

