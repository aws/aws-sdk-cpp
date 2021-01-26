/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AtmosSettings.h>
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

Eac3AtmosSettings::Eac3AtmosSettings() : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bitstreamMode(Eac3AtmosBitstreamMode::NOT_SET),
    m_bitstreamModeHasBeenSet(false),
    m_codingMode(Eac3AtmosCodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_dialogueIntelligence(Eac3AtmosDialogueIntelligence::NOT_SET),
    m_dialogueIntelligenceHasBeenSet(false),
    m_dynamicRangeCompressionLine(Eac3AtmosDynamicRangeCompressionLine::NOT_SET),
    m_dynamicRangeCompressionLineHasBeenSet(false),
    m_dynamicRangeCompressionRf(Eac3AtmosDynamicRangeCompressionRf::NOT_SET),
    m_dynamicRangeCompressionRfHasBeenSet(false),
    m_loRoCenterMixLevel(0.0),
    m_loRoCenterMixLevelHasBeenSet(false),
    m_loRoSurroundMixLevel(0.0),
    m_loRoSurroundMixLevelHasBeenSet(false),
    m_ltRtCenterMixLevel(0.0),
    m_ltRtCenterMixLevelHasBeenSet(false),
    m_ltRtSurroundMixLevel(0.0),
    m_ltRtSurroundMixLevelHasBeenSet(false),
    m_meteringMode(Eac3AtmosMeteringMode::NOT_SET),
    m_meteringModeHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_speechThreshold(0),
    m_speechThresholdHasBeenSet(false),
    m_stereoDownmix(Eac3AtmosStereoDownmix::NOT_SET),
    m_stereoDownmixHasBeenSet(false),
    m_surroundExMode(Eac3AtmosSurroundExMode::NOT_SET),
    m_surroundExModeHasBeenSet(false)
{
}

Eac3AtmosSettings::Eac3AtmosSettings(JsonView jsonValue) : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bitstreamMode(Eac3AtmosBitstreamMode::NOT_SET),
    m_bitstreamModeHasBeenSet(false),
    m_codingMode(Eac3AtmosCodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_dialogueIntelligence(Eac3AtmosDialogueIntelligence::NOT_SET),
    m_dialogueIntelligenceHasBeenSet(false),
    m_dynamicRangeCompressionLine(Eac3AtmosDynamicRangeCompressionLine::NOT_SET),
    m_dynamicRangeCompressionLineHasBeenSet(false),
    m_dynamicRangeCompressionRf(Eac3AtmosDynamicRangeCompressionRf::NOT_SET),
    m_dynamicRangeCompressionRfHasBeenSet(false),
    m_loRoCenterMixLevel(0.0),
    m_loRoCenterMixLevelHasBeenSet(false),
    m_loRoSurroundMixLevel(0.0),
    m_loRoSurroundMixLevelHasBeenSet(false),
    m_ltRtCenterMixLevel(0.0),
    m_ltRtCenterMixLevelHasBeenSet(false),
    m_ltRtSurroundMixLevel(0.0),
    m_ltRtSurroundMixLevelHasBeenSet(false),
    m_meteringMode(Eac3AtmosMeteringMode::NOT_SET),
    m_meteringModeHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_speechThreshold(0),
    m_speechThresholdHasBeenSet(false),
    m_stereoDownmix(Eac3AtmosStereoDownmix::NOT_SET),
    m_stereoDownmixHasBeenSet(false),
    m_surroundExMode(Eac3AtmosSurroundExMode::NOT_SET),
    m_surroundExModeHasBeenSet(false)
{
  *this = jsonValue;
}

Eac3AtmosSettings& Eac3AtmosSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitstreamMode"))
  {
    m_bitstreamMode = Eac3AtmosBitstreamModeMapper::GetEac3AtmosBitstreamModeForName(jsonValue.GetString("bitstreamMode"));

    m_bitstreamModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codingMode"))
  {
    m_codingMode = Eac3AtmosCodingModeMapper::GetEac3AtmosCodingModeForName(jsonValue.GetString("codingMode"));

    m_codingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dialogueIntelligence"))
  {
    m_dialogueIntelligence = Eac3AtmosDialogueIntelligenceMapper::GetEac3AtmosDialogueIntelligenceForName(jsonValue.GetString("dialogueIntelligence"));

    m_dialogueIntelligenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamicRangeCompressionLine"))
  {
    m_dynamicRangeCompressionLine = Eac3AtmosDynamicRangeCompressionLineMapper::GetEac3AtmosDynamicRangeCompressionLineForName(jsonValue.GetString("dynamicRangeCompressionLine"));

    m_dynamicRangeCompressionLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamicRangeCompressionRf"))
  {
    m_dynamicRangeCompressionRf = Eac3AtmosDynamicRangeCompressionRfMapper::GetEac3AtmosDynamicRangeCompressionRfForName(jsonValue.GetString("dynamicRangeCompressionRf"));

    m_dynamicRangeCompressionRfHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loRoCenterMixLevel"))
  {
    m_loRoCenterMixLevel = jsonValue.GetDouble("loRoCenterMixLevel");

    m_loRoCenterMixLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loRoSurroundMixLevel"))
  {
    m_loRoSurroundMixLevel = jsonValue.GetDouble("loRoSurroundMixLevel");

    m_loRoSurroundMixLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ltRtCenterMixLevel"))
  {
    m_ltRtCenterMixLevel = jsonValue.GetDouble("ltRtCenterMixLevel");

    m_ltRtCenterMixLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ltRtSurroundMixLevel"))
  {
    m_ltRtSurroundMixLevel = jsonValue.GetDouble("ltRtSurroundMixLevel");

    m_ltRtSurroundMixLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("meteringMode"))
  {
    m_meteringMode = Eac3AtmosMeteringModeMapper::GetEac3AtmosMeteringModeForName(jsonValue.GetString("meteringMode"));

    m_meteringModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("speechThreshold"))
  {
    m_speechThreshold = jsonValue.GetInteger("speechThreshold");

    m_speechThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stereoDownmix"))
  {
    m_stereoDownmix = Eac3AtmosStereoDownmixMapper::GetEac3AtmosStereoDownmixForName(jsonValue.GetString("stereoDownmix"));

    m_stereoDownmixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("surroundExMode"))
  {
    m_surroundExMode = Eac3AtmosSurroundExModeMapper::GetEac3AtmosSurroundExModeForName(jsonValue.GetString("surroundExMode"));

    m_surroundExModeHasBeenSet = true;
  }

  return *this;
}

JsonValue Eac3AtmosSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_bitstreamModeHasBeenSet)
  {
   payload.WithString("bitstreamMode", Eac3AtmosBitstreamModeMapper::GetNameForEac3AtmosBitstreamMode(m_bitstreamMode));
  }

  if(m_codingModeHasBeenSet)
  {
   payload.WithString("codingMode", Eac3AtmosCodingModeMapper::GetNameForEac3AtmosCodingMode(m_codingMode));
  }

  if(m_dialogueIntelligenceHasBeenSet)
  {
   payload.WithString("dialogueIntelligence", Eac3AtmosDialogueIntelligenceMapper::GetNameForEac3AtmosDialogueIntelligence(m_dialogueIntelligence));
  }

  if(m_dynamicRangeCompressionLineHasBeenSet)
  {
   payload.WithString("dynamicRangeCompressionLine", Eac3AtmosDynamicRangeCompressionLineMapper::GetNameForEac3AtmosDynamicRangeCompressionLine(m_dynamicRangeCompressionLine));
  }

  if(m_dynamicRangeCompressionRfHasBeenSet)
  {
   payload.WithString("dynamicRangeCompressionRf", Eac3AtmosDynamicRangeCompressionRfMapper::GetNameForEac3AtmosDynamicRangeCompressionRf(m_dynamicRangeCompressionRf));
  }

  if(m_loRoCenterMixLevelHasBeenSet)
  {
   payload.WithDouble("loRoCenterMixLevel", m_loRoCenterMixLevel);

  }

  if(m_loRoSurroundMixLevelHasBeenSet)
  {
   payload.WithDouble("loRoSurroundMixLevel", m_loRoSurroundMixLevel);

  }

  if(m_ltRtCenterMixLevelHasBeenSet)
  {
   payload.WithDouble("ltRtCenterMixLevel", m_ltRtCenterMixLevel);

  }

  if(m_ltRtSurroundMixLevelHasBeenSet)
  {
   payload.WithDouble("ltRtSurroundMixLevel", m_ltRtSurroundMixLevel);

  }

  if(m_meteringModeHasBeenSet)
  {
   payload.WithString("meteringMode", Eac3AtmosMeteringModeMapper::GetNameForEac3AtmosMeteringMode(m_meteringMode));
  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInteger("sampleRate", m_sampleRate);

  }

  if(m_speechThresholdHasBeenSet)
  {
   payload.WithInteger("speechThreshold", m_speechThreshold);

  }

  if(m_stereoDownmixHasBeenSet)
  {
   payload.WithString("stereoDownmix", Eac3AtmosStereoDownmixMapper::GetNameForEac3AtmosStereoDownmix(m_stereoDownmix));
  }

  if(m_surroundExModeHasBeenSet)
  {
   payload.WithString("surroundExMode", Eac3AtmosSurroundExModeMapper::GetNameForEac3AtmosSurroundExMode(m_surroundExMode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
