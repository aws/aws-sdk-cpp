/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/RefreshScheduleFrequency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

RefreshScheduleFrequency::RefreshScheduleFrequency() : 
    m_unit(RefreshScheduleFrequencyUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

RefreshScheduleFrequency::RefreshScheduleFrequency(JsonView jsonValue)
  : RefreshScheduleFrequency()
{
  *this = jsonValue;
}

RefreshScheduleFrequency& RefreshScheduleFrequency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = RefreshScheduleFrequencyUnitMapper::GetRefreshScheduleFrequencyUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInteger("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue RefreshScheduleFrequency::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", RefreshScheduleFrequencyUnitMapper::GetNameForRefreshScheduleFrequencyUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
