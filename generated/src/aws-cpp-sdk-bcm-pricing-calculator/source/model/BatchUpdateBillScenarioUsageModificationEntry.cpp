/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioUsageModificationEntry.h>
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

BatchUpdateBillScenarioUsageModificationEntry::BatchUpdateBillScenarioUsageModificationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchUpdateBillScenarioUsageModificationEntry& BatchUpdateBillScenarioUsageModificationEntry::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("amounts"))
  {
    Aws::Utils::Array<JsonView> amountsJsonList = jsonValue.GetArray("amounts");
    for(unsigned amountsIndex = 0; amountsIndex < amountsJsonList.GetLength(); ++amountsIndex)
    {
      m_amounts.push_back(amountsJsonList[amountsIndex].AsObject());
    }
    m_amountsHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUpdateBillScenarioUsageModificationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  if(m_amountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> amountsJsonList(m_amounts.size());
   for(unsigned amountsIndex = 0; amountsIndex < amountsJsonList.GetLength(); ++amountsIndex)
   {
     amountsJsonList[amountsIndex].AsObject(m_amounts[amountsIndex].Jsonize());
   }
   payload.WithArray("amounts", std::move(amountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
