/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProresSettings.h>
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

ProresSettings::ProresSettings() : 
    m_codecProfile(ProresCodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_framerateControl(ProresFramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(ProresFramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_interlaceMode(ProresInterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_parControl(ProresParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_slowPal(ProresSlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_telecine(ProresTelecine::NOT_SET),
    m_telecineHasBeenSet(false)
{
}

ProresSettings::ProresSettings(JsonView jsonValue) : 
    m_codecProfile(ProresCodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_framerateControl(ProresFramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(ProresFramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_interlaceMode(ProresInterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_parControl(ProresParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_slowPal(ProresSlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_telecine(ProresTelecine::NOT_SET),
    m_telecineHasBeenSet(false)
{
  *this = jsonValue;
}

ProresSettings& ProresSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("codecProfile"))
  {
    m_codecProfile = ProresCodecProfileMapper::GetProresCodecProfileForName(jsonValue.GetString("codecProfile"));

    m_codecProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = ProresFramerateControlMapper::GetProresFramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = ProresFramerateConversionAlgorithmMapper::GetProresFramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));

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
    m_interlaceMode = ProresInterlaceModeMapper::GetProresInterlaceModeForName(jsonValue.GetString("interlaceMode"));

    m_interlaceModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parControl"))
  {
    m_parControl = ProresParControlMapper::GetProresParControlForName(jsonValue.GetString("parControl"));

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

  if(jsonValue.ValueExists("slowPal"))
  {
    m_slowPal = ProresSlowPalMapper::GetProresSlowPalForName(jsonValue.GetString("slowPal"));

    m_slowPalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("telecine"))
  {
    m_telecine = ProresTelecineMapper::GetProresTelecineForName(jsonValue.GetString("telecine"));

    m_telecineHasBeenSet = true;
  }

  return *this;
}

JsonValue ProresSettings::Jsonize() const
{
  JsonValue payload;

  if(m_codecProfileHasBeenSet)
  {
   payload.WithString("codecProfile", ProresCodecProfileMapper::GetNameForProresCodecProfile(m_codecProfile));
  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", ProresFramerateControlMapper::GetNameForProresFramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", ProresFramerateConversionAlgorithmMapper::GetNameForProresFramerateConversionAlgorithm(m_framerateConversionAlgorithm));
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
   payload.WithString("interlaceMode", ProresInterlaceModeMapper::GetNameForProresInterlaceMode(m_interlaceMode));
  }

  if(m_parControlHasBeenSet)
  {
   payload.WithString("parControl", ProresParControlMapper::GetNameForProresParControl(m_parControl));
  }

  if(m_parDenominatorHasBeenSet)
  {
   payload.WithInteger("parDenominator", m_parDenominator);

  }

  if(m_parNumeratorHasBeenSet)
  {
   payload.WithInteger("parNumerator", m_parNumerator);

  }

  if(m_slowPalHasBeenSet)
  {
   payload.WithString("slowPal", ProresSlowPalMapper::GetNameForProresSlowPal(m_slowPal));
  }

  if(m_telecineHasBeenSet)
  {
   payload.WithString("telecine", ProresTelecineMapper::GetNameForProresTelecine(m_telecine));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
