/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateWorkerScheduleResult.h>
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

UpdateWorkerScheduleResult::UpdateWorkerScheduleResult() : 
    m_desiredWorkerStatus(DesiredWorkerStatus::NOT_SET),
    m_updateIntervalSeconds(0)
{
}

UpdateWorkerScheduleResult::UpdateWorkerScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_desiredWorkerStatus(DesiredWorkerStatus::NOT_SET),
    m_updateIntervalSeconds(0)
{
  *this = result;
}

UpdateWorkerScheduleResult& UpdateWorkerScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assignedSessions"))
  {
    Aws::Map<Aws::String, JsonView> assignedSessionsJsonMap = jsonValue.GetObject("assignedSessions").GetAllObjects();
    for(auto& assignedSessionsItem : assignedSessionsJsonMap)
    {
      m_assignedSessions[assignedSessionsItem.first] = assignedSessionsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("cancelSessionActions"))
  {
    Aws::Map<Aws::String, JsonView> cancelSessionActionsJsonMap = jsonValue.GetObject("cancelSessionActions").GetAllObjects();
    for(auto& cancelSessionActionsItem : cancelSessionActionsJsonMap)
    {
      Aws::Utils::Array<JsonView> sessionActionIdListJsonList = cancelSessionActionsItem.second.AsArray();
      Aws::Vector<Aws::String> sessionActionIdListList;
      sessionActionIdListList.reserve((size_t)sessionActionIdListJsonList.GetLength());
      for(unsigned sessionActionIdListIndex = 0; sessionActionIdListIndex < sessionActionIdListJsonList.GetLength(); ++sessionActionIdListIndex)
      {
        sessionActionIdListList.push_back(sessionActionIdListJsonList[sessionActionIdListIndex].AsString());
      }
      m_cancelSessionActions[cancelSessionActionsItem.first] = std::move(sessionActionIdListList);
    }
  }

  if(jsonValue.ValueExists("desiredWorkerStatus"))
  {
    m_desiredWorkerStatus = DesiredWorkerStatusMapper::GetDesiredWorkerStatusForName(jsonValue.GetString("desiredWorkerStatus"));

  }

  if(jsonValue.ValueExists("updateIntervalSeconds"))
  {
    m_updateIntervalSeconds = jsonValue.GetInteger("updateIntervalSeconds");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
