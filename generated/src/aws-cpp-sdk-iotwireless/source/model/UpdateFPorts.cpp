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
    m_positioningHasBeenSet(false),
    m_applicationsHasBeenSet(false)
{
}

UpdateFPorts::UpdateFPorts(JsonView jsonValue) : 
    m_positioningHasBeenSet(false),
    m_applicationsHasBeenSet(false)
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

  if(jsonValue.ValueExists("Applications"))
  {
    Aws::Utils::Array<JsonView> applicationsJsonList = jsonValue.GetArray("Applications");
    for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
    {
      m_applications.push_back(applicationsJsonList[applicationsIndex].AsObject());
    }
    m_applicationsHasBeenSet = true;
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

  if(m_applicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
   for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
   {
     applicationsJsonList[applicationsIndex].AsObject(m_applications[applicationsIndex].Jsonize());
   }
   payload.WithArray("Applications", std::move(applicationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
