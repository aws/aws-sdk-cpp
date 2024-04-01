/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetSessionActionResult.h>
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

GetSessionActionResult::GetSessionActionResult() : 
    m_processExitCode(0),
    m_progressPercent(0.0),
    m_status(SessionActionStatus::NOT_SET)
{
}

GetSessionActionResult::GetSessionActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_processExitCode(0),
    m_progressPercent(0.0),
    m_status(SessionActionStatus::NOT_SET)
{
  *this = result;
}

GetSessionActionResult& GetSessionActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");

  }

  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

  }

  if(jsonValue.ValueExists("processExitCode"))
  {
    m_processExitCode = jsonValue.GetInteger("processExitCode");

  }

  if(jsonValue.ValueExists("progressMessage"))
  {
    m_progressMessage = jsonValue.GetString("progressMessage");

  }

  if(jsonValue.ValueExists("progressPercent"))
  {
    m_progressPercent = jsonValue.GetDouble("progressPercent");

  }

  if(jsonValue.ValueExists("sessionActionId"))
  {
    m_sessionActionId = jsonValue.GetString("sessionActionId");

  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SessionActionStatusMapper::GetSessionActionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("workerUpdatedAt"))
  {
    m_workerUpdatedAt = jsonValue.GetString("workerUpdatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
