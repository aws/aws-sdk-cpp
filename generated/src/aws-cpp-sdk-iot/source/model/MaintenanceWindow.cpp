/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MaintenanceWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

MaintenanceWindow::MaintenanceWindow() : 
    m_startTimeHasBeenSet(false),
    m_durationInMinutes(0),
    m_durationInMinutesHasBeenSet(false)
{
}

MaintenanceWindow::MaintenanceWindow(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_durationInMinutes(0),
    m_durationInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindow& MaintenanceWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationInMinutes"))
  {
    m_durationInMinutes = jsonValue.GetInteger("durationInMinutes");

    m_durationInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindow::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_durationInMinutesHasBeenSet)
  {
   payload.WithInteger("durationInMinutes", m_durationInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
