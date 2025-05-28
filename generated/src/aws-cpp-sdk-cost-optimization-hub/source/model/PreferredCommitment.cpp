/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/PreferredCommitment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

PreferredCommitment::PreferredCommitment(JsonView jsonValue)
{
  *this = jsonValue;
}

PreferredCommitment& PreferredCommitment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("term"))
  {
    m_term = TermMapper::GetTermForName(jsonValue.GetString("term"));
    m_termHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = PaymentOptionMapper::GetPaymentOptionForName(jsonValue.GetString("paymentOption"));
    m_paymentOptionHasBeenSet = true;
  }
  return *this;
}

JsonValue PreferredCommitment::Jsonize() const
{
  JsonValue payload;

  if(m_termHasBeenSet)
  {
   payload.WithString("term", TermMapper::GetNameForTerm(m_term));
  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption));
  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
