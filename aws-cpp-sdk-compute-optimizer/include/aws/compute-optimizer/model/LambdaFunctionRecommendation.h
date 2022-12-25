/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/LambdaFunctionRecommendationFinding.h>
#include <aws/compute-optimizer/model/CurrentPerformanceRisk.h>
#include <aws/compute-optimizer/model/LambdaFunctionUtilizationMetric.h>
#include <aws/compute-optimizer/model/LambdaFunctionRecommendationFindingReasonCode.h>
#include <aws/compute-optimizer/model/LambdaFunctionMemoryRecommendationOption.h>
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
   * <p>Describes an Lambda function recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaFunctionRecommendation">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendation();
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the current function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current function.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the current function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the current function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the current function.</p>
     */
    inline LambdaFunctionRecommendation& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the current function.</p>
     */
    inline LambdaFunctionRecommendation& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the current function.</p>
     */
    inline LambdaFunctionRecommendation& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The version number of the current function.</p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>The version number of the current function.</p>
     */
    inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }

    /**
     * <p>The version number of the current function.</p>
     */
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>The version number of the current function.</p>
     */
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::move(value); }

    /**
     * <p>The version number of the current function.</p>
     */
    inline void SetFunctionVersion(const char* value) { m_functionVersionHasBeenSet = true; m_functionVersion.assign(value); }

    /**
     * <p>The version number of the current function.</p>
     */
    inline LambdaFunctionRecommendation& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>The version number of the current function.</p>
     */
    inline LambdaFunctionRecommendation& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the current function.</p>
     */
    inline LambdaFunctionRecommendation& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the function.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the function.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the function.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the function.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the function.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the function.</p>
     */
    inline LambdaFunctionRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the function.</p>
     */
    inline LambdaFunctionRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the function.</p>
     */
    inline LambdaFunctionRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The amount of memory, in MB, that's allocated to the current function.</p>
     */
    inline int GetCurrentMemorySize() const{ return m_currentMemorySize; }

    /**
     * <p>The amount of memory, in MB, that's allocated to the current function.</p>
     */
    inline bool CurrentMemorySizeHasBeenSet() const { return m_currentMemorySizeHasBeenSet; }

    /**
     * <p>The amount of memory, in MB, that's allocated to the current function.</p>
     */
    inline void SetCurrentMemorySize(int value) { m_currentMemorySizeHasBeenSet = true; m_currentMemorySize = value; }

    /**
     * <p>The amount of memory, in MB, that's allocated to the current function.</p>
     */
    inline LambdaFunctionRecommendation& WithCurrentMemorySize(int value) { SetCurrentMemorySize(value); return *this;}


    /**
     * <p>The number of times your function code was applied during the look-back
     * period.</p>
     */
    inline long long GetNumberOfInvocations() const{ return m_numberOfInvocations; }

    /**
     * <p>The number of times your function code was applied during the look-back
     * period.</p>
     */
    inline bool NumberOfInvocationsHasBeenSet() const { return m_numberOfInvocationsHasBeenSet; }

    /**
     * <p>The number of times your function code was applied during the look-back
     * period.</p>
     */
    inline void SetNumberOfInvocations(long long value) { m_numberOfInvocationsHasBeenSet = true; m_numberOfInvocations = value; }

    /**
     * <p>The number of times your function code was applied during the look-back
     * period.</p>
     */
    inline LambdaFunctionRecommendation& WithNumberOfInvocations(long long value) { SetNumberOfInvocations(value); return *this;}


    /**
     * <p>An array of objects that describe the utilization metrics of the
     * function.</p>
     */
    inline const Aws::Vector<LambdaFunctionUtilizationMetric>& GetUtilizationMetrics() const{ return m_utilizationMetrics; }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * function.</p>
     */
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * function.</p>
     */
    inline void SetUtilizationMetrics(const Aws::Vector<LambdaFunctionUtilizationMetric>& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = value; }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * function.</p>
     */
    inline void SetUtilizationMetrics(Aws::Vector<LambdaFunctionUtilizationMetric>&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::move(value); }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * function.</p>
     */
    inline LambdaFunctionRecommendation& WithUtilizationMetrics(const Aws::Vector<LambdaFunctionUtilizationMetric>& value) { SetUtilizationMetrics(value); return *this;}

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * function.</p>
     */
    inline LambdaFunctionRecommendation& WithUtilizationMetrics(Aws::Vector<LambdaFunctionUtilizationMetric>&& value) { SetUtilizationMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * function.</p>
     */
    inline LambdaFunctionRecommendation& AddUtilizationMetrics(const LambdaFunctionUtilizationMetric& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the utilization metrics of the
     * function.</p>
     */
    inline LambdaFunctionRecommendation& AddUtilizationMetrics(LambdaFunctionUtilizationMetric&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * function.</p>
     */
    inline double GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * function.</p>
     */
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * function.</p>
     */
    inline void SetLookbackPeriodInDays(double value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }

    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * function.</p>
     */
    inline LambdaFunctionRecommendation& WithLookbackPeriodInDays(double value) { SetLookbackPeriodInDays(value); return *this;}


    /**
     * <p>The timestamp of when the function recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }

    /**
     * <p>The timestamp of when the function recommendation was last generated.</p>
     */
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when the function recommendation was last generated.</p>
     */
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }

    /**
     * <p>The timestamp of when the function recommendation was last generated.</p>
     */
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the function recommendation was last generated.</p>
     */
    inline LambdaFunctionRecommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the function recommendation was last generated.</p>
     */
    inline LambdaFunctionRecommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}


    /**
     * <p>The finding classification of the function.</p> <p>Findings for functions
     * include:</p> <ul> <li> <p> <b> <code>Optimized</code> </b> — The function is
     * correctly provisioned to run your workload based on its current configuration
     * and its utilization history. This finding classification does not include
     * finding reason codes.</p> </li> <li> <p> <b> <code>NotOptimized</code> </b> —
     * The function is performing at a higher level (over-provisioned) or at a lower
     * level (under-provisioned) than required for your workload because its current
     * configuration is not optimal. Over-provisioned resources might lead to
     * unnecessary infrastructure cost, and under-provisioned resources might lead to
     * poor application performance. This finding classification can include the
     * <code>MemoryUnderprovisioned</code> and <code>MemoryUnderprovisioned</code>
     * finding reason codes.</p> </li> <li> <p> <b> <code>Unavailable</code> </b> —
     * Compute Optimizer was unable to generate a recommendation for the function. This
     * could be because the function has not accumulated sufficient metric data, or the
     * function does not qualify for a recommendation. This finding classification can
     * include the <code>InsufficientData</code> and <code>Inconclusive</code> finding
     * reason codes.</p>  <p>Functions with a finding of unavailable are not
     * returned unless you specify the <code>filter</code> parameter with a value of
     * <code>Unavailable</code> in your <code>GetLambdaFunctionRecommendations</code>
     * request.</p>  </li> </ul>
     */
    inline const LambdaFunctionRecommendationFinding& GetFinding() const{ return m_finding; }

    /**
     * <p>The finding classification of the function.</p> <p>Findings for functions
     * include:</p> <ul> <li> <p> <b> <code>Optimized</code> </b> — The function is
     * correctly provisioned to run your workload based on its current configuration
     * and its utilization history. This finding classification does not include
     * finding reason codes.</p> </li> <li> <p> <b> <code>NotOptimized</code> </b> —
     * The function is performing at a higher level (over-provisioned) or at a lower
     * level (under-provisioned) than required for your workload because its current
     * configuration is not optimal. Over-provisioned resources might lead to
     * unnecessary infrastructure cost, and under-provisioned resources might lead to
     * poor application performance. This finding classification can include the
     * <code>MemoryUnderprovisioned</code> and <code>MemoryUnderprovisioned</code>
     * finding reason codes.</p> </li> <li> <p> <b> <code>Unavailable</code> </b> —
     * Compute Optimizer was unable to generate a recommendation for the function. This
     * could be because the function has not accumulated sufficient metric data, or the
     * function does not qualify for a recommendation. This finding classification can
     * include the <code>InsufficientData</code> and <code>Inconclusive</code> finding
     * reason codes.</p>  <p>Functions with a finding of unavailable are not
     * returned unless you specify the <code>filter</code> parameter with a value of
     * <code>Unavailable</code> in your <code>GetLambdaFunctionRecommendations</code>
     * request.</p>  </li> </ul>
     */
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }

    /**
     * <p>The finding classification of the function.</p> <p>Findings for functions
     * include:</p> <ul> <li> <p> <b> <code>Optimized</code> </b> — The function is
     * correctly provisioned to run your workload based on its current configuration
     * and its utilization history. This finding classification does not include
     * finding reason codes.</p> </li> <li> <p> <b> <code>NotOptimized</code> </b> —
     * The function is performing at a higher level (over-provisioned) or at a lower
     * level (under-provisioned) than required for your workload because its current
     * configuration is not optimal. Over-provisioned resources might lead to
     * unnecessary infrastructure cost, and under-provisioned resources might lead to
     * poor application performance. This finding classification can include the
     * <code>MemoryUnderprovisioned</code> and <code>MemoryUnderprovisioned</code>
     * finding reason codes.</p> </li> <li> <p> <b> <code>Unavailable</code> </b> —
     * Compute Optimizer was unable to generate a recommendation for the function. This
     * could be because the function has not accumulated sufficient metric data, or the
     * function does not qualify for a recommendation. This finding classification can
     * include the <code>InsufficientData</code> and <code>Inconclusive</code> finding
     * reason codes.</p>  <p>Functions with a finding of unavailable are not
     * returned unless you specify the <code>filter</code> parameter with a value of
     * <code>Unavailable</code> in your <code>GetLambdaFunctionRecommendations</code>
     * request.</p>  </li> </ul>
     */
    inline void SetFinding(const LambdaFunctionRecommendationFinding& value) { m_findingHasBeenSet = true; m_finding = value; }

    /**
     * <p>The finding classification of the function.</p> <p>Findings for functions
     * include:</p> <ul> <li> <p> <b> <code>Optimized</code> </b> — The function is
     * correctly provisioned to run your workload based on its current configuration
     * and its utilization history. This finding classification does not include
     * finding reason codes.</p> </li> <li> <p> <b> <code>NotOptimized</code> </b> —
     * The function is performing at a higher level (over-provisioned) or at a lower
     * level (under-provisioned) than required for your workload because its current
     * configuration is not optimal. Over-provisioned resources might lead to
     * unnecessary infrastructure cost, and under-provisioned resources might lead to
     * poor application performance. This finding classification can include the
     * <code>MemoryUnderprovisioned</code> and <code>MemoryUnderprovisioned</code>
     * finding reason codes.</p> </li> <li> <p> <b> <code>Unavailable</code> </b> —
     * Compute Optimizer was unable to generate a recommendation for the function. This
     * could be because the function has not accumulated sufficient metric data, or the
     * function does not qualify for a recommendation. This finding classification can
     * include the <code>InsufficientData</code> and <code>Inconclusive</code> finding
     * reason codes.</p>  <p>Functions with a finding of unavailable are not
     * returned unless you specify the <code>filter</code> parameter with a value of
     * <code>Unavailable</code> in your <code>GetLambdaFunctionRecommendations</code>
     * request.</p>  </li> </ul>
     */
    inline void SetFinding(LambdaFunctionRecommendationFinding&& value) { m_findingHasBeenSet = true; m_finding = std::move(value); }

    /**
     * <p>The finding classification of the function.</p> <p>Findings for functions
     * include:</p> <ul> <li> <p> <b> <code>Optimized</code> </b> — The function is
     * correctly provisioned to run your workload based on its current configuration
     * and its utilization history. This finding classification does not include
     * finding reason codes.</p> </li> <li> <p> <b> <code>NotOptimized</code> </b> —
     * The function is performing at a higher level (over-provisioned) or at a lower
     * level (under-provisioned) than required for your workload because its current
     * configuration is not optimal. Over-provisioned resources might lead to
     * unnecessary infrastructure cost, and under-provisioned resources might lead to
     * poor application performance. This finding classification can include the
     * <code>MemoryUnderprovisioned</code> and <code>MemoryUnderprovisioned</code>
     * finding reason codes.</p> </li> <li> <p> <b> <code>Unavailable</code> </b> —
     * Compute Optimizer was unable to generate a recommendation for the function. This
     * could be because the function has not accumulated sufficient metric data, or the
     * function does not qualify for a recommendation. This finding classification can
     * include the <code>InsufficientData</code> and <code>Inconclusive</code> finding
     * reason codes.</p>  <p>Functions with a finding of unavailable are not
     * returned unless you specify the <code>filter</code> parameter with a value of
     * <code>Unavailable</code> in your <code>GetLambdaFunctionRecommendations</code>
     * request.</p>  </li> </ul>
     */
    inline LambdaFunctionRecommendation& WithFinding(const LambdaFunctionRecommendationFinding& value) { SetFinding(value); return *this;}

    /**
     * <p>The finding classification of the function.</p> <p>Findings for functions
     * include:</p> <ul> <li> <p> <b> <code>Optimized</code> </b> — The function is
     * correctly provisioned to run your workload based on its current configuration
     * and its utilization history. This finding classification does not include
     * finding reason codes.</p> </li> <li> <p> <b> <code>NotOptimized</code> </b> —
     * The function is performing at a higher level (over-provisioned) or at a lower
     * level (under-provisioned) than required for your workload because its current
     * configuration is not optimal. Over-provisioned resources might lead to
     * unnecessary infrastructure cost, and under-provisioned resources might lead to
     * poor application performance. This finding classification can include the
     * <code>MemoryUnderprovisioned</code> and <code>MemoryUnderprovisioned</code>
     * finding reason codes.</p> </li> <li> <p> <b> <code>Unavailable</code> </b> —
     * Compute Optimizer was unable to generate a recommendation for the function. This
     * could be because the function has not accumulated sufficient metric data, or the
     * function does not qualify for a recommendation. This finding classification can
     * include the <code>InsufficientData</code> and <code>Inconclusive</code> finding
     * reason codes.</p>  <p>Functions with a finding of unavailable are not
     * returned unless you specify the <code>filter</code> parameter with a value of
     * <code>Unavailable</code> in your <code>GetLambdaFunctionRecommendations</code>
     * request.</p>  </li> </ul>
     */
    inline LambdaFunctionRecommendation& WithFinding(LambdaFunctionRecommendationFinding&& value) { SetFinding(std::move(value)); return *this;}


    /**
     * <p>The reason for the finding classification of the function.</p> 
     * <p>Functions that have a finding classification of <code>Optimized</code> don't
     * have a finding reason code.</p>  <p>Finding reason codes for functions
     * include:</p> <ul> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> — The
     * function is over-provisioned when its memory configuration can be sized down
     * while still meeting the performance requirements of your workload. An
     * over-provisioned function might lead to unnecessary infrastructure cost. This
     * finding reason code is part of the <code>NotOptimized</code> finding
     * classification.</p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b>
     * — The function is under-provisioned when its memory configuration doesn't meet
     * the performance requirements of the workload. An under-provisioned function
     * might lead to poor application performance. This finding reason code is part of
     * the <code>NotOptimized</code> finding classification.</p> </li> <li> <p> <b>
     * <code>InsufficientData</code> </b> — The function does not have sufficient
     * metric data for Compute Optimizer to generate a recommendation. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
     * resources and requirements</a> in the <i>Compute Optimizer User Guide</i>. This
     * finding reason code is part of the <code>Unavailable</code> finding
     * classification.</p> </li> <li> <p> <b> <code>Inconclusive</code> </b> — The
     * function does not qualify for a recommendation because Compute Optimizer cannot
     * generate a recommendation with a high degree of confidence. This finding reason
     * code is part of the <code>Unavailable</code> finding classification.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<LambdaFunctionRecommendationFindingReasonCode>& GetFindingReasonCodes() const{ return m_findingReasonCodes; }

    /**
     * <p>The reason for the finding classification of the function.</p> 
     * <p>Functions that have a finding classification of <code>Optimized</code> don't
     * have a finding reason code.</p>  <p>Finding reason codes for functions
     * include:</p> <ul> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> — The
     * function is over-provisioned when its memory configuration can be sized down
     * while still meeting the performance requirements of your workload. An
     * over-provisioned function might lead to unnecessary infrastructure cost. This
     * finding reason code is part of the <code>NotOptimized</code> finding
     * classification.</p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b>
     * — The function is under-provisioned when its memory configuration doesn't meet
     * the performance requirements of the workload. An under-provisioned function
     * might lead to poor application performance. This finding reason code is part of
     * the <code>NotOptimized</code> finding classification.</p> </li> <li> <p> <b>
     * <code>InsufficientData</code> </b> — The function does not have sufficient
     * metric data for Compute Optimizer to generate a recommendation. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
     * resources and requirements</a> in the <i>Compute Optimizer User Guide</i>. This
     * finding reason code is part of the <code>Unavailable</code> finding
     * classification.</p> </li> <li> <p> <b> <code>Inconclusive</code> </b> — The
     * function does not qualify for a recommendation because Compute Optimizer cannot
     * generate a recommendation with a high degree of confidence. This finding reason
     * code is part of the <code>Unavailable</code> finding classification.</p> </li>
     * </ul>
     */
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }

    /**
     * <p>The reason for the finding classification of the function.</p> 
     * <p>Functions that have a finding classification of <code>Optimized</code> don't
     * have a finding reason code.</p>  <p>Finding reason codes for functions
     * include:</p> <ul> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> — The
     * function is over-provisioned when its memory configuration can be sized down
     * while still meeting the performance requirements of your workload. An
     * over-provisioned function might lead to unnecessary infrastructure cost. This
     * finding reason code is part of the <code>NotOptimized</code> finding
     * classification.</p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b>
     * — The function is under-provisioned when its memory configuration doesn't meet
     * the performance requirements of the workload. An under-provisioned function
     * might lead to poor application performance. This finding reason code is part of
     * the <code>NotOptimized</code> finding classification.</p> </li> <li> <p> <b>
     * <code>InsufficientData</code> </b> — The function does not have sufficient
     * metric data for Compute Optimizer to generate a recommendation. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
     * resources and requirements</a> in the <i>Compute Optimizer User Guide</i>. This
     * finding reason code is part of the <code>Unavailable</code> finding
     * classification.</p> </li> <li> <p> <b> <code>Inconclusive</code> </b> — The
     * function does not qualify for a recommendation because Compute Optimizer cannot
     * generate a recommendation with a high degree of confidence. This finding reason
     * code is part of the <code>Unavailable</code> finding classification.</p> </li>
     * </ul>
     */
    inline void SetFindingReasonCodes(const Aws::Vector<LambdaFunctionRecommendationFindingReasonCode>& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = value; }

    /**
     * <p>The reason for the finding classification of the function.</p> 
     * <p>Functions that have a finding classification of <code>Optimized</code> don't
     * have a finding reason code.</p>  <p>Finding reason codes for functions
     * include:</p> <ul> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> — The
     * function is over-provisioned when its memory configuration can be sized down
     * while still meeting the performance requirements of your workload. An
     * over-provisioned function might lead to unnecessary infrastructure cost. This
     * finding reason code is part of the <code>NotOptimized</code> finding
     * classification.</p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b>
     * — The function is under-provisioned when its memory configuration doesn't meet
     * the performance requirements of the workload. An under-provisioned function
     * might lead to poor application performance. This finding reason code is part of
     * the <code>NotOptimized</code> finding classification.</p> </li> <li> <p> <b>
     * <code>InsufficientData</code> </b> — The function does not have sufficient
     * metric data for Compute Optimizer to generate a recommendation. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
     * resources and requirements</a> in the <i>Compute Optimizer User Guide</i>. This
     * finding reason code is part of the <code>Unavailable</code> finding
     * classification.</p> </li> <li> <p> <b> <code>Inconclusive</code> </b> — The
     * function does not qualify for a recommendation because Compute Optimizer cannot
     * generate a recommendation with a high degree of confidence. This finding reason
     * code is part of the <code>Unavailable</code> finding classification.</p> </li>
     * </ul>
     */
    inline void SetFindingReasonCodes(Aws::Vector<LambdaFunctionRecommendationFindingReasonCode>&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::move(value); }

    /**
     * <p>The reason for the finding classification of the function.</p> 
     * <p>Functions that have a finding classification of <code>Optimized</code> don't
     * have a finding reason code.</p>  <p>Finding reason codes for functions
     * include:</p> <ul> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> — The
     * function is over-provisioned when its memory configuration can be sized down
     * while still meeting the performance requirements of your workload. An
     * over-provisioned function might lead to unnecessary infrastructure cost. This
     * finding reason code is part of the <code>NotOptimized</code> finding
     * classification.</p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b>
     * — The function is under-provisioned when its memory configuration doesn't meet
     * the performance requirements of the workload. An under-provisioned function
     * might lead to poor application performance. This finding reason code is part of
     * the <code>NotOptimized</code> finding classification.</p> </li> <li> <p> <b>
     * <code>InsufficientData</code> </b> — The function does not have sufficient
     * metric data for Compute Optimizer to generate a recommendation. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
     * resources and requirements</a> in the <i>Compute Optimizer User Guide</i>. This
     * finding reason code is part of the <code>Unavailable</code> finding
     * classification.</p> </li> <li> <p> <b> <code>Inconclusive</code> </b> — The
     * function does not qualify for a recommendation because Compute Optimizer cannot
     * generate a recommendation with a high degree of confidence. This finding reason
     * code is part of the <code>Unavailable</code> finding classification.</p> </li>
     * </ul>
     */
    inline LambdaFunctionRecommendation& WithFindingReasonCodes(const Aws::Vector<LambdaFunctionRecommendationFindingReasonCode>& value) { SetFindingReasonCodes(value); return *this;}

    /**
     * <p>The reason for the finding classification of the function.</p> 
     * <p>Functions that have a finding classification of <code>Optimized</code> don't
     * have a finding reason code.</p>  <p>Finding reason codes for functions
     * include:</p> <ul> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> — The
     * function is over-provisioned when its memory configuration can be sized down
     * while still meeting the performance requirements of your workload. An
     * over-provisioned function might lead to unnecessary infrastructure cost. This
     * finding reason code is part of the <code>NotOptimized</code> finding
     * classification.</p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b>
     * — The function is under-provisioned when its memory configuration doesn't meet
     * the performance requirements of the workload. An under-provisioned function
     * might lead to poor application performance. This finding reason code is part of
     * the <code>NotOptimized</code> finding classification.</p> </li> <li> <p> <b>
     * <code>InsufficientData</code> </b> — The function does not have sufficient
     * metric data for Compute Optimizer to generate a recommendation. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
     * resources and requirements</a> in the <i>Compute Optimizer User Guide</i>. This
     * finding reason code is part of the <code>Unavailable</code> finding
     * classification.</p> </li> <li> <p> <b> <code>Inconclusive</code> </b> — The
     * function does not qualify for a recommendation because Compute Optimizer cannot
     * generate a recommendation with a high degree of confidence. This finding reason
     * code is part of the <code>Unavailable</code> finding classification.</p> </li>
     * </ul>
     */
    inline LambdaFunctionRecommendation& WithFindingReasonCodes(Aws::Vector<LambdaFunctionRecommendationFindingReasonCode>&& value) { SetFindingReasonCodes(std::move(value)); return *this;}

    /**
     * <p>The reason for the finding classification of the function.</p> 
     * <p>Functions that have a finding classification of <code>Optimized</code> don't
     * have a finding reason code.</p>  <p>Finding reason codes for functions
     * include:</p> <ul> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> — The
     * function is over-provisioned when its memory configuration can be sized down
     * while still meeting the performance requirements of your workload. An
     * over-provisioned function might lead to unnecessary infrastructure cost. This
     * finding reason code is part of the <code>NotOptimized</code> finding
     * classification.</p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b>
     * — The function is under-provisioned when its memory configuration doesn't meet
     * the performance requirements of the workload. An under-provisioned function
     * might lead to poor application performance. This finding reason code is part of
     * the <code>NotOptimized</code> finding classification.</p> </li> <li> <p> <b>
     * <code>InsufficientData</code> </b> — The function does not have sufficient
     * metric data for Compute Optimizer to generate a recommendation. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
     * resources and requirements</a> in the <i>Compute Optimizer User Guide</i>. This
     * finding reason code is part of the <code>Unavailable</code> finding
     * classification.</p> </li> <li> <p> <b> <code>Inconclusive</code> </b> — The
     * function does not qualify for a recommendation because Compute Optimizer cannot
     * generate a recommendation with a high degree of confidence. This finding reason
     * code is part of the <code>Unavailable</code> finding classification.</p> </li>
     * </ul>
     */
    inline LambdaFunctionRecommendation& AddFindingReasonCodes(const LambdaFunctionRecommendationFindingReasonCode& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }

    /**
     * <p>The reason for the finding classification of the function.</p> 
     * <p>Functions that have a finding classification of <code>Optimized</code> don't
     * have a finding reason code.</p>  <p>Finding reason codes for functions
     * include:</p> <ul> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> — The
     * function is over-provisioned when its memory configuration can be sized down
     * while still meeting the performance requirements of your workload. An
     * over-provisioned function might lead to unnecessary infrastructure cost. This
     * finding reason code is part of the <code>NotOptimized</code> finding
     * classification.</p> </li> <li> <p> <b> <code>MemoryUnderprovisioned</code> </b>
     * — The function is under-provisioned when its memory configuration doesn't meet
     * the performance requirements of the workload. An under-provisioned function
     * might lead to poor application performance. This finding reason code is part of
     * the <code>NotOptimized</code> finding classification.</p> </li> <li> <p> <b>
     * <code>InsufficientData</code> </b> — The function does not have sufficient
     * metric data for Compute Optimizer to generate a recommendation. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/requirements.html">Supported
     * resources and requirements</a> in the <i>Compute Optimizer User Guide</i>. This
     * finding reason code is part of the <code>Unavailable</code> finding
     * classification.</p> </li> <li> <p> <b> <code>Inconclusive</code> </b> — The
     * function does not qualify for a recommendation because Compute Optimizer cannot
     * generate a recommendation with a high degree of confidence. This finding reason
     * code is part of the <code>Unavailable</code> finding classification.</p> </li>
     * </ul>
     */
    inline LambdaFunctionRecommendation& AddFindingReasonCodes(LambdaFunctionRecommendationFindingReasonCode&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects that describe the memory configuration recommendation
     * options for the function.</p>
     */
    inline const Aws::Vector<LambdaFunctionMemoryRecommendationOption>& GetMemorySizeRecommendationOptions() const{ return m_memorySizeRecommendationOptions; }

    /**
     * <p>An array of objects that describe the memory configuration recommendation
     * options for the function.</p>
     */
    inline bool MemorySizeRecommendationOptionsHasBeenSet() const { return m_memorySizeRecommendationOptionsHasBeenSet; }

    /**
     * <p>An array of objects that describe the memory configuration recommendation
     * options for the function.</p>
     */
    inline void SetMemorySizeRecommendationOptions(const Aws::Vector<LambdaFunctionMemoryRecommendationOption>& value) { m_memorySizeRecommendationOptionsHasBeenSet = true; m_memorySizeRecommendationOptions = value; }

    /**
     * <p>An array of objects that describe the memory configuration recommendation
     * options for the function.</p>
     */
    inline void SetMemorySizeRecommendationOptions(Aws::Vector<LambdaFunctionMemoryRecommendationOption>&& value) { m_memorySizeRecommendationOptionsHasBeenSet = true; m_memorySizeRecommendationOptions = std::move(value); }

    /**
     * <p>An array of objects that describe the memory configuration recommendation
     * options for the function.</p>
     */
    inline LambdaFunctionRecommendation& WithMemorySizeRecommendationOptions(const Aws::Vector<LambdaFunctionMemoryRecommendationOption>& value) { SetMemorySizeRecommendationOptions(value); return *this;}

    /**
     * <p>An array of objects that describe the memory configuration recommendation
     * options for the function.</p>
     */
    inline LambdaFunctionRecommendation& WithMemorySizeRecommendationOptions(Aws::Vector<LambdaFunctionMemoryRecommendationOption>&& value) { SetMemorySizeRecommendationOptions(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the memory configuration recommendation
     * options for the function.</p>
     */
    inline LambdaFunctionRecommendation& AddMemorySizeRecommendationOptions(const LambdaFunctionMemoryRecommendationOption& value) { m_memorySizeRecommendationOptionsHasBeenSet = true; m_memorySizeRecommendationOptions.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the memory configuration recommendation
     * options for the function.</p>
     */
    inline LambdaFunctionRecommendation& AddMemorySizeRecommendationOptions(LambdaFunctionMemoryRecommendationOption&& value) { m_memorySizeRecommendationOptionsHasBeenSet = true; m_memorySizeRecommendationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The risk of the current Lambda function not meeting the performance needs of
     * its workloads. The higher the risk, the more likely the current Lambda function
     * requires more memory.</p>
     */
    inline const CurrentPerformanceRisk& GetCurrentPerformanceRisk() const{ return m_currentPerformanceRisk; }

    /**
     * <p>The risk of the current Lambda function not meeting the performance needs of
     * its workloads. The higher the risk, the more likely the current Lambda function
     * requires more memory.</p>
     */
    inline bool CurrentPerformanceRiskHasBeenSet() const { return m_currentPerformanceRiskHasBeenSet; }

    /**
     * <p>The risk of the current Lambda function not meeting the performance needs of
     * its workloads. The higher the risk, the more likely the current Lambda function
     * requires more memory.</p>
     */
    inline void SetCurrentPerformanceRisk(const CurrentPerformanceRisk& value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = value; }

    /**
     * <p>The risk of the current Lambda function not meeting the performance needs of
     * its workloads. The higher the risk, the more likely the current Lambda function
     * requires more memory.</p>
     */
    inline void SetCurrentPerformanceRisk(CurrentPerformanceRisk&& value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = std::move(value); }

    /**
     * <p>The risk of the current Lambda function not meeting the performance needs of
     * its workloads. The higher the risk, the more likely the current Lambda function
     * requires more memory.</p>
     */
    inline LambdaFunctionRecommendation& WithCurrentPerformanceRisk(const CurrentPerformanceRisk& value) { SetCurrentPerformanceRisk(value); return *this;}

    /**
     * <p>The risk of the current Lambda function not meeting the performance needs of
     * its workloads. The higher the risk, the more likely the current Lambda function
     * requires more memory.</p>
     */
    inline LambdaFunctionRecommendation& WithCurrentPerformanceRisk(CurrentPerformanceRisk&& value) { SetCurrentPerformanceRisk(std::move(value)); return *this;}

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Aws::String m_functionVersion;
    bool m_functionVersionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    int m_currentMemorySize;
    bool m_currentMemorySizeHasBeenSet = false;

    long long m_numberOfInvocations;
    bool m_numberOfInvocationsHasBeenSet = false;

    Aws::Vector<LambdaFunctionUtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet = false;

    LambdaFunctionRecommendationFinding m_finding;
    bool m_findingHasBeenSet = false;

    Aws::Vector<LambdaFunctionRecommendationFindingReasonCode> m_findingReasonCodes;
    bool m_findingReasonCodesHasBeenSet = false;

    Aws::Vector<LambdaFunctionMemoryRecommendationOption> m_memorySizeRecommendationOptions;
    bool m_memorySizeRecommendationOptionsHasBeenSet = false;

    CurrentPerformanceRisk m_currentPerformanceRisk;
    bool m_currentPerformanceRiskHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
