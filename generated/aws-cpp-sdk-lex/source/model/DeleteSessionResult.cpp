/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/DeleteSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteSessionResult::DeleteSessionResult()
{
}

DeleteSessionResult::DeleteSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteSessionResult& DeleteSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

  }

  if(jsonValue.ValueExists("botAlias"))
  {
    m_botAlias = jsonValue.GetString("botAlias");

  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

  }



  return *this;
}
