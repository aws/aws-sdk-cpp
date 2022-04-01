/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Location::Location() : 
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false)
{
}

Location::Location(JsonView jsonValue) : 
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false)
{
  *this = jsonValue;
}

Location& Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("latitude"))
  {
    m_latitude = jsonValue.GetDouble("latitude");

    m_latitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longitude"))
  {
    m_longitude = jsonValue.GetDouble("longitude");

    m_longitudeHasBeenSet = true;
  }

  return *this;
}

JsonValue Location::Jsonize() const
{
  JsonValue payload;

  if(m_latitudeHasBeenSet)
  {
   payload.WithDouble("latitude", m_latitude);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithDouble("longitude", m_longitude);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
