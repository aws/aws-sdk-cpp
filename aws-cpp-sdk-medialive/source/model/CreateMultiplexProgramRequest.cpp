/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




