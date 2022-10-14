/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264Settings.h>
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

H264Settings::H264Settings() : 
    m_adaptiveQuantization(H264AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_codecLevel(H264CodecLevel::NOT_SET),
    m_codecLevelHasBeenSet(false),
    m_codecProfile(H264CodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_dynamicSubGop(H264DynamicSubGop::NOT_SET),
    m_dynamicSubGopHasBeenSet(false),
    m_entropyEncoding(H264EntropyEncoding::NOT_SET),
    m_entropyEncodingHasBeenSet(false),
    m_fieldEncoding(H264FieldEncoding::NOT_SET),
    m_fieldEncodingHasBeenSet(false),
    m_flickerAdaptiveQuantization(H264FlickerAdaptiveQuantization::NOT_SET),
    m_flickerAdaptiveQuantizationHasBeenSet(false),
    m_framerateControl(H264FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(H264FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopBReference(H264GopBReference::NOT_SET),
    m_gopBReferenceHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(H264GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_hrdBufferFinalFillPercentage(0),
    m_hrdBufferFinalFillPercentageHasBeenSet(false),
    m_hrdBufferInitialFillPercentage(0),
    m_hrdBufferInitialFillPercentageHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_interlaceMode(H264InterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_minIInterval(0),
    m_minIIntervalHasBeenSet(false),
    m_numberBFramesBetweenReferenceFrames(0),
    m_numberBFramesBetweenReferenceFramesHasBeenSet(false),
    m_numberReferenceFrames(0),
    m_numberReferenceFramesHasBeenSet(false),
    m_parControl(H264ParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_qualityTuningLevel(H264QualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_qvbrSettingsHasBeenSet(false),
    m_rateControlMode(H264RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_repeatPps(H264RepeatPps::NOT_SET),
    m_repeatPpsHasBeenSet(false),
    m_scanTypeConversionMode(H264ScanTypeConversionMode::NOT_SET),
    m_scanTypeConversionModeHasBeenSet(false),
    m_sceneChangeDetect(H264SceneChangeDetect::NOT_SET),
    m_sceneChangeDetectHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_slowPal(H264SlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_softness(0),
    m_softnessHasBeenSet(false),
    m_spatialAdaptiveQuantization(H264SpatialAdaptiveQuantization::NOT_SET),
    m_spatialAdaptiveQuantizationHasBeenSet(false),
    m_syntax(H264Syntax::NOT_SET),
    m_syntaxHasBeenSet(false),
    m_telecine(H264Telecine::NOT_SET),
    m_telecineHasBeenSet(false),
    m_temporalAdaptiveQuantization(H264TemporalAdaptiveQuantization::NOT_SET),
    m_temporalAdaptiveQuantizationHasBeenSet(false),
    m_unregisteredSeiTimecode(H264UnregisteredSeiTimecode::NOT_SET),
    m_unregisteredSeiTimecodeHasBeenSet(false)
{
}

H264Settings::H264Settings(JsonView jsonValue) : 
    m_adaptiveQuantization(H264AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_codecLevel(H264CodecLevel::NOT_SET),
    m_codecLevelHasBeenSet(false),
    m_codecProfile(H264CodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_dynamicSubGop(H264DynamicSubGop::NOT_SET),
    m_dynamicSubGopHasBeenSet(false),
    m_entropyEncoding(H264EntropyEncoding::NOT_SET),
    m_entropyEncodingHasBeenSet(false),
    m_fieldEncoding(H264FieldEncoding::NOT_SET),
    m_fieldEncodingHasBeenSet(false),
    m_flickerAdaptiveQuantization(H264FlickerAdaptiveQuantization::NOT_SET),
    m_flickerAdaptiveQuantizationHasBeenSet(false),
    m_framerateControl(H264FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(H264FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopBReference(H264GopBReference::NOT_SET),
    m_gopBReferenceHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(H264GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_hrdBufferFinalFillPercentage(0),
    m_hrdBufferFinalFillPercentageHasBeenSet(false),
    m_hrdBufferInitialFillPercentage(0),
    m_hrdBufferInitialFillPercentageHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_interlaceMode(H264InterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_minIInterval(0),
    m_minIIntervalHasBeenSet(false),
    m_numberBFramesBetweenReferenceFrames(0),
    m_numberBFramesBetweenReferenceFramesHasBeenSet(false),
    m_numberReferenceFrames(0),
    m_numberReferenceFramesHasBeenSet(false),
    m_parControl(H264ParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_qualityTuningLevel(H264QualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_qvbrSettingsHasBeenSet(false),
    m_rateControlMode(H264RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_repeatPps(H264RepeatPps::NOT_SET),
    m_repeatPpsHasBeenSet(false),
    m_scanTypeConversionMode(H264ScanTypeConversionMode::NOT_SET),
    m_scanTypeConversionModeHasBeenSet(false),
    m_sceneChangeDetect(H264SceneChangeDetect::NOT_SET),
    m_sceneChangeDetectHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_slowPal(H264SlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_softness(0),
    m_softnessHasBeenSet(false),
    m_spatialAdaptiveQuantization(H264SpatialAdaptiveQuantization::NOT_SET),
    m_spatialAdaptiveQuantizationHasBeenSet(false),
    m_syntax(H264Syntax::NOT_SET),
    m_syntaxHasBeenSet(false),
    m_telecine(H264Telecine::NOT_SET),
    m_telecineHasBeenSet(false),
    m_temporalAdaptiveQuantization(H264TemporalAdaptiveQuantization::NOT_SET),
    m_temporalAdaptiveQuantizationHasBeenSet(false),
    m_unregisteredSeiTimecode(H264UnregisteredSeiTimecode::NOT_SET),
    m_unregisteredSeiTimecodeHasBeenSet(false)
{
  *this = jsonValue;
}

H264Settings& H264Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adaptiveQuantization"))
  {
    m_adaptiveQuantization = H264AdaptiveQuantizationMapper::GetH264AdaptiveQuantizationForName(jsonValue.GetString("adaptiveQuantization"));

    m_adaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecLevel"))
  {
    m_codecLevel = H264CodecLevelMapper::GetH264CodecLevelForName(jsonValue.GetString("codecLevel"));

    m_codecLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecProfile"))
  {
    m_codecProfile = H264CodecProfileMapper::GetH264CodecProfileForName(jsonValue.GetString("codecProfile"));

    m_codecProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamicSubGop"))
  {
    m_dynamicSubGop = H264DynamicSubGopMapper::GetH264DynamicSubGopForName(jsonValue.GetString("dynamicSubGop"));

    m_dynamicSubGopHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entropyEncoding"))
  {
    m_entropyEncoding = H264EntropyEncodingMapper::GetH264EntropyEncodingForName(jsonValue.GetString("entropyEncoding"));

    m_entropyEncodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldEncoding"))
  {
    m_fieldEncoding = H264FieldEncodingMapper::GetH264FieldEncodingForName(jsonValue.GetString("fieldEncoding"));

    m_fieldEncodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flickerAdaptiveQuantization"))
  {
    m_flickerAdaptiveQuantization = H264FlickerAdaptiveQuantizationMapper::GetH264FlickerAdaptiveQuantizationForName(jsonValue.GetString("flickerAdaptiveQuantization"));

    m_flickerAdaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = H264FramerateControlMapper::GetH264FramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = H264FramerateConversionAlgorithmMapper::GetH264FramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));

    m_framerateConversionAlgorithmHasBeenSet = true;
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

  if(jsonValue.ValueExists("gopBReference"))
  {
    m_gopBReference = H264GopBReferenceMapper::GetH264GopBReferenceForName(jsonValue.GetString("gopBReference"));

    m_gopBReferenceHasBeenSet = true;
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
    m_gopSizeUnits = H264GopSizeUnitsMapper::GetH264GopSizeUnitsForName(jsonValue.GetString("gopSizeUnits"));

    m_gopSizeUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hrdBufferFinalFillPercentage"))
  {
    m_hrdBufferFinalFillPercentage = jsonValue.GetInteger("hrdBufferFinalFillPercentage");

    m_hrdBufferFinalFillPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hrdBufferInitialFillPercentage"))
  {
    m_hrdBufferInitialFillPercentage = jsonValue.GetInteger("hrdBufferInitialFillPercentage");

    m_hrdBufferInitialFillPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hrdBufferSize"))
  {
    m_hrdBufferSize = jsonValue.GetInteger("hrdBufferSize");

    m_hrdBufferSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interlaceMode"))
  {
    m_interlaceMode = H264InterlaceModeMapper::GetH264InterlaceModeForName(jsonValue.GetString("interlaceMode"));

    m_interlaceModeHasBeenSet = true;
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

  if(jsonValue.ValueExists("numberBFramesBetweenReferenceFrames"))
  {
    m_numberBFramesBetweenReferenceFrames = jsonValue.GetInteger("numberBFramesBetweenReferenceFrames");

    m_numberBFramesBetweenReferenceFramesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberReferenceFrames"))
  {
    m_numberReferenceFrames = jsonValue.GetInteger("numberReferenceFrames");

    m_numberReferenceFramesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parControl"))
  {
    m_parControl = H264ParControlMapper::GetH264ParControlForName(jsonValue.GetString("parControl"));

    m_parControlHasBeenSet = true;
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

  if(jsonValue.ValueExists("qualityTuningLevel"))
  {
    m_qualityTuningLevel = H264QualityTuningLevelMapper::GetH264QualityTuningLevelForName(jsonValue.GetString("qualityTuningLevel"));

    m_qualityTuningLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qvbrSettings"))
  {
    m_qvbrSettings = jsonValue.GetObject("qvbrSettings");

    m_qvbrSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = H264RateControlModeMapper::GetH264RateControlModeForName(jsonValue.GetString("rateControlMode"));

    m_rateControlModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repeatPps"))
  {
    m_repeatPps = H264RepeatPpsMapper::GetH264RepeatPpsForName(jsonValue.GetString("repeatPps"));

    m_repeatPpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanTypeConversionMode"))
  {
    m_scanTypeConversionMode = H264ScanTypeConversionModeMapper::GetH264ScanTypeConversionModeForName(jsonValue.GetString("scanTypeConversionMode"));

    m_scanTypeConversionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sceneChangeDetect"))
  {
    m_sceneChangeDetect = H264SceneChangeDetectMapper::GetH264SceneChangeDetectForName(jsonValue.GetString("sceneChangeDetect"));

    m_sceneChangeDetectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slices"))
  {
    m_slices = jsonValue.GetInteger("slices");

    m_slicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slowPal"))
  {
    m_slowPal = H264SlowPalMapper::GetH264SlowPalForName(jsonValue.GetString("slowPal"));

    m_slowPalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softness"))
  {
    m_softness = jsonValue.GetInteger("softness");

    m_softnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spatialAdaptiveQuantization"))
  {
    m_spatialAdaptiveQuantization = H264SpatialAdaptiveQuantizationMapper::GetH264SpatialAdaptiveQuantizationForName(jsonValue.GetString("spatialAdaptiveQuantization"));

    m_spatialAdaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("syntax"))
  {
    m_syntax = H264SyntaxMapper::GetH264SyntaxForName(jsonValue.GetString("syntax"));

    m_syntaxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("telecine"))
  {
    m_telecine = H264TelecineMapper::GetH264TelecineForName(jsonValue.GetString("telecine"));

    m_telecineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("temporalAdaptiveQuantization"))
  {
    m_temporalAdaptiveQuantization = H264TemporalAdaptiveQuantizationMapper::GetH264TemporalAdaptiveQuantizationForName(jsonValue.GetString("temporalAdaptiveQuantization"));

    m_temporalAdaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unregisteredSeiTimecode"))
  {
    m_unregisteredSeiTimecode = H264UnregisteredSeiTimecodeMapper::GetH264UnregisteredSeiTimecodeForName(jsonValue.GetString("unregisteredSeiTimecode"));

    m_unregisteredSeiTimecodeHasBeenSet = true;
  }

  return *this;
}

JsonValue H264Settings::Jsonize() const
{
  JsonValue payload;

  if(m_adaptiveQuantizationHasBeenSet)
  {
   payload.WithString("adaptiveQuantization", H264AdaptiveQuantizationMapper::GetNameForH264AdaptiveQuantization(m_adaptiveQuantization));
  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_codecLevelHasBeenSet)
  {
   payload.WithString("codecLevel", H264CodecLevelMapper::GetNameForH264CodecLevel(m_codecLevel));
  }

  if(m_codecProfileHasBeenSet)
  {
   payload.WithString("codecProfile", H264CodecProfileMapper::GetNameForH264CodecProfile(m_codecProfile));
  }

  if(m_dynamicSubGopHasBeenSet)
  {
   payload.WithString("dynamicSubGop", H264DynamicSubGopMapper::GetNameForH264DynamicSubGop(m_dynamicSubGop));
  }

  if(m_entropyEncodingHasBeenSet)
  {
   payload.WithString("entropyEncoding", H264EntropyEncodingMapper::GetNameForH264EntropyEncoding(m_entropyEncoding));
  }

  if(m_fieldEncodingHasBeenSet)
  {
   payload.WithString("fieldEncoding", H264FieldEncodingMapper::GetNameForH264FieldEncoding(m_fieldEncoding));
  }

  if(m_flickerAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("flickerAdaptiveQuantization", H264FlickerAdaptiveQuantizationMapper::GetNameForH264FlickerAdaptiveQuantization(m_flickerAdaptiveQuantization));
  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", H264FramerateControlMapper::GetNameForH264FramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", H264FramerateConversionAlgorithmMapper::GetNameForH264FramerateConversionAlgorithm(m_framerateConversionAlgorithm));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_gopBReferenceHasBeenSet)
  {
   payload.WithString("gopBReference", H264GopBReferenceMapper::GetNameForH264GopBReference(m_gopBReference));
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
   payload.WithString("gopSizeUnits", H264GopSizeUnitsMapper::GetNameForH264GopSizeUnits(m_gopSizeUnits));
  }

  if(m_hrdBufferFinalFillPercentageHasBeenSet)
  {
   payload.WithInteger("hrdBufferFinalFillPercentage", m_hrdBufferFinalFillPercentage);

  }

  if(m_hrdBufferInitialFillPercentageHasBeenSet)
  {
   payload.WithInteger("hrdBufferInitialFillPercentage", m_hrdBufferInitialFillPercentage);

  }

  if(m_hrdBufferSizeHasBeenSet)
  {
   payload.WithInteger("hrdBufferSize", m_hrdBufferSize);

  }

  if(m_interlaceModeHasBeenSet)
  {
   payload.WithString("interlaceMode", H264InterlaceModeMapper::GetNameForH264InterlaceMode(m_interlaceMode));
  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_minIIntervalHasBeenSet)
  {
   payload.WithInteger("minIInterval", m_minIInterval);

  }

  if(m_numberBFramesBetweenReferenceFramesHasBeenSet)
  {
   payload.WithInteger("numberBFramesBetweenReferenceFrames", m_numberBFramesBetweenReferenceFrames);

  }

  if(m_numberReferenceFramesHasBeenSet)
  {
   payload.WithInteger("numberReferenceFrames", m_numberReferenceFrames);

  }

  if(m_parControlHasBeenSet)
  {
   payload.WithString("parControl", H264ParControlMapper::GetNameForH264ParControl(m_parControl));
  }

  if(m_parDenominatorHasBeenSet)
  {
   payload.WithInteger("parDenominator", m_parDenominator);

  }

  if(m_parNumeratorHasBeenSet)
  {
   payload.WithInteger("parNumerator", m_parNumerator);

  }

  if(m_qualityTuningLevelHasBeenSet)
  {
   payload.WithString("qualityTuningLevel", H264QualityTuningLevelMapper::GetNameForH264QualityTuningLevel(m_qualityTuningLevel));
  }

  if(m_qvbrSettingsHasBeenSet)
  {
   payload.WithObject("qvbrSettings", m_qvbrSettings.Jsonize());

  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", H264RateControlModeMapper::GetNameForH264RateControlMode(m_rateControlMode));
  }

  if(m_repeatPpsHasBeenSet)
  {
   payload.WithString("repeatPps", H264RepeatPpsMapper::GetNameForH264RepeatPps(m_repeatPps));
  }

  if(m_scanTypeConversionModeHasBeenSet)
  {
   payload.WithString("scanTypeConversionMode", H264ScanTypeConversionModeMapper::GetNameForH264ScanTypeConversionMode(m_scanTypeConversionMode));
  }

  if(m_sceneChangeDetectHasBeenSet)
  {
   payload.WithString("sceneChangeDetect", H264SceneChangeDetectMapper::GetNameForH264SceneChangeDetect(m_sceneChangeDetect));
  }

  if(m_slicesHasBeenSet)
  {
   payload.WithInteger("slices", m_slices);

  }

  if(m_slowPalHasBeenSet)
  {
   payload.WithString("slowPal", H264SlowPalMapper::GetNameForH264SlowPal(m_slowPal));
  }

  if(m_softnessHasBeenSet)
  {
   payload.WithInteger("softness", m_softness);

  }

  if(m_spatialAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("spatialAdaptiveQuantization", H264SpatialAdaptiveQuantizationMapper::GetNameForH264SpatialAdaptiveQuantization(m_spatialAdaptiveQuantization));
  }

  if(m_syntaxHasBeenSet)
  {
   payload.WithString("syntax", H264SyntaxMapper::GetNameForH264Syntax(m_syntax));
  }

  if(m_telecineHasBeenSet)
  {
   payload.WithString("telecine", H264TelecineMapper::GetNameForH264Telecine(m_telecine));
  }

  if(m_temporalAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("temporalAdaptiveQuantization", H264TemporalAdaptiveQuantizationMapper::GetNameForH264TemporalAdaptiveQuantization(m_temporalAdaptiveQuantization));
  }

  if(m_unregisteredSeiTimecodeHasBeenSet)
  {
   payload.WithString("unregisteredSeiTimecode", H264UnregisteredSeiTimecodeMapper::GetNameForH264UnregisteredSeiTimecode(m_unregisteredSeiTimecode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
