/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/Duration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

Duration::Duration() : 
    m_unit(DurationUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

Duration::Duration(JsonView jsonValue) : 
    m_unit(DurationUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Duration& Duration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = DurationUnitMapper::GetDurationUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInt64("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Duration::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", DurationUnitMapper::GetNameForDurationUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
