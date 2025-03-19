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

DeploymentReadyOption::DeploymentReadyOption(JsonView jsonValue)
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
