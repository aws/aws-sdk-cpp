﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchPutGeofenceRequestEntry.h>
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

BatchPutGeofenceRequestEntry::BatchPutGeofenceRequestEntry() : 
    m_geofenceIdHasBeenSet(false),
    m_geometryHasBeenSet(false)
{
}

BatchPutGeofenceRequestEntry::BatchPutGeofenceRequestEntry(JsonView jsonValue) : 
    m_geofenceIdHasBeenSet(false),
    m_geometryHasBeenSet(false)
{
  *this = jsonValue;
}

BatchPutGeofenceRequestEntry& BatchPutGeofenceRequestEntry::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue BatchPutGeofenceRequestEntry::Jsonize() const
{
  JsonValue payload;

  if(m_geofenceIdHasBeenSet)
  {
   payload.WithString("GeofenceId", m_geofenceId);

  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
