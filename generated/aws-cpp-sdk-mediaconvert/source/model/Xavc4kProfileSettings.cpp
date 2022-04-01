/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Xavc4kProfileSettings.h>
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

Xavc4kProfileSettings::Xavc4kProfileSettings() : 
    m_bitrateClass(Xavc4kProfileBitrateClass::NOT_SET),
    m_bitrateClassHasBeenSet(false),
    m_codecProfile(Xavc4kProfileCodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_flickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization::NOT_SET),
    m_flickerAdaptiveQuantizationHasBeenSet(false),
    m_gopBReference(XavcGopBReference::NOT_SET),
    m_gopBReferenceHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_qualityTuningLevel(Xavc4kProfileQualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false)
{
}

Xavc4kProfileSettings::Xavc4kProfileSettings(JsonView jsonValue) : 
    m_bitrateClass(Xavc4kProfileBitrateClass::NOT_SET),
    m_bitrateClassHasBeenSet(false),
    m_codecProfile(Xavc4kProfileCodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_flickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization::NOT_SET),
    m_flickerAdaptiveQuantizationHasBeenSet(false),
    m_gopBReference(XavcGopBReference::NOT_SET),
    m_gopBReferenceHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_qualityTuningLevel(Xavc4kProfileQualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false)
{
  *this = jsonValue;
}

Xavc4kProfileSettings& Xavc4kProfileSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrateClass"))
  {
    m_bitrateClass = Xavc4kProfileBitrateClassMapper::GetXavc4kProfileBitrateClassForName(jsonValue.GetString("bitrateClass"));

    m_bitrateClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecProfile"))
  {
    m_codecProfile = Xavc4kProfileCodecProfileMapper::GetXavc4kProfileCodecProfileForName(jsonValue.GetString("codecProfile"));

    m_codecProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flickerAdaptiveQuantization"))
  {
    m_flickerAdaptiveQuantization = XavcFlickerAdaptiveQuantizationMapper::GetXavcFlickerAdaptiveQuantizationForName(jsonValue.GetString("flickerAdaptiveQuantization"));

    m_flickerAdaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopBReference"))
  {
    m_gopBReference = XavcGopBReferenceMapper::GetXavcGopBReferenceForName(jsonValue.GetString("gopBReference"));

    m_gopBReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopClosedCadence"))
  {
    m_gopClosedCadence = jsonValue.GetInteger("gopClosedCadence");

    m_gopClosedCadenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hrdBufferSize"))
  {
    m_hrdBufferSize = jsonValue.GetInteger("hrdBufferSize");

    m_hrdBufferSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qualityTuningLevel"))
  {
    m_qualityTuningLevel = Xavc4kProfileQualityTuningLevelMapper::GetXavc4kProfileQualityTuningLevelForName(jsonValue.GetString("qualityTuningLevel"));

    m_qualityTuningLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slices"))
  {
    m_slices = jsonValue.GetInteger("slices");

    m_slicesHasBeenSet = true;
  }

  return *this;
}

JsonValue Xavc4kProfileSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateClassHasBeenSet)
  {
   payload.WithString("bitrateClass", Xavc4kProfileBitrateClassMapper::GetNameForXavc4kProfileBitrateClass(m_bitrateClass));
  }

  if(m_codecProfileHasBeenSet)
  {
   payload.WithString("codecProfile", Xavc4kProfileCodecProfileMapper::GetNameForXavc4kProfileCodecProfile(m_codecProfile));
  }

  if(m_flickerAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("flickerAdaptiveQuantization", XavcFlickerAdaptiveQuantizationMapper::GetNameForXavcFlickerAdaptiveQuantization(m_flickerAdaptiveQuantization));
  }

  if(m_gopBReferenceHasBeenSet)
  {
   payload.WithString("gopBReference", XavcGopBReferenceMapper::GetNameForXavcGopBReference(m_gopBReference));
  }

  if(m_gopClosedCadenceHasBeenSet)
  {
   payload.WithInteger("gopClosedCadence", m_gopClosedCadence);

  }

  if(m_hrdBufferSizeHasBeenSet)
  {
   payload.WithInteger("hrdBufferSize", m_hrdBufferSize);

  }

  if(m_qualityTuningLevelHasBeenSet)
  {
   payload.WithString("qualityTuningLevel", Xavc4kProfileQualityTuningLevelMapper::GetNameForXavc4kProfileQualityTuningLevel(m_qualityTuningLevel));
  }

  if(m_slicesHasBeenSet)
  {
   payload.WithInteger("slices", m_slices);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
