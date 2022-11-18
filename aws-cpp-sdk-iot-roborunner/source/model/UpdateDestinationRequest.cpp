/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/UpdateDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDestinationRequest::UpdateDestinationRequest() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(DestinationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_additionalFixedPropertiesHasBeenSet(false)
{
}

Aws::String UpdateDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", DestinationStateMapper::GetNameForDestinationState(m_state));
  }

  if(m_additionalFixedPropertiesHasBeenSet)
  {
   payload.WithString("additionalFixedProperties", m_additionalFixedProperties);

  }

  return payload.View().WriteReadable();
}




