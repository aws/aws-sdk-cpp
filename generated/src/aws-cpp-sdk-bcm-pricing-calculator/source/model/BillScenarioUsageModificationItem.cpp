/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BillScenarioUsageModificationItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

BillScenarioUsageModificationItem::BillScenarioUsageModificationItem(JsonView jsonValue)
{
  *this = jsonValue;
}

BillScenarioUsageModificationItem& BillScenarioUsageModificationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceCode"))
  {
    m_serviceCode = jsonValue.GetString("serviceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageType"))
  {
    m_usageType = jsonValue.GetString("usageType");
    m_usageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetString("operation");
    m_operationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetString("group");
    m_groupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageAccountId"))
  {
    m_usageAccountId = jsonValue.GetString("usageAccountId");
    m_usageAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quantities"))
  {
    Aws::Utils::Array<JsonView> quantitiesJsonList = jsonValue.GetArray("quantities");
    for(unsigned quantitiesIndex = 0; quantitiesIndex < quantitiesJsonList.GetLength(); ++quantitiesIndex)
    {
      m_quantities.push_back(quantitiesJsonList[quantitiesIndex].AsObject());
    }
    m_quantitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("historicalUsage"))
  {
    m_historicalUsage = jsonValue.GetObject("historicalUsage");
    m_historicalUsageHasBeenSet = true;
  }
  return *this;
}

JsonValue BillScenarioUsageModificationItem::Jsonize() const
{
  JsonValue payload;

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", m_serviceCode);

  }

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", m_usageType);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  if(m_usageAccountIdHasBeenSet)
  {
   payload.WithString("usageAccountId", m_usageAccountId);

  }

  if(m_quantitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> quantitiesJsonList(m_quantities.size());
   for(unsigned quantitiesIndex = 0; quantitiesIndex < quantitiesJsonList.GetLength(); ++quantitiesIndex)
   {
     quantitiesJsonList[quantitiesIndex].AsObject(m_quantities[quantitiesIndex].Jsonize());
   }
   payload.WithArray("quantities", std::move(quantitiesJsonList));

  }

  if(m_historicalUsageHasBeenSet)
  {
   payload.WithObject("historicalUsage", m_historicalUsage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
