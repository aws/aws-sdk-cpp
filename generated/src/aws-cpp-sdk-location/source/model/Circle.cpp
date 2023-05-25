/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/Circle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

Circle::Circle() : 
    m_centerHasBeenSet(false),
    m_radius(0.0),
    m_radiusHasBeenSet(false)
{
}

Circle::Circle(JsonView jsonValue) : 
    m_centerHasBeenSet(false),
    m_radius(0.0),
    m_radiusHasBeenSet(false)
{
  *this = jsonValue;
}

Circle& Circle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Center"))
  {
    Aws::Utils::Array<JsonView> centerJsonList = jsonValue.GetArray("Center");
    for(unsigned centerIndex = 0; centerIndex < centerJsonList.GetLength(); ++centerIndex)
    {
      m_center.push_back(centerJsonList[centerIndex].AsDouble());
    }
    m_centerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Radius"))
  {
    m_radius = jsonValue.GetDouble("Radius");

    m_radiusHasBeenSet = true;
  }

  return *this;
}

JsonValue Circle::Jsonize() const
{
  JsonValue payload;

  if(m_centerHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> centerJsonList(m_center.size());
   for(unsigned centerIndex = 0; centerIndex < centerJsonList.GetLength(); ++centerIndex)
   {
     centerJsonList[centerIndex].AsDouble(m_center[centerIndex]);
   }
   payload.WithArray("Center", std::move(centerJsonList));

  }

  if(m_radiusHasBeenSet)
  {
   payload.WithDouble("Radius", m_radius);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
