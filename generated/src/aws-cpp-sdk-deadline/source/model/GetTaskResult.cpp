/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTaskResult::GetTaskResult() : 
    m_failureRetryCount(0),
    m_runStatus(TaskRunStatus::NOT_SET),
    m_targetRunStatus(TaskTargetRunStatus::NOT_SET)
{
}

GetTaskResult::GetTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_failureRetryCount(0),
    m_runStatus(TaskRunStatus::NOT_SET),
    m_targetRunStatus(TaskTargetRunStatus::NOT_SET)
{
  *this = result;
}

GetTaskResult& GetTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

  }

  if(jsonValue.ValueExists("failureRetryCount"))
  {
    m_failureRetryCount = jsonValue.GetInteger("failureRetryCount");

  }

  if(jsonValue.ValueExists("latestSessionActionId"))
  {
    m_latestSessionActionId = jsonValue.GetString("latestSessionActionId");

  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("runStatus"))
  {
    m_runStatus = TaskRunStatusMapper::GetTaskRunStatusForName(jsonValue.GetString("runStatus"));

  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

  }

  if(jsonValue.ValueExists("targetRunStatus"))
  {
    m_targetRunStatus = TaskTargetRunStatusMapper::GetTaskTargetRunStatusForName(jsonValue.GetString("targetRunStatus"));

  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
