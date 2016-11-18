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
#include <aws/elastictranscoder/model/JobInput.h>
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

JobInput::JobInput() : 
    m_keyHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_interlacedHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_detectedPropertiesHasBeenSet(false)
{
}

JobInput::JobInput(const JsonValue& jsonValue) : 
    m_keyHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_interlacedHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_detectedPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

JobInput& JobInput::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameRate"))
  {
    m_frameRate = jsonValue.GetString("FrameRate");

    m_frameRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resolution"))
  {
    m_resolution = jsonValue.GetString("Resolution");

    m_resolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AspectRatio"))
  {
    m_aspectRatio = jsonValue.GetString("AspectRatio");

    m_aspectRatioHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interlaced"))
  {
    m_interlaced = jsonValue.GetString("Interlaced");

    m_interlacedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Container"))
  {
    m_container = jsonValue.GetString("Container");

    m_containerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetectedProperties"))
  {
    m_detectedProperties = jsonValue.GetObject("DetectedProperties");

    m_detectedPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue JobInput::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_frameRateHasBeenSet)
  {
   payload.WithString("FrameRate", m_frameRate);

  }

  if(m_resolutionHasBeenSet)
  {
   payload.WithString("Resolution", m_resolution);

  }

  if(m_aspectRatioHasBeenSet)
  {
   payload.WithString("AspectRatio", m_aspectRatio);

  }

  if(m_interlacedHasBeenSet)
  {
   payload.WithString("Interlaced", m_interlaced);

  }

  if(m_containerHasBeenSet)
  {
   payload.WithString("Container", m_container);

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("Encryption", m_encryption.Jsonize());

  }

  if(m_detectedPropertiesHasBeenSet)
  {
   payload.WithObject("DetectedProperties", m_detectedProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws