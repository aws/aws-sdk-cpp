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

RecurringCharge::RecurringCharge(const JsonValue& jsonValue) : 
    m_costHasBeenSet(false),
    m_frequency(RecurringChargeFrequency::NOT_SET),
    m_frequencyHasBeenSet(false)
{
  *this = jsonValue;
}

RecurringCharge& RecurringCharge::operator =(const JsonValue& jsonValue)
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