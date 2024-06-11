/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/Scope.h>
#include <aws/compute-optimizer/model/ResourceType.h>
#include <aws/compute-optimizer/model/EnhancedInfrastructureMetrics.h>
#include <aws/compute-optimizer/model/InferredWorkloadTypesPreference.h>
#include <aws/compute-optimizer/model/ExternalMetricsPreference.h>
#include <aws/compute-optimizer/model/LookBackPeriodPreference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/SavingsEstimationMode.h>
#include <aws/compute-optimizer/model/UtilizationPreference.h>
#include <aws/compute-optimizer/model/EffectivePreferredResource.h>
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
   * <p>Describes a recommendation preference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RecommendationPreferencesDetail">AWS
   * API Reference</a></p>
   */
  class RecommendationPreferencesDetail
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RecommendationPreferencesDetail();
    AWS_COMPUTEOPTIMIZER_API RecommendationPreferencesDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RecommendationPreferencesDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that describes the scope of the recommendation preference.</p>
     * <p>Recommendation preferences can be created at the organization level (for
     * management accounts of an organization only), account level, and resource level.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline RecommendationPreferencesDetail& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline RecommendationPreferencesDetail& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline RecommendationPreferencesDetail& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline RecommendationPreferencesDetail& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the enhanced infrastructure metrics recommendation
     * preference.</p> <p>When the recommendations page is refreshed, a status of
     * <code>Active</code> confirms that the preference is applied to the
     * recommendations, and a status of <code>Inactive</code> confirms that the
     * preference isn't yet applied to recommendations.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const EnhancedInfrastructureMetrics& GetEnhancedInfrastructureMetrics() const{ return m_enhancedInfrastructureMetrics; }
    inline bool EnhancedInfrastructureMetricsHasBeenSet() const { return m_enhancedInfrastructureMetricsHasBeenSet; }
    inline void SetEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = value; }
    inline void SetEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = std::move(value); }
    inline RecommendationPreferencesDetail& WithEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { SetEnhancedInfrastructureMetrics(value); return *this;}
    inline RecommendationPreferencesDetail& WithEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { SetEnhancedInfrastructureMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inferred workload types recommendation preference.</p>
     * <p>When the recommendations page is refreshed, a status of <code>Active</code>
     * confirms that the preference is applied to the recommendations, and a status of
     * <code>Inactive</code> confirms that the preference isn't yet applied to
     * recommendations.</p>
     */
    inline const InferredWorkloadTypesPreference& GetInferredWorkloadTypes() const{ return m_inferredWorkloadTypes; }
    inline bool InferredWorkloadTypesHasBeenSet() const { return m_inferredWorkloadTypesHasBeenSet; }
    inline void SetInferredWorkloadTypes(const InferredWorkloadTypesPreference& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = value; }
    inline void SetInferredWorkloadTypes(InferredWorkloadTypesPreference&& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = std::move(value); }
    inline RecommendationPreferencesDetail& WithInferredWorkloadTypes(const InferredWorkloadTypesPreference& value) { SetInferredWorkloadTypes(value); return *this;}
    inline RecommendationPreferencesDetail& WithInferredWorkloadTypes(InferredWorkloadTypesPreference&& value) { SetInferredWorkloadTypes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that describes the external metrics recommendation preference.
     * </p> <p> If the preference is applied in the latest recommendation refresh, an
     * object with a valid <code>source</code> value appears in the response. If the
     * preference isn't applied to the recommendations already, then this object
     * doesn't appear in the response. </p>
     */
    inline const ExternalMetricsPreference& GetExternalMetricsPreference() const{ return m_externalMetricsPreference; }
    inline bool ExternalMetricsPreferenceHasBeenSet() const { return m_externalMetricsPreferenceHasBeenSet; }
    inline void SetExternalMetricsPreference(const ExternalMetricsPreference& value) { m_externalMetricsPreferenceHasBeenSet = true; m_externalMetricsPreference = value; }
    inline void SetExternalMetricsPreference(ExternalMetricsPreference&& value) { m_externalMetricsPreferenceHasBeenSet = true; m_externalMetricsPreference = std::move(value); }
    inline RecommendationPreferencesDetail& WithExternalMetricsPreference(const ExternalMetricsPreference& value) { SetExternalMetricsPreference(value); return *this;}
    inline RecommendationPreferencesDetail& WithExternalMetricsPreference(ExternalMetricsPreference&& value) { SetExternalMetricsPreference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The preference to control the number of days the utilization metrics of the
     * Amazon Web Services resource are analyzed. If the preference isn’t set, this
     * object is null. </p>
     */
    inline const LookBackPeriodPreference& GetLookBackPeriod() const{ return m_lookBackPeriod; }
    inline bool LookBackPeriodHasBeenSet() const { return m_lookBackPeriodHasBeenSet; }
    inline void SetLookBackPeriod(const LookBackPeriodPreference& value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = value; }
    inline void SetLookBackPeriod(LookBackPeriodPreference&& value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = std::move(value); }
    inline RecommendationPreferencesDetail& WithLookBackPeriod(const LookBackPeriodPreference& value) { SetLookBackPeriod(value); return *this;}
    inline RecommendationPreferencesDetail& WithLookBackPeriod(LookBackPeriodPreference&& value) { SetLookBackPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The preference to control the resource’s CPU utilization threshold, CPU
     * utilization headroom, and memory utilization headroom. If the preference isn’t
     * set, this object is null. </p>  <p>This preference is only available for
     * the Amazon EC2 instance resource type.</p> 
     */
    inline const Aws::Vector<UtilizationPreference>& GetUtilizationPreferences() const{ return m_utilizationPreferences; }
    inline bool UtilizationPreferencesHasBeenSet() const { return m_utilizationPreferencesHasBeenSet; }
    inline void SetUtilizationPreferences(const Aws::Vector<UtilizationPreference>& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences = value; }
    inline void SetUtilizationPreferences(Aws::Vector<UtilizationPreference>&& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences = std::move(value); }
    inline RecommendationPreferencesDetail& WithUtilizationPreferences(const Aws::Vector<UtilizationPreference>& value) { SetUtilizationPreferences(value); return *this;}
    inline RecommendationPreferencesDetail& WithUtilizationPreferences(Aws::Vector<UtilizationPreference>&& value) { SetUtilizationPreferences(std::move(value)); return *this;}
    inline RecommendationPreferencesDetail& AddUtilizationPreferences(const UtilizationPreference& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences.push_back(value); return *this; }
    inline RecommendationPreferencesDetail& AddUtilizationPreferences(UtilizationPreference&& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The preference to control which resource type values are considered when
     * generating rightsizing recommendations. This object resolves any wildcard
     * expressions and returns the effective list of candidate resource type values. If
     * the preference isn’t set, this object is null. </p>
     */
    inline const Aws::Vector<EffectivePreferredResource>& GetPreferredResources() const{ return m_preferredResources; }
    inline bool PreferredResourcesHasBeenSet() const { return m_preferredResourcesHasBeenSet; }
    inline void SetPreferredResources(const Aws::Vector<EffectivePreferredResource>& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources = value; }
    inline void SetPreferredResources(Aws::Vector<EffectivePreferredResource>&& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources = std::move(value); }
    inline RecommendationPreferencesDetail& WithPreferredResources(const Aws::Vector<EffectivePreferredResource>& value) { SetPreferredResources(value); return *this;}
    inline RecommendationPreferencesDetail& WithPreferredResources(Aws::Vector<EffectivePreferredResource>&& value) { SetPreferredResources(std::move(value)); return *this;}
    inline RecommendationPreferencesDetail& AddPreferredResources(const EffectivePreferredResource& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources.push_back(value); return *this; }
    inline RecommendationPreferencesDetail& AddPreferredResources(EffectivePreferredResource&& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Describes the savings estimation mode used for calculating savings
     * opportunity. </p> <p>Only the account manager or delegated administrator of your
     * organization can activate this preference.</p>
     */
    inline const SavingsEstimationMode& GetSavingsEstimationMode() const{ return m_savingsEstimationMode; }
    inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }
    inline void SetSavingsEstimationMode(const SavingsEstimationMode& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = value; }
    inline void SetSavingsEstimationMode(SavingsEstimationMode&& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = std::move(value); }
    inline RecommendationPreferencesDetail& WithSavingsEstimationMode(const SavingsEstimationMode& value) { SetSavingsEstimationMode(value); return *this;}
    inline RecommendationPreferencesDetail& WithSavingsEstimationMode(SavingsEstimationMode&& value) { SetSavingsEstimationMode(std::move(value)); return *this;}
    ///@}
  private:

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics;
    bool m_enhancedInfrastructureMetricsHasBeenSet = false;

    InferredWorkloadTypesPreference m_inferredWorkloadTypes;
    bool m_inferredWorkloadTypesHasBeenSet = false;

    ExternalMetricsPreference m_externalMetricsPreference;
    bool m_externalMetricsPreferenceHasBeenSet = false;

    LookBackPeriodPreference m_lookBackPeriod;
    bool m_lookBackPeriodHasBeenSet = false;

    Aws::Vector<UtilizationPreference> m_utilizationPreferences;
    bool m_utilizationPreferencesHasBeenSet = false;

    Aws::Vector<EffectivePreferredResource> m_preferredResources;
    bool m_preferredResourcesHasBeenSet = false;

    SavingsEstimationMode m_savingsEstimationMode;
    bool m_savingsEstimationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
