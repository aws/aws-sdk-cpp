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

#include <aws/personalize/model/DefaultIntegerHyperParameterRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

DefaultIntegerHyperParameterRange::DefaultIntegerHyperParameterRange() : 
    m_nameHasBeenSet(false),
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_isTunable(false),
    m_isTunableHasBeenSet(false)
{
}

DefaultIntegerHyperParameterRange::DefaultIntegerHyperParameterRange(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_minValue(0),
    m_minValueHasBeenSet(false),
    m_maxValue(0),
    m_maxValueHasBeenSet(false),
    m_isTunable(false),
    m_isTunableHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultIntegerHyperParameterRange& DefaultIntegerHyperParameterRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minValue"))
  {
    m_minValue = jsonValue.GetInteger("minValue");

    m_minValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxValue"))
  {
    m_maxValue = jsonValue.GetInteger("maxValue");

    m_maxValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isTunable"))
  {
    m_isTunable = jsonValue.GetBool("isTunable");

    m_isTunableHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultIntegerHyperParameterRange::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_minValueHasBeenSet)
  {
   payload.WithInteger("minValue", m_minValue);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithInteger("maxValue", m_maxValue);

  }

  if(m_isTunableHasBeenSet)
  {
   payload.WithBool("isTunable", m_isTunable);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
