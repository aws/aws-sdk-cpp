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
    m_inputLossSettingsHasBeenSet(false)
{
}

FailoverConditionSettings::FailoverConditionSettings(JsonView jsonValue) : 
    m_inputLossSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

FailoverConditionSettings& FailoverConditionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputLossSettings"))
  {
    m_inputLossSettings = jsonValue.GetObject("inputLossSettings");

    m_inputLossSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FailoverConditionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_inputLossSettingsHasBeenSet)
  {
   payload.WithObject("inputLossSettings", m_inputLossSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
