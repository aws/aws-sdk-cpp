/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/CreateEventSourceMappingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateEventSourceMappingResult::CreateEventSourceMappingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateEventSourceMappingResult& CreateEventSourceMappingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UUID"))
  {
    m_uUID = jsonValue.GetString("UUID");
    m_uUIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartingPosition"))
  {
    m_startingPosition = EventSourcePositionMapper::GetEventSourcePositionForName(jsonValue.GetString("StartingPosition"));
    m_startingPositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartingPositionTimestamp"))
  {
    m_startingPositionTimestamp = jsonValue.GetDouble("StartingPositionTimestamp");
    m_startingPositionTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");
    m_batchSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumBatchingWindowInSeconds"))
  {
    m_maximumBatchingWindowInSeconds = jsonValue.GetInteger("MaximumBatchingWindowInSeconds");
    m_maximumBatchingWindowInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParallelizationFactor"))
  {
    m_parallelizationFactor = jsonValue.GetInteger("ParallelizationFactor");
    m_parallelizationFactorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");
    m_eventSourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterCriteria"))
  {
    m_filterCriteria = jsonValue.GetObject("FilterCriteria");
    m_filterCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");
    m_functionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastProcessingResult"))
  {
    m_lastProcessingResult = jsonValue.GetString("LastProcessingResult");
    m_lastProcessingResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateTransitionReason"))
  {
    m_stateTransitionReason = jsonValue.GetString("StateTransitionReason");
    m_stateTransitionReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationConfig"))
  {
    m_destinationConfig = jsonValue.GetObject("DestinationConfig");
    m_destinationConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Topics"))
  {
    Aws::Utils::Array<JsonView> topicsJsonList = jsonValue.GetArray("Topics");
    for(unsigned topicsIndex = 0; topicsIndex < topicsJsonList.GetLength(); ++topicsIndex)
    {
      m_topics.push_back(topicsJsonList[topicsIndex].AsString());
    }
    m_topicsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Queues"))
  {
    Aws::Utils::Array<JsonView> queuesJsonList = jsonValue.GetArray("Queues");
    for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
    {
      m_queues.push_back(queuesJsonList[queuesIndex].AsString());
    }
    m_queuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceAccessConfigurations"))
  {
    Aws::Utils::Array<JsonView> sourceAccessConfigurationsJsonList = jsonValue.GetArray("SourceAccessConfigurations");
    for(unsigned sourceAccessConfigurationsIndex = 0; sourceAccessConfigurationsIndex < sourceAccessConfigurationsJsonList.GetLength(); ++sourceAccessConfigurationsIndex)
    {
      m_sourceAccessConfigurations.push_back(sourceAccessConfigurationsJsonList[sourceAccessConfigurationsIndex].AsObject());
    }
    m_sourceAccessConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelfManagedEventSource"))
  {
    m_selfManagedEventSource = jsonValue.GetObject("SelfManagedEventSource");
    m_selfManagedEventSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumRecordAgeInSeconds"))
  {
    m_maximumRecordAgeInSeconds = jsonValue.GetInteger("MaximumRecordAgeInSeconds");
    m_maximumRecordAgeInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BisectBatchOnFunctionError"))
  {
    m_bisectBatchOnFunctionError = jsonValue.GetBool("BisectBatchOnFunctionError");
    m_bisectBatchOnFunctionErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumRetryAttempts"))
  {
    m_maximumRetryAttempts = jsonValue.GetInteger("MaximumRetryAttempts");
    m_maximumRetryAttemptsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TumblingWindowInSeconds"))
  {
    m_tumblingWindowInSeconds = jsonValue.GetInteger("TumblingWindowInSeconds");
    m_tumblingWindowInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FunctionResponseTypes"))
  {
    Aws::Utils::Array<JsonView> functionResponseTypesJsonList = jsonValue.GetArray("FunctionResponseTypes");
    for(unsigned functionResponseTypesIndex = 0; functionResponseTypesIndex < functionResponseTypesJsonList.GetLength(); ++functionResponseTypesIndex)
    {
      m_functionResponseTypes.push_back(FunctionResponseTypeMapper::GetFunctionResponseTypeForName(functionResponseTypesJsonList[functionResponseTypesIndex].AsString()));
    }
    m_functionResponseTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AmazonManagedKafkaEventSourceConfig"))
  {
    m_amazonManagedKafkaEventSourceConfig = jsonValue.GetObject("AmazonManagedKafkaEventSourceConfig");
    m_amazonManagedKafkaEventSourceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelfManagedKafkaEventSourceConfig"))
  {
    m_selfManagedKafkaEventSourceConfig = jsonValue.GetObject("SelfManagedKafkaEventSourceConfig");
    m_selfManagedKafkaEventSourceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScalingConfig"))
  {
    m_scalingConfig = jsonValue.GetObject("ScalingConfig");
    m_scalingConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DocumentDBEventSourceConfig"))
  {
    m_documentDBEventSourceConfig = jsonValue.GetObject("DocumentDBEventSourceConfig");
    m_documentDBEventSourceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KMSKeyArn"))
  {
    m_kMSKeyArn = jsonValue.GetString("KMSKeyArn");
    m_kMSKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterCriteriaError"))
  {
    m_filterCriteriaError = jsonValue.GetObject("FilterCriteriaError");
    m_filterCriteriaErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventSourceMappingArn"))
  {
    m_eventSourceMappingArn = jsonValue.GetString("EventSourceMappingArn");
    m_eventSourceMappingArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricsConfig"))
  {
    m_metricsConfig = jsonValue.GetObject("MetricsConfig");
    m_metricsConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedPollerConfig"))
  {
    m_provisionedPollerConfig = jsonValue.GetObject("ProvisionedPollerConfig");
    m_provisionedPollerConfigHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
