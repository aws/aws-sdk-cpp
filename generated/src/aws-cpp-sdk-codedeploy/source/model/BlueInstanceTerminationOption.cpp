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

BlueInstanceTerminationOption::BlueInstanceTerminationOption(JsonView jsonValue)
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
