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
#include <aws/budgets/model/CalculatedSpend.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

CalculatedSpend::CalculatedSpend() : 
    m_actualSpendHasBeenSet(false),
    m_forecastedSpendHasBeenSet(false)
{
}

CalculatedSpend::CalculatedSpend(const JsonValue& jsonValue) : 
    m_actualSpendHasBeenSet(false),
    m_forecastedSpendHasBeenSet(false)
{
  *this = jsonValue;
}

CalculatedSpend& CalculatedSpend::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ActualSpend"))
  {
    m_actualSpend = jsonValue.GetObject("ActualSpend");

    m_actualSpendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForecastedSpend"))
  {
    m_forecastedSpend = jsonValue.GetObject("ForecastedSpend");

    m_forecastedSpendHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculatedSpend::Jsonize() const
{
  JsonValue payload;

  if(m_actualSpendHasBeenSet)
  {
   payload.WithObject("ActualSpend", m_actualSpend.Jsonize());

  }

  if(m_forecastedSpendHasBeenSet)
  {
   payload.WithObject("ForecastedSpend", m_forecastedSpend.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws