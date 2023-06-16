/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ReservedInstanceOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

ReservedInstanceOptions::ReservedInstanceOptions() : 
    m_purchasingOption(PurchasingOption::NOT_SET),
    m_purchasingOptionHasBeenSet(false),
    m_offeringClass(OfferingClass::NOT_SET),
    m_offeringClassHasBeenSet(false),
    m_termLength(TermLength::NOT_SET),
    m_termLengthHasBeenSet(false)
{
}

ReservedInstanceOptions::ReservedInstanceOptions(JsonView jsonValue) : 
    m_purchasingOption(PurchasingOption::NOT_SET),
    m_purchasingOptionHasBeenSet(false),
    m_offeringClass(OfferingClass::NOT_SET),
    m_offeringClassHasBeenSet(false),
    m_termLength(TermLength::NOT_SET),
    m_termLengthHasBeenSet(false)
{
  *this = jsonValue;
}

ReservedInstanceOptions& ReservedInstanceOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("purchasingOption"))
  {
    m_purchasingOption = PurchasingOptionMapper::GetPurchasingOptionForName(jsonValue.GetString("purchasingOption"));

    m_purchasingOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offeringClass"))
  {
    m_offeringClass = OfferingClassMapper::GetOfferingClassForName(jsonValue.GetString("offeringClass"));

    m_offeringClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("termLength"))
  {
    m_termLength = TermLengthMapper::GetTermLengthForName(jsonValue.GetString("termLength"));

    m_termLengthHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservedInstanceOptions::Jsonize() const
{
  JsonValue payload;

  if(m_purchasingOptionHasBeenSet)
  {
   payload.WithString("purchasingOption", PurchasingOptionMapper::GetNameForPurchasingOption(m_purchasingOption));
  }

  if(m_offeringClassHasBeenSet)
  {
   payload.WithString("offeringClass", OfferingClassMapper::GetNameForOfferingClass(m_offeringClass));
  }

  if(m_termLengthHasBeenSet)
  {
   payload.WithString("termLength", TermLengthMapper::GetNameForTermLength(m_termLength));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
