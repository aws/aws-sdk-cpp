/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
