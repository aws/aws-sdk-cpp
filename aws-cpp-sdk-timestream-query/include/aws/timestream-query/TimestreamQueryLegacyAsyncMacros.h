/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelQueryAsync(...)  SubmitAsync(&TimestreamQueryClient::CancelQuery, __VA_ARGS__)
#define CancelQueryCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::CancelQuery, REQUEST)

#define CreateScheduledQueryAsync(...)  SubmitAsync(&TimestreamQueryClient::CreateScheduledQuery, __VA_ARGS__)
#define CreateScheduledQueryCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::CreateScheduledQuery, REQUEST)

#define DeleteScheduledQueryAsync(...)  SubmitAsync(&TimestreamQueryClient::DeleteScheduledQuery, __VA_ARGS__)
#define DeleteScheduledQueryCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::DeleteScheduledQuery, REQUEST)

#define DescribeEndpointsAsync(...)  SubmitAsync(&TimestreamQueryClient::DescribeEndpoints, __VA_ARGS__)
#define DescribeEndpointsCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::DescribeEndpoints, REQUEST)

#define DescribeScheduledQueryAsync(...)  SubmitAsync(&TimestreamQueryClient::DescribeScheduledQuery, __VA_ARGS__)
#define DescribeScheduledQueryCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::DescribeScheduledQuery, REQUEST)

#define ExecuteScheduledQueryAsync(...)  SubmitAsync(&TimestreamQueryClient::ExecuteScheduledQuery, __VA_ARGS__)
#define ExecuteScheduledQueryCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::ExecuteScheduledQuery, REQUEST)

#define ListScheduledQueriesAsync(...)  SubmitAsync(&TimestreamQueryClient::ListScheduledQueries, __VA_ARGS__)
#define ListScheduledQueriesCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::ListScheduledQueries, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&TimestreamQueryClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::ListTagsForResource, REQUEST)

#define PrepareQueryAsync(...)  SubmitAsync(&TimestreamQueryClient::PrepareQuery, __VA_ARGS__)
#define PrepareQueryCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::PrepareQuery, REQUEST)

#define QueryAsync(...)  SubmitAsync(&TimestreamQueryClient::Query, __VA_ARGS__)
#define QueryCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::Query, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&TimestreamQueryClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&TimestreamQueryClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::UntagResource, REQUEST)

#define UpdateScheduledQueryAsync(...)  SubmitAsync(&TimestreamQueryClient::UpdateScheduledQuery, __VA_ARGS__)
#define UpdateScheduledQueryCallable(REQUEST)  SubmitCallable(&TimestreamQueryClient::UpdateScheduledQuery, REQUEST)

