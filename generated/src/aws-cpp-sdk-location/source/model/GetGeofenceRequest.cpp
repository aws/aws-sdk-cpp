/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetGeofenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetGeofenceRequest::GetGeofenceRequest() : 
    m_collectionNameHasBeenSet(false),
    m_geofenceIdHasBeenSet(false)
{
}

Aws::String GetGeofenceRequest::SerializePayload() const
{
  return {};
}




