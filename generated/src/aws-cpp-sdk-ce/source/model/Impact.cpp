/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Impact.h>
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

Impact::Impact() : 
    m_maxImpact(0.0),
    m_maxImpactHasBeenSet(false),
    m_totalImpact(0.0),
    m_totalImpactHasBeenSet(false),
    m_totalActualSpend(0.0),
    m_totalActualSpendHasBeenSet(false),
    m_totalExpectedSpend(0.0),
    m_totalExpectedSpendHasBeenSet(false),
    m_totalImpactPercentage(0.0),
    m_totalImpactPercentageHasBeenSet(false)
{
}

Impact::Impact(JsonView jsonValue) : 
    m_maxImpact(0.0),
    m_maxImpactHasBeenSet(false),
    m_totalImpact(0.0),
    m_totalImpactHasBeenSet(false),
    m_totalActualSpend(0.0),
    m_totalActualSpendHasBeenSet(false),
    m_totalExpectedSpend(0.0),
    m_totalExpectedSpendHasBeenSet(false),
    m_totalImpactPercentage(0.0),
    m_totalImpactPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

Impact& Impact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxImpact"))
  {
    m_maxImpact = jsonValue.GetDouble("MaxImpact");

    m_maxImpactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalImpact"))
  {
    m_totalImpact = jsonValue.GetDouble("TotalImpact");

    m_totalImpactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalActualSpend"))
  {
    m_totalActualSpend = jsonValue.GetDouble("TotalActualSpend");

    m_totalActualSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalExpectedSpend"))
  {
    m_totalExpectedSpend = jsonValue.GetDouble("TotalExpectedSpend");

    m_totalExpectedSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalImpactPercentage"))
  {
    m_totalImpactPercentage = jsonValue.GetDouble("TotalImpactPercentage");

    m_totalImpactPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue Impact::Jsonize() const
{
  JsonValue payload;

  if(m_maxImpactHasBeenSet)
  {
   payload.WithDouble("MaxImpact", m_maxImpact);

  }

  if(m_totalImpactHasBeenSet)
  {
   payload.WithDouble("TotalImpact", m_totalImpact);

  }

  if(m_totalActualSpendHasBeenSet)
  {
   payload.WithDouble("TotalActualSpend", m_totalActualSpend);

  }

  if(m_totalExpectedSpendHasBeenSet)
  {
   payload.WithDouble("TotalExpectedSpend", m_totalExpectedSpend);

  }

  if(m_totalImpactPercentageHasBeenSet)
  {
   payload.WithDouble("TotalImpactPercentage", m_totalImpactPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
