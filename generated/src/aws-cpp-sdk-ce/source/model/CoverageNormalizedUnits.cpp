/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CoverageNormalizedUnits.h>
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

CoverageNormalizedUnits::CoverageNormalizedUnits() : 
    m_onDemandNormalizedUnitsHasBeenSet(false),
    m_reservedNormalizedUnitsHasBeenSet(false),
    m_totalRunningNormalizedUnitsHasBeenSet(false),
    m_coverageNormalizedUnitsPercentageHasBeenSet(false)
{
}

CoverageNormalizedUnits::CoverageNormalizedUnits(JsonView jsonValue) : 
    m_onDemandNormalizedUnitsHasBeenSet(false),
    m_reservedNormalizedUnitsHasBeenSet(false),
    m_totalRunningNormalizedUnitsHasBeenSet(false),
    m_coverageNormalizedUnitsPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageNormalizedUnits& CoverageNormalizedUnits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OnDemandNormalizedUnits"))
  {
    m_onDemandNormalizedUnits = jsonValue.GetString("OnDemandNormalizedUnits");

    m_onDemandNormalizedUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservedNormalizedUnits"))
  {
    m_reservedNormalizedUnits = jsonValue.GetString("ReservedNormalizedUnits");

    m_reservedNormalizedUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalRunningNormalizedUnits"))
  {
    m_totalRunningNormalizedUnits = jsonValue.GetString("TotalRunningNormalizedUnits");

    m_totalRunningNormalizedUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoverageNormalizedUnitsPercentage"))
  {
    m_coverageNormalizedUnitsPercentage = jsonValue.GetString("CoverageNormalizedUnitsPercentage");

    m_coverageNormalizedUnitsPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageNormalizedUnits::Jsonize() const
{
  JsonValue payload;

  if(m_onDemandNormalizedUnitsHasBeenSet)
  {
   payload.WithString("OnDemandNormalizedUnits", m_onDemandNormalizedUnits);

  }

  if(m_reservedNormalizedUnitsHasBeenSet)
  {
   payload.WithString("ReservedNormalizedUnits", m_reservedNormalizedUnits);

  }

  if(m_totalRunningNormalizedUnitsHasBeenSet)
  {
   payload.WithString("TotalRunningNormalizedUnits", m_totalRunningNormalizedUnits);

  }

  if(m_coverageNormalizedUnitsPercentageHasBeenSet)
  {
   payload.WithString("CoverageNormalizedUnitsPercentage", m_coverageNormalizedUnitsPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
