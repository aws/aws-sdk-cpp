/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
