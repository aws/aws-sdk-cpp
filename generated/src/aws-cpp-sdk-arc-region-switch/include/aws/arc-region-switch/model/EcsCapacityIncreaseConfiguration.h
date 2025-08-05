/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/EcsUngraceful.h>
#include <aws/arc-region-switch/model/EcsCapacityMonitoringApproach.h>
#include <aws/arc-region-switch/model/Service.h>
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
   * <p>The configuration for an Amazon Web Services ECS capacity
   * increase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/EcsCapacityIncreaseConfiguration">AWS
   * API Reference</a></p>
   */
  class EcsCapacityIncreaseConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API EcsCapacityIncreaseConfiguration() = default;
    AWS_ARCREGIONSWITCH_API EcsCapacityIncreaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API EcsCapacityIncreaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeout value specified for the configuration.</p>
     */
    inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }
    inline EcsCapacityIncreaseConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The services specified for the configuration.</p>
     */
    inline const Aws::Vector<Service>& GetServices() const { return m_services; }
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
    template<typename ServicesT = Aws::Vector<Service>>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = Aws::Vector<Service>>
    EcsCapacityIncreaseConfiguration& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    template<typename ServicesT = Service>
    EcsCapacityIncreaseConfiguration& AddServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services.emplace_back(std::forward<ServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The settings for ungraceful execution.</p>
     */
    inline const EcsUngraceful& GetUngraceful() const { return m_ungraceful; }
    inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
    template<typename UngracefulT = EcsUngraceful>
    void SetUngraceful(UngracefulT&& value) { m_ungracefulHasBeenSet = true; m_ungraceful = std::forward<UngracefulT>(value); }
    template<typename UngracefulT = EcsUngraceful>
    EcsCapacityIncreaseConfiguration& WithUngraceful(UngracefulT&& value) { SetUngraceful(std::forward<UngracefulT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target percentage specified for the configuration.</p>
     */
    inline int GetTargetPercent() const { return m_targetPercent; }
    inline bool TargetPercentHasBeenSet() const { return m_targetPercentHasBeenSet; }
    inline void SetTargetPercent(int value) { m_targetPercentHasBeenSet = true; m_targetPercent = value; }
    inline EcsCapacityIncreaseConfiguration& WithTargetPercent(int value) { SetTargetPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring approach specified for the configuration, for example,
     * <code>Most_Recent</code>.</p>
     */
    inline EcsCapacityMonitoringApproach GetCapacityMonitoringApproach() const { return m_capacityMonitoringApproach; }
    inline bool CapacityMonitoringApproachHasBeenSet() const { return m_capacityMonitoringApproachHasBeenSet; }
    inline void SetCapacityMonitoringApproach(EcsCapacityMonitoringApproach value) { m_capacityMonitoringApproachHasBeenSet = true; m_capacityMonitoringApproach = value; }
    inline EcsCapacityIncreaseConfiguration& WithCapacityMonitoringApproach(EcsCapacityMonitoringApproach value) { SetCapacityMonitoringApproach(value); return *this;}
    ///@}
  private:

    int m_timeoutMinutes{0};
    bool m_timeoutMinutesHasBeenSet = false;

    Aws::Vector<Service> m_services;
    bool m_servicesHasBeenSet = false;

    EcsUngraceful m_ungraceful;
    bool m_ungracefulHasBeenSet = false;

    int m_targetPercent{0};
    bool m_targetPercentHasBeenSet = false;

    EcsCapacityMonitoringApproach m_capacityMonitoringApproach{EcsCapacityMonitoringApproach::NOT_SET};
    bool m_capacityMonitoringApproachHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
