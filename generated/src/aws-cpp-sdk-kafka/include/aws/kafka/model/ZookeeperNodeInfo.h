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
    AWS_KAFKA_API ZookeeperNodeInfo();
    AWS_KAFKA_API ZookeeperNodeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ZookeeperNodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline const Aws::String& GetAttachedENIId() const{ return m_attachedENIId; }
    inline bool AttachedENIIdHasBeenSet() const { return m_attachedENIIdHasBeenSet; }
    inline void SetAttachedENIId(const Aws::String& value) { m_attachedENIIdHasBeenSet = true; m_attachedENIId = value; }
    inline void SetAttachedENIId(Aws::String&& value) { m_attachedENIIdHasBeenSet = true; m_attachedENIId = std::move(value); }
    inline void SetAttachedENIId(const char* value) { m_attachedENIIdHasBeenSet = true; m_attachedENIId.assign(value); }
    inline ZookeeperNodeInfo& WithAttachedENIId(const Aws::String& value) { SetAttachedENIId(value); return *this;}
    inline ZookeeperNodeInfo& WithAttachedENIId(Aws::String&& value) { SetAttachedENIId(std::move(value)); return *this;}
    inline ZookeeperNodeInfo& WithAttachedENIId(const char* value) { SetAttachedENIId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline const Aws::String& GetClientVpcIpAddress() const{ return m_clientVpcIpAddress; }
    inline bool ClientVpcIpAddressHasBeenSet() const { return m_clientVpcIpAddressHasBeenSet; }
    inline void SetClientVpcIpAddress(const Aws::String& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = value; }
    inline void SetClientVpcIpAddress(Aws::String&& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = std::move(value); }
    inline void SetClientVpcIpAddress(const char* value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress.assign(value); }
    inline ZookeeperNodeInfo& WithClientVpcIpAddress(const Aws::String& value) { SetClientVpcIpAddress(value); return *this;}
    inline ZookeeperNodeInfo& WithClientVpcIpAddress(Aws::String&& value) { SetClientVpcIpAddress(std::move(value)); return *this;}
    inline ZookeeperNodeInfo& WithClientVpcIpAddress(const char* value) { SetClientVpcIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Vector<Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline ZookeeperNodeInfo& WithEndpoints(const Aws::Vector<Aws::String>& value) { SetEndpoints(value); return *this;}
    inline ZookeeperNodeInfo& WithEndpoints(Aws::Vector<Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline ZookeeperNodeInfo& AddEndpoints(const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    inline ZookeeperNodeInfo& AddEndpoints(Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }
    inline ZookeeperNodeInfo& AddEndpoints(const char* value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The role-specific ID for Zookeeper.</p>
         
     */
    inline double GetZookeeperId() const{ return m_zookeeperId; }
    inline bool ZookeeperIdHasBeenSet() const { return m_zookeeperIdHasBeenSet; }
    inline void SetZookeeperId(double value) { m_zookeeperIdHasBeenSet = true; m_zookeeperId = value; }
    inline ZookeeperNodeInfo& WithZookeeperId(double value) { SetZookeeperId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline const Aws::String& GetZookeeperVersion() const{ return m_zookeeperVersion; }
    inline bool ZookeeperVersionHasBeenSet() const { return m_zookeeperVersionHasBeenSet; }
    inline void SetZookeeperVersion(const Aws::String& value) { m_zookeeperVersionHasBeenSet = true; m_zookeeperVersion = value; }
    inline void SetZookeeperVersion(Aws::String&& value) { m_zookeeperVersionHasBeenSet = true; m_zookeeperVersion = std::move(value); }
    inline void SetZookeeperVersion(const char* value) { m_zookeeperVersionHasBeenSet = true; m_zookeeperVersion.assign(value); }
    inline ZookeeperNodeInfo& WithZookeeperVersion(const Aws::String& value) { SetZookeeperVersion(value); return *this;}
    inline ZookeeperNodeInfo& WithZookeeperVersion(Aws::String&& value) { SetZookeeperVersion(std::move(value)); return *this;}
    inline ZookeeperNodeInfo& WithZookeeperVersion(const char* value) { SetZookeeperVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_attachedENIId;
    bool m_attachedENIIdHasBeenSet = false;

    Aws::String m_clientVpcIpAddress;
    bool m_clientVpcIpAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    double m_zookeeperId;
    bool m_zookeeperIdHasBeenSet = false;

    Aws::String m_zookeeperVersion;
    bool m_zookeeperVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
