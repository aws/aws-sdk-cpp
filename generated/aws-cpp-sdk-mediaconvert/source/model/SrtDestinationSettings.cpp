/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/SrtDestinationSettings.h>
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

SrtDestinationSettings::SrtDestinationSettings() : 
    m_stylePassthrough(SrtStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false)
{
}

SrtDestinationSettings::SrtDestinationSettings(JsonView jsonValue) : 
    m_stylePassthrough(SrtStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false)
{
  *this = jsonValue;
}

SrtDestinationSettings& SrtDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stylePassthrough"))
  {
    m_stylePassthrough = SrtStylePassthroughMapper::GetSrtStylePassthroughForName(jsonValue.GetString("stylePassthrough"));

    m_stylePassthroughHasBeenSet = true;
  }

  return *this;
}

JsonValue SrtDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_stylePassthroughHasBeenSet)
  {
   payload.WithString("stylePassthrough", SrtStylePassthroughMapper::GetNameForSrtStylePassthrough(m_stylePassthrough));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
