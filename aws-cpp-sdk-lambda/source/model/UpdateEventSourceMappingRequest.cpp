﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/UpdateEventSourceMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventSourceMappingRequest::UpdateEventSourceMappingRequest() : 
    m_uUIDHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_filterCriteriaHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_destinationConfigHasBeenSet(false),
    m_maximumRecordAgeInSeconds(0),
    m_maximumRecordAgeInSecondsHasBeenSet(false),
    m_bisectBatchOnFunctionError(false),
    m_bisectBatchOnFunctionErrorHasBeenSet(false),
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_parallelizationFactor(0),
    m_parallelizationFactorHasBeenSet(false),
    m_sourceAccessConfigurationsHasBeenSet(false),
    m_tumblingWindowInSeconds(0),
    m_tumblingWindowInSecondsHasBeenSet(false),
    m_functionResponseTypesHasBeenSet(false)
{
}

Aws::String UpdateEventSourceMappingRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_filterCriteriaHasBeenSet)
  {
   payload.WithObject("FilterCriteria", m_filterCriteria.Jsonize());

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

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

  if(m_parallelizationFactorHasBeenSet)
  {
   payload.WithInteger("ParallelizationFactor", m_parallelizationFactor);

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

  if(m_tumblingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("TumblingWindowInSeconds", m_tumblingWindowInSeconds);

  }

  if(m_functionResponseTypesHasBeenSet)
  {
   Array<JsonValue> functionResponseTypesJsonList(m_functionResponseTypes.size());
   for(unsigned functionResponseTypesIndex = 0; functionResponseTypesIndex < functionResponseTypesJsonList.GetLength(); ++functionResponseTypesIndex)
   {
     functionResponseTypesJsonList[functionResponseTypesIndex].AsString(FunctionResponseTypeMapper::GetNameForFunctionResponseType(m_functionResponseTypes[functionResponseTypesIndex]));
   }
   payload.WithArray("FunctionResponseTypes", std::move(functionResponseTypesJsonList));

  }

  return payload.View().WriteReadable();
}




