/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/Duration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

Duration::Duration() : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(TimeUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

Duration::Duration(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(TimeUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

Duration& Duration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInt64("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = TimeUnitMapper::GetTimeUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue Duration::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("Value", m_value);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", TimeUnitMapper::GetNameForTimeUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
