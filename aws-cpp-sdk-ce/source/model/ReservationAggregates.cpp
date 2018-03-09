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

#include <aws/ce/model/ReservationAggregates.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

ReservationAggregates::ReservationAggregates() : 
    m_utilizationPercentageHasBeenSet(false),
    m_purchasedHoursHasBeenSet(false),
    m_totalActualHoursHasBeenSet(false),
    m_unusedHoursHasBeenSet(false)
{
}

ReservationAggregates::ReservationAggregates(const JsonValue& jsonValue) : 
    m_utilizationPercentageHasBeenSet(false),
    m_purchasedHoursHasBeenSet(false),
    m_totalActualHoursHasBeenSet(false),
    m_unusedHoursHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationAggregates& ReservationAggregates::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UtilizationPercentage"))
  {
    m_utilizationPercentage = jsonValue.GetString("UtilizationPercentage");

    m_utilizationPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PurchasedHours"))
  {
    m_purchasedHours = jsonValue.GetString("PurchasedHours");

    m_purchasedHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalActualHours"))
  {
    m_totalActualHours = jsonValue.GetString("TotalActualHours");

    m_totalActualHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnusedHours"))
  {
    m_unusedHours = jsonValue.GetString("UnusedHours");

    m_unusedHoursHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservationAggregates::Jsonize() const
{
  JsonValue payload;

  if(m_utilizationPercentageHasBeenSet)
  {
   payload.WithString("UtilizationPercentage", m_utilizationPercentage);

  }

  if(m_purchasedHoursHasBeenSet)
  {
   payload.WithString("PurchasedHours", m_purchasedHours);

  }

  if(m_totalActualHoursHasBeenSet)
  {
   payload.WithString("TotalActualHours", m_totalActualHours);

  }

  if(m_unusedHoursHasBeenSet)
  {
   payload.WithString("UnusedHours", m_unusedHours);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
