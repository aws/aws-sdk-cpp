/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListUtteranceAnalyticsDataResult.h>
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

ListUtteranceAnalyticsDataResult::ListUtteranceAnalyticsDataResult()
{
}

ListUtteranceAnalyticsDataResult::ListUtteranceAnalyticsDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUtteranceAnalyticsDataResult& ListUtteranceAnalyticsDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("utterances"))
  {
    Aws::Utils::Array<JsonView> utterancesJsonList = jsonValue.GetArray("utterances");
    for(unsigned utterancesIndex = 0; utterancesIndex < utterancesJsonList.GetLength(); ++utterancesIndex)
    {
      m_utterances.push_back(utterancesJsonList[utterancesIndex].AsObject());
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
