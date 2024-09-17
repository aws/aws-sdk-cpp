/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/VerifyDevicePositionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifyDevicePositionRequest::VerifyDevicePositionRequest() : 
    m_trackerNameHasBeenSet(false),
    m_deviceStateHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false)
{
}

Aws::String VerifyDevicePositionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceStateHasBeenSet)
  {
   payload.WithObject("DeviceState", m_deviceState.Jsonize());

  }

  if(m_distanceUnitHasBeenSet)
  {
   payload.WithString("DistanceUnit", DistanceUnitMapper::GetNameForDistanceUnit(m_distanceUnit));
  }

  return payload.View().WriteReadable();
}




