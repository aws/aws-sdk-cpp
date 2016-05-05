/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ssm/model/InstanceInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InstanceInformation::InstanceInformation() : 
    m_instanceIdHasBeenSet(false),
    m_pingStatusHasBeenSet(false),
    m_lastPingDateTimeHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_isLatestVersion(false),
    m_isLatestVersionHasBeenSet(false),
    m_platformTypeHasBeenSet(false),
    m_platformNameHasBeenSet(false),
    m_platformVersionHasBeenSet(false)
{
}

InstanceInformation::InstanceInformation(const JsonValue& jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_pingStatusHasBeenSet(false),
    m_lastPingDateTimeHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_isLatestVersion(false),
    m_isLatestVersionHasBeenSet(false),
    m_platformTypeHasBeenSet(false),
    m_platformNameHasBeenSet(false),
    m_platformVersionHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceInformation& InstanceInformation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PingStatus"))
  {
    m_pingStatus = PingStatusMapper::GetPingStatusForName(jsonValue.GetString("PingStatus"));

    m_pingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastPingDateTime"))
  {
    m_lastPingDateTime = jsonValue.GetDouble("LastPingDateTime");

    m_lastPingDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgentVersion"))
  {
    m_agentVersion = jsonValue.GetString("AgentVersion");

    m_agentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsLatestVersion"))
  {
    m_isLatestVersion = jsonValue.GetBool("IsLatestVersion");

    m_isLatestVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformType"))
  {
    m_platformType = PlatformTypeMapper::GetPlatformTypeForName(jsonValue.GetString("PlatformType"));

    m_platformTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformName"))
  {
    m_platformName = jsonValue.GetString("PlatformName");

    m_platformNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");

    m_platformVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceInformation::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_pingStatusHasBeenSet)
  {
   payload.WithString("PingStatus", PingStatusMapper::GetNameForPingStatus(m_pingStatus));
  }

  if(m_lastPingDateTimeHasBeenSet)
  {
   payload.WithDouble("LastPingDateTime", m_lastPingDateTime.SecondsWithMSPrecision());
  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  if(m_isLatestVersionHasBeenSet)
  {
   payload.WithBool("IsLatestVersion", m_isLatestVersion);

  }

  if(m_platformTypeHasBeenSet)
  {
   payload.WithString("PlatformType", PlatformTypeMapper::GetNameForPlatformType(m_platformType));
  }

  if(m_platformNameHasBeenSet)
  {
   payload.WithString("PlatformName", m_platformName);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  return payload;
}