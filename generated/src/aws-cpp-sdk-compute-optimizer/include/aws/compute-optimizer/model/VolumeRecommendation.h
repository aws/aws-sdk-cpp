/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/VolumeConfiguration.h>
#include <aws/compute-optimizer/model/EBSFinding.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/CurrentPerformanceRisk.h>
#include <aws/compute-optimizer/model/EBSEffectiveRecommendationPreferences.h>
#include <aws/compute-optimizer/model/EBSUtilizationMetric.h>
#include <aws/compute-optimizer/model/VolumeRecommendationOption.h>
#include <aws/compute-optimizer/model/Tag.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes an Amazon Elastic Block Store (Amazon EBS) volume
   * recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/VolumeRecommendation">AWS
   * API Reference</a></p>
   */
  class VolumeRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API VolumeRecommendation() = default;
    AWS_COMPUTEOPTIMIZER_API VolumeRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API VolumeRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the current volume.</p>
     */
    inline const Aws::String& GetVolumeArn() const { return m_volumeArn; }
    inline bool VolumeArnHasBeenSet() const { return m_volumeArnHasBeenSet; }
    template<typename VolumeArnT = Aws::String>
    void SetVolumeArn(VolumeArnT&& value) { m_volumeArnHasBeenSet = true; m_volumeArn = std::forward<VolumeArnT>(value); }
    template<typename VolumeArnT = Aws::String>
    VolumeRecommendation& WithVolumeArn(VolumeArnT&& value) { SetVolumeArn(std::forward<VolumeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the volume.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    VolumeRecommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the current configuration of the
     * volume.</p>
     */
    inline const VolumeConfiguration& GetCurrentConfiguration() const { return m_currentConfiguration; }
    inline bool CurrentConfigurationHasBeenSet() const { return m_currentConfigurationHasBeenSet; }
    template<typename CurrentConfigurationT = VolumeConfiguration>
    void SetCurrentConfiguration(CurrentConfigurationT&& value) { m_currentConfigurationHasBeenSet = true; m_currentConfiguration = std::forward<CurrentConfigurationT>(value); }
    template<typename CurrentConfigurationT = VolumeConfiguration>
    VolumeRecommendation& WithCurrentConfiguration(CurrentConfigurationT&& value) { SetCurrentConfiguration(std::forward<CurrentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding classification of the volume.</p> <p>Findings for volumes
     * include:</p> <ul> <li> <p> <b> <code>NotOptimized</code> </b>—A volume is
     * considered not optimized when Compute Optimizer identifies a recommendation that
     * can provide better performance for your workload.</p> </li> <li> <p> <b>
     * <code>Optimized</code> </b>—An volume is considered optimized when Compute
     * Optimizer determines that the volume is correctly provisioned to run your
     * workload based on the chosen volume type. For optimized resources, Compute
     * Optimizer might recommend a new generation volume type.</p> </li> </ul>
     */
    inline EBSFinding GetFinding() const { return m_finding; }
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }
    inline void SetFinding(EBSFinding value) { m_findingHasBeenSet = true; m_finding = value; }
    inline VolumeRecommendation& WithFinding(EBSFinding value) { SetFinding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the utilization metrics of the volume.</p>
     */
    inline const Aws::Vector<EBSUtilizationMetric>& GetUtilizationMetrics() const { return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    template<typename UtilizationMetricsT = Aws::Vector<EBSUtilizationMetric>>
    void SetUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::forward<UtilizationMetricsT>(value); }
    template<typename UtilizationMetricsT = Aws::Vector<EBSUtilizationMetric>>
    VolumeRecommendation& WithUtilizationMetrics(UtilizationMetricsT&& value) { SetUtilizationMetrics(std::forward<UtilizationMetricsT>(value)); return *this;}
    template<typename UtilizationMetricsT = EBSUtilizationMetric>
    VolumeRecommendation& AddUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.emplace_back(std::forward<UtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * volume.</p>
     */
    inline double GetLookBackPeriodInDays() const { return m_lookBackPeriodInDays; }
    inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }
    inline void SetLookBackPeriodInDays(double value) { m_lookBackPeriodInDaysHasBeenSet = true; m_lookBackPeriodInDays = value; }
    inline VolumeRecommendation& WithLookBackPeriodInDays(double value) { SetLookBackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the recommendation options for the
     * volume.</p>
     */
    inline const Aws::Vector<VolumeRecommendationOption>& GetVolumeRecommendationOptions() const { return m_volumeRecommendationOptions; }
    inline bool VolumeRecommendationOptionsHasBeenSet() const { return m_volumeRecommendationOptionsHasBeenSet; }
    template<typename VolumeRecommendationOptionsT = Aws::Vector<VolumeRecommendationOption>>
    void SetVolumeRecommendationOptions(VolumeRecommendationOptionsT&& value) { m_volumeRecommendationOptionsHasBeenSet = true; m_volumeRecommendationOptions = std::forward<VolumeRecommendationOptionsT>(value); }
    template<typename VolumeRecommendationOptionsT = Aws::Vector<VolumeRecommendationOption>>
    VolumeRecommendation& WithVolumeRecommendationOptions(VolumeRecommendationOptionsT&& value) { SetVolumeRecommendationOptions(std::forward<VolumeRecommendationOptionsT>(value)); return *this;}
    template<typename VolumeRecommendationOptionsT = VolumeRecommendationOption>
    VolumeRecommendation& AddVolumeRecommendationOptions(VolumeRecommendationOptionsT&& value) { m_volumeRecommendationOptionsHasBeenSet = true; m_volumeRecommendationOptions.emplace_back(std::forward<VolumeRecommendationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the volume recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    VolumeRecommendation& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The risk of the current EBS volume not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current EBS volume doesn't
     * have sufficient capacity.</p>
     */
    inline CurrentPerformanceRisk GetCurrentPerformanceRisk() const { return m_currentPerformanceRisk; }
    inline bool CurrentPerformanceRiskHasBeenSet() const { return m_currentPerformanceRiskHasBeenSet; }
    inline void SetCurrentPerformanceRisk(CurrentPerformanceRisk value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = value; }
    inline VolumeRecommendation& WithCurrentPerformanceRisk(CurrentPerformanceRisk value) { SetCurrentPerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the effective recommendation preferences for Amazon EBS volume.
     * </p>
     */
    inline const EBSEffectiveRecommendationPreferences& GetEffectiveRecommendationPreferences() const { return m_effectiveRecommendationPreferences; }
    inline bool EffectiveRecommendationPreferencesHasBeenSet() const { return m_effectiveRecommendationPreferencesHasBeenSet; }
    template<typename EffectiveRecommendationPreferencesT = EBSEffectiveRecommendationPreferences>
    void SetEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = std::forward<EffectiveRecommendationPreferencesT>(value); }
    template<typename EffectiveRecommendationPreferencesT = EBSEffectiveRecommendationPreferences>
    VolumeRecommendation& WithEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { SetEffectiveRecommendationPreferences(std::forward<EffectiveRecommendationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags assigned to your Amazon EBS volume recommendations. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VolumeRecommendation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VolumeRecommendation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_volumeArn;
    bool m_volumeArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    VolumeConfiguration m_currentConfiguration;
    bool m_currentConfigurationHasBeenSet = false;

    EBSFinding m_finding{EBSFinding::NOT_SET};
    bool m_findingHasBeenSet = false;

    Aws::Vector<EBSUtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookBackPeriodInDays{0.0};
    bool m_lookBackPeriodInDaysHasBeenSet = false;

    Aws::Vector<VolumeRecommendationOption> m_volumeRecommendationOptions;
    bool m_volumeRecommendationOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    CurrentPerformanceRisk m_currentPerformanceRisk{CurrentPerformanceRisk::NOT_SET};
    bool m_currentPerformanceRiskHasBeenSet = false;

    EBSEffectiveRecommendationPreferences m_effectiveRecommendationPreferences;
    bool m_effectiveRecommendationPreferencesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
