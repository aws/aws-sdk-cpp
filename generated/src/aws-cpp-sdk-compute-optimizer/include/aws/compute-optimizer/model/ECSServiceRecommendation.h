/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/ServiceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/ECSServiceLaunchType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendationFinding.h>
#include <aws/compute-optimizer/model/CurrentPerformanceRisk.h>
#include <aws/compute-optimizer/model/ECSEffectiveRecommendationPreferences.h>
#include <aws/compute-optimizer/model/ECSServiceUtilizationMetric.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendationFindingReasonCode.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendationOption.h>
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
   * <p> Describes an Amazon ECS service recommendation. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ECSServiceRecommendation">AWS
   * API Reference</a></p>
   */
  class ECSServiceRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendation() = default;
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the current Amazon ECS service. </p> <p>
     * The following is the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    ECSServiceRecommendation& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID of the Amazon ECS service. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ECSServiceRecommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration of the current Amazon ECS service. </p>
     */
    inline const ServiceConfiguration& GetCurrentServiceConfiguration() const { return m_currentServiceConfiguration; }
    inline bool CurrentServiceConfigurationHasBeenSet() const { return m_currentServiceConfigurationHasBeenSet; }
    template<typename CurrentServiceConfigurationT = ServiceConfiguration>
    void SetCurrentServiceConfiguration(CurrentServiceConfigurationT&& value) { m_currentServiceConfigurationHasBeenSet = true; m_currentServiceConfiguration = std::forward<CurrentServiceConfigurationT>(value); }
    template<typename CurrentServiceConfigurationT = ServiceConfiguration>
    ECSServiceRecommendation& WithCurrentServiceConfiguration(CurrentServiceConfigurationT&& value) { SetCurrentServiceConfiguration(std::forward<CurrentServiceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the utilization metrics of the Amazon ECS
     * service. </p>
     */
    inline const Aws::Vector<ECSServiceUtilizationMetric>& GetUtilizationMetrics() const { return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    template<typename UtilizationMetricsT = Aws::Vector<ECSServiceUtilizationMetric>>
    void SetUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::forward<UtilizationMetricsT>(value); }
    template<typename UtilizationMetricsT = Aws::Vector<ECSServiceUtilizationMetric>>
    ECSServiceRecommendation& WithUtilizationMetrics(UtilizationMetricsT&& value) { SetUtilizationMetrics(std::forward<UtilizationMetricsT>(value)); return *this;}
    template<typename UtilizationMetricsT = ECSServiceUtilizationMetric>
    ECSServiceRecommendation& AddUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.emplace_back(std::forward<UtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The number of days the Amazon ECS service utilization metrics were analyzed.
     * </p>
     */
    inline double GetLookbackPeriodInDays() const { return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(double value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline ECSServiceRecommendation& WithLookbackPeriodInDays(double value) { SetLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The launch type the Amazon ECS service is using. </p>  <p>Compute
     * Optimizer only supports the Fargate launch type.</p> 
     */
    inline ECSServiceLaunchType GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(ECSServiceLaunchType value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline ECSServiceRecommendation& WithLaunchType(ECSServiceLaunchType value) { SetLaunchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the Amazon ECS service recommendation was last
     * generated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    ECSServiceRecommendation& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The finding classification of an Amazon ECS service. </p> <p>Findings for
     * Amazon ECS services include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code>
     * </b> — When Compute Optimizer detects that there’s not enough memory or CPU, an
     * Amazon ECS service is considered under-provisioned. An under-provisioned service
     * might result in poor application performance.</p> </li> <li> <p> <b>
     * <code>Overprovisioned</code> </b> — When Compute Optimizer detects that there’s
     * excessive memory or CPU, an Amazon ECS service is considered over-provisioned.
     * An over-provisioned service might result in additional infrastructure costs.
     * </p> </li> <li> <p> <b> <code>Optimized</code> </b> — When both the CPU and
     * memory of your Amazon ECS service meet the performance requirements of your
     * workload, the service is considered optimized.</p> </li> </ul>
     */
    inline ECSServiceRecommendationFinding GetFinding() const { return m_finding; }
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }
    inline void SetFinding(ECSServiceRecommendationFinding value) { m_findingHasBeenSet = true; m_finding = value; }
    inline ECSServiceRecommendation& WithFinding(ECSServiceRecommendationFinding value) { SetFinding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the finding classification of an Amazon ECS service. </p>
     * <p>Finding reason codes for Amazon ECS services include:</p> <ul> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The service CPU configuration can be
     * sized up to enhance the performance of your workload. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current service during
     * the look-back period.</p> </li> <li> <p> <b> <code>CPUOverprovisioned</code>
     * </b> — The service CPU configuration can be sized down while still meeting the
     * performance requirements of your workload. This is identified by analyzing the
     * <code>CPUUtilization</code> metric of the current service during the look-back
     * period. </p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b> — The
     * service memory configuration can be sized up to enhance the performance of your
     * workload. This is identified by analyzing the <code>MemoryUtilization</code>
     * metric of the current service during the look-back period.</p> </li> <li> <p>
     * <b> <code>MemoryOverprovisioned</code> </b> — The service memory configuration
     * can be sized down while still meeting the performance requirements of your
     * workload. This is identified by analyzing the <code>MemoryUtilization</code>
     * metric of the current service during the look-back period.</p> </li> </ul>
     */
    inline const Aws::Vector<ECSServiceRecommendationFindingReasonCode>& GetFindingReasonCodes() const { return m_findingReasonCodes; }
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }
    template<typename FindingReasonCodesT = Aws::Vector<ECSServiceRecommendationFindingReasonCode>>
    void SetFindingReasonCodes(FindingReasonCodesT&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::forward<FindingReasonCodesT>(value); }
    template<typename FindingReasonCodesT = Aws::Vector<ECSServiceRecommendationFindingReasonCode>>
    ECSServiceRecommendation& WithFindingReasonCodes(FindingReasonCodesT&& value) { SetFindingReasonCodes(std::forward<FindingReasonCodesT>(value)); return *this;}
    inline ECSServiceRecommendation& AddFindingReasonCodes(ECSServiceRecommendationFindingReasonCode value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the recommendation options for the Amazon
     * ECS service. </p>
     */
    inline const Aws::Vector<ECSServiceRecommendationOption>& GetServiceRecommendationOptions() const { return m_serviceRecommendationOptions; }
    inline bool ServiceRecommendationOptionsHasBeenSet() const { return m_serviceRecommendationOptionsHasBeenSet; }
    template<typename ServiceRecommendationOptionsT = Aws::Vector<ECSServiceRecommendationOption>>
    void SetServiceRecommendationOptions(ServiceRecommendationOptionsT&& value) { m_serviceRecommendationOptionsHasBeenSet = true; m_serviceRecommendationOptions = std::forward<ServiceRecommendationOptionsT>(value); }
    template<typename ServiceRecommendationOptionsT = Aws::Vector<ECSServiceRecommendationOption>>
    ECSServiceRecommendation& WithServiceRecommendationOptions(ServiceRecommendationOptionsT&& value) { SetServiceRecommendationOptions(std::forward<ServiceRecommendationOptionsT>(value)); return *this;}
    template<typename ServiceRecommendationOptionsT = ECSServiceRecommendationOption>
    ECSServiceRecommendation& AddServiceRecommendationOptions(ServiceRecommendationOptionsT&& value) { m_serviceRecommendationOptionsHasBeenSet = true; m_serviceRecommendationOptions.emplace_back(std::forward<ServiceRecommendationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The risk of the current Amazon ECS service not meeting the performance needs
     * of its workloads. The higher the risk, the more likely the current service can't
     * meet the performance requirements of its workload. </p>
     */
    inline CurrentPerformanceRisk GetCurrentPerformanceRisk() const { return m_currentPerformanceRisk; }
    inline bool CurrentPerformanceRiskHasBeenSet() const { return m_currentPerformanceRiskHasBeenSet; }
    inline void SetCurrentPerformanceRisk(CurrentPerformanceRisk value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = value; }
    inline ECSServiceRecommendation& WithCurrentPerformanceRisk(CurrentPerformanceRisk value) { SetCurrentPerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the effective recommendation preferences for Amazon ECS services.
     * </p>
     */
    inline const ECSEffectiveRecommendationPreferences& GetEffectiveRecommendationPreferences() const { return m_effectiveRecommendationPreferences; }
    inline bool EffectiveRecommendationPreferencesHasBeenSet() const { return m_effectiveRecommendationPreferencesHasBeenSet; }
    template<typename EffectiveRecommendationPreferencesT = ECSEffectiveRecommendationPreferences>
    void SetEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = std::forward<EffectiveRecommendationPreferencesT>(value); }
    template<typename EffectiveRecommendationPreferencesT = ECSEffectiveRecommendationPreferences>
    ECSServiceRecommendation& WithEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { SetEffectiveRecommendationPreferences(std::forward<EffectiveRecommendationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags assigned to your Amazon ECS service recommendations. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ECSServiceRecommendation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ECSServiceRecommendation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    ServiceConfiguration m_currentServiceConfiguration;
    bool m_currentServiceConfigurationHasBeenSet = false;

    Aws::Vector<ECSServiceUtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookbackPeriodInDays{0.0};
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    ECSServiceLaunchType m_launchType{ECSServiceLaunchType::NOT_SET};
    bool m_launchTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    ECSServiceRecommendationFinding m_finding{ECSServiceRecommendationFinding::NOT_SET};
    bool m_findingHasBeenSet = false;

    Aws::Vector<ECSServiceRecommendationFindingReasonCode> m_findingReasonCodes;
    bool m_findingReasonCodesHasBeenSet = false;

    Aws::Vector<ECSServiceRecommendationOption> m_serviceRecommendationOptions;
    bool m_serviceRecommendationOptionsHasBeenSet = false;

    CurrentPerformanceRisk m_currentPerformanceRisk{CurrentPerformanceRisk::NOT_SET};
    bool m_currentPerformanceRiskHasBeenSet = false;

    ECSEffectiveRecommendationPreferences m_effectiveRecommendationPreferences;
    bool m_effectiveRecommendationPreferencesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
