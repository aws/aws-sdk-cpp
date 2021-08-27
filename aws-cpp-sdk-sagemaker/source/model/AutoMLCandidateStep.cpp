/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLCandidateStep.h>
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

AutoMLCandidateStep::AutoMLCandidateStep() : 
    m_candidateStepType(CandidateStepType::NOT_SET),
    m_candidateStepTypeHasBeenSet(false),
    m_candidateStepArnHasBeenSet(false),
    m_candidateStepNameHasBeenSet(false)
{
}

AutoMLCandidateStep::AutoMLCandidateStep(JsonView jsonValue) : 
    m_candidateStepType(CandidateStepType::NOT_SET),
    m_candidateStepTypeHasBeenSet(false),
    m_candidateStepArnHasBeenSet(false),
    m_candidateStepNameHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLCandidateStep& AutoMLCandidateStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CandidateStepType"))
  {
    m_candidateStepType = CandidateStepTypeMapper::GetCandidateStepTypeForName(jsonValue.GetString("CandidateStepType"));

    m_candidateStepTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CandidateStepArn"))
  {
    m_candidateStepArn = jsonValue.GetString("CandidateStepArn");

    m_candidateStepArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CandidateStepName"))
  {
    m_candidateStepName = jsonValue.GetString("CandidateStepName");

    m_candidateStepNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLCandidateStep::Jsonize() const
{
  JsonValue payload;

  if(m_candidateStepTypeHasBeenSet)
  {
   payload.WithString("CandidateStepType", CandidateStepTypeMapper::GetNameForCandidateStepType(m_candidateStepType));
  }

  if(m_candidateStepArnHasBeenSet)
  {
   payload.WithString("CandidateStepArn", m_candidateStepArn);

  }

  if(m_candidateStepNameHasBeenSet)
  {
   payload.WithString("CandidateStepName", m_candidateStepName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
