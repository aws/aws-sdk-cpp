/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorTerminationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVoiceConnectorTerminationRequest::DeleteVoiceConnectorTerminationRequest() : 
    m_voiceConnectorIdHasBeenSet(false)
{
}

Aws::String DeleteVoiceConnectorTerminationRequest::SerializePayload() const
{
  return {};
}




