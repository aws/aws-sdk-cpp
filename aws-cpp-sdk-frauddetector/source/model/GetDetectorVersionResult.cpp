/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetDetectorVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDetectorVersionResult::GetDetectorVersionResult() : 
    m_status(DetectorVersionStatus::NOT_SET),
    m_ruleExecutionMode(RuleExecutionMode::NOT_SET)
{
}

GetDetectorVersionResult::GetDetectorVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DetectorVersionStatus::NOT_SET),
    m_ruleExecutionMode(RuleExecutionMode::NOT_SET)
{
  *this = result;
}

GetDetectorVersionResult& GetDetectorVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

  }

  if(jsonValue.ValueExists("detectorVersionId"))
  {
    m_detectorVersionId = jsonValue.GetString("detectorVersionId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("externalModelEndpoints"))
  {
    Aws::Utils::Array<JsonView> externalModelEndpointsJsonList = jsonValue.GetArray("externalModelEndpoints");
    for(unsigned externalModelEndpointsIndex = 0; externalModelEndpointsIndex < externalModelEndpointsJsonList.GetLength(); ++externalModelEndpointsIndex)
    {
      m_externalModelEndpoints.push_back(externalModelEndpointsJsonList[externalModelEndpointsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("modelVersions"))
  {
    Aws::Utils::Array<JsonView> modelVersionsJsonList = jsonValue.GetArray("modelVersions");
    for(unsigned modelVersionsIndex = 0; modelVersionsIndex < modelVersionsJsonList.GetLength(); ++modelVersionsIndex)
    {
      m_modelVersions.push_back(modelVersionsJsonList[modelVersionsIndex].AsObject());
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = DetectorVersionStatusMapper::GetDetectorVersionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");

  }

  if(jsonValue.ValueExists("ruleExecutionMode"))
  {
    m_ruleExecutionMode = RuleExecutionModeMapper::GetRuleExecutionModeForName(jsonValue.GetString("ruleExecutionMode"));

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }



  return *this;
}
