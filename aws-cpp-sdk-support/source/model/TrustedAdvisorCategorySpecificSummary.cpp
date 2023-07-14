/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/TrustedAdvisorCategorySpecificSummary.h>
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

TrustedAdvisorCategorySpecificSummary::TrustedAdvisorCategorySpecificSummary() : 
    m_costOptimizingHasBeenSet(false)
{
}

TrustedAdvisorCategorySpecificSummary::TrustedAdvisorCategorySpecificSummary(JsonView jsonValue) : 
    m_costOptimizingHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorCategorySpecificSummary& TrustedAdvisorCategorySpecificSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("costOptimizing"))
  {
    m_costOptimizing = jsonValue.GetObject("costOptimizing");

    m_costOptimizingHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedAdvisorCategorySpecificSummary::Jsonize() const
{
  JsonValue payload;

  if(m_costOptimizingHasBeenSet)
  {
   payload.WithObject("costOptimizing", m_costOptimizing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
