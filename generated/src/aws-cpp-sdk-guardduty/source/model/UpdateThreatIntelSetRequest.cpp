/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UpdateThreatIntelSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateThreatIntelSetRequest::UpdateThreatIntelSetRequest() : 
    m_detectorIdHasBeenSet(false),
    m_threatIntelSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_activate(false),
    m_activateHasBeenSet(false)
{
}

Aws::String UpdateThreatIntelSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_activateHasBeenSet)
  {
   payload.WithBool("activate", m_activate);

  }

  return payload.View().WriteReadable();
}




