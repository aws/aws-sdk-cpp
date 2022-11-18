/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateConnectionAsync(...)  SubmitAsync(&CodeStarconnectionsClient::CreateConnection, __VA_ARGS__)
#define CreateConnectionCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::CreateConnection, REQUEST)

#define CreateHostAsync(...)  SubmitAsync(&CodeStarconnectionsClient::CreateHost, __VA_ARGS__)
#define CreateHostCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::CreateHost, REQUEST)

#define DeleteConnectionAsync(...)  SubmitAsync(&CodeStarconnectionsClient::DeleteConnection, __VA_ARGS__)
#define DeleteConnectionCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::DeleteConnection, REQUEST)

#define DeleteHostAsync(...)  SubmitAsync(&CodeStarconnectionsClient::DeleteHost, __VA_ARGS__)
#define DeleteHostCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::DeleteHost, REQUEST)

#define GetConnectionAsync(...)  SubmitAsync(&CodeStarconnectionsClient::GetConnection, __VA_ARGS__)
#define GetConnectionCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::GetConnection, REQUEST)

#define GetHostAsync(...)  SubmitAsync(&CodeStarconnectionsClient::GetHost, __VA_ARGS__)
#define GetHostCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::GetHost, REQUEST)

#define ListConnectionsAsync(...)  SubmitAsync(&CodeStarconnectionsClient::ListConnections, __VA_ARGS__)
#define ListConnectionsCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::ListConnections, REQUEST)

#define ListHostsAsync(...)  SubmitAsync(&CodeStarconnectionsClient::ListHosts, __VA_ARGS__)
#define ListHostsCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::ListHosts, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CodeStarconnectionsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CodeStarconnectionsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CodeStarconnectionsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::UntagResource, REQUEST)

#define UpdateHostAsync(...)  SubmitAsync(&CodeStarconnectionsClient::UpdateHost, __VA_ARGS__)
#define UpdateHostCallable(REQUEST)  SubmitCallable(&CodeStarconnectionsClient::UpdateHost, REQUEST)

