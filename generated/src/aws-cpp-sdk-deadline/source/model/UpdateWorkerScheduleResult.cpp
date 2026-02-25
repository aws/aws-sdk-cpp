/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/deadline/model/UpdateWorkerScheduleResult.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateWorkerScheduleResult::UpdateWorkerScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateWorkerScheduleResult& UpdateWorkerScheduleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("assignedSessions")) {
    Aws::Map<Aws::String, JsonView> assignedSessionsJsonMap = jsonValue.GetObject("assignedSessions").GetAllObjects();
    for (auto& assignedSessionsItem : assignedSessionsJsonMap) {
      m_assignedSessions[assignedSessionsItem.first] = assignedSessionsItem.second.AsObject();
    }
    m_assignedSessionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cancelSessionActions")) {
    Aws::Map<Aws::String, JsonView> cancelSessionActionsJsonMap = jsonValue.GetObject("cancelSessionActions").GetAllObjects();
    for (auto& cancelSessionActionsItem : cancelSessionActionsJsonMap) {
      Aws::Utils::Array<JsonView> sessionActionIdList2JsonList = cancelSessionActionsItem.second.AsArray();
      Aws::Vector<Aws::String> sessionActionIdList2List;
      sessionActionIdList2List.reserve((size_t)sessionActionIdList2JsonList.GetLength());
      for (unsigned sessionActionIdList2Index = 0; sessionActionIdList2Index < sessionActionIdList2JsonList.GetLength();
           ++sessionActionIdList2Index) {
        sessionActionIdList2List.push_back(sessionActionIdList2JsonList[sessionActionIdList2Index].AsString());
      }
      m_cancelSessionActions[cancelSessionActionsItem.first] = std::move(sessionActionIdList2List);
    }
    m_cancelSessionActionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("desiredWorkerStatus")) {
    m_desiredWorkerStatus = DesiredWorkerStatusMapper::GetDesiredWorkerStatusForName(jsonValue.GetString("desiredWorkerStatus"));
    m_desiredWorkerStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateIntervalSeconds")) {
    m_updateIntervalSeconds = jsonValue.GetInteger("updateIntervalSeconds");
    m_updateIntervalSecondsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
