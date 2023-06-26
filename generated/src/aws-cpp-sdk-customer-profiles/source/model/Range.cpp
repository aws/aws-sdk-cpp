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

Range::Range() : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

Range::Range(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
