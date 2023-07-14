/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

Location::Location() : 
    m_addressHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false)
{
}

Location::Location(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false)
{
  *this = jsonValue;
}

Location& Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Latitude"))
  {
    m_latitude = jsonValue.GetString("Latitude");

    m_latitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Longitude"))
  {
    m_longitude = jsonValue.GetString("Longitude");

    m_longitudeHasBeenSet = true;
  }

  return *this;
}

JsonValue Location::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_latitudeHasBeenSet)
  {
   payload.WithString("Latitude", m_latitude);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithString("Longitude", m_longitude);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
