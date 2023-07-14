/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchDeleteDevicePositionHistoryError.h>
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

BatchDeleteDevicePositionHistoryError::BatchDeleteDevicePositionHistoryError() : 
    m_deviceIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

BatchDeleteDevicePositionHistoryError::BatchDeleteDevicePositionHistoryError(JsonView jsonValue) : 
    m_deviceIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDeleteDevicePositionHistoryError& BatchDeleteDevicePositionHistoryError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDeleteDevicePositionHistoryError::Jsonize() const
{
  JsonValue payload;

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
