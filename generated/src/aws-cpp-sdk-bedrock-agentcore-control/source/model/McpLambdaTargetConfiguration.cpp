/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/McpLambdaTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

McpLambdaTargetConfiguration::McpLambdaTargetConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

McpLambdaTargetConfiguration& McpLambdaTargetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("lambdaArn");
    m_lambdaArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toolSchema"))
  {
    m_toolSchema = jsonValue.GetObject("toolSchema");
    m_toolSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue McpLambdaTargetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("lambdaArn", m_lambdaArn);

  }

  if(m_toolSchemaHasBeenSet)
  {
   payload.WithObject("toolSchema", m_toolSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
