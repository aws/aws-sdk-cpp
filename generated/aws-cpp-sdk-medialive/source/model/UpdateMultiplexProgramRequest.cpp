/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateMultiplexProgramRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMultiplexProgramRequest::UpdateMultiplexProgramRequest() : 
    m_multiplexIdHasBeenSet(false),
    m_multiplexProgramSettingsHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
}

Aws::String UpdateMultiplexProgramRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_multiplexProgramSettingsHasBeenSet)
  {
   payload.WithObject("multiplexProgramSettings", m_multiplexProgramSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




