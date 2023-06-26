/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DeploymentComponentUpdatePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

DeploymentComponentUpdatePolicy::DeploymentComponentUpdatePolicy() : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_action(DeploymentComponentUpdatePolicyAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

DeploymentComponentUpdatePolicy::DeploymentComponentUpdatePolicy(JsonView jsonValue) : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_action(DeploymentComponentUpdatePolicyAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentComponentUpdatePolicy& DeploymentComponentUpdatePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInteger("timeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = DeploymentComponentUpdatePolicyActionMapper::GetDeploymentComponentUpdatePolicyActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentComponentUpdatePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("timeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", DeploymentComponentUpdatePolicyActionMapper::GetNameForDeploymentComponentUpdatePolicyAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
