/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/NodeProperties.h>
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

NodeProperties::NodeProperties() : 
    m_numNodes(0),
    m_numNodesHasBeenSet(false),
    m_mainNode(0),
    m_mainNodeHasBeenSet(false),
    m_nodeRangePropertiesHasBeenSet(false)
{
}

NodeProperties::NodeProperties(JsonView jsonValue) : 
    m_numNodes(0),
    m_numNodesHasBeenSet(false),
    m_mainNode(0),
    m_mainNodeHasBeenSet(false),
    m_nodeRangePropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

NodeProperties& NodeProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numNodes"))
  {
    m_numNodes = jsonValue.GetInteger("numNodes");

    m_numNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mainNode"))
  {
    m_mainNode = jsonValue.GetInteger("mainNode");

    m_mainNodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeRangeProperties"))
  {
    Aws::Utils::Array<JsonView> nodeRangePropertiesJsonList = jsonValue.GetArray("nodeRangeProperties");
    for(unsigned nodeRangePropertiesIndex = 0; nodeRangePropertiesIndex < nodeRangePropertiesJsonList.GetLength(); ++nodeRangePropertiesIndex)
    {
      m_nodeRangeProperties.push_back(nodeRangePropertiesJsonList[nodeRangePropertiesIndex].AsObject());
    }
    m_nodeRangePropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeProperties::Jsonize() const
{
  JsonValue payload;

  if(m_numNodesHasBeenSet)
  {
   payload.WithInteger("numNodes", m_numNodes);

  }

  if(m_mainNodeHasBeenSet)
  {
   payload.WithInteger("mainNode", m_mainNode);

  }

  if(m_nodeRangePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeRangePropertiesJsonList(m_nodeRangeProperties.size());
   for(unsigned nodeRangePropertiesIndex = 0; nodeRangePropertiesIndex < nodeRangePropertiesJsonList.GetLength(); ++nodeRangePropertiesIndex)
   {
     nodeRangePropertiesJsonList[nodeRangePropertiesIndex].AsObject(m_nodeRangeProperties[nodeRangePropertiesIndex].Jsonize());
   }
   payload.WithArray("nodeRangeProperties", std::move(nodeRangePropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
