/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/RecurringCharge.h>
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

RecurringCharge::RecurringCharge() : 
    m_costHasBeenSet(false),
    m_frequency(RecurringChargeFrequency::NOT_SET),
    m_frequencyHasBeenSet(false)
{
}

RecurringCharge::RecurringCharge(JsonView jsonValue) : 
    m_costHasBeenSet(false),
    m_frequency(RecurringChargeFrequency::NOT_SET),
    m_frequencyHasBeenSet(false)
{
  *this = jsonValue;
}

RecurringCharge& RecurringCharge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cost"))
  {
    m_cost = jsonValue.GetObject("cost");

    m_costHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = RecurringChargeFrequencyMapper::GetRecurringChargeFrequencyForName(jsonValue.GetString("frequency"));

    m_frequencyHasBeenSet = true;
  }

  return *this;
}

JsonValue RecurringCharge::Jsonize() const
{
  JsonValue payload;

  if(m_costHasBeenSet)
  {
   payload.WithObject("cost", m_cost.Jsonize());

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("frequency", RecurringChargeFrequencyMapper::GetNameForRecurringChargeFrequency(m_frequency));
  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
