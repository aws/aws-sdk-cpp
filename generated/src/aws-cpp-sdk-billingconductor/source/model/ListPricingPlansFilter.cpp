﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListPricingPlansFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

ListPricingPlansFilter::ListPricingPlansFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ListPricingPlansFilter& ListPricingPlansFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arns"))
  {
    Aws::Utils::Array<JsonView> arnsJsonList = jsonValue.GetArray("Arns");
    for(unsigned arnsIndex = 0; arnsIndex < arnsJsonList.GetLength(); ++arnsIndex)
    {
      m_arns.push_back(arnsJsonList[arnsIndex].AsString());
    }
    m_arnsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListPricingPlansFilter::Jsonize() const
{
  JsonValue payload;

  if(m_arnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> arnsJsonList(m_arns.size());
   for(unsigned arnsIndex = 0; arnsIndex < arnsJsonList.GetLength(); ++arnsIndex)
   {
     arnsJsonList[arnsIndex].AsString(m_arns[arnsIndex]);
   }
   payload.WithArray("Arns", std::move(arnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
