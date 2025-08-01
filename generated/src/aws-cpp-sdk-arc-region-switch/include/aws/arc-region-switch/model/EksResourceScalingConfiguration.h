/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/KubernetesResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/EksResourceScalingUngraceful.h>
#include <aws/arc-region-switch/model/EksCapacityMonitoringApproach.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/arc-region-switch/model/EksCluster.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/KubernetesScalingResource.h>
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
   * <p>The Amazon Web Services EKS resource scaling configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/EksResourceScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class EksResourceScalingConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API EksResourceScalingConfiguration() = default;
    AWS_ARCREGIONSWITCH_API EksResourceScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API EksResourceScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeout value specified for the configuration.</p>
     */
    inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }
    inline EksResourceScalingConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes resource type for the configuration.</p>
     */
    inline const KubernetesResourceType& GetKubernetesResourceType() const { return m_kubernetesResourceType; }
    inline bool KubernetesResourceTypeHasBeenSet() const { return m_kubernetesResourceTypeHasBeenSet; }
    template<typename KubernetesResourceTypeT = KubernetesResourceType>
    void SetKubernetesResourceType(KubernetesResourceTypeT&& value) { m_kubernetesResourceTypeHasBeenSet = true; m_kubernetesResourceType = std::forward<KubernetesResourceTypeT>(value); }
    template<typename KubernetesResourceTypeT = KubernetesResourceType>
    EksResourceScalingConfiguration& WithKubernetesResourceType(KubernetesResourceTypeT&& value) { SetKubernetesResourceType(std::forward<KubernetesResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling resources for the configuration.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, KubernetesScalingResource>>>& GetScalingResources() const { return m_scalingResources; }
    inline bool ScalingResourcesHasBeenSet() const { return m_scalingResourcesHasBeenSet; }
    template<typename ScalingResourcesT = Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, KubernetesScalingResource>>>>
    void SetScalingResources(ScalingResourcesT&& value) { m_scalingResourcesHasBeenSet = true; m_scalingResources = std::forward<ScalingResourcesT>(value); }
    template<typename ScalingResourcesT = Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, KubernetesScalingResource>>>>
    EksResourceScalingConfiguration& WithScalingResources(ScalingResourcesT&& value) { SetScalingResources(std::forward<ScalingResourcesT>(value)); return *this;}
    template<typename ScalingResourcesT = Aws::Map<Aws::String, Aws::Map<Aws::String, KubernetesScalingResource>>>
    EksResourceScalingConfiguration& AddScalingResources(ScalingResourcesT&& value) { m_scalingResourcesHasBeenSet = true; m_scalingResources.emplace_back(std::forward<ScalingResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The clusters for the configuration.</p>
     */
    inline const Aws::Vector<EksCluster>& GetEksClusters() const { return m_eksClusters; }
    inline bool EksClustersHasBeenSet() const { return m_eksClustersHasBeenSet; }
    template<typename EksClustersT = Aws::Vector<EksCluster>>
    void SetEksClusters(EksClustersT&& value) { m_eksClustersHasBeenSet = true; m_eksClusters = std::forward<EksClustersT>(value); }
    template<typename EksClustersT = Aws::Vector<EksCluster>>
    EksResourceScalingConfiguration& WithEksClusters(EksClustersT&& value) { SetEksClusters(std::forward<EksClustersT>(value)); return *this;}
    template<typename EksClustersT = EksCluster>
    EksResourceScalingConfiguration& AddEksClusters(EksClustersT&& value) { m_eksClustersHasBeenSet = true; m_eksClusters.emplace_back(std::forward<EksClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The settings for ungraceful execution.</p>
     */
    inline const EksResourceScalingUngraceful& GetUngraceful() const { return m_ungraceful; }
    inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
    template<typename UngracefulT = EksResourceScalingUngraceful>
    void SetUngraceful(UngracefulT&& value) { m_ungracefulHasBeenSet = true; m_ungraceful = std::forward<UngracefulT>(value); }
    template<typename UngracefulT = EksResourceScalingUngraceful>
    EksResourceScalingConfiguration& WithUngraceful(UngracefulT&& value) { SetUngraceful(std::forward<UngracefulT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target percentage for the configuration.</p>
     */
    inline int GetTargetPercent() const { return m_targetPercent; }
    inline bool TargetPercentHasBeenSet() const { return m_targetPercentHasBeenSet; }
    inline void SetTargetPercent(int value) { m_targetPercentHasBeenSet = true; m_targetPercent = value; }
    inline EksResourceScalingConfiguration& WithTargetPercent(int value) { SetTargetPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring approach for the configuration, that is, whether it was
     * sampled in the last 24 hours or autoscaled in the last 24 hours.</p>
     */
    inline EksCapacityMonitoringApproach GetCapacityMonitoringApproach() const { return m_capacityMonitoringApproach; }
    inline bool CapacityMonitoringApproachHasBeenSet() const { return m_capacityMonitoringApproachHasBeenSet; }
    inline void SetCapacityMonitoringApproach(EksCapacityMonitoringApproach value) { m_capacityMonitoringApproachHasBeenSet = true; m_capacityMonitoringApproach = value; }
    inline EksResourceScalingConfiguration& WithCapacityMonitoringApproach(EksCapacityMonitoringApproach value) { SetCapacityMonitoringApproach(value); return *this;}
    ///@}
  private:

    int m_timeoutMinutes{0};
    bool m_timeoutMinutesHasBeenSet = false;

    KubernetesResourceType m_kubernetesResourceType;
    bool m_kubernetesResourceTypeHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::Map<Aws::String, KubernetesScalingResource>>> m_scalingResources;
    bool m_scalingResourcesHasBeenSet = false;

    Aws::Vector<EksCluster> m_eksClusters;
    bool m_eksClustersHasBeenSet = false;

    EksResourceScalingUngraceful m_ungraceful;
    bool m_ungracefulHasBeenSet = false;

    int m_targetPercent{0};
    bool m_targetPercentHasBeenSet = false;

    EksCapacityMonitoringApproach m_capacityMonitoringApproach{EksCapacityMonitoringApproach::NOT_SET};
    bool m_capacityMonitoringApproachHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
