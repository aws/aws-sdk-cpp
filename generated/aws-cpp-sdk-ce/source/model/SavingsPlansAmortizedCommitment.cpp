/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansAmortizedCommitment.h>
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

SavingsPlansAmortizedCommitment::SavingsPlansAmortizedCommitment() : 
    m_amortizedRecurringCommitmentHasBeenSet(false),
    m_amortizedUpfrontCommitmentHasBeenSet(false),
    m_totalAmortizedCommitmentHasBeenSet(false)
{
}

SavingsPlansAmortizedCommitment::SavingsPlansAmortizedCommitment(JsonView jsonValue) : 
    m_amortizedRecurringCommitmentHasBeenSet(false),
    m_amortizedUpfrontCommitmentHasBeenSet(false),
    m_totalAmortizedCommitmentHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansAmortizedCommitment& SavingsPlansAmortizedCommitment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmortizedRecurringCommitment"))
  {
    m_amortizedRecurringCommitment = jsonValue.GetString("AmortizedRecurringCommitment");

    m_amortizedRecurringCommitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmortizedUpfrontCommitment"))
  {
    m_amortizedUpfrontCommitment = jsonValue.GetString("AmortizedUpfrontCommitment");

    m_amortizedUpfrontCommitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalAmortizedCommitment"))
  {
    m_totalAmortizedCommitment = jsonValue.GetString("TotalAmortizedCommitment");

    m_totalAmortizedCommitmentHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansAmortizedCommitment::Jsonize() const
{
  JsonValue payload;

  if(m_amortizedRecurringCommitmentHasBeenSet)
  {
   payload.WithString("AmortizedRecurringCommitment", m_amortizedRecurringCommitment);

  }

  if(m_amortizedUpfrontCommitmentHasBeenSet)
  {
   payload.WithString("AmortizedUpfrontCommitment", m_amortizedUpfrontCommitment);

  }

  if(m_totalAmortizedCommitmentHasBeenSet)
  {
   payload.WithString("TotalAmortizedCommitment", m_totalAmortizedCommitment);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
