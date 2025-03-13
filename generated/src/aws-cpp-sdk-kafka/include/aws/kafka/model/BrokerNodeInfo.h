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
    AWS_KAFKA_API BrokerNodeInfo() = default;
    AWS_KAFKA_API BrokerNodeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API BrokerNodeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    BrokerNodeInfo& WithAttachedENIId(AttachedENIIdT&& value) { SetAttachedENIId(std::forward<AttachedENIIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The ID of the broker.</p>
         
     */
    inline double GetBrokerId() const { return m_brokerId; }
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
    inline const Aws::String& GetClientSubnet() const { return m_clientSubnet; }
    inline bool ClientSubnetHasBeenSet() const { return m_clientSubnetHasBeenSet; }
    template<typename ClientSubnetT = Aws::String>
    void SetClientSubnet(ClientSubnetT&& value) { m_clientSubnetHasBeenSet = true; m_clientSubnet = std::forward<ClientSubnetT>(value); }
    template<typename ClientSubnetT = Aws::String>
    BrokerNodeInfo& WithClientSubnet(ClientSubnetT&& value) { SetClientSubnet(std::forward<ClientSubnetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The virtual private cloud (VPC) of the client.</p>
         
     */
    inline const Aws::String& GetClientVpcIpAddress() const { return m_clientVpcIpAddress; }
    inline bool ClientVpcIpAddressHasBeenSet() const { return m_clientVpcIpAddressHasBeenSet; }
    template<typename ClientVpcIpAddressT = Aws::String>
    void SetClientVpcIpAddress(ClientVpcIpAddressT&& value) { m_clientVpcIpAddressHasBeenSet = true; m_clientVpcIpAddress = std::forward<ClientVpcIpAddressT>(value); }
    template<typename ClientVpcIpAddressT = Aws::String>
    BrokerNodeInfo& WithClientVpcIpAddress(ClientVpcIpAddressT&& value) { SetClientVpcIpAddress(std::forward<ClientVpcIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Apache Kafka brokers in the cluster.</p>
         
     */
    inline const BrokerSoftwareInfo& GetCurrentBrokerSoftwareInfo() const { return m_currentBrokerSoftwareInfo; }
    inline bool CurrentBrokerSoftwareInfoHasBeenSet() const { return m_currentBrokerSoftwareInfoHasBeenSet; }
    template<typename CurrentBrokerSoftwareInfoT = BrokerSoftwareInfo>
    void SetCurrentBrokerSoftwareInfo(CurrentBrokerSoftwareInfoT&& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = std::forward<CurrentBrokerSoftwareInfoT>(value); }
    template<typename CurrentBrokerSoftwareInfoT = BrokerSoftwareInfo>
    BrokerNodeInfo& WithCurrentBrokerSoftwareInfo(CurrentBrokerSoftwareInfoT&& value) { SetCurrentBrokerSoftwareInfo(std::forward<CurrentBrokerSoftwareInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Endpoints for accessing the broker.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<Aws::String>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<Aws::String>>
    BrokerNodeInfo& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = Aws::String>
    BrokerNodeInfo& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attachedENIId;
    bool m_attachedENIIdHasBeenSet = false;

    double m_brokerId{0.0};
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
