/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GeoLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

GeoLocation::GeoLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

GeoLocation& GeoLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lat"))
  {
    m_lat = jsonValue.GetDouble("lat");
    m_latHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lon"))
  {
    m_lon = jsonValue.GetDouble("lon");
    m_lonHasBeenSet = true;
  }
  return *this;
}

JsonValue GeoLocation::Jsonize() const
{
  JsonValue payload;

  if(m_latHasBeenSet)
  {
   payload.WithDouble("lat", m_lat);

  }

  if(m_lonHasBeenSet)
  {
   payload.WithDouble("lon", m_lon);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
