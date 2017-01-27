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

BlueInstanceTerminationOption::BlueInstanceTerminationOption(const JsonValue& jsonValue) : 
    m_action(InstanceAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_terminationWaitTimeInMinutes(0),
    m_terminationWaitTimeInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

BlueInstanceTerminationOption& BlueInstanceTerminationOption::operator =(const JsonValue& jsonValue)
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