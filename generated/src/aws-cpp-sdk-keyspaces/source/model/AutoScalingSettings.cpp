/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/AutoScalingSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

AutoScalingSettings::AutoScalingSettings() : 
    m_autoScalingDisabled(false),
    m_autoScalingDisabledHasBeenSet(false),
    m_minimumUnits(0),
    m_minimumUnitsHasBeenSet(false),
    m_maximumUnits(0),
    m_maximumUnitsHasBeenSet(false),
    m_scalingPolicyHasBeenSet(false)
{
}

AutoScalingSettings::AutoScalingSettings(JsonView jsonValue) : 
    m_autoScalingDisabled(false),
    m_autoScalingDisabledHasBeenSet(false),
    m_minimumUnits(0),
    m_minimumUnitsHasBeenSet(false),
    m_maximumUnits(0),
    m_maximumUnitsHasBeenSet(false),
    m_scalingPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingSettings& AutoScalingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoScalingDisabled"))
  {
    m_autoScalingDisabled = jsonValue.GetBool("autoScalingDisabled");

    m_autoScalingDisabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumUnits"))
  {
    m_minimumUnits = jsonValue.GetInt64("minimumUnits");

    m_minimumUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumUnits"))
  {
    m_maximumUnits = jsonValue.GetInt64("maximumUnits");

    m_maximumUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scalingPolicy"))
  {
    m_scalingPolicy = jsonValue.GetObject("scalingPolicy");

    m_scalingPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_autoScalingDisabledHasBeenSet)
  {
   payload.WithBool("autoScalingDisabled", m_autoScalingDisabled);

  }

  if(m_minimumUnitsHasBeenSet)
  {
   payload.WithInt64("minimumUnits", m_minimumUnits);

  }

  if(m_maximumUnitsHasBeenSet)
  {
   payload.WithInt64("maximumUnits", m_maximumUnits);

  }

  if(m_scalingPolicyHasBeenSet)
  {
   payload.WithObject("scalingPolicy", m_scalingPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
