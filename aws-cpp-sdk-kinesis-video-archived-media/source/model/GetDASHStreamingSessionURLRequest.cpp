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

#include <aws/kinesis-video-archived-media/model/GetDASHStreamingSessionURLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDASHStreamingSessionURLRequest::GetDASHStreamingSessionURLRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_playbackMode(DASHPlaybackMode::NOT_SET),
    m_playbackModeHasBeenSet(false),
    m_displayFragmentTimestamp(DASHDisplayFragmentTimestamp::NOT_SET),
    m_displayFragmentTimestampHasBeenSet(false),
    m_displayFragmentNumber(DASHDisplayFragmentNumber::NOT_SET),
    m_displayFragmentNumberHasBeenSet(false),
    m_dASHFragmentSelectorHasBeenSet(false),
    m_expires(0),
    m_expiresHasBeenSet(false),
    m_maxManifestFragmentResults(0),
    m_maxManifestFragmentResultsHasBeenSet(false)
{
}

Aws::String GetDASHStreamingSessionURLRequest::SerializePayload() const
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
   payload.WithString("PlaybackMode", DASHPlaybackModeMapper::GetNameForDASHPlaybackMode(m_playbackMode));
  }

  if(m_displayFragmentTimestampHasBeenSet)
  {
   payload.WithString("DisplayFragmentTimestamp", DASHDisplayFragmentTimestampMapper::GetNameForDASHDisplayFragmentTimestamp(m_displayFragmentTimestamp));
  }

  if(m_displayFragmentNumberHasBeenSet)
  {
   payload.WithString("DisplayFragmentNumber", DASHDisplayFragmentNumberMapper::GetNameForDASHDisplayFragmentNumber(m_displayFragmentNumber));
  }

  if(m_dASHFragmentSelectorHasBeenSet)
  {
   payload.WithObject("DASHFragmentSelector", m_dASHFragmentSelector.Jsonize());

  }

  if(m_expiresHasBeenSet)
  {
   payload.WithInteger("Expires", m_expires);

  }

  if(m_maxManifestFragmentResultsHasBeenSet)
  {
   payload.WithInt64("MaxManifestFragmentResults", m_maxManifestFragmentResults);

  }

  return payload.View().WriteReadable();
}




