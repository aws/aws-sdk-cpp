/**
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


    /**
     * <p> The number of days the utilization metrics of the Amazon Web Services
     * resource are analyzed. </p> <p>To validate that the preference is applied to
     * your last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline const LookBackPeriodPreference& GetLookBackPeriod() const{ return m_lookBackPeriod; }

    /**
     * <p> The number of days the utilization metrics of the Amazon Web Services
     * resource are analyzed. </p> <p>To validate that the preference is applied to
     * your last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline void SetLookBackPeriod(const LookBackPeriodPreference& value) { m_lookBackPeriod = value; }

    /**
     * <p> The number of days the utilization metrics of the Amazon Web Services
     * resource are analyzed. </p> <p>To validate that the preference is applied to
     * your last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline void SetLookBackPeriod(LookBackPeriodPreference&& value) { m_lookBackPeriod = std::move(value); }

    /**
     * <p> The number of days the utilization metrics of the Amazon Web Services
     * resource are analyzed. </p> <p>To validate that the preference is applied to
     * your last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline GetEffectiveRecommendationPreferencesResult& WithLookBackPeriod(const LookBackPeriodPreference& value) { SetLookBackPeriod(value); return *this;}

    /**
     * <p> The number of days the utilization metrics of the Amazon Web Services
     * resource are analyzed. </p> <p>To validate that the preference is applied to
     * your last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline GetEffectiveRecommendationPreferencesResult& WithLookBackPeriod(LookBackPeriodPreference&& value) { SetLookBackPeriod(std::move(value)); return *this;}


    /**
     * <p> The resource’s CPU utilization threshold preferences, such as threshold and
     * headroom, that were used to generate rightsizing recommendations. It considers
     * all applicable preferences that you set at the resource, account, and
     * organization level. </p> <p>To validate that the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline const Aws::Vector<UtilizationPreference>& GetUtilizationPreferences() const{ return m_utilizationPreferences; }

    /**
     * <p> The resource’s CPU utilization threshold preferences, such as threshold and
     * headroom, that were used to generate rightsizing recommendations. It considers
     * all applicable preferences that you set at the resource, account, and
     * organization level. </p> <p>To validate that the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline void SetUtilizationPreferences(const Aws::Vector<UtilizationPreference>& value) { m_utilizationPreferences = value; }

    /**
     * <p> The resource’s CPU utilization threshold preferences, such as threshold and
     * headroom, that were used to generate rightsizing recommendations. It considers
     * all applicable preferences that you set at the resource, account, and
     * organization level. </p> <p>To validate that the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline void SetUtilizationPreferences(Aws::Vector<UtilizationPreference>&& value) { m_utilizationPreferences = std::move(value); }

    /**
     * <p> The resource’s CPU utilization threshold preferences, such as threshold and
     * headroom, that were used to generate rightsizing recommendations. It considers
     * all applicable preferences that you set at the resource, account, and
     * organization level. </p> <p>To validate that the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline GetEffectiveRecommendationPreferencesResult& WithUtilizationPreferences(const Aws::Vector<UtilizationPreference>& value) { SetUtilizationPreferences(value); return *this;}

    /**
     * <p> The resource’s CPU utilization threshold preferences, such as threshold and
     * headroom, that were used to generate rightsizing recommendations. It considers
     * all applicable preferences that you set at the resource, account, and
     * organization level. </p> <p>To validate that the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline GetEffectiveRecommendationPreferencesResult& WithUtilizationPreferences(Aws::Vector<UtilizationPreference>&& value) { SetUtilizationPreferences(std::move(value)); return *this;}

    /**
     * <p> The resource’s CPU utilization threshold preferences, such as threshold and
     * headroom, that were used to generate rightsizing recommendations. It considers
     * all applicable preferences that you set at the resource, account, and
     * organization level. </p> <p>To validate that the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline GetEffectiveRecommendationPreferencesResult& AddUtilizationPreferences(const UtilizationPreference& value) { m_utilizationPreferences.push_back(value); return *this; }

    /**
     * <p> The resource’s CPU utilization threshold preferences, such as threshold and
     * headroom, that were used to generate rightsizing recommendations. It considers
     * all applicable preferences that you set at the resource, account, and
     * organization level. </p> <p>To validate that the preference is applied to your
     * last generated set of recommendations, review the
     * <code>effectiveRecommendationPreferences</code> value in the response of the
     * GetAutoScalingGroupRecommendations or GetEC2InstanceRecommendations actions.</p>
     */
    inline GetEffectiveRecommendationPreferencesResult& AddUtilizationPreferences(UtilizationPreference&& value) { m_utilizationPreferences.push_back(std::move(value)); return *this; }


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
    inline const Aws::Vector<EffectivePreferredResource>& GetPreferredResources() const{ return m_preferredResources; }

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
    inline void SetPreferredResources(const Aws::Vector<EffectivePreferredResource>& value) { m_preferredResources = value; }

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
    inline void SetPreferredResources(Aws::Vector<EffectivePreferredResource>&& value) { m_preferredResources = std::move(value); }

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
    inline GetEffectiveRecommendationPreferencesResult& WithPreferredResources(const Aws::Vector<EffectivePreferredResource>& value) { SetPreferredResources(value); return *this;}

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
    inline GetEffectiveRecommendationPreferencesResult& WithPreferredResources(Aws::Vector<EffectivePreferredResource>&& value) { SetPreferredResources(std::move(value)); return *this;}

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
    inline GetEffectiveRecommendationPreferencesResult& AddPreferredResources(const EffectivePreferredResource& value) { m_preferredResources.push_back(value); return *this; }

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
    inline GetEffectiveRecommendationPreferencesResult& AddPreferredResources(EffectivePreferredResource&& value) { m_preferredResources.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEffectiveRecommendationPreferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEffectiveRecommendationPreferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEffectiveRecommendationPreferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics;

    ExternalMetricsPreference m_externalMetricsPreference;

    LookBackPeriodPreference m_lookBackPeriod;

    Aws::Vector<UtilizationPreference> m_utilizationPreferences;

    Aws::Vector<EffectivePreferredResource> m_preferredResources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
