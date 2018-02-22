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

#include <aws/ce/model/CoverageHours.h>
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

CoverageHours::CoverageHours() : 
    m_onDemandHoursHasBeenSet(false),
    m_reservedHoursHasBeenSet(false),
    m_totalRunningHoursHasBeenSet(false),
    m_coverageHoursPercentageHasBeenSet(false)
{
}

CoverageHours::CoverageHours(const JsonValue& jsonValue) : 
    m_onDemandHoursHasBeenSet(false),
    m_reservedHoursHasBeenSet(false),
    m_totalRunningHoursHasBeenSet(false),
    m_coverageHoursPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageHours& CoverageHours::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("OnDemandHours"))
  {
    m_onDemandHours = jsonValue.GetString("OnDemandHours");

    m_onDemandHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservedHours"))
  {
    m_reservedHours = jsonValue.GetString("ReservedHours");

    m_reservedHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalRunningHours"))
  {
    m_totalRunningHours = jsonValue.GetString("TotalRunningHours");

    m_totalRunningHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoverageHoursPercentage"))
  {
    m_coverageHoursPercentage = jsonValue.GetString("CoverageHoursPercentage");

    m_coverageHoursPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageHours::Jsonize() const
{
  JsonValue payload;

  if(m_onDemandHoursHasBeenSet)
  {
   payload.WithString("OnDemandHours", m_onDemandHours);

  }

  if(m_reservedHoursHasBeenSet)
  {
   payload.WithString("ReservedHours", m_reservedHours);

  }

  if(m_totalRunningHoursHasBeenSet)
  {
   payload.WithString("TotalRunningHours", m_totalRunningHours);

  }

  if(m_coverageHoursPercentageHasBeenSet)
  {
   payload.WithString("CoverageHoursPercentage", m_coverageHoursPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
