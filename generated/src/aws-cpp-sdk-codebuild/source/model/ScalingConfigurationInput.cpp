/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ScalingConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ScalingConfigurationInput::ScalingConfigurationInput() : 
    m_scalingType(FleetScalingType::NOT_SET),
    m_scalingTypeHasBeenSet(false),
    m_targetTrackingScalingConfigsHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false)
{
}

ScalingConfigurationInput::ScalingConfigurationInput(JsonView jsonValue) : 
    m_scalingType(FleetScalingType::NOT_SET),
    m_scalingTypeHasBeenSet(false),
    m_targetTrackingScalingConfigsHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingConfigurationInput& ScalingConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scalingType"))
  {
    m_scalingType = FleetScalingTypeMapper::GetFleetScalingTypeForName(jsonValue.GetString("scalingType"));

    m_scalingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetTrackingScalingConfigs"))
  {
    Aws::Utils::Array<JsonView> targetTrackingScalingConfigsJsonList = jsonValue.GetArray("targetTrackingScalingConfigs");
    for(unsigned targetTrackingScalingConfigsIndex = 0; targetTrackingScalingConfigsIndex < targetTrackingScalingConfigsJsonList.GetLength(); ++targetTrackingScalingConfigsIndex)
    {
      m_targetTrackingScalingConfigs.push_back(targetTrackingScalingConfigsJsonList[targetTrackingScalingConfigsIndex].AsObject());
    }
    m_targetTrackingScalingConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxCapacity"))
  {
    m_maxCapacity = jsonValue.GetInteger("maxCapacity");

    m_maxCapacityHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_scalingTypeHasBeenSet)
  {
   payload.WithString("scalingType", FleetScalingTypeMapper::GetNameForFleetScalingType(m_scalingType));
  }

  if(m_targetTrackingScalingConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetTrackingScalingConfigsJsonList(m_targetTrackingScalingConfigs.size());
   for(unsigned targetTrackingScalingConfigsIndex = 0; targetTrackingScalingConfigsIndex < targetTrackingScalingConfigsJsonList.GetLength(); ++targetTrackingScalingConfigsIndex)
   {
     targetTrackingScalingConfigsJsonList[targetTrackingScalingConfigsIndex].AsObject(m_targetTrackingScalingConfigs[targetTrackingScalingConfigsIndex].Jsonize());
   }
   payload.WithArray("targetTrackingScalingConfigs", std::move(targetTrackingScalingConfigsJsonList));

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("maxCapacity", m_maxCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
