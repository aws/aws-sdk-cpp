/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
