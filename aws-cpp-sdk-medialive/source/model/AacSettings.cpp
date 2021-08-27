/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AacSettings.h>
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

AacSettings::AacSettings() : 
    m_bitrate(0.0),
    m_bitrateHasBeenSet(false),
    m_codingMode(AacCodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_inputType(AacInputType::NOT_SET),
    m_inputTypeHasBeenSet(false),
    m_profile(AacProfile::NOT_SET),
    m_profileHasBeenSet(false),
    m_rateControlMode(AacRateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_rawFormat(AacRawFormat::NOT_SET),
    m_rawFormatHasBeenSet(false),
    m_sampleRate(0.0),
    m_sampleRateHasBeenSet(false),
    m_spec(AacSpec::NOT_SET),
    m_specHasBeenSet(false),
    m_vbrQuality(AacVbrQuality::NOT_SET),
    m_vbrQualityHasBeenSet(false)
{
}

AacSettings::AacSettings(JsonView jsonValue) : 
    m_bitrate(0.0),
    m_bitrateHasBeenSet(false),
    m_codingMode(AacCodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_inputType(AacInputType::NOT_SET),
    m_inputTypeHasBeenSet(false),
    m_profile(AacProfile::NOT_SET),
    m_profileHasBeenSet(false),
    m_rateControlMode(AacRateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_rawFormat(AacRawFormat::NOT_SET),
    m_rawFormatHasBeenSet(false),
    m_sampleRate(0.0),
    m_sampleRateHasBeenSet(false),
    m_spec(AacSpec::NOT_SET),
    m_specHasBeenSet(false),
    m_vbrQuality(AacVbrQuality::NOT_SET),
    m_vbrQualityHasBeenSet(false)
{
  *this = jsonValue;
}

AacSettings& AacSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetDouble("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codingMode"))
  {
    m_codingMode = AacCodingModeMapper::GetAacCodingModeForName(jsonValue.GetString("codingMode"));

    m_codingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputType"))
  {
    m_inputType = AacInputTypeMapper::GetAacInputTypeForName(jsonValue.GetString("inputType"));

    m_inputTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profile"))
  {
    m_profile = AacProfileMapper::GetAacProfileForName(jsonValue.GetString("profile"));

    m_profileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = AacRateControlModeMapper::GetAacRateControlModeForName(jsonValue.GetString("rateControlMode"));

    m_rateControlModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rawFormat"))
  {
    m_rawFormat = AacRawFormatMapper::GetAacRawFormatForName(jsonValue.GetString("rawFormat"));

    m_rawFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetDouble("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spec"))
  {
    m_spec = AacSpecMapper::GetAacSpecForName(jsonValue.GetString("spec"));

    m_specHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vbrQuality"))
  {
    m_vbrQuality = AacVbrQualityMapper::GetAacVbrQualityForName(jsonValue.GetString("vbrQuality"));

    m_vbrQualityHasBeenSet = true;
  }

  return *this;
}

JsonValue AacSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateHasBeenSet)
  {
   payload.WithDouble("bitrate", m_bitrate);

  }

  if(m_codingModeHasBeenSet)
  {
   payload.WithString("codingMode", AacCodingModeMapper::GetNameForAacCodingMode(m_codingMode));
  }

  if(m_inputTypeHasBeenSet)
  {
   payload.WithString("inputType", AacInputTypeMapper::GetNameForAacInputType(m_inputType));
  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", AacProfileMapper::GetNameForAacProfile(m_profile));
  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", AacRateControlModeMapper::GetNameForAacRateControlMode(m_rateControlMode));
  }

  if(m_rawFormatHasBeenSet)
  {
   payload.WithString("rawFormat", AacRawFormatMapper::GetNameForAacRawFormat(m_rawFormat));
  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithDouble("sampleRate", m_sampleRate);

  }

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", AacSpecMapper::GetNameForAacSpec(m_spec));
  }

  if(m_vbrQualityHasBeenSet)
  {
   payload.WithString("vbrQuality", AacVbrQualityMapper::GetNameForAacVbrQuality(m_vbrQuality));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
