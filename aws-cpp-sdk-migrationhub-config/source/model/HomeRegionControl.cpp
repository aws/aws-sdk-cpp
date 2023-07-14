/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhub-config/model/HomeRegionControl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubConfig
{
namespace Model
{

HomeRegionControl::HomeRegionControl() : 
    m_controlIdHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_requestedTimeHasBeenSet(false)
{
}

HomeRegionControl::HomeRegionControl(JsonView jsonValue) : 
    m_controlIdHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_requestedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

HomeRegionControl& HomeRegionControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ControlId"))
  {
    m_controlId = jsonValue.GetString("ControlId");

    m_controlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeRegion"))
  {
    m_homeRegion = jsonValue.GetString("HomeRegion");

    m_homeRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetObject("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedTime"))
  {
    m_requestedTime = jsonValue.GetDouble("RequestedTime");

    m_requestedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue HomeRegionControl::Jsonize() const
{
  JsonValue payload;

  if(m_controlIdHasBeenSet)
  {
   payload.WithString("ControlId", m_controlId);

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  if(m_requestedTimeHasBeenSet)
  {
   payload.WithDouble("RequestedTime", m_requestedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
