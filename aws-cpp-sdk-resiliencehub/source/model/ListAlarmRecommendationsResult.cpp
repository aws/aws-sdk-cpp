/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAlarmRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAlarmRecommendationsResult::ListAlarmRecommendationsResult()
{
}

ListAlarmRecommendationsResult::ListAlarmRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAlarmRecommendationsResult& ListAlarmRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("alarmRecommendations"))
  {
    Aws::Utils::Array<JsonView> alarmRecommendationsJsonList = jsonValue.GetArray("alarmRecommendations");
    for(unsigned alarmRecommendationsIndex = 0; alarmRecommendationsIndex < alarmRecommendationsJsonList.GetLength(); ++alarmRecommendationsIndex)
    {
      m_alarmRecommendations.push_back(alarmRecommendationsJsonList[alarmRecommendationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
