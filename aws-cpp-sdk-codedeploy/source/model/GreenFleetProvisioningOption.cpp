/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/GreenFleetProvisioningOption.h>
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

GreenFleetProvisioningOption::GreenFleetProvisioningOption() : 
    m_action(GreenFleetProvisioningAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

GreenFleetProvisioningOption::GreenFleetProvisioningOption(JsonView jsonValue) : 
    m_action(GreenFleetProvisioningAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

GreenFleetProvisioningOption& GreenFleetProvisioningOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = GreenFleetProvisioningActionMapper::GetGreenFleetProvisioningActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue GreenFleetProvisioningOption::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GreenFleetProvisioningActionMapper::GetNameForGreenFleetProvisioningAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
