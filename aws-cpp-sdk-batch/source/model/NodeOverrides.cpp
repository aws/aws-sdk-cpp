/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/NodeOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

NodeOverrides::NodeOverrides() : 
    m_numNodes(0),
    m_numNodesHasBeenSet(false),
    m_nodePropertyOverridesHasBeenSet(false)
{
}

NodeOverrides::NodeOverrides(JsonView jsonValue) : 
    m_numNodes(0),
    m_numNodesHasBeenSet(false),
    m_nodePropertyOverridesHasBeenSet(false)
{
  *this = jsonValue;
}

NodeOverrides& NodeOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numNodes"))
  {
    m_numNodes = jsonValue.GetInteger("numNodes");

    m_numNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodePropertyOverrides"))
  {
    Aws::Utils::Array<JsonView> nodePropertyOverridesJsonList = jsonValue.GetArray("nodePropertyOverrides");
    for(unsigned nodePropertyOverridesIndex = 0; nodePropertyOverridesIndex < nodePropertyOverridesJsonList.GetLength(); ++nodePropertyOverridesIndex)
    {
      m_nodePropertyOverrides.push_back(nodePropertyOverridesJsonList[nodePropertyOverridesIndex].AsObject());
    }
    m_nodePropertyOverridesHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_numNodesHasBeenSet)
  {
   payload.WithInteger("numNodes", m_numNodes);

  }

  if(m_nodePropertyOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodePropertyOverridesJsonList(m_nodePropertyOverrides.size());
   for(unsigned nodePropertyOverridesIndex = 0; nodePropertyOverridesIndex < nodePropertyOverridesJsonList.GetLength(); ++nodePropertyOverridesIndex)
   {
     nodePropertyOverridesJsonList[nodePropertyOverridesIndex].AsObject(m_nodePropertyOverrides[nodePropertyOverridesIndex].Jsonize());
   }
   payload.WithArray("nodePropertyOverrides", std::move(nodePropertyOverridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
