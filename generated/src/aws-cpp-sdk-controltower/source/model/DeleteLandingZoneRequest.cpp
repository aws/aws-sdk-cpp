/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/DeleteLandingZoneRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLandingZoneRequest::DeleteLandingZoneRequest() : 
    m_landingZoneIdentifierHasBeenSet(false)
{
}

Aws::String DeleteLandingZoneRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_landingZoneIdentifierHasBeenSet)
  {
   payload.WithString("landingZoneIdentifier", m_landingZoneIdentifier);

  }

  return payload.View().WriteReadable();
}




