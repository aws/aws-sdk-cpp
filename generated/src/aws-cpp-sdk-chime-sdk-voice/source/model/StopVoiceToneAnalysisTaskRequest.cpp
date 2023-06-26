/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/StopVoiceToneAnalysisTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopVoiceToneAnalysisTaskRequest::StopVoiceToneAnalysisTaskRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_voiceToneAnalysisTaskIdHasBeenSet(false)
{
}

Aws::String StopVoiceToneAnalysisTaskRequest::SerializePayload() const
{
  return {};
}




