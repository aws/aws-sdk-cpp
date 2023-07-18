/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ImscDestinationSettings.h>
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

ImscDestinationSettings::ImscDestinationSettings() : 
    m_accessibility(ImscAccessibilitySubs::NOT_SET),
    m_accessibilityHasBeenSet(false),
    m_stylePassthrough(ImscStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false)
{
}

ImscDestinationSettings::ImscDestinationSettings(JsonView jsonValue) : 
    m_accessibility(ImscAccessibilitySubs::NOT_SET),
    m_accessibilityHasBeenSet(false),
    m_stylePassthrough(ImscStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false)
{
  *this = jsonValue;
}

ImscDestinationSettings& ImscDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessibility"))
  {
    m_accessibility = ImscAccessibilitySubsMapper::GetImscAccessibilitySubsForName(jsonValue.GetString("accessibility"));

    m_accessibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stylePassthrough"))
  {
    m_stylePassthrough = ImscStylePassthroughMapper::GetImscStylePassthroughForName(jsonValue.GetString("stylePassthrough"));

    m_stylePassthroughHasBeenSet = true;
  }

  return *this;
}

JsonValue ImscDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_accessibilityHasBeenSet)
  {
   payload.WithString("accessibility", ImscAccessibilitySubsMapper::GetNameForImscAccessibilitySubs(m_accessibility));
  }

  if(m_stylePassthroughHasBeenSet)
  {
   payload.WithString("stylePassthrough", ImscStylePassthroughMapper::GetNameForImscStylePassthrough(m_stylePassthrough));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
