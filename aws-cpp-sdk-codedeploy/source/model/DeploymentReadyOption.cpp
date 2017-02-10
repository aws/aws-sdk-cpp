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
#include <aws/codedeploy/model/DeploymentReadyOption.h>
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

DeploymentReadyOption::DeploymentReadyOption() : 
    m_actionOnTimeout(DeploymentReadyAction::NOT_SET),
    m_actionOnTimeoutHasBeenSet(false),
    m_waitTimeInMinutes(0),
    m_waitTimeInMinutesHasBeenSet(false)
{
}

DeploymentReadyOption::DeploymentReadyOption(const JsonValue& jsonValue) : 
    m_actionOnTimeout(DeploymentReadyAction::NOT_SET),
    m_actionOnTimeoutHasBeenSet(false),
    m_waitTimeInMinutes(0),
    m_waitTimeInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentReadyOption& DeploymentReadyOption::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("actionOnTimeout"))
  {
    m_actionOnTimeout = DeploymentReadyActionMapper::GetDeploymentReadyActionForName(jsonValue.GetString("actionOnTimeout"));

    m_actionOnTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("waitTimeInMinutes"))
  {
    m_waitTimeInMinutes = jsonValue.GetInteger("waitTimeInMinutes");

    m_waitTimeInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentReadyOption::Jsonize() const
{
  JsonValue payload;

  if(m_actionOnTimeoutHasBeenSet)
  {
   payload.WithString("actionOnTimeout", DeploymentReadyActionMapper::GetNameForDeploymentReadyAction(m_actionOnTimeout));
  }

  if(m_waitTimeInMinutesHasBeenSet)
  {
   payload.WithInteger("waitTimeInMinutes", m_waitTimeInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws