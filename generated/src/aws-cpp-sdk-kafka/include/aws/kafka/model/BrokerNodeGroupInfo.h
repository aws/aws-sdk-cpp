/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/BrokerAZDistribution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/StorageInfo.h>
#include <aws/kafka/model/ConnectivityInfo.h>
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
            <p>Describes the setup to be used for Apache Kafka broker nodes in
   * the cluster.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BrokerNodeGroupInfo">AWS
   * API Reference</a></p>
   */
  class BrokerNodeGroupInfo
  {
  public:
    AWS_KAFKA_API BrokerNodeGroupInfo() = default;
    AWS_KAFKA_API BrokerNodeGroupInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API BrokerNodeGroupInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The distribution of broker nodes across Availability Zones. This
     * is an optional parameter. If you don't specify it, Amazon MSK gives it the value
     * DEFAULT. You can also explicitly set this parameter to the value DEFAULT. No
     * other values are currently allowed.</p>
         <p>Amazon MSK distributes the
     * broker nodes evenly across the Availability Zones that correspond to the subnets
     * you provide when you create the cluster.</p>
         
     */
    inline BrokerAZDistribution GetBrokerAZDistribution() const { return m_brokerAZDistribution; }
    inline bool BrokerAZDistributionHasBeenSet() const { return m_brokerAZDistributionHasBeenSet; }
    inline void SetBrokerAZDistribution(BrokerAZDistribution value) { m_brokerAZDistributionHasBeenSet = true; m_brokerAZDistribution = value; }
    inline BrokerNodeGroupInfo& WithBrokerAZDistribution(BrokerAZDistribution value) { SetBrokerAZDistribution(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't occupy the Availability Zone with ID use use1-az3.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetClientSubnets() const { return m_clientSubnets; }
    inline bool ClientSubnetsHasBeenSet() const { return m_clientSubnetsHasBeenSet; }
    template<typename ClientSubnetsT = Aws::Vector<Aws::String>>
    void SetClientSubnets(ClientSubnetsT&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets = std::forward<ClientSubnetsT>(value); }
    template<typename ClientSubnetsT = Aws::Vector<Aws::String>>
    BrokerNodeGroupInfo& WithClientSubnets(ClientSubnetsT&& value) { SetClientSubnets(std::forward<ClientSubnetsT>(value)); return *this;}
    template<typename ClientSubnetsT = Aws::String>
    BrokerNodeGroupInfo& AddClientSubnets(ClientSubnetsT&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets.emplace_back(std::forward<ClientSubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The type of Amazon EC2 instances to use for Apache Kafka
     * brokers. The following instance types are allowed: kafka.m5.large,
     * kafka.m5.xlarge, kafka.m5.2xlarge,
kafka.m5.4xlarge, kafka.m5.12xlarge, and
     * kafka.m5.24xlarge.</p>
         
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    BrokerNodeGroupInfo& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    BrokerNodeGroupInfo& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    BrokerNodeGroupInfo& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Contains information about storage volumes attached to MSK
     * broker nodes.</p>
         
     */
    inline const StorageInfo& GetStorageInfo() const { return m_storageInfo; }
    inline bool StorageInfoHasBeenSet() const { return m_storageInfoHasBeenSet; }
    template<typename StorageInfoT = StorageInfo>
    void SetStorageInfo(StorageInfoT&& value) { m_storageInfoHasBeenSet = true; m_storageInfo = std::forward<StorageInfoT>(value); }
    template<typename StorageInfoT = StorageInfo>
    BrokerNodeGroupInfo& WithStorageInfo(StorageInfoT&& value) { SetStorageInfo(std::forward<StorageInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline const ConnectivityInfo& GetConnectivityInfo() const { return m_connectivityInfo; }
    inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }
    template<typename ConnectivityInfoT = ConnectivityInfo>
    void SetConnectivityInfo(ConnectivityInfoT&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::forward<ConnectivityInfoT>(value); }
    template<typename ConnectivityInfoT = ConnectivityInfo>
    BrokerNodeGroupInfo& WithConnectivityInfo(ConnectivityInfoT&& value) { SetConnectivityInfo(std::forward<ConnectivityInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The list of zoneIds for the cluster in the virtual private cloud
     * (VPC).</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetZoneIds() const { return m_zoneIds; }
    inline bool ZoneIdsHasBeenSet() const { return m_zoneIdsHasBeenSet; }
    template<typename ZoneIdsT = Aws::Vector<Aws::String>>
    void SetZoneIds(ZoneIdsT&& value) { m_zoneIdsHasBeenSet = true; m_zoneIds = std::forward<ZoneIdsT>(value); }
    template<typename ZoneIdsT = Aws::Vector<Aws::String>>
    BrokerNodeGroupInfo& WithZoneIds(ZoneIdsT&& value) { SetZoneIds(std::forward<ZoneIdsT>(value)); return *this;}
    template<typename ZoneIdsT = Aws::String>
    BrokerNodeGroupInfo& AddZoneIds(ZoneIdsT&& value) { m_zoneIdsHasBeenSet = true; m_zoneIds.emplace_back(std::forward<ZoneIdsT>(value)); return *this; }
    ///@}
  private:

    BrokerAZDistribution m_brokerAZDistribution{BrokerAZDistribution::NOT_SET};
    bool m_brokerAZDistributionHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientSubnets;
    bool m_clientSubnetsHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    StorageInfo m_storageInfo;
    bool m_storageInfoHasBeenSet = false;

    ConnectivityInfo m_connectivityInfo;
    bool m_connectivityInfoHasBeenSet = false;

    Aws::Vector<Aws::String> m_zoneIds;
    bool m_zoneIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
