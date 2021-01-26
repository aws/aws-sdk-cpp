/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Av1Settings.h>
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

Av1Settings::Av1Settings() : 
    m_adaptiveQuantization(Av1AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_framerateControl(Av1FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(Av1FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_numberBFramesBetweenReferenceFrames(0),
    m_numberBFramesBetweenReferenceFramesHasBeenSet(false),
    m_qvbrSettingsHasBeenSet(false),
    m_rateControlMode(Av1RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_spatialAdaptiveQuantization(Av1SpatialAdaptiveQuantization::NOT_SET),
    m_spatialAdaptiveQuantizationHasBeenSet(false)
{
}

Av1Settings::Av1Settings(JsonView jsonValue) : 
    m_adaptiveQuantization(Av1AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_framerateControl(Av1FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(Av1FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_numberBFramesBetweenReferenceFrames(0),
    m_numberBFramesBetweenReferenceFramesHasBeenSet(false),
    m_qvbrSettingsHasBeenSet(false),
    m_rateControlMode(Av1RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_spatialAdaptiveQuantization(Av1SpatialAdaptiveQuantization::NOT_SET),
    m_spatialAdaptiveQuantizationHasBeenSet(false)
{
  *this = jsonValue;
}

Av1Settings& Av1Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adaptiveQuantization"))
  {
    m_adaptiveQuantization = Av1AdaptiveQuantizationMapper::GetAv1AdaptiveQuantizationForName(jsonValue.GetString("adaptiveQuantization"));

    m_adaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = Av1FramerateControlMapper::GetAv1FramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = Av1FramerateConversionAlgorithmMapper::GetAv1FramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));

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

  if(jsonValue.ValueExists("gopSize"))
  {
    m_gopSize = jsonValue.GetDouble("gopSize");

    m_gopSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberBFramesBetweenReferenceFrames"))
  {
    m_numberBFramesBetweenReferenceFrames = jsonValue.GetInteger("numberBFramesBetweenReferenceFrames");

    m_numberBFramesBetweenReferenceFramesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qvbrSettings"))
  {
    m_qvbrSettings = jsonValue.GetObject("qvbrSettings");

    m_qvbrSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = Av1RateControlModeMapper::GetAv1RateControlModeForName(jsonValue.GetString("rateControlMode"));

    m_rateControlModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slices"))
  {
    m_slices = jsonValue.GetInteger("slices");

    m_slicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spatialAdaptiveQuantization"))
  {
    m_spatialAdaptiveQuantization = Av1SpatialAdaptiveQuantizationMapper::GetAv1SpatialAdaptiveQuantizationForName(jsonValue.GetString("spatialAdaptiveQuantization"));

    m_spatialAdaptiveQuantizationHasBeenSet = true;
  }

  return *this;
}

JsonValue Av1Settings::Jsonize() const
{
  JsonValue payload;

  if(m_adaptiveQuantizationHasBeenSet)
  {
   payload.WithString("adaptiveQuantization", Av1AdaptiveQuantizationMapper::GetNameForAv1AdaptiveQuantization(m_adaptiveQuantization));
  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", Av1FramerateControlMapper::GetNameForAv1FramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", Av1FramerateConversionAlgorithmMapper::GetNameForAv1FramerateConversionAlgorithm(m_framerateConversionAlgorithm));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_gopSizeHasBeenSet)
  {
   payload.WithDouble("gopSize", m_gopSize);

  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_numberBFramesBetweenReferenceFramesHasBeenSet)
  {
   payload.WithInteger("numberBFramesBetweenReferenceFrames", m_numberBFramesBetweenReferenceFrames);

  }

  if(m_qvbrSettingsHasBeenSet)
  {
   payload.WithObject("qvbrSettings", m_qvbrSettings.Jsonize());

  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", Av1RateControlModeMapper::GetNameForAv1RateControlMode(m_rateControlMode));
  }

  if(m_slicesHasBeenSet)
  {
   payload.WithInteger("slices", m_slices);

  }

  if(m_spatialAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("spatialAdaptiveQuantization", Av1SpatialAdaptiveQuantizationMapper::GetNameForAv1SpatialAdaptiveQuantization(m_spatialAdaptiveQuantization));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
