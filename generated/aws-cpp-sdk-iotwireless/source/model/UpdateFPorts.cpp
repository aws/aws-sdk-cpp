/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateFPorts.h>
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

UpdateFPorts::UpdateFPorts() : 
    m_positioningHasBeenSet(false)
{
}

UpdateFPorts::UpdateFPorts(JsonView jsonValue) : 
    m_positioningHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateFPorts& UpdateFPorts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Positioning"))
  {
    m_positioning = jsonValue.GetObject("Positioning");

    m_positioningHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateFPorts::Jsonize() const
{
  JsonValue payload;

  if(m_positioningHasBeenSet)
  {
   payload.WithObject("Positioning", m_positioning.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
