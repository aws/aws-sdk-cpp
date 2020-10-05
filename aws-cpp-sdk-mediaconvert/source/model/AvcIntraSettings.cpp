/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvcIntraSettings.h>
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

AvcIntraSettings::AvcIntraSettings() : 
    m_avcIntraClass(AvcIntraClass::NOT_SET),
    m_avcIntraClassHasBeenSet(false),
    m_framerateControl(AvcIntraFramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(AvcIntraFramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_interlaceMode(AvcIntraInterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_slowPal(AvcIntraSlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_telecine(AvcIntraTelecine::NOT_SET),
    m_telecineHasBeenSet(false)
{
}

AvcIntraSettings::AvcIntraSettings(JsonView jsonValue) : 
    m_avcIntraClass(AvcIntraClass::NOT_SET),
    m_avcIntraClassHasBeenSet(false),
    m_framerateControl(AvcIntraFramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(AvcIntraFramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_interlaceMode(AvcIntraInterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_slowPal(AvcIntraSlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_telecine(AvcIntraTelecine::NOT_SET),
    m_telecineHasBeenSet(false)
{
  *this = jsonValue;
}

AvcIntraSettings& AvcIntraSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("avcIntraClass"))
  {
    m_avcIntraClass = AvcIntraClassMapper::GetAvcIntraClassForName(jsonValue.GetString("avcIntraClass"));

    m_avcIntraClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = AvcIntraFramerateControlMapper::GetAvcIntraFramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = AvcIntraFramerateConversionAlgorithmMapper::GetAvcIntraFramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));

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

  if(jsonValue.ValueExists("interlaceMode"))
  {
    m_interlaceMode = AvcIntraInterlaceModeMapper::GetAvcIntraInterlaceModeForName(jsonValue.GetString("interlaceMode"));

    m_interlaceModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slowPal"))
  {
    m_slowPal = AvcIntraSlowPalMapper::GetAvcIntraSlowPalForName(jsonValue.GetString("slowPal"));

    m_slowPalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("telecine"))
  {
    m_telecine = AvcIntraTelecineMapper::GetAvcIntraTelecineForName(jsonValue.GetString("telecine"));

    m_telecineHasBeenSet = true;
  }

  return *this;
}

JsonValue AvcIntraSettings::Jsonize() const
{
  JsonValue payload;

  if(m_avcIntraClassHasBeenSet)
  {
   payload.WithString("avcIntraClass", AvcIntraClassMapper::GetNameForAvcIntraClass(m_avcIntraClass));
  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", AvcIntraFramerateControlMapper::GetNameForAvcIntraFramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", AvcIntraFramerateConversionAlgorithmMapper::GetNameForAvcIntraFramerateConversionAlgorithm(m_framerateConversionAlgorithm));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_interlaceModeHasBeenSet)
  {
   payload.WithString("interlaceMode", AvcIntraInterlaceModeMapper::GetNameForAvcIntraInterlaceMode(m_interlaceMode));
  }

  if(m_slowPalHasBeenSet)
  {
   payload.WithString("slowPal", AvcIntraSlowPalMapper::GetNameForAvcIntraSlowPal(m_slowPal));
  }

  if(m_telecineHasBeenSet)
  {
   payload.WithString("telecine", AvcIntraTelecineMapper::GetNameForAvcIntraTelecine(m_telecine));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
