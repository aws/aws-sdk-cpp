/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/gamelift/model/GetPlayerConnectionDetailsResult.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPlayerConnectionDetailsResult::GetPlayerConnectionDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetPlayerConnectionDetailsResult& GetPlayerConnectionDetailsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("GameSessionId")) {
    m_gameSessionId = jsonValue.GetString("GameSessionId");
    m_gameSessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PlayerConnectionDetails")) {
    Aws::Utils::Array<JsonView> playerConnectionDetailsJsonList = jsonValue.GetArray("PlayerConnectionDetails");
    for (unsigned playerConnectionDetailsIndex = 0; playerConnectionDetailsIndex < playerConnectionDetailsJsonList.GetLength();
         ++playerConnectionDetailsIndex) {
      m_playerConnectionDetails.push_back(playerConnectionDetailsJsonList[playerConnectionDetailsIndex].AsObject());
    }
    m_playerConnectionDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
