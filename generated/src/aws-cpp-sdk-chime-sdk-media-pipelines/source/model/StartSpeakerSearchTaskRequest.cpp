/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/StartSpeakerSearchTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSpeakerSearchTaskRequest::StartSpeakerSearchTaskRequest() : 
    m_identifierHasBeenSet(false),
    m_voiceProfileDomainArnHasBeenSet(false),
    m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String StartSpeakerSearchTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_voiceProfileDomainArnHasBeenSet)
  {
   payload.WithString("VoiceProfileDomainArn", m_voiceProfileDomainArn);

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




