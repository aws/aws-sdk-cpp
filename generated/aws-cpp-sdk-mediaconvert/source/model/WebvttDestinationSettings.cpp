/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/WebvttDestinationSettings.h>
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

WebvttDestinationSettings::WebvttDestinationSettings() : 
    m_accessibility(WebvttAccessibilitySubs::NOT_SET),
    m_accessibilityHasBeenSet(false),
    m_stylePassthrough(WebvttStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false)
{
}

WebvttDestinationSettings::WebvttDestinationSettings(JsonView jsonValue) : 
    m_accessibility(WebvttAccessibilitySubs::NOT_SET),
    m_accessibilityHasBeenSet(false),
    m_stylePassthrough(WebvttStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false)
{
  *this = jsonValue;
}

WebvttDestinationSettings& WebvttDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessibility"))
  {
    m_accessibility = WebvttAccessibilitySubsMapper::GetWebvttAccessibilitySubsForName(jsonValue.GetString("accessibility"));

    m_accessibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stylePassthrough"))
  {
    m_stylePassthrough = WebvttStylePassthroughMapper::GetWebvttStylePassthroughForName(jsonValue.GetString("stylePassthrough"));

    m_stylePassthroughHasBeenSet = true;
  }

  return *this;
}

JsonValue WebvttDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_accessibilityHasBeenSet)
  {
   payload.WithString("accessibility", WebvttAccessibilitySubsMapper::GetNameForWebvttAccessibilitySubs(m_accessibility));
  }

  if(m_stylePassthroughHasBeenSet)
  {
   payload.WithString("stylePassthrough", WebvttStylePassthroughMapper::GetNameForWebvttStylePassthrough(m_stylePassthrough));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
