/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/StartSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartSessionResult::StartSessionResult()
{
}

StartSessionResult::StartSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartSessionResult& StartSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");

  }

  if(jsonValue.ValueExists("TokenValue"))
  {
    m_tokenValue = jsonValue.GetString("TokenValue");

  }

  if(jsonValue.ValueExists("StreamUrl"))
  {
    m_streamUrl = jsonValue.GetString("StreamUrl");

  }



  return *this;
}
