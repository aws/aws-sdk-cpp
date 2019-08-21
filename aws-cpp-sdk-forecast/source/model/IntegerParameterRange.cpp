/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/forecast/model/IntegerParameterRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

IntegerParameterRange::IntegerParameterRange() : 
    m_nameHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_scalingType(ScalingType::NOT_SET),
    m_scalingTypeHasBeenSet(false)
{
}

IntegerParameterRange::IntegerParameterRange(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_scalingType(ScalingType::NOT_SET),
    m_scalingTypeHasBeenSet(false)
{
  *this = jsonValue;
}

IntegerParameterRange& IntegerParameterRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxValue"))
  {
    m_maxValue = jsonValue.GetInteger("MaxValue");

    m_maxValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinValue"))
  {
    m_minValue = jsonValue.GetInteger("MinValue");

    m_minValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingType"))
  {
    m_scalingType = ScalingTypeMapper::GetScalingTypeForName(jsonValue.GetString("ScalingType"));

    m_scalingTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue IntegerParameterRange::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithInteger("MaxValue", m_maxValue);

  }

  if(m_minValueHasBeenSet)
  {
   payload.WithInteger("MinValue", m_minValue);

  }

  if(m_scalingTypeHasBeenSet)
  {
   payload.WithString("ScalingType", ScalingTypeMapper::GetNameForScalingType(m_scalingType));
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
