﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/EnhancedInfrastructureMetrics.h>
#include <aws/compute-optimizer/model/ExternalMetricsPreference.h>
#include <aws/compute-optimizer/model/LookBackPeriodPreference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/UtilizationPreference.h>
#include <aws/compute-optimizer/model/EffectivePreferredResource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ComputeOptimizer
{
namespace Model
{
  class GetEffectiveRecommendationPreferencesResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEffectiveRecommendationPreferencesResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetEffectiveRecommendationPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEffectiveRecommendationPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference.
     * Considers all applicable preferences that you might have set at the resource,
     * account, and organization level.</p> <p>A status of <code>Active</code> confirms
     * that the preference is applied in the latest recommendation refresh, and a
     * status of <code>Inactive</code> confirms that it's not yet applied to
     * recommendations.</p> <p>To validate whether the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * <a>GetAutoScalingGroupRecommendations</a> and
     * <a>GetEC2InstanceRecommendations</a> actions.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline EnhancedInfrastructureMetrics GetEnhancedInfrastructureMetrics() const { return m_enhancedInfrastructureMetrics; }
    inline void SetEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = value; }
    inline GetEffectiveRecommendationPreferencesResult& WithEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics value) { SetEnhancedInfrastructureMetrics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of the external metrics recommendation preference. Considers all
     * applicable preferences that you might have set at the account and organization
     * level.</p> <p>If the preference is applied in the latest recommendation refresh,
     * an object with a valid <code>source</code> value appears in the response. If the
     * preference isn't applied to the recommendations already, then this object
     * doesn't appear in the response.</p> <p>To validate whether the preference is
     * applied to your last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * <a>GetEC2InstanceRecommendations</a> actions.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/external-metrics-ingestion.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const ExternalMetricsPreference& GetExternalMetricsPreference() const { return m_externalMetricsPreference; }
    template<typename ExternalMetricsPreferenceT = ExternalMetricsPreference>
    void SetExternalMetricsPreference(ExternalMetricsPreferenceT&& value) { m_externalMetricsPreferenceHasBeenSet = true; m_externalMetricsPreference = std::forward<ExternalMetricsPreferenceT>(value); }
    template<typename ExternalMetricsPreferenceT = ExternalMetricsPreference>
    GetEffectiveRecommendationPreferencesResult& WithExternalMetricsPreference(ExternalMetricsPreferenceT&& value) { SetExternalMetricsPreference(std::forward<ExternalMetricsPreferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of days the utilization metrics of the Amazon Web Services
     * resource are analyzed. </p> <p>To validate that the preference is applied to
     * your last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline LookBackPeriodPreference GetLookBackPeriod() const { return m_lookBackPeriod; }
    inline void SetLookBackPeriod(LookBackPeriodPreference value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = value; }
    inline GetEffectiveRecommendationPreferencesResult& WithLookBackPeriod(LookBackPeriodPreference value) { SetLookBackPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The resource’s CPU and memory utilization preferences, such as threshold and
     * headroom, that were used to generate rightsizing recommendations. It considers
     * all applicable preferences that you set at the resource, account, and
     * organization level. </p> <p>To validate that the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline const Aws::Vector<UtilizationPreference>& GetUtilizationPreferences() const { return m_utilizationPreferences; }
    template<typename UtilizationPreferencesT = Aws::Vector<UtilizationPreference>>
    void SetUtilizationPreferences(UtilizationPreferencesT&& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences = std::forward<UtilizationPreferencesT>(value); }
    template<typename UtilizationPreferencesT = Aws::Vector<UtilizationPreference>>
    GetEffectiveRecommendationPreferencesResult& WithUtilizationPreferences(UtilizationPreferencesT&& value) { SetUtilizationPreferences(std::forward<UtilizationPreferencesT>(value)); return *this;}
    template<typename UtilizationPreferencesT = UtilizationPreference>
    GetEffectiveRecommendationPreferencesResult& AddUtilizationPreferences(UtilizationPreferencesT&& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences.emplace_back(std::forward<UtilizationPreferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The resource type values that are considered as candidates when generating
     * rightsizing recommendations. This object resolves any wildcard expressions and
     * returns the effective list of candidate resource type values. It also considers
     * all applicable preferences that you set at the resource, account, and
     * organization level. </p> <p>To validate that the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline const Aws::Vector<EffectivePreferredResource>& GetPreferredResources() const { return m_preferredResources; }
    template<typename PreferredResourcesT = Aws::Vector<EffectivePreferredResource>>
    void SetPreferredResources(PreferredResourcesT&& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources = std::forward<PreferredResourcesT>(value); }
    template<typename PreferredResourcesT = Aws::Vector<EffectivePreferredResource>>
    GetEffectiveRecommendationPreferencesResult& WithPreferredResources(PreferredResourcesT&& value) { SetPreferredResources(std::forward<PreferredResourcesT>(value)); return *this;}
    template<typename PreferredResourcesT = EffectivePreferredResource>
    GetEffectiveRecommendationPreferencesResult& AddPreferredResources(PreferredResourcesT&& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources.emplace_back(std::forward<PreferredResourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEffectiveRecommendationPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics{EnhancedInfrastructureMetrics::NOT_SET};
    bool m_enhancedInfrastructureMetricsHasBeenSet = false;

    ExternalMetricsPreference m_externalMetricsPreference;
    bool m_externalMetricsPreferenceHasBeenSet = false;

    LookBackPeriodPreference m_lookBackPeriod{LookBackPeriodPreference::NOT_SET};
    bool m_lookBackPeriodHasBeenSet = false;

    Aws::Vector<UtilizationPreference> m_utilizationPreferences;
    bool m_utilizationPreferencesHasBeenSet = false;

    Aws::Vector<EffectivePreferredResource> m_preferredResources;
    bool m_preferredResourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
