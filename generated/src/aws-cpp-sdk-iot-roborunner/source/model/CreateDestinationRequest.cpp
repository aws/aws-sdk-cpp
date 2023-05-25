/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/CreateDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDestinationRequest::CreateDestinationRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_nameHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_state(DestinationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_additionalFixedPropertiesHasBeenSet(false)
{
}

Aws::String CreateDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_siteHasBeenSet)
  {
   payload.WithString("site", m_site);

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




