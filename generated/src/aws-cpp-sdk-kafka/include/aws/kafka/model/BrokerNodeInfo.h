/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BrokerNodeInfo
  {
  public:
    AWS_KAFKA_API BrokerNodeInfo();
    AWS_KAFKA_API BrokerNodeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API BrokerNodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline BrokerNodeInfo& WithAttachedENIId(const Aws::String& value) { SetAttachedENIId(value); return *this;}
    inline BrokerNodeInfo& WithAttachedENIId(Aws::String&& value) { SetAttachedENIId(std::move(value)); return *this;}
    inline BrokerNodeInfo& WithAttachedENIId(const char* value) { SetAttachedENIId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The ID of the broker.</p>
         
     */
    inline double GetBrokerId() const{ return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    inline void SetBrokerId(double value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }
    inline BrokerNodeInfo& WithBrokerId(double value) { SetBrokerId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The client subnet to which this broker node belongs.</p>
       
     *  
     */
    inline const Aws::String& GetClientSubnet() const{ return m_clientSubnet; }
    inline bool ClientSubnetHasBeenSet() const { return m_clientSubnetHasBeenSet; }
    inline void SetClientSubnet(const Aws::String& value) { m_clientSubnetHasBeenSet = true; m_clientSubnet = value; }
    inline void SetClientSubnet(Aws::String&& value) { m_clientSubnetHasBeenSet = true; m_clientSubnet = std::move(value); }
    inline void SetClientSubnet(const char* value) { m_clientSubnetHasBeenSet = true; m_clientSubnet.assign(value); }
    inline BrokerNodeInfo& WithClientSubnet(const Aws::String& value) { SetClientSubnet(value); return *this;}
    inline BrokerNodeInfo& WithClientSubnet(Aws::String&& value) { SetClientSubnet(std::move(value)); return *this;}
    inline BrokerNodeInfo& WithClientSubnet(const char* value) { SetClientSubnet(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline const Aws::String& GetClientVpcIpAddress() const{ return m_clientVpcIpAddress; }
    inline bool ClientVpcIpAddressHasBeenSet() const { return m_clientVpcIpAddressHasBeenSet; }
    inline void SetClientVpcIpAddress(const Aws::String& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = value; }
    inline void SetClientVpcIpAddress(Aws::String&& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = std::move(value); }
    inline void SetClientVpcIpAddress(const char* value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress.assign(value); }
    inline BrokerNodeInfo& WithClientVpcIpAddress(const Aws::String& value) { SetClientVpcIpAddress(value); return *this;}
    inline BrokerNodeInfo& WithClientVpcIpAddress(Aws::String&& value) { SetClientVpcIpAddress(std::move(value)); return *this;}
    inline BrokerNodeInfo& WithClientVpcIpAddress(const char* value) { SetClientVpcIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Apache Kafka brokers in the cluster.</p>
         
     */
    inline const BrokerSoftwareInfo& GetCurrentBrokerSoftwareInfo() const{ return m_currentBrokerSoftwareInfo; }
    inline bool CurrentBrokerSoftwareInfoHasBeenSet() const { return m_currentBrokerSoftwareInfoHasBeenSet; }
    inline void SetCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = value; }
    inline void SetCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = std::move(value); }
    inline BrokerNodeInfo& WithCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { SetCurrentBrokerSoftwareInfo(value); return *this;}
    inline BrokerNodeInfo& WithCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { SetCurrentBrokerSoftwareInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Vector<Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline BrokerNodeInfo& WithEndpoints(const Aws::Vector<Aws::String>& value) { SetEndpoints(value); return *this;}
    inline BrokerNodeInfo& WithEndpoints(Aws::Vector<Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline BrokerNodeInfo& AddEndpoints(const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    inline BrokerNodeInfo& AddEndpoints(Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }
    inline BrokerNodeInfo& AddEndpoints(const char* value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_attachedENIId;
    bool m_attachedENIIdHasBeenSet = false;

    double m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    Aws::String m_clientSubnet;
    bool m_clientSubnetHasBeenSet = false;

    Aws::String m_clientVpcIpAddress;
    bool m_clientVpcIpAddressHasBeenSet = false;

    BrokerSoftwareInfo m_currentBrokerSoftwareInfo;
    bool m_currentBrokerSoftwareInfoHasBeenSet = false;

    Aws::Vector<Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
