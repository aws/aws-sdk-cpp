/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/OfferingStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

OfferingStatus::OfferingStatus() : 
    m_type(OfferingTransactionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_offeringHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_effectiveOnHasBeenSet(false)
{
}

OfferingStatus::OfferingStatus(JsonView jsonValue) : 
    m_type(OfferingTransactionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_offeringHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_effectiveOnHasBeenSet(false)
{
  *this = jsonValue;
}

OfferingStatus& OfferingStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = OfferingTransactionTypeMapper::GetOfferingTransactionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offering"))
  {
    m_offering = jsonValue.GetObject("offering");

    m_offeringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quantity"))
  {
    m_quantity = jsonValue.GetInteger("quantity");

    m_quantityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("effectiveOn"))
  {
    m_effectiveOn = jsonValue.GetDouble("effectiveOn");

    m_effectiveOnHasBeenSet = true;
  }

  return *this;
}

JsonValue OfferingStatus::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", OfferingTransactionTypeMapper::GetNameForOfferingTransactionType(m_type));
  }

  if(m_offeringHasBeenSet)
  {
   payload.WithObject("offering", m_offering.Jsonize());

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInteger("quantity", m_quantity);

  }

  if(m_effectiveOnHasBeenSet)
  {
   payload.WithDouble("effectiveOn", m_effectiveOn.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
