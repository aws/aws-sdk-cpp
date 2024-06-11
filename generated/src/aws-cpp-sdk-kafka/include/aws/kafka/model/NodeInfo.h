/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/BrokerNodeInfo.h>
#include <aws/kafka/model/ControllerNodeInfo.h>
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
  class NodeInfo
  {
  public:
    AWS_KAFKA_API NodeInfo();
    AWS_KAFKA_API NodeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API NodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The start time.</p>
         
     */
    inline const Aws::String& GetAddedToClusterTime() const{ return m_addedToClusterTime; }
    inline bool AddedToClusterTimeHasBeenSet() const { return m_addedToClusterTimeHasBeenSet; }
    inline void SetAddedToClusterTime(const Aws::String& value) { m_addedToClusterTimeHasBeenSet = true; m_addedToClusterTime = value; }
    inline void SetAddedToClusterTime(Aws::String&& value) { m_addedToClusterTimeHasBeenSet = true; m_addedToClusterTime = std::move(value); }
    inline void SetAddedToClusterTime(const char* value) { m_addedToClusterTimeHasBeenSet = true; m_addedToClusterTime.assign(value); }
    inline NodeInfo& WithAddedToClusterTime(const Aws::String& value) { SetAddedToClusterTime(value); return *this;}
    inline NodeInfo& WithAddedToClusterTime(Aws::String&& value) { SetAddedToClusterTime(std::move(value)); return *this;}
    inline NodeInfo& WithAddedToClusterTime(const char* value) { SetAddedToClusterTime(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The broker node info.</p>
         
     */
    inline const BrokerNodeInfo& GetBrokerNodeInfo() const{ return m_brokerNodeInfo; }
    inline bool BrokerNodeInfoHasBeenSet() const { return m_brokerNodeInfoHasBeenSet; }
    inline void SetBrokerNodeInfo(const BrokerNodeInfo& value) { m_brokerNodeInfoHasBeenSet = true; m_brokerNodeInfo = value; }
    inline void SetBrokerNodeInfo(BrokerNodeInfo&& value) { m_brokerNodeInfoHasBeenSet = true; m_brokerNodeInfo = std::move(value); }
    inline NodeInfo& WithBrokerNodeInfo(const BrokerNodeInfo& value) { SetBrokerNodeInfo(value); return *this;}
    inline NodeInfo& WithBrokerNodeInfo(BrokerNodeInfo&& value) { SetBrokerNodeInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The ControllerNodeInfo.</p>
         
     */
    inline const ControllerNodeInfo& GetControllerNodeInfo() const{ return m_controllerNodeInfo; }
    inline bool ControllerNodeInfoHasBeenSet() const { return m_controllerNodeInfoHasBeenSet; }
    inline void SetControllerNodeInfo(const ControllerNodeInfo& value) { m_controllerNodeInfoHasBeenSet = true; m_controllerNodeInfo = value; }
    inline void SetControllerNodeInfo(ControllerNodeInfo&& value) { m_controllerNodeInfoHasBeenSet = true; m_controllerNodeInfo = std::move(value); }
    inline NodeInfo& WithControllerNodeInfo(const ControllerNodeInfo& value) { SetControllerNodeInfo(value); return *this;}
    inline NodeInfo& WithControllerNodeInfo(ControllerNodeInfo&& value) { SetControllerNodeInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The instance type.</p>
         
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline NodeInfo& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline NodeInfo& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline NodeInfo& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline const Aws::String& GetNodeARN() const{ return m_nodeARN; }
    inline bool NodeARNHasBeenSet() const { return m_nodeARNHasBeenSet; }
    inline void SetNodeARN(const Aws::String& value) { m_nodeARNHasBeenSet = true; m_nodeARN = value; }
    inline void SetNodeARN(Aws::String&& value) { m_nodeARNHasBeenSet = true; m_nodeARN = std::move(value); }
    inline void SetNodeARN(const char* value) { m_nodeARNHasBeenSet = true; m_nodeARN.assign(value); }
    inline NodeInfo& WithNodeARN(const Aws::String& value) { SetNodeARN(value); return *this;}
    inline NodeInfo& WithNodeARN(Aws::String&& value) { SetNodeARN(std::move(value)); return *this;}
    inline NodeInfo& WithNodeARN(const char* value) { SetNodeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The node type.</p>
         
     */
    inline const NodeType& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const NodeType& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(NodeType&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline NodeInfo& WithNodeType(const NodeType& value) { SetNodeType(value); return *this;}
    inline NodeInfo& WithNodeType(NodeType&& value) { SetNodeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The ZookeeperNodeInfo.</p>
         
     */
    inline const ZookeeperNodeInfo& GetZookeeperNodeInfo() const{ return m_zookeeperNodeInfo; }
    inline bool ZookeeperNodeInfoHasBeenSet() const { return m_zookeeperNodeInfoHasBeenSet; }
    inline void SetZookeeperNodeInfo(const ZookeeperNodeInfo& value) { m_zookeeperNodeInfoHasBeenSet = true; m_zookeeperNodeInfo = value; }
    inline void SetZookeeperNodeInfo(ZookeeperNodeInfo&& value) { m_zookeeperNodeInfoHasBeenSet = true; m_zookeeperNodeInfo = std::move(value); }
    inline NodeInfo& WithZookeeperNodeInfo(const ZookeeperNodeInfo& value) { SetZookeeperNodeInfo(value); return *this;}
    inline NodeInfo& WithZookeeperNodeInfo(ZookeeperNodeInfo&& value) { SetZookeeperNodeInfo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_addedToClusterTime;
    bool m_addedToClusterTimeHasBeenSet = false;

    BrokerNodeInfo m_brokerNodeInfo;
    bool m_brokerNodeInfoHasBeenSet = false;

    ControllerNodeInfo m_controllerNodeInfo;
    bool m_controllerNodeInfoHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_nodeARN;
    bool m_nodeARNHasBeenSet = false;

    NodeType m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    ZookeeperNodeInfo m_zookeeperNodeInfo;
    bool m_zookeeperNodeInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
