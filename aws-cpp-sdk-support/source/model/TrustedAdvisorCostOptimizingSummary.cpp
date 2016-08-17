/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/support/model/TrustedAdvisorCostOptimizingSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

TrustedAdvisorCostOptimizingSummary::TrustedAdvisorCostOptimizingSummary() : 
    m_estimatedMonthlySavings(0.0),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_estimatedPercentMonthlySavings(0.0),
    m_estimatedPercentMonthlySavingsHasBeenSet(false)
{
}

TrustedAdvisorCostOptimizingSummary::TrustedAdvisorCostOptimizingSummary(const JsonValue& jsonValue) : 
    m_estimatedMonthlySavings(0.0),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_estimatedPercentMonthlySavings(0.0),
    m_estimatedPercentMonthlySavingsHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorCostOptimizingSummary& TrustedAdvisorCostOptimizingSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("estimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetDouble("estimatedMonthlySavings");

    m_estimatedMonthlySavingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedPercentMonthlySavings"))
  {
    m_estimatedPercentMonthlySavings = jsonValue.GetDouble("estimatedPercentMonthlySavings");

    m_estimatedPercentMonthlySavingsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedAdvisorCostOptimizingSummary::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedMonthlySavingsHasBeenSet)
  {
   payload.WithDouble("estimatedMonthlySavings", m_estimatedMonthlySavings);

  }

  if(m_estimatedPercentMonthlySavingsHasBeenSet)
  {
   payload.WithDouble("estimatedPercentMonthlySavings", m_estimatedPercentMonthlySavings);

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws