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

GetSessionActionResult::GetSessionActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSessionActionResult& GetSessionActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sessionActionId"))
  {
    m_sessionActionId = jsonValue.GetString("sessionActionId");
    m_sessionActionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SessionActionStatusMapper::GetSessionActionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workerUpdatedAt"))
  {
    m_workerUpdatedAt = jsonValue.GetString("workerUpdatedAt");
    m_workerUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("progressPercent"))
  {
    m_progressPercent = jsonValue.GetDouble("progressPercent");
    m_progressPercentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("processExitCode"))
  {
    m_processExitCode = jsonValue.GetInteger("processExitCode");
    m_processExitCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("progressMessage"))
  {
    m_progressMessage = jsonValue.GetString("progressMessage");
    m_progressMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");
    m_definitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("acquiredLimits"))
  {
    Aws::Utils::Array<JsonView> acquiredLimitsJsonList = jsonValue.GetArray("acquiredLimits");
    for(unsigned acquiredLimitsIndex = 0; acquiredLimitsIndex < acquiredLimitsJsonList.GetLength(); ++acquiredLimitsIndex)
    {
      m_acquiredLimits.push_back(acquiredLimitsJsonList[acquiredLimitsIndex].AsObject());
    }
    m_acquiredLimitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("manifests"))
  {
    Aws::Utils::Array<JsonView> manifestsJsonList = jsonValue.GetArray("manifests");
    for(unsigned manifestsIndex = 0; manifestsIndex < manifestsJsonList.GetLength(); ++manifestsIndex)
    {
      m_manifests.push_back(manifestsJsonList[manifestsIndex].AsObject());
    }
    m_manifestsHasBeenSet = true;
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
