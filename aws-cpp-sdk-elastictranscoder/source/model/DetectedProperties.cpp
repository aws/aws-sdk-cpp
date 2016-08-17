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

DetectedProperties::DetectedProperties(const JsonValue& jsonValue) : 
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

DetectedProperties& DetectedProperties::operator =(const JsonValue& jsonValue)
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