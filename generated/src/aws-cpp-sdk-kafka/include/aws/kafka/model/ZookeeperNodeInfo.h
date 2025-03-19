/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
            <p>Zookeeper node information.</p>
         <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ZookeeperNodeInfo">AWS
   * API Reference</a></p>
   */
  class ZookeeperNodeInfo
  {
  public:
    AWS_KAFKA_API ZookeeperNodeInfo() = default;
    AWS_KAFKA_API ZookeeperNodeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ZookeeperNodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline const Aws::String& GetAttachedENIId() const { return m_attachedENIId; }
    inline bool AttachedENIIdHasBeenSet() const { return m_attachedENIIdHasBeenSet; }
    template<typename AttachedENIIdT = Aws::String>
    void SetAttachedENIId(AttachedENIIdT&& value) { m_attachedENIIdHasBeenSet = true; m_attachedENIId = std::forward<AttachedENIIdT>(value); }
    template<typename AttachedENIIdT = Aws::String>
    ZookeeperNodeInfo& WithAttachedENIId(AttachedENIIdT&& value) { SetAttachedENIId(std::forward<AttachedENIIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline const Aws::String& GetClientVpcIpAddress() const { return m_clientVpcIpAddress; }
    inline bool ClientVpcIpAddressHasBeenSet() const { return m_clientVpcIpAddressHasBeenSet; }
    template<typename ClientVpcIpAddressT = Aws::String>
    void SetClientVpcIpAddress(ClientVpcIpAddressT&& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = std::forward<ClientVpcIpAddressT>(value); }
    template<typename ClientVpcIpAddressT = Aws::String>
    ZookeeperNodeInfo& WithClientVpcIpAddress(ClientVpcIpAddressT&& value) { SetClientVpcIpAddress(std::forward<ClientVpcIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<Aws::String>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<Aws::String>>
    ZookeeperNodeInfo& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = Aws::String>
    ZookeeperNodeInfo& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The role-specific ID for Zookeeper.</p>
         
     */
    inline double GetZookeeperId() const { return m_zookeeperId; }
    inline bool ZookeeperIdHasBeenSet() const { return m_zookeeperIdHasBeenSet; }
    inline void SetZookeeperId(double value) { m_zookeeperIdHasBeenSet = true; m_zookeeperId = value; }
    inline ZookeeperNodeInfo& WithZookeeperId(double value) { SetZookeeperId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline const Aws::String& GetZookeeperVersion() const { return m_zookeeperVersion; }
    inline bool ZookeeperVersionHasBeenSet() const { return m_zookeeperVersionHasBeenSet; }
    template<typename ZookeeperVersionT = Aws::String>
    void SetZookeeperVersion(ZookeeperVersionT&& value) { m_zookeeperVersionHasBeenSet = true; m_zookeeperVersion = std::forward<ZookeeperVersionT>(value); }
    template<typename ZookeeperVersionT = Aws::String>
    ZookeeperNodeInfo& WithZookeeperVersion(ZookeeperVersionT&& value) { SetZookeeperVersion(std::forward<ZookeeperVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachedENIId;
    bool m_attachedENIIdHasBeenSet = false;

    Aws::String m_clientVpcIpAddress;
    bool m_clientVpcIpAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    double m_zookeeperId{0.0};
    bool m_zookeeperIdHasBeenSet = false;

    Aws::String m_zookeeperVersion;
    bool m_zookeeperVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
