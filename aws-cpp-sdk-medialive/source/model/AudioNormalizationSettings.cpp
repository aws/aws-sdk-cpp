/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioNormalizationSettings.h>
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

AudioNormalizationSettings::AudioNormalizationSettings() : 
    m_algorithm(AudioNormalizationAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_algorithmControl(AudioNormalizationAlgorithmControl::NOT_SET),
    m_algorithmControlHasBeenSet(false),
    m_targetLkfs(0.0),
    m_targetLkfsHasBeenSet(false)
{
}

AudioNormalizationSettings::AudioNormalizationSettings(JsonView jsonValue) : 
    m_algorithm(AudioNormalizationAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_algorithmControl(AudioNormalizationAlgorithmControl::NOT_SET),
    m_algorithmControlHasBeenSet(false),
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

  if(m_targetLkfsHasBeenSet)
  {
   payload.WithDouble("targetLkfs", m_targetLkfs);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
