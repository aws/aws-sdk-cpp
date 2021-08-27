/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/HumanLoopOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

HumanLoopOutput::HumanLoopOutput() : 
    m_outputS3UriHasBeenSet(false)
{
}

HumanLoopOutput::HumanLoopOutput(JsonView jsonValue) : 
    m_outputS3UriHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopOutput& HumanLoopOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputS3Uri"))
  {
    m_outputS3Uri = jsonValue.GetString("OutputS3Uri");

    m_outputS3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputS3UriHasBeenSet)
  {
   payload.WithString("OutputS3Uri", m_outputS3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
