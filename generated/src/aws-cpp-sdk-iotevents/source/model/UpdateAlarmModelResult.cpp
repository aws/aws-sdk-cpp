﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/UpdateAlarmModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAlarmModelResult::UpdateAlarmModelResult() : 
    m_status(AlarmModelVersionStatus::NOT_SET)
{
}

UpdateAlarmModelResult::UpdateAlarmModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AlarmModelVersionStatus::NOT_SET)
{
  *this = result;
}

UpdateAlarmModelResult& UpdateAlarmModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("alarmModelArn"))
  {
    m_alarmModelArn = jsonValue.GetString("alarmModelArn");

  }

  if(jsonValue.ValueExists("alarmModelVersion"))
  {
    m_alarmModelVersion = jsonValue.GetString("alarmModelVersion");

  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AlarmModelVersionStatusMapper::GetAlarmModelVersionStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
