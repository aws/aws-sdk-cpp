/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListCustomLineItemsFilter.h>
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

ListCustomLineItemsFilter::ListCustomLineItemsFilter() : 
    m_namesHasBeenSet(false),
    m_billingGroupsHasBeenSet(false),
    m_arnsHasBeenSet(false)
{
}

ListCustomLineItemsFilter::ListCustomLineItemsFilter(JsonView jsonValue) : 
    m_namesHasBeenSet(false),
    m_billingGroupsHasBeenSet(false),
    m_arnsHasBeenSet(false)
{
  *this = jsonValue;
}

ListCustomLineItemsFilter& ListCustomLineItemsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Names"))
  {
    Aws::Utils::Array<JsonView> namesJsonList = jsonValue.GetArray("Names");
    for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
    {
      m_names.push_back(namesJsonList[namesIndex].AsString());
    }
    m_namesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillingGroups"))
  {
    Aws::Utils::Array<JsonView> billingGroupsJsonList = jsonValue.GetArray("BillingGroups");
    for(unsigned billingGroupsIndex = 0; billingGroupsIndex < billingGroupsJsonList.GetLength(); ++billingGroupsIndex)
    {
      m_billingGroups.push_back(billingGroupsJsonList[billingGroupsIndex].AsString());
    }
    m_billingGroupsHasBeenSet = true;
  }

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

JsonValue ListCustomLineItemsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_namesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_billingGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> billingGroupsJsonList(m_billingGroups.size());
   for(unsigned billingGroupsIndex = 0; billingGroupsIndex < billingGroupsJsonList.GetLength(); ++billingGroupsIndex)
   {
     billingGroupsJsonList[billingGroupsIndex].AsString(m_billingGroups[billingGroupsIndex]);
   }
   payload.WithArray("BillingGroups", std::move(billingGroupsJsonList));

  }

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
