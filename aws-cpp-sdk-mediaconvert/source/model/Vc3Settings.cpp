/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vc3Settings.h>
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

Vc3Settings::Vc3Settings() : 
    m_framerateControl(Vc3FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(Vc3FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_interlaceMode(Vc3InterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_slowPal(Vc3SlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_telecine(Vc3Telecine::NOT_SET),
    m_telecineHasBeenSet(false),
    m_vc3Class(Vc3Class::NOT_SET),
    m_vc3ClassHasBeenSet(false)
{
}

Vc3Settings::Vc3Settings(JsonView jsonValue) : 
    m_framerateControl(Vc3FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(Vc3FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_interlaceMode(Vc3InterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_slowPal(Vc3SlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_telecine(Vc3Telecine::NOT_SET),
    m_telecineHasBeenSet(false),
    m_vc3Class(Vc3Class::NOT_SET),
    m_vc3ClassHasBeenSet(false)
{
  *this = jsonValue;
}

Vc3Settings& Vc3Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = Vc3FramerateControlMapper::GetVc3FramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = Vc3FramerateConversionAlgorithmMapper::GetVc3FramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));

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
    m_interlaceMode = Vc3InterlaceModeMapper::GetVc3InterlaceModeForName(jsonValue.GetString("interlaceMode"));

    m_interlaceModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slowPal"))
  {
    m_slowPal = Vc3SlowPalMapper::GetVc3SlowPalForName(jsonValue.GetString("slowPal"));

    m_slowPalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("telecine"))
  {
    m_telecine = Vc3TelecineMapper::GetVc3TelecineForName(jsonValue.GetString("telecine"));

    m_telecineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vc3Class"))
  {
    m_vc3Class = Vc3ClassMapper::GetVc3ClassForName(jsonValue.GetString("vc3Class"));

    m_vc3ClassHasBeenSet = true;
  }

  return *this;
}

JsonValue Vc3Settings::Jsonize() const
{
  JsonValue payload;

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", Vc3FramerateControlMapper::GetNameForVc3FramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", Vc3FramerateConversionAlgorithmMapper::GetNameForVc3FramerateConversionAlgorithm(m_framerateConversionAlgorithm));
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
   payload.WithString("interlaceMode", Vc3InterlaceModeMapper::GetNameForVc3InterlaceMode(m_interlaceMode));
  }

  if(m_slowPalHasBeenSet)
  {
   payload.WithString("slowPal", Vc3SlowPalMapper::GetNameForVc3SlowPal(m_slowPal));
  }

  if(m_telecineHasBeenSet)
  {
   payload.WithString("telecine", Vc3TelecineMapper::GetNameForVc3Telecine(m_telecine));
  }

  if(m_vc3ClassHasBeenSet)
  {
   payload.WithString("vc3Class", Vc3ClassMapper::GetNameForVc3Class(m_vc3Class));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
