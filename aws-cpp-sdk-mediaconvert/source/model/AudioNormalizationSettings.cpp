/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioNormalizationSettings.h>
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

AudioNormalizationSettings::AudioNormalizationSettings() : 
    m_algorithm(AudioNormalizationAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_algorithmControl(AudioNormalizationAlgorithmControl::NOT_SET),
    m_algorithmControlHasBeenSet(false),
    m_correctionGateLevel(0),
    m_correctionGateLevelHasBeenSet(false),
    m_loudnessLogging(AudioNormalizationLoudnessLogging::NOT_SET),
    m_loudnessLoggingHasBeenSet(false),
    m_peakCalculation(AudioNormalizationPeakCalculation::NOT_SET),
    m_peakCalculationHasBeenSet(false),
    m_targetLkfs(0.0),
    m_targetLkfsHasBeenSet(false)
{
}

AudioNormalizationSettings::AudioNormalizationSettings(JsonView jsonValue) : 
    m_algorithm(AudioNormalizationAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_algorithmControl(AudioNormalizationAlgorithmControl::NOT_SET),
    m_algorithmControlHasBeenSet(false),
    m_correctionGateLevel(0),
    m_correctionGateLevelHasBeenSet(false),
    m_loudnessLogging(AudioNormalizationLoudnessLogging::NOT_SET),
    m_loudnessLoggingHasBeenSet(false),
    m_peakCalculation(AudioNormalizationPeakCalculation::NOT_SET),
    m_peakCalculationHasBeenSet(false),
    m_targetLkfs(0.0),
    m_targetLkfsHasBeenSet(false)
{
  *this = jsonValue;
}

AudioNormalizationSettings& AudioNormalizationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("algorithm"))
  {
    m_algorithm = AudioNormalizationAlgorithmMapper::GetAudioNormalizationAlgorithmForName(jsonValue.GetString("algorithm"));

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("algorithmControl"))
  {
    m_algorithmControl = AudioNormalizationAlgorithmControlMapper::GetAudioNormalizationAlgorithmControlForName(jsonValue.GetString("algorithmControl"));

    m_algorithmControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("correctionGateLevel"))
  {
    m_correctionGateLevel = jsonValue.GetInteger("correctionGateLevel");

    m_correctionGateLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loudnessLogging"))
  {
    m_loudnessLogging = AudioNormalizationLoudnessLoggingMapper::GetAudioNormalizationLoudnessLoggingForName(jsonValue.GetString("loudnessLogging"));

    m_loudnessLoggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("peakCalculation"))
  {
    m_peakCalculation = AudioNormalizationPeakCalculationMapper::GetAudioNormalizationPeakCalculationForName(jsonValue.GetString("peakCalculation"));

    m_peakCalculationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetLkfs"))
  {
    m_targetLkfs = jsonValue.GetDouble("targetLkfs");

    m_targetLkfsHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioNormalizationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("algorithm", AudioNormalizationAlgorithmMapper::GetNameForAudioNormalizationAlgorithm(m_algorithm));
  }

  if(m_algorithmControlHasBeenSet)
  {
   payload.WithString("algorithmControl", AudioNormalizationAlgorithmControlMapper::GetNameForAudioNormalizationAlgorithmControl(m_algorithmControl));
  }

  if(m_correctionGateLevelHasBeenSet)
  {
   payload.WithInteger("correctionGateLevel", m_correctionGateLevel);

  }

  if(m_loudnessLoggingHasBeenSet)
  {
   payload.WithString("loudnessLogging", AudioNormalizationLoudnessLoggingMapper::GetNameForAudioNormalizationLoudnessLogging(m_loudnessLogging));
  }

  if(m_peakCalculationHasBeenSet)
  {
   payload.WithString("peakCalculation", AudioNormalizationPeakCalculationMapper::GetNameForAudioNormalizationPeakCalculation(m_peakCalculation));
  }

  if(m_targetLkfsHasBeenSet)
  {
   payload.WithDouble("targetLkfs", m_targetLkfs);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
