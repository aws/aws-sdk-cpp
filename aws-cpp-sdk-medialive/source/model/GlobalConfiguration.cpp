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

#include <aws/medialive/model/GlobalConfiguration.h>
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

GlobalConfiguration::GlobalConfiguration() : 
    m_initialAudioGain(0),
    m_initialAudioGainHasBeenSet(false),
    m_inputEndAction(GlobalConfigurationInputEndAction::NOT_SET),
    m_inputEndActionHasBeenSet(false),
    m_inputLossBehaviorHasBeenSet(false),
    m_outputLockingMode(GlobalConfigurationOutputLockingMode::NOT_SET),
    m_outputLockingModeHasBeenSet(false),
    m_outputTimingSource(GlobalConfigurationOutputTimingSource::NOT_SET),
    m_outputTimingSourceHasBeenSet(false),
    m_supportLowFramerateInputs(GlobalConfigurationLowFramerateInputs::NOT_SET),
    m_supportLowFramerateInputsHasBeenSet(false)
{
}

GlobalConfiguration::GlobalConfiguration(JsonView jsonValue) : 
    m_initialAudioGain(0),
    m_initialAudioGainHasBeenSet(false),
    m_inputEndAction(GlobalConfigurationInputEndAction::NOT_SET),
    m_inputEndActionHasBeenSet(false),
    m_inputLossBehaviorHasBeenSet(false),
    m_outputLockingMode(GlobalConfigurationOutputLockingMode::NOT_SET),
    m_outputLockingModeHasBeenSet(false),
    m_outputTimingSource(GlobalConfigurationOutputTimingSource::NOT_SET),
    m_outputTimingSourceHasBeenSet(false),
    m_supportLowFramerateInputs(GlobalConfigurationLowFramerateInputs::NOT_SET),
    m_supportLowFramerateInputsHasBeenSet(false)
{
  *this = jsonValue;
}

GlobalConfiguration& GlobalConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("initialAudioGain"))
  {
    m_initialAudioGain = jsonValue.GetInteger("initialAudioGain");

    m_initialAudioGainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputEndAction"))
  {
    m_inputEndAction = GlobalConfigurationInputEndActionMapper::GetGlobalConfigurationInputEndActionForName(jsonValue.GetString("inputEndAction"));

    m_inputEndActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossBehavior"))
  {
    m_inputLossBehavior = jsonValue.GetObject("inputLossBehavior");

    m_inputLossBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputLockingMode"))
  {
    m_outputLockingMode = GlobalConfigurationOutputLockingModeMapper::GetGlobalConfigurationOutputLockingModeForName(jsonValue.GetString("outputLockingMode"));

    m_outputLockingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputTimingSource"))
  {
    m_outputTimingSource = GlobalConfigurationOutputTimingSourceMapper::GetGlobalConfigurationOutputTimingSourceForName(jsonValue.GetString("outputTimingSource"));

    m_outputTimingSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportLowFramerateInputs"))
  {
    m_supportLowFramerateInputs = GlobalConfigurationLowFramerateInputsMapper::GetGlobalConfigurationLowFramerateInputsForName(jsonValue.GetString("supportLowFramerateInputs"));

    m_supportLowFramerateInputsHasBeenSet = true;
  }

  return *this;
}

JsonValue GlobalConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_initialAudioGainHasBeenSet)
  {
   payload.WithInteger("initialAudioGain", m_initialAudioGain);

  }

  if(m_inputEndActionHasBeenSet)
  {
   payload.WithString("inputEndAction", GlobalConfigurationInputEndActionMapper::GetNameForGlobalConfigurationInputEndAction(m_inputEndAction));
  }

  if(m_inputLossBehaviorHasBeenSet)
  {
   payload.WithObject("inputLossBehavior", m_inputLossBehavior.Jsonize());

  }

  if(m_outputLockingModeHasBeenSet)
  {
   payload.WithString("outputLockingMode", GlobalConfigurationOutputLockingModeMapper::GetNameForGlobalConfigurationOutputLockingMode(m_outputLockingMode));
  }

  if(m_outputTimingSourceHasBeenSet)
  {
   payload.WithString("outputTimingSource", GlobalConfigurationOutputTimingSourceMapper::GetNameForGlobalConfigurationOutputTimingSource(m_outputTimingSource));
  }

  if(m_supportLowFramerateInputsHasBeenSet)
  {
   payload.WithString("supportLowFramerateInputs", GlobalConfigurationLowFramerateInputsMapper::GetNameForGlobalConfigurationLowFramerateInputs(m_supportLowFramerateInputs));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
