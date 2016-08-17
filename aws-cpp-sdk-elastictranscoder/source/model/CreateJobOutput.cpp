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
#include <aws/elastictranscoder/model/CreateJobOutput.h>
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

CreateJobOutput::CreateJobOutput() : 
    m_keyHasBeenSet(false),
    m_thumbnailPatternHasBeenSet(false),
    m_thumbnailEncryptionHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_presetIdHasBeenSet(false),
    m_segmentDurationHasBeenSet(false),
    m_watermarksHasBeenSet(false),
    m_albumArtHasBeenSet(false),
    m_compositionHasBeenSet(false),
    m_captionsHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

CreateJobOutput::CreateJobOutput(const JsonValue& jsonValue) : 
    m_keyHasBeenSet(false),
    m_thumbnailPatternHasBeenSet(false),
    m_thumbnailEncryptionHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_presetIdHasBeenSet(false),
    m_segmentDurationHasBeenSet(false),
    m_watermarksHasBeenSet(false),
    m_albumArtHasBeenSet(false),
    m_compositionHasBeenSet(false),
    m_captionsHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
  *this = jsonValue;
}

CreateJobOutput& CreateJobOutput::operator =(const JsonValue& jsonValue)
{
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

  return *this;
}

JsonValue CreateJobOutput::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws