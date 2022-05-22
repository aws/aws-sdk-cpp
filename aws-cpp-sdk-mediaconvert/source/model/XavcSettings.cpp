/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcSettings.h>
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

XavcSettings::XavcSettings() : 
    m_adaptiveQuantization(XavcAdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_entropyEncoding(XavcEntropyEncoding::NOT_SET),
    m_entropyEncodingHasBeenSet(false),
    m_framerateControl(XavcFramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(XavcFramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_profile(XavcProfile::NOT_SET),
    m_profileHasBeenSet(false),
    m_slowPal(XavcSlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_softness(0),
    m_softnessHasBeenSet(false),
    m_spatialAdaptiveQuantization(XavcSpatialAdaptiveQuantization::NOT_SET),
    m_spatialAdaptiveQuantizationHasBeenSet(false),
    m_temporalAdaptiveQuantization(XavcTemporalAdaptiveQuantization::NOT_SET),
    m_temporalAdaptiveQuantizationHasBeenSet(false),
    m_xavc4kIntraCbgProfileSettingsHasBeenSet(false),
    m_xavc4kIntraVbrProfileSettingsHasBeenSet(false),
    m_xavc4kProfileSettingsHasBeenSet(false),
    m_xavcHdIntraCbgProfileSettingsHasBeenSet(false),
    m_xavcHdProfileSettingsHasBeenSet(false)
{
}

XavcSettings::XavcSettings(JsonView jsonValue) : 
    m_adaptiveQuantization(XavcAdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_entropyEncoding(XavcEntropyEncoding::NOT_SET),
    m_entropyEncodingHasBeenSet(false),
    m_framerateControl(XavcFramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(XavcFramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_profile(XavcProfile::NOT_SET),
    m_profileHasBeenSet(false),
    m_slowPal(XavcSlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_softness(0),
    m_softnessHasBeenSet(false),
    m_spatialAdaptiveQuantization(XavcSpatialAdaptiveQuantization::NOT_SET),
    m_spatialAdaptiveQuantizationHasBeenSet(false),
    m_temporalAdaptiveQuantization(XavcTemporalAdaptiveQuantization::NOT_SET),
    m_temporalAdaptiveQuantizationHasBeenSet(false),
    m_xavc4kIntraCbgProfileSettingsHasBeenSet(false),
    m_xavc4kIntraVbrProfileSettingsHasBeenSet(false),
    m_xavc4kProfileSettingsHasBeenSet(false),
    m_xavcHdIntraCbgProfileSettingsHasBeenSet(false),
    m_xavcHdProfileSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

XavcSettings& XavcSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adaptiveQuantization"))
  {
    m_adaptiveQuantization = XavcAdaptiveQuantizationMapper::GetXavcAdaptiveQuantizationForName(jsonValue.GetString("adaptiveQuantization"));

    m_adaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entropyEncoding"))
  {
    m_entropyEncoding = XavcEntropyEncodingMapper::GetXavcEntropyEncodingForName(jsonValue.GetString("entropyEncoding"));

    m_entropyEncodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = XavcFramerateControlMapper::GetXavcFramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = XavcFramerateConversionAlgorithmMapper::GetXavcFramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));

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

  if(jsonValue.ValueExists("profile"))
  {
    m_profile = XavcProfileMapper::GetXavcProfileForName(jsonValue.GetString("profile"));

    m_profileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slowPal"))
  {
    m_slowPal = XavcSlowPalMapper::GetXavcSlowPalForName(jsonValue.GetString("slowPal"));

    m_slowPalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softness"))
  {
    m_softness = jsonValue.GetInteger("softness");

    m_softnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spatialAdaptiveQuantization"))
  {
    m_spatialAdaptiveQuantization = XavcSpatialAdaptiveQuantizationMapper::GetXavcSpatialAdaptiveQuantizationForName(jsonValue.GetString("spatialAdaptiveQuantization"));

    m_spatialAdaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("temporalAdaptiveQuantization"))
  {
    m_temporalAdaptiveQuantization = XavcTemporalAdaptiveQuantizationMapper::GetXavcTemporalAdaptiveQuantizationForName(jsonValue.GetString("temporalAdaptiveQuantization"));

    m_temporalAdaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xavc4kIntraCbgProfileSettings"))
  {
    m_xavc4kIntraCbgProfileSettings = jsonValue.GetObject("xavc4kIntraCbgProfileSettings");

    m_xavc4kIntraCbgProfileSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xavc4kIntraVbrProfileSettings"))
  {
    m_xavc4kIntraVbrProfileSettings = jsonValue.GetObject("xavc4kIntraVbrProfileSettings");

    m_xavc4kIntraVbrProfileSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xavc4kProfileSettings"))
  {
    m_xavc4kProfileSettings = jsonValue.GetObject("xavc4kProfileSettings");

    m_xavc4kProfileSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xavcHdIntraCbgProfileSettings"))
  {
    m_xavcHdIntraCbgProfileSettings = jsonValue.GetObject("xavcHdIntraCbgProfileSettings");

    m_xavcHdIntraCbgProfileSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xavcHdProfileSettings"))
  {
    m_xavcHdProfileSettings = jsonValue.GetObject("xavcHdProfileSettings");

    m_xavcHdProfileSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue XavcSettings::Jsonize() const
{
  JsonValue payload;

  if(m_adaptiveQuantizationHasBeenSet)
  {
   payload.WithString("adaptiveQuantization", XavcAdaptiveQuantizationMapper::GetNameForXavcAdaptiveQuantization(m_adaptiveQuantization));
  }

  if(m_entropyEncodingHasBeenSet)
  {
   payload.WithString("entropyEncoding", XavcEntropyEncodingMapper::GetNameForXavcEntropyEncoding(m_entropyEncoding));
  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", XavcFramerateControlMapper::GetNameForXavcFramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", XavcFramerateConversionAlgorithmMapper::GetNameForXavcFramerateConversionAlgorithm(m_framerateConversionAlgorithm));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", XavcProfileMapper::GetNameForXavcProfile(m_profile));
  }

  if(m_slowPalHasBeenSet)
  {
   payload.WithString("slowPal", XavcSlowPalMapper::GetNameForXavcSlowPal(m_slowPal));
  }

  if(m_softnessHasBeenSet)
  {
   payload.WithInteger("softness", m_softness);

  }

  if(m_spatialAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("spatialAdaptiveQuantization", XavcSpatialAdaptiveQuantizationMapper::GetNameForXavcSpatialAdaptiveQuantization(m_spatialAdaptiveQuantization));
  }

  if(m_temporalAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("temporalAdaptiveQuantization", XavcTemporalAdaptiveQuantizationMapper::GetNameForXavcTemporalAdaptiveQuantization(m_temporalAdaptiveQuantization));
  }

  if(m_xavc4kIntraCbgProfileSettingsHasBeenSet)
  {
   payload.WithObject("xavc4kIntraCbgProfileSettings", m_xavc4kIntraCbgProfileSettings.Jsonize());

  }

  if(m_xavc4kIntraVbrProfileSettingsHasBeenSet)
  {
   payload.WithObject("xavc4kIntraVbrProfileSettings", m_xavc4kIntraVbrProfileSettings.Jsonize());

  }

  if(m_xavc4kProfileSettingsHasBeenSet)
  {
   payload.WithObject("xavc4kProfileSettings", m_xavc4kProfileSettings.Jsonize());

  }

  if(m_xavcHdIntraCbgProfileSettingsHasBeenSet)
  {
   payload.WithObject("xavcHdIntraCbgProfileSettings", m_xavcHdIntraCbgProfileSettings.Jsonize());

  }

  if(m_xavcHdProfileSettingsHasBeenSet)
  {
   payload.WithObject("xavcHdProfileSettings", m_xavcHdProfileSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
