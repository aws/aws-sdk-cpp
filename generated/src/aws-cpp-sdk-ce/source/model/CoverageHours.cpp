/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CoverageHours.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CoverageHours::CoverageHours() : 
    m_onDemandHoursHasBeenSet(false),
    m_reservedHoursHasBeenSet(false),
    m_totalRunningHoursHasBeenSet(false),
    m_coverageHoursPercentageHasBeenSet(false)
{
}

CoverageHours::CoverageHours(JsonView jsonValue) : 
    m_onDemandHoursHasBeenSet(false),
    m_reservedHoursHasBeenSet(false),
    m_totalRunningHoursHasBeenSet(false),
    m_coverageHoursPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageHours& CoverageHours::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OnDemandHours"))
  {
    m_onDemandHours = jsonValue.GetString("OnDemandHours");

    m_onDemandHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservedHours"))
  {
    m_reservedHours = jsonValue.GetString("ReservedHours");

    m_reservedHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalRunningHours"))
  {
    m_totalRunningHours = jsonValue.GetString("TotalRunningHours");

    m_totalRunningHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoverageHoursPercentage"))
  {
    m_coverageHoursPercentage = jsonValue.GetString("CoverageHoursPercentage");

    m_coverageHoursPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageHours::Jsonize() const
{
  JsonValue payload;

  if(m_onDemandHoursHasBeenSet)
  {
   payload.WithString("OnDemandHours", m_onDemandHours);

  }

  if(m_reservedHoursHasBeenSet)
  {
   payload.WithString("ReservedHours", m_reservedHours);

  }

  if(m_totalRunningHoursHasBeenSet)
  {
   payload.WithString("TotalRunningHours", m_totalRunningHours);

  }

  if(m_coverageHoursPercentageHasBeenSet)
  {
   payload.WithString("CoverageHoursPercentage", m_coverageHoursPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
