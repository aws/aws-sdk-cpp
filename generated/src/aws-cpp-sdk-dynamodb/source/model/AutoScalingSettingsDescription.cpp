/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/AutoScalingSettingsDescription.h>
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

AutoScalingSettingsDescription::AutoScalingSettingsDescription() : 
    m_minimumUnits(0),
    m_minimumUnitsHasBeenSet(false),
    m_maximumUnits(0),
    m_maximumUnitsHasBeenSet(false),
    m_autoScalingDisabled(false),
    m_autoScalingDisabledHasBeenSet(false),
    m_autoScalingRoleArnHasBeenSet(false),
    m_scalingPoliciesHasBeenSet(false)
{
}

AutoScalingSettingsDescription::AutoScalingSettingsDescription(JsonView jsonValue) : 
    m_minimumUnits(0),
    m_minimumUnitsHasBeenSet(false),
    m_maximumUnits(0),
    m_maximumUnitsHasBeenSet(false),
    m_autoScalingDisabled(false),
    m_autoScalingDisabledHasBeenSet(false),
    m_autoScalingRoleArnHasBeenSet(false),
    m_scalingPoliciesHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingSettingsDescription& AutoScalingSettingsDescription::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ScalingPolicies"))
  {
    Aws::Utils::Array<JsonView> scalingPoliciesJsonList = jsonValue.GetArray("ScalingPolicies");
    for(unsigned scalingPoliciesIndex = 0; scalingPoliciesIndex < scalingPoliciesJsonList.GetLength(); ++scalingPoliciesIndex)
    {
      m_scalingPolicies.push_back(scalingPoliciesJsonList[scalingPoliciesIndex].AsObject());
    }
    m_scalingPoliciesHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingSettingsDescription::Jsonize() const
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

  if(m_scalingPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scalingPoliciesJsonList(m_scalingPolicies.size());
   for(unsigned scalingPoliciesIndex = 0; scalingPoliciesIndex < scalingPoliciesJsonList.GetLength(); ++scalingPoliciesIndex)
   {
     scalingPoliciesJsonList[scalingPoliciesIndex].AsObject(m_scalingPolicies[scalingPoliciesIndex].Jsonize());
   }
   payload.WithArray("ScalingPolicies", std::move(scalingPoliciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
