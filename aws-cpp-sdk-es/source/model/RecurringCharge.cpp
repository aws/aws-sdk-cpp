/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/es/model/RecurringCharge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

RecurringCharge::RecurringCharge() : 
    m_recurringChargeAmount(0.0),
    m_recurringChargeAmountHasBeenSet(false),
    m_recurringChargeFrequencyHasBeenSet(false)
{
}

RecurringCharge::RecurringCharge(const JsonValue& jsonValue) : 
    m_recurringChargeAmount(0.0),
    m_recurringChargeAmountHasBeenSet(false),
    m_recurringChargeFrequencyHasBeenSet(false)
{
  *this = jsonValue;
}

RecurringCharge& RecurringCharge::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RecurringChargeAmount"))
  {
    m_recurringChargeAmount = jsonValue.GetDouble("RecurringChargeAmount");

    m_recurringChargeAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecurringChargeFrequency"))
  {
    m_recurringChargeFrequency = jsonValue.GetString("RecurringChargeFrequency");

    m_recurringChargeFrequencyHasBeenSet = true;
  }

  return *this;
}

JsonValue RecurringCharge::Jsonize() const
{
  JsonValue payload;

  if(m_recurringChargeAmountHasBeenSet)
  {
   payload.WithDouble("RecurringChargeAmount", m_recurringChargeAmount);

  }

  if(m_recurringChargeFrequencyHasBeenSet)
  {
   payload.WithString("RecurringChargeFrequency", m_recurringChargeFrequency);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
