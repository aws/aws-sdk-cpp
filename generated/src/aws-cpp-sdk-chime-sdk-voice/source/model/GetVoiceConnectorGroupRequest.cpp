/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/GetVoiceConnectorGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetVoiceConnectorGroupRequest::GetVoiceConnectorGroupRequest() : 
    m_voiceConnectorGroupIdHasBeenSet(false)
{
}

Aws::String GetVoiceConnectorGroupRequest::SerializePayload() const
{
  return {};
}




