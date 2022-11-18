/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DescribeStreamAsync(...)  SubmitAsync(&DynamoDBStreamsClient::DescribeStream, __VA_ARGS__)
#define DescribeStreamCallable(REQUEST)  SubmitCallable(&DynamoDBStreamsClient::DescribeStream, REQUEST)

#define GetRecordsAsync(...)  SubmitAsync(&DynamoDBStreamsClient::GetRecords, __VA_ARGS__)
#define GetRecordsCallable(REQUEST)  SubmitCallable(&DynamoDBStreamsClient::GetRecords, REQUEST)

#define GetShardIteratorAsync(...)  SubmitAsync(&DynamoDBStreamsClient::GetShardIterator, __VA_ARGS__)
#define GetShardIteratorCallable(REQUEST)  SubmitCallable(&DynamoDBStreamsClient::GetShardIterator, REQUEST)

#define ListStreamsAsync(...)  SubmitAsync(&DynamoDBStreamsClient::ListStreams, __VA_ARGS__)
#define ListStreamsCallable(REQUEST)  SubmitCallable(&DynamoDBStreamsClient::ListStreams, REQUEST)

