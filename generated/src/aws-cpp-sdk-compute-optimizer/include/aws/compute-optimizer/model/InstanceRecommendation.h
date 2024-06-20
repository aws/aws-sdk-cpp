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
    AWS_COMPUTEOPTIMIZER_API InstanceRecommendation();
    AWS_COMPUTEOPTIMIZER_API InstanceRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API InstanceRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline InstanceRecommendation& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline InstanceRecommendation& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline InstanceRecommendation& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the instance.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline InstanceRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline InstanceRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline InstanceRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the current instance.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline InstanceRecommendation& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline InstanceRecommendation& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline InstanceRecommendation& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the current instance.</p>
     */
    inline const Aws::String& GetCurrentInstanceType() const{ return m_currentInstanceType; }
    inline bool CurrentInstanceTypeHasBeenSet() const { return m_currentInstanceTypeHasBeenSet; }
    inline void SetCurrentInstanceType(const Aws::String& value) { m_currentInstanceTypeHasBeenSet = true; m_currentInstanceType = value; }
    inline void SetCurrentInstanceType(Aws::String&& value) { m_currentInstanceTypeHasBeenSet = true; m_currentInstanceType = std::move(value); }
    inline void SetCurrentInstanceType(const char* value) { m_currentInstanceTypeHasBeenSet = true; m_currentInstanceType.assign(value); }
    inline InstanceRecommendation& WithCurrentInstanceType(const Aws::String& value) { SetCurrentInstanceType(value); return *this;}
    inline InstanceRecommendation& WithCurrentInstanceType(Aws::String&& value) { SetCurrentInstanceType(std::move(value)); return *this;}
    inline InstanceRecommendation& WithCurrentInstanceType(const char* value) { SetCurrentInstanceType(value); return *this;}
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
     * infrastructure cost.</p> </li> <li> <p> <b> <code>Optimized</code> </b>—An
     * instance is considered optimized when all specifications of your instance, such
     * as CPU, memory, and network, meet the performance requirements of your workload
     * and is not over provisioned. For optimized resources, Compute Optimizer might
     * recommend a new generation instance type.</p> </li> </ul>  <p>The valid
     * values in your API responses appear as OVER_PROVISIONED, UNDER_PROVISIONED, or
     * OPTIMIZED.</p> 
     */
    inline const Finding& GetFinding() const{ return m_finding; }
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }
    inline void SetFinding(const Finding& value) { m_findingHasBeenSet = true; m_finding = value; }
    inline void SetFinding(Finding&& value) { m_findingHasBeenSet = true; m_finding = std::move(value); }
    inline InstanceRecommendation& WithFinding(const Finding& value) { SetFinding(value); return *this;}
    inline InstanceRecommendation& WithFinding(Finding&& value) { SetFinding(std::move(value)); return *this;}
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
    inline const Aws::Vector<InstanceRecommendationFindingReasonCode>& GetFindingReasonCodes() const{ return m_findingReasonCodes; }
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }
    inline void SetFindingReasonCodes(const Aws::Vector<InstanceRecommendationFindingReasonCode>& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = value; }
    inline void SetFindingReasonCodes(Aws::Vector<InstanceRecommendationFindingReasonCode>&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::move(value); }
    inline InstanceRecommendation& WithFindingReasonCodes(const Aws::Vector<InstanceRecommendationFindingReasonCode>& value) { SetFindingReasonCodes(value); return *this;}
    inline InstanceRecommendation& WithFindingReasonCodes(Aws::Vector<InstanceRecommendationFindingReasonCode>&& value) { SetFindingReasonCodes(std::move(value)); return *this;}
    inline InstanceRecommendation& AddFindingReasonCodes(const InstanceRecommendationFindingReasonCode& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }
    inline InstanceRecommendation& AddFindingReasonCodes(InstanceRecommendationFindingReasonCode&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline const Aws::Vector<UtilizationMetric>& GetUtilizationMetrics() const{ return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    inline void SetUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = value; }
    inline void SetUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::move(value); }
    inline InstanceRecommendation& WithUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { SetUtilizationMetrics(value); return *this;}
    inline InstanceRecommendation& WithUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { SetUtilizationMetrics(std::move(value)); return *this;}
    inline InstanceRecommendation& AddUtilizationMetrics(const UtilizationMetric& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(value); return *this; }
    inline InstanceRecommendation& AddUtilizationMetrics(UtilizationMetric&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * instance.</p>
     */
    inline double GetLookBackPeriodInDays() const{ return m_lookBackPeriodInDays; }
    inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }
    inline void SetLookBackPeriodInDays(double value) { m_lookBackPeriodInDaysHasBeenSet = true; m_lookBackPeriodInDays = value; }
    inline InstanceRecommendation& WithLookBackPeriodInDays(double value) { SetLookBackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline const Aws::Vector<InstanceRecommendationOption>& GetRecommendationOptions() const{ return m_recommendationOptions; }
    inline bool RecommendationOptionsHasBeenSet() const { return m_recommendationOptionsHasBeenSet; }
    inline void SetRecommendationOptions(const Aws::Vector<InstanceRecommendationOption>& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions = value; }
    inline void SetRecommendationOptions(Aws::Vector<InstanceRecommendationOption>&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions = std::move(value); }
    inline InstanceRecommendation& WithRecommendationOptions(const Aws::Vector<InstanceRecommendationOption>& value) { SetRecommendationOptions(value); return *this;}
    inline InstanceRecommendation& WithRecommendationOptions(Aws::Vector<InstanceRecommendationOption>&& value) { SetRecommendationOptions(std::move(value)); return *this;}
    inline InstanceRecommendation& AddRecommendationOptions(const InstanceRecommendationOption& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions.push_back(value); return *this; }
    inline InstanceRecommendation& AddRecommendationOptions(InstanceRecommendationOption&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline const Aws::Vector<RecommendationSource>& GetRecommendationSources() const{ return m_recommendationSources; }
    inline bool RecommendationSourcesHasBeenSet() const { return m_recommendationSourcesHasBeenSet; }
    inline void SetRecommendationSources(const Aws::Vector<RecommendationSource>& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources = value; }
    inline void SetRecommendationSources(Aws::Vector<RecommendationSource>&& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources = std::move(value); }
    inline InstanceRecommendation& WithRecommendationSources(const Aws::Vector<RecommendationSource>& value) { SetRecommendationSources(value); return *this;}
    inline InstanceRecommendation& WithRecommendationSources(Aws::Vector<RecommendationSource>&& value) { SetRecommendationSources(std::move(value)); return *this;}
    inline InstanceRecommendation& AddRecommendationSources(const RecommendationSource& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources.push_back(value); return *this; }
    inline InstanceRecommendation& AddRecommendationSources(RecommendationSource&& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the instance recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }
    inline InstanceRecommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}
    inline InstanceRecommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The risk of the current instance not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current instance cannot meet
     * the performance requirements of its workload.</p>
     */
    inline const CurrentPerformanceRisk& GetCurrentPerformanceRisk() const{ return m_currentPerformanceRisk; }
    inline bool CurrentPerformanceRiskHasBeenSet() const { return m_currentPerformanceRiskHasBeenSet; }
    inline void SetCurrentPerformanceRisk(const CurrentPerformanceRisk& value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = value; }
    inline void SetCurrentPerformanceRisk(CurrentPerformanceRisk&& value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = std::move(value); }
    inline InstanceRecommendation& WithCurrentPerformanceRisk(const CurrentPerformanceRisk& value) { SetCurrentPerformanceRisk(value); return *this;}
    inline InstanceRecommendation& WithCurrentPerformanceRisk(CurrentPerformanceRisk&& value) { SetCurrentPerformanceRisk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the effective recommendation preferences for the
     * instance.</p>
     */
    inline const EffectiveRecommendationPreferences& GetEffectiveRecommendationPreferences() const{ return m_effectiveRecommendationPreferences; }
    inline bool EffectiveRecommendationPreferencesHasBeenSet() const { return m_effectiveRecommendationPreferencesHasBeenSet; }
    inline void SetEffectiveRecommendationPreferences(const EffectiveRecommendationPreferences& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = value; }
    inline void SetEffectiveRecommendationPreferences(EffectiveRecommendationPreferences&& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = std::move(value); }
    inline InstanceRecommendation& WithEffectiveRecommendationPreferences(const EffectiveRecommendationPreferences& value) { SetEffectiveRecommendationPreferences(value); return *this;}
    inline InstanceRecommendation& WithEffectiveRecommendationPreferences(EffectiveRecommendationPreferences&& value) { SetEffectiveRecommendationPreferences(std::move(value)); return *this;}
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
    inline const Aws::Vector<InferredWorkloadType>& GetInferredWorkloadTypes() const{ return m_inferredWorkloadTypes; }
    inline bool InferredWorkloadTypesHasBeenSet() const { return m_inferredWorkloadTypesHasBeenSet; }
    inline void SetInferredWorkloadTypes(const Aws::Vector<InferredWorkloadType>& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = value; }
    inline void SetInferredWorkloadTypes(Aws::Vector<InferredWorkloadType>&& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = std::move(value); }
    inline InstanceRecommendation& WithInferredWorkloadTypes(const Aws::Vector<InferredWorkloadType>& value) { SetInferredWorkloadTypes(value); return *this;}
    inline InstanceRecommendation& WithInferredWorkloadTypes(Aws::Vector<InferredWorkloadType>&& value) { SetInferredWorkloadTypes(std::move(value)); return *this;}
    inline InstanceRecommendation& AddInferredWorkloadTypes(const InferredWorkloadType& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes.push_back(value); return *this; }
    inline InstanceRecommendation& AddInferredWorkloadTypes(InferredWorkloadType&& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The state of the instance when the recommendation was generated. </p>
     */
    inline const InstanceState& GetInstanceState() const{ return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    inline void SetInstanceState(const InstanceState& value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }
    inline void SetInstanceState(InstanceState&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::move(value); }
    inline InstanceRecommendation& WithInstanceState(const InstanceState& value) { SetInstanceState(value); return *this;}
    inline InstanceRecommendation& WithInstanceState(InstanceState&& value) { SetInstanceState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags assigned to your Amazon EC2 instance recommendations. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InstanceRecommendation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline InstanceRecommendation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline InstanceRecommendation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline InstanceRecommendation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An object that describes Compute Optimizer's integration status with your
     * external metrics provider. </p>
     */
    inline const ExternalMetricStatus& GetExternalMetricStatus() const{ return m_externalMetricStatus; }
    inline bool ExternalMetricStatusHasBeenSet() const { return m_externalMetricStatusHasBeenSet; }
    inline void SetExternalMetricStatus(const ExternalMetricStatus& value) { m_externalMetricStatusHasBeenSet = true; m_externalMetricStatus = value; }
    inline void SetExternalMetricStatus(ExternalMetricStatus&& value) { m_externalMetricStatusHasBeenSet = true; m_externalMetricStatus = std::move(value); }
    inline InstanceRecommendation& WithExternalMetricStatus(const ExternalMetricStatus& value) { SetExternalMetricStatus(value); return *this;}
    inline InstanceRecommendation& WithExternalMetricStatus(ExternalMetricStatus&& value) { SetExternalMetricStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the GPU accelerator settings for the current instance type. </p>
     */
    inline const GpuInfo& GetCurrentInstanceGpuInfo() const{ return m_currentInstanceGpuInfo; }
    inline bool CurrentInstanceGpuInfoHasBeenSet() const { return m_currentInstanceGpuInfoHasBeenSet; }
    inline void SetCurrentInstanceGpuInfo(const GpuInfo& value) { m_currentInstanceGpuInfoHasBeenSet = true; m_currentInstanceGpuInfo = value; }
    inline void SetCurrentInstanceGpuInfo(GpuInfo&& value) { m_currentInstanceGpuInfoHasBeenSet = true; m_currentInstanceGpuInfo = std::move(value); }
    inline InstanceRecommendation& WithCurrentInstanceGpuInfo(const GpuInfo& value) { SetCurrentInstanceGpuInfo(value); return *this;}
    inline InstanceRecommendation& WithCurrentInstanceGpuInfo(GpuInfo&& value) { SetCurrentInstanceGpuInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes if an Amazon EC2 instance is idle. </p>
     */
    inline const InstanceIdle& GetIdle() const{ return m_idle; }
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }
    inline void SetIdle(const InstanceIdle& value) { m_idleHasBeenSet = true; m_idle = value; }
    inline void SetIdle(InstanceIdle&& value) { m_idleHasBeenSet = true; m_idle = std::move(value); }
    inline InstanceRecommendation& WithIdle(const InstanceIdle& value) { SetIdle(value); return *this;}
    inline InstanceRecommendation& WithIdle(InstanceIdle&& value) { SetIdle(std::move(value)); return *this;}
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

    Finding m_finding;
    bool m_findingHasBeenSet = false;

    Aws::Vector<InstanceRecommendationFindingReasonCode> m_findingReasonCodes;
    bool m_findingReasonCodesHasBeenSet = false;

    Aws::Vector<UtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookBackPeriodInDays;
    bool m_lookBackPeriodInDaysHasBeenSet = false;

    Aws::Vector<InstanceRecommendationOption> m_recommendationOptions;
    bool m_recommendationOptionsHasBeenSet = false;

    Aws::Vector<RecommendationSource> m_recommendationSources;
    bool m_recommendationSourcesHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet = false;

    CurrentPerformanceRisk m_currentPerformanceRisk;
    bool m_currentPerformanceRiskHasBeenSet = false;

    EffectiveRecommendationPreferences m_effectiveRecommendationPreferences;
    bool m_effectiveRecommendationPreferencesHasBeenSet = false;

    Aws::Vector<InferredWorkloadType> m_inferredWorkloadTypes;
    bool m_inferredWorkloadTypesHasBeenSet = false;

    InstanceState m_instanceState;
    bool m_instanceStateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ExternalMetricStatus m_externalMetricStatus;
    bool m_externalMetricStatusHasBeenSet = false;

    GpuInfo m_currentInstanceGpuInfo;
    bool m_currentInstanceGpuInfoHasBeenSet = false;

    InstanceIdle m_idle;
    bool m_idleHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
