/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ContinuousParameterRangeSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ContinuousParameterRangeSpecification::ContinuousParameterRangeSpecification() : 
    m_minValueHasBeenSet(false),
    m_maxValueHasBeenSet(false)
{
}

ContinuousParameterRangeSpecification::ContinuousParameterRangeSpecification(JsonView jsonValue) : 
    m_minValueHasBeenSet(false),
    m_maxValueHasBeenSet(false)
{
  *this = jsonValue;
}

ContinuousParameterRangeSpecification& ContinuousParameterRangeSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinValue"))
  {
    m_minValue = jsonValue.GetString("MinValue");

    m_minValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxValue"))
  {
    m_maxValue = jsonValue.GetString("MaxValue");

    m_maxValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ContinuousParameterRangeSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_minValueHasBeenSet)
  {
   payload.WithString("MinValue", m_minValue);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithString("MaxValue", m_maxValue);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
