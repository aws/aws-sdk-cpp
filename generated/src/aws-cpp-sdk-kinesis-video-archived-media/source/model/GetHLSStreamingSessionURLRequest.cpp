/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/GetHLSStreamingSessionURLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetHLSStreamingSessionURLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_playbackModeHasBeenSet)
  {
   payload.WithString("PlaybackMode", HLSPlaybackModeMapper::GetNameForHLSPlaybackMode(m_playbackMode));
  }

  if(m_hLSFragmentSelectorHasBeenSet)
  {
   payload.WithObject("HLSFragmentSelector", m_hLSFragmentSelector.Jsonize());

  }

  if(m_containerFormatHasBeenSet)
  {
   payload.WithString("ContainerFormat", ContainerFormatMapper::GetNameForContainerFormat(m_containerFormat));
  }

  if(m_discontinuityModeHasBeenSet)
  {
   payload.WithString("DiscontinuityMode", HLSDiscontinuityModeMapper::GetNameForHLSDiscontinuityMode(m_discontinuityMode));
  }

  if(m_displayFragmentTimestampHasBeenSet)
  {
   payload.WithString("DisplayFragmentTimestamp", HLSDisplayFragmentTimestampMapper::GetNameForHLSDisplayFragmentTimestamp(m_displayFragmentTimestamp));
  }

  if(m_expiresHasBeenSet)
  {
   payload.WithInteger("Expires", m_expires);

  }

  if(m_maxMediaPlaylistFragmentResultsHasBeenSet)
  {
   payload.WithInt64("MaxMediaPlaylistFragmentResults", m_maxMediaPlaylistFragmentResults);

  }

  return payload.View().WriteReadable();
}




