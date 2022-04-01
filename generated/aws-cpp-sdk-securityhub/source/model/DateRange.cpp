/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DateRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

DateRange::DateRange() : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(DateRangeUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

DateRange::DateRange(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(DateRangeUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

DateRange& DateRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInteger("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = DateRangeUnitMapper::GetDateRangeUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue DateRange::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("Value", m_value);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", DateRangeUnitMapper::GetNameForDateRangeUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
