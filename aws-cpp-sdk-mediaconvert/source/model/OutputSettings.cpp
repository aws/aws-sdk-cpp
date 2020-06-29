/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/OutputSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

OutputSettings::OutputSettings() : 
    m_hlsSettingsHasBeenSet(false)
{
}

OutputSettings::OutputSettings(JsonView jsonValue) : 
    m_hlsSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputSettings& OutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hlsSettings"))
  {
    m_hlsSettings = jsonValue.GetObject("hlsSettings");

    m_hlsSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_hlsSettingsHasBeenSet)
  {
   payload.WithObject("hlsSettings", m_hlsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
