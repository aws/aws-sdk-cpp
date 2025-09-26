/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgentActionGroup.h>
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

AgentActionGroup::AgentActionGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentActionGroup& AgentActionGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroupName"))
  {
    m_actionGroupName = jsonValue.GetString("actionGroupName");
    m_actionGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentActionGroupSignature"))
  {
    m_parentActionGroupSignature = ActionGroupSignatureMapper::GetActionGroupSignatureForName(jsonValue.GetString("parentActionGroupSignature"));
    m_parentActionGroupSignatureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionGroupExecutor"))
  {
    m_actionGroupExecutor = jsonValue.GetObject("actionGroupExecutor");
    m_actionGroupExecutorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiSchema"))
  {
    m_apiSchema = jsonValue.GetObject("apiSchema");
    m_apiSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("functionSchema"))
  {
    m_functionSchema = jsonValue.GetObject("functionSchema");
    m_functionSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentActionGroupSignatureParams"))
  {
    Aws::Map<Aws::String, JsonView> parentActionGroupSignatureParamsJsonMap = jsonValue.GetObject("parentActionGroupSignatureParams").GetAllObjects();
    for(auto& parentActionGroupSignatureParamsItem : parentActionGroupSignatureParamsJsonMap)
    {
      m_parentActionGroupSignatureParams[parentActionGroupSignatureParamsItem.first] = parentActionGroupSignatureParamsItem.second.AsString();
    }
    m_parentActionGroupSignatureParamsHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentActionGroup::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupNameHasBeenSet)
  {
   payload.WithString("actionGroupName", m_actionGroupName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_parentActionGroupSignatureHasBeenSet)
  {
   payload.WithString("parentActionGroupSignature", ActionGroupSignatureMapper::GetNameForActionGroupSignature(m_parentActionGroupSignature));
  }

  if(m_actionGroupExecutorHasBeenSet)
  {
   payload.WithObject("actionGroupExecutor", m_actionGroupExecutor.Jsonize());

  }

  if(m_apiSchemaHasBeenSet)
  {
   payload.WithObject("apiSchema", m_apiSchema.Jsonize());

  }

  if(m_functionSchemaHasBeenSet)
  {
   payload.WithObject("functionSchema", m_functionSchema.Jsonize());

  }

  if(m_parentActionGroupSignatureParamsHasBeenSet)
  {
   JsonValue parentActionGroupSignatureParamsJsonMap;
   for(auto& parentActionGroupSignatureParamsItem : m_parentActionGroupSignatureParams)
   {
     parentActionGroupSignatureParamsJsonMap.WithString(parentActionGroupSignatureParamsItem.first, parentActionGroupSignatureParamsItem.second);
   }
   payload.WithObject("parentActionGroupSignatureParams", std::move(parentActionGroupSignatureParamsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
