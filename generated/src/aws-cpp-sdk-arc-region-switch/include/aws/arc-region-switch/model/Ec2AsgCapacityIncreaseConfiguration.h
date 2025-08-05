/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/Ec2Ungraceful.h>
#include <aws/arc-region-switch/model/Ec2AsgCapacityMonitoringApproach.h>
#include <aws/arc-region-switch/model/Asg.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Configuration for increasing the capacity of Amazon EC2 Auto Scaling groups
   * during a Region switch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Ec2AsgCapacityIncreaseConfiguration">AWS
   * API Reference</a></p>
   */
  class Ec2AsgCapacityIncreaseConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API Ec2AsgCapacityIncreaseConfiguration() = default;
    AWS_ARCREGIONSWITCH_API Ec2AsgCapacityIncreaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Ec2AsgCapacityIncreaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeout value specified for the configuration.</p>
     */
    inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }
    inline Ec2AsgCapacityIncreaseConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 Auto Scaling groups for the configuration.</p>
     */
    inline const Aws::Vector<Asg>& GetAsgs() const { return m_asgs; }
    inline bool AsgsHasBeenSet() const { return m_asgsHasBeenSet; }
    template<typename AsgsT = Aws::Vector<Asg>>
    void SetAsgs(AsgsT&& value) { m_asgsHasBeenSet = true; m_asgs = std::forward<AsgsT>(value); }
    template<typename AsgsT = Aws::Vector<Asg>>
    Ec2AsgCapacityIncreaseConfiguration& WithAsgs(AsgsT&& value) { SetAsgs(std::forward<AsgsT>(value)); return *this;}
    template<typename AsgsT = Asg>
    Ec2AsgCapacityIncreaseConfiguration& AddAsgs(AsgsT&& value) { m_asgsHasBeenSet = true; m_asgs.emplace_back(std::forward<AsgsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The settings for ungraceful execution.</p>
     */
    inline const Ec2Ungraceful& GetUngraceful() const { return m_ungraceful; }
    inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
    template<typename UngracefulT = Ec2Ungraceful>
    void SetUngraceful(UngracefulT&& value) { m_ungracefulHasBeenSet = true; m_ungraceful = std::forward<UngracefulT>(value); }
    template<typename UngracefulT = Ec2Ungraceful>
    Ec2AsgCapacityIncreaseConfiguration& WithUngraceful(UngracefulT&& value) { SetUngraceful(std::forward<UngracefulT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target percentage that you specify for EC2 Auto Scaling groups.</p>
     */
    inline int GetTargetPercent() const { return m_targetPercent; }
    inline bool TargetPercentHasBeenSet() const { return m_targetPercentHasBeenSet; }
    inline void SetTargetPercent(int value) { m_targetPercentHasBeenSet = true; m_targetPercent = value; }
    inline Ec2AsgCapacityIncreaseConfiguration& WithTargetPercent(int value) { SetTargetPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring approach that you specify EC2 Auto Scaling groups for the
     * configuration.</p>
     */
    inline Ec2AsgCapacityMonitoringApproach GetCapacityMonitoringApproach() const { return m_capacityMonitoringApproach; }
    inline bool CapacityMonitoringApproachHasBeenSet() const { return m_capacityMonitoringApproachHasBeenSet; }
    inline void SetCapacityMonitoringApproach(Ec2AsgCapacityMonitoringApproach value) { m_capacityMonitoringApproachHasBeenSet = true; m_capacityMonitoringApproach = value; }
    inline Ec2AsgCapacityIncreaseConfiguration& WithCapacityMonitoringApproach(Ec2AsgCapacityMonitoringApproach value) { SetCapacityMonitoringApproach(value); return *this;}
    ///@}
  private:

    int m_timeoutMinutes{0};
    bool m_timeoutMinutesHasBeenSet = false;

    Aws::Vector<Asg> m_asgs;
    bool m_asgsHasBeenSet = false;

    Ec2Ungraceful m_ungraceful;
    bool m_ungracefulHasBeenSet = false;

    int m_targetPercent{0};
    bool m_targetPercentHasBeenSet = false;

    Ec2AsgCapacityMonitoringApproach m_capacityMonitoringApproach{Ec2AsgCapacityMonitoringApproach::NOT_SET};
    bool m_capacityMonitoringApproachHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
