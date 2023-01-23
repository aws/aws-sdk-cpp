/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeploymentAlarms.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

DeploymentAlarms::DeploymentAlarms() : 
    m_alarmNamesHasBeenSet(false),
    m_enable(false),
    m_enableHasBeenSet(false),
    m_rollback(false),
    m_rollbackHasBeenSet(false)
{
}

DeploymentAlarms::DeploymentAlarms(JsonView jsonValue) : 
    m_alarmNamesHasBeenSet(false),
    m_enable(false),
    m_enableHasBeenSet(false),
    m_rollback(false),
    m_rollbackHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentAlarms& DeploymentAlarms::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alarmNames"))
  {
    Aws::Utils::Array<JsonView> alarmNamesJsonList = jsonValue.GetArray("alarmNames");
    for(unsigned alarmNamesIndex = 0; alarmNamesIndex < alarmNamesJsonList.GetLength(); ++alarmNamesIndex)
    {
      m_alarmNames.push_back(alarmNamesJsonList[alarmNamesIndex].AsString());
    }
    m_alarmNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enable"))
  {
    m_enable = jsonValue.GetBool("enable");

    m_enableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollback"))
  {
    m_rollback = jsonValue.GetBool("rollback");

    m_rollbackHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentAlarms::Jsonize() const
{
  JsonValue payload;

  if(m_alarmNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alarmNamesJsonList(m_alarmNames.size());
   for(unsigned alarmNamesIndex = 0; alarmNamesIndex < alarmNamesJsonList.GetLength(); ++alarmNamesIndex)
   {
     alarmNamesJsonList[alarmNamesIndex].AsString(m_alarmNames[alarmNamesIndex]);
   }
   payload.WithArray("alarmNames", std::move(alarmNamesJsonList));

  }

  if(m_enableHasBeenSet)
  {
   payload.WithBool("enable", m_enable);

  }

  if(m_rollbackHasBeenSet)
  {
   payload.WithBool("rollback", m_rollback);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
