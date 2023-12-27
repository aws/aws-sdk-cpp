/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/EcsServiceConfiguration.h>
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

EcsServiceConfiguration::EcsServiceConfiguration() : 
    m_computeHasBeenSet(false)
{
}

EcsServiceConfiguration::EcsServiceConfiguration(JsonView jsonValue) : 
    m_computeHasBeenSet(false)
{
  *this = jsonValue;
}

EcsServiceConfiguration& EcsServiceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("compute"))
  {
    m_compute = jsonValue.GetObject("compute");

    m_computeHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsServiceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_computeHasBeenSet)
  {
   payload.WithObject("compute", m_compute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
