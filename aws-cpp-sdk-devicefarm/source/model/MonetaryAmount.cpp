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
#include <aws/devicefarm/model/MonetaryAmount.h>
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

MonetaryAmount::MonetaryAmount() : 
    m_amount(0.0),
    m_amountHasBeenSet(false),
    m_currencyCode(CurrencyCode::NOT_SET),
    m_currencyCodeHasBeenSet(false)
{
}

MonetaryAmount::MonetaryAmount(const JsonValue& jsonValue) : 
    m_amount(0.0),
    m_amountHasBeenSet(false),
    m_currencyCode(CurrencyCode::NOT_SET),
    m_currencyCodeHasBeenSet(false)
{
  *this = jsonValue;
}

MonetaryAmount& MonetaryAmount::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("amount"))
  {
    m_amount = jsonValue.GetDouble("amount");

    m_amountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("currencyCode"));

    m_currencyCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue MonetaryAmount::Jsonize() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithDouble("amount", m_amount);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("currencyCode", CurrencyCodeMapper::GetNameForCurrencyCode(m_currencyCode));
  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws