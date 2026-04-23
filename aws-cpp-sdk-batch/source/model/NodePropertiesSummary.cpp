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

#include <aws/batch/model/NodePropertiesSummary.h>
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

NodePropertiesSummary::NodePropertiesSummary() : 
    m_isMainNode(false),
    m_isMainNodeHasBeenSet(false),
    m_numNodes(0),
    m_numNodesHasBeenSet(false),
    m_nodeIndex(0),
    m_nodeIndexHasBeenSet(false)
{
}

NodePropertiesSummary::NodePropertiesSummary(JsonView jsonValue) : 
    m_isMainNode(false),
    m_isMainNodeHasBeenSet(false),
    m_numNodes(0),
    m_numNodesHasBeenSet(false),
    m_nodeIndex(0),
    m_nodeIndexHasBeenSet(false)
{
  *this = jsonValue;
}

NodePropertiesSummary& NodePropertiesSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isMainNode"))
  {
    m_isMainNode = jsonValue.GetBool("isMainNode");

    m_isMainNodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numNodes"))
  {
    m_numNodes = jsonValue.GetInteger("numNodes");

    m_numNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeIndex"))
  {
    m_nodeIndex = jsonValue.GetInteger("nodeIndex");

    m_nodeIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue NodePropertiesSummary::Jsonize() const
{
  JsonValue payload;

  if(m_isMainNodeHasBeenSet)
  {
   payload.WithBool("isMainNode", m_isMainNode);

  }

  if(m_numNodesHasBeenSet)
  {
   payload.WithInteger("numNodes", m_numNodes);

  }

  if(m_nodeIndexHasBeenSet)
  {
   payload.WithInteger("nodeIndex", m_nodeIndex);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
