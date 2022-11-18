/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateDefaultViewAsync(...)  SubmitAsync(&ResourceExplorer2Client::AssociateDefaultView, __VA_ARGS__)
#define AssociateDefaultViewCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::AssociateDefaultView, REQUEST)

#define BatchGetViewAsync(...)  SubmitAsync(&ResourceExplorer2Client::BatchGetView, __VA_ARGS__)
#define BatchGetViewCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::BatchGetView, REQUEST)

#define CreateIndexAsync(...)  SubmitAsync(&ResourceExplorer2Client::CreateIndex, __VA_ARGS__)
#define CreateIndexCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::CreateIndex, REQUEST)

#define CreateViewAsync(...)  SubmitAsync(&ResourceExplorer2Client::CreateView, __VA_ARGS__)
#define CreateViewCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::CreateView, REQUEST)

#define DeleteIndexAsync(...)  SubmitAsync(&ResourceExplorer2Client::DeleteIndex, __VA_ARGS__)
#define DeleteIndexCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::DeleteIndex, REQUEST)

#define DeleteViewAsync(...)  SubmitAsync(&ResourceExplorer2Client::DeleteView, __VA_ARGS__)
#define DeleteViewCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::DeleteView, REQUEST)




#define GetViewAsync(...)  SubmitAsync(&ResourceExplorer2Client::GetView, __VA_ARGS__)
#define GetViewCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::GetView, REQUEST)

#define ListIndexesAsync(...)  SubmitAsync(&ResourceExplorer2Client::ListIndexes, __VA_ARGS__)
#define ListIndexesCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::ListIndexes, REQUEST)

#define ListSupportedResourceTypesAsync(...)  SubmitAsync(&ResourceExplorer2Client::ListSupportedResourceTypes, __VA_ARGS__)
#define ListSupportedResourceTypesCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::ListSupportedResourceTypes, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ResourceExplorer2Client::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::ListTagsForResource, REQUEST)

#define ListViewsAsync(...)  SubmitAsync(&ResourceExplorer2Client::ListViews, __VA_ARGS__)
#define ListViewsCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::ListViews, REQUEST)

#define SearchAsync(...)  SubmitAsync(&ResourceExplorer2Client::Search, __VA_ARGS__)
#define SearchCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::Search, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ResourceExplorer2Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ResourceExplorer2Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::UntagResource, REQUEST)

#define UpdateIndexTypeAsync(...)  SubmitAsync(&ResourceExplorer2Client::UpdateIndexType, __VA_ARGS__)
#define UpdateIndexTypeCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::UpdateIndexType, REQUEST)

#define UpdateViewAsync(...)  SubmitAsync(&ResourceExplorer2Client::UpdateView, __VA_ARGS__)
#define UpdateViewCallable(REQUEST)  SubmitCallable(&ResourceExplorer2Client::UpdateView, REQUEST)

