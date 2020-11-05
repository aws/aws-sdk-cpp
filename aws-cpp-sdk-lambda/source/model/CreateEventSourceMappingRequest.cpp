/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/CreateEventSourceMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEventSourceMappingRequest::CreateEventSourceMappingRequest() : 
    m_eventSourceArnHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_parallelizationFactor(0),
    m_parallelizationFactorHasBeenSet(false),
    m_startingPosition(EventSourcePosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_startingPositionTimestampHasBeenSet(false),
    m_destinationConfigHasBeenSet(false),
    m_maximumRecordAgeInSeconds(0),
    m_maximumRecordAgeInSecondsHasBeenSet(false),
    m_bisectBatchOnFunctionError(false),
    m_bisectBatchOnFunctionErrorHasBeenSet(false),
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_queuesHasBeenSet(false),
    m_sourceAccessConfigurationsHasBeenSet(false)
{
}

Aws::String CreateEventSourceMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventSourceArnHasBeenSet)
  {
   payload.WithString("EventSourceArn", m_eventSourceArn);

  }

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("FunctionName", m_functionName);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

  }

  if(m_parallelizationFactorHasBeenSet)
  {
   payload.WithInteger("ParallelizationFactor", m_parallelizationFactor);

  }

  if(m_startingPositionHasBeenSet)
  {
   payload.WithString("StartingPosition", EventSourcePositionMapper::GetNameForEventSourcePosition(m_startingPosition));
  }

  if(m_startingPositionTimestampHasBeenSet)
  {
   payload.WithDouble("StartingPositionTimestamp", m_startingPositionTimestamp.SecondsWithMSPrecision());
  }

  if(m_destinationConfigHasBeenSet)
  {
   payload.WithObject("DestinationConfig", m_destinationConfig.Jsonize());

  }

  if(m_maximumRecordAgeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumRecordAgeInSeconds", m_maximumRecordAgeInSeconds);

  }

  if(m_bisectBatchOnFunctionErrorHasBeenSet)
  {
   payload.WithBool("BisectBatchOnFunctionError", m_bisectBatchOnFunctionError);

  }

  if(m_maximumRetryAttemptsHasBeenSet)
  {
   payload.WithInteger("MaximumRetryAttempts", m_maximumRetryAttempts);

  }

  if(m_topicsHasBeenSet)
  {
   Array<JsonValue> topicsJsonList(m_topics.size());
   for(unsigned topicsIndex = 0; topicsIndex < topicsJsonList.GetLength(); ++topicsIndex)
   {
     topicsJsonList[topicsIndex].AsString(m_topics[topicsIndex]);
   }
   payload.WithArray("Topics", std::move(topicsJsonList));

  }

  if(m_queuesHasBeenSet)
  {
   Array<JsonValue> queuesJsonList(m_queues.size());
   for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
   {
     queuesJsonList[queuesIndex].AsString(m_queues[queuesIndex]);
   }
   payload.WithArray("Queues", std::move(queuesJsonList));

  }

  if(m_sourceAccessConfigurationsHasBeenSet)
  {
   Array<JsonValue> sourceAccessConfigurationsJsonList(m_sourceAccessConfigurations.size());
   for(unsigned sourceAccessConfigurationsIndex = 0; sourceAccessConfigurationsIndex < sourceAccessConfigurationsJsonList.GetLength(); ++sourceAccessConfigurationsIndex)
   {
     sourceAccessConfigurationsJsonList[sourceAccessConfigurationsIndex].AsObject(m_sourceAccessConfigurations[sourceAccessConfigurationsIndex].Jsonize());
   }
   payload.WithArray("SourceAccessConfigurations", std::move(sourceAccessConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}




