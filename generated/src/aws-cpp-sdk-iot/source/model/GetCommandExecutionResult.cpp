/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetCommandExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCommandExecutionResult::GetCommandExecutionResult() : 
    m_status(CommandExecutionStatus::NOT_SET),
    m_executionTimeoutSeconds(0)
{
}

GetCommandExecutionResult::GetCommandExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetCommandExecutionResult()
{
  *this = result;
}

GetCommandExecutionResult& GetCommandExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");

  }

  if(jsonValue.ValueExists("commandArn"))
  {
    m_commandArn = jsonValue.GetString("commandArn");

  }

  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CommandExecutionStatusMapper::GetCommandExecutionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetObject("statusReason");

  }

  if(jsonValue.ValueExists("result"))
  {
    Aws::Map<Aws::String, JsonView> resultJsonMap = jsonValue.GetObject("result").GetAllObjects();
    for(auto& resultItem : resultJsonMap)
    {
      m_result[resultItem.first] = resultItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("executionTimeoutSeconds"))
  {
    m_executionTimeoutSeconds = jsonValue.GetInt64("executionTimeoutSeconds");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

  }

  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetDouble("completedAt");

  }

  if(jsonValue.ValueExists("timeToLive"))
  {
    m_timeToLive = jsonValue.GetDouble("timeToLive");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
