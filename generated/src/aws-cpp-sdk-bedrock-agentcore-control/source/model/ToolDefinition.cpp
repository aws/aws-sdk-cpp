/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ToolDefinition.h>
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

ToolDefinition::ToolDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolDefinition& ToolDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputSchema"))
  {
    m_inputSchema = jsonValue.GetObject("inputSchema");
    m_inputSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputSchema"))
  {
    m_outputSchema = jsonValue.GetObject("outputSchema");
    m_outputSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_inputSchemaHasBeenSet)
  {
   payload.WithObject("inputSchema", m_inputSchema.Jsonize());

  }

  if(m_outputSchemaHasBeenSet)
  {
   payload.WithObject("outputSchema", m_outputSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
