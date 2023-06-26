/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartContactRecordingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartContactRecordingRequest::StartContactRecordingRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false),
    m_initialContactIdHasBeenSet(false),
    m_voiceRecordingConfigurationHasBeenSet(false)
{
}

Aws::String StartContactRecordingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_initialContactIdHasBeenSet)
  {
   payload.WithString("InitialContactId", m_initialContactId);

  }

  if(m_voiceRecordingConfigurationHasBeenSet)
  {
   payload.WithObject("VoiceRecordingConfiguration", m_voiceRecordingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




