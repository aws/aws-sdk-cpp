/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kinesis-video-archived-media/model/GetHLSStreamingSessionURLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetHLSStreamingSessionURLRequest::GetHLSStreamingSessionURLRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_playbackMode(HLSPlaybackMode::NOT_SET),
    m_playbackModeHasBeenSet(false),
    m_hLSFragmentSelectorHasBeenSet(false),
    m_containerFormat(ContainerFormat::NOT_SET),
    m_containerFormatHasBeenSet(false),
    m_discontinuityMode(HLSDiscontinuityMode::NOT_SET),
    m_discontinuityModeHasBeenSet(false),
    m_displayFragmentTimestamp(HLSDisplayFragmentTimestamp::NOT_SET),
    m_displayFragmentTimestampHasBeenSet(false),
    m_expires(0),
    m_expiresHasBeenSet(false),
    m_maxMediaPlaylistFragmentResults(0),
    m_maxMediaPlaylistFragmentResultsHasBeenSet(false)
{
}

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




