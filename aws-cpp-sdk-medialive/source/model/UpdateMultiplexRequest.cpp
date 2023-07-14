/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateMultiplexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMultiplexRequest::UpdateMultiplexRequest() : 
    m_multiplexIdHasBeenSet(false),
    m_multiplexSettingsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateMultiplexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_multiplexSettingsHasBeenSet)
  {
   payload.WithObject("multiplexSettings", m_multiplexSettings.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




