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

#include <aws/medialive/model/AudioSelectorSettings.h>
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

AudioSelectorSettings::AudioSelectorSettings() : 
    m_audioLanguageSelectionHasBeenSet(false),
    m_audioPidSelectionHasBeenSet(false)
{
}

AudioSelectorSettings::AudioSelectorSettings(const JsonValue& jsonValue) : 
    m_audioLanguageSelectionHasBeenSet(false),
    m_audioPidSelectionHasBeenSet(false)
{
  *this = jsonValue;
}

AudioSelectorSettings& AudioSelectorSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("audioLanguageSelection"))
  {
    m_audioLanguageSelection = jsonValue.GetObject("audioLanguageSelection");

    m_audioLanguageSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioPidSelection"))
  {
    m_audioPidSelection = jsonValue.GetObject("audioPidSelection");

    m_audioPidSelectionHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioSelectorSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioLanguageSelectionHasBeenSet)
  {
   payload.WithObject("audioLanguageSelection", m_audioLanguageSelection.Jsonize());

  }

  if(m_audioPidSelectionHasBeenSet)
  {
   payload.WithObject("audioPidSelection", m_audioPidSelection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
