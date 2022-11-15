/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/BatchEvaluateGeofencesError.h>
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

BatchEvaluateGeofencesError::BatchEvaluateGeofencesError() : 
    m_deviceIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_sampleTimeHasBeenSet(false)
{
}

BatchEvaluateGeofencesError::BatchEvaluateGeofencesError(JsonView jsonValue) : 
    m_deviceIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_sampleTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BatchEvaluateGeofencesError& BatchEvaluateGeofencesError::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("SampleTime"))
  {
    m_sampleTime = jsonValue.GetString("SampleTime");

    m_sampleTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchEvaluateGeofencesError::Jsonize() const
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

  if(m_sampleTimeHasBeenSet)
  {
   payload.WithString("SampleTime", m_sampleTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
