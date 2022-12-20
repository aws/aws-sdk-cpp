/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mpeg2Settings.h>
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

Mpeg2Settings::Mpeg2Settings() : 
    m_adaptiveQuantization(Mpeg2AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_afdSignaling(AfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_colorMetadata(Mpeg2ColorMetadata::NOT_SET),
    m_colorMetadataHasBeenSet(false),
    m_colorSpace(Mpeg2ColorSpace::NOT_SET),
    m_colorSpaceHasBeenSet(false),
    m_displayAspectRatio(Mpeg2DisplayRatio::NOT_SET),
    m_displayAspectRatioHasBeenSet(false),
    m_filterSettingsHasBeenSet(false),
    m_fixedAfd(FixedAfd::NOT_SET),
    m_fixedAfdHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopNumBFrames(0),
    m_gopNumBFramesHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(Mpeg2GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_scanType(Mpeg2ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_subgopLength(Mpeg2SubGopLength::NOT_SET),
    m_subgopLengthHasBeenSet(false),
    m_timecodeInsertion(Mpeg2TimecodeInsertionBehavior::NOT_SET),
    m_timecodeInsertionHasBeenSet(false),
    m_timecodeBurninSettingsHasBeenSet(false)
{
}

Mpeg2Settings::Mpeg2Settings(JsonView jsonValue) : 
    m_adaptiveQuantization(Mpeg2AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_afdSignaling(AfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_colorMetadata(Mpeg2ColorMetadata::NOT_SET),
    m_colorMetadataHasBeenSet(false),
    m_colorSpace(Mpeg2ColorSpace::NOT_SET),
    m_colorSpaceHasBeenSet(false),
    m_displayAspectRatio(Mpeg2DisplayRatio::NOT_SET),
    m_displayAspectRatioHasBeenSet(false),
    m_filterSettingsHasBeenSet(false),
    m_fixedAfd(FixedAfd::NOT_SET),
    m_fixedAfdHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopNumBFrames(0),
    m_gopNumBFramesHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(Mpeg2GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_scanType(Mpeg2ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_subgopLength(Mpeg2SubGopLength::NOT_SET),
    m_subgopLengthHasBeenSet(false),
    m_timecodeInsertion(Mpeg2TimecodeInsertionBehavior::NOT_SET),
    m_timecodeInsertionHasBeenSet(false),
    m_timecodeBurninSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

Mpeg2Settings& Mpeg2Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adaptiveQuantization"))
  {
    m_adaptiveQuantization = Mpeg2AdaptiveQuantizationMapper::GetMpeg2AdaptiveQuantizationForName(jsonValue.GetString("adaptiveQuantization"));

    m_adaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afdSignaling"))
  {
    m_afdSignaling = AfdSignalingMapper::GetAfdSignalingForName(jsonValue.GetString("afdSignaling"));

    m_afdSignalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorMetadata"))
  {
    m_colorMetadata = Mpeg2ColorMetadataMapper::GetMpeg2ColorMetadataForName(jsonValue.GetString("colorMetadata"));

    m_colorMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorSpace"))
  {
    m_colorSpace = Mpeg2ColorSpaceMapper::GetMpeg2ColorSpaceForName(jsonValue.GetString("colorSpace"));

    m_colorSpaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayAspectRatio"))
  {
    m_displayAspectRatio = Mpeg2DisplayRatioMapper::GetMpeg2DisplayRatioForName(jsonValue.GetString("displayAspectRatio"));

    m_displayAspectRatioHasBeenSet = true;
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

  if(jsonValue.ValueExists("gopNumBFrames"))
  {
    m_gopNumBFrames = jsonValue.GetInteger("gopNumBFrames");

    m_gopNumBFramesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopSize"))
  {
    m_gopSize = jsonValue.GetDouble("gopSize");

    m_gopSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopSizeUnits"))
  {
    m_gopSizeUnits = Mpeg2GopSizeUnitsMapper::GetMpeg2GopSizeUnitsForName(jsonValue.GetString("gopSizeUnits"));

    m_gopSizeUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanType"))
  {
    m_scanType = Mpeg2ScanTypeMapper::GetMpeg2ScanTypeForName(jsonValue.GetString("scanType"));

    m_scanTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subgopLength"))
  {
    m_subgopLength = Mpeg2SubGopLengthMapper::GetMpeg2SubGopLengthForName(jsonValue.GetString("subgopLength"));

    m_subgopLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeInsertion"))
  {
    m_timecodeInsertion = Mpeg2TimecodeInsertionBehaviorMapper::GetMpeg2TimecodeInsertionBehaviorForName(jsonValue.GetString("timecodeInsertion"));

    m_timecodeInsertionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeBurninSettings"))
  {
    m_timecodeBurninSettings = jsonValue.GetObject("timecodeBurninSettings");

    m_timecodeBurninSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue Mpeg2Settings::Jsonize() const
{
  JsonValue payload;

  if(m_adaptiveQuantizationHasBeenSet)
  {
   payload.WithString("adaptiveQuantization", Mpeg2AdaptiveQuantizationMapper::GetNameForMpeg2AdaptiveQuantization(m_adaptiveQuantization));
  }

  if(m_afdSignalingHasBeenSet)
  {
   payload.WithString("afdSignaling", AfdSignalingMapper::GetNameForAfdSignaling(m_afdSignaling));
  }

  if(m_colorMetadataHasBeenSet)
  {
   payload.WithString("colorMetadata", Mpeg2ColorMetadataMapper::GetNameForMpeg2ColorMetadata(m_colorMetadata));
  }

  if(m_colorSpaceHasBeenSet)
  {
   payload.WithString("colorSpace", Mpeg2ColorSpaceMapper::GetNameForMpeg2ColorSpace(m_colorSpace));
  }

  if(m_displayAspectRatioHasBeenSet)
  {
   payload.WithString("displayAspectRatio", Mpeg2DisplayRatioMapper::GetNameForMpeg2DisplayRatio(m_displayAspectRatio));
  }

  if(m_filterSettingsHasBeenSet)
  {
   payload.WithObject("filterSettings", m_filterSettings.Jsonize());

  }

  if(m_fixedAfdHasBeenSet)
  {
   payload.WithString("fixedAfd", FixedAfdMapper::GetNameForFixedAfd(m_fixedAfd));
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

  if(m_gopNumBFramesHasBeenSet)
  {
   payload.WithInteger("gopNumBFrames", m_gopNumBFrames);

  }

  if(m_gopSizeHasBeenSet)
  {
   payload.WithDouble("gopSize", m_gopSize);

  }

  if(m_gopSizeUnitsHasBeenSet)
  {
   payload.WithString("gopSizeUnits", Mpeg2GopSizeUnitsMapper::GetNameForMpeg2GopSizeUnits(m_gopSizeUnits));
  }

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", Mpeg2ScanTypeMapper::GetNameForMpeg2ScanType(m_scanType));
  }

  if(m_subgopLengthHasBeenSet)
  {
   payload.WithString("subgopLength", Mpeg2SubGopLengthMapper::GetNameForMpeg2SubGopLength(m_subgopLength));
  }

  if(m_timecodeInsertionHasBeenSet)
  {
   payload.WithString("timecodeInsertion", Mpeg2TimecodeInsertionBehaviorMapper::GetNameForMpeg2TimecodeInsertionBehavior(m_timecodeInsertion));
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
