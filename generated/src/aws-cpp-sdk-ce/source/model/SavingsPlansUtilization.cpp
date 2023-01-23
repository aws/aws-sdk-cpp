/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansUtilization.h>
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

SavingsPlansUtilization::SavingsPlansUtilization() : 
    m_totalCommitmentHasBeenSet(false),
    m_usedCommitmentHasBeenSet(false),
    m_unusedCommitmentHasBeenSet(false),
    m_utilizationPercentageHasBeenSet(false)
{
}

SavingsPlansUtilization::SavingsPlansUtilization(JsonView jsonValue) : 
    m_totalCommitmentHasBeenSet(false),
    m_usedCommitmentHasBeenSet(false),
    m_unusedCommitmentHasBeenSet(false),
    m_utilizationPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansUtilization& SavingsPlansUtilization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalCommitment"))
  {
    m_totalCommitment = jsonValue.GetString("TotalCommitment");

    m_totalCommitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsedCommitment"))
  {
    m_usedCommitment = jsonValue.GetString("UsedCommitment");

    m_usedCommitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnusedCommitment"))
  {
    m_unusedCommitment = jsonValue.GetString("UnusedCommitment");

    m_unusedCommitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UtilizationPercentage"))
  {
    m_utilizationPercentage = jsonValue.GetString("UtilizationPercentage");

    m_utilizationPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_totalCommitmentHasBeenSet)
  {
   payload.WithString("TotalCommitment", m_totalCommitment);

  }

  if(m_usedCommitmentHasBeenSet)
  {
   payload.WithString("UsedCommitment", m_usedCommitment);

  }

  if(m_unusedCommitmentHasBeenSet)
  {
   payload.WithString("UnusedCommitment", m_unusedCommitment);

  }

  if(m_utilizationPercentageHasBeenSet)
  {
   payload.WithString("UtilizationPercentage", m_utilizationPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
