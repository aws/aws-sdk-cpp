/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

RecurringCharge::RecurringCharge(JsonView jsonValue) : 
    m_recurringChargeAmount(0.0),
    m_recurringChargeAmountHasBeenSet(false),
    m_recurringChargeFrequencyHasBeenSet(false)
{
  *this = jsonValue;
}

RecurringCharge& RecurringCharge::operator =(JsonView jsonValue)
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
