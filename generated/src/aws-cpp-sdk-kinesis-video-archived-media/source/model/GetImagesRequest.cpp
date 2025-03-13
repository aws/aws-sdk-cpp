/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/GetImagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetImagesRequest::SerializePayload() const
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

  if(m_imageSelectorTypeHasBeenSet)
  {
   payload.WithString("ImageSelectorType", ImageSelectorTypeMapper::GetNameForImageSelectorType(m_imageSelectorType));
  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_endTimestampHasBeenSet)
  {
   payload.WithDouble("EndTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  if(m_samplingIntervalHasBeenSet)
  {
   payload.WithInteger("SamplingInterval", m_samplingInterval);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_formatConfigHasBeenSet)
  {
   JsonValue formatConfigJsonMap;
   for(auto& formatConfigItem : m_formatConfig)
   {
     formatConfigJsonMap.WithString(FormatConfigKeyMapper::GetNameForFormatConfigKey(formatConfigItem.first), formatConfigItem.second);
   }
   payload.WithObject("FormatConfig", std::move(formatConfigJsonMap));

  }

  if(m_widthPixelsHasBeenSet)
  {
   payload.WithInteger("WidthPixels", m_widthPixels);

  }

  if(m_heightPixelsHasBeenSet)
  {
   payload.WithInteger("HeightPixels", m_heightPixels);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInt64("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




