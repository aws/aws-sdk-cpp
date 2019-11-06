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
