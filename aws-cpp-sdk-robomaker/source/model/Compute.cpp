/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/Compute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

Compute::Compute() : 
    m_simulationUnitLimit(0),
    m_simulationUnitLimitHasBeenSet(false)
{
}

Compute::Compute(JsonView jsonValue) : 
    m_simulationUnitLimit(0),
    m_simulationUnitLimitHasBeenSet(false)
{
  *this = jsonValue;
}

Compute& Compute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("simulationUnitLimit"))
  {
    m_simulationUnitLimit = jsonValue.GetInteger("simulationUnitLimit");

    m_simulationUnitLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue Compute::Jsonize() const
{
  JsonValue payload;

  if(m_simulationUnitLimitHasBeenSet)
  {
   payload.WithInteger("simulationUnitLimit", m_simulationUnitLimit);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
