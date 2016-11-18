/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/MarketType.h>
#include <aws/elasticmapreduce/model/InstanceRoleType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/EbsConfiguration.h>
#include <aws/elasticmapreduce/model/Configuration.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>Configuration defining a new instance group.</p>
   */
  class AWS_EMR_API InstanceGroupConfig
  {
  public:
    InstanceGroupConfig();
    InstanceGroupConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceGroupConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline InstanceGroupConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline InstanceGroupConfig& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline InstanceGroupConfig& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Market type of the Amazon EC2 instances used to create a cluster node.</p>
     */
    inline const MarketType& GetMarket() const{ return m_market; }

    /**
     * <p>Market type of the Amazon EC2 instances used to create a cluster node.</p>
     */
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }

    /**
     * <p>Market type of the Amazon EC2 instances used to create a cluster node.</p>
     */
    inline void SetMarket(MarketType&& value) { m_marketHasBeenSet = true; m_market = value; }

    /**
     * <p>Market type of the Amazon EC2 instances used to create a cluster node.</p>
     */
    inline InstanceGroupConfig& WithMarket(const MarketType& value) { SetMarket(value); return *this;}

    /**
     * <p>Market type of the Amazon EC2 instances used to create a cluster node.</p>
     */
    inline InstanceGroupConfig& WithMarket(MarketType&& value) { SetMarket(value); return *this;}

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline const InstanceRoleType& GetInstanceRole() const{ return m_instanceRole; }

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline void SetInstanceRole(const InstanceRoleType& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline void SetInstanceRole(InstanceRoleType&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline InstanceGroupConfig& WithInstanceRole(const InstanceRoleType& value) { SetInstanceRole(value); return *this;}

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline InstanceGroupConfig& WithInstanceRole(InstanceRoleType&& value) { SetInstanceRole(value); return *this;}

    /**
     * <p>Bid price for each Amazon EC2 instance in the instance group when launching
     * nodes as Spot Instances, expressed in USD.</p>
     */
    inline const Aws::String& GetBidPrice() const{ return m_bidPrice; }

    /**
     * <p>Bid price for each Amazon EC2 instance in the instance group when launching
     * nodes as Spot Instances, expressed in USD.</p>
     */
    inline void SetBidPrice(const Aws::String& value) { m_bidPriceHasBeenSet = true; m_bidPrice = value; }

    /**
     * <p>Bid price for each Amazon EC2 instance in the instance group when launching
     * nodes as Spot Instances, expressed in USD.</p>
     */
    inline void SetBidPrice(Aws::String&& value) { m_bidPriceHasBeenSet = true; m_bidPrice = value; }

    /**
     * <p>Bid price for each Amazon EC2 instance in the instance group when launching
     * nodes as Spot Instances, expressed in USD.</p>
     */
    inline void SetBidPrice(const char* value) { m_bidPriceHasBeenSet = true; m_bidPrice.assign(value); }

    /**
     * <p>Bid price for each Amazon EC2 instance in the instance group when launching
     * nodes as Spot Instances, expressed in USD.</p>
     */
    inline InstanceGroupConfig& WithBidPrice(const Aws::String& value) { SetBidPrice(value); return *this;}

    /**
     * <p>Bid price for each Amazon EC2 instance in the instance group when launching
     * nodes as Spot Instances, expressed in USD.</p>
     */
    inline InstanceGroupConfig& WithBidPrice(Aws::String&& value) { SetBidPrice(value); return *this;}

    /**
     * <p>Bid price for each Amazon EC2 instance in the instance group when launching
     * nodes as Spot Instances, expressed in USD.</p>
     */
    inline InstanceGroupConfig& WithBidPrice(const char* value) { SetBidPrice(value); return *this;}

    /**
     * <p>The Amazon EC2 instance type for all instances in the instance group.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon EC2 instance type for all instances in the instance group.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The Amazon EC2 instance type for all instances in the instance group.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The Amazon EC2 instance type for all instances in the instance group.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The Amazon EC2 instance type for all instances in the instance group.</p>
     */
    inline InstanceGroupConfig& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instance type for all instances in the instance group.</p>
     */
    inline InstanceGroupConfig& WithInstanceType(Aws::String&& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instance type for all instances in the instance group.</p>
     */
    inline InstanceGroupConfig& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

    /**
     * <p>Target number of instances for the instance group.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>Target number of instances for the instance group.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>Target number of instances for the instance group.</p>
     */
    inline InstanceGroupConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline InstanceGroupConfig& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline InstanceGroupConfig& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline InstanceGroupConfig& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline InstanceGroupConfig& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>EBS configurations that will be attached to each Amazon EC2 instance in the
     * instance group.</p>
     */
    inline const EbsConfiguration& GetEbsConfiguration() const{ return m_ebsConfiguration; }

    /**
     * <p>EBS configurations that will be attached to each Amazon EC2 instance in the
     * instance group.</p>
     */
    inline void SetEbsConfiguration(const EbsConfiguration& value) { m_ebsConfigurationHasBeenSet = true; m_ebsConfiguration = value; }

    /**
     * <p>EBS configurations that will be attached to each Amazon EC2 instance in the
     * instance group.</p>
     */
    inline void SetEbsConfiguration(EbsConfiguration&& value) { m_ebsConfigurationHasBeenSet = true; m_ebsConfiguration = value; }

    /**
     * <p>EBS configurations that will be attached to each Amazon EC2 instance in the
     * instance group.</p>
     */
    inline InstanceGroupConfig& WithEbsConfiguration(const EbsConfiguration& value) { SetEbsConfiguration(value); return *this;}

    /**
     * <p>EBS configurations that will be attached to each Amazon EC2 instance in the
     * instance group.</p>
     */
    inline InstanceGroupConfig& WithEbsConfiguration(EbsConfiguration&& value) { SetEbsConfiguration(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    MarketType m_market;
    bool m_marketHasBeenSet;
    InstanceRoleType m_instanceRole;
    bool m_instanceRoleHasBeenSet;
    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet;
    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;
    int m_instanceCount;
    bool m_instanceCountHasBeenSet;
    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet;
    EbsConfiguration m_ebsConfiguration;
    bool m_ebsConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
