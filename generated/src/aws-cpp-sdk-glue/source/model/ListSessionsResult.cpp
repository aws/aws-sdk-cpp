/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListSessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
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
  if(jsonValue.ValueExists("Ids"))
  {
    Aws::Utils::Array<JsonView> idsJsonList = jsonValue.GetArray("Ids");
    for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
    {
      m_ids.push_back(idsJsonList[idsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Sessions"))
  {
    Aws::Utils::Array<JsonView> sessionsJsonList = jsonValue.GetArray("Sessions");
    for(unsigned sessionsIndex = 0; sessionsIndex < sessionsJsonList.GetLength(); ++sessionsIndex)
    {
      m_sessions.push_back(sessionsJsonList[sessionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
