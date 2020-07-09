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
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/UtilizationMetric.h>
#include <aws/compute-optimizer/model/AutoScalingGroupRecommendationOption.h>
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
  class AWS_COMPUTEOPTIMIZER_API AutoScalingGroupRecommendation
  {
  public:
    AutoScalingGroupRecommendation();
    AutoScalingGroupRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AutoScalingGroupRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID of the Auto Scaling group.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the Auto Scaling group.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID of the Auto Scaling group.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID of the Auto Scaling group.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID of the Auto Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID of the Auto Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the Auto Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupArn() const{ return m_autoScalingGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupArnHasBeenSet() const { return m_autoScalingGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupArn(const Aws::String& value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupArn(Aws::String&& value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupArn(const char* value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithAutoScalingGroupArn(const Aws::String& value) { SetAutoScalingGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithAutoScalingGroupArn(Aws::String&& value) { SetAutoScalingGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithAutoScalingGroupArn(const char* value) { SetAutoScalingGroupArn(value); return *this;}


    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The finding classification for the Auto Scaling group.</p> <p>Findings for
     * Auto Scaling groups include:</p> <ul> <li> <p> <b> <code>NotOptimized</code>
     * </b>—An Auto Scaling group is considered not optimized when AWS Compute
     * Optimizer identifies a recommendation that can provide better performance for
     * your workload.</p> </li> <li> <p> <b> <code>Optimized</code> </b>—An Auto
     * Scaling group is considered optimized when Compute Optimizer determines that the
     * group is correctly provisioned to run your workload based on the chosen instance
     * type. For optimized resources, Compute Optimizer might recommend a new
     * generation instance type.</p> </li> </ul>  <p>The values that are returned
     * might be <code>NOT_OPTIMIZED</code> or <code>OPTIMIZED</code>.</p> 
     */
    inline const Finding& GetFinding() const{ return m_finding; }

    /**
     * <p>The finding classification for the Auto Scaling group.</p> <p>Findings for
     * Auto Scaling groups include:</p> <ul> <li> <p> <b> <code>NotOptimized</code>
     * </b>—An Auto Scaling group is considered not optimized when AWS Compute
     * Optimizer identifies a recommendation that can provide better performance for
     * your workload.</p> </li> <li> <p> <b> <code>Optimized</code> </b>—An Auto
     * Scaling group is considered optimized when Compute Optimizer determines that the
     * group is correctly provisioned to run your workload based on the chosen instance
     * type. For optimized resources, Compute Optimizer might recommend a new
     * generation instance type.</p> </li> </ul>  <p>The values that are returned
     * might be <code>NOT_OPTIMIZED</code> or <code>OPTIMIZED</code>.</p> 
     */
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }

    /**
     * <p>The finding classification for the Auto Scaling group.</p> <p>Findings for
     * Auto Scaling groups include:</p> <ul> <li> <p> <b> <code>NotOptimized</code>
     * </b>—An Auto Scaling group is considered not optimized when AWS Compute
     * Optimizer identifies a recommendation that can provide better performance for
     * your workload.</p> </li> <li> <p> <b> <code>Optimized</code> </b>—An Auto
     * Scaling group is considered optimized when Compute Optimizer determines that the
     * group is correctly provisioned to run your workload based on the chosen instance
     * type. For optimized resources, Compute Optimizer might recommend a new
     * generation instance type.</p> </li> </ul>  <p>The values that are returned
     * might be <code>NOT_OPTIMIZED</code> or <code>OPTIMIZED</code>.</p> 
     */
    inline void SetFinding(const Finding& value) { m_findingHasBeenSet = true; m_finding = value; }

    /**
     * <p>The finding classification for the Auto Scaling group.</p> <p>Findings for
     * Auto Scaling groups include:</p> <ul> <li> <p> <b> <code>NotOptimized</code>
     * </b>—An Auto Scaling group is considered not optimized when AWS Compute
     * Optimizer identifies a recommendation that can provide better performance for
     * your workload.</p> </li> <li> <p> <b> <code>Optimized</code> </b>—An Auto
     * Scaling group is considered optimized when Compute Optimizer determines that the
     * group is correctly provisioned to run your workload based on the chosen instance
     * type. For optimized resources, Compute Optimizer might recommend a new
     * generation instance type.</p> </li> </ul>  <p>The values that are returned
     * might be <code>NOT_OPTIMIZED</code> or <code>OPTIMIZED</code>.</p> 
     */
    inline void SetFinding(Finding&& value) { m_findingHasBeenSet = true; m_finding = std::move(value); }

    /**
     * <p>The finding classification for the Auto Scaling group.</p> <p>Findings for
     * Auto Scaling groups include:</p> <ul> <li> <p> <b> <code>NotOptimized</code>
     * </b>—An Auto Scaling group is considered not optimized when AWS Compute
     * Optimizer identifies a recommendation that can provide better performance for
     * your workload.</p> </li> <li> <p> <b> <code>Optimized</code> </b>—An Auto
     * Scaling group is considered optimized when Compute Optimizer determines that the
     * group is correctly provisioned to run your workload based on the chosen instance
     * type. For optimized resources, Compute Optimizer might recommend a new
     * generation instance type.</p> </li> </ul>  <p>The values that are returned
     * might be <code>NOT_OPTIMIZED</code> or <code>OPTIMIZED</code>.</p> 
     */
    inline AutoScalingGroupRecommendation& WithFinding(const Finding& value) { SetFinding(value); return *this;}

    /**
     * <p>The finding classification for the Auto Scaling group.</p> <p>Findings for
     * Auto Scaling groups include:</p> <ul> <li> <p> <b> <code>NotOptimized</code>
     * </b>—An Auto Scaling group is considered not optimized when AWS Compute
     * Optimizer identifies a recommendation that can provide better performance for
     * your workload.</p> </li> <li> <p> <b> <code>Optimized</code> </b>—An Auto
     * Scaling group is considered optimized when Compute Optimizer determines that the
     * group is correctly provisioned to run your workload based on the chosen instance
     * type. For optimized resources, Compute Optimizer might recommend a new
     * generation instance type.</p> </li> </ul>  <p>The values that are returned
     * might be <code>NOT_OPTIMIZED</code> or <code>OPTIMIZED</code>.</p> 
     */
    inline AutoScalingGroupRecommendation& WithFinding(Finding&& value) { SetFinding(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the utilization metrics of the Auto Scaling
     * group.</p>
     */
    inline const Aws::Vector<UtilizationMetric>& GetUtilizationMetrics() const{ return m_utilizationMetrics; }

    /**
     * <p>An array of objects that describe the utilization metrics of the Auto Scaling
     * group.</p>
     */
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }

    /**
     * <p>An array of objects that describe the utilization metrics of the Auto Scaling
     * group.</p>
     */
    inline void SetUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = value; }

    /**
     * <p>An array of objects that describe the utilization metrics of the Auto Scaling
     * group.</p>
     */
    inline void SetUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::move(value); }

    /**
     * <p>An array of objects that describe the utilization metrics of the Auto Scaling
     * group.</p>
     */
    inline AutoScalingGroupRecommendation& WithUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { SetUtilizationMetrics(value); return *this;}

    /**
     * <p>An array of objects that describe the utilization metrics of the Auto Scaling
     * group.</p>
     */
    inline AutoScalingGroupRecommendation& WithUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { SetUtilizationMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the utilization metrics of the Auto Scaling
     * group.</p>
     */
    inline AutoScalingGroupRecommendation& AddUtilizationMetrics(const UtilizationMetric& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the utilization metrics of the Auto Scaling
     * group.</p>
     */
    inline AutoScalingGroupRecommendation& AddUtilizationMetrics(UtilizationMetric&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of days for which utilization metrics were analyzed for the Auto
     * Scaling group.</p>
     */
    inline double GetLookBackPeriodInDays() const{ return m_lookBackPeriodInDays; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the Auto
     * Scaling group.</p>
     */
    inline bool LookBackPeriodInDaysHasBeenSet() const { return m_lookBackPeriodInDaysHasBeenSet; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the Auto
     * Scaling group.</p>
     */
    inline void SetLookBackPeriodInDays(double value) { m_lookBackPeriodInDaysHasBeenSet = true; m_lookBackPeriodInDays = value; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the Auto
     * Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithLookBackPeriodInDays(double value) { SetLookBackPeriodInDays(value); return *this;}


    /**
     * <p>An array of objects that describe the current configuration of the Auto
     * Scaling group.</p>
     */
    inline const AutoScalingGroupConfiguration& GetCurrentConfiguration() const{ return m_currentConfiguration; }

    /**
     * <p>An array of objects that describe the current configuration of the Auto
     * Scaling group.</p>
     */
    inline bool CurrentConfigurationHasBeenSet() const { return m_currentConfigurationHasBeenSet; }

    /**
     * <p>An array of objects that describe the current configuration of the Auto
     * Scaling group.</p>
     */
    inline void SetCurrentConfiguration(const AutoScalingGroupConfiguration& value) { m_currentConfigurationHasBeenSet = true; m_currentConfiguration = value; }

    /**
     * <p>An array of objects that describe the current configuration of the Auto
     * Scaling group.</p>
     */
    inline void SetCurrentConfiguration(AutoScalingGroupConfiguration&& value) { m_currentConfigurationHasBeenSet = true; m_currentConfiguration = std::move(value); }

    /**
     * <p>An array of objects that describe the current configuration of the Auto
     * Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithCurrentConfiguration(const AutoScalingGroupConfiguration& value) { SetCurrentConfiguration(value); return *this;}

    /**
     * <p>An array of objects that describe the current configuration of the Auto
     * Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithCurrentConfiguration(AutoScalingGroupConfiguration&& value) { SetCurrentConfiguration(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the recommendation options for the Auto
     * Scaling group.</p>
     */
    inline const Aws::Vector<AutoScalingGroupRecommendationOption>& GetRecommendationOptions() const{ return m_recommendationOptions; }

    /**
     * <p>An array of objects that describe the recommendation options for the Auto
     * Scaling group.</p>
     */
    inline bool RecommendationOptionsHasBeenSet() const { return m_recommendationOptionsHasBeenSet; }

    /**
     * <p>An array of objects that describe the recommendation options for the Auto
     * Scaling group.</p>
     */
    inline void SetRecommendationOptions(const Aws::Vector<AutoScalingGroupRecommendationOption>& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions = value; }

    /**
     * <p>An array of objects that describe the recommendation options for the Auto
     * Scaling group.</p>
     */
    inline void SetRecommendationOptions(Aws::Vector<AutoScalingGroupRecommendationOption>&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions = std::move(value); }

    /**
     * <p>An array of objects that describe the recommendation options for the Auto
     * Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithRecommendationOptions(const Aws::Vector<AutoScalingGroupRecommendationOption>& value) { SetRecommendationOptions(value); return *this;}

    /**
     * <p>An array of objects that describe the recommendation options for the Auto
     * Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& WithRecommendationOptions(Aws::Vector<AutoScalingGroupRecommendationOption>&& value) { SetRecommendationOptions(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the recommendation options for the Auto
     * Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& AddRecommendationOptions(const AutoScalingGroupRecommendationOption& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the recommendation options for the Auto
     * Scaling group.</p>
     */
    inline AutoScalingGroupRecommendation& AddRecommendationOptions(AutoScalingGroupRecommendationOption&& value) { m_recommendationOptionsHasBeenSet = true; m_recommendationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The time stamp of when the Auto Scaling group recommendation was last
     * refreshed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }

    /**
     * <p>The time stamp of when the Auto Scaling group recommendation was last
     * refreshed.</p>
     */
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }

    /**
     * <p>The time stamp of when the Auto Scaling group recommendation was last
     * refreshed.</p>
     */
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }

    /**
     * <p>The time stamp of when the Auto Scaling group recommendation was last
     * refreshed.</p>
     */
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }

    /**
     * <p>The time stamp of when the Auto Scaling group recommendation was last
     * refreshed.</p>
     */
    inline AutoScalingGroupRecommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}

    /**
     * <p>The time stamp of when the Auto Scaling group recommendation was last
     * refreshed.</p>
     */
    inline AutoScalingGroupRecommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_autoScalingGroupArn;
    bool m_autoScalingGroupArnHasBeenSet;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    Finding m_finding;
    bool m_findingHasBeenSet;

    Aws::Vector<UtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet;

    double m_lookBackPeriodInDays;
    bool m_lookBackPeriodInDaysHasBeenSet;

    AutoScalingGroupConfiguration m_currentConfiguration;
    bool m_currentConfigurationHasBeenSet;

    Aws::Vector<AutoScalingGroupRecommendationOption> m_recommendationOptions;
    bool m_recommendationOptionsHasBeenSet;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
