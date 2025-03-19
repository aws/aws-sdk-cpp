/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ResourceEvaluation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ResourceEvaluation::ResourceEvaluation(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceEvaluation& ResourceEvaluation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceEvaluationId"))
  {
    m_resourceEvaluationId = jsonValue.GetString("ResourceEvaluationId");
    m_resourceEvaluationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationMode"))
  {
    m_evaluationMode = EvaluationModeMapper::GetEvaluationModeForName(jsonValue.GetString("EvaluationMode"));
    m_evaluationModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationStartTimestamp"))
  {
    m_evaluationStartTimestamp = jsonValue.GetDouble("EvaluationStartTimestamp");
    m_evaluationStartTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceEvaluation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceEvaluationIdHasBeenSet)
  {
   payload.WithString("ResourceEvaluationId", m_resourceEvaluationId);

  }

  if(m_evaluationModeHasBeenSet)
  {
   payload.WithString("EvaluationMode", EvaluationModeMapper::GetNameForEvaluationMode(m_evaluationMode));
  }

  if(m_evaluationStartTimestampHasBeenSet)
  {
   payload.WithDouble("EvaluationStartTimestamp", m_evaluationStartTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
