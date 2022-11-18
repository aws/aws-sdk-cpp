/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsToStreamAsync(...)  SubmitAsync(&KinesisClient::AddTagsToStream, __VA_ARGS__)
#define AddTagsToStreamCallable(REQUEST)  SubmitCallable(&KinesisClient::AddTagsToStream, REQUEST)

#define CreateStreamAsync(...)  SubmitAsync(&KinesisClient::CreateStream, __VA_ARGS__)
#define CreateStreamCallable(REQUEST)  SubmitCallable(&KinesisClient::CreateStream, REQUEST)

#define DecreaseStreamRetentionPeriodAsync(...)  SubmitAsync(&KinesisClient::DecreaseStreamRetentionPeriod, __VA_ARGS__)
#define DecreaseStreamRetentionPeriodCallable(REQUEST)  SubmitCallable(&KinesisClient::DecreaseStreamRetentionPeriod, REQUEST)

#define DeleteStreamAsync(...)  SubmitAsync(&KinesisClient::DeleteStream, __VA_ARGS__)
#define DeleteStreamCallable(REQUEST)  SubmitCallable(&KinesisClient::DeleteStream, REQUEST)

#define DeregisterStreamConsumerAsync(...)  SubmitAsync(&KinesisClient::DeregisterStreamConsumer, __VA_ARGS__)
#define DeregisterStreamConsumerCallable(REQUEST)  SubmitCallable(&KinesisClient::DeregisterStreamConsumer, REQUEST)

#define DescribeLimitsAsync(...)  SubmitAsync(&KinesisClient::DescribeLimits, __VA_ARGS__)
#define DescribeLimitsCallable(REQUEST)  SubmitCallable(&KinesisClient::DescribeLimits, REQUEST)

#define DescribeStreamAsync(...)  SubmitAsync(&KinesisClient::DescribeStream, __VA_ARGS__)
#define DescribeStreamCallable(REQUEST)  SubmitCallable(&KinesisClient::DescribeStream, REQUEST)

#define DescribeStreamConsumerAsync(...)  SubmitAsync(&KinesisClient::DescribeStreamConsumer, __VA_ARGS__)
#define DescribeStreamConsumerCallable(REQUEST)  SubmitCallable(&KinesisClient::DescribeStreamConsumer, REQUEST)

#define DescribeStreamSummaryAsync(...)  SubmitAsync(&KinesisClient::DescribeStreamSummary, __VA_ARGS__)
#define DescribeStreamSummaryCallable(REQUEST)  SubmitCallable(&KinesisClient::DescribeStreamSummary, REQUEST)

#define DisableEnhancedMonitoringAsync(...)  SubmitAsync(&KinesisClient::DisableEnhancedMonitoring, __VA_ARGS__)
#define DisableEnhancedMonitoringCallable(REQUEST)  SubmitCallable(&KinesisClient::DisableEnhancedMonitoring, REQUEST)

#define EnableEnhancedMonitoringAsync(...)  SubmitAsync(&KinesisClient::EnableEnhancedMonitoring, __VA_ARGS__)
#define EnableEnhancedMonitoringCallable(REQUEST)  SubmitCallable(&KinesisClient::EnableEnhancedMonitoring, REQUEST)

#define GetRecordsAsync(...)  SubmitAsync(&KinesisClient::GetRecords, __VA_ARGS__)
#define GetRecordsCallable(REQUEST)  SubmitCallable(&KinesisClient::GetRecords, REQUEST)

#define GetShardIteratorAsync(...)  SubmitAsync(&KinesisClient::GetShardIterator, __VA_ARGS__)
#define GetShardIteratorCallable(REQUEST)  SubmitCallable(&KinesisClient::GetShardIterator, REQUEST)

#define IncreaseStreamRetentionPeriodAsync(...)  SubmitAsync(&KinesisClient::IncreaseStreamRetentionPeriod, __VA_ARGS__)
#define IncreaseStreamRetentionPeriodCallable(REQUEST)  SubmitCallable(&KinesisClient::IncreaseStreamRetentionPeriod, REQUEST)

