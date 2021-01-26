/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CurrentMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

CurrentMetric::CurrentMetric() : 
    m_name(CurrentMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

CurrentMetric::CurrentMetric(JsonView jsonValue) : 
    m_name(CurrentMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

CurrentMetric& CurrentMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = CurrentMetricNameMapper::GetCurrentMetricNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue CurrentMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", CurrentMetricNameMapper::GetNameForCurrentMetricName(m_name));
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", UnitMapper::GetNameForUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
