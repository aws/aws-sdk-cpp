/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NegativeValueConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

NegativeValueConfiguration::NegativeValueConfiguration() : 
    m_displayMode(NegativeValueDisplayMode::NOT_SET),
    m_displayModeHasBeenSet(false)
{
}

NegativeValueConfiguration::NegativeValueConfiguration(JsonView jsonValue) : 
    m_displayMode(NegativeValueDisplayMode::NOT_SET),
    m_displayModeHasBeenSet(false)
{
  *this = jsonValue;
}

NegativeValueConfiguration& NegativeValueConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisplayMode"))
  {
    m_displayMode = NegativeValueDisplayModeMapper::GetNegativeValueDisplayModeForName(jsonValue.GetString("DisplayMode"));

    m_displayModeHasBeenSet = true;
  }

  return *this;
}

JsonValue NegativeValueConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_displayModeHasBeenSet)
  {
   payload.WithString("DisplayMode", NegativeValueDisplayModeMapper::GetNameForNegativeValueDisplayMode(m_displayMode));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
