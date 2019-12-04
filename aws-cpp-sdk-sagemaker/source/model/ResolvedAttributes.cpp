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
