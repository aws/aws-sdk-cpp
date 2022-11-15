/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/ListAlarmModelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAlarmModelsResult::ListAlarmModelsResult()
{
}

ListAlarmModelsResult::ListAlarmModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAlarmModelsResult& ListAlarmModelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("alarmModelSummaries"))
  {
    Aws::Utils::Array<JsonView> alarmModelSummariesJsonList = jsonValue.GetArray("alarmModelSummaries");
    for(unsigned alarmModelSummariesIndex = 0; alarmModelSummariesIndex < alarmModelSummariesJsonList.GetLength(); ++alarmModelSummariesIndex)
    {
      m_alarmModelSummaries.push_back(alarmModelSummariesJsonList[alarmModelSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
