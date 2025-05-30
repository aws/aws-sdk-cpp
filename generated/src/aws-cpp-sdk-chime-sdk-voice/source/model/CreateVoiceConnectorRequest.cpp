﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CreateVoiceConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateVoiceConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", VoiceConnectorAwsRegionMapper::GetNameForVoiceConnectorAwsRegion(m_awsRegion));
  }

  if(m_requireEncryptionHasBeenSet)
  {
   payload.WithBool("RequireEncryption", m_requireEncryption);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_integrationTypeHasBeenSet)
  {
   payload.WithString("IntegrationType", VoiceConnectorIntegrationTypeMapper::GetNameForVoiceConnectorIntegrationType(m_integrationType));
  }

  return payload.View().WriteReadable();
}




