/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Ac3Settings.h>
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

Ac3Settings::Ac3Settings() : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bitstreamMode(Ac3BitstreamMode::NOT_SET),
    m_bitstreamModeHasBeenSet(false),
    m_codingMode(Ac3CodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_dialnorm(0),
    m_dialnormHasBeenSet(false),
    m_dynamicRangeCompressionProfile(Ac3DynamicRangeCompressionProfile::NOT_SET),
    m_dynamicRangeCompressionProfileHasBeenSet(false),
    m_lfeFilter(Ac3LfeFilter::NOT_SET),
    m_lfeFilterHasBeenSet(false),
    m_metadataControl(Ac3MetadataControl::NOT_SET),
    m_metadataControlHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false)
{
}

Ac3Settings::Ac3Settings(JsonView jsonValue) : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bitstreamMode(Ac3BitstreamMode::NOT_SET),
    m_bitstreamModeHasBeenSet(false),
    m_codingMode(Ac3CodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_dialnorm(0),
    m_dialnormHasBeenSet(false),
    m_dynamicRangeCompressionProfile(Ac3DynamicRangeCompressionProfile::NOT_SET),
    m_dynamicRangeCompressionProfileHasBeenSet(false),
    m_lfeFilter(Ac3LfeFilter::NOT_SET),
    m_lfeFilterHasBeenSet(false),
    m_metadataControl(Ac3MetadataControl::NOT_SET),
    m_metadataControlHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false)
{
  *this = jsonValue;
}

Ac3Settings& Ac3Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitstreamMode"))
  {
    m_bitstreamMode = Ac3BitstreamModeMapper::GetAc3BitstreamModeForName(jsonValue.GetString("bitstreamMode"));

    m_bitstreamModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codingMode"))
  {
    m_codingMode = Ac3CodingModeMapper::GetAc3CodingModeForName(jsonValue.GetString("codingMode"));

    m_codingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dialnorm"))
  {
    m_dialnorm = jsonValue.GetInteger("dialnorm");

    m_dialnormHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamicRangeCompressionProfile"))
  {
    m_dynamicRangeCompressionProfile = Ac3DynamicRangeCompressionProfileMapper::GetAc3DynamicRangeCompressionProfileForName(jsonValue.GetString("dynamicRangeCompressionProfile"));

    m_dynamicRangeCompressionProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lfeFilter"))
  {
    m_lfeFilter = Ac3LfeFilterMapper::GetAc3LfeFilterForName(jsonValue.GetString("lfeFilter"));

    m_lfeFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadataControl"))
  {
    m_metadataControl = Ac3MetadataControlMapper::GetAc3MetadataControlForName(jsonValue.GetString("metadataControl"));

    m_metadataControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  return *this;
}

JsonValue Ac3Settings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_bitstreamModeHasBeenSet)
  {
   payload.WithString("bitstreamMode", Ac3BitstreamModeMapper::GetNameForAc3BitstreamMode(m_bitstreamMode));
  }

  if(m_codingModeHasBeenSet)
  {
   payload.WithString("codingMode", Ac3CodingModeMapper::GetNameForAc3CodingMode(m_codingMode));
  }

  if(m_dialnormHasBeenSet)
  {
   payload.WithInteger("dialnorm", m_dialnorm);

  }

  if(m_dynamicRangeCompressionProfileHasBeenSet)
  {
   payload.WithString("dynamicRangeCompressionProfile", Ac3DynamicRangeCompressionProfileMapper::GetNameForAc3DynamicRangeCompressionProfile(m_dynamicRangeCompressionProfile));
  }

  if(m_lfeFilterHasBeenSet)
  {
   payload.WithString("lfeFilter", Ac3LfeFilterMapper::GetNameForAc3LfeFilter(m_lfeFilter));
  }

  if(m_metadataControlHasBeenSet)
  {
   payload.WithString("metadataControl", Ac3MetadataControlMapper::GetNameForAc3MetadataControl(m_metadataControl));
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
