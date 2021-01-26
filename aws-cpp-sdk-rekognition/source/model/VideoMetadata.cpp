/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/VideoMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

VideoMetadata::VideoMetadata() : 
    m_codecHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_frameRate(0.0),
    m_frameRateHasBeenSet(false),
    m_frameHeight(0),
    m_frameHeightHasBeenSet(false),
    m_frameWidth(0),
    m_frameWidthHasBeenSet(false)
{
}

VideoMetadata::VideoMetadata(JsonView jsonValue) : 
    m_codecHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_frameRate(0.0),
    m_frameRateHasBeenSet(false),
    m_frameHeight(0),
    m_frameHeightHasBeenSet(false),
    m_frameWidth(0),
    m_frameWidthHasBeenSet(false)
{
  *this = jsonValue;
}

VideoMetadata& VideoMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Codec"))
  {
    m_codec = jsonValue.GetString("Codec");

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationMillis"))
  {
    m_durationMillis = jsonValue.GetInt64("DurationMillis");

    m_durationMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameRate"))
  {
    m_frameRate = jsonValue.GetDouble("FrameRate");

    m_frameRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameHeight"))
  {
    m_frameHeight = jsonValue.GetInt64("FrameHeight");

    m_frameHeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameWidth"))
  {
    m_frameWidth = jsonValue.GetInt64("FrameWidth");

    m_frameWidthHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_codecHasBeenSet)
  {
   payload.WithString("Codec", m_codec);

  }

  if(m_durationMillisHasBeenSet)
  {
   payload.WithInt64("DurationMillis", m_durationMillis);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_frameRateHasBeenSet)
  {
   payload.WithDouble("FrameRate", m_frameRate);

  }

  if(m_frameHeightHasBeenSet)
  {
   payload.WithInt64("FrameHeight", m_frameHeight);

  }

  if(m_frameWidthHasBeenSet)
  {
   payload.WithInt64("FrameWidth", m_frameWidth);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
