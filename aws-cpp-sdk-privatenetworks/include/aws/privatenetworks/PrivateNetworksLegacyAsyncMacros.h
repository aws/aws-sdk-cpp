/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcknowledgeOrderReceiptAsync(...)  SubmitAsync(&PrivateNetworksClient::AcknowledgeOrderReceipt, __VA_ARGS__)
#define AcknowledgeOrderReceiptCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::AcknowledgeOrderReceipt, REQUEST)

#define ActivateDeviceIdentifierAsync(...)  SubmitAsync(&PrivateNetworksClient::ActivateDeviceIdentifier, __VA_ARGS__)
#define ActivateDeviceIdentifierCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::ActivateDeviceIdentifier, REQUEST)

#define ActivateNetworkSiteAsync(...)  SubmitAsync(&PrivateNetworksClient::ActivateNetworkSite, __VA_ARGS__)
#define ActivateNetworkSiteCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::ActivateNetworkSite, REQUEST)

#define ConfigureAccessPointAsync(...)  SubmitAsync(&PrivateNetworksClient::ConfigureAccessPoint, __VA_ARGS__)
#define ConfigureAccessPointCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::ConfigureAccessPoint, REQUEST)

#define CreateNetworkAsync(...)  SubmitAsync(&PrivateNetworksClient::CreateNetwork, __VA_ARGS__)
#define CreateNetworkCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::CreateNetwork, REQUEST)

#define CreateNetworkSiteAsync(...)  SubmitAsync(&PrivateNetworksClient::CreateNetworkSite, __VA_ARGS__)
#define CreateNetworkSiteCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::CreateNetworkSite, REQUEST)

#define DeactivateDeviceIdentifierAsync(...)  SubmitAsync(&PrivateNetworksClient::DeactivateDeviceIdentifier, __VA_ARGS__)
#define DeactivateDeviceIdentifierCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::DeactivateDeviceIdentifier, REQUEST)

#define DeleteNetworkAsync(...)  SubmitAsync(&PrivateNetworksClient::DeleteNetwork, __VA_ARGS__)
#define DeleteNetworkCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::DeleteNetwork, REQUEST)

#define DeleteNetworkSiteAsync(...)  SubmitAsync(&PrivateNetworksClient::DeleteNetworkSite, __VA_ARGS__)
#define DeleteNetworkSiteCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::DeleteNetworkSite, REQUEST)

#define GetDeviceIdentifierAsync(...)  SubmitAsync(&PrivateNetworksClient::GetDeviceIdentifier, __VA_ARGS__)
#define GetDeviceIdentifierCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::GetDeviceIdentifier, REQUEST)

#define GetNetworkAsync(...)  SubmitAsync(&PrivateNetworksClient::GetNetwork, __VA_ARGS__)
#define GetNetworkCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::GetNetwork, REQUEST)

#define GetNetworkResourceAsync(...)  SubmitAsync(&PrivateNetworksClient::GetNetworkResource, __VA_ARGS__)
#define GetNetworkResourceCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::GetNetworkResource, REQUEST)

#define GetNetworkSiteAsync(...)  SubmitAsync(&PrivateNetworksClient::GetNetworkSite, __VA_ARGS__)
#define GetNetworkSiteCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::GetNetworkSite, REQUEST)

#define GetOrderAsync(...)  SubmitAsync(&PrivateNetworksClient::GetOrder, __VA_ARGS__)
#define GetOrderCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::GetOrder, REQUEST)

#define ListDeviceIdentifiersAsync(...)  SubmitAsync(&PrivateNetworksClient::ListDeviceIdentifiers, __VA_ARGS__)
#define ListDeviceIdentifiersCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::ListDeviceIdentifiers, REQUEST)

#define ListNetworkResourcesAsync(...)  SubmitAsync(&PrivateNetworksClient::ListNetworkResources, __VA_ARGS__)
#define ListNetworkResourcesCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::ListNetworkResources, REQUEST)

#define ListNetworkSitesAsync(...)  SubmitAsync(&PrivateNetworksClient::ListNetworkSites, __VA_ARGS__)
#define ListNetworkSitesCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::ListNetworkSites, REQUEST)

#define ListNetworksAsync(...)  SubmitAsync(&PrivateNetworksClient::ListNetworks, __VA_ARGS__)
#define ListNetworksCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::ListNetworks, REQUEST)

#define ListOrdersAsync(...)  SubmitAsync(&PrivateNetworksClient::ListOrders, __VA_ARGS__)
#define ListOrdersCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::ListOrders, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&PrivateNetworksClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::ListTagsForResource, REQUEST)


#define TagResourceAsync(...)  SubmitAsync(&PrivateNetworksClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&PrivateNetworksClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::UntagResource, REQUEST)

#define UpdateNetworkSiteAsync(...)  SubmitAsync(&PrivateNetworksClient::UpdateNetworkSite, __VA_ARGS__)
#define UpdateNetworkSiteCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::UpdateNetworkSite, REQUEST)

#define UpdateNetworkSitePlanAsync(...)  SubmitAsync(&PrivateNetworksClient::UpdateNetworkSitePlan, __VA_ARGS__)
#define UpdateNetworkSitePlanCallable(REQUEST)  SubmitCallable(&PrivateNetworksClient::UpdateNetworkSitePlan, REQUEST)

