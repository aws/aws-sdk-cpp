/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/DisconnectPlayerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisconnectPlayerResult::DisconnectPlayerResult()
{
}

DisconnectPlayerResult::DisconnectPlayerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisconnectPlayerResult& DisconnectPlayerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DisconnectFailures"))
  {
    Aws::Utils::Array<JsonView> disconnectFailuresJsonList = jsonValue.GetArray("DisconnectFailures");
    for(unsigned disconnectFailuresIndex = 0; disconnectFailuresIndex < disconnectFailuresJsonList.GetLength(); ++disconnectFailuresIndex)
    {
      m_disconnectFailures.push_back(disconnectFailuresJsonList[disconnectFailuresIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("DisconnectSuccesses"))
  {
    Aws::Utils::Array<JsonView> disconnectSuccessesJsonList = jsonValue.GetArray("DisconnectSuccesses");
    for(unsigned disconnectSuccessesIndex = 0; disconnectSuccessesIndex < disconnectSuccessesJsonList.GetLength(); ++disconnectSuccessesIndex)
    {
      m_disconnectSuccesses.push_back(disconnectSuccessesJsonList[disconnectSuccessesIndex].AsString());
    }
  }



  return *this;
}
