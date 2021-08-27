/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_audioPidSelectionHasBeenSet(false),
    m_audioTrackSelectionHasBeenSet(false)
{
}

AudioSelectorSettings::AudioSelectorSettings(JsonView jsonValue) : 
    m_audioLanguageSelectionHasBeenSet(false),
    m_audioPidSelectionHasBeenSet(false),
    m_audioTrackSelectionHasBeenSet(false)
{
  *this = jsonValue;
}

AudioSelectorSettings& AudioSelectorSettings::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("audioTrackSelection"))
  {
    m_audioTrackSelection = jsonValue.GetObject("audioTrackSelection");

    m_audioTrackSelectionHasBeenSet = true;
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

  if(m_audioTrackSelectionHasBeenSet)
  {
   payload.WithObject("audioTrackSelection", m_audioTrackSelection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
