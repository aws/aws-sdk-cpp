/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Ec2InstanceSavingsPlansConfiguration.h>
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

Ec2InstanceSavingsPlansConfiguration::Ec2InstanceSavingsPlansConfiguration() : 
    m_accountScopeHasBeenSet(false),
    m_hourlyCommitmentHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_paymentOptionHasBeenSet(false),
    m_savingsPlansRegionHasBeenSet(false),
    m_termHasBeenSet(false)
{
}

Ec2InstanceSavingsPlansConfiguration::Ec2InstanceSavingsPlansConfiguration(JsonView jsonValue) : 
    m_accountScopeHasBeenSet(false),
    m_hourlyCommitmentHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_paymentOptionHasBeenSet(false),
    m_savingsPlansRegionHasBeenSet(false),
    m_termHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2InstanceSavingsPlansConfiguration& Ec2InstanceSavingsPlansConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("instanceFamily"))
  {
    m_instanceFamily = jsonValue.GetString("instanceFamily");

    m_instanceFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = jsonValue.GetString("paymentOption");

    m_paymentOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("savingsPlansRegion"))
  {
    m_savingsPlansRegion = jsonValue.GetString("savingsPlansRegion");

    m_savingsPlansRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("term"))
  {
    m_term = jsonValue.GetString("term");

    m_termHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2InstanceSavingsPlansConfiguration::Jsonize() const
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

  if(m_instanceFamilyHasBeenSet)
  {
   payload.WithString("instanceFamily", m_instanceFamily);

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", m_paymentOption);

  }

  if(m_savingsPlansRegionHasBeenSet)
  {
   payload.WithString("savingsPlansRegion", m_savingsPlansRegion);

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
