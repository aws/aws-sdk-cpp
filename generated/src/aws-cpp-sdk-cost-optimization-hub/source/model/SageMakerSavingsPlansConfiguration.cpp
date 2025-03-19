/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/SageMakerSavingsPlansConfiguration.h>
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

SageMakerSavingsPlansConfiguration::SageMakerSavingsPlansConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SageMakerSavingsPlansConfiguration& SageMakerSavingsPlansConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountScope"))
  {
    m_accountScope = jsonValue.GetString("accountScope");
    m_accountScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("term"))
  {
    m_term = jsonValue.GetString("term");
    m_termHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = jsonValue.GetString("paymentOption");
    m_paymentOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hourlyCommitment"))
  {
    m_hourlyCommitment = jsonValue.GetString("hourlyCommitment");
    m_hourlyCommitmentHasBeenSet = true;
  }
  return *this;
}

JsonValue SageMakerSavingsPlansConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accountScopeHasBeenSet)
  {
   payload.WithString("accountScope", m_accountScope);

  }

  if(m_termHasBeenSet)
  {
   payload.WithString("term", m_term);

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", m_paymentOption);

  }

  if(m_hourlyCommitmentHasBeenSet)
  {
   payload.WithString("hourlyCommitment", m_hourlyCommitment);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
