/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Mp2Settings::Mp2Settings(JsonView jsonValue) : 
    m_bitrate(0.0),
    m_bitrateHasBeenSet(false),
    m_codingMode(Mp2CodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_sampleRate(0.0),
    m_sampleRateHasBeenSet(false)
{
  *this = jsonValue;
}

Mp2Settings& Mp2Settings::operator =(JsonView jsonValue)
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
