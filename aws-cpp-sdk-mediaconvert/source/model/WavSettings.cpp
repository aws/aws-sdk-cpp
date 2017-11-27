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

#include <aws/mediaconvert/model/WavSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

WavSettings::WavSettings() : 
    m_bitDepth(0),
    m_bitDepthHasBeenSet(false),
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false)
{
}

WavSettings::WavSettings(const JsonValue& jsonValue) : 
    m_bitDepth(0),
    m_bitDepthHasBeenSet(false),
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false)
{
  *this = jsonValue;
}

WavSettings& WavSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("bitDepth"))
  {
    m_bitDepth = jsonValue.GetInteger("bitDepth");

    m_bitDepthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channels"))
  {
    m_channels = jsonValue.GetInteger("channels");

    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  return *this;
}

JsonValue WavSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bitDepthHasBeenSet)
  {
   payload.WithInteger("bitDepth", m_bitDepth);

  }

  if(m_channelsHasBeenSet)
  {
   payload.WithInteger("channels", m_channels);

  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInteger("sampleRate", m_sampleRate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
