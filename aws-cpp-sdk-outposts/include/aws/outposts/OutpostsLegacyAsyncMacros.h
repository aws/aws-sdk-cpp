/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelOrderAsync(...)  SubmitAsync(&OutpostsClient::CancelOrder, __VA_ARGS__)
#define CancelOrderCallable(REQUEST)  SubmitCallable(&OutpostsClient::CancelOrder, REQUEST)

#define CreateOrderAsync(...)  SubmitAsync(&OutpostsClient::CreateOrder, __VA_ARGS__)
#define CreateOrderCallable(REQUEST)  SubmitCallable(&OutpostsClient::CreateOrder, REQUEST)

#define CreateOutpostAsync(...)  SubmitAsync(&OutpostsClient::CreateOutpost, __VA_ARGS__)
#define CreateOutpostCallable(REQUEST)  SubmitCallable(&OutpostsClient::CreateOutpost, REQUEST)

#define CreateSiteAsync(...)  SubmitAsync(&OutpostsClient::CreateSite, __VA_ARGS__)
#define CreateSiteCallable(REQUEST)  SubmitCallable(&OutpostsClient::CreateSite, REQUEST)

#define DeleteOutpostAsync(...)  SubmitAsync(&OutpostsClient::DeleteOutpost, __VA_ARGS__)
#define DeleteOutpostCallable(REQUEST)  SubmitCallable(&OutpostsClient::DeleteOutpost, REQUEST)

#define DeleteSiteAsync(...)  SubmitAsync(&OutpostsClient::DeleteSite, __VA_ARGS__)
#define DeleteSiteCallable(REQUEST)  SubmitCallable(&OutpostsClient::DeleteSite, REQUEST)

#define GetCatalogItemAsync(...)  SubmitAsync(&OutpostsClient::GetCatalogItem, __VA_ARGS__)
#define GetCatalogItemCallable(REQUEST)  SubmitCallable(&OutpostsClient::GetCatalogItem, REQUEST)

#define GetConnectionAsync(...)  SubmitAsync(&OutpostsClient::GetConnection, __VA_ARGS__)
#define GetConnectionCallable(REQUEST)  SubmitCallable(&OutpostsClient::GetConnection, REQUEST)

#define GetOrderAsync(...)  SubmitAsync(&OutpostsClient::GetOrder, __VA_ARGS__)
#define GetOrderCallable(REQUEST)  SubmitCallable(&OutpostsClient::GetOrder, REQUEST)

#define GetOutpostAsync(...)  SubmitAsync(&OutpostsClient::GetOutpost, __VA_ARGS__)
#define GetOutpostCallable(REQUEST)  SubmitCallable(&OutpostsClient::GetOutpost, REQUEST)

#define GetOutpostInstanceTypesAsync(...)  SubmitAsync(&OutpostsClient::GetOutpostInstanceTypes, __VA_ARGS__)
#define GetOutpostInstanceTypesCallable(REQUEST)  SubmitCallable(&OutpostsClient::GetOutpostInstanceTypes, REQUEST)

#define GetSiteAsync(...)  SubmitAsync(&OutpostsClient::GetSite, __VA_ARGS__)
#define GetSiteCallable(REQUEST)  SubmitCallable(&OutpostsClient::GetSite, REQUEST)

#define GetSiteAddressAsync(...)  SubmitAsync(&OutpostsClient::GetSiteAddress, __VA_ARGS__)
#define GetSiteAddressCallable(REQUEST)  SubmitCallable(&OutpostsClient::GetSiteAddress, REQUEST)

#define ListAssetsAsync(...)  SubmitAsync(&OutpostsClient::ListAssets, __VA_ARGS__)
#define ListAssetsCallable(REQUEST)  SubmitCallable(&OutpostsClient::ListAssets, REQUEST)

#define ListCatalogItemsAsync(...)  SubmitAsync(&OutpostsClient::ListCatalogItems, __VA_ARGS__)
#define ListCatalogItemsCallable(REQUEST)  SubmitCallable(&OutpostsClient::ListCatalogItems, REQUEST)

#define ListOrdersAsync(...)  SubmitAsync(&OutpostsClient::ListOrders, __VA_ARGS__)
#define ListOrdersCallable(REQUEST)  SubmitCallable(&OutpostsClient::ListOrders, REQUEST)

#define ListOutpostsAsync(...)  SubmitAsync(&OutpostsClient::ListOutposts, __VA_ARGS__)
#define ListOutpostsCallable(REQUEST)  SubmitCallable(&OutpostsClient::ListOutposts, REQUEST)

#define ListSitesAsync(...)  SubmitAsync(&OutpostsClient::ListSites, __VA_ARGS__)
#define ListSitesCallable(REQUEST)  SubmitCallable(&OutpostsClient::ListSites, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&OutpostsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&OutpostsClient::ListTagsForResource, REQUEST)

#define StartConnectionAsync(...)  SubmitAsync(&OutpostsClient::StartConnection, __VA_ARGS__)
#define StartConnectionCallable(REQUEST)  SubmitCallable(&OutpostsClient::StartConnection, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&OutpostsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&OutpostsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&OutpostsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&OutpostsClient::UntagResource, REQUEST)

#define UpdateOutpostAsync(...)  SubmitAsync(&OutpostsClient::UpdateOutpost, __VA_ARGS__)
#define UpdateOutpostCallable(REQUEST)  SubmitCallable(&OutpostsClient::UpdateOutpost, REQUEST)

#define UpdateSiteAsync(...)  SubmitAsync(&OutpostsClient::UpdateSite, __VA_ARGS__)
#define UpdateSiteCallable(REQUEST)  SubmitCallable(&OutpostsClient::UpdateSite, REQUEST)

#define UpdateSiteAddressAsync(...)  SubmitAsync(&OutpostsClient::UpdateSiteAddress, __VA_ARGS__)
#define UpdateSiteAddressCallable(REQUEST)  SubmitCallable(&OutpostsClient::UpdateSiteAddress, REQUEST)

#define UpdateSiteRackPhysicalPropertiesAsync(...)  SubmitAsync(&OutpostsClient::UpdateSiteRackPhysicalProperties, __VA_ARGS__)
#define UpdateSiteRackPhysicalPropertiesCallable(REQUEST)  SubmitCallable(&OutpostsClient::UpdateSiteRackPhysicalProperties, REQUEST)

