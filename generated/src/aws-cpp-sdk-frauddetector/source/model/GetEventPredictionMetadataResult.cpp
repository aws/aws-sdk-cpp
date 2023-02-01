/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetEventPredictionMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEventPredictionMetadataResult::GetEventPredictionMetadataResult() : 
    m_ruleExecutionMode(RuleExecutionMode::NOT_SET)
{
}

GetEventPredictionMetadataResult::GetEventPredictionMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_ruleExecutionMode(RuleExecutionMode::NOT_SET)
{
  *this = result;
}

GetEventPredictionMetadataResult& GetEventPredictionMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

  }

  if(jsonValue.ValueExists("eventTypeName"))
  {
    m_eventTypeName = jsonValue.GetString("eventTypeName");

  }

  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

  }

  if(jsonValue.ValueExists("entityType"))
  {
    m_entityType = jsonValue.GetString("entityType");

  }

  if(jsonValue.ValueExists("eventTimestamp"))
  {
    m_eventTimestamp = jsonValue.GetString("eventTimestamp");

  }

  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

  }

  if(jsonValue.ValueExists("detectorVersionId"))
  {
    m_detectorVersionId = jsonValue.GetString("detectorVersionId");

  }

  if(jsonValue.ValueExists("detectorVersionStatus"))
  {
    m_detectorVersionStatus = jsonValue.GetString("detectorVersionStatus");

  }

  if(jsonValue.ValueExists("eventVariables"))
  {
    Aws::Utils::Array<JsonView> eventVariablesJsonList = jsonValue.GetArray("eventVariables");
    for(unsigned eventVariablesIndex = 0; eventVariablesIndex < eventVariablesJsonList.GetLength(); ++eventVariablesIndex)
    {
      m_eventVariables.push_back(eventVariablesJsonList[eventVariablesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ruleExecutionMode"))
  {
    m_ruleExecutionMode = RuleExecutionModeMapper::GetRuleExecutionModeForName(jsonValue.GetString("ruleExecutionMode"));

  }

  if(jsonValue.ValueExists("outcomes"))
  {
    Aws::Utils::Array<JsonView> outcomesJsonList = jsonValue.GetArray("outcomes");
    for(unsigned outcomesIndex = 0; outcomesIndex < outcomesJsonList.GetLength(); ++outcomesIndex)
    {
      m_outcomes.push_back(outcomesJsonList[outcomesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("evaluatedModelVersions"))
  {
    Aws::Utils::Array<JsonView> evaluatedModelVersionsJsonList = jsonValue.GetArray("evaluatedModelVersions");
    for(unsigned evaluatedModelVersionsIndex = 0; evaluatedModelVersionsIndex < evaluatedModelVersionsJsonList.GetLength(); ++evaluatedModelVersionsIndex)
    {
      m_evaluatedModelVersions.push_back(evaluatedModelVersionsJsonList[evaluatedModelVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("evaluatedExternalModels"))
  {
    Aws::Utils::Array<JsonView> evaluatedExternalModelsJsonList = jsonValue.GetArray("evaluatedExternalModels");
    for(unsigned evaluatedExternalModelsIndex = 0; evaluatedExternalModelsIndex < evaluatedExternalModelsJsonList.GetLength(); ++evaluatedExternalModelsIndex)
    {
      m_evaluatedExternalModels.push_back(evaluatedExternalModelsJsonList[evaluatedExternalModelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("predictionTimestamp"))
  {
    m_predictionTimestamp = jsonValue.GetString("predictionTimestamp");

  }



  return *this;
}
