/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansUtilizationAggregates.h>
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

SavingsPlansUtilizationAggregates::SavingsPlansUtilizationAggregates() : 
    m_utilizationHasBeenSet(false),
    m_savingsHasBeenSet(false),
    m_amortizedCommitmentHasBeenSet(false)
{
}

SavingsPlansUtilizationAggregates::SavingsPlansUtilizationAggregates(JsonView jsonValue) : 
    m_utilizationHasBeenSet(false),
    m_savingsHasBeenSet(false),
    m_amortizedCommitmentHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansUtilizationAggregates& SavingsPlansUtilizationAggregates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Utilization"))
  {
    m_utilization = jsonValue.GetObject("Utilization");

    m_utilizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Savings"))
  {
    m_savings = jsonValue.GetObject("Savings");

    m_savingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmortizedCommitment"))
  {
    m_amortizedCommitment = jsonValue.GetObject("AmortizedCommitment");

    m_amortizedCommitmentHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansUtilizationAggregates::Jsonize() const
{
  JsonValue payload;

  if(m_utilizationHasBeenSet)
  {
   payload.WithObject("Utilization", m_utilization.Jsonize());

  }

  if(m_savingsHasBeenSet)
  {
   payload.WithObject("Savings", m_savings.Jsonize());

  }

  if(m_amortizedCommitmentHasBeenSet)
  {
   payload.WithObject("AmortizedCommitment", m_amortizedCommitment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
