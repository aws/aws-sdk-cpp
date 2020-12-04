/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioSilenceFailoverSettings.h>
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

AudioSilenceFailoverSettings::AudioSilenceFailoverSettings() : 
    m_audioSelectorNameHasBeenSet(false),
    m_audioSilenceThresholdMsec(0),
    m_audioSilenceThresholdMsecHasBeenSet(false)
{
}

AudioSilenceFailoverSettings::AudioSilenceFailoverSettings(JsonView jsonValue) : 
    m_audioSelectorNameHasBeenSet(false),
    m_audioSilenceThresholdMsec(0),
    m_audioSilenceThresholdMsecHasBeenSet(false)
{
  *this = jsonValue;
}

AudioSilenceFailoverSettings& AudioSilenceFailoverSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioSelectorName"))
  {
    m_audioSelectorName = jsonValue.GetString("audioSelectorName");

    m_audioSelectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioSilenceThresholdMsec"))
  {
    m_audioSilenceThresholdMsec = jsonValue.GetInteger("audioSilenceThresholdMsec");

    m_audioSilenceThresholdMsecHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioSilenceFailoverSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioSelectorNameHasBeenSet)
  {
   payload.WithString("audioSelectorName", m_audioSelectorName);

  }

  if(m_audioSilenceThresholdMsecHasBeenSet)
  {
   payload.WithInteger("audioSilenceThresholdMsec", m_audioSilenceThresholdMsec);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
