/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/GenerativeAISettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

GenerativeAISettings::GenerativeAISettings() : 
    m_runtimeSettingsHasBeenSet(false),
    m_buildtimeSettingsHasBeenSet(false)
{
}

GenerativeAISettings::GenerativeAISettings(JsonView jsonValue) : 
    m_runtimeSettingsHasBeenSet(false),
    m_buildtimeSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

GenerativeAISettings& GenerativeAISettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("runtimeSettings"))
  {
    m_runtimeSettings = jsonValue.GetObject("runtimeSettings");

    m_runtimeSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildtimeSettings"))
  {
    m_buildtimeSettings = jsonValue.GetObject("buildtimeSettings");

    m_buildtimeSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue GenerativeAISettings::Jsonize() const
{
  JsonValue payload;

  if(m_runtimeSettingsHasBeenSet)
  {
   payload.WithObject("runtimeSettings", m_runtimeSettings.Jsonize());

  }

  if(m_buildtimeSettingsHasBeenSet)
  {
   payload.WithObject("buildtimeSettings", m_buildtimeSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
