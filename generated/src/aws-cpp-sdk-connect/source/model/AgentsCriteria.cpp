/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentsCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AgentsCriteria::AgentsCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentsCriteria& AgentsCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AgentIds"))
  {
    Aws::Utils::Array<JsonView> agentIdsJsonList = jsonValue.GetArray("AgentIds");
    for(unsigned agentIdsIndex = 0; agentIdsIndex < agentIdsJsonList.GetLength(); ++agentIdsIndex)
    {
      m_agentIds.push_back(agentIdsJsonList[agentIdsIndex].AsString());
    }
    m_agentIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentsCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentIdsJsonList(m_agentIds.size());
   for(unsigned agentIdsIndex = 0; agentIdsIndex < agentIdsJsonList.GetLength(); ++agentIdsIndex)
   {
     agentIdsJsonList[agentIdsIndex].AsString(m_agentIds[agentIdsIndex]);
   }
   payload.WithArray("AgentIds", std::move(agentIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
