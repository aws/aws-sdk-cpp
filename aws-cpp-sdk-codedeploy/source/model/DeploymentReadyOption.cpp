/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DeploymentReadyOption::DeploymentReadyOption(JsonView jsonValue) : 
    m_actionOnTimeout(DeploymentReadyAction::NOT_SET),
    m_actionOnTimeoutHasBeenSet(false),
    m_waitTimeInMinutes(0),
    m_waitTimeInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentReadyOption& DeploymentReadyOption::operator =(JsonView jsonValue)
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
