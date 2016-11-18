/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/model/JobOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

JobOutput::JobOutput() : 
    m_idHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_thumbnailPatternHasBeenSet(false),
    m_thumbnailEncryptionHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_presetIdHasBeenSet(false),
    m_segmentDurationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDetailHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_fileSize(0),
    m_fileSizeHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_watermarksHasBeenSet(false),
    m_albumArtHasBeenSet(false),
    m_compositionHasBeenSet(false),
    m_captionsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_appliedColorSpaceConversionHasBeenSet(false)
{
}

JobOutput::JobOutput(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_thumbnailPatternHasBeenSet(false),
    m_thumbnailEncryptionHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_presetIdHasBeenSet(false),
    m_segmentDurationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDetailHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_fileSize(0),
    m_fileSizeHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_watermarksHasBeenSet(false),
    m_albumArtHasBeenSet(false),
    m_compositionHasBeenSet(false),
    m_captionsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_appliedColorSpaceConversionHasBeenSet(false)
{
  *this = jsonValue;
}

JobOutput& JobOutput::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThumbnailPattern"))
  {
    m_thumbnailPattern = jsonValue.GetString("ThumbnailPattern");

    m_thumbnailPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThumbnailEncryption"))
  {
    m_thumbnailEncryption = jsonValue.GetObject("ThumbnailEncryption");

    m_thumbnailEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rotate"))
  {
    m_rotate = jsonValue.GetString("Rotate");

    m_rotateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PresetId"))
  {
    m_presetId = jsonValue.GetString("PresetId");

    m_presetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentDuration"))
  {
    m_segmentDuration = jsonValue.GetString("SegmentDuration");

    m_segmentDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDetail"))
  {
    m_statusDetail = jsonValue.GetString("StatusDetail");

    m_statusDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Width"))
  {
    m_width = jsonValue.GetInteger("Width");

    m_widthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Height"))
  {
    m_height = jsonValue.GetInteger("Height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameRate"))
  {
    m_frameRate = jsonValue.GetString("FrameRate");

    m_frameRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSize"))
  {
    m_fileSize = jsonValue.GetInt64("FileSize");

    m_fileSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationMillis"))
  {
    m_durationMillis = jsonValue.GetInt64("DurationMillis");

    m_durationMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Watermarks"))
  {
    Array<JsonValue> watermarksJsonList = jsonValue.GetArray("Watermarks");
    for(unsigned watermarksIndex = 0; watermarksIndex < watermarksJsonList.GetLength(); ++watermarksIndex)
    {
      m_watermarks.push_back(watermarksJsonList[watermarksIndex].AsObject());
    }
    m_watermarksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlbumArt"))
  {
    m_albumArt = jsonValue.GetObject("AlbumArt");

    m_albumArtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Composition"))
  {
    Array<JsonValue> compositionJsonList = jsonValue.GetArray("Composition");
    for(unsigned compositionIndex = 0; compositionIndex < compositionJsonList.GetLength(); ++compositionIndex)
    {
      m_composition.push_back(compositionJsonList[compositionIndex].AsObject());
    }
    m_compositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Captions"))
  {
    m_captions = jsonValue.GetObject("Captions");

    m_captionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppliedColorSpaceConversion"))
  {
    m_appliedColorSpaceConversion = jsonValue.GetString("AppliedColorSpaceConversion");

    m_appliedColorSpaceConversionHasBeenSet = true;
  }

  return *this;
}

JsonValue JobOutput::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_thumbnailPatternHasBeenSet)
  {
   payload.WithString("ThumbnailPattern", m_thumbnailPattern);

  }

  if(m_thumbnailEncryptionHasBeenSet)
  {
   payload.WithObject("ThumbnailEncryption", m_thumbnailEncryption.Jsonize());

  }

  if(m_rotateHasBeenSet)
  {
   payload.WithString("Rotate", m_rotate);

  }

  if(m_presetIdHasBeenSet)
  {
   payload.WithString("PresetId", m_presetId);

  }

  if(m_segmentDurationHasBeenSet)
  {
   payload.WithString("SegmentDuration", m_segmentDuration);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_statusDetailHasBeenSet)
  {
   payload.WithString("StatusDetail", m_statusDetail);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("Width", m_width);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("Height", m_height);

  }

  if(m_frameRateHasBeenSet)
  {
   payload.WithString("FrameRate", m_frameRate);

  }

  if(m_fileSizeHasBeenSet)
  {
   payload.WithInt64("FileSize", m_fileSize);

  }

  if(m_durationMillisHasBeenSet)
  {
   payload.WithInt64("DurationMillis", m_durationMillis);

  }

  if(m_watermarksHasBeenSet)
  {
   Array<JsonValue> watermarksJsonList(m_watermarks.size());
   for(unsigned watermarksIndex = 0; watermarksIndex < watermarksJsonList.GetLength(); ++watermarksIndex)
   {
     watermarksJsonList[watermarksIndex].AsObject(m_watermarks[watermarksIndex].Jsonize());
   }
   payload.WithArray("Watermarks", std::move(watermarksJsonList));

  }

  if(m_albumArtHasBeenSet)
  {
   payload.WithObject("AlbumArt", m_albumArt.Jsonize());

  }

  if(m_compositionHasBeenSet)
  {
   Array<JsonValue> compositionJsonList(m_composition.size());
   for(unsigned compositionIndex = 0; compositionIndex < compositionJsonList.GetLength(); ++compositionIndex)
   {
     compositionJsonList[compositionIndex].AsObject(m_composition[compositionIndex].Jsonize());
   }
   payload.WithArray("Composition", std::move(compositionJsonList));

  }

  if(m_captionsHasBeenSet)
  {
   payload.WithObject("Captions", m_captions.Jsonize());

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("Encryption", m_encryption.Jsonize());

  }

  if(m_appliedColorSpaceConversionHasBeenSet)
  {
   payload.WithString("AppliedColorSpaceConversion", m_appliedColorSpaceConversion);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws