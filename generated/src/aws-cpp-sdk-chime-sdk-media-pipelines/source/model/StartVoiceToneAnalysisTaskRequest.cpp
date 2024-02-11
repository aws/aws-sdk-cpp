/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/StartVoiceToneAnalysisTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartVoiceToneAnalysisTaskRequest::StartVoiceToneAnalysisTaskRequest() : 
    m_identifierHasBeenSet(false),
    m_languageCode(VoiceAnalyticsLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String StartVoiceToneAnalysisTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", VoiceAnalyticsLanguageCodeMapper::GetNameForVoiceAnalyticsLanguageCode(m_languageCode));
  }

  if(m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet)
  {
   payload.WithObject("KinesisVideoStreamSourceTaskConfiguration", m_kinesisVideoStreamSourceTaskConfiguration.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




