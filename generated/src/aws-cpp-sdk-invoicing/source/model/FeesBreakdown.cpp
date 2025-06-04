/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/FeesBreakdown.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Invoicing
{
namespace Model
{

FeesBreakdown::FeesBreakdown(JsonView jsonValue)
{
  *this = jsonValue;
}

FeesBreakdown& FeesBreakdown::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Breakdown"))
  {
    Aws::Utils::Array<JsonView> breakdownJsonList = jsonValue.GetArray("Breakdown");
    for(unsigned breakdownIndex = 0; breakdownIndex < breakdownJsonList.GetLength(); ++breakdownIndex)
    {
      m_breakdown.push_back(breakdownJsonList[breakdownIndex].AsObject());
    }
    m_breakdownHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalAmount"))
  {
    m_totalAmount = jsonValue.GetString("TotalAmount");
    m_totalAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue FeesBreakdown::Jsonize() const
{
  JsonValue payload;

  if(m_breakdownHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> breakdownJsonList(m_breakdown.size());
   for(unsigned breakdownIndex = 0; breakdownIndex < breakdownJsonList.GetLength(); ++breakdownIndex)
   {
     breakdownJsonList[breakdownIndex].AsObject(m_breakdown[breakdownIndex].Jsonize());
   }
   payload.WithArray("Breakdown", std::move(breakdownJsonList));

  }

  if(m_totalAmountHasBeenSet)
  {
   payload.WithString("TotalAmount", m_totalAmount);

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
