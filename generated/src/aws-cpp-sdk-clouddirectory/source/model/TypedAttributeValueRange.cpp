/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/TypedAttributeValueRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

TypedAttributeValueRange::TypedAttributeValueRange() : 
    m_startMode(RangeMode::NOT_SET),
    m_startModeHasBeenSet(false),
    m_startValueHasBeenSet(false),
    m_endMode(RangeMode::NOT_SET),
    m_endModeHasBeenSet(false),
    m_endValueHasBeenSet(false)
{
}

TypedAttributeValueRange::TypedAttributeValueRange(JsonView jsonValue) : 
    m_startMode(RangeMode::NOT_SET),
    m_startModeHasBeenSet(false),
    m_startValueHasBeenSet(false),
    m_endMode(RangeMode::NOT_SET),
    m_endModeHasBeenSet(false),
    m_endValueHasBeenSet(false)
{
  *this = jsonValue;
}

TypedAttributeValueRange& TypedAttributeValueRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartMode"))
  {
    m_startMode = RangeModeMapper::GetRangeModeForName(jsonValue.GetString("StartMode"));

    m_startModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartValue"))
  {
    m_startValue = jsonValue.GetObject("StartValue");

    m_startValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndMode"))
  {
    m_endMode = RangeModeMapper::GetRangeModeForName(jsonValue.GetString("EndMode"));

    m_endModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndValue"))
  {
    m_endValue = jsonValue.GetObject("EndValue");

    m_endValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TypedAttributeValueRange::Jsonize() const
{
  JsonValue payload;

  if(m_startModeHasBeenSet)
  {
   payload.WithString("StartMode", RangeModeMapper::GetNameForRangeMode(m_startMode));
  }

  if(m_startValueHasBeenSet)
  {
   payload.WithObject("StartValue", m_startValue.Jsonize());

  }

  if(m_endModeHasBeenSet)
  {
   payload.WithString("EndMode", RangeModeMapper::GetNameForRangeMode(m_endMode));
  }

  if(m_endValueHasBeenSet)
  {
   payload.WithObject("EndValue", m_endValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
