/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroupConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

Ec2AutoScalingGroupConfiguration::Ec2AutoScalingGroupConfiguration() : 
    m_instanceHasBeenSet(false)
{
}

Ec2AutoScalingGroupConfiguration::Ec2AutoScalingGroupConfiguration(JsonView jsonValue) : 
    m_instanceHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2AutoScalingGroupConfiguration& Ec2AutoScalingGroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instance"))
  {
    m_instance = jsonValue.GetObject("instance");

    m_instanceHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2AutoScalingGroupConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceHasBeenSet)
  {
   payload.WithObject("instance", m_instance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
