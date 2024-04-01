/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetSessionResult.h>
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

GetSessionResult::GetSessionResult() : 
    m_lifecycleStatus(SessionLifecycleStatus::NOT_SET),
    m_targetLifecycleStatus(SessionLifecycleTargetStatus::NOT_SET)
{
}

GetSessionResult::GetSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lifecycleStatus(SessionLifecycleStatus::NOT_SET),
    m_targetLifecycleStatus(SessionLifecycleTargetStatus::NOT_SET)
{
  *this = result;
}

GetSessionResult& GetSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

  }

  if(jsonValue.ValueExists("fleetId"))
  {
    m_fleetId = jsonValue.GetString("fleetId");

  }

  if(jsonValue.ValueExists("hostProperties"))
  {
    m_hostProperties = jsonValue.GetObject("hostProperties");

  }

  if(jsonValue.ValueExists("lifecycleStatus"))
  {
    m_lifecycleStatus = SessionLifecycleStatusMapper::GetSessionLifecycleStatusForName(jsonValue.GetString("lifecycleStatus"));

  }

  if(jsonValue.ValueExists("log"))
  {
    m_log = jsonValue.GetObject("log");

  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

  }

  if(jsonValue.ValueExists("targetLifecycleStatus"))
  {
    m_targetLifecycleStatus = SessionLifecycleTargetStatusMapper::GetSessionLifecycleTargetStatusForName(jsonValue.GetString("targetLifecycleStatus"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }

  if(jsonValue.ValueExists("workerId"))
  {
    m_workerId = jsonValue.GetString("workerId");

  }

  if(jsonValue.ValueExists("workerLog"))
  {
    m_workerLog = jsonValue.GetObject("workerLog");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
