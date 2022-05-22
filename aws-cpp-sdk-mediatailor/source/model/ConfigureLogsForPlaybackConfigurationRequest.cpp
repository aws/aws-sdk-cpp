/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ConfigureLogsForPlaybackConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfigureLogsForPlaybackConfigurationRequest::ConfigureLogsForPlaybackConfigurationRequest() : 
    m_percentEnabled(0),
    m_percentEnabledHasBeenSet(false),
    m_playbackConfigurationNameHasBeenSet(false)
{
}

Aws::String ConfigureLogsForPlaybackConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_percentEnabledHasBeenSet)
  {
   payload.WithInteger("PercentEnabled", m_percentEnabled);

  }

  if(m_playbackConfigurationNameHasBeenSet)
  {
   payload.WithString("PlaybackConfigurationName", m_playbackConfigurationName);

  }

  return payload.View().WriteReadable();
}




