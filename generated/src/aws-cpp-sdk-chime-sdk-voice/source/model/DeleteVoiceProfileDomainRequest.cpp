/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/DeleteVoiceProfileDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVoiceProfileDomainRequest::DeleteVoiceProfileDomainRequest() : 
    m_voiceProfileDomainIdHasBeenSet(false)
{
}

Aws::String DeleteVoiceProfileDomainRequest::SerializePayload() const
{
  return {};
}




