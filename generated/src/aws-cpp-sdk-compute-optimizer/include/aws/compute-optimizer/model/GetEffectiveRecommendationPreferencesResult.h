/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/EnhancedInfrastructureMetrics.h>
#include <aws/compute-optimizer/model/ExternalMetricsPreference.h>
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
    AWS_COMPUTEOPTIMIZER_API GetEffectiveRecommendationPreferencesResult();
    AWS_COMPUTEOPTIMIZER_API GetEffectiveRecommendationPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEffectiveRecommendationPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline const EnhancedInfrastructureMetrics& GetEnhancedInfrastructureMetrics() const{ return m_enhancedInfrastructureMetrics; }

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
    inline void SetEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { m_enhancedInfrastructureMetrics = value; }

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
    inline void SetEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { m_enhancedInfrastructureMetrics = std::move(value); }

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
    inline GetEffectiveRecommendationPreferencesResult& WithEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { SetEnhancedInfrastructureMetrics(value); return *this;}

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
    inline GetEffectiveRecommendationPreferencesResult& WithEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { SetEnhancedInfrastructureMetrics(std::move(value)); return *this;}


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
    inline const ExternalMetricsPreference& GetExternalMetricsPreference() const{ return m_externalMetricsPreference; }

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
    inline void SetExternalMetricsPreference(const ExternalMetricsPreference& value) { m_externalMetricsPreference = value; }

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
    inline void SetExternalMetricsPreference(ExternalMetricsPreference&& value) { m_externalMetricsPreference = std::move(value); }

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
    inline GetEffectiveRecommendationPreferencesResult& WithExternalMetricsPreference(const ExternalMetricsPreference& value) { SetExternalMetricsPreference(value); return *this;}

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
    inline GetEffectiveRecommendationPreferencesResult& WithExternalMetricsPreference(ExternalMetricsPreference&& value) { SetExternalMetricsPreference(std::move(value)); return *this;}

  private:

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics;

    ExternalMetricsPreference m_externalMetricsPreference;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
