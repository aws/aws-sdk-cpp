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
#include <aws/elasticmapreduce/model/InstanceGroupType.h>
#include <aws/elasticmapreduce/model/InstanceGroupStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ShrinkPolicy.h>
#include <aws/elasticmapreduce/model/AutoScalingPolicyDescription.h>
#include <aws/elasticmapreduce/model/Configuration.h>
#include <aws/elasticmapreduce/model/EbsBlockDevice.h>
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
   * <p>This entity represents an instance group, which is a group of instances that
   * have common purpose. For example, CORE instance group is used for
   * HDFS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceGroup">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceGroup
  {
  public:
    InstanceGroup();
    InstanceGroup(Aws::Utils::Json::JsonView jsonValue);
    InstanceGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the instance group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the instance group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the instance group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the instance group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the instance group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the instance group.</p>
     */
    inline InstanceGroup& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the instance group.</p>
     */
    inline InstanceGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the instance group.</p>
     */
    inline InstanceGroup& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the instance group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the instance group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the instance group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the instance group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the instance group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the instance group.</p>
     */
    inline InstanceGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the instance group.</p>
     */
    inline InstanceGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance group.</p>
     */
    inline InstanceGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The marketplace to provision instances for this group. Valid values are
     * ON_DEMAND or SPOT.</p>
     */
    inline const MarketType& GetMarket() const{ return m_market; }

    /**
     * <p>The marketplace to provision instances for this group. Valid values are
     * ON_DEMAND or SPOT.</p>
     */
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }

    /**
     * <p>The marketplace to provision instances for this group. Valid values are
     * ON_DEMAND or SPOT.</p>
     */
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }

    /**
     * <p>The marketplace to provision instances for this group. Valid values are
     * ON_DEMAND or SPOT.</p>
     */
    inline void SetMarket(MarketType&& value) { m_marketHasBeenSet = true; m_market = std::move(value); }

    /**
     * <p>The marketplace to provision instances for this group. Valid values are
     * ON_DEMAND or SPOT.</p>
     */
    inline InstanceGroup& WithMarket(const MarketType& value) { SetMarket(value); return *this;}

    /**
     * <p>The marketplace to provision instances for this group. Valid values are
     * ON_DEMAND or SPOT.</p>
     */
    inline InstanceGroup& WithMarket(MarketType&& value) { SetMarket(std::move(value)); return *this;}


    /**
     * <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
     */
    inline const InstanceGroupType& GetInstanceGroupType() const{ return m_instanceGroupType; }

    /**
     * <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
     */
    inline bool InstanceGroupTypeHasBeenSet() const { return m_instanceGroupTypeHasBeenSet; }

    /**
     * <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
     */
    inline void SetInstanceGroupType(const InstanceGroupType& value) { m_instanceGroupTypeHasBeenSet = true; m_instanceGroupType = value; }

    /**
     * <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
     */
    inline void SetInstanceGroupType(InstanceGroupType&& value) { m_instanceGroupTypeHasBeenSet = true; m_instanceGroupType = std::move(value); }

    /**
     * <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
     */
    inline InstanceGroup& WithInstanceGroupType(const InstanceGroupType& value) { SetInstanceGroupType(value); return *this;}

    /**
     * <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
     */
    inline InstanceGroup& WithInstanceGroupType(InstanceGroupType&& value) { SetInstanceGroupType(std::move(value)); return *this;}


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
    inline InstanceGroup& WithBidPrice(const Aws::String& value) { SetBidPrice(value); return *this;}

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline InstanceGroup& WithBidPrice(Aws::String&& value) { SetBidPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum Spot price your are willing to pay for EC2 instances.</p> <p>An
     * optional, nullable field that applies if the <code>MarketType</code> for the
     * instance group is specified as <code>SPOT</code>. Specify the maximum spot price
     * in USD. If the value is NULL and <code>SPOT</code> is specified, the maximum
     * Spot price is set equal to the On-Demand price.</p>
     */
    inline InstanceGroup& WithBidPrice(const char* value) { SetBidPrice(value); return *this;}


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
    inline InstanceGroup& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline InstanceGroup& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The EC2 instance type for all instances in the instance group.</p>
     */
    inline InstanceGroup& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The target number of instances for the instance group.</p>
     */
    inline int GetRequestedInstanceCount() const{ return m_requestedInstanceCount; }

    /**
     * <p>The target number of instances for the instance group.</p>
     */
    inline bool RequestedInstanceCountHasBeenSet() const { return m_requestedInstanceCountHasBeenSet; }

    /**
     * <p>The target number of instances for the instance group.</p>
     */
    inline void SetRequestedInstanceCount(int value) { m_requestedInstanceCountHasBeenSet = true; m_requestedInstanceCount = value; }

    /**
     * <p>The target number of instances for the instance group.</p>
     */
    inline InstanceGroup& WithRequestedInstanceCount(int value) { SetRequestedInstanceCount(value); return *this;}


    /**
     * <p>The number of instances currently running in this instance group.</p>
     */
    inline int GetRunningInstanceCount() const{ return m_runningInstanceCount; }

    /**
     * <p>The number of instances currently running in this instance group.</p>
     */
    inline bool RunningInstanceCountHasBeenSet() const { return m_runningInstanceCountHasBeenSet; }

    /**
     * <p>The number of instances currently running in this instance group.</p>
     */
    inline void SetRunningInstanceCount(int value) { m_runningInstanceCountHasBeenSet = true; m_runningInstanceCount = value; }

    /**
     * <p>The number of instances currently running in this instance group.</p>
     */
    inline InstanceGroup& WithRunningInstanceCount(int value) { SetRunningInstanceCount(value); return *this;}


    /**
     * <p>The current status of the instance group.</p>
     */
    inline const InstanceGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the instance group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the instance group.</p>
     */
    inline void SetStatus(const InstanceGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the instance group.</p>
     */
    inline void SetStatus(InstanceGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the instance group.</p>
     */
    inline InstanceGroup& WithStatus(const InstanceGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the instance group.</p>
     */
    inline InstanceGroup& WithStatus(InstanceGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline InstanceGroup& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline InstanceGroup& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline InstanceGroup& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * configurations supplied for an EMR cluster instance group. You can specify a
     * separate configuration for each instance group (master, core, and task).</p>
     */
    inline InstanceGroup& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The version number of the requested configuration specification for this
     * instance group.</p>
     */
    inline long long GetConfigurationsVersion() const{ return m_configurationsVersion; }

    /**
     * <p>The version number of the requested configuration specification for this
     * instance group.</p>
     */
    inline bool ConfigurationsVersionHasBeenSet() const { return m_configurationsVersionHasBeenSet; }

    /**
     * <p>The version number of the requested configuration specification for this
     * instance group.</p>
     */
    inline void SetConfigurationsVersion(long long value) { m_configurationsVersionHasBeenSet = true; m_configurationsVersion = value; }

    /**
     * <p>The version number of the requested configuration specification for this
     * instance group.</p>
     */
    inline InstanceGroup& WithConfigurationsVersion(long long value) { SetConfigurationsVersion(value); return *this;}


    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline const Aws::Vector<Configuration>& GetLastSuccessfullyAppliedConfigurations() const{ return m_lastSuccessfullyAppliedConfigurations; }

    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline bool LastSuccessfullyAppliedConfigurationsHasBeenSet() const { return m_lastSuccessfullyAppliedConfigurationsHasBeenSet; }

    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline void SetLastSuccessfullyAppliedConfigurations(const Aws::Vector<Configuration>& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations = value; }

    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline void SetLastSuccessfullyAppliedConfigurations(Aws::Vector<Configuration>&& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations = std::move(value); }

    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline InstanceGroup& WithLastSuccessfullyAppliedConfigurations(const Aws::Vector<Configuration>& value) { SetLastSuccessfullyAppliedConfigurations(value); return *this;}

    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline InstanceGroup& WithLastSuccessfullyAppliedConfigurations(Aws::Vector<Configuration>&& value) { SetLastSuccessfullyAppliedConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline InstanceGroup& AddLastSuccessfullyAppliedConfigurations(const Configuration& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline InstanceGroup& AddLastSuccessfullyAppliedConfigurations(Configuration&& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The version number of a configuration specification that was successfully
     * applied for an instance group last time. </p>
     */
    inline long long GetLastSuccessfullyAppliedConfigurationsVersion() const{ return m_lastSuccessfullyAppliedConfigurationsVersion; }

    /**
     * <p>The version number of a configuration specification that was successfully
     * applied for an instance group last time. </p>
     */
    inline bool LastSuccessfullyAppliedConfigurationsVersionHasBeenSet() const { return m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet; }

    /**
     * <p>The version number of a configuration specification that was successfully
     * applied for an instance group last time. </p>
     */
    inline void SetLastSuccessfullyAppliedConfigurationsVersion(long long value) { m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet = true; m_lastSuccessfullyAppliedConfigurationsVersion = value; }

    /**
     * <p>The version number of a configuration specification that was successfully
     * applied for an instance group last time. </p>
     */
    inline InstanceGroup& WithLastSuccessfullyAppliedConfigurationsVersion(long long value) { SetLastSuccessfullyAppliedConfigurationsVersion(value); return *this;}


    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline const Aws::Vector<EbsBlockDevice>& GetEbsBlockDevices() const{ return m_ebsBlockDevices; }

    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline bool EbsBlockDevicesHasBeenSet() const { return m_ebsBlockDevicesHasBeenSet; }

    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline void SetEbsBlockDevices(const Aws::Vector<EbsBlockDevice>& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices = value; }

    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline void SetEbsBlockDevices(Aws::Vector<EbsBlockDevice>&& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices = std::move(value); }

    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline InstanceGroup& WithEbsBlockDevices(const Aws::Vector<EbsBlockDevice>& value) { SetEbsBlockDevices(value); return *this;}

    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline InstanceGroup& WithEbsBlockDevices(Aws::Vector<EbsBlockDevice>&& value) { SetEbsBlockDevices(std::move(value)); return *this;}

    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline InstanceGroup& AddEbsBlockDevices(const EbsBlockDevice& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices.push_back(value); return *this; }

    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline InstanceGroup& AddEbsBlockDevices(EbsBlockDevice&& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices.push_back(std::move(value)); return *this; }


    /**
     * <p>If the instance group is EBS-optimized. An Amazon EBS-optimized instance uses
     * an optimized configuration stack and provides additional, dedicated capacity for
     * Amazon EBS I/O.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>If the instance group is EBS-optimized. An Amazon EBS-optimized instance uses
     * an optimized configuration stack and provides additional, dedicated capacity for
     * Amazon EBS I/O.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>If the instance group is EBS-optimized. An Amazon EBS-optimized instance uses
     * an optimized configuration stack and provides additional, dedicated capacity for
     * Amazon EBS I/O.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>If the instance group is EBS-optimized. An Amazon EBS-optimized instance uses
     * an optimized configuration stack and provides additional, dedicated capacity for
     * Amazon EBS I/O.</p>
     */
    inline InstanceGroup& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline const ShrinkPolicy& GetShrinkPolicy() const{ return m_shrinkPolicy; }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline bool ShrinkPolicyHasBeenSet() const { return m_shrinkPolicyHasBeenSet; }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline void SetShrinkPolicy(const ShrinkPolicy& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = value; }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline void SetShrinkPolicy(ShrinkPolicy&& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = std::move(value); }

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline InstanceGroup& WithShrinkPolicy(const ShrinkPolicy& value) { SetShrinkPolicy(value); return *this;}

    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline InstanceGroup& WithShrinkPolicy(ShrinkPolicy&& value) { SetShrinkPolicy(std::move(value)); return *this;}


    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See PutAutoScalingPolicy.</p>
     */
    inline const AutoScalingPolicyDescription& GetAutoScalingPolicy() const{ return m_autoScalingPolicy; }

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See PutAutoScalingPolicy.</p>
     */
    inline bool AutoScalingPolicyHasBeenSet() const { return m_autoScalingPolicyHasBeenSet; }

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See PutAutoScalingPolicy.</p>
     */
    inline void SetAutoScalingPolicy(const AutoScalingPolicyDescription& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = value; }

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See PutAutoScalingPolicy.</p>
     */
    inline void SetAutoScalingPolicy(AutoScalingPolicyDescription&& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = std::move(value); }

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See PutAutoScalingPolicy.</p>
     */
    inline InstanceGroup& WithAutoScalingPolicy(const AutoScalingPolicyDescription& value) { SetAutoScalingPolicy(value); return *this;}

    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates EC2 instances in response to the value of
     * a CloudWatch metric. See PutAutoScalingPolicy.</p>
     */
    inline InstanceGroup& WithAutoScalingPolicy(AutoScalingPolicyDescription&& value) { SetAutoScalingPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    MarketType m_market;
    bool m_marketHasBeenSet;

    InstanceGroupType m_instanceGroupType;
    bool m_instanceGroupTypeHasBeenSet;

    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_requestedInstanceCount;
    bool m_requestedInstanceCountHasBeenSet;

    int m_runningInstanceCount;
    bool m_runningInstanceCountHasBeenSet;

    InstanceGroupStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet;

    long long m_configurationsVersion;
    bool m_configurationsVersionHasBeenSet;

    Aws::Vector<Configuration> m_lastSuccessfullyAppliedConfigurations;
    bool m_lastSuccessfullyAppliedConfigurationsHasBeenSet;

    long long m_lastSuccessfullyAppliedConfigurationsVersion;
    bool m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet;

    Aws::Vector<EbsBlockDevice> m_ebsBlockDevices;
    bool m_ebsBlockDevicesHasBeenSet;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;

    ShrinkPolicy m_shrinkPolicy;
    bool m_shrinkPolicyHasBeenSet;

    AutoScalingPolicyDescription m_autoScalingPolicy;
    bool m_autoScalingPolicyHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
