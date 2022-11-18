/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateDeliveryStreamAsync(...)  SubmitAsync(&FirehoseClient::CreateDeliveryStream, __VA_ARGS__)
#define CreateDeliveryStreamCallable(REQUEST)  SubmitCallable(&FirehoseClient::CreateDeliveryStream, REQUEST)

#define DeleteDeliveryStreamAsync(...)  SubmitAsync(&FirehoseClient::DeleteDeliveryStream, __VA_ARGS__)
#define DeleteDeliveryStreamCallable(REQUEST)  SubmitCallable(&FirehoseClient::DeleteDeliveryStream, REQUEST)

#define DescribeDeliveryStreamAsync(...)  SubmitAsync(&FirehoseClient::DescribeDeliveryStream, __VA_ARGS__)
#define DescribeDeliveryStreamCallable(REQUEST)  SubmitCallable(&FirehoseClient::DescribeDeliveryStream, REQUEST)

#define ListDeliveryStreamsAsync(...)  SubmitAsync(&FirehoseClient::ListDeliveryStreams, __VA_ARGS__)
#define ListDeliveryStreamsCallable(REQUEST)  SubmitCallable(&FirehoseClient::ListDeliveryStreams, REQUEST)

#define ListTagsForDeliveryStreamAsync(...)  SubmitAsync(&FirehoseClient::ListTagsForDeliveryStream, __VA_ARGS__)
#define ListTagsForDeliveryStreamCallable(REQUEST)  SubmitCallable(&FirehoseClient::ListTagsForDeliveryStream, REQUEST)

#define PutRecordAsync(...)  SubmitAsync(&FirehoseClient::PutRecord, __VA_ARGS__)
#define PutRecordCallable(REQUEST)  SubmitCallable(&FirehoseClient::PutRecord, REQUEST)

#define PutRecordBatchAsync(...)  SubmitAsync(&FirehoseClient::PutRecordBatch, __VA_ARGS__)
#define PutRecordBatchCallable(REQUEST)  SubmitCallable(&FirehoseClient::PutRecordBatch, REQUEST)

#define StartDeliveryStreamEncryptionAsync(...)  SubmitAsync(&FirehoseClient::StartDeliveryStreamEncryption, __VA_ARGS__)
#define StartDeliveryStreamEncryptionCallable(REQUEST)  SubmitCallable(&FirehoseClient::StartDeliveryStreamEncryption, REQUEST)

#define StopDeliveryStreamEncryptionAsync(...)  SubmitAsync(&FirehoseClient::StopDeliveryStreamEncryption, __VA_ARGS__)
#define StopDeliveryStreamEncryptionCallable(REQUEST)  SubmitCallable(&FirehoseClient::StopDeliveryStreamEncryption, REQUEST)

#define TagDeliveryStreamAsync(...)  SubmitAsync(&FirehoseClient::TagDeliveryStream, __VA_ARGS__)
#define TagDeliveryStreamCallable(REQUEST)  SubmitCallable(&FirehoseClient::TagDeliveryStream, REQUEST)

#define UntagDeliveryStreamAsync(...)  SubmitAsync(&FirehoseClient::UntagDeliveryStream, __VA_ARGS__)
#define UntagDeliveryStreamCallable(REQUEST)  SubmitCallable(&FirehoseClient::UntagDeliveryStream, REQUEST)

#define UpdateDestinationAsync(...)  SubmitAsync(&FirehoseClient::UpdateDestination, __VA_ARGS__)
#define UpdateDestinationCallable(REQUEST)  SubmitCallable(&FirehoseClient::UpdateDestination, REQUEST)

