/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/EbsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An instance type configuration for each instance type in an instance fleet,
   * which determines the Amazon EC2 instances Amazon EMR attempts to provision to
   * fulfill On-Demand and Spot target capacities. When you use an allocation
   * strategy, you can include a maximum of 30 instance type configurations for a
   * fleet. For more information about how to use an allocation strategy, see <a
   * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-instance-fleet.html">Configure
   * Instance Fleets</a>. Without an allocation strategy, you may specify a maximum
   * of five instance type configurations for a fleet.</p>  <p>The instance
   * fleet configuration is available only in Amazon EMR releases 4.8.0 and later,
   * excluding 5.0.x versions.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceTypeConfig">AWS
   * API Reference</a></p>
   */
  class InstanceTypeConfig
  {
  public:
    AWS_EMR_API InstanceTypeConfig() = default;
    AWS_EMR_API InstanceTypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceTypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon EC2 instance type, such as <code>m3.xlarge</code>. </p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceTypeConfig& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of units that a provisioned instance of this type provides toward
     * fulfilling the target capacities defined in <a>InstanceFleetConfig</a>. This
     * value is 1 for a master instance fleet, and must be 1 or greater for core and
     * task instance fleets. Defaults to 1 if not specified. </p>
     */
    inline int GetWeightedCapacity() const { return m_weightedCapacity; }
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }
    inline void SetWeightedCapacity(int value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }
    inline InstanceTypeConfig& WithWeightedCapacity(int value) { SetWeightedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bid price for each Amazon EC2 Spot Instance type as defined by
     * <code>InstanceType</code>. Expressed in USD. If neither <code>BidPrice</code>
     * nor <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%. </p>
     */
    inline const Aws::String& GetBidPrice() const { return m_bidPrice; }
    inline bool BidPriceHasBeenSet() const { return m_bidPriceHasBeenSet; }
    template<typename BidPriceT = Aws::String>
    void SetBidPrice(BidPriceT&& value) { m_bidPriceHasBeenSet = true; m_bidPrice = std::forward<BidPriceT>(value); }
    template<typename BidPriceT = Aws::String>
    InstanceTypeConfig& WithBidPrice(BidPriceT&& value) { SetBidPrice(std::forward<BidPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bid price, as a percentage of On-Demand price, for each Amazon EC2 Spot
     * Instance as defined by <code>InstanceType</code>. Expressed as a number (for
     * example, 20 specifies 20%). If neither <code>BidPrice</code> nor
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> is provided,
     * <code>BidPriceAsPercentageOfOnDemandPrice</code> defaults to 100%.</p>
     */
    inline double GetBidPriceAsPercentageOfOnDemandPrice() const { return m_bidPriceAsPercentageOfOnDemandPrice; }
    inline bool BidPriceAsPercentageOfOnDemandPriceHasBeenSet() const { return m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet; }
    inline void SetBidPriceAsPercentageOfOnDemandPrice(double value) { m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet = true; m_bidPriceAsPercentageOfOnDemandPrice = value; }
    inline InstanceTypeConfig& WithBidPriceAsPercentageOfOnDemandPrice(double value) { SetBidPriceAsPercentageOfOnDemandPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of Amazon Elastic Block Store (Amazon EBS) attached to each
     * instance as defined by <code>InstanceType</code>. </p>
     */
    inline const EbsConfiguration& GetEbsConfiguration() const { return m_ebsConfiguration; }
    inline bool EbsConfigurationHasBeenSet() const { return m_ebsConfigurationHasBeenSet; }
    template<typename EbsConfigurationT = EbsConfiguration>
    void SetEbsConfiguration(EbsConfigurationT&& value) { m_ebsConfigurationHasBeenSet = true; m_ebsConfiguration = std::forward<EbsConfigurationT>(value); }
    template<typename EbsConfigurationT = EbsConfiguration>
    InstanceTypeConfig& WithEbsConfiguration(EbsConfigurationT&& value) { SetEbsConfiguration(std::forward<EbsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration classification that applies when provisioning cluster
     * instances, which can include configurations for applications and software that
     * run on the cluster.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const { return m_configurations; }
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    void SetConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations = std::forward<ConfigurationsT>(value); }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    InstanceTypeConfig& WithConfigurations(ConfigurationsT&& value) { SetConfigurations(std::forward<ConfigurationsT>(value)); return *this;}
    template<typename ConfigurationsT = Configuration>
    InstanceTypeConfig& AddConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace_back(std::forward<ConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom AMI ID to use for the instance type.</p>
     */
    inline const Aws::String& GetCustomAmiId() const { return m_customAmiId; }
    inline bool CustomAmiIdHasBeenSet() const { return m_customAmiIdHasBeenSet; }
    template<typename CustomAmiIdT = Aws::String>
    void SetCustomAmiId(CustomAmiIdT&& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = std::forward<CustomAmiIdT>(value); }
    template<typename CustomAmiIdT = Aws::String>
    InstanceTypeConfig& WithCustomAmiId(CustomAmiIdT&& value) { SetCustomAmiId(std::forward<CustomAmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority at which Amazon EMR launches the Amazon EC2 instances with this
     * instance type. Priority starts at 0, which is the highest priority. Amazon EMR
     * considers the highest priority first.</p>
     */
    inline double GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(double value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline InstanceTypeConfig& WithPriority(double value) { SetPriority(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_weightedCapacity{0};
    bool m_weightedCapacityHasBeenSet = false;

    Aws::String m_bidPrice;
    bool m_bidPriceHasBeenSet = false;

    double m_bidPriceAsPercentageOfOnDemandPrice{0.0};
    bool m_bidPriceAsPercentageOfOnDemandPriceHasBeenSet = false;

    EbsConfiguration m_ebsConfiguration;
    bool m_ebsConfigurationHasBeenSet = false;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet = false;

    Aws::String m_customAmiId;
    bool m_customAmiIdHasBeenSet = false;

    double m_priority{0.0};
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
