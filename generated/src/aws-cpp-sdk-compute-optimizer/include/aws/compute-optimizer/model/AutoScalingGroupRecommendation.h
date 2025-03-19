/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/Finding.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/AutoScalingGroupConfiguration.h>
#include <aws/compute-optimizer/model/GpuInfo.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/CurrentPerformanceRisk.h>
#include <aws/compute-optimizer/model/EffectiveRecommendationPreferences.h>
#include <aws/compute-optimizer/model/UtilizationMetric.h>
#include <aws/compute-optimizer/model/AutoScalingGroupRecommendationOption.h>
#include <aws/compute-optimizer/model/InferredWorkloadType.h>
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
   * <p>Describes an Auto Scaling group recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/AutoScalingGroupRecommendation">AWS
   * API Reference</a></p>
   */
  class AutoScalingGroupRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupRecommendation() = default;
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AutoScalingGroupRecommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupArn() const { return m_autoScalingGroupArn; }
    inline bool AutoScalingGroupArnHasBeenSet() const { return m_autoScalingGroupArnHasBeenSet; }
    template<typename AutoScalingGroupArnT = Aws::String>
    void SetAutoScalingGroupArn(AutoScalingGroupArnT&& value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn = std::forward<AutoScalingGroupArnT>(value); }
    template<typename AutoScalingGroupArnT = Aws::String>
    AutoScalingGroupRecommendation& WithAutoScalingGroupArn(AutoScalingGroupArnT&& value) { SetAutoScalingGroupArn(std::forward<AutoScalingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    AutoScalingGroupRecommendation& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding classification of the Auto Scaling group.</p> <p>Findings for
     * Auto Scaling groups include:</p> <ul> <li> <p> <b> <code>NotOptimized</code>
     * </b>—An Auto Scaling group is considered not optimized when Compute Optimizer
     * identifies a recommendation that can provide better performance for your
     * workload.</p> </li> <li> <p> <b> <code>Optimized</code> </b>—An Auto Scaling
     * group is considered optimized when Compute Optimizer determines that the group
     * is correctly provisioned to run your workload based on the chosen instance type.
     * For optimized resources, Compute Optimizer might recommend a new generation
     * instance type.</p> </li> </ul>
     */
    inline Finding GetFinding() const { return m_finding; }
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }
    inline void SetFinding(Finding value) { m_findingHasBeenSet = true; m_finding = value; }
    inline AutoScalingGroupRecommendation& WithFinding(Finding value) { SetFinding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the utilization metrics of the Auto Scaling
     * group.</p>
     */
    inline const Aws::Vector<UtilizationMetric>& GetUtilizationMetrics() const { return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    template<typename UtilizationMetricsT = Aws::Vector<UtilizationMetric>>
    void SetUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::forward<UtilizationMetricsT>(value); }
    template<typename UtilizationMetricsT = Aws::Vector<UtilizationMetric>>
    AutoScalingGroupRecommendation& WithUtilizationMetrics(UtilizationMetricsT&& value) { SetUtilizationMetrics(std::forward<UtilizationMetricsT>(value)); return *this;}
    template<typename UtilizationMetricsT = UtilizationMetric>
    AutoScalingGroupRecommendation& AddUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.emplace_back(std::forward<UtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which utilization metrics were analyzed for the Auto
     * Scaling group.</p>
     */
    inline double GetLookBackPeriodInDays() const { return m_lookBackPeriodInDays; }
    inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }
    inline void SetLookBackPeriodInDays(double value) { m_lookBackPeriodInDaysHasBeenSet = true; m_lookBackPeriodInDays = value; }
    inline AutoScalingGroupRecommendation& WithLookBackPeriodInDays(double value) { SetLookBackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the current configuration of the Auto
     * Scaling group.</p>
     */
    inline const AutoScalingGroupConfiguration& GetCurrentConfiguration() const { return m_currentConfiguration; }
    inline bool CurrentConfigurationHasBeenSet() const { return m_currentConfigurationHasBeenSet; }
    template<typename CurrentConfigurationT = AutoScalingGroupConfiguration>
    void SetCurrentConfiguration(CurrentConfigurationT&& value) { m_currentConfigurationHasBeenSet = true; m_currentConfiguration = std::forward<CurrentConfigurationT>(value); }
    template<typename CurrentConfigurationT = AutoScalingGroupConfiguration>
    AutoScalingGroupRecommendation& WithCurrentConfiguration(CurrentConfigurationT&& value) { SetCurrentConfiguration(std::forward<CurrentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the GPU accelerator settings for the current instance type of the
     * Auto Scaling group. </p>
     */
    inline const GpuInfo& GetCurrentInstanceGpuInfo() const { return m_currentInstanceGpuInfo; }
    inline bool CurrentInstanceGpuInfoHasBeenSet() const { return m_currentInstanceGpuInfoHasBeenSet; }
    template<typename CurrentInstanceGpuInfoT = GpuInfo>
    void SetCurrentInstanceGpuInfo(CurrentInstanceGpuInfoT&& value) { m_currentInstanceGpuInfoHasBeenSet = true; m_currentInstanceGpuInfo = std::forward<CurrentInstanceGpuInfoT>(value); }
    template<typename CurrentInstanceGpuInfoT = GpuInfo>
    AutoScalingGroupRecommendation& WithCurrentInstanceGpuInfo(CurrentInstanceGpuInfoT&& value) { SetCurrentInstanceGpuInfo(std::forward<CurrentInstanceGpuInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the recommendation options for the Auto
     * Scaling group.</p>
     */
    inline const Aws::Vector<AutoScalingGroupRecommendationOption>& GetRecommendationOptions() const { return m_recommendationOptions; }
    inline bool RecommendationOptionsHasBeenSet() const { return m_recommendationOptionsHasBeenSet; }
    template<typename RecommendationOptionsT = Aws::Vector<AutoScalingGroupRecommendationOption>>
    void SetRecommendationOptions(RecommendationOptionsT&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions = std::forward<RecommendationOptionsT>(value); }
    template<typename RecommendationOptionsT = Aws::Vector<AutoScalingGroupRecommendationOption>>
    AutoScalingGroupRecommendation& WithRecommendationOptions(RecommendationOptionsT&& value) { SetRecommendationOptions(std::forward<RecommendationOptionsT>(value)); return *this;}
    template<typename RecommendationOptionsT = AutoScalingGroupRecommendationOption>
    AutoScalingGroupRecommendation& AddRecommendationOptions(RecommendationOptionsT&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions.emplace_back(std::forward<RecommendationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Auto Scaling group recommendation was last
     * generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    AutoScalingGroupRecommendation& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The risk of the current Auto Scaling group not meeting the performance needs
     * of its workloads. The higher the risk, the more likely the current Auto Scaling
     * group configuration has insufficient capacity and cannot meet workload
     * requirements.</p>
     */
    inline CurrentPerformanceRisk GetCurrentPerformanceRisk() const { return m_currentPerformanceRisk; }
    inline bool CurrentPerformanceRiskHasBeenSet() const { return m_currentPerformanceRiskHasBeenSet; }
    inline void SetCurrentPerformanceRisk(CurrentPerformanceRisk value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = value; }
    inline AutoScalingGroupRecommendation& WithCurrentPerformanceRisk(CurrentPerformanceRisk value) { SetCurrentPerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the effective recommendation preferences for the
     * Auto Scaling group.</p>
     */
    inline const EffectiveRecommendationPreferences& GetEffectiveRecommendationPreferences() const { return m_effectiveRecommendationPreferences; }
    inline bool EffectiveRecommendationPreferencesHasBeenSet() const { return m_effectiveRecommendationPreferencesHasBeenSet; }
    template<typename EffectiveRecommendationPreferencesT = EffectiveRecommendationPreferences>
    void SetEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = std::forward<EffectiveRecommendationPreferencesT>(value); }
    template<typename EffectiveRecommendationPreferencesT = EffectiveRecommendationPreferences>
    AutoScalingGroupRecommendation& WithEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { SetEffectiveRecommendationPreferences(std::forward<EffectiveRecommendationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The applications that might be running on the instances in the Auto Scaling
     * group as inferred by Compute Optimizer.</p> <p>Compute Optimizer can infer if
     * one of the following applications might be running on the instances:</p> <ul>
     * <li> <p> <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instances.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instances.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instances.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instances.</p> </li> <li> <p> <code>NGINX</code> -
     * Infers that NGINX might be running on the instances.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instances.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instances.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline const Aws::Vector<InferredWorkloadType>& GetInferredWorkloadTypes() const { return m_inferredWorkloadTypes; }
    inline bool InferredWorkloadTypesHasBeenSet() const { return m_inferredWorkloadTypesHasBeenSet; }
    template<typename InferredWorkloadTypesT = Aws::Vector<InferredWorkloadType>>
    void SetInferredWorkloadTypes(InferredWorkloadTypesT&& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = std::forward<InferredWorkloadTypesT>(value); }
    template<typename InferredWorkloadTypesT = Aws::Vector<InferredWorkloadType>>
    AutoScalingGroupRecommendation& WithInferredWorkloadTypes(InferredWorkloadTypesT&& value) { SetInferredWorkloadTypes(std::forward<InferredWorkloadTypesT>(value)); return *this;}
    inline AutoScalingGroupRecommendation& AddInferredWorkloadTypes(InferredWorkloadType value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_autoScalingGroupArn;
    bool m_autoScalingGroupArnHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Finding m_finding{Finding::NOT_SET};
    bool m_findingHasBeenSet = false;

    Aws::Vector<UtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookBackPeriodInDays{0.0};
    bool m_lookBackPeriodInDaysHasBeenSet = false;

    AutoScalingGroupConfiguration m_currentConfiguration;
    bool m_currentConfigurationHasBeenSet = false;

    GpuInfo m_currentInstanceGpuInfo;
    bool m_currentInstanceGpuInfoHasBeenSet = false;

    Aws::Vector<AutoScalingGroupRecommendationOption> m_recommendationOptions;
    bool m_recommendationOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    CurrentPerformanceRisk m_currentPerformanceRisk{CurrentPerformanceRisk::NOT_SET};
    bool m_currentPerformanceRiskHasBeenSet = false;

    EffectiveRecommendationPreferences m_effectiveRecommendationPreferences;
    bool m_effectiveRecommendationPreferencesHasBeenSet = false;

    Aws::Vector<InferredWorkloadType> m_inferredWorkloadTypes;
    bool m_inferredWorkloadTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
