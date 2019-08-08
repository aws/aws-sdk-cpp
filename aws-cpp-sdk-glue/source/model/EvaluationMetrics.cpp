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

#include <aws/glue/model/EvaluationMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

EvaluationMetrics::EvaluationMetrics() : 
    m_transformType(TransformType::NOT_SET),
    m_transformTypeHasBeenSet(false),
    m_findMatchesMetricsHasBeenSet(false)
{
}

EvaluationMetrics::EvaluationMetrics(JsonView jsonValue) : 
    m_transformType(TransformType::NOT_SET),
    m_transformTypeHasBeenSet(false),
    m_findMatchesMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationMetrics& EvaluationMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransformType"))
  {
    m_transformType = TransformTypeMapper::GetTransformTypeForName(jsonValue.GetString("TransformType"));

    m_transformTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindMatchesMetrics"))
  {
    m_findMatchesMetrics = jsonValue.GetObject("FindMatchesMetrics");

    m_findMatchesMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_transformTypeHasBeenSet)
  {
   payload.WithString("TransformType", TransformTypeMapper::GetNameForTransformType(m_transformType));
  }

  if(m_findMatchesMetricsHasBeenSet)
  {
   payload.WithObject("FindMatchesMetrics", m_findMatchesMetrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
