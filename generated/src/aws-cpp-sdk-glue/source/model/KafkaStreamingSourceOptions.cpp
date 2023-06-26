/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/KafkaStreamingSourceOptions.h>
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

KafkaStreamingSourceOptions::KafkaStreamingSourceOptions() : 
    m_bootstrapServersHasBeenSet(false),
    m_securityProtocolHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_assignHasBeenSet(false),
    m_subscribePatternHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_startingOffsetsHasBeenSet(false),
    m_endingOffsetsHasBeenSet(false),
    m_pollTimeoutMs(0),
    m_pollTimeoutMsHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_retryIntervalMs(0),
    m_retryIntervalMsHasBeenSet(false),
    m_maxOffsetsPerTrigger(0),
    m_maxOffsetsPerTriggerHasBeenSet(false),
    m_minPartitions(0),
    m_minPartitionsHasBeenSet(false),
    m_includeHeaders(false),
    m_includeHeadersHasBeenSet(false),
    m_addRecordTimestampHasBeenSet(false),
    m_emitConsumerLagMetricsHasBeenSet(false),
    m_startingTimestampHasBeenSet(false)
{
}

KafkaStreamingSourceOptions::KafkaStreamingSourceOptions(JsonView jsonValue) : 
    m_bootstrapServersHasBeenSet(false),
    m_securityProtocolHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_assignHasBeenSet(false),
    m_subscribePatternHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_startingOffsetsHasBeenSet(false),
    m_endingOffsetsHasBeenSet(false),
    m_pollTimeoutMs(0),
    m_pollTimeoutMsHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_retryIntervalMs(0),
    m_retryIntervalMsHasBeenSet(false),
    m_maxOffsetsPerTrigger(0),
    m_maxOffsetsPerTriggerHasBeenSet(false),
    m_minPartitions(0),
    m_minPartitionsHasBeenSet(false),
    m_includeHeaders(false),
    m_includeHeadersHasBeenSet(false),
    m_addRecordTimestampHasBeenSet(false),
    m_emitConsumerLagMetricsHasBeenSet(false),
    m_startingTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaStreamingSourceOptions& KafkaStreamingSourceOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BootstrapServers"))
  {
    m_bootstrapServers = jsonValue.GetString("BootstrapServers");

    m_bootstrapServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityProtocol"))
  {
    m_securityProtocol = jsonValue.GetString("SecurityProtocol");

    m_securityProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Assign"))
  {
    m_assign = jsonValue.GetString("Assign");

    m_assignHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscribePattern"))
  {
    m_subscribePattern = jsonValue.GetString("SubscribePattern");

    m_subscribePatternHasBeenSet = true;
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

  if(jsonValue.ValueExists("StartingOffsets"))
  {
    m_startingOffsets = jsonValue.GetString("StartingOffsets");

    m_startingOffsetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndingOffsets"))
  {
    m_endingOffsets = jsonValue.GetString("EndingOffsets");

    m_endingOffsetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PollTimeoutMs"))
  {
    m_pollTimeoutMs = jsonValue.GetInt64("PollTimeoutMs");

    m_pollTimeoutMsHasBeenSet = true;
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

  if(jsonValue.ValueExists("MaxOffsetsPerTrigger"))
  {
    m_maxOffsetsPerTrigger = jsonValue.GetInt64("MaxOffsetsPerTrigger");

    m_maxOffsetsPerTriggerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinPartitions"))
  {
    m_minPartitions = jsonValue.GetInteger("MinPartitions");

    m_minPartitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeHeaders"))
  {
    m_includeHeaders = jsonValue.GetBool("IncludeHeaders");

    m_includeHeadersHasBeenSet = true;
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

JsonValue KafkaStreamingSourceOptions::Jsonize() const
{
  JsonValue payload;

  if(m_bootstrapServersHasBeenSet)
  {
   payload.WithString("BootstrapServers", m_bootstrapServers);

  }

  if(m_securityProtocolHasBeenSet)
  {
   payload.WithString("SecurityProtocol", m_securityProtocol);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  if(m_assignHasBeenSet)
  {
   payload.WithString("Assign", m_assign);

  }

  if(m_subscribePatternHasBeenSet)
  {
   payload.WithString("SubscribePattern", m_subscribePattern);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("Delimiter", m_delimiter);

  }

  if(m_startingOffsetsHasBeenSet)
  {
   payload.WithString("StartingOffsets", m_startingOffsets);

  }

  if(m_endingOffsetsHasBeenSet)
  {
   payload.WithString("EndingOffsets", m_endingOffsets);

  }

  if(m_pollTimeoutMsHasBeenSet)
  {
   payload.WithInt64("PollTimeoutMs", m_pollTimeoutMs);

  }

  if(m_numRetriesHasBeenSet)
  {
   payload.WithInteger("NumRetries", m_numRetries);

  }

  if(m_retryIntervalMsHasBeenSet)
  {
   payload.WithInt64("RetryIntervalMs", m_retryIntervalMs);

  }

  if(m_maxOffsetsPerTriggerHasBeenSet)
  {
   payload.WithInt64("MaxOffsetsPerTrigger", m_maxOffsetsPerTrigger);

  }

  if(m_minPartitionsHasBeenSet)
  {
   payload.WithInteger("MinPartitions", m_minPartitions);

  }

  if(m_includeHeadersHasBeenSet)
  {
   payload.WithBool("IncludeHeaders", m_includeHeaders);

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
