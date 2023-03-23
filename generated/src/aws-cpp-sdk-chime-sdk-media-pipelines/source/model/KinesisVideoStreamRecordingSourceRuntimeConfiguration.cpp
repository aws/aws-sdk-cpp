/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamRecordingSourceRuntimeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

KinesisVideoStreamRecordingSourceRuntimeConfiguration::KinesisVideoStreamRecordingSourceRuntimeConfiguration() : 
    m_streamsHasBeenSet(false),
    m_fragmentSelectorHasBeenSet(false)
{
}

KinesisVideoStreamRecordingSourceRuntimeConfiguration::KinesisVideoStreamRecordingSourceRuntimeConfiguration(JsonView jsonValue) : 
    m_streamsHasBeenSet(false),
    m_fragmentSelectorHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisVideoStreamRecordingSourceRuntimeConfiguration& KinesisVideoStreamRecordingSourceRuntimeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Streams"))
  {
    Aws::Utils::Array<JsonView> streamsJsonList = jsonValue.GetArray("Streams");
    for(unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex)
    {
      m_streams.push_back(streamsJsonList[streamsIndex].AsObject());
    }
    m_streamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FragmentSelector"))
  {
    m_fragmentSelector = jsonValue.GetObject("FragmentSelector");

    m_fragmentSelectorHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisVideoStreamRecordingSourceRuntimeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streamsJsonList(m_streams.size());
   for(unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex)
   {
     streamsJsonList[streamsIndex].AsObject(m_streams[streamsIndex].Jsonize());
   }
   payload.WithArray("Streams", std::move(streamsJsonList));

  }

  if(m_fragmentSelectorHasBeenSet)
  {
   payload.WithObject("FragmentSelector", m_fragmentSelector.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
