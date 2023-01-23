/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ClaimGameServerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ClaimGameServerResult::ClaimGameServerResult()
{
}

ClaimGameServerResult::ClaimGameServerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ClaimGameServerResult& ClaimGameServerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GameServer"))
  {
    m_gameServer = jsonValue.GetObject("GameServer");

  }



  return *this;
}
