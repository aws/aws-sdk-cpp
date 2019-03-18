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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/MarketType.h>
#include <aws/elasticmapreduce/model/InstanceRoleType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/EbsConfiguration.h>
#include <aws/elasticmapreduce/model/AutoScalingPolicy.h>
#include <aws/elasticmapreduce/model/Configuration.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Configuration defining a new instance group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceGroupConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceGroupConfig
  {
  public:
    InstanceGroupConfig();
    InstanceGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    InstanceGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline InstanceGroupConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline InstanceGroupConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline const MarketType& GetMarket() const{ return m_market; }

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline void SetMarket(MarketType&& value) { m_marketHasBeenSet = true; m_market = std::move(value); }

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline InstanceGroupConfig& WithMarket(const MarketType& value) { SetMarket(value); return *this;}

    /**
     * <p>Market type of the EC2 instances used to create a cluster node.</p>
     */
    inline InstanceGroupConfig& WithMarket(MarketType&& value) { SetMarket(std::move(value)); return *this;}


    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline const InstanceRoleType& GetInstanceRole() const{ return m_instanceRole; }

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline void SetInstanceRole(const InstanceRoleType& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline void SetInstanceRole(InstanceRoleType&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::move(value); }

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline InstanceGroupConfig& WithInstanceRole(const InstanceRoleType& value) { SetInstanceRole(value); return *this;}

    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline InstanceGroupConfig& WithInstanceRole(InstanceRoleType&& value) { SetInstanceRole(std::move(value)); return *this;}


    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline const Aws::String& GetBidPrice() const{ return m_bidPrice; }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline bool BidPriceHasBeenSet() const { return m_bidPriceHasBeenSet; }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline void SetBidPrice(const Aws::String& value) { m_bidPriceHasBeenSet = true; m_bidPrice = value; }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline void SetBidPrice(Aws::String&& value) { m_bidPriceHasBeenSet = true; m_bidPrice = std::move(value); }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline void SetBidPrice(const char* value) { m_bidPriceHasBeenSet = true; m_bidPrice.assign(value); }

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline InstanceGroupConfig& WithBidPrice(const Aws::String& value) { SetBidPrice(value); return *this;}

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline InstanceGroupConfig& WithBidPrice(Aws::String&& value) { SetBidPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline InstanceGroupConfig& WithBidPrice(const char* value) { SetBidPrice(value); return *this;}


    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline InstanceGroupConfig& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline InstanceGroupConfig& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline InstanceGroupConfig& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>Target number of instances for the instance group.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>Target number of instances for the instance group.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

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
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

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
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

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
    inline InstanceGroupConfig& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

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
    inline InstanceGroupConfig& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }


    /**
     * <p>EBS configurations that will be attached to each EC2 instance in the instance
     * group.</p>
     */
    inline const EbsConfiguration& GetEbsConfiguration() const{ return m_ebsConfiguration; }

    /**
     * <p>EBS configurations that will be attached to each EC2 instance in the instance
     * group.</p>
     */
    inline bool EbsConfigurationHasBeenSet() const { return m_ebsConfigurationHasBeenSet; }

    /**
     * <p>EBS configurations that will be attached to each EC2 instance in the instance
     * group.</p>
     */
    inline void SetEbsConfiguration(const EbsConfiguration& value) { m_ebsConfigurationHasBeenSet = true; m_ebsConfiguration = value; }

    /**
     * <p>EBS configurations that will be attached to each EC2 instance in the instance
     * group.</p>
     */
    inline void SetEbsConfiguration(EbsConfiguration&& value) { m_ebsConfigurationHasBeenSet = true; m_ebsConfiguration = std::move(value); }

    /**
     * <p>EBS configurations that will be attached to each EC2 instance in the instance
     * group.</p>
     */
    inline InstanceGroupConfig& WithEbsConfiguration(const EbsConfiguration& value) { SetEbsConfiguration(value); return *this;}

    /**
     * <p>EBS configurations that will be attached to each EC2 instance in the instance
     * group.</p>
     */
    inline InstanceGroupConfig& WithEbsConfiguration(EbsConfiguration&& value) { SetEbsConfiguration(std::move(value)); return *this;}


    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See <a>PutAutoScalingPolicy</a>.</p>
     */
    inline const AutoScalingPolicy& GetAutoScalingPolicy() const{ return m_autoScalingPolicy; }

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See <a>PutAutoScalingPolicy</a>.</p>
     */
    inline bool AutoScalingPolicyHasBeenSet() const { return m_autoScalingPolicyHasBeenSet; }

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See <a>PutAutoScalingPolicy</a>.</p>
     */
    inline void SetAutoScalingPolicy(const AutoScalingPolicy& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = value; }

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See <a>PutAutoScalingPolicy</a>.</p>
     */
    inline void SetAutoScalingPolicy(AutoScalingPolicy&& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = std::move(value); }

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See <a>PutAutoScalingPolicy</a>.</p>
     */
    inline InstanceGroupConfig& WithAutoScalingPolicy(const AutoScalingPolicy& value) { SetAutoScalingPolicy(value); return *this;}

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See <a>PutAutoScalingPolicy</a>.</p>
     */
    inline InstanceGroupConfig& WithAutoScalingPolicy(AutoScalingPolicy&& value) { SetAutoScalingPolicy(std::move(value)); return *this;}

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

    AutoScalingPolicy m_autoScalingPolicy;
    bool m_autoScalingPolicyHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
