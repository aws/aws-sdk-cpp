/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

AutoScalingSettingsUpdate::AutoScalingSettingsUpdate() : 
    m_minimumUnits(0),
    m_minimumUnitsHasBeenSet(false),
    m_maximumUnits(0),
    m_maximumUnitsHasBeenSet(false),
    m_autoScalingDisabled(false),
    m_autoScalingDisabledHasBeenSet(false),
    m_autoScalingRoleArnHasBeenSet(false),
    m_scalingPolicyUpdateHasBeenSet(false)
{
}

AutoScalingSettingsUpdate::AutoScalingSettingsUpdate(JsonView jsonValue) : 
    m_minimumUnits(0),
    m_minimumUnitsHasBeenSet(false),
    m_maximumUnits(0),
    m_maximumUnitsHasBeenSet(false),
    m_autoScalingDisabled(false),
    m_autoScalingDisabledHasBeenSet(false),
    m_autoScalingRoleArnHasBeenSet(false),
    m_scalingPolicyUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingSettingsUpdate& AutoScalingSettingsUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinimumUnits"))
  {
    m_minimumUnits = jsonValue.GetInt64("MinimumUnits");

    m_minimumUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumUnits"))
  {
    m_maximumUnits = jsonValue.GetInt64("MaximumUnits");

    m_maximumUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingDisabled"))
  {
    m_autoScalingDisabled = jsonValue.GetBool("AutoScalingDisabled");

    m_autoScalingDisabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingRoleArn"))
  {
    m_autoScalingRoleArn = jsonValue.GetString("AutoScalingRoleArn");

    m_autoScalingRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingPolicyUpdate"))
  {
    m_scalingPolicyUpdate = jsonValue.GetObject("ScalingPolicyUpdate");

    m_scalingPolicyUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingSettingsUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_minimumUnitsHasBeenSet)
  {
   payload.WithInt64("MinimumUnits", m_minimumUnits);

  }

  if(m_maximumUnitsHasBeenSet)
  {
   payload.WithInt64("MaximumUnits", m_maximumUnits);

  }

  if(m_autoScalingDisabledHasBeenSet)
  {
   payload.WithBool("AutoScalingDisabled", m_autoScalingDisabled);

  }

  if(m_autoScalingRoleArnHasBeenSet)
  {
   payload.WithString("AutoScalingRoleArn", m_autoScalingRoleArn);

  }

  if(m_scalingPolicyUpdateHasBeenSet)
  {
   payload.WithObject("ScalingPolicyUpdate", m_scalingPolicyUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
