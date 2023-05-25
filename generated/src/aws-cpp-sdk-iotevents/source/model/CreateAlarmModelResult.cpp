/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/CreateAlarmModelResult.h>
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

CreateAlarmModelResult::CreateAlarmModelResult() : 
    m_status(AlarmModelVersionStatus::NOT_SET)
{
}

CreateAlarmModelResult::CreateAlarmModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AlarmModelVersionStatus::NOT_SET)
{
  *this = result;
}

CreateAlarmModelResult& CreateAlarmModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
