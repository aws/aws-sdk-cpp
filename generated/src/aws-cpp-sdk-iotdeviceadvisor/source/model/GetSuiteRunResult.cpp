/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/GetSuiteRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSuiteRunResult::GetSuiteRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSuiteRunResult& GetSuiteRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("suiteDefinitionId"))
  {
    m_suiteDefinitionId = jsonValue.GetString("suiteDefinitionId");
    m_suiteDefinitionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("suiteDefinitionVersion"))
  {
    m_suiteDefinitionVersion = jsonValue.GetString("suiteDefinitionVersion");
    m_suiteDefinitionVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("suiteRunId"))
  {
    m_suiteRunId = jsonValue.GetString("suiteRunId");
    m_suiteRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("suiteRunArn"))
  {
    m_suiteRunArn = jsonValue.GetString("suiteRunArn");
    m_suiteRunArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("suiteRunConfiguration"))
  {
    m_suiteRunConfiguration = jsonValue.GetObject("suiteRunConfiguration");
    m_suiteRunConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testResult"))
  {
    m_testResult = jsonValue.GetObject("testResult");
    m_testResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SuiteRunStatusMapper::GetSuiteRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorReason"))
  {
    m_errorReason = jsonValue.GetString("errorReason");
    m_errorReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
