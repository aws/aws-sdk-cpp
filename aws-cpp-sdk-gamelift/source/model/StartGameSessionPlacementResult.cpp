/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/StartGameSessionPlacementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartGameSessionPlacementResult::StartGameSessionPlacementResult()
{
}

StartGameSessionPlacementResult::StartGameSessionPlacementResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartGameSessionPlacementResult& StartGameSessionPlacementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GameSessionPlacement"))
  {
    m_gameSessionPlacement = jsonValue.GetObject("GameSessionPlacement");

  }



  return *this;
}
