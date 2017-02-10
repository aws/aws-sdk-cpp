/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

TypedAttributeValueRange::TypedAttributeValueRange(const JsonValue& jsonValue) : 
    m_startMode(RangeMode::NOT_SET),
    m_startModeHasBeenSet(false),
    m_startValueHasBeenSet(false),
    m_endMode(RangeMode::NOT_SET),
    m_endModeHasBeenSet(false),
    m_endValueHasBeenSet(false)
{
  *this = jsonValue;
}

TypedAttributeValueRange& TypedAttributeValueRange::operator =(const JsonValue& jsonValue)
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