/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MemoryStrategy.h>
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

MemoryStrategy::MemoryStrategy(JsonView jsonValue)
{
  *this = jsonValue;
}

MemoryStrategy& MemoryStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("strategyId"))
  {
    m_strategyId = jsonValue.GetString("strategyId");
    m_strategyIdHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = MemoryStrategyTypeMapper::GetMemoryStrategyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespaces"))
  {
    Aws::Utils::Array<JsonView> namespacesJsonList = jsonValue.GetArray("namespaces");
    for(unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex)
    {
      m_namespaces.push_back(namespacesJsonList[namespacesIndex].AsString());
    }
    m_namespacesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = MemoryStrategyStatusMapper::GetMemoryStrategyStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_strategyIdHasBeenSet)
  {
   payload.WithString("strategyId", m_strategyId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MemoryStrategyTypeMapper::GetNameForMemoryStrategyType(m_type));
  }

  if(m_namespacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namespacesJsonList(m_namespaces.size());
   for(unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex)
   {
     namespacesJsonList[namespacesIndex].AsString(m_namespaces[namespacesIndex]);
   }
   payload.WithArray("namespaces", std::move(namespacesJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MemoryStrategyStatusMapper::GetNameForMemoryStrategyStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
