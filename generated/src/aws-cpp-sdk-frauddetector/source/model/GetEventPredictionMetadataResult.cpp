/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetEventPredictionMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEventPredictionMetadataResult::GetEventPredictionMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEventPredictionMetadataResult& GetEventPredictionMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventTypeName"))
  {
    m_eventTypeName = jsonValue.GetString("eventTypeName");
    m_eventTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");
    m_entityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityType"))
  {
    m_entityType = jsonValue.GetString("entityType");
    m_entityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventTimestamp"))
  {
    m_eventTimestamp = jsonValue.GetString("eventTimestamp");
    m_eventTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");
    m_detectorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("detectorVersionId"))
  {
    m_detectorVersionId = jsonValue.GetString("detectorVersionId");
    m_detectorVersionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("detectorVersionStatus"))
  {
    m_detectorVersionStatus = jsonValue.GetString("detectorVersionStatus");
    m_detectorVersionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventVariables"))
  {
    Aws::Utils::Array<JsonView> eventVariablesJsonList = jsonValue.GetArray("eventVariables");
    for(unsigned eventVariablesIndex = 0; eventVariablesIndex < eventVariablesJsonList.GetLength(); ++eventVariablesIndex)
    {
      m_eventVariables.push_back(eventVariablesJsonList[eventVariablesIndex].AsObject());
    }
    m_eventVariablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleExecutionMode"))
  {
    m_ruleExecutionMode = RuleExecutionModeMapper::GetRuleExecutionModeForName(jsonValue.GetString("ruleExecutionMode"));
    m_ruleExecutionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outcomes"))
  {
    Aws::Utils::Array<JsonView> outcomesJsonList = jsonValue.GetArray("outcomes");
    for(unsigned outcomesIndex = 0; outcomesIndex < outcomesJsonList.GetLength(); ++outcomesIndex)
    {
      m_outcomes.push_back(outcomesJsonList[outcomesIndex].AsString());
    }
    m_outcomesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evaluatedModelVersions"))
  {
    Aws::Utils::Array<JsonView> evaluatedModelVersionsJsonList = jsonValue.GetArray("evaluatedModelVersions");
    for(unsigned evaluatedModelVersionsIndex = 0; evaluatedModelVersionsIndex < evaluatedModelVersionsJsonList.GetLength(); ++evaluatedModelVersionsIndex)
    {
      m_evaluatedModelVersions.push_back(evaluatedModelVersionsJsonList[evaluatedModelVersionsIndex].AsObject());
    }
    m_evaluatedModelVersionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evaluatedExternalModels"))
  {
    Aws::Utils::Array<JsonView> evaluatedExternalModelsJsonList = jsonValue.GetArray("evaluatedExternalModels");
    for(unsigned evaluatedExternalModelsIndex = 0; evaluatedExternalModelsIndex < evaluatedExternalModelsJsonList.GetLength(); ++evaluatedExternalModelsIndex)
    {
      m_evaluatedExternalModels.push_back(evaluatedExternalModelsJsonList[evaluatedExternalModelsIndex].AsObject());
    }
    m_evaluatedExternalModelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("predictionTimestamp"))
  {
    m_predictionTimestamp = jsonValue.GetString("predictionTimestamp");
    m_predictionTimestampHasBeenSet = true;
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
