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

DescribeAlarmModelResult::DescribeAlarmModelResult() : 
    m_status(AlarmModelVersionStatus::NOT_SET),
    m_severity(0)
{
}

DescribeAlarmModelResult::DescribeAlarmModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AlarmModelVersionStatus::NOT_SET),
    m_severity(0)
{
  *this = result;
}

DescribeAlarmModelResult& DescribeAlarmModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("alarmModelName"))
  {
    m_alarmModelName = jsonValue.GetString("alarmModelName");

  }

  if(jsonValue.ValueExists("alarmModelDescription"))
  {
    m_alarmModelDescription = jsonValue.GetString("alarmModelDescription");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetInteger("severity");

  }

  if(jsonValue.ValueExists("alarmRule"))
  {
    m_alarmRule = jsonValue.GetObject("alarmRule");

  }

  if(jsonValue.ValueExists("alarmNotification"))
  {
    m_alarmNotification = jsonValue.GetObject("alarmNotification");

  }

  if(jsonValue.ValueExists("alarmEventActions"))
  {
    m_alarmEventActions = jsonValue.GetObject("alarmEventActions");

  }

  if(jsonValue.ValueExists("alarmCapabilities"))
  {
    m_alarmCapabilities = jsonValue.GetObject("alarmCapabilities");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
