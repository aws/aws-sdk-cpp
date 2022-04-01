/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FailoverConditionSettings.h>
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

FailoverConditionSettings::FailoverConditionSettings() : 
    m_audioSilenceSettingsHasBeenSet(false),
    m_inputLossSettingsHasBeenSet(false),
    m_videoBlackSettingsHasBeenSet(false)
{
}

FailoverConditionSettings::FailoverConditionSettings(JsonView jsonValue) : 
    m_audioSilenceSettingsHasBeenSet(false),
    m_inputLossSettingsHasBeenSet(false),
    m_videoBlackSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

FailoverConditionSettings& FailoverConditionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioSilenceSettings"))
  {
    m_audioSilenceSettings = jsonValue.GetObject("audioSilenceSettings");

    m_audioSilenceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossSettings"))
  {
    m_inputLossSettings = jsonValue.GetObject("inputLossSettings");

    m_inputLossSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoBlackSettings"))
  {
    m_videoBlackSettings = jsonValue.GetObject("videoBlackSettings");

    m_videoBlackSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FailoverConditionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioSilenceSettingsHasBeenSet)
  {
   payload.WithObject("audioSilenceSettings", m_audioSilenceSettings.Jsonize());

  }

  if(m_inputLossSettingsHasBeenSet)
  {
   payload.WithObject("inputLossSettings", m_inputLossSettings.Jsonize());

  }

  if(m_videoBlackSettingsHasBeenSet)
  {
   payload.WithObject("videoBlackSettings", m_videoBlackSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
