/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CustomLineItemChargeDetails.h>
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

CustomLineItemChargeDetails::CustomLineItemChargeDetails() : 
    m_flatHasBeenSet(false),
    m_percentageHasBeenSet(false),
    m_type(CustomLineItemType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

CustomLineItemChargeDetails::CustomLineItemChargeDetails(JsonView jsonValue) : 
    m_flatHasBeenSet(false),
    m_percentageHasBeenSet(false),
    m_type(CustomLineItemType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLineItemChargeDetails& CustomLineItemChargeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Flat"))
  {
    m_flat = jsonValue.GetObject("Flat");

    m_flatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Percentage"))
  {
    m_percentage = jsonValue.GetObject("Percentage");

    m_percentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = CustomLineItemTypeMapper::GetCustomLineItemTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLineItemChargeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_flatHasBeenSet)
  {
   payload.WithObject("Flat", m_flat.Jsonize());

  }

  if(m_percentageHasBeenSet)
  {
   payload.WithObject("Percentage", m_percentage.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CustomLineItemTypeMapper::GetNameForCustomLineItemType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