#define ListShardsAsync(...)  SubmitAsync(&KinesisClient::ListShards, __VA_ARGS__)
#define ListShardsCallable(REQUEST)  SubmitCallable(&KinesisClient::ListShards, REQUEST)

#define ListStreamConsumersAsync(...)  SubmitAsync(&KinesisClient::ListStreamConsumers, __VA_ARGS__)
#define ListStreamConsumersCallable(REQUEST)  SubmitCallable(&KinesisClient::ListStreamConsumers, REQUEST)

#define ListStreamsAsync(...)  SubmitAsync(&KinesisClient::ListStreams, __VA_ARGS__)
#define ListStreamsCallable(REQUEST)  SubmitCallable(&KinesisClient::ListStreams, REQUEST)

#define ListTagsForStreamAsync(...)  SubmitAsync(&KinesisClient::ListTagsForStream, __VA_ARGS__)
#define ListTagsForStreamCallable(REQUEST)  SubmitCallable(&KinesisClient::ListTagsForStream, REQUEST)

#define MergeShardsAsync(...)  SubmitAsync(&KinesisClient::MergeShards, __VA_ARGS__)
#define MergeShardsCallable(REQUEST)  SubmitCallable(&KinesisClient::MergeShards, REQUEST)

#define PutRecordAsync(...)  SubmitAsync(&KinesisClient::PutRecord, __VA_ARGS__)
#define PutRecordCallable(REQUEST)  SubmitCallable(&KinesisClient::PutRecord, REQUEST)

#define PutRecordsAsync(...)  SubmitAsync(&KinesisClient::PutRecords, __VA_ARGS__)
#define PutRecordsCallable(REQUEST)  SubmitCallable(&KinesisClient::PutRecords, REQUEST)

#define RegisterStreamConsumerAsync(...)  SubmitAsync(&KinesisClient::RegisterStreamConsumer, __VA_ARGS__)
#define RegisterStreamConsumerCallable(REQUEST)  SubmitCallable(&KinesisClient::RegisterStreamConsumer, REQUEST)

#define RemoveTagsFromStreamAsync(...)  SubmitAsync(&KinesisClient::RemoveTagsFromStream, __VA_ARGS__)
#define RemoveTagsFromStreamCallable(REQUEST)  SubmitCallable(&KinesisClient::RemoveTagsFromStream, REQUEST)

#define SplitShardAsync(...)  SubmitAsync(&KinesisClient::SplitShard, __VA_ARGS__)
#define SplitShardCallable(REQUEST)  SubmitCallable(&KinesisClient::SplitShard, REQUEST)

#define StartStreamEncryptionAsync(...)  SubmitAsync(&KinesisClient::StartStreamEncryption, __VA_ARGS__)
#define StartStreamEncryptionCallable(REQUEST)  SubmitCallable(&KinesisClient::StartStreamEncryption, REQUEST)

#define StopStreamEncryptionAsync(...)  SubmitAsync(&KinesisClient::StopStreamEncryption, __VA_ARGS__)
#define StopStreamEncryptionCallable(REQUEST)  SubmitCallable(&KinesisClient::StopStreamEncryption, REQUEST)

#define SubscribeToShardAsync(...)  SubmitAsync(&KinesisClient::SubscribeToShard, __VA_ARGS__)
#define SubscribeToShardCallable(REQUEST)  SubmitCallable(&KinesisClient::SubscribeToShard, REQUEST)

#define UpdateShardCountAsync(...)  SubmitAsync(&KinesisClient::UpdateShardCount, __VA_ARGS__)
#define UpdateShardCountCallable(REQUEST)  SubmitCallable(&KinesisClient::UpdateShardCount, REQUEST)

#define UpdateStreamModeAsync(...)  SubmitAsync(&KinesisClient::UpdateStreamMode, __VA_ARGS__)
#define UpdateStreamModeCallable(REQUEST)  SubmitCallable(&KinesisClient::UpdateStreamMode, REQUEST)

