/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListBillingGroupsFilter.h>
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

ListBillingGroupsFilter::ListBillingGroupsFilter() : 
    m_arnsHasBeenSet(false),
    m_pricingPlanHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_autoAssociate(false),
    m_autoAssociateHasBeenSet(false)
{
}

ListBillingGroupsFilter::ListBillingGroupsFilter(JsonView jsonValue) : 
    m_arnsHasBeenSet(false),
    m_pricingPlanHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_autoAssociate(false),
    m_autoAssociateHasBeenSet(false)
{
  *this = jsonValue;
}

ListBillingGroupsFilter& ListBillingGroupsFilter::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("PricingPlan"))
  {
    m_pricingPlan = jsonValue.GetString("PricingPlan");

    m_pricingPlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statuses"))
  {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("Statuses");
    for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
    {
      m_statuses.push_back(BillingGroupStatusMapper::GetBillingGroupStatusForName(statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoAssociate"))
  {
    m_autoAssociate = jsonValue.GetBool("AutoAssociate");

    m_autoAssociateHasBeenSet = true;
  }

  return *this;
}

JsonValue ListBillingGroupsFilter::Jsonize() const
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

  if(m_pricingPlanHasBeenSet)
  {
   payload.WithString("PricingPlan", m_pricingPlan);

  }

  if(m_statusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
   for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
   {
     statusesJsonList[statusesIndex].AsString(BillingGroupStatusMapper::GetNameForBillingGroupStatus(m_statuses[statusesIndex]));
   }
   payload.WithArray("Statuses", std::move(statusesJsonList));

  }

  if(m_autoAssociateHasBeenSet)
  {
   payload.WithBool("AutoAssociate", m_autoAssociate);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
