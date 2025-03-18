/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InstanceGroupConfig
  {
  public:
    AWS_EMR_API InstanceGroupConfig() = default;
    AWS_EMR_API InstanceGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Friendly name given to the instance group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceGroupConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Market type of the Amazon EC2 instances used to create a cluster node.</p>
     */
    inline MarketType GetMarket() const { return m_market; }
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }
    inline void SetMarket(MarketType value) { m_marketHasBeenSet = true; m_market = value; }
    inline InstanceGroupConfig& WithMarket(MarketType value) { SetMarket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the instance group in the cluster.</p>
     */
    inline InstanceRoleType GetInstanceRole() const { return m_instanceRole; }
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }
    inline void SetInstanceRole(InstanceRoleType value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }
    inline InstanceGroupConfig& WithInstanceRole(InstanceRoleType value) { SetInstanceRole(value); return *this;}
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
    InstanceGroupConfig& WithBidPrice(BidPriceT&& value) { SetBidPrice(std::forward<BidPriceT>(value)); return *this;}
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
    InstanceGroupConfig& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target number of instances for the instance group.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline InstanceGroupConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
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
    InstanceGroupConfig& WithConfigurations(ConfigurationsT&& value) { SetConfigurations(std::forward<ConfigurationsT>(value)); return *this;}
    template<typename ConfigurationsT = Configuration>
    InstanceGroupConfig& AddConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace_back(std::forward<ConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>EBS configurations that will be attached to each Amazon EC2 instance in the
     * instance group.</p>
     */
    inline const EbsConfiguration& GetEbsConfiguration() const { return m_ebsConfiguration; }
    inline bool EbsConfigurationHasBeenSet() const { return m_ebsConfigurationHasBeenSet; }
    template<typename EbsConfigurationT = EbsConfiguration>
    void SetEbsConfiguration(EbsConfigurationT&& value) { m_ebsConfigurationHasBeenSet = true; m_ebsConfiguration = std::forward<EbsConfigurationT>(value); }
    template<typename EbsConfigurationT = EbsConfiguration>
    InstanceGroupConfig& WithEbsConfiguration(EbsConfigurationT&& value) { SetEbsConfiguration(std::forward<EbsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An automatic scaling policy for a core instance group or task instance group
     * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
     * group dynamically adds and terminates Amazon EC2 instances in response to the
     * value of a CloudWatch metric. See <a>PutAutoScalingPolicy</a>.</p>
     */
    inline const AutoScalingPolicy& GetAutoScalingPolicy() const { return m_autoScalingPolicy; }
    inline bool AutoScalingPolicyHasBeenSet() const { return m_autoScalingPolicyHasBeenSet; }
    template<typename AutoScalingPolicyT = AutoScalingPolicy>
    void SetAutoScalingPolicy(AutoScalingPolicyT&& value) { m_autoScalingPolicyHasBeenSet = true; m_autoScalingPolicy = std::forward<AutoScalingPolicyT>(value); }
    template<typename AutoScalingPolicyT = AutoScalingPolicy>
    InstanceGroupConfig& WithAutoScalingPolicy(AutoScalingPolicyT&& value) { SetAutoScalingPolicy(std::forward<AutoScalingPolicyT>(value)); return *this;}
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
    InstanceGroupConfig& WithCustomAmiId(CustomAmiIdT&& value) { SetCustomAmiId(std::forward<CustomAmiIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MarketType m_market{MarketType::NOT_SET};
    bool m_marketHasBeenSet = false;

    InstanceRoleType m_instanceRole{InstanceRoleType::NOT_SET};
    bool m_instanceRoleHasBeenSet = false;

    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet = false;

    EbsConfiguration m_ebsConfiguration;
    bool m_ebsConfigurationHasBeenSet = false;

    AutoScalingPolicy m_autoScalingPolicy;
    bool m_autoScalingPolicyHasBeenSet = false;

    Aws::String m_customAmiId;
    bool m_customAmiIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
