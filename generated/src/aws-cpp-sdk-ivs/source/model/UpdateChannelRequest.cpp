/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/UpdateChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_authorizedHasBeenSet)
  {
   payload.WithBool("authorized", m_authorized);

  }

  if(m_containerFormatHasBeenSet)
  {
   payload.WithString("containerFormat", ContainerFormatMapper::GetNameForContainerFormat(m_containerFormat));
  }

  if(m_insecureIngestHasBeenSet)
  {
   payload.WithBool("insecureIngest", m_insecureIngest);

  }

  if(m_latencyModeHasBeenSet)
  {
   payload.WithString("latencyMode", ChannelLatencyModeMapper::GetNameForChannelLatencyMode(m_latencyMode));
  }

  if(m_multitrackInputConfigurationHasBeenSet)
  {
   payload.WithObject("multitrackInputConfiguration", m_multitrackInputConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_playbackRestrictionPolicyArnHasBeenSet)
  {
   payload.WithString("playbackRestrictionPolicyArn", m_playbackRestrictionPolicyArn);

  }

  if(m_presetHasBeenSet)
  {
   payload.WithString("preset", TranscodePresetMapper::GetNameForTranscodePreset(m_preset));
  }

  if(m_recordingConfigurationArnHasBeenSet)
  {
   payload.WithString("recordingConfigurationArn", m_recordingConfigurationArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ChannelTypeMapper::GetNameForChannelType(m_type));
  }

  return payload.View().WriteReadable();
}




