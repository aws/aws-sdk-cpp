/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleExecutionOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

RuleExecutionOutput::RuleExecutionOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleExecutionOutput& RuleExecutionOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionResult"))
  {
    m_executionResult = jsonValue.GetObject("executionResult");
    m_executionResultHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleExecutionOutput::Jsonize() const
{
  JsonValue payload;

  if(m_executionResultHasBeenSet)
  {
   payload.WithObject("executionResult", m_executionResult.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
