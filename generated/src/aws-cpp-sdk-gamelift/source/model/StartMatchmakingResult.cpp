/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/StartMatchmakingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartMatchmakingResult::StartMatchmakingResult()
{
}

StartMatchmakingResult::StartMatchmakingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartMatchmakingResult& StartMatchmakingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MatchmakingTicket"))
  {
    m_matchmakingTicket = jsonValue.GetObject("MatchmakingTicket");

  }



  return *this;
}
