/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ContinuousHyperParameterRange.h>
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

ContinuousHyperParameterRange::ContinuousHyperParameterRange() : 
    m_nameHasBeenSet(false),
    m_minValue(0.0),
    m_minValueHasBeenSet(false),
    m_maxValue(0.0),
    m_maxValueHasBeenSet(false)
{
}

ContinuousHyperParameterRange::ContinuousHyperParameterRange(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_minValue(0.0),
    m_minValueHasBeenSet(false),
    m_maxValue(0.0),
    m_maxValueHasBeenSet(false)
{
  *this = jsonValue;
}

ContinuousHyperParameterRange& ContinuousHyperParameterRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minValue"))
  {
    m_minValue = jsonValue.GetDouble("minValue");

    m_minValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxValue"))
  {
    m_maxValue = jsonValue.GetDouble("maxValue");

    m_maxValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ContinuousHyperParameterRange::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_minValueHasBeenSet)
  {
   payload.WithDouble("minValue", m_minValue);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithDouble("maxValue", m_maxValue);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
