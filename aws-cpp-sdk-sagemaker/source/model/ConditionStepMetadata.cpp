/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ConditionStepMetadata.h>
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

ConditionStepMetadata::ConditionStepMetadata() : 
    m_outcome(ConditionOutcome::NOT_SET),
    m_outcomeHasBeenSet(false)
{
}

ConditionStepMetadata::ConditionStepMetadata(JsonView jsonValue) : 
    m_outcome(ConditionOutcome::NOT_SET),
    m_outcomeHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionStepMetadata& ConditionStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Outcome"))
  {
    m_outcome = ConditionOutcomeMapper::GetConditionOutcomeForName(jsonValue.GetString("Outcome"));

    m_outcomeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_outcomeHasBeenSet)
  {
   payload.WithString("Outcome", ConditionOutcomeMapper::GetNameForConditionOutcome(m_outcome));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
