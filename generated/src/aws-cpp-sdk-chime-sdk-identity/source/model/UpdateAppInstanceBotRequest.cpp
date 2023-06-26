/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/UpdateAppInstanceBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppInstanceBotRequest::UpdateAppInstanceBotRequest() : 
    m_appInstanceBotArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

Aws::String UpdateAppInstanceBotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  return payload.View().WriteReadable();
}




