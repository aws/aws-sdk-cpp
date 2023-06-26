/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/CreateEphemerisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEphemerisRequest::CreateEphemerisRequest() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ephemerisHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_satelliteIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEphemerisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_ephemerisHasBeenSet)
  {
   payload.WithObject("ephemeris", m_ephemeris.Jsonize());

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("expirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_satelliteIdHasBeenSet)
  {
   payload.WithString("satelliteId", m_satelliteId);

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

  return payload.View().WriteReadable();
}




