/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CustomLineItemPercentageChargeDetails.h>
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

CustomLineItemPercentageChargeDetails::CustomLineItemPercentageChargeDetails() : 
    m_percentageValue(0.0),
    m_percentageValueHasBeenSet(false),
    m_associatedValuesHasBeenSet(false)
{
}

CustomLineItemPercentageChargeDetails::CustomLineItemPercentageChargeDetails(JsonView jsonValue) : 
    m_percentageValue(0.0),
    m_percentageValueHasBeenSet(false),
    m_associatedValuesHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLineItemPercentageChargeDetails& CustomLineItemPercentageChargeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PercentageValue"))
  {
    m_percentageValue = jsonValue.GetDouble("PercentageValue");

    m_percentageValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedValues"))
  {
    Aws::Utils::Array<JsonView> associatedValuesJsonList = jsonValue.GetArray("AssociatedValues");
    for(unsigned associatedValuesIndex = 0; associatedValuesIndex < associatedValuesJsonList.GetLength(); ++associatedValuesIndex)
    {
      m_associatedValues.push_back(associatedValuesJsonList[associatedValuesIndex].AsString());
    }
    m_associatedValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLineItemPercentageChargeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_percentageValueHasBeenSet)
  {
   payload.WithDouble("PercentageValue", m_percentageValue);

  }

  if(m_associatedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedValuesJsonList(m_associatedValues.size());
   for(unsigned associatedValuesIndex = 0; associatedValuesIndex < associatedValuesJsonList.GetLength(); ++associatedValuesIndex)
   {
     associatedValuesJsonList[associatedValuesIndex].AsString(m_associatedValues[associatedValuesIndex]);
   }
   payload.WithArray("AssociatedValues", std::move(associatedValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
