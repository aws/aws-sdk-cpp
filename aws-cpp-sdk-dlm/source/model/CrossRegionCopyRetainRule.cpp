/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/CrossRegionCopyRetainRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

CrossRegionCopyRetainRule::CrossRegionCopyRetainRule() : 
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_intervalUnit(RetentionIntervalUnitValues::NOT_SET),
    m_intervalUnitHasBeenSet(false)
{
}

CrossRegionCopyRetainRule::CrossRegionCopyRetainRule(JsonView jsonValue) : 
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_intervalUnit(RetentionIntervalUnitValues::NOT_SET),
    m_intervalUnitHasBeenSet(false)
{
  *this = jsonValue;
}

CrossRegionCopyRetainRule& CrossRegionCopyRetainRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = jsonValue.GetInteger("Interval");

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntervalUnit"))
  {
    m_intervalUnit = RetentionIntervalUnitValuesMapper::GetRetentionIntervalUnitValuesForName(jsonValue.GetString("IntervalUnit"));

    m_intervalUnitHasBeenSet = true;
  }

  return *this;
}

JsonValue CrossRegionCopyRetainRule::Jsonize() const
{
  JsonValue payload;

  if(m_intervalHasBeenSet)
  {
   payload.WithInteger("Interval", m_interval);

  }

  if(m_intervalUnitHasBeenSet)
  {
   payload.WithString("IntervalUnit", RetentionIntervalUnitValuesMapper::GetNameForRetentionIntervalUnitValues(m_intervalUnit));
  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
