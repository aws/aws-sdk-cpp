/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/CreateLandingZoneRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLandingZoneRequest::CreateLandingZoneRequest() : 
    m_manifestHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String CreateLandingZoneRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_manifestHasBeenSet)
  {
    if(!m_manifest.View().IsNull())
    {
       payload.WithObject("manifest", JsonValue(m_manifest.View()));
    }
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload.View().WriteReadable();
}




