/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/Cost.h>
#include <aws/resiliencehub/model/HaArchitecture.h>
#include <aws/resiliencehub/model/ConfigRecommendationOptimizationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/DisruptionType.h>
#include <aws/resiliencehub/model/DisruptionCompliance.h>
#include <aws/resiliencehub/model/RecommendationDisruptionCompliance.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a configuration recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ConfigRecommendation">AWS
   * API Reference</a></p>
   */
  class ConfigRecommendation
  {
  public:
    AWS_RESILIENCEHUB_API ConfigRecommendation();
    AWS_RESILIENCEHUB_API ConfigRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ConfigRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application component name.</p>
     */
    inline const Aws::String& GetAppComponentName() const{ return m_appComponentName; }

    /**
     * <p>The application component name.</p>
     */
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }

    /**
     * <p>The application component name.</p>
     */
    inline void SetAppComponentName(const Aws::String& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = value; }

    /**
     * <p>The application component name.</p>
     */
    inline void SetAppComponentName(Aws::String&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::move(value); }

    /**
     * <p>The application component name.</p>
     */
    inline void SetAppComponentName(const char* value) { m_appComponentNameHasBeenSet = true; m_appComponentName.assign(value); }

    /**
     * <p>The application component name.</p>
     */
    inline ConfigRecommendation& WithAppComponentName(const Aws::String& value) { SetAppComponentName(value); return *this;}

    /**
     * <p>The application component name.</p>
     */
    inline ConfigRecommendation& WithAppComponentName(Aws::String&& value) { SetAppComponentName(std::move(value)); return *this;}

    /**
     * <p>The application component name.</p>
     */
    inline ConfigRecommendation& WithAppComponentName(const char* value) { SetAppComponentName(value); return *this;}


    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetCompliance() const{ return m_compliance; }

    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }

    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline void SetCompliance(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { m_complianceHasBeenSet = true; m_compliance = value; }

    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline void SetCompliance(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }

    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& WithCompliance(const Aws::Map<DisruptionType, DisruptionCompliance>& value) { SetCompliance(value); return *this;}

    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& WithCompliance(Aws::Map<DisruptionType, DisruptionCompliance>&& value) { SetCompliance(std::move(value)); return *this;}

    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& AddCompliance(const DisruptionType& key, const DisruptionCompliance& value) { m_complianceHasBeenSet = true; m_compliance.emplace(key, value); return *this; }

    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& AddCompliance(DisruptionType&& key, const DisruptionCompliance& value) { m_complianceHasBeenSet = true; m_compliance.emplace(std::move(key), value); return *this; }

    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& AddCompliance(const DisruptionType& key, DisruptionCompliance&& value) { m_complianceHasBeenSet = true; m_compliance.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& AddCompliance(DisruptionType&& key, DisruptionCompliance&& value) { m_complianceHasBeenSet = true; m_compliance.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The cost for the application.</p>
     */
    inline const Cost& GetCost() const{ return m_cost; }

    /**
     * <p>The cost for the application.</p>
     */
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }

    /**
     * <p>The cost for the application.</p>
     */
    inline void SetCost(const Cost& value) { m_costHasBeenSet = true; m_cost = value; }

    /**
     * <p>The cost for the application.</p>
     */
    inline void SetCost(Cost&& value) { m_costHasBeenSet = true; m_cost = std::move(value); }

    /**
     * <p>The cost for the application.</p>
     */
    inline ConfigRecommendation& WithCost(const Cost& value) { SetCost(value); return *this;}

    /**
     * <p>The cost for the application.</p>
     */
    inline ConfigRecommendation& WithCost(Cost&& value) { SetCost(std::move(value)); return *this;}


    /**
     * <p>The optional description for an app.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for an app.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The optional description for an app.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The optional description for an app.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The optional description for an app.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The optional description for an app.</p>
     */
    inline ConfigRecommendation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for an app.</p>
     */
    inline ConfigRecommendation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for an app.</p>
     */
    inline ConfigRecommendation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The architecture type.</p>
     */
    inline const HaArchitecture& GetHaArchitecture() const{ return m_haArchitecture; }

    /**
     * <p>The architecture type.</p>
     */
    inline bool HaArchitectureHasBeenSet() const { return m_haArchitectureHasBeenSet; }

    /**
     * <p>The architecture type.</p>
     */
    inline void SetHaArchitecture(const HaArchitecture& value) { m_haArchitectureHasBeenSet = true; m_haArchitecture = value; }

    /**
     * <p>The architecture type.</p>
     */
    inline void SetHaArchitecture(HaArchitecture&& value) { m_haArchitectureHasBeenSet = true; m_haArchitecture = std::move(value); }

    /**
     * <p>The architecture type.</p>
     */
    inline ConfigRecommendation& WithHaArchitecture(const HaArchitecture& value) { SetHaArchitecture(value); return *this;}

    /**
     * <p>The architecture type.</p>
     */
    inline ConfigRecommendation& WithHaArchitecture(HaArchitecture&& value) { SetHaArchitecture(std::move(value)); return *this;}


    /**
     * <p>The name of the recommendation configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recommendation configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the recommendation configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the recommendation configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the recommendation configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the recommendation configuration.</p>
     */
    inline ConfigRecommendation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recommendation configuration.</p>
     */
    inline ConfigRecommendation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recommendation configuration.</p>
     */
    inline ConfigRecommendation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of optimization.</p>
     */
    inline const ConfigRecommendationOptimizationType& GetOptimizationType() const{ return m_optimizationType; }

    /**
     * <p>The type of optimization.</p>
     */
    inline bool OptimizationTypeHasBeenSet() const { return m_optimizationTypeHasBeenSet; }

    /**
     * <p>The type of optimization.</p>
     */
    inline void SetOptimizationType(const ConfigRecommendationOptimizationType& value) { m_optimizationTypeHasBeenSet = true; m_optimizationType = value; }

    /**
     * <p>The type of optimization.</p>
     */
    inline void SetOptimizationType(ConfigRecommendationOptimizationType&& value) { m_optimizationTypeHasBeenSet = true; m_optimizationType = std::move(value); }

    /**
     * <p>The type of optimization.</p>
     */
    inline ConfigRecommendation& WithOptimizationType(const ConfigRecommendationOptimizationType& value) { SetOptimizationType(value); return *this;}

    /**
     * <p>The type of optimization.</p>
     */
    inline ConfigRecommendation& WithOptimizationType(ConfigRecommendationOptimizationType&& value) { SetOptimizationType(std::move(value)); return *this;}


    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline const Aws::Map<DisruptionType, RecommendationDisruptionCompliance>& GetRecommendationCompliance() const{ return m_recommendationCompliance; }

    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline bool RecommendationComplianceHasBeenSet() const { return m_recommendationComplianceHasBeenSet; }

    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline void SetRecommendationCompliance(const Aws::Map<DisruptionType, RecommendationDisruptionCompliance>& value) { m_recommendationComplianceHasBeenSet = true; m_recommendationCompliance = value; }

    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline void SetRecommendationCompliance(Aws::Map<DisruptionType, RecommendationDisruptionCompliance>&& value) { m_recommendationComplianceHasBeenSet = true; m_recommendationCompliance = std::move(value); }

    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& WithRecommendationCompliance(const Aws::Map<DisruptionType, RecommendationDisruptionCompliance>& value) { SetRecommendationCompliance(value); return *this;}

    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& WithRecommendationCompliance(Aws::Map<DisruptionType, RecommendationDisruptionCompliance>&& value) { SetRecommendationCompliance(std::move(value)); return *this;}

    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& AddRecommendationCompliance(const DisruptionType& key, const RecommendationDisruptionCompliance& value) { m_recommendationComplianceHasBeenSet = true; m_recommendationCompliance.emplace(key, value); return *this; }

    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& AddRecommendationCompliance(DisruptionType&& key, const RecommendationDisruptionCompliance& value) { m_recommendationComplianceHasBeenSet = true; m_recommendationCompliance.emplace(std::move(key), value); return *this; }

    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& AddRecommendationCompliance(const DisruptionType& key, RecommendationDisruptionCompliance&& value) { m_recommendationComplianceHasBeenSet = true; m_recommendationCompliance.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline ConfigRecommendation& AddRecommendationCompliance(DisruptionType&& key, RecommendationDisruptionCompliance&& value) { m_recommendationComplianceHasBeenSet = true; m_recommendationCompliance.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The reference identifier for the recommendation configuration.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>The reference identifier for the recommendation configuration.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>The reference identifier for the recommendation configuration.</p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>The reference identifier for the recommendation configuration.</p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }

    /**
     * <p>The reference identifier for the recommendation configuration.</p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>The reference identifier for the recommendation configuration.</p>
     */
    inline ConfigRecommendation& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>The reference identifier for the recommendation configuration.</p>
     */
    inline ConfigRecommendation& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}

    /**
     * <p>The reference identifier for the recommendation configuration.</p>
     */
    inline ConfigRecommendation& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}


    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuggestedChanges() const{ return m_suggestedChanges; }

    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline bool SuggestedChangesHasBeenSet() const { return m_suggestedChangesHasBeenSet; }

    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline void SetSuggestedChanges(const Aws::Vector<Aws::String>& value) { m_suggestedChangesHasBeenSet = true; m_suggestedChanges = value; }

    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline void SetSuggestedChanges(Aws::Vector<Aws::String>&& value) { m_suggestedChangesHasBeenSet = true; m_suggestedChanges = std::move(value); }

    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline ConfigRecommendation& WithSuggestedChanges(const Aws::Vector<Aws::String>& value) { SetSuggestedChanges(value); return *this;}

    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline ConfigRecommendation& WithSuggestedChanges(Aws::Vector<Aws::String>&& value) { SetSuggestedChanges(std::move(value)); return *this;}

    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline ConfigRecommendation& AddSuggestedChanges(const Aws::String& value) { m_suggestedChangesHasBeenSet = true; m_suggestedChanges.push_back(value); return *this; }

    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline ConfigRecommendation& AddSuggestedChanges(Aws::String&& value) { m_suggestedChangesHasBeenSet = true; m_suggestedChanges.push_back(std::move(value)); return *this; }

    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline ConfigRecommendation& AddSuggestedChanges(const char* value) { m_suggestedChangesHasBeenSet = true; m_suggestedChanges.push_back(value); return *this; }

  private:

    Aws::String m_appComponentName;
    bool m_appComponentNameHasBeenSet = false;

    Aws::Map<DisruptionType, DisruptionCompliance> m_compliance;
    bool m_complianceHasBeenSet = false;

    Cost m_cost;
    bool m_costHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    HaArchitecture m_haArchitecture;
    bool m_haArchitectureHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConfigRecommendationOptimizationType m_optimizationType;
    bool m_optimizationTypeHasBeenSet = false;

    Aws::Map<DisruptionType, RecommendationDisruptionCompliance> m_recommendationCompliance;
    bool m_recommendationComplianceHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_suggestedChanges;
    bool m_suggestedChangesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
