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

GetSuiteRunResult::GetSuiteRunResult() : 
    m_status(SuiteRunStatus::NOT_SET)
{
}

GetSuiteRunResult::GetSuiteRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SuiteRunStatus::NOT_SET)
{
  *this = result;
}

GetSuiteRunResult& GetSuiteRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("suiteDefinitionId"))
  {
    m_suiteDefinitionId = jsonValue.GetString("suiteDefinitionId");

  }

  if(jsonValue.ValueExists("suiteDefinitionVersion"))
  {
    m_suiteDefinitionVersion = jsonValue.GetString("suiteDefinitionVersion");

  }

  if(jsonValue.ValueExists("suiteRunId"))
  {
    m_suiteRunId = jsonValue.GetString("suiteRunId");

  }

  if(jsonValue.ValueExists("suiteRunArn"))
  {
    m_suiteRunArn = jsonValue.GetString("suiteRunArn");

  }

  if(jsonValue.ValueExists("suiteRunConfiguration"))
  {
    m_suiteRunConfiguration = jsonValue.GetObject("suiteRunConfiguration");

  }

  if(jsonValue.ValueExists("testResult"))
  {
    m_testResult = jsonValue.GetObject("testResult");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SuiteRunStatusMapper::GetSuiteRunStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("errorReason"))
  {
    m_errorReason = jsonValue.GetString("errorReason");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
