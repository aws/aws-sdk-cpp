/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/PositionCoordinates.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTRoboRunner
{
namespace Model
{

PositionCoordinates::PositionCoordinates() : 
    m_cartesianCoordinatesHasBeenSet(false)
{
}

PositionCoordinates::PositionCoordinates(JsonView jsonValue) : 
    m_cartesianCoordinatesHasBeenSet(false)
{
  *this = jsonValue;
}

PositionCoordinates& PositionCoordinates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cartesianCoordinates"))
  {
    m_cartesianCoordinates = jsonValue.GetObject("cartesianCoordinates");

    m_cartesianCoordinatesHasBeenSet = true;
  }

  return *this;
}

JsonValue PositionCoordinates::Jsonize() const
{
  JsonValue payload;

  if(m_cartesianCoordinatesHasBeenSet)
  {
   payload.WithObject("cartesianCoordinates", m_cartesianCoordinates.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
