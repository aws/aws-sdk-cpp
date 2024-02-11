/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/KinesisStreamingSourceOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

KinesisStreamingSourceOptions::KinesisStreamingSourceOptions() : 
    m_endpointUrlHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_startingPosition(StartingPosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_maxFetchTimeInMs(0),
    m_maxFetchTimeInMsHasBeenSet(false),
    m_maxFetchRecordsPerShard(0),
    m_maxFetchRecordsPerShardHasBeenSet(false),
    m_maxRecordPerRead(0),
    m_maxRecordPerReadHasBeenSet(false),
    m_addIdleTimeBetweenReads(false),
    m_addIdleTimeBetweenReadsHasBeenSet(false),
    m_idleTimeBetweenReadsInMs(0),
    m_idleTimeBetweenReadsInMsHasBeenSet(false),
    m_describeShardInterval(0),
    m_describeShardIntervalHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_retryIntervalMs(0),
    m_retryIntervalMsHasBeenSet(false),
    m_maxRetryIntervalMs(0),
    m_maxRetryIntervalMsHasBeenSet(false),
    m_avoidEmptyBatches(false),
    m_avoidEmptyBatchesHasBeenSet(false),
    m_streamArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_roleSessionNameHasBeenSet(false),
    m_addRecordTimestampHasBeenSet(false),
    m_emitConsumerLagMetricsHasBeenSet(false),
    m_startingTimestampHasBeenSet(false)
{
}

KinesisStreamingSourceOptions::KinesisStreamingSourceOptions(JsonView jsonValue) : 
    m_endpointUrlHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_startingPosition(StartingPosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_maxFetchTimeInMs(0),
    m_maxFetchTimeInMsHasBeenSet(false),
    m_maxFetchRecordsPerShard(0),
    m_maxFetchRecordsPerShardHasBeenSet(false),
    m_maxRecordPerRead(0),
    m_maxRecordPerReadHasBeenSet(false),
    m_addIdleTimeBetweenReads(false),
    m_addIdleTimeBetweenReadsHasBeenSet(false),
    m_idleTimeBetweenReadsInMs(0),
    m_idleTimeBetweenReadsInMsHasBeenSet(false),
    m_describeShardInterval(0),
    m_describeShardIntervalHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_retryIntervalMs(0),
    m_retryIntervalMsHasBeenSet(false),
    m_maxRetryIntervalMs(0),
    m_maxRetryIntervalMsHasBeenSet(false),
    m_avoidEmptyBatches(false),
    m_avoidEmptyBatchesHasBeenSet(false),
    m_streamArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_roleSessionNameHasBeenSet(false),
    m_addRecordTimestampHasBeenSet(false),
    m_emitConsumerLagMetricsHasBeenSet(false),
    m_startingTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisStreamingSourceOptions& KinesisStreamingSourceOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointUrl"))
  {
    m_endpointUrl = jsonValue.GetString("EndpointUrl");

    m_endpointUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

    m_streamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Delimiter"))
  {
    m_delimiter = jsonValue.GetString("Delimiter");

    m_delimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingPosition"))
  {
    m_startingPosition = StartingPositionMapper::GetStartingPositionForName(jsonValue.GetString("StartingPosition"));

    m_startingPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFetchTimeInMs"))
  {
    m_maxFetchTimeInMs = jsonValue.GetInt64("MaxFetchTimeInMs");

    m_maxFetchTimeInMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFetchRecordsPerShard"))
  {
    m_maxFetchRecordsPerShard = jsonValue.GetInt64("MaxFetchRecordsPerShard");

    m_maxFetchRecordsPerShardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxRecordPerRead"))
  {
    m_maxRecordPerRead = jsonValue.GetInt64("MaxRecordPerRead");

    m_maxRecordPerReadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddIdleTimeBetweenReads"))
  {
    m_addIdleTimeBetweenReads = jsonValue.GetBool("AddIdleTimeBetweenReads");

    m_addIdleTimeBetweenReadsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdleTimeBetweenReadsInMs"))
  {
    m_idleTimeBetweenReadsInMs = jsonValue.GetInt64("IdleTimeBetweenReadsInMs");

    m_idleTimeBetweenReadsInMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DescribeShardInterval"))
  {
    m_describeShardInterval = jsonValue.GetInt64("DescribeShardInterval");

    m_describeShardIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumRetries"))
  {
    m_numRetries = jsonValue.GetInteger("NumRetries");

    m_numRetriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryIntervalMs"))
  {
    m_retryIntervalMs = jsonValue.GetInt64("RetryIntervalMs");

    m_retryIntervalMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxRetryIntervalMs"))
  {
    m_maxRetryIntervalMs = jsonValue.GetInt64("MaxRetryIntervalMs");

    m_maxRetryIntervalMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvoidEmptyBatches"))
  {
    m_avoidEmptyBatches = jsonValue.GetBool("AvoidEmptyBatches");

    m_avoidEmptyBatchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleSessionName"))
  {
    m_roleSessionName = jsonValue.GetString("RoleSessionName");

    m_roleSessionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddRecordTimestamp"))
  {
    m_addRecordTimestamp = jsonValue.GetString("AddRecordTimestamp");

    m_addRecordTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmitConsumerLagMetrics"))
  {
    m_emitConsumerLagMetrics = jsonValue.GetString("EmitConsumerLagMetrics");

    m_emitConsumerLagMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingTimestamp"))
  {
    m_startingTimestamp = jsonValue.GetString("StartingTimestamp");

    m_startingTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisStreamingSourceOptions::Jsonize() const
{
  JsonValue payload;

  if(m_endpointUrlHasBeenSet)
  {
   payload.WithString("EndpointUrl", m_endpointUrl);

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("Delimiter", m_delimiter);

  }

  if(m_startingPositionHasBeenSet)
  {
   payload.WithString("StartingPosition", StartingPositionMapper::GetNameForStartingPosition(m_startingPosition));
  }

  if(m_maxFetchTimeInMsHasBeenSet)
  {
   payload.WithInt64("MaxFetchTimeInMs", m_maxFetchTimeInMs);

  }

  if(m_maxFetchRecordsPerShardHasBeenSet)
  {
   payload.WithInt64("MaxFetchRecordsPerShard", m_maxFetchRecordsPerShard);

  }

  if(m_maxRecordPerReadHasBeenSet)
  {
   payload.WithInt64("MaxRecordPerRead", m_maxRecordPerRead);

  }

  if(m_addIdleTimeBetweenReadsHasBeenSet)
  {
   payload.WithBool("AddIdleTimeBetweenReads", m_addIdleTimeBetweenReads);

  }

  if(m_idleTimeBetweenReadsInMsHasBeenSet)
  {
   payload.WithInt64("IdleTimeBetweenReadsInMs", m_idleTimeBetweenReadsInMs);

  }

  if(m_describeShardIntervalHasBeenSet)
  {
   payload.WithInt64("DescribeShardInterval", m_describeShardInterval);

  }

  if(m_numRetriesHasBeenSet)
  {
   payload.WithInteger("NumRetries", m_numRetries);

  }

  if(m_retryIntervalMsHasBeenSet)
  {
   payload.WithInt64("RetryIntervalMs", m_retryIntervalMs);

  }

  if(m_maxRetryIntervalMsHasBeenSet)
  {
   payload.WithInt64("MaxRetryIntervalMs", m_maxRetryIntervalMs);

  }

  if(m_avoidEmptyBatchesHasBeenSet)
  {
   payload.WithBool("AvoidEmptyBatches", m_avoidEmptyBatches);

  }

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_roleSessionNameHasBeenSet)
  {
   payload.WithString("RoleSessionName", m_roleSessionName);

  }

  if(m_addRecordTimestampHasBeenSet)
  {
   payload.WithString("AddRecordTimestamp", m_addRecordTimestamp);

  }

  if(m_emitConsumerLagMetricsHasBeenSet)
  {
   payload.WithString("EmitConsumerLagMetrics", m_emitConsumerLagMetrics);

  }

  if(m_startingTimestampHasBeenSet)
  {
   payload.WithString("StartingTimestamp", m_startingTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
