/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Range.h>
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

Range::Range(JsonView jsonValue)
{
  *this = jsonValue;
}

Range& Range::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInteger("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValueRange"))
  {
    m_valueRange = jsonValue.GetObject("ValueRange");
    m_valueRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimestampSource"))
  {
    m_timestampSource = jsonValue.GetString("TimestampSource");
    m_timestampSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimestampFormat"))
  {
    m_timestampFormat = jsonValue.GetString("TimestampFormat");
    m_timestampFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue Range::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("Value", m_value);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", UnitMapper::GetNameForUnit(m_unit));
  }

  if(m_valueRangeHasBeenSet)
  {
   payload.WithObject("ValueRange", m_valueRange.Jsonize());

  }

  if(m_timestampSourceHasBeenSet)
  {
   payload.WithString("TimestampSource", m_timestampSource);

  }

  if(m_timestampFormatHasBeenSet)
  {
   payload.WithString("TimestampFormat", m_timestampFormat);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
