/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/medialive/model/InputSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputSpecification::InputSpecification() : 
    m_codec(InputCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_maximumBitrate(InputMaximumBitrate::NOT_SET),
    m_maximumBitrateHasBeenSet(false),
    m_resolution(InputResolution::NOT_SET),
    m_resolutionHasBeenSet(false)
{
}

InputSpecification::InputSpecification(const JsonValue& jsonValue) : 
    m_codec(InputCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_maximumBitrate(InputMaximumBitrate::NOT_SET),
    m_maximumBitrateHasBeenSet(false),
    m_resolution(InputResolution::NOT_SET),
    m_resolutionHasBeenSet(false)
{
  *this = jsonValue;
}

InputSpecification& InputSpecification::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("codec"))
  {
    m_codec = InputCodecMapper::GetInputCodecForName(jsonValue.GetString("codec"));

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumBitrate"))
  {
    m_maximumBitrate = InputMaximumBitrateMapper::GetInputMaximumBitrateForName(jsonValue.GetString("maximumBitrate"));

    m_maximumBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolution"))
  {
    m_resolution = InputResolutionMapper::GetInputResolutionForName(jsonValue.GetString("resolution"));

    m_resolutionHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_codecHasBeenSet)
  {
   payload.WithString("codec", InputCodecMapper::GetNameForInputCodec(m_codec));
  }

  if(m_maximumBitrateHasBeenSet)
  {
   payload.WithString("maximumBitrate", InputMaximumBitrateMapper::GetNameForInputMaximumBitrate(m_maximumBitrate));
  }

  if(m_resolutionHasBeenSet)
  {
   payload.WithString("resolution", InputResolutionMapper::GetNameForInputResolution(m_resolution));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
