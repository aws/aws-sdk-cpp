/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PositionSolverConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

PositionSolverConfigurations::PositionSolverConfigurations() : 
    m_semtechGnssHasBeenSet(false)
{
}

PositionSolverConfigurations::PositionSolverConfigurations(JsonView jsonValue) : 
    m_semtechGnssHasBeenSet(false)
{
  *this = jsonValue;
}

PositionSolverConfigurations& PositionSolverConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SemtechGnss"))
  {
    m_semtechGnss = jsonValue.GetObject("SemtechGnss");

    m_semtechGnssHasBeenSet = true;
  }

  return *this;
}

JsonValue PositionSolverConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_semtechGnssHasBeenSet)
  {
   payload.WithObject("SemtechGnss", m_semtechGnss.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
