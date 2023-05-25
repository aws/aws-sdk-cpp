/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GenerationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

GenerationSummary::GenerationSummary() : 
    m_recommendationIdHasBeenSet(false),
    m_generationStatus(GenerationStatus::NOT_SET),
    m_generationStatusHasBeenSet(false),
    m_generationStartedTimeHasBeenSet(false),
    m_generationCompletionTimeHasBeenSet(false),
    m_estimatedCompletionTimeHasBeenSet(false)
{
}

GenerationSummary::GenerationSummary(JsonView jsonValue) : 
    m_recommendationIdHasBeenSet(false),
    m_generationStatus(GenerationStatus::NOT_SET),
    m_generationStatusHasBeenSet(false),
    m_generationStartedTimeHasBeenSet(false),
    m_generationCompletionTimeHasBeenSet(false),
    m_estimatedCompletionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

GenerationSummary& GenerationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecommendationId"))
  {
    m_recommendationId = jsonValue.GetString("RecommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenerationStatus"))
  {
    m_generationStatus = GenerationStatusMapper::GetGenerationStatusForName(jsonValue.GetString("GenerationStatus"));

    m_generationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenerationStartedTime"))
  {
    m_generationStartedTime = jsonValue.GetString("GenerationStartedTime");

    m_generationStartedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenerationCompletionTime"))
  {
    m_generationCompletionTime = jsonValue.GetString("GenerationCompletionTime");

    m_generationCompletionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedCompletionTime"))
  {
    m_estimatedCompletionTime = jsonValue.GetString("EstimatedCompletionTime");

    m_estimatedCompletionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue GenerationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("RecommendationId", m_recommendationId);

  }

  if(m_generationStatusHasBeenSet)
  {
   payload.WithString("GenerationStatus", GenerationStatusMapper::GetNameForGenerationStatus(m_generationStatus));
  }

  if(m_generationStartedTimeHasBeenSet)
  {
   payload.WithString("GenerationStartedTime", m_generationStartedTime);

  }

  if(m_generationCompletionTimeHasBeenSet)
  {
   payload.WithString("GenerationCompletionTime", m_generationCompletionTime);

  }

  if(m_estimatedCompletionTimeHasBeenSet)
  {
   payload.WithString("EstimatedCompletionTime", m_estimatedCompletionTime);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
