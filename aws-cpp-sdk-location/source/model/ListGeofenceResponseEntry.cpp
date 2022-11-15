/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ListGeofenceResponseEntry.h>
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

ListGeofenceResponseEntry::ListGeofenceResponseEntry() : 
    m_createTimeHasBeenSet(false),
    m_geofenceIdHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

ListGeofenceResponseEntry::ListGeofenceResponseEntry(JsonView jsonValue) : 
    m_createTimeHasBeenSet(false),
    m_geofenceIdHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ListGeofenceResponseEntry& ListGeofenceResponseEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeofenceId"))
  {
    m_geofenceId = jsonValue.GetString("GeofenceId");

    m_geofenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");

    m_geometryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListGeofenceResponseEntry::Jsonize() const
{
  JsonValue payload;

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("CreateTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_geofenceIdHasBeenSet)
  {
   payload.WithString("GeofenceId", m_geofenceId);

  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("UpdateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
