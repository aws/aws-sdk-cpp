/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/SuppressionPeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

SuppressionPeriod::SuppressionPeriod() : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_suppressionUnit(SuppressionUnit::NOT_SET),
    m_suppressionUnitHasBeenSet(false)
{
}

SuppressionPeriod::SuppressionPeriod(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_suppressionUnit(SuppressionUnit::NOT_SET),
    m_suppressionUnitHasBeenSet(false)
{
  *this = jsonValue;
}

SuppressionPeriod& SuppressionPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suppressionUnit"))
  {
    m_suppressionUnit = SuppressionUnitMapper::GetSuppressionUnitForName(jsonValue.GetString("suppressionUnit"));

    m_suppressionUnitHasBeenSet = true;
  }

  return *this;
}

JsonValue SuppressionPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  if(m_suppressionUnitHasBeenSet)
  {
   payload.WithString("suppressionUnit", SuppressionUnitMapper::GetNameForSuppressionUnit(m_suppressionUnit));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
