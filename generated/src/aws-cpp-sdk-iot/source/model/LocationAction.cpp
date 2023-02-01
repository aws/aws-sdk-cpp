/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/LocationAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

LocationAction::LocationAction() : 
    m_roleArnHasBeenSet(false),
    m_trackerNameHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false)
{
}

LocationAction::LocationAction(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_trackerNameHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false)
{
  *this = jsonValue;
}

LocationAction& LocationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trackerName"))
  {
    m_trackerName = jsonValue.GetString("trackerName");

    m_trackerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceId"))
  {
    m_deviceId = jsonValue.GetString("deviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetObject("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latitude"))
  {
    m_latitude = jsonValue.GetString("latitude");

    m_latitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longitude"))
  {
    m_longitude = jsonValue.GetString("longitude");

    m_longitudeHasBeenSet = true;
  }

  return *this;
}

JsonValue LocationAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_trackerNameHasBeenSet)
  {
   payload.WithString("trackerName", m_trackerName);

  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("deviceId", m_deviceId);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithObject("timestamp", m_timestamp.Jsonize());

  }

  if(m_latitudeHasBeenSet)
  {
   payload.WithString("latitude", m_latitude);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithString("longitude", m_longitude);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
