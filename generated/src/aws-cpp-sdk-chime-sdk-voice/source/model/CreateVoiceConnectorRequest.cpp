/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CreateVoiceConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVoiceConnectorRequest::CreateVoiceConnectorRequest() : 
    m_nameHasBeenSet(false),
    m_awsRegion(VoiceConnectorAwsRegion::NOT_SET),
    m_awsRegionHasBeenSet(false),
    m_requireEncryption(false),
    m_requireEncryptionHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}




