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

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/BrokerNodeInfo.h>
#include <aws/kafka/model/NodeType.h>
#include <aws/kafka/model/ZookeeperNodeInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>The node information object.</p>
         <p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/NodeInfo">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API NodeInfo
  {
  public:
    NodeInfo();
    NodeInfo(Aws::Utils::Json::JsonView jsonValue);
    NodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The start time.</p>
         
     */
    inline const Aws::String& GetAddedToClusterTime() const{ return m_addedToClusterTime; }

    /**
     * 
            <p>The start time.</p>
         
     */
    inline bool AddedToClusterTimeHasBeenSet() const { return m_addedToClusterTimeHasBeenSet; }

    /**
     * 
            <p>The start time.</p>
         
     */
    inline void SetAddedToClusterTime(const Aws::String& value) { m_addedToClusterTimeHasBeenSet = true; m_addedToClusterTime = value; }

    /**
     * 
            <p>The start time.</p>
         
     */
    inline void SetAddedToClusterTime(Aws::String&& value) { m_addedToClusterTimeHasBeenSet = true; m_addedToClusterTime = std::move(value); }

    /**
     * 
            <p>The start time.</p>
         
     */
    inline void SetAddedToClusterTime(const char* value) { m_addedToClusterTimeHasBeenSet = true; m_addedToClusterTime.assign(value); }

    /**
     * 
            <p>The start time.</p>
         
     */
    inline NodeInfo& WithAddedToClusterTime(const Aws::String& value) { SetAddedToClusterTime(value); return *this;}

    /**
     * 
            <p>The start time.</p>
         
     */
    inline NodeInfo& WithAddedToClusterTime(Aws::String&& value) { SetAddedToClusterTime(std::move(value)); return *this;}

    /**
     * 
            <p>The start time.</p>
         
     */
    inline NodeInfo& WithAddedToClusterTime(const char* value) { SetAddedToClusterTime(value); return *this;}


    /**
     * 
            <p>The broker node info.</p>
         
     */
    inline const BrokerNodeInfo& GetBrokerNodeInfo() const{ return m_brokerNodeInfo; }

    /**
     * 
            <p>The broker node info.</p>
         
     */
    inline bool BrokerNodeInfoHasBeenSet() const { return m_brokerNodeInfoHasBeenSet; }

    /**
     * 
            <p>The broker node info.</p>
         
     */
    inline void SetBrokerNodeInfo(const BrokerNodeInfo& value) { m_brokerNodeInfoHasBeenSet = true; m_brokerNodeInfo = value; }

    /**
     * 
            <p>The broker node info.</p>
         
     */
    inline void SetBrokerNodeInfo(BrokerNodeInfo&& value) { m_brokerNodeInfoHasBeenSet = true; m_brokerNodeInfo = std::move(value); }

    /**
     * 
            <p>The broker node info.</p>
         
     */
    inline NodeInfo& WithBrokerNodeInfo(const BrokerNodeInfo& value) { SetBrokerNodeInfo(value); return *this;}

    /**
     * 
            <p>The broker node info.</p>
         
     */
    inline NodeInfo& WithBrokerNodeInfo(BrokerNodeInfo&& value) { SetBrokerNodeInfo(std::move(value)); return *this;}


    /**
     * 
            <p>The instance type.</p>
         
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * 
            <p>The instance type.</p>
         
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * 
            <p>The instance type.</p>
         
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * 
            <p>The instance type.</p>
         
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * 
            <p>The instance type.</p>
         
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * 
            <p>The instance type.</p>
         
     */
    inline NodeInfo& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * 
            <p>The instance type.</p>
         
     */
    inline NodeInfo& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * 
            <p>The instance type.</p>
         
     */
    inline NodeInfo& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline const Aws::String& GetNodeARN() const{ return m_nodeARN; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline bool NodeARNHasBeenSet() const { return m_nodeARNHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline void SetNodeARN(const Aws::String& value) { m_nodeARNHasBeenSet = true; m_nodeARN = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline void SetNodeARN(Aws::String&& value) { m_nodeARNHasBeenSet = true; m_nodeARN = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline void SetNodeARN(const char* value) { m_nodeARNHasBeenSet = true; m_nodeARN.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline NodeInfo& WithNodeARN(const Aws::String& value) { SetNodeARN(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline NodeInfo& WithNodeARN(Aws::String&& value) { SetNodeARN(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline NodeInfo& WithNodeARN(const char* value) { SetNodeARN(value); return *this;}


    /**
     * 
            <p>The node type.</p>
         
     */
    inline const NodeType& GetNodeType() const{ return m_nodeType; }

    /**
     * 
            <p>The node type.</p>
         
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * 
            <p>The node type.</p>
         
     */
    inline void SetNodeType(const NodeType& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * 
            <p>The node type.</p>
         
     */
    inline void SetNodeType(NodeType&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * 
            <p>The node type.</p>
         
     */
    inline NodeInfo& WithNodeType(const NodeType& value) { SetNodeType(value); return *this;}

    /**
     * 
            <p>The node type.</p>
         
     */
    inline NodeInfo& WithNodeType(NodeType&& value) { SetNodeType(std::move(value)); return *this;}


    /**
     * 
            <p>The ZookeeperNodeInfo.</p>
         
     */
    inline const ZookeeperNodeInfo& GetZookeeperNodeInfo() const{ return m_zookeeperNodeInfo; }

    /**
     * 
            <p>The ZookeeperNodeInfo.</p>
         
     */
    inline bool ZookeeperNodeInfoHasBeenSet() const { return m_zookeeperNodeInfoHasBeenSet; }

    /**
     * 
            <p>The ZookeeperNodeInfo.</p>
         
     */
    inline void SetZookeeperNodeInfo(const ZookeeperNodeInfo& value) { m_zookeeperNodeInfoHasBeenSet = true; m_zookeeperNodeInfo = value; }

    /**
     * 
            <p>The ZookeeperNodeInfo.</p>
         
     */
    inline void SetZookeeperNodeInfo(ZookeeperNodeInfo&& value) { m_zookeeperNodeInfoHasBeenSet = true; m_zookeeperNodeInfo = std::move(value); }

    /**
     * 
            <p>The ZookeeperNodeInfo.</p>
         
     */
    inline NodeInfo& WithZookeeperNodeInfo(const ZookeeperNodeInfo& value) { SetZookeeperNodeInfo(value); return *this;}

    /**
     * 
            <p>The ZookeeperNodeInfo.</p>
         
     */
    inline NodeInfo& WithZookeeperNodeInfo(ZookeeperNodeInfo&& value) { SetZookeeperNodeInfo(std::move(value)); return *this;}

  private:

    Aws::String m_addedToClusterTime;
    bool m_addedToClusterTimeHasBeenSet;

    BrokerNodeInfo m_brokerNodeInfo;
    bool m_brokerNodeInfoHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_nodeARN;
    bool m_nodeARNHasBeenSet;

    NodeType m_nodeType;
    bool m_nodeTypeHasBeenSet;

    ZookeeperNodeInfo m_zookeeperNodeInfo;
    bool m_zookeeperNodeInfoHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
