/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListSessionAnalyticsDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSessionAnalyticsDataResult::ListSessionAnalyticsDataResult()
{
}

ListSessionAnalyticsDataResult::ListSessionAnalyticsDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSessionAnalyticsDataResult& ListSessionAnalyticsDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("sessions"))
  {
    Aws::Utils::Array<JsonView> sessionsJsonList = jsonValue.GetArray("sessions");
    for(unsigned sessionsIndex = 0; sessionsIndex < sessionsJsonList.GetLength(); ++sessionsIndex)
    {
      m_sessions.push_back(sessionsJsonList[sessionsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
