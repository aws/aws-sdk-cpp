/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ComputeSavingsPlansConfiguration.h>
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

ComputeSavingsPlansConfiguration::ComputeSavingsPlansConfiguration() : 
    m_accountScopeHasBeenSet(false),
    m_hourlyCommitmentHasBeenSet(false),
    m_paymentOptionHasBeenSet(false),
    m_termHasBeenSet(false)
{
}

ComputeSavingsPlansConfiguration::ComputeSavingsPlansConfiguration(JsonView jsonValue) : 
    m_accountScopeHasBeenSet(false),
    m_hourlyCommitmentHasBeenSet(false),
    m_paymentOptionHasBeenSet(false),
    m_termHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeSavingsPlansConfiguration& ComputeSavingsPlansConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountScope"))
  {
    m_accountScope = jsonValue.GetString("accountScope");

    m_accountScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hourlyCommitment"))
  {
    m_hourlyCommitment = jsonValue.GetString("hourlyCommitment");

    m_hourlyCommitmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = jsonValue.GetString("paymentOption");

    m_paymentOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("term"))
  {
    m_term = jsonValue.GetString("term");

    m_termHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeSavingsPlansConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accountScopeHasBeenSet)
  {
   payload.WithString("accountScope", m_accountScope);

  }

  if(m_hourlyCommitmentHasBeenSet)
  {
   payload.WithString("hourlyCommitment", m_hourlyCommitment);

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", m_paymentOption);

  }

  if(m_termHasBeenSet)
  {
   payload.WithString("term", m_term);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
