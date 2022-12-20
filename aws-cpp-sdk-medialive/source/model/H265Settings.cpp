/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265Settings.h>
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

H265Settings::H265Settings() : 
    m_adaptiveQuantization(H265AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_afdSignaling(AfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_alternativeTransferFunction(H265AlternativeTransferFunction::NOT_SET),
    m_alternativeTransferFunctionHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bufSize(0),
    m_bufSizeHasBeenSet(false),
    m_colorMetadata(H265ColorMetadata::NOT_SET),
    m_colorMetadataHasBeenSet(false),
    m_colorSpaceSettingsHasBeenSet(false),
    m_filterSettingsHasBeenSet(false),
    m_fixedAfd(FixedAfd::NOT_SET),
    m_fixedAfdHasBeenSet(false),
    m_flickerAq(H265FlickerAq::NOT_SET),
    m_flickerAqHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(H265GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_level(H265Level::NOT_SET),
    m_levelHasBeenSet(false),
    m_lookAheadRateControl(H265LookAheadRateControl::NOT_SET),
    m_lookAheadRateControlHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_minIInterval(0),
    m_minIIntervalHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_profile(H265Profile::NOT_SET),
    m_profileHasBeenSet(false),
    m_qvbrQualityLevel(0),
    m_qvbrQualityLevelHasBeenSet(false),
    m_rateControlMode(H265RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_scanType(H265ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_sceneChangeDetect(H265SceneChangeDetect::NOT_SET),
    m_sceneChangeDetectHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_tier(H265Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_timecodeInsertion(H265TimecodeInsertionBehavior::NOT_SET),
    m_timecodeInsertionHasBeenSet(false),
    m_timecodeBurninSettingsHasBeenSet(false)
{
}

H265Settings::H265Settings(JsonView jsonValue) : 
    m_adaptiveQuantization(H265AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_afdSignaling(AfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_alternativeTransferFunction(H265AlternativeTransferFunction::NOT_SET),
    m_alternativeTransferFunctionHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bufSize(0),
    m_bufSizeHasBeenSet(false),
    m_colorMetadata(H265ColorMetadata::NOT_SET),
    m_colorMetadataHasBeenSet(false),
    m_colorSpaceSettingsHasBeenSet(false),
    m_filterSettingsHasBeenSet(false),
    m_fixedAfd(FixedAfd::NOT_SET),
    m_fixedAfdHasBeenSet(false),
    m_flickerAq(H265FlickerAq::NOT_SET),
    m_flickerAqHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(H265GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_level(H265Level::NOT_SET),
    m_levelHasBeenSet(false),
    m_lookAheadRateControl(H265LookAheadRateControl::NOT_SET),
    m_lookAheadRateControlHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_minIInterval(0),
    m_minIIntervalHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_profile(H265Profile::NOT_SET),
    m_profileHasBeenSet(false),
    m_qvbrQualityLevel(0),
    m_qvbrQualityLevelHasBeenSet(false),
    m_rateControlMode(H265RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_scanType(H265ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_sceneChangeDetect(H265SceneChangeDetect::NOT_SET),
    m_sceneChangeDetectHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_tier(H265Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_timecodeInsertion(H265TimecodeInsertionBehavior::NOT_SET),
    m_timecodeInsertionHasBeenSet(false),
    m_timecodeBurninSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

H265Settings& H265Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adaptiveQuantization"))
  {
    m_adaptiveQuantization = H265AdaptiveQuantizationMapper::GetH265AdaptiveQuantizationForName(jsonValue.GetString("adaptiveQuantization"));

    m_adaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afdSignaling"))
  {
    m_afdSignaling = AfdSignalingMapper::GetAfdSignalingForName(jsonValue.GetString("afdSignaling"));

    m_afdSignalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alternativeTransferFunction"))
  {
    m_alternativeTransferFunction = H265AlternativeTransferFunctionMapper::GetH265AlternativeTransferFunctionForName(jsonValue.GetString("alternativeTransferFunction"));

    m_alternativeTransferFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bufSize"))
  {
    m_bufSize = jsonValue.GetInteger("bufSize");

    m_bufSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorMetadata"))
  {
    m_colorMetadata = H265ColorMetadataMapper::GetH265ColorMetadataForName(jsonValue.GetString("colorMetadata"));

    m_colorMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorSpaceSettings"))
  {
    m_colorSpaceSettings = jsonValue.GetObject("colorSpaceSettings");

    m_colorSpaceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterSettings"))
  {
    m_filterSettings = jsonValue.GetObject("filterSettings");

    m_filterSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fixedAfd"))
  {
    m_fixedAfd = FixedAfdMapper::GetFixedAfdForName(jsonValue.GetString("fixedAfd"));

    m_fixedAfdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flickerAq"))
  {
    m_flickerAq = H265FlickerAqMapper::GetH265FlickerAqForName(jsonValue.GetString("flickerAq"));

    m_flickerAqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateDenominator"))
  {
    m_framerateDenominator = jsonValue.GetInteger("framerateDenominator");

    m_framerateDenominatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateNumerator"))
  {
    m_framerateNumerator = jsonValue.GetInteger("framerateNumerator");

    m_framerateNumeratorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopClosedCadence"))
  {
    m_gopClosedCadence = jsonValue.GetInteger("gopClosedCadence");

    m_gopClosedCadenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopSize"))
  {
    m_gopSize = jsonValue.GetDouble("gopSize");

    m_gopSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopSizeUnits"))
  {
    m_gopSizeUnits = H265GopSizeUnitsMapper::GetH265GopSizeUnitsForName(jsonValue.GetString("gopSizeUnits"));

    m_gopSizeUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("level"))
  {
    m_level = H265LevelMapper::GetH265LevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lookAheadRateControl"))
  {
    m_lookAheadRateControl = H265LookAheadRateControlMapper::GetH265LookAheadRateControlForName(jsonValue.GetString("lookAheadRateControl"));

    m_lookAheadRateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minIInterval"))
  {
    m_minIInterval = jsonValue.GetInteger("minIInterval");

    m_minIIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parDenominator"))
  {
    m_parDenominator = jsonValue.GetInteger("parDenominator");

    m_parDenominatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parNumerator"))
  {
    m_parNumerator = jsonValue.GetInteger("parNumerator");

    m_parNumeratorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profile"))
  {
    m_profile = H265ProfileMapper::GetH265ProfileForName(jsonValue.GetString("profile"));

    m_profileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qvbrQualityLevel"))
  {
    m_qvbrQualityLevel = jsonValue.GetInteger("qvbrQualityLevel");

    m_qvbrQualityLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = H265RateControlModeMapper::GetH265RateControlModeForName(jsonValue.GetString("rateControlMode"));

    m_rateControlModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanType"))
  {
    m_scanType = H265ScanTypeMapper::GetH265ScanTypeForName(jsonValue.GetString("scanType"));

    m_scanTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sceneChangeDetect"))
  {
    m_sceneChangeDetect = H265SceneChangeDetectMapper::GetH265SceneChangeDetectForName(jsonValue.GetString("sceneChangeDetect"));

    m_sceneChangeDetectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slices"))
  {
    m_slices = jsonValue.GetInteger("slices");

    m_slicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tier"))
  {
    m_tier = H265TierMapper::GetH265TierForName(jsonValue.GetString("tier"));

    m_tierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeInsertion"))
  {
    m_timecodeInsertion = H265TimecodeInsertionBehaviorMapper::GetH265TimecodeInsertionBehaviorForName(jsonValue.GetString("timecodeInsertion"));

    m_timecodeInsertionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeBurninSettings"))
  {
    m_timecodeBurninSettings = jsonValue.GetObject("timecodeBurninSettings");

    m_timecodeBurninSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue H265Settings::Jsonize() const
{
  JsonValue payload;

  if(m_adaptiveQuantizationHasBeenSet)
  {
   payload.WithString("adaptiveQuantization", H265AdaptiveQuantizationMapper::GetNameForH265AdaptiveQuantization(m_adaptiveQuantization));
  }

  if(m_afdSignalingHasBeenSet)
  {
   payload.WithString("afdSignaling", AfdSignalingMapper::GetNameForAfdSignaling(m_afdSignaling));
  }

  if(m_alternativeTransferFunctionHasBeenSet)
  {
   payload.WithString("alternativeTransferFunction", H265AlternativeTransferFunctionMapper::GetNameForH265AlternativeTransferFunction(m_alternativeTransferFunction));
  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_bufSizeHasBeenSet)
  {
   payload.WithInteger("bufSize", m_bufSize);

  }

  if(m_colorMetadataHasBeenSet)
  {
   payload.WithString("colorMetadata", H265ColorMetadataMapper::GetNameForH265ColorMetadata(m_colorMetadata));
  }

  if(m_colorSpaceSettingsHasBeenSet)
  {
   payload.WithObject("colorSpaceSettings", m_colorSpaceSettings.Jsonize());

  }

  if(m_filterSettingsHasBeenSet)
  {
   payload.WithObject("filterSettings", m_filterSettings.Jsonize());

  }

  if(m_fixedAfdHasBeenSet)
  {
   payload.WithString("fixedAfd", FixedAfdMapper::GetNameForFixedAfd(m_fixedAfd));
  }

  if(m_flickerAqHasBeenSet)
  {
   payload.WithString("flickerAq", H265FlickerAqMapper::GetNameForH265FlickerAq(m_flickerAq));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_gopClosedCadenceHasBeenSet)
  {
   payload.WithInteger("gopClosedCadence", m_gopClosedCadence);

  }

  if(m_gopSizeHasBeenSet)
  {
   payload.WithDouble("gopSize", m_gopSize);

  }

  if(m_gopSizeUnitsHasBeenSet)
  {
   payload.WithString("gopSizeUnits", H265GopSizeUnitsMapper::GetNameForH265GopSizeUnits(m_gopSizeUnits));
  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", H265LevelMapper::GetNameForH265Level(m_level));
  }

  if(m_lookAheadRateControlHasBeenSet)
  {
   payload.WithString("lookAheadRateControl", H265LookAheadRateControlMapper::GetNameForH265LookAheadRateControl(m_lookAheadRateControl));
  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_minIIntervalHasBeenSet)
  {
   payload.WithInteger("minIInterval", m_minIInterval);

  }

  if(m_parDenominatorHasBeenSet)
  {
   payload.WithInteger("parDenominator", m_parDenominator);

  }

  if(m_parNumeratorHasBeenSet)
  {
   payload.WithInteger("parNumerator", m_parNumerator);

  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", H265ProfileMapper::GetNameForH265Profile(m_profile));
  }

  if(m_qvbrQualityLevelHasBeenSet)
  {
   payload.WithInteger("qvbrQualityLevel", m_qvbrQualityLevel);

  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", H265RateControlModeMapper::GetNameForH265RateControlMode(m_rateControlMode));
  }

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", H265ScanTypeMapper::GetNameForH265ScanType(m_scanType));
  }

  if(m_sceneChangeDetectHasBeenSet)
  {
   payload.WithString("sceneChangeDetect", H265SceneChangeDetectMapper::GetNameForH265SceneChangeDetect(m_sceneChangeDetect));
  }

  if(m_slicesHasBeenSet)
  {
   payload.WithInteger("slices", m_slices);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("tier", H265TierMapper::GetNameForH265Tier(m_tier));
  }

  if(m_timecodeInsertionHasBeenSet)
  {
   payload.WithString("timecodeInsertion", H265TimecodeInsertionBehaviorMapper::GetNameForH265TimecodeInsertionBehavior(m_timecodeInsertion));
  }

  if(m_timecodeBurninSettingsHasBeenSet)
  {
   payload.WithObject("timecodeBurninSettings", m_timecodeBurninSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
