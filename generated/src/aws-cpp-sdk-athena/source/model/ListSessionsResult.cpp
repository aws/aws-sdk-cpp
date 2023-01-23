/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListSessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSessionsResult::ListSessionsResult()
{
}

ListSessionsResult::ListSessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSessionsResult& ListSessionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Sessions"))
  {
    Aws::Utils::Array<JsonView> sessionsJsonList = jsonValue.GetArray("Sessions");
    for(unsigned sessionsIndex = 0; sessionsIndex < sessionsJsonList.GetLength(); ++sessionsIndex)
    {
      m_sessions.push_back(sessionsJsonList[sessionsIndex].AsObject());
    }
  }



  return *this;
}
