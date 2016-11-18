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
#include <aws/elastictranscoder/model/VideoParameters.h>
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

VideoParameters::VideoParameters() : 
    m_codecHasBeenSet(false),
    m_codecOptionsHasBeenSet(false),
    m_keyframesMaxDistHasBeenSet(false),
    m_fixedGOPHasBeenSet(false),
    m_bitRateHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_maxFrameRateHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_maxWidthHasBeenSet(false),
    m_maxHeightHasBeenSet(false),
    m_displayAspectRatioHasBeenSet(false),
    m_sizingPolicyHasBeenSet(false),
    m_paddingPolicyHasBeenSet(false),
    m_watermarksHasBeenSet(false)
{
}

VideoParameters::VideoParameters(const JsonValue& jsonValue) : 
    m_codecHasBeenSet(false),
    m_codecOptionsHasBeenSet(false),
    m_keyframesMaxDistHasBeenSet(false),
    m_fixedGOPHasBeenSet(false),
    m_bitRateHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_maxFrameRateHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_maxWidthHasBeenSet(false),
    m_maxHeightHasBeenSet(false),
    m_displayAspectRatioHasBeenSet(false),
    m_sizingPolicyHasBeenSet(false),
    m_paddingPolicyHasBeenSet(false),
    m_watermarksHasBeenSet(false)
{
  *this = jsonValue;
}

VideoParameters& VideoParameters::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Codec"))
  {
    m_codec = jsonValue.GetString("Codec");

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodecOptions"))
  {
    Aws::Map<Aws::String, JsonValue> codecOptionsJsonMap = jsonValue.GetObject("CodecOptions").GetAllObjects();
    for(auto& codecOptionsItem : codecOptionsJsonMap)
    {
      m_codecOptions[codecOptionsItem.first] = codecOptionsItem.second.AsString();
    }
    m_codecOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyframesMaxDist"))
  {
    m_keyframesMaxDist = jsonValue.GetString("KeyframesMaxDist");

    m_keyframesMaxDistHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FixedGOP"))
  {
    m_fixedGOP = jsonValue.GetString("FixedGOP");

    m_fixedGOPHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BitRate"))
  {
    m_bitRate = jsonValue.GetString("BitRate");

    m_bitRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameRate"))
  {
    m_frameRate = jsonValue.GetString("FrameRate");

    m_frameRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFrameRate"))
  {
    m_maxFrameRate = jsonValue.GetString("MaxFrameRate");

    m_maxFrameRateHasBeenSet = true;
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

  if(jsonValue.ValueExists("MaxWidth"))
  {
    m_maxWidth = jsonValue.GetString("MaxWidth");

    m_maxWidthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxHeight"))
  {
    m_maxHeight = jsonValue.GetString("MaxHeight");

    m_maxHeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayAspectRatio"))
  {
    m_displayAspectRatio = jsonValue.GetString("DisplayAspectRatio");

    m_displayAspectRatioHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizingPolicy"))
  {
    m_sizingPolicy = jsonValue.GetString("SizingPolicy");

    m_sizingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaddingPolicy"))
  {
    m_paddingPolicy = jsonValue.GetString("PaddingPolicy");

    m_paddingPolicyHasBeenSet = true;
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

  return *this;
}

JsonValue VideoParameters::Jsonize() const
{
  JsonValue payload;

  if(m_codecHasBeenSet)
  {
   payload.WithString("Codec", m_codec);

  }

  if(m_codecOptionsHasBeenSet)
  {
   JsonValue codecOptionsJsonMap;
   for(auto& codecOptionsItem : m_codecOptions)
   {
     codecOptionsJsonMap.WithString(codecOptionsItem.first, codecOptionsItem.second);
   }
   payload.WithObject("CodecOptions", std::move(codecOptionsJsonMap));

  }

  if(m_keyframesMaxDistHasBeenSet)
  {
   payload.WithString("KeyframesMaxDist", m_keyframesMaxDist);

  }

  if(m_fixedGOPHasBeenSet)
  {
   payload.WithString("FixedGOP", m_fixedGOP);

  }

  if(m_bitRateHasBeenSet)
  {
   payload.WithString("BitRate", m_bitRate);

  }

  if(m_frameRateHasBeenSet)
  {
   payload.WithString("FrameRate", m_frameRate);

  }

  if(m_maxFrameRateHasBeenSet)
  {
   payload.WithString("MaxFrameRate", m_maxFrameRate);

  }

  if(m_resolutionHasBeenSet)
  {
   payload.WithString("Resolution", m_resolution);

  }

  if(m_aspectRatioHasBeenSet)
  {
   payload.WithString("AspectRatio", m_aspectRatio);

  }

  if(m_maxWidthHasBeenSet)
  {
   payload.WithString("MaxWidth", m_maxWidth);

  }

  if(m_maxHeightHasBeenSet)
  {
   payload.WithString("MaxHeight", m_maxHeight);

  }

  if(m_displayAspectRatioHasBeenSet)
  {
   payload.WithString("DisplayAspectRatio", m_displayAspectRatio);

  }

  if(m_sizingPolicyHasBeenSet)
  {
   payload.WithString("SizingPolicy", m_sizingPolicy);

  }

  if(m_paddingPolicyHasBeenSet)
  {
   payload.WithString("PaddingPolicy", m_paddingPolicy);

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

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws