/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

AlarmConfiguration::AlarmConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ignorePollAlarmFailure(false),
    m_ignorePollAlarmFailureHasBeenSet(false),
    m_alarmsHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmConfiguration& AlarmConfiguration::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> alarmsJsonList = jsonValue.GetArray("alarms");
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
   Aws::Utils::Array<JsonValue> alarmsJsonList(m_alarms.size());
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
