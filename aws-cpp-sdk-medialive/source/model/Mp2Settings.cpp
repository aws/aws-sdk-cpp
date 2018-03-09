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

#include <aws/medialive/model/Mp2Settings.h>
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

Mp2Settings::Mp2Settings() : 
    m_bitrate(0.0),
    m_bitrateHasBeenSet(false),
    m_codingMode(Mp2CodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_sampleRate(0.0),
    m_sampleRateHasBeenSet(false)
{
}

Mp2Settings::Mp2Settings(const JsonValue& jsonValue) : 
    m_bitrate(0.0),
    m_bitrateHasBeenSet(false),
    m_codingMode(Mp2CodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_sampleRate(0.0),
    m_sampleRateHasBeenSet(false)
{
  *this = jsonValue;
}

Mp2Settings& Mp2Settings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetDouble("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codingMode"))
  {
    m_codingMode = Mp2CodingModeMapper::GetMp2CodingModeForName(jsonValue.GetString("codingMode"));

    m_codingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetDouble("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  return *this;
}

JsonValue Mp2Settings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateHasBeenSet)
  {
   payload.WithDouble("bitrate", m_bitrate);

  }

  if(m_codingModeHasBeenSet)
  {
   payload.WithString("codingMode", Mp2CodingModeMapper::GetNameForMp2CodingMode(m_codingMode));
  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithDouble("sampleRate", m_sampleRate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
