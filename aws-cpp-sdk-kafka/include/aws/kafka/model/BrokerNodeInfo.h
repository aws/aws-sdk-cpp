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
#include <aws/kafka/model/BrokerSoftwareInfo.h>
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
            <p>BrokerNodeInfo</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BrokerNodeInfo">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API BrokerNodeInfo
  {
  public:
    BrokerNodeInfo();
    BrokerNodeInfo(Aws::Utils::Json::JsonView jsonValue);
    BrokerNodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline BrokerNodeInfo& WithAttachedENIId(const Aws::String& value) { SetAttachedENIId(value); return *this;}

    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline BrokerNodeInfo& WithAttachedENIId(Aws::String&& value) { SetAttachedENIId(std::move(value)); return *this;}

    /**
     * 
            <p>The attached elastic network interface of the broker.</p>
      
     *   
     */
    inline BrokerNodeInfo& WithAttachedENIId(const char* value) { SetAttachedENIId(value); return *this;}


    /**
     * 
            <p>The ID of the broker.</p>
         
     */
    inline double GetBrokerId() const{ return m_brokerId; }

    /**
     * 
            <p>The ID of the broker.</p>
         
     */
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }

    /**
     * 
            <p>The ID of the broker.</p>
         
     */
    inline void SetBrokerId(double value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * 
            <p>The ID of the broker.</p>
         
     */
    inline BrokerNodeInfo& WithBrokerId(double value) { SetBrokerId(value); return *this;}


    /**
     * 
            <p>The client subnet to which this broker node belongs.</p>
       
     *  
     */
    inline const Aws::String& GetClientSubnet() const{ return m_clientSubnet; }

    /**
     * 
            <p>The client subnet to which this broker node belongs.</p>
       
     *  
     */
    inline bool ClientSubnetHasBeenSet() const { return m_clientSubnetHasBeenSet; }

    /**
     * 
            <p>The client subnet to which this broker node belongs.</p>
       
     *  
     */
    inline void SetClientSubnet(const Aws::String& value) { m_clientSubnetHasBeenSet = true; m_clientSubnet = value; }

    /**
     * 
            <p>The client subnet to which this broker node belongs.</p>
       
     *  
     */
    inline void SetClientSubnet(Aws::String&& value) { m_clientSubnetHasBeenSet = true; m_clientSubnet = std::move(value); }

    /**
     * 
            <p>The client subnet to which this broker node belongs.</p>
       
     *  
     */
    inline void SetClientSubnet(const char* value) { m_clientSubnetHasBeenSet = true; m_clientSubnet.assign(value); }

    /**
     * 
            <p>The client subnet to which this broker node belongs.</p>
       
     *  
     */
    inline BrokerNodeInfo& WithClientSubnet(const Aws::String& value) { SetClientSubnet(value); return *this;}

    /**
     * 
            <p>The client subnet to which this broker node belongs.</p>
       
     *  
     */
    inline BrokerNodeInfo& WithClientSubnet(Aws::String&& value) { SetClientSubnet(std::move(value)); return *this;}

    /**
     * 
            <p>The client subnet to which this broker node belongs.</p>
       
     *  
     */
    inline BrokerNodeInfo& WithClientSubnet(const char* value) { SetClientSubnet(value); return *this;}


    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline const Aws::String& GetClientVpcIpAddress() const{ return m_clientVpcIpAddress; }

    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline bool ClientVpcIpAddressHasBeenSet() const { return m_clientVpcIpAddressHasBeenSet; }

    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline void SetClientVpcIpAddress(const Aws::String& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = value; }

    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline void SetClientVpcIpAddress(Aws::String&& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = std::move(value); }

    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline void SetClientVpcIpAddress(const char* value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress.assign(value); }

    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline BrokerNodeInfo& WithClientVpcIpAddress(const Aws::String& value) { SetClientVpcIpAddress(value); return *this;}

    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline BrokerNodeInfo& WithClientVpcIpAddress(Aws::String&& value) { SetClientVpcIpAddress(std::move(value)); return *this;}

    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline BrokerNodeInfo& WithClientVpcIpAddress(const char* value) { SetClientVpcIpAddress(value); return *this;}


    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline const BrokerSoftwareInfo& GetCurrentBrokerSoftwareInfo() const{ return m_currentBrokerSoftwareInfo; }

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline bool CurrentBrokerSoftwareInfoHasBeenSet() const { return m_currentBrokerSoftwareInfoHasBeenSet; }

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline void SetCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = value; }

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline void SetCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = std::move(value); }

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline BrokerNodeInfo& WithCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { SetCurrentBrokerSoftwareInfo(value); return *this;}

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline BrokerNodeInfo& WithCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { SetCurrentBrokerSoftwareInfo(std::move(value)); return *this;}


    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const{ return m_endpoints; }

    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline void SetEndpoints(const Aws::Vector<Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline void SetEndpoints(Aws::Vector<Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline BrokerNodeInfo& WithEndpoints(const Aws::Vector<Aws::String>& value) { SetEndpoints(value); return *this;}

    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline BrokerNodeInfo& WithEndpoints(Aws::Vector<Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline BrokerNodeInfo& AddEndpoints(const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline BrokerNodeInfo& AddEndpoints(Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline BrokerNodeInfo& AddEndpoints(const char* value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

  private:

    Aws::String m_attachedENIId;
    bool m_attachedENIIdHasBeenSet;

    double m_brokerId;
    bool m_brokerIdHasBeenSet;

    Aws::String m_clientSubnet;
    bool m_clientSubnetHasBeenSet;

    Aws::String m_clientVpcIpAddress;
    bool m_clientVpcIpAddressHasBeenSet;

    BrokerSoftwareInfo m_currentBrokerSoftwareInfo;
    bool m_currentBrokerSoftwareInfoHasBeenSet;

    Aws::Vector<Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
