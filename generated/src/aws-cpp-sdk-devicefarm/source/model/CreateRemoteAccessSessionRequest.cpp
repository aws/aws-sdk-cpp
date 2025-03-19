/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/CreateRemoteAccessSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRemoteAccessSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("deviceArn", m_deviceArn);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("instanceArn", m_instanceArn);

  }

  if(m_sshPublicKeyHasBeenSet)
  {
   payload.WithString("sshPublicKey", m_sshPublicKey);

  }

  if(m_remoteDebugEnabledHasBeenSet)
  {
   payload.WithBool("remoteDebugEnabled", m_remoteDebugEnabled);

  }

  if(m_remoteRecordEnabledHasBeenSet)
  {
   payload.WithBool("remoteRecordEnabled", m_remoteRecordEnabled);

  }

  if(m_remoteRecordAppArnHasBeenSet)
  {
   payload.WithString("remoteRecordAppArn", m_remoteRecordAppArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_interactionModeHasBeenSet)
  {
   payload.WithString("interactionMode", InteractionModeMapper::GetNameForInteractionMode(m_interactionMode));
  }

  if(m_skipAppResignHasBeenSet)
  {
   payload.WithBool("skipAppResign", m_skipAppResign);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRemoteAccessSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.CreateRemoteAccessSession"));
  return headers;

}




