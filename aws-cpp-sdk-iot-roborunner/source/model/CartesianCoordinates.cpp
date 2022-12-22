/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/CartesianCoordinates.h>
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

CartesianCoordinates::CartesianCoordinates() : 
    m_x(0.0),
    m_xHasBeenSet(false),
    m_y(0.0),
    m_yHasBeenSet(false),
    m_z(0.0),
    m_zHasBeenSet(false)
{
}

CartesianCoordinates::CartesianCoordinates(JsonView jsonValue) : 
    m_x(0.0),
    m_xHasBeenSet(false),
    m_y(0.0),
    m_yHasBeenSet(false),
    m_z(0.0),
    m_zHasBeenSet(false)
{
  *this = jsonValue;
}

CartesianCoordinates& CartesianCoordinates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("x"))
  {
    m_x = jsonValue.GetDouble("x");

    m_xHasBeenSet = true;
  }

  if(jsonValue.ValueExists("y"))
  {
    m_y = jsonValue.GetDouble("y");

    m_yHasBeenSet = true;
  }

  if(jsonValue.ValueExists("z"))
  {
    m_z = jsonValue.GetDouble("z");

    m_zHasBeenSet = true;
  }

  return *this;
}

JsonValue CartesianCoordinates::Jsonize() const
{
  JsonValue payload;

  if(m_xHasBeenSet)
  {
   payload.WithDouble("x", m_x);

  }

  if(m_yHasBeenSet)
  {
   payload.WithDouble("y", m_y);

  }

  if(m_zHasBeenSet)
  {
   payload.WithDouble("z", m_z);

  }

  return payload;
}

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
