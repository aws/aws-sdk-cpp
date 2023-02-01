/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/ListAlarmsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAlarmsResult::ListAlarmsResult()
{
}

ListAlarmsResult::ListAlarmsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAlarmsResult& ListAlarmsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("alarmSummaries"))
  {
    Aws::Utils::Array<JsonView> alarmSummariesJsonList = jsonValue.GetArray("alarmSummaries");
    for(unsigned alarmSummariesIndex = 0; alarmSummariesIndex < alarmSummariesJsonList.GetLength(); ++alarmSummariesIndex)
    {
      m_alarmSummaries.push_back(alarmSummariesJsonList[alarmSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
