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
#include <aws/compute-optimizer/model/ECSServiceUtilizationMetric.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendationFindingReasonCode.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendationOption.h>
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
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendation();
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the current ECS service. </p> <p> The
     * following is the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the current ECS service. </p> <p> The
     * following is the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the current ECS service. </p> <p> The
     * following is the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the current ECS service. </p> <p> The
     * following is the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the current ECS service. </p> <p> The
     * following is the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the current ECS service. </p> <p> The
     * following is the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline ECSServiceRecommendation& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the current ECS service. </p> <p> The
     * following is the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline ECSServiceRecommendation& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the current ECS service. </p> <p> The
     * following is the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline ECSServiceRecommendation& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p> The Amazon Web Services account ID of the ECS service. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p> The Amazon Web Services account ID of the ECS service. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p> The Amazon Web Services account ID of the ECS service. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p> The Amazon Web Services account ID of the ECS service. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p> The Amazon Web Services account ID of the ECS service. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p> The Amazon Web Services account ID of the ECS service. </p>
     */
    inline ECSServiceRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p> The Amazon Web Services account ID of the ECS service. </p>
     */
    inline ECSServiceRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account ID of the ECS service. </p>
     */
    inline ECSServiceRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> The configuration of the current ECS service. </p>
     */
    inline const ServiceConfiguration& GetCurrentServiceConfiguration() const{ return m_currentServiceConfiguration; }

    /**
     * <p> The configuration of the current ECS service. </p>
     */
    inline bool CurrentServiceConfigurationHasBeenSet() const { return m_currentServiceConfigurationHasBeenSet; }

    /**
     * <p> The configuration of the current ECS service. </p>
     */
    inline void SetCurrentServiceConfiguration(const ServiceConfiguration& value) { m_currentServiceConfigurationHasBeenSet = true; m_currentServiceConfiguration = value; }

    /**
     * <p> The configuration of the current ECS service. </p>
     */
    inline void SetCurrentServiceConfiguration(ServiceConfiguration&& value) { m_currentServiceConfigurationHasBeenSet = true; m_currentServiceConfiguration = std::move(value); }

    /**
     * <p> The configuration of the current ECS service. </p>
     */
    inline ECSServiceRecommendation& WithCurrentServiceConfiguration(const ServiceConfiguration& value) { SetCurrentServiceConfiguration(value); return *this;}

    /**
     * <p> The configuration of the current ECS service. </p>
     */
    inline ECSServiceRecommendation& WithCurrentServiceConfiguration(ServiceConfiguration&& value) { SetCurrentServiceConfiguration(std::move(value)); return *this;}


    /**
     * <p> An array of objects that describe the utilization metrics of the ECS
     * service. </p>
     */
    inline const Aws::Vector<ECSServiceUtilizationMetric>& GetUtilizationMetrics() const{ return m_utilizationMetrics; }

    /**
     * <p> An array of objects that describe the utilization metrics of the ECS
     * service. </p>
     */
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }

    /**
     * <p> An array of objects that describe the utilization metrics of the ECS
     * service. </p>
     */
    inline void SetUtilizationMetrics(const Aws::Vector<ECSServiceUtilizationMetric>& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = value; }

    /**
     * <p> An array of objects that describe the utilization metrics of the ECS
     * service. </p>
     */
    inline void SetUtilizationMetrics(Aws::Vector<ECSServiceUtilizationMetric>&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::move(value); }

    /**
     * <p> An array of objects that describe the utilization metrics of the ECS
     * service. </p>
     */
    inline ECSServiceRecommendation& WithUtilizationMetrics(const Aws::Vector<ECSServiceUtilizationMetric>& value) { SetUtilizationMetrics(value); return *this;}

    /**
     * <p> An array of objects that describe the utilization metrics of the ECS
     * service. </p>
     */
    inline ECSServiceRecommendation& WithUtilizationMetrics(Aws::Vector<ECSServiceUtilizationMetric>&& value) { SetUtilizationMetrics(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describe the utilization metrics of the ECS
     * service. </p>
     */
    inline ECSServiceRecommendation& AddUtilizationMetrics(const ECSServiceUtilizationMetric& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(value); return *this; }

    /**
     * <p> An array of objects that describe the utilization metrics of the ECS
     * service. </p>
     */
    inline ECSServiceRecommendation& AddUtilizationMetrics(ECSServiceUtilizationMetric&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p> The number of days the ECS service utilization metrics were analyzed. </p>
     */
    inline double GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }

    /**
     * <p> The number of days the ECS service utilization metrics were analyzed. </p>
     */
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }

    /**
     * <p> The number of days the ECS service utilization metrics were analyzed. </p>
     */
    inline void SetLookbackPeriodInDays(double value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }

    /**
     * <p> The number of days the ECS service utilization metrics were analyzed. </p>
     */
    inline ECSServiceRecommendation& WithLookbackPeriodInDays(double value) { SetLookbackPeriodInDays(value); return *this;}


    /**
     * <p> The launch type the ECS service is using. </p>  <p>Compute Optimizer
     * only supports the Fargate launch type.</p> 
     */
    inline const ECSServiceLaunchType& GetLaunchType() const{ return m_launchType; }

    /**
     * <p> The launch type the ECS service is using. </p>  <p>Compute Optimizer
     * only supports the Fargate launch type.</p> 
     */
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }

    /**
     * <p> The launch type the ECS service is using. </p>  <p>Compute Optimizer
     * only supports the Fargate launch type.</p> 
     */
    inline void SetLaunchType(const ECSServiceLaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }

    /**
     * <p> The launch type the ECS service is using. </p>  <p>Compute Optimizer
     * only supports the Fargate launch type.</p> 
     */
    inline void SetLaunchType(ECSServiceLaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }

    /**
     * <p> The launch type the ECS service is using. </p>  <p>Compute Optimizer
     * only supports the Fargate launch type.</p> 
     */
    inline ECSServiceRecommendation& WithLaunchType(const ECSServiceLaunchType& value) { SetLaunchType(value); return *this;}

    /**
     * <p> The launch type the ECS service is using. </p>  <p>Compute Optimizer
     * only supports the Fargate launch type.</p> 
     */
    inline ECSServiceRecommendation& WithLaunchType(ECSServiceLaunchType&& value) { SetLaunchType(std::move(value)); return *this;}


    /**
     * <p> The timestamp of when the ECS service recommendation was last generated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }

    /**
     * <p> The timestamp of when the ECS service recommendation was last generated.
     * </p>
     */
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }

    /**
     * <p> The timestamp of when the ECS service recommendation was last generated.
     * </p>
     */
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }

    /**
     * <p> The timestamp of when the ECS service recommendation was last generated.
     * </p>
     */
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }

    /**
     * <p> The timestamp of when the ECS service recommendation was last generated.
     * </p>
     */
    inline ECSServiceRecommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}

    /**
     * <p> The timestamp of when the ECS service recommendation was last generated.
     * </p>
     */
    inline ECSServiceRecommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}


    /**
     * <p> The finding classification of an ECS service. </p> <p>Findings for ECS
     * services include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code> </b> —
     * When Compute Optimizer detects that there’s not enough memory or CPU, an ECS
     * service is considered under-provisioned. An under-provisioned ECS service might
     * result in poor application performance.</p> </li> <li> <p> <b>
     * <code>Overprovisioned</code> </b> — When Compute Optimizer detects that there’s
     * excessive memory or CPU, an ECS service is considered over-provisioned. An
     * over-provisioned ECS service might result in additional infrastructure costs.
     * </p> </li> <li> <p> <b> <code>Optimized</code> </b> — When both the CPU and
     * memory of your ECS service meet the performance requirements of your workload,
     * the service is considered optimized.</p> </li> </ul>
     */
    inline const ECSServiceRecommendationFinding& GetFinding() const{ return m_finding; }

    /**
     * <p> The finding classification of an ECS service. </p> <p>Findings for ECS
     * services include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code> </b> —
     * When Compute Optimizer detects that there’s not enough memory or CPU, an ECS
     * service is considered under-provisioned. An under-provisioned ECS service might
     * result in poor application performance.</p> </li> <li> <p> <b>
     * <code>Overprovisioned</code> </b> — When Compute Optimizer detects that there’s
     * excessive memory or CPU, an ECS service is considered over-provisioned. An
     * over-provisioned ECS service might result in additional infrastructure costs.
     * </p> </li> <li> <p> <b> <code>Optimized</code> </b> — When both the CPU and
     * memory of your ECS service meet the performance requirements of your workload,
     * the service is considered optimized.</p> </li> </ul>
     */
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }

    /**
     * <p> The finding classification of an ECS service. </p> <p>Findings for ECS
     * services include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code> </b> —
     * When Compute Optimizer detects that there’s not enough memory or CPU, an ECS
     * service is considered under-provisioned. An under-provisioned ECS service might
     * result in poor application performance.</p> </li> <li> <p> <b>
     * <code>Overprovisioned</code> </b> — When Compute Optimizer detects that there’s
     * excessive memory or CPU, an ECS service is considered over-provisioned. An
     * over-provisioned ECS service might result in additional infrastructure costs.
     * </p> </li> <li> <p> <b> <code>Optimized</code> </b> — When both the CPU and
     * memory of your ECS service meet the performance requirements of your workload,
     * the service is considered optimized.</p> </li> </ul>
     */
    inline void SetFinding(const ECSServiceRecommendationFinding& value) { m_findingHasBeenSet = true; m_finding = value; }

    /**
     * <p> The finding classification of an ECS service. </p> <p>Findings for ECS
     * services include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code> </b> —
     * When Compute Optimizer detects that there’s not enough memory or CPU, an ECS
     * service is considered under-provisioned. An under-provisioned ECS service might
     * result in poor application performance.</p> </li> <li> <p> <b>
     * <code>Overprovisioned</code> </b> — When Compute Optimizer detects that there’s
     * excessive memory or CPU, an ECS service is considered over-provisioned. An
     * over-provisioned ECS service might result in additional infrastructure costs.
     * </p> </li> <li> <p> <b> <code>Optimized</code> </b> — When both the CPU and
     * memory of your ECS service meet the performance requirements of your workload,
     * the service is considered optimized.</p> </li> </ul>
     */
    inline void SetFinding(ECSServiceRecommendationFinding&& value) { m_findingHasBeenSet = true; m_finding = std::move(value); }

    /**
     * <p> The finding classification of an ECS service. </p> <p>Findings for ECS
     * services include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code> </b> —
     * When Compute Optimizer detects that there’s not enough memory or CPU, an ECS
     * service is considered under-provisioned. An under-provisioned ECS service might
     * result in poor application performance.</p> </li> <li> <p> <b>
     * <code>Overprovisioned</code> </b> — When Compute Optimizer detects that there’s
     * excessive memory or CPU, an ECS service is considered over-provisioned. An
     * over-provisioned ECS service might result in additional infrastructure costs.
     * </p> </li> <li> <p> <b> <code>Optimized</code> </b> — When both the CPU and
     * memory of your ECS service meet the performance requirements of your workload,
     * the service is considered optimized.</p> </li> </ul>
     */
    inline ECSServiceRecommendation& WithFinding(const ECSServiceRecommendationFinding& value) { SetFinding(value); return *this;}

    /**
     * <p> The finding classification of an ECS service. </p> <p>Findings for ECS
     * services include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code> </b> —
     * When Compute Optimizer detects that there’s not enough memory or CPU, an ECS
     * service is considered under-provisioned. An under-provisioned ECS service might
     * result in poor application performance.</p> </li> <li> <p> <b>
     * <code>Overprovisioned</code> </b> — When Compute Optimizer detects that there’s
     * excessive memory or CPU, an ECS service is considered over-provisioned. An
     * over-provisioned ECS service might result in additional infrastructure costs.
     * </p> </li> <li> <p> <b> <code>Optimized</code> </b> — When both the CPU and
     * memory of your ECS service meet the performance requirements of your workload,
     * the service is considered optimized.</p> </li> </ul>
     */
    inline ECSServiceRecommendation& WithFinding(ECSServiceRecommendationFinding&& value) { SetFinding(std::move(value)); return *this;}


    /**
     * <p> The reason for the finding classification of an ECS service. </p> <p>Finding
     * reason codes for ECS services include:</p> <ul> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The ECS service CPU configuration can be
     * sized up to enhance the performance of your workload. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current service during
     * the look-back period.</p> </li> <li> <p> <b> <code>CPUOverprovisioned</code>
     * </b> — The ECS service CPU configuration can be sized down while still meeting
     * the performance requirements of your workload. This is identified by analyzing
     * the <code>CPUUtilization</code> metric of the current service during the
     * look-back period. </p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code>
     * </b> — The ECS service memory configuration can be sized up to enhance the
     * performance of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b>
     * — The ECS service memory configuration can be sized down while still meeting the
     * performance requirements of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> </ul>
     */
    inline const Aws::Vector<ECSServiceRecommendationFindingReasonCode>& GetFindingReasonCodes() const{ return m_findingReasonCodes; }

    /**
     * <p> The reason for the finding classification of an ECS service. </p> <p>Finding
     * reason codes for ECS services include:</p> <ul> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The ECS service CPU configuration can be
     * sized up to enhance the performance of your workload. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current service during
     * the look-back period.</p> </li> <li> <p> <b> <code>CPUOverprovisioned</code>
     * </b> — The ECS service CPU configuration can be sized down while still meeting
     * the performance requirements of your workload. This is identified by analyzing
     * the <code>CPUUtilization</code> metric of the current service during the
     * look-back period. </p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code>
     * </b> — The ECS service memory configuration can be sized up to enhance the
     * performance of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b>
     * — The ECS service memory configuration can be sized down while still meeting the
     * performance requirements of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> </ul>
     */
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }

    /**
     * <p> The reason for the finding classification of an ECS service. </p> <p>Finding
     * reason codes for ECS services include:</p> <ul> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The ECS service CPU configuration can be
     * sized up to enhance the performance of your workload. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current service during
     * the look-back period.</p> </li> <li> <p> <b> <code>CPUOverprovisioned</code>
     * </b> — The ECS service CPU configuration can be sized down while still meeting
     * the performance requirements of your workload. This is identified by analyzing
     * the <code>CPUUtilization</code> metric of the current service during the
     * look-back period. </p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code>
     * </b> — The ECS service memory configuration can be sized up to enhance the
     * performance of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b>
     * — The ECS service memory configuration can be sized down while still meeting the
     * performance requirements of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> </ul>
     */
    inline void SetFindingReasonCodes(const Aws::Vector<ECSServiceRecommendationFindingReasonCode>& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = value; }

    /**
     * <p> The reason for the finding classification of an ECS service. </p> <p>Finding
     * reason codes for ECS services include:</p> <ul> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The ECS service CPU configuration can be
     * sized up to enhance the performance of your workload. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current service during
     * the look-back period.</p> </li> <li> <p> <b> <code>CPUOverprovisioned</code>
     * </b> — The ECS service CPU configuration can be sized down while still meeting
     * the performance requirements of your workload. This is identified by analyzing
     * the <code>CPUUtilization</code> metric of the current service during the
     * look-back period. </p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code>
     * </b> — The ECS service memory configuration can be sized up to enhance the
     * performance of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b>
     * — The ECS service memory configuration can be sized down while still meeting the
     * performance requirements of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> </ul>
     */
    inline void SetFindingReasonCodes(Aws::Vector<ECSServiceRecommendationFindingReasonCode>&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::move(value); }

    /**
     * <p> The reason for the finding classification of an ECS service. </p> <p>Finding
     * reason codes for ECS services include:</p> <ul> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The ECS service CPU configuration can be
     * sized up to enhance the performance of your workload. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current service during
     * the look-back period.</p> </li> <li> <p> <b> <code>CPUOverprovisioned</code>
     * </b> — The ECS service CPU configuration can be sized down while still meeting
     * the performance requirements of your workload. This is identified by analyzing
     * the <code>CPUUtilization</code> metric of the current service during the
     * look-back period. </p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code>
     * </b> — The ECS service memory configuration can be sized up to enhance the
     * performance of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b>
     * — The ECS service memory configuration can be sized down while still meeting the
     * performance requirements of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> </ul>
     */
    inline ECSServiceRecommendation& WithFindingReasonCodes(const Aws::Vector<ECSServiceRecommendationFindingReasonCode>& value) { SetFindingReasonCodes(value); return *this;}

    /**
     * <p> The reason for the finding classification of an ECS service. </p> <p>Finding
     * reason codes for ECS services include:</p> <ul> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The ECS service CPU configuration can be
     * sized up to enhance the performance of your workload. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current service during
     * the look-back period.</p> </li> <li> <p> <b> <code>CPUOverprovisioned</code>
     * </b> — The ECS service CPU configuration can be sized down while still meeting
     * the performance requirements of your workload. This is identified by analyzing
     * the <code>CPUUtilization</code> metric of the current service during the
     * look-back period. </p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code>
     * </b> — The ECS service memory configuration can be sized up to enhance the
     * performance of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b>
     * — The ECS service memory configuration can be sized down while still meeting the
     * performance requirements of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> </ul>
     */
    inline ECSServiceRecommendation& WithFindingReasonCodes(Aws::Vector<ECSServiceRecommendationFindingReasonCode>&& value) { SetFindingReasonCodes(std::move(value)); return *this;}

    /**
     * <p> The reason for the finding classification of an ECS service. </p> <p>Finding
     * reason codes for ECS services include:</p> <ul> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The ECS service CPU configuration can be
     * sized up to enhance the performance of your workload. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current service during
     * the look-back period.</p> </li> <li> <p> <b> <code>CPUOverprovisioned</code>
     * </b> — The ECS service CPU configuration can be sized down while still meeting
     * the performance requirements of your workload. This is identified by analyzing
     * the <code>CPUUtilization</code> metric of the current service during the
     * look-back period. </p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code>
     * </b> — The ECS service memory configuration can be sized up to enhance the
     * performance of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b>
     * — The ECS service memory configuration can be sized down while still meeting the
     * performance requirements of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> </ul>
     */
    inline ECSServiceRecommendation& AddFindingReasonCodes(const ECSServiceRecommendationFindingReasonCode& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }

    /**
     * <p> The reason for the finding classification of an ECS service. </p> <p>Finding
     * reason codes for ECS services include:</p> <ul> <li> <p> <b>
     * <code>CPUUnderprovisioned</code> </b> — The ECS service CPU configuration can be
     * sized up to enhance the performance of your workload. This is identified by
     * analyzing the <code>CPUUtilization</code> metric of the current service during
     * the look-back period.</p> </li> <li> <p> <b> <code>CPUOverprovisioned</code>
     * </b> — The ECS service CPU configuration can be sized down while still meeting
     * the performance requirements of your workload. This is identified by analyzing
     * the <code>CPUUtilization</code> metric of the current service during the
     * look-back period. </p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code>
     * </b> — The ECS service memory configuration can be sized up to enhance the
     * performance of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b>
     * — The ECS service memory configuration can be sized down while still meeting the
     * performance requirements of your workload. This is identified by analyzing the
     * <code>MemoryUtilization</code> metric of the current service during the
     * look-back period.</p> </li> </ul>
     */
    inline ECSServiceRecommendation& AddFindingReasonCodes(ECSServiceRecommendationFindingReasonCode&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of objects that describe the recommendation options for the ECS
     * service. </p>
     */
    inline const Aws::Vector<ECSServiceRecommendationOption>& GetServiceRecommendationOptions() const{ return m_serviceRecommendationOptions; }

    /**
     * <p> An array of objects that describe the recommendation options for the ECS
     * service. </p>
     */
    inline bool ServiceRecommendationOptionsHasBeenSet() const { return m_serviceRecommendationOptionsHasBeenSet; }

    /**
     * <p> An array of objects that describe the recommendation options for the ECS
     * service. </p>
     */
    inline void SetServiceRecommendationOptions(const Aws::Vector<ECSServiceRecommendationOption>& value) { m_serviceRecommendationOptionsHasBeenSet = true; m_serviceRecommendationOptions = value; }

    /**
     * <p> An array of objects that describe the recommendation options for the ECS
     * service. </p>
     */
    inline void SetServiceRecommendationOptions(Aws::Vector<ECSServiceRecommendationOption>&& value) { m_serviceRecommendationOptionsHasBeenSet = true; m_serviceRecommendationOptions = std::move(value); }

    /**
     * <p> An array of objects that describe the recommendation options for the ECS
     * service. </p>
     */
    inline ECSServiceRecommendation& WithServiceRecommendationOptions(const Aws::Vector<ECSServiceRecommendationOption>& value) { SetServiceRecommendationOptions(value); return *this;}

    /**
     * <p> An array of objects that describe the recommendation options for the ECS
     * service. </p>
     */
    inline ECSServiceRecommendation& WithServiceRecommendationOptions(Aws::Vector<ECSServiceRecommendationOption>&& value) { SetServiceRecommendationOptions(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describe the recommendation options for the ECS
     * service. </p>
     */
    inline ECSServiceRecommendation& AddServiceRecommendationOptions(const ECSServiceRecommendationOption& value) { m_serviceRecommendationOptionsHasBeenSet = true; m_serviceRecommendationOptions.push_back(value); return *this; }

    /**
     * <p> An array of objects that describe the recommendation options for the ECS
     * service. </p>
     */
    inline ECSServiceRecommendation& AddServiceRecommendationOptions(ECSServiceRecommendationOption&& value) { m_serviceRecommendationOptionsHasBeenSet = true; m_serviceRecommendationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p> The risk of the current ECS service not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current service can't meet
     * the performance requirements of its workload. </p>
     */
    inline const CurrentPerformanceRisk& GetCurrentPerformanceRisk() const{ return m_currentPerformanceRisk; }

    /**
     * <p> The risk of the current ECS service not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current service can't meet
     * the performance requirements of its workload. </p>
     */
    inline bool CurrentPerformanceRiskHasBeenSet() const { return m_currentPerformanceRiskHasBeenSet; }

    /**
     * <p> The risk of the current ECS service not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current service can't meet
     * the performance requirements of its workload. </p>
     */
    inline void SetCurrentPerformanceRisk(const CurrentPerformanceRisk& value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = value; }

    /**
     * <p> The risk of the current ECS service not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current service can't meet
     * the performance requirements of its workload. </p>
     */
    inline void SetCurrentPerformanceRisk(CurrentPerformanceRisk&& value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = std::move(value); }

    /**
     * <p> The risk of the current ECS service not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current service can't meet
     * the performance requirements of its workload. </p>
     */
    inline ECSServiceRecommendation& WithCurrentPerformanceRisk(const CurrentPerformanceRisk& value) { SetCurrentPerformanceRisk(value); return *this;}

    /**
     * <p> The risk of the current ECS service not meeting the performance needs of its
     * workloads. The higher the risk, the more likely the current service can't meet
     * the performance requirements of its workload. </p>
     */
    inline ECSServiceRecommendation& WithCurrentPerformanceRisk(CurrentPerformanceRisk&& value) { SetCurrentPerformanceRisk(std::move(value)); return *this;}

  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    ServiceConfiguration m_currentServiceConfiguration;
    bool m_currentServiceConfigurationHasBeenSet = false;

    Aws::Vector<ECSServiceUtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    ECSServiceLaunchType m_launchType;
    bool m_launchTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet = false;

    ECSServiceRecommendationFinding m_finding;
    bool m_findingHasBeenSet = false;

    Aws::Vector<ECSServiceRecommendationFindingReasonCode> m_findingReasonCodes;
    bool m_findingReasonCodesHasBeenSet = false;

    Aws::Vector<ECSServiceRecommendationOption> m_serviceRecommendationOptions;
    bool m_serviceRecommendationOptionsHasBeenSet = false;

    CurrentPerformanceRisk m_currentPerformanceRisk;
    bool m_currentPerformanceRiskHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
