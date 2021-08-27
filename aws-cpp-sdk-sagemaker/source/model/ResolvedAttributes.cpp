/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResolvedAttributes.h>
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

ResolvedAttributes::ResolvedAttributes() : 
    m_autoMLJobObjectiveHasBeenSet(false),
    m_problemType(ProblemType::NOT_SET),
    m_problemTypeHasBeenSet(false),
    m_completionCriteriaHasBeenSet(false)
{
}

ResolvedAttributes::ResolvedAttributes(JsonView jsonValue) : 
    m_autoMLJobObjectiveHasBeenSet(false),
    m_problemType(ProblemType::NOT_SET),
    m_problemTypeHasBeenSet(false),
    m_completionCriteriaHasBeenSet(false)
{
  *this = jsonValue;
}

ResolvedAttributes& ResolvedAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoMLJobObjective"))
  {
    m_autoMLJobObjective = jsonValue.GetObject("AutoMLJobObjective");

    m_autoMLJobObjectiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProblemType"))
  {
    m_problemType = ProblemTypeMapper::GetProblemTypeForName(jsonValue.GetString("ProblemType"));

    m_problemTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionCriteria"))
  {
    m_completionCriteria = jsonValue.GetObject("CompletionCriteria");

    m_completionCriteriaHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolvedAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_autoMLJobObjectiveHasBeenSet)
  {
   payload.WithObject("AutoMLJobObjective", m_autoMLJobObjective.Jsonize());

  }

  if(m_problemTypeHasBeenSet)
  {
   payload.WithString("ProblemType", ProblemTypeMapper::GetNameForProblemType(m_problemType));
  }

  if(m_completionCriteriaHasBeenSet)
  {
   payload.WithObject("CompletionCriteria", m_completionCriteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
