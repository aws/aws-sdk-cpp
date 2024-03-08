/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AudioLogSetting.h>
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

AudioLogSetting::AudioLogSetting() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_selectiveLoggingEnabled(false),
    m_selectiveLoggingEnabledHasBeenSet(false)
{
}

AudioLogSetting::AudioLogSetting(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_selectiveLoggingEnabled(false),
    m_selectiveLoggingEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

AudioLogSetting& AudioLogSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectiveLoggingEnabled"))
  {
    m_selectiveLoggingEnabled = jsonValue.GetBool("selectiveLoggingEnabled");

    m_selectiveLoggingEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioLogSetting::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_selectiveLoggingEnabledHasBeenSet)
  {
   payload.WithBool("selectiveLoggingEnabled", m_selectiveLoggingEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
