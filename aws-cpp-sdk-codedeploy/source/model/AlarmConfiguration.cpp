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
#include <aws/codedeploy/model/AlarmConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

AlarmConfiguration::AlarmConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ignorePollAlarmFailure(false),
    m_ignorePollAlarmFailureHasBeenSet(false),
    m_alarmsHasBeenSet(false)
{
}

AlarmConfiguration::AlarmConfiguration(const JsonValue& jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ignorePollAlarmFailure(false),
    m_ignorePollAlarmFailureHasBeenSet(false),
    m_alarmsHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmConfiguration& AlarmConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ignorePollAlarmFailure"))
  {
    m_ignorePollAlarmFailure = jsonValue.GetBool("ignorePollAlarmFailure");

    m_ignorePollAlarmFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarms"))
  {
    Array<JsonValue> alarmsJsonList = jsonValue.GetArray("alarms");
    for(unsigned alarmsIndex = 0; alarmsIndex < alarmsJsonList.GetLength(); ++alarmsIndex)
    {
      m_alarms.push_back(alarmsJsonList[alarmsIndex].AsObject());
    }
    m_alarmsHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_ignorePollAlarmFailureHasBeenSet)
  {
   payload.WithBool("ignorePollAlarmFailure", m_ignorePollAlarmFailure);

  }

  if(m_alarmsHasBeenSet)
  {
   Array<JsonValue> alarmsJsonList(m_alarms.size());
   for(unsigned alarmsIndex = 0; alarmsIndex < alarmsJsonList.GetLength(); ++alarmsIndex)
   {
     alarmsJsonList[alarmsIndex].AsObject(m_alarms[alarmsIndex].Jsonize());
   }
   payload.WithArray("alarms", std::move(alarmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws