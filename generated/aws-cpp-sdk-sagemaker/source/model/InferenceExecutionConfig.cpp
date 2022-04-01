/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceExecutionConfig.h>
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

InferenceExecutionConfig::InferenceExecutionConfig() : 
    m_mode(InferenceExecutionMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

InferenceExecutionConfig::InferenceExecutionConfig(JsonView jsonValue) : 
    m_mode(InferenceExecutionMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceExecutionConfig& InferenceExecutionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = InferenceExecutionModeMapper::GetInferenceExecutionModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceExecutionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", InferenceExecutionModeMapper::GetNameForInferenceExecutionMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
