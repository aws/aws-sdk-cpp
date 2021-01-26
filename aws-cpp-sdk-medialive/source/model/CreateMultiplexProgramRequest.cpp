/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CreateMultiplexProgramRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMultiplexProgramRequest::CreateMultiplexProgramRequest() : 
    m_multiplexIdHasBeenSet(false),
    m_multiplexProgramSettingsHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_requestId(Aws::Utils::UUID::RandomUUID()),
    m_requestIdHasBeenSet(true)
{
}

Aws::String CreateMultiplexProgramRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_multiplexProgramSettingsHasBeenSet)
  {
   payload.WithObject("multiplexProgramSettings", m_multiplexProgramSettings.Jsonize());

  }

  if(m_programNameHasBeenSet)
  {
   payload.WithString("programName", m_programName);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  return payload.View().WriteReadable();
}




