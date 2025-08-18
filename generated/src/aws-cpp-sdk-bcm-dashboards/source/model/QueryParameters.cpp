/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/QueryParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{

QueryParameters::QueryParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryParameters& QueryParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("costAndUsage"))
  {
    m_costAndUsage = jsonValue.GetObject("costAndUsage");
    m_costAndUsageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("savingsPlansCoverage"))
  {
    m_savingsPlansCoverage = jsonValue.GetObject("savingsPlansCoverage");
    m_savingsPlansCoverageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("savingsPlansUtilization"))
  {
    m_savingsPlansUtilization = jsonValue.GetObject("savingsPlansUtilization");
    m_savingsPlansUtilizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservationCoverage"))
  {
    m_reservationCoverage = jsonValue.GetObject("reservationCoverage");
    m_reservationCoverageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservationUtilization"))
  {
    m_reservationUtilization = jsonValue.GetObject("reservationUtilization");
    m_reservationUtilizationHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryParameters::Jsonize() const
{
  JsonValue payload;

  if(m_costAndUsageHasBeenSet)
  {
   payload.WithObject("costAndUsage", m_costAndUsage.Jsonize());

  }

  if(m_savingsPlansCoverageHasBeenSet)
  {
   payload.WithObject("savingsPlansCoverage", m_savingsPlansCoverage.Jsonize());

  }

  if(m_savingsPlansUtilizationHasBeenSet)
  {
   payload.WithObject("savingsPlansUtilization", m_savingsPlansUtilization.Jsonize());

  }

  if(m_reservationCoverageHasBeenSet)
  {
   payload.WithObject("reservationCoverage", m_reservationCoverage.Jsonize());

  }

  if(m_reservationUtilizationHasBeenSet)
  {
   payload.WithObject("reservationUtilization", m_reservationUtilization.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
