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
    AWS_EMR_API InstanceGroup() = default;
    AWS_EMR_API InstanceGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the instance group.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InstanceGroup& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marketplace to provision instances for this group. Valid values are
     * ON_DEMAND or SPOT.</p>
     */
    inline MarketType GetMarket() const { return m_market; }
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }
    inline void SetMarket(MarketType value) { m_marketHasBeenSet = true; m_market = value; }
    inline InstanceGroup& WithMarket(MarketType value) { SetMarket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the instance group. Valid values are MASTER, CORE or TASK.</p>
     */
    inline InstanceGroupType GetInstanceGroupType() const { return m_instanceGroupType; }
    inline bool InstanceGroupTypeHasBeenSet() const { return m_instanceGroupTypeHasBeenSet; }
    inline void SetInstanceGroupType(InstanceGroupType value) { m_instanceGroupTypeHasBeenSet = true; m_instanceGroupType = value; }
    inline InstanceGroup& WithInstanceGroupType(InstanceGroupType value) { SetInstanceGroupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, indicates that the instance group uses Spot Instances. This is
     * the maximum price you are willing to pay for Spot Instances. Specify
     * <code>OnDemandPrice</code> to set the amount equal to the On-Demand price, or
     * specify an amount in USD.</p>
     */
    inline const Aws::String& GetBidPrice() const { return m_bidPrice; }
    inline bool BidPriceHasBeenSet() const { return m_bidPriceHasBeenSet; }
    template<typename BidPriceT = Aws::String>
    void SetBidPrice(BidPriceT&& value) { m_bidPriceHasBeenSet = true; m_bidPrice = std::forward<BidPriceT>(value); }
    template<typename BidPriceT = Aws::String>
    InstanceGroup& WithBidPrice(BidPriceT&& value) { SetBidPrice(std::forward<BidPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type for all instances in the instance group.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceGroup& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target number of instances for the instance group.</p>
     */
    inline int GetRequestedInstanceCount() const { return m_requestedInstanceCount; }
    inline bool RequestedInstanceCountHasBeenSet() const { return m_requestedInstanceCountHasBeenSet; }
    inline void SetRequestedInstanceCount(int value) { m_requestedInstanceCountHasBeenSet = true; m_requestedInstanceCount = value; }
    inline InstanceGroup& WithRequestedInstanceCount(int value) { SetRequestedInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently running in this instance group.</p>
     */
    inline int GetRunningInstanceCount() const { return m_runningInstanceCount; }
    inline bool RunningInstanceCountHasBeenSet() const { return m_runningInstanceCountHasBeenSet; }
    inline void SetRunningInstanceCount(int value) { m_runningInstanceCountHasBeenSet = true; m_runningInstanceCount = value; }
    inline InstanceGroup& WithRunningInstanceCount(int value) { SetRunningInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the instance group.</p>
     */
    inline const InstanceGroupStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = InstanceGroupStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = InstanceGroupStatus>
    InstanceGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Amazon EMR releases 4.x or later.</p>  <p>The list of
     * configurations supplied for an Amazon EMR cluster instance group. You can
     * specify a separate configuration for each instance group (master, core, and
     * task).</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const { return m_configurations; }
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    void SetConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations = std::forward<ConfigurationsT>(value); }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    InstanceGroup& WithConfigurations(ConfigurationsT&& value) { SetConfigurations(std::forward<ConfigurationsT>(value)); return *this;}
    template<typename ConfigurationsT = Configuration>
    InstanceGroup& AddConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace_back(std::forward<ConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of the requested configuration specification for this
     * instance group.</p>
     */
    inline long long GetConfigurationsVersion() const { return m_configurationsVersion; }
    inline bool ConfigurationsVersionHasBeenSet() const { return m_configurationsVersionHasBeenSet; }
    inline void SetConfigurationsVersion(long long value) { m_configurationsVersionHasBeenSet = true; m_configurationsVersion = value; }
    inline InstanceGroup& WithConfigurationsVersion(long long value) { SetConfigurationsVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of configurations that were successfully applied for an instance group
     * last time.</p>
     */
    inline const Aws::Vector<Configuration>& GetLastSuccessfullyAppliedConfigurations() const { return m_lastSuccessfullyAppliedConfigurations; }
    inline bool LastSuccessfullyAppliedConfigurationsHasBeenSet() const { return m_lastSuccessfullyAppliedConfigurationsHasBeenSet; }
    template<typename LastSuccessfullyAppliedConfigurationsT = Aws::Vector<Configuration>>
    void SetLastSuccessfullyAppliedConfigurations(LastSuccessfullyAppliedConfigurationsT&& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations = std::forward<LastSuccessfullyAppliedConfigurationsT>(value); }
    template<typename LastSuccessfullyAppliedConfigurationsT = Aws::Vector<Configuration>>
    InstanceGroup& WithLastSuccessfullyAppliedConfigurations(LastSuccessfullyAppliedConfigurationsT&& value) { SetLastSuccessfullyAppliedConfigurations(std::forward<LastSuccessfullyAppliedConfigurationsT>(value)); return *this;}
    template<typename LastSuccessfullyAppliedConfigurationsT = Configuration>
    InstanceGroup& AddLastSuccessfullyAppliedConfigurations(LastSuccessfullyAppliedConfigurationsT&& value) { m_lastSuccessfullyAppliedConfigurationsHasBeenSet = true; m_lastSuccessfullyAppliedConfigurations.emplace_back(std::forward<LastSuccessfullyAppliedConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of a configuration specification that was successfully
     * applied for an instance group last time. </p>
     */
    inline long long GetLastSuccessfullyAppliedConfigurationsVersion() const { return m_lastSuccessfullyAppliedConfigurationsVersion; }
    inline bool LastSuccessfullyAppliedConfigurationsVersionHasBeenSet() const { return m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet; }
    inline void SetLastSuccessfullyAppliedConfigurationsVersion(long long value) { m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet = true; m_lastSuccessfullyAppliedConfigurationsVersion = value; }
    inline InstanceGroup& WithLastSuccessfullyAppliedConfigurationsVersion(long long value) { SetLastSuccessfullyAppliedConfigurationsVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EBS block devices that are mapped to this instance group.</p>
     */
    inline const Aws::Vector<EbsBlockDevice>& GetEbsBlockDevices() const { return m_ebsBlockDevices; }
    inline bool EbsBlockDevicesHasBeenSet() const { return m_ebsBlockDevicesHasBeenSet; }
    template<typename EbsBlockDevicesT = Aws::Vector<EbsBlockDevice>>
    void SetEbsBlockDevices(EbsBlockDevicesT&& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices = std::forward<EbsBlockDevicesT>(value); }
    template<typename EbsBlockDevicesT = Aws::Vector<EbsBlockDevice>>
    InstanceGroup& WithEbsBlockDevices(EbsBlockDevicesT&& value) { SetEbsBlockDevices(std::forward<EbsBlockDevicesT>(value)); return *this;}
    template<typename EbsBlockDevicesT = EbsBlockDevice>
    InstanceGroup& AddEbsBlockDevices(EbsBlockDevicesT&& value) { m_ebsBlockDevicesHasBeenSet = true; m_ebsBlockDevices.emplace_back(std::forward<EbsBlockDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the instance group is EBS-optimized. An Amazon EBS-optimized instance uses
     * an optimized configuration stack and provides additional, dedicated capacity for
     * Amazon EBS I/O.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline InstanceGroup& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Policy for customizing shrink operations.</p>
     */
    inline const ShrinkPolicy& GetShrinkPolicy() const { return m_shrinkPolicy; }
    inline bool ShrinkPolicyHasBeenSet() const { return m_shrinkPolicyHasBeenSet; }
    template<typename ShrinkPolicyT = ShrinkPolicy>
    void SetShrinkPolicy(ShrinkPolicyT&& value) { m_shrinkPolicyHasBeenSet = true; m_shrinkPolicy = std::forward<ShrinkPolicyT>(value); }
    template<typename ShrinkPolicyT = ShrinkPolicy>
    InstanceGroup& WithShrinkPolicy(ShrinkPolicyT&& value) { SetShrinkPolicy(std::forward<ShrinkPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates Amazon EC2 instances in response to the
     * value of a CloudWatch metric. See PutAutoScalingPolicy.</p>
     */
    inline const AutoScalingPolicyDescription& GetAutoScalingPolicy() const { return m_autoScalingPolicy; }
    inline bool AutoScalingPolicyHasBeenSet() const { return m_autoScalingPolicyHasBeenSet; }
    template<typename AutoScalingPolicyT = AutoScalingPolicyDescription>
    void SetAutoScalingPolicy(AutoScalingPolicyT&& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = std::forward<AutoScalingPolicyT>(value); }
    template<typename AutoScalingPolicyT = AutoScalingPolicyDescription>
    InstanceGroup& WithAutoScalingPolicy(AutoScalingPolicyT&& value) { SetAutoScalingPolicy(std::forward<AutoScalingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom AMI ID to use for the provisioned instance group.</p>
     */
    inline const Aws::String& GetCustomAmiId() const { return m_customAmiId; }
    inline bool CustomAmiIdHasBeenSet() const { return m_customAmiIdHasBeenSet; }
    template<typename CustomAmiIdT = Aws::String>
    void SetCustomAmiId(CustomAmiIdT&& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = std::forward<CustomAmiIdT>(value); }
    template<typename CustomAmiIdT = Aws::String>
    InstanceGroup& WithCustomAmiId(CustomAmiIdT&& value) { SetCustomAmiId(std::forward<CustomAmiIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MarketType m_market{MarketType::NOT_SET};
    bool m_marketHasBeenSet = false;

    InstanceGroupType m_instanceGroupType{InstanceGroupType::NOT_SET};
    bool m_instanceGroupTypeHasBeenSet = false;

    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_requestedInstanceCount{0};
    bool m_requestedInstanceCountHasBeenSet = false;

    int m_runningInstanceCount{0};
    bool m_runningInstanceCountHasBeenSet = false;

    InstanceGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet = false;

    long long m_configurationsVersion{0};
    bool m_configurationsVersionHasBeenSet = false;

    Aws::Vector<Configuration> m_lastSuccessfullyAppliedConfigurations;
    bool m_lastSuccessfullyAppliedConfigurationsHasBeenSet = false;

    long long m_lastSuccessfullyAppliedConfigurationsVersion{0};
    bool m_lastSuccessfullyAppliedConfigurationsVersionHasBeenSet = false;

    Aws::Vector<EbsBlockDevice> m_ebsBlockDevices;
    bool m_ebsBlockDevicesHasBeenSet = false;

    bool m_ebsOptimized{false};
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
