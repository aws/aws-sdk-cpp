/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ModifyMemoryStrategies.h>
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

ModifyMemoryStrategies::ModifyMemoryStrategies(JsonView jsonValue)
{
  *this = jsonValue;
}

ModifyMemoryStrategies& ModifyMemoryStrategies::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addMemoryStrategies"))
  {
    Aws::Utils::Array<JsonView> addMemoryStrategiesJsonList = jsonValue.GetArray("addMemoryStrategies");
    for(unsigned addMemoryStrategiesIndex = 0; addMemoryStrategiesIndex < addMemoryStrategiesJsonList.GetLength(); ++addMemoryStrategiesIndex)
    {
      m_addMemoryStrategies.push_back(addMemoryStrategiesJsonList[addMemoryStrategiesIndex].AsObject());
    }
    m_addMemoryStrategiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifyMemoryStrategies"))
  {
    Aws::Utils::Array<JsonView> modifyMemoryStrategiesJsonList = jsonValue.GetArray("modifyMemoryStrategies");
    for(unsigned modifyMemoryStrategiesIndex = 0; modifyMemoryStrategiesIndex < modifyMemoryStrategiesJsonList.GetLength(); ++modifyMemoryStrategiesIndex)
    {
      m_modifyMemoryStrategies.push_back(modifyMemoryStrategiesJsonList[modifyMemoryStrategiesIndex].AsObject());
    }
    m_modifyMemoryStrategiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteMemoryStrategies"))
  {
    Aws::Utils::Array<JsonView> deleteMemoryStrategiesJsonList = jsonValue.GetArray("deleteMemoryStrategies");
    for(unsigned deleteMemoryStrategiesIndex = 0; deleteMemoryStrategiesIndex < deleteMemoryStrategiesJsonList.GetLength(); ++deleteMemoryStrategiesIndex)
    {
      m_deleteMemoryStrategies.push_back(deleteMemoryStrategiesJsonList[deleteMemoryStrategiesIndex].AsObject());
    }
    m_deleteMemoryStrategiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ModifyMemoryStrategies::Jsonize() const
{
  JsonValue payload;

  if(m_addMemoryStrategiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addMemoryStrategiesJsonList(m_addMemoryStrategies.size());
   for(unsigned addMemoryStrategiesIndex = 0; addMemoryStrategiesIndex < addMemoryStrategiesJsonList.GetLength(); ++addMemoryStrategiesIndex)
   {
     addMemoryStrategiesJsonList[addMemoryStrategiesIndex].AsObject(m_addMemoryStrategies[addMemoryStrategiesIndex].Jsonize());
   }
   payload.WithArray("addMemoryStrategies", std::move(addMemoryStrategiesJsonList));

  }

  if(m_modifyMemoryStrategiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modifyMemoryStrategiesJsonList(m_modifyMemoryStrategies.size());
   for(unsigned modifyMemoryStrategiesIndex = 0; modifyMemoryStrategiesIndex < modifyMemoryStrategiesJsonList.GetLength(); ++modifyMemoryStrategiesIndex)
   {
     modifyMemoryStrategiesJsonList[modifyMemoryStrategiesIndex].AsObject(m_modifyMemoryStrategies[modifyMemoryStrategiesIndex].Jsonize());
   }
   payload.WithArray("modifyMemoryStrategies", std::move(modifyMemoryStrategiesJsonList));

  }

  if(m_deleteMemoryStrategiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deleteMemoryStrategiesJsonList(m_deleteMemoryStrategies.size());
   for(unsigned deleteMemoryStrategiesIndex = 0; deleteMemoryStrategiesIndex < deleteMemoryStrategiesJsonList.GetLength(); ++deleteMemoryStrategiesIndex)
   {
     deleteMemoryStrategiesJsonList[deleteMemoryStrategiesIndex].AsObject(m_deleteMemoryStrategies[deleteMemoryStrategiesIndex].Jsonize());
   }
   payload.WithArray("deleteMemoryStrategies", std::move(deleteMemoryStrategiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
