/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/TimeWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

TimeWindow::TimeWindow(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeWindow& TimeWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("openHours"))
  {
    m_openHours = jsonValue.GetObject("openHours");
    m_openHoursHasBeenSet = true;
  }
  if(jsonValue.ValueExists("restrictedPeriods"))
  {
    m_restrictedPeriods = jsonValue.GetObject("restrictedPeriods");
    m_restrictedPeriodsHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeWindow::Jsonize() const
{
  JsonValue payload;

  if(m_openHoursHasBeenSet)
  {
   payload.WithObject("openHours", m_openHours.Jsonize());

  }

  if(m_restrictedPeriodsHasBeenSet)
  {
   payload.WithObject("restrictedPeriods", m_restrictedPeriods.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
