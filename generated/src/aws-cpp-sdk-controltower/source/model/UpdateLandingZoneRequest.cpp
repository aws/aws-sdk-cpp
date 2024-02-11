/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/UpdateLandingZoneRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLandingZoneRequest::UpdateLandingZoneRequest() : 
    m_landingZoneIdentifierHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String UpdateLandingZoneRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_landingZoneIdentifierHasBeenSet)
  {
   payload.WithString("landingZoneIdentifier", m_landingZoneIdentifier);

  }

  if(m_manifestHasBeenSet)
  {
    if(!m_manifest.View().IsNull())
    {
       payload.WithObject("manifest", JsonValue(m_manifest.View()));
    }
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload.View().WriteReadable();
}




