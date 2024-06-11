/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InstanceGroup
  {
  public:
    AWS_EMR_API InstanceGroup();
    AWS_EMR_API InstanceGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the instance group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline InstanceGroup& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline InstanceGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline InstanceGroup& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InstanceGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InstanceGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InstanceGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marketplace to provision instances for this group. Valid values are
     * ON_DEMAND or SPOT.</p>
     */
    inline const MarketType& GetMarket() const{ return m_market; }
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }
    inline void SetMarket(MarketType&& value) { m_marketHasBeenSet = true; m_market = std::move(value); }
    inline InstanceGroup& WithMarket(const MarketType& value) { SetMarket(value); return *this;}
    inline InstanceGroup& WithMarket(MarketType&& value) { SetMarket(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
     */
    inline const InstanceGroupType& GetInstanceGroupType() const{ return m_instanceGroupType; }
    inline bool InstanceGroupTypeHasBeenSet() const { return m_instanceGroupTypeHasBeenSet; }
    inline void SetInstanceGroupType(const InstanceGroupType& value) { m_instanceGroupTypeHasBeenSet = true; m_instanceGroupType = value; }
    inline void SetInstanceGroupType(InstanceGroupType&& value) { m_instanceGroupTypeHasBeenSet = true; m_instanceGroupType = std::move(value); }
    inline InstanceGroup& WithInstanceGroupType(const InstanceGroupType& value) { SetInstanceGroupType(value); return *this;}
    inline InstanceGroup& WithInstanceGroupType(InstanceGroupType&& value) { SetInstanceGroupType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, indicates that the instance group uses Spot Instances. This is
     * the maximum price you are willing to pay for Spot Instances. Specify
     * <code>OnDemandPrice</code> to set the amount equal to the On-Demand price, or
     * specify an amount in USD.</p>
     */
    inline const Aws::String& GetBidPrice() const{ return m_bidPrice; }
    inline bool BidPriceHasBeenSet() const { return m_bidPriceHasBeenSet; }
    inline void SetBidPrice(const Aws::String& value) { m_bidPriceHasBeenSet = true; m_bidPrice = value; }
    inline void SetBidPrice(Aws::String&& value) { m_bidPriceHasBeenSet = true; m_bidPrice = std::move(value); }
    inline void SetBidPrice(const char* value) { m_bidPriceHasBeenSet = true; m_bidPrice.assign(value); }
    inline InstanceGroup& WithBidPrice(const Aws::String& value) { SetBidPrice(value); return *this;}
    inline InstanceGroup& WithBidPrice(Aws::String&& value) { SetBidPrice(std::move(value)); return *this;}
    inline InstanceGroup& WithBidPrice(const char* value) { SetBidPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type for all instances in the instance group.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline InstanceGroup& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline InstanceGroup& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline InstanceGroup& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target number of instances for the instance group.</p>
     */
    inline int GetRequestedInstanceCount() const{ return m_requestedInstanceCount; }
    inline bool RequestedInstanceCountHasBeenSet() const { return m_requestedInstanceCountHasBeenSet; }
    inline void SetRequestedInstanceCount(int value) { m_requestedInstanceCountHasBeenSet = true; m_requestedInstanceCount = value; }
    inline InstanceGroup& WithRequestedInstanceCount(int value) { SetRequestedInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently running in this instance group.</p>
     */
    inline int GetRunningInstanceCount() const{ return m_runningInstanceCount; }
    inline bool RunningInstanceCountHasBeenSet() const { return m_runningInstanceCountHasBeenSet; }
    inline void SetRunningInstanceCount(int value) { m_runningInstanceCountHasBeenSet = true; m_runningInstanceCount = value; }
    inline InstanceGroup& WithRunningInstanceCount(int value) { SetRunningInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the instance group.</p>
     */
    inline const InstanceGroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InstanceGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InstanceGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline InstanceGroup& WithStatus(const InstanceGroupStatus& value) { SetStatus(value); return *this;}
    inline InstanceGroup& WithStatus(InstanceGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Amazon EMR releases 4.x or later.</p>  <p>The list of
     * configurations supplied for an Amazon EMR cluster instance group. You can
     * specify a separate configuration for each instance group (master, core, and
     * task).</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }
    inline InstanceGroup& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}
    inline InstanceGroup& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}
    inline InstanceGroup& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }
    inline InstanceGroup& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of the requested configuration specification for this
     * instance group.</p>
     */
    inline long long GetConfigurationsVersion() const{ return m_configurationsVersion; }
    inline bool ConfigurationsVersionHasBeenSet() const { return m_configurationsVersionHasBeenSet; }
    inline void SetConfigurationsVersion(long long value) { m_configurationsVersionHasBeenSet = true; m_configurationsVersion = value; }
    inline InstanceGroup& WithConfigurationsVersion(long long value) { SetConfigurationsVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline const Aws::Vector<Configuration>& GetLastSuccessfullyAppliedConfigurations() const{ return m_lastSuccessfullyAppliedConfigurations; }
    inline bool LastSuccessfullyAppliedConfigurationsHasBeenSet() const { return m_lastSuccessfullyAppliedConfigurationsHasBeenSet; }
    inline void SetLastSuccessfullyAppliedConfigurations(const Aws::Vector<Configuration>& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations = value; }
    inline void SetLastSuccessfullyAppliedConfigurations(Aws::Vector<Configuration>&& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations = std::move(value); }
    inline InstanceGroup& WithLastSuccessfullyAppliedConfigurations(const Aws::Vector<Configuration>& value) { SetLastSuccessfullyAppliedConfigurations(value); return *this;}
    inline InstanceGroup& WithLastSuccessfullyAppliedConfigurations(Aws::Vector<Configuration>&& value) { SetLastSuccessfullyAppliedConfigurations(std::move(value)); return *this;}
    inline InstanceGroup& AddLastSuccessfullyAppliedConfigurations(const Configuration& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations.push_back(value); return *this; }
    inline InstanceGroup& AddLastSuccessfullyAppliedConfigurations(Configuration&& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of a configuration specification that was successfully
     * applied for an instance group last time. </p>
     */
    inline long long GetLastSuccessfullyAppliedConfigurationsVersion() const{ return m_lastSuccessfullyAppliedConfigurationsVersion; }
    inline bool LastSuccessfullyAppliedConfigurationsVersionHasBeenSet() const { return m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet; }
    inline void SetLastSuccessfullyAppliedConfigurationsVersion(long long value) { m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet = true; m_lastSuccessfullyAppliedConfigurationsVersion = value; }
    inline InstanceGroup& WithLastSuccessfullyAppliedConfigurationsVersion(long long value) { SetLastSuccessfullyAppliedConfigurationsVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline const Aws::Vector<EbsBlockDevice>& GetEbsBlockDevices() const{ return m_ebsBlockDevices; }
    inline bool EbsBlockDevicesHasBeenSet() const { return m_ebsBlockDevicesHasBeenSet; }
    inline void SetEbsBlockDevices(const Aws::Vector<EbsBlockDevice>& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices = value; }
    inline void SetEbsBlockDevices(Aws::Vector<EbsBlockDevice>&& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices = std::move(value); }
    inline InstanceGroup& WithEbsBlockDevices(const Aws::Vector<EbsBlockDevice>& value) { SetEbsBlockDevices(value); return *this;}
    inline InstanceGroup& WithEbsBlockDevices(Aws::Vector<EbsBlockDevice>&& value) { SetEbsBlockDevices(std::move(value)); return *this;}
    inline InstanceGroup& AddEbsBlockDevices(const EbsBlockDevice& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices.push_back(value); return *this; }
    inline InstanceGroup& AddEbsBlockDevices(EbsBlockDevice&& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the instance group is EBS-optimized. An Amazon EBS-optimized instance uses
     * an optimized configuration stack and provides additional, dedicated capacity for
     * Amazon EBS I/O.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline InstanceGroup& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline const ShrinkPolicy& GetShrinkPolicy() const{ return m_shrinkPolicy; }
    inline bool ShrinkPolicyHasBeenSet() const { return m_shrinkPolicyHasBeenSet; }
    inline void SetShrinkPolicy(const ShrinkPolicy& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = value; }
    inline void SetShrinkPolicy(ShrinkPolicy&& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = std::move(value); }
    inline InstanceGroup& WithShrinkPolicy(const ShrinkPolicy& value) { SetShrinkPolicy(value); return *this;}
    inline InstanceGroup& WithShrinkPolicy(ShrinkPolicy&& value) { SetShrinkPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates Amazon EC2 instances in response to the
     * value of a CloudWatch metric. See PutAutoScalingPolicy.</p>
     */
    inline const AutoScalingPolicyDescription& GetAutoScalingPolicy() const{ return m_autoScalingPolicy; }
    inline bool AutoScalingPolicyHasBeenSet() const { return m_autoScalingPolicyHasBeenSet; }
    inline void SetAutoScalingPolicy(const AutoScalingPolicyDescription& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = value; }
    inline void SetAutoScalingPolicy(AutoScalingPolicyDescription&& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = std::move(value); }
    inline InstanceGroup& WithAutoScalingPolicy(const AutoScalingPolicyDescription& value) { SetAutoScalingPolicy(value); return *this;}
    inline InstanceGroup& WithAutoScalingPolicy(AutoScalingPolicyDescription&& value) { SetAutoScalingPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom AMI ID to use for the provisioned instance group.</p>
     */
    inline const Aws::String& GetCustomAmiId() const{ return m_customAmiId; }
    inline bool CustomAmiIdHasBeenSet() const { return m_customAmiIdHasBeenSet; }
    inline void SetCustomAmiId(const Aws::String& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = value; }
    inline void SetCustomAmiId(Aws::String&& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = std::move(value); }
    inline void SetCustomAmiId(const char* value) { m_customAmiIdHasBeenSet = true; m_customAmiId.assign(value); }
    inline InstanceGroup& WithCustomAmiId(const Aws::String& value) { SetCustomAmiId(value); return *this;}
    inline InstanceGroup& WithCustomAmiId(Aws::String&& value) { SetCustomAmiId(std::move(value)); return *this;}
    inline InstanceGroup& WithCustomAmiId(const char* value) { SetCustomAmiId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MarketType m_market;
    bool m_marketHasBeenSet = false;

    InstanceGroupType m_instanceGroupType;
    bool m_instanceGroupTypeHasBeenSet = false;

    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_requestedInstanceCount;
    bool m_requestedInstanceCountHasBeenSet = false;

    int m_runningInstanceCount;
    bool m_runningInstanceCountHasBeenSet = false;

    InstanceGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet = false;

    long long m_configurationsVersion;
    bool m_configurationsVersionHasBeenSet = false;

    Aws::Vector<Configuration> m_lastSuccessfullyAppliedConfigurations;
    bool m_lastSuccessfullyAppliedConfigurationsHasBeenSet = false;

    long long m_lastSuccessfullyAppliedConfigurationsVersion;
    bool m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet = false;

    Aws::Vector<EbsBlockDevice> m_ebsBlockDevices;
    bool m_ebsBlockDevicesHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    ShrinkPolicy m_shrinkPolicy;
    bool m_shrinkPolicyHasBeenSet = false;

    AutoScalingPolicyDescription m_autoScalingPolicy;
    bool m_autoScalingPolicyHasBeenSet = false;

    Aws::String m_customAmiId;
    bool m_customAmiIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
