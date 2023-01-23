/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ServiceLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ServiceLimit::ServiceLimit() : 
    m_isServiceLimited(false),
    m_isServiceLimitedHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

ServiceLimit::ServiceLimit(JsonView jsonValue) : 
    m_isServiceLimited(false),
    m_isServiceLimitedHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceLimit& ServiceLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isServiceLimited"))
  {
    m_isServiceLimited = jsonValue.GetBool("isServiceLimited");

    m_isServiceLimitedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInt64("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceLimit::Jsonize() const
{
  JsonValue payload;

  if(m_isServiceLimitedHasBeenSet)
  {
   payload.WithBool("isServiceLimited", m_isServiceLimited);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", UnitMapper::GetNameForUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
