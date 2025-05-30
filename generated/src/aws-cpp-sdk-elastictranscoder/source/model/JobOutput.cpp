﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

JobOutput::JobOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

JobOutput& JobOutput::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> watermarksJsonList = jsonValue.GetArray("Watermarks");
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
   Aws::Utils::Array<JsonValue> watermarksJsonList(m_watermarks.size());
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
