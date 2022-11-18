/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelChangeSetAsync(...)  SubmitAsync(&MarketplaceCatalogClient::CancelChangeSet, __VA_ARGS__)
#define CancelChangeSetCallable(REQUEST)  SubmitCallable(&MarketplaceCatalogClient::CancelChangeSet, REQUEST)

#define DescribeChangeSetAsync(...)  SubmitAsync(&MarketplaceCatalogClient::DescribeChangeSet, __VA_ARGS__)
#define DescribeChangeSetCallable(REQUEST)  SubmitCallable(&MarketplaceCatalogClient::DescribeChangeSet, REQUEST)

#define DescribeEntityAsync(...)  SubmitAsync(&MarketplaceCatalogClient::DescribeEntity, __VA_ARGS__)
#define DescribeEntityCallable(REQUEST)  SubmitCallable(&MarketplaceCatalogClient::DescribeEntity, REQUEST)

#define ListChangeSetsAsync(...)  SubmitAsync(&MarketplaceCatalogClient::ListChangeSets, __VA_ARGS__)
#define ListChangeSetsCallable(REQUEST)  SubmitCallable(&MarketplaceCatalogClient::ListChangeSets, REQUEST)

#define ListEntitiesAsync(...)  SubmitAsync(&MarketplaceCatalogClient::ListEntities, __VA_ARGS__)
#define ListEntitiesCallable(REQUEST)  SubmitCallable(&MarketplaceCatalogClient::ListEntities, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MarketplaceCatalogClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MarketplaceCatalogClient::ListTagsForResource, REQUEST)

#define StartChangeSetAsync(...)  SubmitAsync(&MarketplaceCatalogClient::StartChangeSet, __VA_ARGS__)
#define StartChangeSetCallable(REQUEST)  SubmitCallable(&MarketplaceCatalogClient::StartChangeSet, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MarketplaceCatalogClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MarketplaceCatalogClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MarketplaceCatalogClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MarketplaceCatalogClient::UntagResource, REQUEST)

