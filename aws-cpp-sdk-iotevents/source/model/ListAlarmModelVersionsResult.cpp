/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/ListAlarmModelVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAlarmModelVersionsResult::ListAlarmModelVersionsResult()
{
}

ListAlarmModelVersionsResult::ListAlarmModelVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAlarmModelVersionsResult& ListAlarmModelVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("alarmModelVersionSummaries"))
  {
    Aws::Utils::Array<JsonView> alarmModelVersionSummariesJsonList = jsonValue.GetArray("alarmModelVersionSummaries");
    for(unsigned alarmModelVersionSummariesIndex = 0; alarmModelVersionSummariesIndex < alarmModelVersionSummariesJsonList.GetLength(); ++alarmModelVersionSummariesIndex)
    {
      m_alarmModelVersionSummaries.push_back(alarmModelVersionSummariesJsonList[alarmModelVersionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
