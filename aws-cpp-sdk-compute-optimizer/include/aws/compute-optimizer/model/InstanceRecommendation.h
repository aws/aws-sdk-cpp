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
#include <aws/compute-optimizer/model/UtilizationMetric.h>
#include <aws/compute-optimizer/model/InstanceRecommendationOption.h>
#include <aws/compute-optimizer/model/RecommendationSource.h>
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
  class AWS_COMPUTEOPTIMIZER_API InstanceRecommendation
  {
  public:
    InstanceRecommendation();
    InstanceRecommendation(Aws::Utils::Json::JsonView jsonValue);
    InstanceRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline InstanceRecommendation& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline InstanceRecommendation& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the current instance.</p>
     */
    inline InstanceRecommendation& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>The AWS account ID of the instance.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID of the instance.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the instance.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID of the instance.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID of the instance.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID of the instance.</p>
     */
    inline InstanceRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID of the instance.</p>
     */
    inline InstanceRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the instance.</p>
     */
    inline InstanceRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the current instance.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the current instance.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the current instance.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the current instance.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the current instance.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the current instance.</p>
     */
    inline InstanceRecommendation& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the current instance.</p>
     */
    inline InstanceRecommendation& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the current instance.</p>
     */
    inline InstanceRecommendation& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>The instance type of the current instance.</p>
     */
    inline const Aws::String& GetCurrentInstanceType() const{ return m_currentInstanceType; }

    /**
     * <p>The instance type of the current instance.</p>
     */
    inline bool CurrentInstanceTypeHasBeenSet() const { return m_currentInstanceTypeHasBeenSet; }

    /**
     * <p>The instance type of the current instance.</p>
     */
    inline void SetCurrentInstanceType(const Aws::String& value) { m_currentInstanceTypeHasBeenSet = true; m_currentInstanceType = value; }

    /**
     * <p>The instance type of the current instance.</p>
     */
    inline void SetCurrentInstanceType(Aws::String&& value) { m_currentInstanceTypeHasBeenSet = true; m_currentInstanceType = std::move(value); }

    /**
     * <p>The instance type of the current instance.</p>
     */
    inline void SetCurrentInstanceType(const char* value) { m_currentInstanceTypeHasBeenSet = true; m_currentInstanceType.assign(value); }

    /**
     * <p>The instance type of the current instance.</p>
     */
    inline InstanceRecommendation& WithCurrentInstanceType(const Aws::String& value) { SetCurrentInstanceType(value); return *this;}

    /**
     * <p>The instance type of the current instance.</p>
     */
    inline InstanceRecommendation& WithCurrentInstanceType(Aws::String&& value) { SetCurrentInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type of the current instance.</p>
     */
    inline InstanceRecommendation& WithCurrentInstanceType(const char* value) { SetCurrentInstanceType(value); return *this;}


    /**
     * <p>The finding classification for the instance.</p> <p>Findings for instances
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
     * and is not over provisioned. An optimized instance runs your workloads with
     * optimal performance and infrastructure cost. For optimized resources, AWS
     * Compute Optimizer might recommend a new generation instance type.</p> </li>
     * </ul>  <p>The values that are returned might be
     * <code>UNDER_PROVISIONED</code>, <code>OVER_PROVISIONED</code>, or
     * <code>OPTIMIZED</code>.</p> 
     */
    inline const Finding& GetFinding() const{ return m_finding; }

    /**
     * <p>The finding classification for the instance.</p> <p>Findings for instances
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
     * and is not over provisioned. An optimized instance runs your workloads with
     * optimal performance and infrastructure cost. For optimized resources, AWS
     * Compute Optimizer might recommend a new generation instance type.</p> </li>
     * </ul>  <p>The values that are returned might be
     * <code>UNDER_PROVISIONED</code>, <code>OVER_PROVISIONED</code>, or
     * <code>OPTIMIZED</code>.</p> 
     */
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }

    /**
     * <p>The finding classification for the instance.</p> <p>Findings for instances
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
     * and is not over provisioned. An optimized instance runs your workloads with
     * optimal performance and infrastructure cost. For optimized resources, AWS
     * Compute Optimizer might recommend a new generation instance type.</p> </li>
     * </ul>  <p>The values that are returned might be
     * <code>UNDER_PROVISIONED</code>, <code>OVER_PROVISIONED</code>, or
     * <code>OPTIMIZED</code>.</p> 
     */
    inline void SetFinding(const Finding& value) { m_findingHasBeenSet = true; m_finding = value; }

    /**
     * <p>The finding classification for the instance.</p> <p>Findings for instances
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
     * and is not over provisioned. An optimized instance runs your workloads with
     * optimal performance and infrastructure cost. For optimized resources, AWS
     * Compute Optimizer might recommend a new generation instance type.</p> </li>
     * </ul>  <p>The values that are returned might be
     * <code>UNDER_PROVISIONED</code>, <code>OVER_PROVISIONED</code>, or
     * <code>OPTIMIZED</code>.</p> 
     */
    inline void SetFinding(Finding&& value) { m_findingHasBeenSet = true; m_finding = std::move(value); }

    /**
     * <p>The finding classification for the instance.</p> <p>Findings for instances
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
     * and is not over provisioned. An optimized instance runs your workloads with
     * optimal performance and infrastructure cost. For optimized resources, AWS
     * Compute Optimizer might recommend a new generation instance type.</p> </li>
     * </ul>  <p>The values that are returned might be
     * <code>UNDER_PROVISIONED</code>, <code>OVER_PROVISIONED</code>, or
     * <code>OPTIMIZED</code>.</p> 
     */
    inline InstanceRecommendation& WithFinding(const Finding& value) { SetFinding(value); return *this;}

    /**
     * <p>The finding classification for the instance.</p> <p>Findings for instances
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
     * and is not over provisioned. An optimized instance runs your workloads with
     * optimal performance and infrastructure cost. For optimized resources, AWS
     * Compute Optimizer might recommend a new generation instance type.</p> </li>
     * </ul>  <p>The values that are returned might be
     * <code>UNDER_PROVISIONED</code>, <code>OVER_PROVISIONED</code>, or
     * <code>OPTIMIZED</code>.</p> 
     */
    inline InstanceRecommendation& WithFinding(Finding&& value) { SetFinding(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline const Aws::Vector<UtilizationMetric>& GetUtilizationMetrics() const{ return m_utilizationMetrics; }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline void SetUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = value; }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline void SetUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::move(value); }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline InstanceRecommendation& WithUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { SetUtilizationMetrics(value); return *this;}

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline InstanceRecommendation& WithUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { SetUtilizationMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline InstanceRecommendation& AddUtilizationMetrics(const UtilizationMetric& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * instance.</p>
     */
    inline InstanceRecommendation& AddUtilizationMetrics(UtilizationMetric&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * instance.</p>
     */
    inline double GetLookBackPeriodInDays() const{ return m_lookBackPeriodInDays; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * instance.</p>
     */
    inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * instance.</p>
     */
    inline void SetLookBackPeriodInDays(double value) { m_lookBackPeriodInDaysHasBeenSet = true; m_lookBackPeriodInDays = value; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * instance.</p>
     */
    inline InstanceRecommendation& WithLookBackPeriodInDays(double value) { SetLookBackPeriodInDays(value); return *this;}


    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline const Aws::Vector<InstanceRecommendationOption>& GetRecommendationOptions() const{ return m_recommendationOptions; }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline bool RecommendationOptionsHasBeenSet() const { return m_recommendationOptionsHasBeenSet; }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline void SetRecommendationOptions(const Aws::Vector<InstanceRecommendationOption>& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions = value; }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline void SetRecommendationOptions(Aws::Vector<InstanceRecommendationOption>&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions = std::move(value); }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline InstanceRecommendation& WithRecommendationOptions(const Aws::Vector<InstanceRecommendationOption>& value) { SetRecommendationOptions(value); return *this;}

    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline InstanceRecommendation& WithRecommendationOptions(Aws::Vector<InstanceRecommendationOption>&& value) { SetRecommendationOptions(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline InstanceRecommendation& AddRecommendationOptions(const InstanceRecommendationOption& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the recommendation options for the
     * instance.</p>
     */
    inline InstanceRecommendation& AddRecommendationOptions(InstanceRecommendationOption&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline const Aws::Vector<RecommendationSource>& GetRecommendationSources() const{ return m_recommendationSources; }

    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline bool RecommendationSourcesHasBeenSet() const { return m_recommendationSourcesHasBeenSet; }

    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline void SetRecommendationSources(const Aws::Vector<RecommendationSource>& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources = value; }

    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline void SetRecommendationSources(Aws::Vector<RecommendationSource>&& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources = std::move(value); }

    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline InstanceRecommendation& WithRecommendationSources(const Aws::Vector<RecommendationSource>& value) { SetRecommendationSources(value); return *this;}

    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline InstanceRecommendation& WithRecommendationSources(Aws::Vector<RecommendationSource>&& value) { SetRecommendationSources(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline InstanceRecommendation& AddRecommendationSources(const RecommendationSource& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the source resource of the
     * recommendation.</p>
     */
    inline InstanceRecommendation& AddRecommendationSources(RecommendationSource&& value) { m_recommendationSourcesHasBeenSet = true; m_recommendationSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The time stamp of when the instance recommendation was last refreshed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }

    /**
     * <p>The time stamp of when the instance recommendation was last refreshed.</p>
     */
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }

    /**
     * <p>The time stamp of when the instance recommendation was last refreshed.</p>
     */
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }

    /**
     * <p>The time stamp of when the instance recommendation was last refreshed.</p>
     */
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }

    /**
     * <p>The time stamp of when the instance recommendation was last refreshed.</p>
     */
    inline InstanceRecommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}

    /**
     * <p>The time stamp of when the instance recommendation was last refreshed.</p>
     */
    inline InstanceRecommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;

    Aws::String m_currentInstanceType;
    bool m_currentInstanceTypeHasBeenSet;

    Finding m_finding;
    bool m_findingHasBeenSet;

    Aws::Vector<UtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet;

    double m_lookBackPeriodInDays;
    bool m_lookBackPeriodInDaysHasBeenSet;

    Aws::Vector<InstanceRecommendationOption> m_recommendationOptions;
    bool m_recommendationOptionsHasBeenSet;

    Aws::Vector<RecommendationSource> m_recommendationSources;
    bool m_recommendationSourcesHasBeenSet;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
