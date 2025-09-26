/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ActionGroupExecutor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

ActionGroupExecutor::ActionGroupExecutor(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionGroupExecutor& ActionGroupExecutor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetString("lambda");
    m_lambdaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customControl"))
  {
    m_customControl = CustomControlMethodMapper::GetCustomControlMethodForName(jsonValue.GetString("customControl"));
    m_customControlHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionGroupExecutor::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaHasBeenSet)
  {
   payload.WithString("lambda", m_lambda);

  }

  if(m_customControlHasBeenSet)
  {
   payload.WithString("customControl", CustomControlMethodMapper::GetNameForCustomControlMethod(m_customControl));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
