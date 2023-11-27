/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroup.h>
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

Ec2AutoScalingGroup::Ec2AutoScalingGroup() : 
    m_configurationHasBeenSet(false),
    m_costCalculationHasBeenSet(false)
{
}

Ec2AutoScalingGroup::Ec2AutoScalingGroup(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_costCalculationHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2AutoScalingGroup& Ec2AutoScalingGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("costCalculation"))
  {
    m_costCalculation = jsonValue.GetObject("costCalculation");

    m_costCalculationHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2AutoScalingGroup::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_costCalculationHasBeenSet)
  {
   payload.WithObject("costCalculation", m_costCalculation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
