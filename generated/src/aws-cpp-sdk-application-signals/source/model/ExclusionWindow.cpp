/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ExclusionWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

ExclusionWindow::ExclusionWindow(JsonView jsonValue)
{
  *this = jsonValue;
}

ExclusionWindow& ExclusionWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Window"))
  {
    m_window = jsonValue.GetObject("Window");
    m_windowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecurrenceRule"))
  {
    m_recurrenceRule = jsonValue.GetObject("RecurrenceRule");
    m_recurrenceRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ExclusionWindow::Jsonize() const
{
  JsonValue payload;

  if(m_windowHasBeenSet)
  {
   payload.WithObject("Window", m_window.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_recurrenceRuleHasBeenSet)
  {
   payload.WithObject("RecurrenceRule", m_recurrenceRule.Jsonize());

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
