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
#include <aws/kafka/model/BrokerAZDistribution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/StorageInfo.h>
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
            <p>Describes the setup to be used for Kafka broker nodes in the
   * cluster.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BrokerNodeGroupInfo">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API BrokerNodeGroupInfo
  {
  public:
    BrokerNodeGroupInfo();
    BrokerNodeGroupInfo(Aws::Utils::Json::JsonView jsonValue);
    BrokerNodeGroupInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The distribution of broker nodes across Availability Zones.</p>

     *         
     */
    inline const BrokerAZDistribution& GetBrokerAZDistribution() const{ return m_brokerAZDistribution; }

    /**
     * 
            <p>The distribution of broker nodes across Availability Zones.</p>

     *         
     */
    inline bool BrokerAZDistributionHasBeenSet() const { return m_brokerAZDistributionHasBeenSet; }

    /**
     * 
            <p>The distribution of broker nodes across Availability Zones.</p>

     *         
     */
    inline void SetBrokerAZDistribution(const BrokerAZDistribution& value) { m_brokerAZDistributionHasBeenSet = true; m_brokerAZDistribution = value; }

    /**
     * 
            <p>The distribution of broker nodes across Availability Zones.</p>

     *         
     */
    inline void SetBrokerAZDistribution(BrokerAZDistribution&& value) { m_brokerAZDistributionHasBeenSet = true; m_brokerAZDistribution = std::move(value); }

    /**
     * 
            <p>The distribution of broker nodes across Availability Zones.</p>

     *         
     */
    inline BrokerNodeGroupInfo& WithBrokerAZDistribution(const BrokerAZDistribution& value) { SetBrokerAZDistribution(value); return *this;}

    /**
     * 
            <p>The distribution of broker nodes across Availability Zones.</p>

     *         
     */
    inline BrokerNodeGroupInfo& WithBrokerAZDistribution(BrokerAZDistribution&& value) { SetBrokerAZDistribution(std::move(value)); return *this;}


    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't be in Availability Zone us-east-1e.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetClientSubnets() const{ return m_clientSubnets; }

    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't be in Availability Zone us-east-1e.</p>
         
     */
    inline bool ClientSubnetsHasBeenSet() const { return m_clientSubnetsHasBeenSet; }

    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't be in Availability Zone us-east-1e.</p>
         
     */
    inline void SetClientSubnets(const Aws::Vector<Aws::String>& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets = value; }

    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't be in Availability Zone us-east-1e.</p>
         
     */
    inline void SetClientSubnets(Aws::Vector<Aws::String>&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets = std::move(value); }

    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't be in Availability Zone us-east-1e.</p>
         
     */
    inline BrokerNodeGroupInfo& WithClientSubnets(const Aws::Vector<Aws::String>& value) { SetClientSubnets(value); return *this;}

    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't be in Availability Zone us-east-1e.</p>
         
     */
    inline BrokerNodeGroupInfo& WithClientSubnets(Aws::Vector<Aws::String>&& value) { SetClientSubnets(std::move(value)); return *this;}

    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't be in Availability Zone us-east-1e.</p>
         
     */
    inline BrokerNodeGroupInfo& AddClientSubnets(const Aws::String& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets.push_back(value); return *this; }

    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't be in Availability Zone us-east-1e.</p>
         
     */
    inline BrokerNodeGroupInfo& AddClientSubnets(Aws::String&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>The list of subnets to connect to in the client virtual private
     * cloud (VPC). AWS creates elastic network interfaces inside these subnets. Client
     * applications use elastic network interfaces to produce and consume data. Client
     * subnets can't be in Availability Zone us-east-1e.</p>
         
     */
    inline BrokerNodeGroupInfo& AddClientSubnets(const char* value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets.push_back(value); return *this; }


    /**
     * 
            <p>The type of Amazon EC2 instances to use for Kafka brokers. The
     * following instance types are allowed: kafka.m5.large, kafka.m5.xlarge,
     * kafka.m5.2xlarge,
kafka.m5.4xlarge, kafka.m5.12xlarge, and
     * kafka.m5.24xlarge.</p>
         
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * 
            <p>The type of Amazon EC2 instances to use for Kafka brokers. The
     * following instance types are allowed: kafka.m5.large, kafka.m5.xlarge,
     * kafka.m5.2xlarge,
kafka.m5.4xlarge, kafka.m5.12xlarge, and
     * kafka.m5.24xlarge.</p>
         
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * 
            <p>The type of Amazon EC2 instances to use for Kafka brokers. The
     * following instance types are allowed: kafka.m5.large, kafka.m5.xlarge,
     * kafka.m5.2xlarge,
kafka.m5.4xlarge, kafka.m5.12xlarge, and
     * kafka.m5.24xlarge.</p>
         
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * 
            <p>The type of Amazon EC2 instances to use for Kafka brokers. The
     * following instance types are allowed: kafka.m5.large, kafka.m5.xlarge,
     * kafka.m5.2xlarge,
kafka.m5.4xlarge, kafka.m5.12xlarge, and
     * kafka.m5.24xlarge.</p>
         
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * 
            <p>The type of Amazon EC2 instances to use for Kafka brokers. The
     * following instance types are allowed: kafka.m5.large, kafka.m5.xlarge,
     * kafka.m5.2xlarge,
kafka.m5.4xlarge, kafka.m5.12xlarge, and
     * kafka.m5.24xlarge.</p>
         
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * 
            <p>The type of Amazon EC2 instances to use for Kafka brokers. The
     * following instance types are allowed: kafka.m5.large, kafka.m5.xlarge,
     * kafka.m5.2xlarge,
kafka.m5.4xlarge, kafka.m5.12xlarge, and
     * kafka.m5.24xlarge.</p>
         
     */
    inline BrokerNodeGroupInfo& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * 
            <p>The type of Amazon EC2 instances to use for Kafka brokers. The
     * following instance types are allowed: kafka.m5.large, kafka.m5.xlarge,
     * kafka.m5.2xlarge,
kafka.m5.4xlarge, kafka.m5.12xlarge, and
     * kafka.m5.24xlarge.</p>
         
     */
    inline BrokerNodeGroupInfo& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * 
            <p>The type of Amazon EC2 instances to use for Kafka brokers. The
     * following instance types are allowed: kafka.m5.large, kafka.m5.xlarge,
     * kafka.m5.2xlarge,
kafka.m5.4xlarge, kafka.m5.12xlarge, and
     * kafka.m5.24xlarge.</p>
         
     */
    inline BrokerNodeGroupInfo& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline BrokerNodeGroupInfo& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline BrokerNodeGroupInfo& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline BrokerNodeGroupInfo& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline BrokerNodeGroupInfo& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>The AWS security groups to associate with the elastic network
     * interfaces in order to specify who can connect to and communicate with the
     * Amazon MSK cluster. If you don't specify a security group, Amazon MSK uses the
     * default security group associated with the VPC.</p>
         
     */
    inline BrokerNodeGroupInfo& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * 
            <p>Contains information about storage volumes attached to MSK
     * broker nodes.</p>
         
     */
    inline const StorageInfo& GetStorageInfo() const{ return m_storageInfo; }

    /**
     * 
            <p>Contains information about storage volumes attached to MSK
     * broker nodes.</p>
         
     */
    inline bool StorageInfoHasBeenSet() const { return m_storageInfoHasBeenSet; }

    /**
     * 
            <p>Contains information about storage volumes attached to MSK
     * broker nodes.</p>
         
     */
    inline void SetStorageInfo(const StorageInfo& value) { m_storageInfoHasBeenSet = true; m_storageInfo = value; }

    /**
     * 
            <p>Contains information about storage volumes attached to MSK
     * broker nodes.</p>
         
     */
    inline void SetStorageInfo(StorageInfo&& value) { m_storageInfoHasBeenSet = true; m_storageInfo = std::move(value); }

    /**
     * 
            <p>Contains information about storage volumes attached to MSK
     * broker nodes.</p>
         
     */
    inline BrokerNodeGroupInfo& WithStorageInfo(const StorageInfo& value) { SetStorageInfo(value); return *this;}

    /**
     * 
            <p>Contains information about storage volumes attached to MSK
     * broker nodes.</p>
         
     */
    inline BrokerNodeGroupInfo& WithStorageInfo(StorageInfo&& value) { SetStorageInfo(std::move(value)); return *this;}

  private:

    BrokerAZDistribution m_brokerAZDistribution;
    bool m_brokerAZDistributionHasBeenSet;

    Aws::Vector<Aws::String> m_clientSubnets;
    bool m_clientSubnetsHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    StorageInfo m_storageInfo;
    bool m_storageInfoHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
