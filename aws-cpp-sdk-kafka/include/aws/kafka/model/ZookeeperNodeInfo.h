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
  class AWS_KAFKA_API ZookeeperNodeInfo
  {
  public:
    ZookeeperNodeInfo();
    ZookeeperNodeInfo(Aws::Utils::Json::JsonView jsonValue);
    ZookeeperNodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline const Aws::String& GetAttachedENIId() const{ return m_attachedENIId; }

    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline bool AttachedENIIdHasBeenSet() const { return m_attachedENIIdHasBeenSet; }

    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline void SetAttachedENIId(const Aws::String& value) { m_attachedENIIdHasBeenSet = true; m_attachedENIId = value; }

    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline void SetAttachedENIId(Aws::String&& value) { m_attachedENIIdHasBeenSet = true; m_attachedENIId = std::move(value); }

    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline void SetAttachedENIId(const char* value) { m_attachedENIIdHasBeenSet = true; m_attachedENIId.assign(value); }

    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline ZookeeperNodeInfo& WithAttachedENIId(const Aws::String& value) { SetAttachedENIId(value); return *this;}

    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline ZookeeperNodeInfo& WithAttachedENIId(Aws::String&& value) { SetAttachedENIId(std::move(value)); return *this;}

    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline ZookeeperNodeInfo& WithAttachedENIId(const char* value) { SetAttachedENIId(value); return *this;}


    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline const Aws::String& GetClientVpcIpAddress() const{ return m_clientVpcIpAddress; }

    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline bool ClientVpcIpAddressHasBeenSet() const { return m_clientVpcIpAddressHasBeenSet; }

    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline void SetClientVpcIpAddress(const Aws::String& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = value; }

    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline void SetClientVpcIpAddress(Aws::String&& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = std::move(value); }

    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline void SetClientVpcIpAddress(const char* value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress.assign(value); }

    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline ZookeeperNodeInfo& WithClientVpcIpAddress(const Aws::String& value) { SetClientVpcIpAddress(value); return *this;}

    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline ZookeeperNodeInfo& WithClientVpcIpAddress(Aws::String&& value) { SetClientVpcIpAddress(std::move(value)); return *this;}

    /**
     * 
            <p>The virtual private cloud (VPC) IP address of the client.</p>
  
     *       
     */
    inline ZookeeperNodeInfo& WithClientVpcIpAddress(const char* value) { SetClientVpcIpAddress(value); return *this;}


    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const{ return m_endpoints; }

    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline void SetEndpoints(const Aws::Vector<Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline void SetEndpoints(Aws::Vector<Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline ZookeeperNodeInfo& WithEndpoints(const Aws::Vector<Aws::String>& value) { SetEndpoints(value); return *this;}

    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline ZookeeperNodeInfo& WithEndpoints(Aws::Vector<Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline ZookeeperNodeInfo& AddEndpoints(const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline ZookeeperNodeInfo& AddEndpoints(Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>Endpoints for accessing the ZooKeeper.</p>
         
     */
    inline ZookeeperNodeInfo& AddEndpoints(const char* value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }


    /**
     * 
            <p>The role-specific ID for Zookeeper.</p>
         
     */
    inline double GetZookeeperId() const{ return m_zookeeperId; }

    /**
     * 
            <p>The role-specific ID for Zookeeper.</p>
         
     */
    inline bool ZookeeperIdHasBeenSet() const { return m_zookeeperIdHasBeenSet; }

    /**
     * 
            <p>The role-specific ID for Zookeeper.</p>
         
     */
    inline void SetZookeeperId(double value) { m_zookeeperIdHasBeenSet = true; m_zookeeperId = value; }

    /**
     * 
            <p>The role-specific ID for Zookeeper.</p>
         
     */
    inline ZookeeperNodeInfo& WithZookeeperId(double value) { SetZookeeperId(value); return *this;}


    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline const Aws::String& GetZookeeperVersion() const{ return m_zookeeperVersion; }

    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline bool ZookeeperVersionHasBeenSet() const { return m_zookeeperVersionHasBeenSet; }

    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline void SetZookeeperVersion(const Aws::String& value) { m_zookeeperVersionHasBeenSet = true; m_zookeeperVersion = value; }

    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline void SetZookeeperVersion(Aws::String&& value) { m_zookeeperVersionHasBeenSet = true; m_zookeeperVersion = std::move(value); }

    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline void SetZookeeperVersion(const char* value) { m_zookeeperVersionHasBeenSet = true; m_zookeeperVersion.assign(value); }

    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline ZookeeperNodeInfo& WithZookeeperVersion(const Aws::String& value) { SetZookeeperVersion(value); return *this;}

    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline ZookeeperNodeInfo& WithZookeeperVersion(Aws::String&& value) { SetZookeeperVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The version of Zookeeper.</p>
         
     */
    inline ZookeeperNodeInfo& WithZookeeperVersion(const char* value) { SetZookeeperVersion(value); return *this;}

  private:

    Aws::String m_attachedENIId;
    bool m_attachedENIIdHasBeenSet;

    Aws::String m_clientVpcIpAddress;
    bool m_clientVpcIpAddressHasBeenSet;

    Aws::Vector<Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet;

    double m_zookeeperId;
    bool m_zookeeperIdHasBeenSet;

    Aws::String m_zookeeperVersion;
    bool m_zookeeperVersionHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
