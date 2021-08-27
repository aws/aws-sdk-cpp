/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BlueInstanceTerminationOption.h>
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

BlueInstanceTerminationOption::BlueInstanceTerminationOption() : 
    m_action(InstanceAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_terminationWaitTimeInMinutes(0),
    m_terminationWaitTimeInMinutesHasBeenSet(false)
{
}

BlueInstanceTerminationOption::BlueInstanceTerminationOption(JsonView jsonValue) : 
    m_action(InstanceAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_terminationWaitTimeInMinutes(0),
    m_terminationWaitTimeInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

BlueInstanceTerminationOption& BlueInstanceTerminationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = InstanceActionMapper::GetInstanceActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("terminationWaitTimeInMinutes"))
  {
    m_terminationWaitTimeInMinutes = jsonValue.GetInteger("terminationWaitTimeInMinutes");

    m_terminationWaitTimeInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue BlueInstanceTerminationOption::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", InstanceActionMapper::GetNameForInstanceAction(m_action));
  }

  if(m_terminationWaitTimeInMinutesHasBeenSet)
  {
   payload.WithInteger("terminationWaitTimeInMinutes", m_terminationWaitTimeInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
