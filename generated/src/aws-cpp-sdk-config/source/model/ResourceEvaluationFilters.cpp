/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ResourceEvaluationFilters.h>
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

ResourceEvaluationFilters::ResourceEvaluationFilters() : 
    m_evaluationMode(EvaluationMode::NOT_SET),
    m_evaluationModeHasBeenSet(false),
    m_timeWindowHasBeenSet(false),
    m_evaluationContextIdentifierHasBeenSet(false)
{
}

ResourceEvaluationFilters::ResourceEvaluationFilters(JsonView jsonValue) : 
    m_evaluationMode(EvaluationMode::NOT_SET),
    m_evaluationModeHasBeenSet(false),
    m_timeWindowHasBeenSet(false),
    m_evaluationContextIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceEvaluationFilters& ResourceEvaluationFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationMode"))
  {
    m_evaluationMode = EvaluationModeMapper::GetEvaluationModeForName(jsonValue.GetString("EvaluationMode"));

    m_evaluationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeWindow"))
  {
    m_timeWindow = jsonValue.GetObject("TimeWindow");

    m_timeWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationContextIdentifier"))
  {
    m_evaluationContextIdentifier = jsonValue.GetString("EvaluationContextIdentifier");

    m_evaluationContextIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceEvaluationFilters::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationModeHasBeenSet)
  {
   payload.WithString("EvaluationMode", EvaluationModeMapper::GetNameForEvaluationMode(m_evaluationMode));
  }

  if(m_timeWindowHasBeenSet)
  {
   payload.WithObject("TimeWindow", m_timeWindow.Jsonize());

  }

  if(m_evaluationContextIdentifierHasBeenSet)
  {
   payload.WithString("EvaluationContextIdentifier", m_evaluationContextIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
