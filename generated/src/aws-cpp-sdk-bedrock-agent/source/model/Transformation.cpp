/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/Transformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

Transformation::Transformation(JsonView jsonValue)
{
  *this = jsonValue;
}

Transformation& Transformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transformationFunction"))
  {
    m_transformationFunction = jsonValue.GetObject("transformationFunction");
    m_transformationFunctionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepToApply"))
  {
    m_stepToApply = StepTypeMapper::GetStepTypeForName(jsonValue.GetString("stepToApply"));
    m_stepToApplyHasBeenSet = true;
  }
  return *this;
}

JsonValue Transformation::Jsonize() const
{
  JsonValue payload;

  if(m_transformationFunctionHasBeenSet)
  {
   payload.WithObject("transformationFunction", m_transformationFunction.Jsonize());

  }

  if(m_stepToApplyHasBeenSet)
  {
   payload.WithString("stepToApply", StepTypeMapper::GetNameForStepType(m_stepToApply));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
