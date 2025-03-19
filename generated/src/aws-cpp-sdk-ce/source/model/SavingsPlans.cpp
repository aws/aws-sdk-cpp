/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlans.h>
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

SavingsPlans::SavingsPlans(JsonView jsonValue)
{
  *this = jsonValue;
}

SavingsPlans& SavingsPlans::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PaymentOption"))
  {
    m_paymentOption = PaymentOptionMapper::GetPaymentOptionForName(jsonValue.GetString("PaymentOption"));
    m_paymentOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SavingsPlansType"))
  {
    m_savingsPlansType = SupportedSavingsPlansTypeMapper::GetSupportedSavingsPlansTypeForName(jsonValue.GetString("SavingsPlansType"));
    m_savingsPlansTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceFamily"))
  {
    m_instanceFamily = jsonValue.GetString("InstanceFamily");
    m_instanceFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TermInYears"))
  {
    m_termInYears = TermInYearsMapper::GetTermInYearsForName(jsonValue.GetString("TermInYears"));
    m_termInYearsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SavingsPlansCommitment"))
  {
    m_savingsPlansCommitment = jsonValue.GetDouble("SavingsPlansCommitment");
    m_savingsPlansCommitmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OfferingId"))
  {
    m_offeringId = jsonValue.GetString("OfferingId");
    m_offeringIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SavingsPlans::Jsonize() const
{
  JsonValue payload;

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("PaymentOption", PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption));
  }

  if(m_savingsPlansTypeHasBeenSet)
  {
   payload.WithString("SavingsPlansType", SupportedSavingsPlansTypeMapper::GetNameForSupportedSavingsPlansType(m_savingsPlansType));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_instanceFamilyHasBeenSet)
  {
   payload.WithString("InstanceFamily", m_instanceFamily);

  }

  if(m_termInYearsHasBeenSet)
  {
   payload.WithString("TermInYears", TermInYearsMapper::GetNameForTermInYears(m_termInYears));
  }

  if(m_savingsPlansCommitmentHasBeenSet)
  {
   payload.WithDouble("SavingsPlansCommitment", m_savingsPlansCommitment);

  }

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("OfferingId", m_offeringId);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
