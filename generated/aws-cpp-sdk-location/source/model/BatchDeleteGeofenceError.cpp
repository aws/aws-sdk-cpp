/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchDeleteGeofenceError.h>
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

BatchDeleteGeofenceError::BatchDeleteGeofenceError() : 
    m_errorHasBeenSet(false),
    m_geofenceIdHasBeenSet(false)
{
}

BatchDeleteGeofenceError::BatchDeleteGeofenceError(JsonView jsonValue) : 
    m_errorHasBeenSet(false),
    m_geofenceIdHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDeleteGeofenceError& BatchDeleteGeofenceError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeofenceId"))
  {
    m_geofenceId = jsonValue.GetString("GeofenceId");

    m_geofenceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDeleteGeofenceError::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  if(m_geofenceIdHasBeenSet)
  {
   payload.WithString("GeofenceId", m_geofenceId);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
