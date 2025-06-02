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
#include <aws/compute-optimizer/model/LambdaEffectiveRecommendationPreferences.h>
#include <aws/compute-optimizer/model/LambdaFunctionUtilizationMetric.h>
#include <aws/compute-optimizer/model/LambdaFunctionRecommendationFindingReasonCode.h>
#include <aws/compute-optimizer/model/LambdaFunctionMemoryRecommendationOption.h>
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
   * <p>Describes an Lambda function recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaFunctionRecommendation">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendation() = default;
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the current function.</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    LambdaFunctionRecommendation& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the current function.</p>
     */
    inline const Aws::String& GetFunctionVersion() const { return m_functionVersion; }
    inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }
    template<typename FunctionVersionT = Aws::String>
    void SetFunctionVersion(FunctionVersionT&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::forward<FunctionVersionT>(value); }
    template<typename FunctionVersionT = Aws::String>
    LambdaFunctionRecommendation& WithFunctionVersion(FunctionVersionT&& value) { SetFunctionVersion(std::forward<FunctionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the function.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    LambdaFunctionRecommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory, in MB, that's allocated to the current function.</p>
     */
    inline int GetCurrentMemorySize() const { return m_currentMemorySize; }
    inline bool CurrentMemorySizeHasBeenSet() const { return m_currentMemorySizeHasBeenSet; }
    inline void SetCurrentMemorySize(int value) { m_currentMemorySizeHasBeenSet = true; m_currentMemorySize = value; }
    inline LambdaFunctionRecommendation& WithCurrentMemorySize(int value) { SetCurrentMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times your function code was applied during the look-back
     * period.</p>
     */
    inline long long GetNumberOfInvocations() const { return m_numberOfInvocations; }
    inline bool NumberOfInvocationsHasBeenSet() const { return m_numberOfInvocationsHasBeenSet; }
    inline void SetNumberOfInvocations(long long value) { m_numberOfInvocationsHasBeenSet = true; m_numberOfInvocations = value; }
    inline LambdaFunctionRecommendation& WithNumberOfInvocations(long long value) { SetNumberOfInvocations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the utilization metrics of the
     * function.</p>
     */
    inline const Aws::Vector<LambdaFunctionUtilizationMetric>& GetUtilizationMetrics() const { return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    template<typename UtilizationMetricsT = Aws::Vector<LambdaFunctionUtilizationMetric>>
    void SetUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::forward<UtilizationMetricsT>(value); }
    template<typename UtilizationMetricsT = Aws::Vector<LambdaFunctionUtilizationMetric>>
    LambdaFunctionRecommendation& WithUtilizationMetrics(UtilizationMetricsT&& value) { SetUtilizationMetrics(std::forward<UtilizationMetricsT>(value)); return *this;}
    template<typename UtilizationMetricsT = LambdaFunctionUtilizationMetric>
    LambdaFunctionRecommendation& AddUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.emplace_back(std::forward<UtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which utilization metrics were analyzed for the
     * function.</p>
     */
    inline double GetLookbackPeriodInDays() const { return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(double value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline LambdaFunctionRecommendation& WithLookbackPeriodInDays(double value) { SetLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the function recommendation was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    LambdaFunctionRecommendation& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding classification of the function.</p> <p>Findings for functions
     * include:</p> <ul> <li> <p> <b> <code>Optimized</code> </b> ��� The function is
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
    inline LambdaFunctionRecommendationFinding GetFinding() const { return m_finding; }
    inline bool FindingHasBeenSet() const { return m_findingHasBeenSet; }
    inline void SetFinding(LambdaFunctionRecommendationFinding value) { m_findingHasBeenSet = true; m_finding = value; }
    inline LambdaFunctionRecommendation& WithFinding(LambdaFunctionRecommendationFinding value) { SetFinding(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<LambdaFunctionRecommendationFindingReasonCode>& GetFindingReasonCodes() const { return m_findingReasonCodes; }
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }
    template<typename FindingReasonCodesT = Aws::Vector<LambdaFunctionRecommendationFindingReasonCode>>
    void SetFindingReasonCodes(FindingReasonCodesT&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::forward<FindingReasonCodesT>(value); }
    template<typename FindingReasonCodesT = Aws::Vector<LambdaFunctionRecommendationFindingReasonCode>>
    LambdaFunctionRecommendation& WithFindingReasonCodes(FindingReasonCodesT&& value) { SetFindingReasonCodes(std::forward<FindingReasonCodesT>(value)); return *this;}
    inline LambdaFunctionRecommendation& AddFindingReasonCodes(LambdaFunctionRecommendationFindingReasonCode value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the memory configuration recommendation
     * options for the function.</p>
     */
    inline const Aws::Vector<LambdaFunctionMemoryRecommendationOption>& GetMemorySizeRecommendationOptions() const { return m_memorySizeRecommendationOptions; }
    inline bool MemorySizeRecommendationOptionsHasBeenSet() const { return m_memorySizeRecommendationOptionsHasBeenSet; }
    template<typename MemorySizeRecommendationOptionsT = Aws::Vector<LambdaFunctionMemoryRecommendationOption>>
    void SetMemorySizeRecommendationOptions(MemorySizeRecommendationOptionsT&& value) { m_memorySizeRecommendationOptionsHasBeenSet = true; m_memorySizeRecommendationOptions = std::forward<MemorySizeRecommendationOptionsT>(value); }
    template<typename MemorySizeRecommendationOptionsT = Aws::Vector<LambdaFunctionMemoryRecommendationOption>>
    LambdaFunctionRecommendation& WithMemorySizeRecommendationOptions(MemorySizeRecommendationOptionsT&& value) { SetMemorySizeRecommendationOptions(std::forward<MemorySizeRecommendationOptionsT>(value)); return *this;}
    template<typename MemorySizeRecommendationOptionsT = LambdaFunctionMemoryRecommendationOption>
    LambdaFunctionRecommendation& AddMemorySizeRecommendationOptions(MemorySizeRecommendationOptionsT&& value) { m_memorySizeRecommendationOptionsHasBeenSet = true; m_memorySizeRecommendationOptions.emplace_back(std::forward<MemorySizeRecommendationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The risk of the current Lambda function not meeting the performance needs of
     * its workloads. The higher the risk, the more likely the current Lambda function
     * requires more memory.</p>
     */
    inline CurrentPerformanceRisk GetCurrentPerformanceRisk() const { return m_currentPerformanceRisk; }
    inline bool CurrentPerformanceRiskHasBeenSet() const { return m_currentPerformanceRiskHasBeenSet; }
    inline void SetCurrentPerformanceRisk(CurrentPerformanceRisk value) { m_currentPerformanceRiskHasBeenSet = true; m_currentPerformanceRisk = value; }
    inline LambdaFunctionRecommendation& WithCurrentPerformanceRisk(CurrentPerformanceRisk value) { SetCurrentPerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the effective recommendation preferences for Lambda functions.
     * </p>
     */
    inline const LambdaEffectiveRecommendationPreferences& GetEffectiveRecommendationPreferences() const { return m_effectiveRecommendationPreferences; }
    inline bool EffectiveRecommendationPreferencesHasBeenSet() const { return m_effectiveRecommendationPreferencesHasBeenSet; }
    template<typename EffectiveRecommendationPreferencesT = LambdaEffectiveRecommendationPreferences>
    void SetEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = std::forward<EffectiveRecommendationPreferencesT>(value); }
    template<typename EffectiveRecommendationPreferencesT = LambdaEffectiveRecommendationPreferences>
    LambdaFunctionRecommendation& WithEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { SetEffectiveRecommendationPreferences(std::forward<EffectiveRecommendationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags assigned to your Lambda function recommendations. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LambdaFunctionRecommendation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LambdaFunctionRecommendation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Aws::String m_functionVersion;
    bool m_functionVersionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    int m_currentMemorySize{0};
    bool m_currentMemorySizeHasBeenSet = false;

    long long m_numberOfInvocations{0};
    bool m_numberOfInvocationsHasBeenSet = false;

    Aws::Vector<LambdaFunctionUtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    double m_lookbackPeriodInDays{0.0};
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    LambdaFunctionRecommendationFinding m_finding{LambdaFunctionRecommendationFinding::NOT_SET};
    bool m_findingHasBeenSet = false;

    Aws::Vector<LambdaFunctionRecommendationFindingReasonCode> m_findingReasonCodes;
    bool m_findingReasonCodesHasBeenSet = false;

    Aws::Vector<LambdaFunctionMemoryRecommendationOption> m_memorySizeRecommendationOptions;
    bool m_memorySizeRecommendationOptionsHasBeenSet = false;

    CurrentPerformanceRisk m_currentPerformanceRisk{CurrentPerformanceRisk::NOT_SET};
    bool m_currentPerformanceRiskHasBeenSet = false;

    LambdaEffectiveRecommendationPreferences m_effectiveRecommendationPreferences;
    bool m_effectiveRecommendationPreferencesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
