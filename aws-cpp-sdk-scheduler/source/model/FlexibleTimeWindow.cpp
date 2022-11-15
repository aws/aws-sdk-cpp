/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/FlexibleTimeWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Scheduler
{
namespace Model
{

FlexibleTimeWindow::FlexibleTimeWindow() : 
    m_maximumWindowInMinutes(0),
    m_maximumWindowInMinutesHasBeenSet(false),
    m_mode(FlexibleTimeWindowMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

FlexibleTimeWindow::FlexibleTimeWindow(JsonView jsonValue) : 
    m_maximumWindowInMinutes(0),
    m_maximumWindowInMinutesHasBeenSet(false),
    m_mode(FlexibleTimeWindowMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

FlexibleTimeWindow& FlexibleTimeWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaximumWindowInMinutes"))
  {
    m_maximumWindowInMinutes = jsonValue.GetInteger("MaximumWindowInMinutes");

    m_maximumWindowInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = FlexibleTimeWindowModeMapper::GetFlexibleTimeWindowModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue FlexibleTimeWindow::Jsonize() const
{
  JsonValue payload;

  if(m_maximumWindowInMinutesHasBeenSet)
  {
   payload.WithInteger("MaximumWindowInMinutes", m_maximumWindowInMinutes);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", FlexibleTimeWindowModeMapper::GetNameForFlexibleTimeWindowMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace Scheduler
} // namespace Aws
