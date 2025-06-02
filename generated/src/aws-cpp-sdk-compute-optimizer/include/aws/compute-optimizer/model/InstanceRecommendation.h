/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/Finding.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/CurrentPerformanceRisk.h>
#include <aws/compute-optimizer/model/EffectiveRecommendationPreferences.h>
#include <aws/compute-optimizer/model/InstanceState.h>
#include <aws/compute-optimizer/model/ExternalMetricStatus.h>
#include <aws/compute-optimizer/model/GpuInfo.h>
#include <aws/compute-optimizer/model/InstanceIdle.h>
#include <aws/compute-optimizer/model/InstanceRecommendationFindingReasonCode.h>
#include <aws/compute-optimizer/model/UtilizationMetric.h>
#include <aws/compute-optimizer/model/InstanceRecommendationOption.h>
#include <aws/compute-optimizer/model/RecommendationSource.h>
#include <aws/compute-optimizer/model/InferredWorkloadType.h>
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
   * <p>Describes an Amazon EC2 instance recommendation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/InstanceRecommendation">AWS
   * API Reference</a></p>
   */
  class InstanceRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API InstanceRecommendation() = default;
    AWS_COMPUTEOPTIMIZER_API InstanceRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API InstanceRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    InstanceRecommendation& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the instance.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    InstanceRecommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the current instance.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    InstanceRecommendation& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the current instance.</p>
     */
    inline const Aws::String& GetCurrentInstanceType() const { return m_currentInstanceType; }
    inline bool CurrentInstanceTypeHasBeenSet() const { return m_currentInstanceTypeHasBeenSet; }
    template<typename CurrentInstanceTypeT = Aws::String>
    void SetCurrentInstanceType(CurrentInstanceTypeT&& value) { m_currentInstanceTypeHasBeenSet = true; m_currentInstanceType = std::forward<CurrentInstanceTypeT>(value); }
    template<typename CurrentInstanceTypeT = Aws::String>
    InstanceRecommendation& WithCurrentInstanceType(CurrentInstanceTypeT&& value) { SetCurrentInstanceType(std::forward<CurrentInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding classification of the instance.</p> <p>Findings for instances
     * include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code> </b>—An instance is
     * considered under-provisioned when at least one specification of your instance,
     * such as CPU, memory, or network, does not meet the performance requirements of
     * your workload. Under-provisioned instances may lead to poor application
     * performance.</p> </li> <li> <p> <b> <code>Overprovisioned</code> </b>—An
     * instance is considered over-provisioned when at least one specification of your
     * instance, such as CPU, memory, or network, can be sized down while still meeting
     * the performance requirements of your workload, and no specification is
     * under-provisioned. Over-provisioned instances may lead to unnecessary
     * infrastructure cost.</p> </li> <li> <p> <b> <code>Optimized</code> </b>���An
     * instance is considered optimized when all specifications of your instance, such
     * as CPU, memory, and network, meet the performance requirements of your workload
     * and is not over provisioned. For optimized resources, Compute Optimizer might
     * recommend a new generation instance type.</p> </li> </ul>  <p>The valid
     * values in your API responses appear as OVER_PROVISIONED, UNDER_PROVISIONED, or
     * OPTIMIZED.</p> 
     */
    inline Finding GetFinding() const { return m_finding; }
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }
    inline void SetFinding(Finding value) { m_findingHasBeenSet = true; m_finding = value; }
    inline InstanceRecommendation& WithFinding(Finding value) { SetFinding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the finding classification of the instance.</p> <p>Finding
     * reason codes for instances include:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your workload.
     * This is identified by analyzing the <code>CPUUtilization</code> metric of the
     * current instance during the look-back period.</p> </li> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The instance’s CPU configuration doesn't
     * meet the performance requirements of your workload and there is an alternative
     * instance type that provides better CPU performance. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current instance during
     * the look-back period.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code>
     * </b> — The instance’s memory configuration can be sized down while still meeting
     * the performance requirements of your workload. This is identified by analyzing
     * the memory utilization metric of the current instance during the look-back
     * period.</p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b> — The
     * instance’s memory configuration doesn't meet the performance requirements of
     * your workload and there is an alternative instance type that provides better
     * memory performance. This is identified by analyzing the memory utilization
     * metric of the current instance during the look-back period.</p>  <p>Memory
     * utilization is analyzed only for resources that have the unified CloudWatch
     * agent installed on them. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * memory utilization with the Amazon CloudWatch Agent</a> in the <i>Compute
     * Optimizer User Guide</i>. On Linux instances, Compute Optimizer analyses the
     * <code>mem_used_percent</code> metric in the <code>CWAgent</code> namespace, or
     * the legacy <code>MemoryUtilization</code> metric in the
     * <code>System/Linux</code> namespace. On Windows instances, Compute Optimizer
     * analyses the <code>Memory % Committed Bytes In Use</code> metric in the
     * <code>CWAgent</code> namespace.</p>  </li> <li> <p> <b>
     * <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload. This is identified by analyzing the
     * <code>VolumeReadBytes</code> and <code>VolumeWriteBytes</code> metrics of EBS
     * volumes attached to the current instance during the look-back period.</p> </li>
     * <li> <p> <b> <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s
     * EBS throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better EBS
     * throughput performance. This is identified by analyzing the
     * <code>VolumeReadBytes</code> and <code>VolumeWriteBytes</code> metrics of EBS
     * volumes attached to the current instance during the look-back period.</p> </li>
     * <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload. This is identified by analyzing the <code>VolumeReadOps</code>
     * and <code>VolumeWriteOps</code> metric of EBS volumes attached to the current
     * instance during the look-back period.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS performance.
     * This is identified by analyzing the <code>VolumeReadOps</code> and
     * <code>VolumeWriteOps</code> metric of EBS volumes attached to the current
     * instance during the look-back period.</p> </li> <li> <p> <b>
     * <code>NetworkBandwidthOverprovisioned</code> </b> — The instance’s network
     * bandwidth configuration can be sized down while still meeting the performance
     * requirements of your workload. This is identified by analyzing the
     * <code>NetworkIn</code> and <code>NetworkOut</code> metrics of the current
     * instance during the look-back period.</p> </li> <li> <p> <b>
     * <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This is identified by analyzing the
     * <code>NetworkIn</code> and <code>NetworkOut</code> metrics of the current
     * instance during the look-back period. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload. This is
     * identified by analyzing the <code>NetworkPacketsIn</code> and
     * <code>NetworkPacketsIn</code> metrics of the current instance during the
     * look-back period.</p> </li> <li> <p> <b> <code>NetworkPPSUnderprovisioned</code>
     * </b> — The instance’s network PPS (packets per second) configuration doesn't
     * meet the performance requirements of your workload and there is an alternative
     * instance type that provides better network PPS performance. This is identified
     * by analyzing the <code>NetworkPacketsIn</code> and <code>NetworkPacketsIn</code>
     * metrics of the current instance during the look-back period.</p> </li> <li> <p>
     * <b> <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload. This is identified by analyzing the <code>DiskReadOps</code>
     * and <code>DiskWriteOps</code> metrics of the current instance during the
     * look-back period.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance. This is identified by analyzing the
     * <code>DiskReadOps</code> and <code>DiskWriteOps</code> metrics of the current
     * instance during the look-back period.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload. This is identified by analyzing the <code>DiskReadBytes</code>
     * and <code>DiskWriteBytes</code> metrics of the current instance during the
     * look-back period.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance. This is identified by analyzing the
     * <code>DiskReadBytes</code> and <code>DiskWriteBytes</code> metrics of the
     * current instance during the look-back period.</p> </li> </ul>  <p>For more
     * information about instance metrics, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/viewing_metrics_with_cloudwatch.html">List
     * the available CloudWatch metrics for your instances</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>. For more information about EBS volume metrics, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cloudwatch_ebs.html">Amazon
     * CloudWatch metrics for Amazon EBS</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>.</p> 
     */
    inline const Aws::Vector<InstanceRecommendationFindingReasonCode>& GetFindingReasonCodes() const { return m_findingReasonCodes; }
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }
    template<typename FindingReasonCodesT = Aws::Vector<InstanceRecommendationFindingReasonCode>>
    void SetFindingReasonCodes(FindingReasonCodesT&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::forward<FindingReasonCodesT>(value); }
    template<typename FindingReasonCodesT = Aws::Vector<InstanceRecommendationFindingReasonCode>>
    InstanceRecommendation& WithFindingReasonCodes(FindingReasonCodesT&& value) { SetFindingReasonCodes(std::forward<FindingReasonCodesT>(value)); return *this;}
    inline InstanceRecommendation& AddFindingReasonCodes(InstanceRecommendationFindingReasonCode value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline const Aws::Vector<UtilizationMetric>& GetUtilizationMetrics() const { return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    template<typename UtilizationMetricsT = Aws::Vector<UtilizationMetric>>
    void SetUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::forward<UtilizationMetricsT>(value); }
    template<typename UtilizationMetricsT = Aws::Vector<UtilizationMetric>>
    InstanceRecommendation& WithUtilizationMetrics(UtilizationMetricsT&& value) { SetUtilizationMetrics(std::forward<UtilizationMetricsT>(value)); return *this;}
    template<typename UtilizationMetricsT = UtilizationMetric>
    InstanceRecommendation& AddUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.emplace_back(std::forward<UtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * instance.</p>
     */
    inline double GetLookBackPeriodInDays() const { return m_lookBackPeriodInDays; }
    inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }
    inline void SetLookBackPeriodInDays(double value) { m_lookBackPeriodInDaysHasBeenSet = true; m_lookBackPeriodInDays = value; }
    inline InstanceRecommendation& WithLookBackPeriodInDays(double value) { SetLookBackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline const Aws::Vector<InstanceRecommendationOption>& GetRecommendationOptions() const { return m_recommendationOptions; }
    inline bool RecommendationOptionsHasBeenSet() const { return m_recommendationOptionsHasBeenSet; }
    template<typename RecommendationOptionsT = Aws::Vector<InstanceRecommendationOption>>
    void SetRecommendationOptions(RecommendationOptionsT&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions = std::forward<RecommendationOptionsT>(value); }
    template<typename RecommendationOptionsT = Aws::Vector<InstanceRecommendationOption>>
    InstanceRecommendation& WithRecommendationOptions(RecommendationOptionsT&& value) { SetRecommendationOptions(std::forward<RecommendationOptionsT>(value)); return *this;}
    template<typename RecommendationOptionsT = InstanceRecommendationOption>
    InstanceRecommendation& AddRecommendationOptions(RecommendationOptionsT&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions.emplace_back(std::forward<RecommendationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline const Aws::Vector<RecommendationSource>& GetRecommendationSources() const { return m_recommendationSources; }
    inline bool RecommendationSourcesHasBeenSet() const { return m_recommendationSourcesHasBeenSet; }
    template<typename RecommendationSourcesT = Aws::Vector<RecommendationSource>>
    void SetRecommendationSources(RecommendationSourcesT&& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources = std::forward<RecommendationSourcesT>(value); }
    template<typename RecommendationSourcesT = Aws::Vector<RecommendationSource>>
    InstanceRecommendation& WithRecommendationSources(RecommendationSourcesT&& value) { SetRecommendationSources(std::forward<RecommendationSourcesT>(value)); return *this;}
    template<typename RecommendationSourcesT = RecommendationSource>
    InstanceRecommendation& AddRecommendationSources(RecommendationSourcesT&& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources.emplace_back(std::forward<RecommendationSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the instance recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    InstanceRecommendation& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The risk of the current instance not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current instance cannot meet
     * the performance requirements of its workload.</p>
     */
    inline CurrentPerformanceRisk GetCurrentPerformanceRisk() const { return m_currentPerformanceRisk; }
    inline bool CurrentPerformanceRiskHasBeenSet() const { return m_currentPerformanceRiskHasBeenSet; }
    inline void SetCurrentPerformanceRisk(CurrentPerformanceRisk value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = value; }
    inline InstanceRecommendation& WithCurrentPerformanceRisk(CurrentPerformanceRisk value) { SetCurrentPerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the effective recommendation preferences for the
     * instance.</p>
     */
    inline const EffectiveRecommendationPreferences& GetEffectiveRecommendationPreferences() const { return m_effectiveRecommendationPreferences; }
    inline bool EffectiveRecommendationPreferencesHasBeenSet() const { return m_effectiveRecommendationPreferencesHasBeenSet; }
    template<typename EffectiveRecommendationPreferencesT = EffectiveRecommendationPreferences>
    void SetEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = std::forward<EffectiveRecommendationPreferencesT>(value); }
    template<typename EffectiveRecommendationPreferencesT = EffectiveRecommendationPreferences>
    InstanceRecommendation& WithEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { SetEffectiveRecommendationPreferences(std::forward<EffectiveRecommendationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The applications that might be running on the instance as inferred by Compute
     * Optimizer.</p> <p>Compute Optimizer can infer if one of the following
     * applications might be running on the instance:</p> <ul> <li> <p>
     * <code>AmazonEmr</code> - Infers that Amazon EMR might be running on the
     * instance.</p> </li> <li> <p> <code>ApacheCassandra</code> - Infers that Apache
     * Cassandra might be running on the instance.</p> </li> <li> <p>
     * <code>ApacheHadoop</code> - Infers that Apache Hadoop might be running on the
     * instance.</p> </li> <li> <p> <code>Memcached</code> - Infers that Memcached
     * might be running on the instance.</p> </li> <li> <p> <code>NGINX</code> - Infers
     * that NGINX might be running on the instance.</p> </li> <li> <p>
     * <code>PostgreSql</code> - Infers that PostgreSQL might be running on the
     * instance.</p> </li> <li> <p> <code>Redis</code> - Infers that Redis might be
     * running on the instance.</p> </li> <li> <p> <code>Kafka</code> - Infers that
     * Kafka might be running on the instance.</p> </li> <li> <p>
     * <code>SQLServer</code> - Infers that SQLServer might be running on the
     * instance.</p> </li> </ul>
     */
    inline const Aws::Vector<InferredWorkloadType>& GetInferredWorkloadTypes() const { return m_inferredWorkloadTypes; }
    inline bool InferredWorkloadTypesHasBeenSet() const { return m_inferredWorkloadTypesHasBeenSet; }
    template<typename InferredWorkloadTypesT = Aws::Vector<InferredWorkloadType>>
    void SetInferredWorkloadTypes(InferredWorkloadTypesT&& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = std::forward<InferredWorkloadTypesT>(value); }
    template<typename InferredWorkloadTypesT = Aws::Vector<InferredWorkloadType>>
    InstanceRecommendation& WithInferredWorkloadTypes(InferredWorkloadTypesT&& value) { SetInferredWorkloadTypes(std::forward<InferredWorkloadTypesT>(value)); return *this;}
    inline InstanceRecommendation& AddInferredWorkloadTypes(InferredWorkloadType value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The state of the instance when the recommendation was generated. </p>
     */
    inline InstanceState GetInstanceState() const { return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    inline void SetInstanceState(InstanceState value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }
    inline InstanceRecommendation& WithInstanceState(InstanceState value) { SetInstanceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags assigned to your Amazon EC2 instance recommendations. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    InstanceRecommendation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    InstanceRecommendation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An object that describes Compute Optimizer's integration status with your
     * external metrics provider. </p>
     */
    inline const ExternalMetricStatus& GetExternalMetricStatus() const { return m_externalMetricStatus; }
    inline bool ExternalMetricStatusHasBeenSet() const { return m_externalMetricStatusHasBeenSet; }
    template<typename ExternalMetricStatusT = ExternalMetricStatus>
    void SetExternalMetricStatus(ExternalMetricStatusT&& value) { m_externalMetricStatusHasBeenSet = true; m_externalMetricStatus = std::forward<ExternalMetricStatusT>(value); }
    template<typename ExternalMetricStatusT = ExternalMetricStatus>
    InstanceRecommendation& WithExternalMetricStatus(ExternalMetricStatusT&& value) { SetExternalMetricStatus(std::forward<ExternalMetricStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the GPU accelerator settings for the current instance type. </p>
     */
    inline const GpuInfo& GetCurrentInstanceGpuInfo() const { return m_currentInstanceGpuInfo; }
    inline bool CurrentInstanceGpuInfoHasBeenSet() const { return m_currentInstanceGpuInfoHasBeenSet; }
    template<typename CurrentInstanceGpuInfoT = GpuInfo>
    void SetCurrentInstanceGpuInfo(CurrentInstanceGpuInfoT&& value) { m_currentInstanceGpuInfoHasBeenSet = true; m_currentInstanceGpuInfo = std::forward<CurrentInstanceGpuInfoT>(value); }
    template<typename CurrentInstanceGpuInfoT = GpuInfo>
    InstanceRecommendation& WithCurrentInstanceGpuInfo(CurrentInstanceGpuInfoT&& value) { SetCurrentInstanceGpuInfo(std::forward<CurrentInstanceGpuInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes if an Amazon EC2 instance is idle. </p>
     */
    inline InstanceIdle GetIdle() const { return m_idle; }
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }
    inline void SetIdle(InstanceIdle value) { m_idleHasBeenSet = true; m_idle = value; }
    inline InstanceRecommendation& WithIdle(InstanceIdle value) { SetIdle(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_currentInstanceType;
    bool m_currentInstanceTypeHasBeenSet = false;

    Finding m_finding{Finding::NOT_SET};
    bool m_findingHasBeenSet = false;

    Aws::Vector<InstanceRecommendationFindingReasonCode> m_findingReasonCodes;
    bool m_findingReasonCodesHasBeenSet = false;

    Aws::Vector<UtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookBackPeriodInDays{0.0};
    bool m_lookBackPeriodInDaysHasBeenSet = false;

    Aws::Vector<InstanceRecommendationOption> m_recommendationOptions;
    bool m_recommendationOptionsHasBeenSet = false;

    Aws::Vector<RecommendationSource> m_recommendationSources;
    bool m_recommendationSourcesHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    CurrentPerformanceRisk m_currentPerformanceRisk{CurrentPerformanceRisk::NOT_SET};
    bool m_currentPerformanceRiskHasBeenSet = false;

    EffectiveRecommendationPreferences m_effectiveRecommendationPreferences;
    bool m_effectiveRecommendationPreferencesHasBeenSet = false;

    Aws::Vector<InferredWorkloadType> m_inferredWorkloadTypes;
    bool m_inferredWorkloadTypesHasBeenSet = false;

    InstanceState m_instanceState{InstanceState::NOT_SET};
    bool m_instanceStateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ExternalMetricStatus m_externalMetricStatus;
    bool m_externalMetricStatusHasBeenSet = false;

    GpuInfo m_currentInstanceGpuInfo;
    bool m_currentInstanceGpuInfoHasBeenSet = false;

    InstanceIdle m_idle{InstanceIdle::NOT_SET};
    bool m_idleHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
