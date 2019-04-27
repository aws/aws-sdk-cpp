/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> nodePropertyOverridesJsonList = jsonValue.GetArray("nodePropertyOverrides");
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
   Array<JsonValue> nodePropertyOverridesJsonList(m_nodePropertyOverrides.size());
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
