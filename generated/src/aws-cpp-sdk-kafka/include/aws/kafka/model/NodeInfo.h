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
    AWS_KAFKA_API NodeInfo() = default;
    AWS_KAFKA_API NodeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API NodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The start time.</p>
         
     */
    inline const Aws::String& GetAddedToClusterTime() const { return m_addedToClusterTime; }
    inline bool AddedToClusterTimeHasBeenSet() const { return m_addedToClusterTimeHasBeenSet; }
    template<typename AddedToClusterTimeT = Aws::String>
    void SetAddedToClusterTime(AddedToClusterTimeT&& value) { m_addedToClusterTimeHasBeenSet = true; m_addedToClusterTime = std::forward<AddedToClusterTimeT>(value); }
    template<typename AddedToClusterTimeT = Aws::String>
    NodeInfo& WithAddedToClusterTime(AddedToClusterTimeT&& value) { SetAddedToClusterTime(std::forward<AddedToClusterTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The broker node info.</p>
         
     */
    inline const BrokerNodeInfo& GetBrokerNodeInfo() const { return m_brokerNodeInfo; }
    inline bool BrokerNodeInfoHasBeenSet() const { return m_brokerNodeInfoHasBeenSet; }
    template<typename BrokerNodeInfoT = BrokerNodeInfo>
    void SetBrokerNodeInfo(BrokerNodeInfoT&& value) { m_brokerNodeInfoHasBeenSet = true; m_brokerNodeInfo = std::forward<BrokerNodeInfoT>(value); }
    template<typename BrokerNodeInfoT = BrokerNodeInfo>
    NodeInfo& WithBrokerNodeInfo(BrokerNodeInfoT&& value) { SetBrokerNodeInfo(std::forward<BrokerNodeInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The ControllerNodeInfo.</p>
         
     */
    inline const ControllerNodeInfo& GetControllerNodeInfo() const { return m_controllerNodeInfo; }
    inline bool ControllerNodeInfoHasBeenSet() const { return m_controllerNodeInfoHasBeenSet; }
    template<typename ControllerNodeInfoT = ControllerNodeInfo>
    void SetControllerNodeInfo(ControllerNodeInfoT&& value) { m_controllerNodeInfoHasBeenSet = true; m_controllerNodeInfo = std::forward<ControllerNodeInfoT>(value); }
    template<typename ControllerNodeInfoT = ControllerNodeInfo>
    NodeInfo& WithControllerNodeInfo(ControllerNodeInfoT&& value) { SetControllerNodeInfo(std::forward<ControllerNodeInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The instance type.</p>
         
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    NodeInfo& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the node.</p>
         
     */
    inline const Aws::String& GetNodeARN() const { return m_nodeARN; }
    inline bool NodeARNHasBeenSet() const { return m_nodeARNHasBeenSet; }
    template<typename NodeARNT = Aws::String>
    void SetNodeARN(NodeARNT&& value) { m_nodeARNHasBeenSet = true; m_nodeARN = std::forward<NodeARNT>(value); }
    template<typename NodeARNT = Aws::String>
    NodeInfo& WithNodeARN(NodeARNT&& value) { SetNodeARN(std::forward<NodeARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The node type.</p>
         
     */
    inline NodeType GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(NodeType value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline NodeInfo& WithNodeType(NodeType value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The ZookeeperNodeInfo.</p>
         
     */
    inline const ZookeeperNodeInfo& GetZookeeperNodeInfo() const { return m_zookeeperNodeInfo; }
    inline bool ZookeeperNodeInfoHasBeenSet() const { return m_zookeeperNodeInfoHasBeenSet; }
    template<typename ZookeeperNodeInfoT = ZookeeperNodeInfo>
    void SetZookeeperNodeInfo(ZookeeperNodeInfoT&& value) { m_zookeeperNodeInfoHasBeenSet = true; m_zookeeperNodeInfo = std::forward<ZookeeperNodeInfoT>(value); }
    template<typename ZookeeperNodeInfoT = ZookeeperNodeInfo>
    NodeInfo& WithZookeeperNodeInfo(ZookeeperNodeInfoT&& value) { SetZookeeperNodeInfo(std::forward<ZookeeperNodeInfoT>(value)); return *this;}
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

    NodeType m_nodeType{NodeType::NOT_SET};
    bool m_nodeTypeHasBeenSet = false;

    ZookeeperNodeInfo m_zookeeperNodeInfo;
    bool m_zookeeperNodeInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
