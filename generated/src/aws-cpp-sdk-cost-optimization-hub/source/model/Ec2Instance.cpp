/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Ec2Instance.h>
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

Ec2Instance::Ec2Instance() : 
    m_configurationHasBeenSet(false),
    m_costCalculationHasBeenSet(false)
{
}

Ec2Instance::Ec2Instance(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_costCalculationHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2Instance& Ec2Instance::operator =(JsonView jsonValue)
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

JsonValue Ec2Instance::Jsonize() const
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
