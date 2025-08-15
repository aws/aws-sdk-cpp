/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowDefinition.h>
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

FlowDefinition::FlowDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowDefinition& FlowDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodes"))
  {
    Aws::Utils::Array<JsonView> nodesJsonList = jsonValue.GetArray("nodes");
    for(unsigned nodesIndex = 0; nodesIndex < nodesJsonList.GetLength(); ++nodesIndex)
    {
      m_nodes.push_back(nodesJsonList[nodesIndex].AsObject());
    }
    m_nodesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connections"))
  {
    Aws::Utils::Array<JsonView> connectionsJsonList = jsonValue.GetArray("connections");
    for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
    {
      m_connections.push_back(connectionsJsonList[connectionsIndex].AsObject());
    }
    m_connectionsHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodesJsonList(m_nodes.size());
   for(unsigned nodesIndex = 0; nodesIndex < nodesJsonList.GetLength(); ++nodesIndex)
   {
     nodesJsonList[nodesIndex].AsObject(m_nodes[nodesIndex].Jsonize());
   }
   payload.WithArray("nodes", std::move(nodesJsonList));

  }

  if(m_connectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectionsJsonList(m_connections.size());
   for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
   {
     connectionsJsonList[connectionsIndex].AsObject(m_connections[connectionsIndex].Jsonize());
   }
   payload.WithArray("connections", std::move(connectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
