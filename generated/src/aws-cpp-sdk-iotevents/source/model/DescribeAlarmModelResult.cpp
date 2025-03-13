/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DescribeAlarmModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAlarmModelResult::DescribeAlarmModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAlarmModelResult& DescribeAlarmModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmModelArn"))
  {
    m_alarmModelArn = jsonValue.GetString("alarmModelArn");
    m_alarmModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmModelVersion"))
  {
    m_alarmModelVersion = jsonValue.GetString("alarmModelVersion");
    m_alarmModelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AlarmModelVersionStatusMapper::GetAlarmModelVersionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmModelName"))
  {
    m_alarmModelName = jsonValue.GetString("alarmModelName");
    m_alarmModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmModelDescription"))
  {
    m_alarmModelDescription = jsonValue.GetString("alarmModelDescription");
    m_alarmModelDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetInteger("severity");
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmRule"))
  {
    m_alarmRule = jsonValue.GetObject("alarmRule");
    m_alarmRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmNotification"))
  {
    m_alarmNotification = jsonValue.GetObject("alarmNotification");
    m_alarmNotificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmEventActions"))
  {
    m_alarmEventActions = jsonValue.GetObject("alarmEventActions");
    m_alarmEventActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmCapabilities"))
  {
    m_alarmCapabilities = jsonValue.GetObject("alarmCapabilities");
    m_alarmCapabilitiesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
