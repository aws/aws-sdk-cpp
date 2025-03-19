/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/RangeOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

RangeOverride::RangeOverride(JsonView jsonValue)
{
  *this = jsonValue;
}

RangeOverride& RangeOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Start"))
  {
    m_start = jsonValue.GetInteger("Start");
    m_startHasBeenSet = true;
  }
  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetInteger("End");
    m_endHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = RangeUnitMapper::GetRangeUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue RangeOverride::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithInteger("Start", m_start);

  }

  if(m_endHasBeenSet)
  {
   payload.WithInteger("End", m_end);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", RangeUnitMapper::GetNameForRangeUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
