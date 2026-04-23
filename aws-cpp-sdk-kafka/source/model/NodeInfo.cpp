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

#include <aws/kafka/model/NodeInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

NodeInfo::NodeInfo() : 
    m_addedToClusterTimeHasBeenSet(false),
    m_brokerNodeInfoHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_nodeARNHasBeenSet(false),
    m_nodeType(NodeType::NOT_SET),
    m_nodeTypeHasBeenSet(false),
    m_zookeeperNodeInfoHasBeenSet(false)
{
}

NodeInfo::NodeInfo(JsonView jsonValue) : 
    m_addedToClusterTimeHasBeenSet(false),
    m_brokerNodeInfoHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_nodeARNHasBeenSet(false),
    m_nodeType(NodeType::NOT_SET),
    m_nodeTypeHasBeenSet(false),
    m_zookeeperNodeInfoHasBeenSet(false)
{
  *this = jsonValue;
}

NodeInfo& NodeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addedToClusterTime"))
  {
    m_addedToClusterTime = jsonValue.GetString("addedToClusterTime");

    m_addedToClusterTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("brokerNodeInfo"))
  {
    m_brokerNodeInfo = jsonValue.GetObject("brokerNodeInfo");

    m_brokerNodeInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeARN"))
  {
    m_nodeARN = jsonValue.GetString("nodeARN");

    m_nodeARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeType"))
  {
    m_nodeType = NodeTypeMapper::GetNodeTypeForName(jsonValue.GetString("nodeType"));

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("zookeeperNodeInfo"))
  {
    m_zookeeperNodeInfo = jsonValue.GetObject("zookeeperNodeInfo");

    m_zookeeperNodeInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_addedToClusterTimeHasBeenSet)
  {
   payload.WithString("addedToClusterTime", m_addedToClusterTime);

  }

  if(m_brokerNodeInfoHasBeenSet)
  {
   payload.WithObject("brokerNodeInfo", m_brokerNodeInfo.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_nodeARNHasBeenSet)
  {
   payload.WithString("nodeARN", m_nodeARN);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("nodeType", NodeTypeMapper::GetNameForNodeType(m_nodeType));
  }

  if(m_zookeeperNodeInfoHasBeenSet)
  {
   payload.WithObject("zookeeperNodeInfo", m_zookeeperNodeInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
