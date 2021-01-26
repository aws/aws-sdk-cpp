/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FrameCaptureOutputSettings.h>
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

FrameCaptureOutputSettings::FrameCaptureOutputSettings() : 
    m_nameModifierHasBeenSet(false)
{
}

FrameCaptureOutputSettings::FrameCaptureOutputSettings(JsonView jsonValue) : 
    m_nameModifierHasBeenSet(false)
{
  *this = jsonValue;
}

FrameCaptureOutputSettings& FrameCaptureOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nameModifier"))
  {
    m_nameModifier = jsonValue.GetString("nameModifier");

    m_nameModifierHasBeenSet = true;
  }

  return *this;
}

JsonValue FrameCaptureOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_nameModifierHasBeenSet)
  {
   payload.WithString("nameModifier", m_nameModifier);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
