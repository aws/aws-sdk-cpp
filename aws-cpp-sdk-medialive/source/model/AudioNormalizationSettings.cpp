/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

AudioNormalizationSettings::AudioNormalizationSettings(const JsonValue& jsonValue) : 
    m_algorithm(AudioNormalizationAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_algorithmControl(AudioNormalizationAlgorithmControl::NOT_SET),
    m_algorithmControlHasBeenSet(false),
    m_targetLkfs(0.0),
    m_targetLkfsHasBeenSet(false)
{
  *this = jsonValue;
}

AudioNormalizationSettings& AudioNormalizationSettings::operator =(const JsonValue& jsonValue)
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
