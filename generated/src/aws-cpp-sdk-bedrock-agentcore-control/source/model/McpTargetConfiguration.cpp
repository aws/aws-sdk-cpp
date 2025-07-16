/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/McpTargetConfiguration.h>
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

McpTargetConfiguration::McpTargetConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

McpTargetConfiguration& McpTargetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("openApiSchema"))
  {
    m_openApiSchema = jsonValue.GetObject("openApiSchema");
    m_openApiSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("smithyModel"))
  {
    m_smithyModel = jsonValue.GetObject("smithyModel");
    m_smithyModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetObject("lambda");
    m_lambdaHasBeenSet = true;
  }
  return *this;
}

JsonValue McpTargetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_openApiSchemaHasBeenSet)
  {
   payload.WithObject("openApiSchema", m_openApiSchema.Jsonize());

  }

  if(m_smithyModelHasBeenSet)
  {
   payload.WithObject("smithyModel", m_smithyModel.Jsonize());

  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("lambda", m_lambda.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
