/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DurationSinceLastAccess.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

DurationSinceLastAccess::DurationSinceLastAccess() : 
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

DurationSinceLastAccess::DurationSinceLastAccess(JsonView jsonValue) : 
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

DurationSinceLastAccess& DurationSinceLastAccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInt64("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue DurationSinceLastAccess::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", UnitMapper::GetNameForUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
