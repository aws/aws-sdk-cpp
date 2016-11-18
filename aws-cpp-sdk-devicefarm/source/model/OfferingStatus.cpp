/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

OfferingStatus::OfferingStatus(const JsonValue& jsonValue) : 
    m_type(OfferingTransactionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_offeringHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_effectiveOnHasBeenSet(false)
{
  *this = jsonValue;
}

OfferingStatus& OfferingStatus::operator =(const JsonValue& jsonValue)
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