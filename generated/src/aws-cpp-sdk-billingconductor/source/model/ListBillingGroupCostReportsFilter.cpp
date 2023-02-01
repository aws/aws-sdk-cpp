/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListBillingGroupCostReportsFilter.h>
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

ListBillingGroupCostReportsFilter::ListBillingGroupCostReportsFilter() : 
    m_billingGroupArnsHasBeenSet(false)
{
}

ListBillingGroupCostReportsFilter::ListBillingGroupCostReportsFilter(JsonView jsonValue) : 
    m_billingGroupArnsHasBeenSet(false)
{
  *this = jsonValue;
}

ListBillingGroupCostReportsFilter& ListBillingGroupCostReportsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BillingGroupArns"))
  {
    Aws::Utils::Array<JsonView> billingGroupArnsJsonList = jsonValue.GetArray("BillingGroupArns");
    for(unsigned billingGroupArnsIndex = 0; billingGroupArnsIndex < billingGroupArnsJsonList.GetLength(); ++billingGroupArnsIndex)
    {
      m_billingGroupArns.push_back(billingGroupArnsJsonList[billingGroupArnsIndex].AsString());
    }
    m_billingGroupArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue ListBillingGroupCostReportsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_billingGroupArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> billingGroupArnsJsonList(m_billingGroupArns.size());
   for(unsigned billingGroupArnsIndex = 0; billingGroupArnsIndex < billingGroupArnsJsonList.GetLength(); ++billingGroupArnsIndex)
   {
     billingGroupArnsJsonList[billingGroupArnsIndex].AsString(m_billingGroupArns[billingGroupArnsIndex]);
   }
   payload.WithArray("BillingGroupArns", std::move(billingGroupArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
