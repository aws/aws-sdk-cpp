/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/DetectedProperties.h>
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

DetectedProperties::DetectedProperties() : 
    m_width(0),
    m_widthHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_fileSize(0),
    m_fileSizeHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false)
{
}

DetectedProperties::DetectedProperties(JsonView jsonValue) : 
    m_width(0),
    m_widthHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_fileSize(0),
    m_fileSizeHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedProperties& DetectedProperties::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue DetectedProperties::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
