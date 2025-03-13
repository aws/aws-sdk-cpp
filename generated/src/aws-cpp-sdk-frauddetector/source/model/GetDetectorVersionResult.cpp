/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetDetectorVersionResult.h>
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

GetDetectorVersionResult::GetDetectorVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDetectorVersionResult& GetDetectorVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalModelEndpoints"))
  {
    Aws::Utils::Array<JsonView> externalModelEndpointsJsonList = jsonValue.GetArray("externalModelEndpoints");
    for(unsigned externalModelEndpointsIndex = 0; externalModelEndpointsIndex < externalModelEndpointsJsonList.GetLength(); ++externalModelEndpointsIndex)
    {
      m_externalModelEndpoints.push_back(externalModelEndpointsJsonList[externalModelEndpointsIndex].AsString());
    }
    m_externalModelEndpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelVersions"))
  {
    Aws::Utils::Array<JsonView> modelVersionsJsonList = jsonValue.GetArray("modelVersions");
    for(unsigned modelVersionsIndex = 0; modelVersionsIndex < modelVersionsJsonList.GetLength(); ++modelVersionsIndex)
    {
      m_modelVersions.push_back(modelVersionsJsonList[modelVersionsIndex].AsObject());
    }
    m_modelVersionsHasBeenSet = true;
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
  if(jsonValue.ValueExists("status"))
  {
    m_status = DetectorVersionStatusMapper::GetDetectorVersionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleExecutionMode"))
  {
    m_ruleExecutionMode = RuleExecutionModeMapper::GetRuleExecutionModeForName(jsonValue.GetString("ruleExecutionMode"));
    m_ruleExecutionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
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
