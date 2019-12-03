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

#include <aws/ecs/model/AutoScalingGroupProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

AutoScalingGroupProvider::AutoScalingGroupProvider() : 
    m_autoScalingGroupArnHasBeenSet(false),
    m_managedScalingHasBeenSet(false),
    m_managedTerminationProtection(ManagedTerminationProtection::NOT_SET),
    m_managedTerminationProtectionHasBeenSet(false)
{
}

AutoScalingGroupProvider::AutoScalingGroupProvider(JsonView jsonValue) : 
    m_autoScalingGroupArnHasBeenSet(false),
    m_managedScalingHasBeenSet(false),
    m_managedTerminationProtection(ManagedTerminationProtection::NOT_SET),
    m_managedTerminationProtectionHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingGroupProvider& AutoScalingGroupProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoScalingGroupArn"))
  {
    m_autoScalingGroupArn = jsonValue.GetString("autoScalingGroupArn");

    m_autoScalingGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedScaling"))
  {
    m_managedScaling = jsonValue.GetObject("managedScaling");

    m_managedScalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedTerminationProtection"))
  {
    m_managedTerminationProtection = ManagedTerminationProtectionMapper::GetManagedTerminationProtectionForName(jsonValue.GetString("managedTerminationProtection"));

    m_managedTerminationProtectionHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingGroupProvider::Jsonize() const
{
  JsonValue payload;

  if(m_autoScalingGroupArnHasBeenSet)
  {
   payload.WithString("autoScalingGroupArn", m_autoScalingGroupArn);

  }

  if(m_managedScalingHasBeenSet)
  {
   payload.WithObject("managedScaling", m_managedScaling.Jsonize());

  }

  if(m_managedTerminationProtectionHasBeenSet)
  {
   payload.WithString("managedTerminationProtection", ManagedTerminationProtectionMapper::GetNameForManagedTerminationProtection(m_managedTerminationProtection));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
