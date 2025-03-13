/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/Category.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eks/model/InsightStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/InsightCategorySpecificSummary.h>
#include <aws/eks/model/InsightResourceDetail.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>A check that provides recommendations to remedy potential upgrade-impacting
   * issues.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Insight">AWS API
   * Reference</a></p>
   */
  class Insight
  {
  public:
    AWS_EKS_API Insight() = default;
    AWS_EKS_API Insight(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the insight.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Insight& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the insight.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Insight& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the insight.</p>
     */
    inline Category GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(Category value) { m_categoryHasBeenSet = true; m_category = value; }
    inline Insight& WithCategory(Category value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes minor version associated with an insight if applicable.</p>
     */
    inline const Aws::String& GetKubernetesVersion() const { return m_kubernetesVersion; }
    inline bool KubernetesVersionHasBeenSet() const { return m_kubernetesVersionHasBeenSet; }
    template<typename KubernetesVersionT = Aws::String>
    void SetKubernetesVersion(KubernetesVersionT&& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = std::forward<KubernetesVersionT>(value); }
    template<typename KubernetesVersionT = Aws::String>
    Insight& WithKubernetesVersion(KubernetesVersionT&& value) { SetKubernetesVersion(std::forward<KubernetesVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time Amazon EKS last successfully completed a refresh of this insight
     * check on the cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTime() const { return m_lastRefreshTime; }
    inline bool LastRefreshTimeHasBeenSet() const { return m_lastRefreshTimeHasBeenSet; }
    template<typename LastRefreshTimeT = Aws::Utils::DateTime>
    void SetLastRefreshTime(LastRefreshTimeT&& value) { m_lastRefreshTimeHasBeenSet = true; m_lastRefreshTime = std::forward<LastRefreshTimeT>(value); }
    template<typename LastRefreshTimeT = Aws::Utils::DateTime>
    Insight& WithLastRefreshTime(LastRefreshTimeT&& value) { SetLastRefreshTime(std::forward<LastRefreshTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the status of the insight last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastTransitionTime() const { return m_lastTransitionTime; }
    inline bool LastTransitionTimeHasBeenSet() const { return m_lastTransitionTimeHasBeenSet; }
    template<typename LastTransitionTimeT = Aws::Utils::DateTime>
    void SetLastTransitionTime(LastTransitionTimeT&& value) { m_lastTransitionTimeHasBeenSet = true; m_lastTransitionTime = std::forward<LastTransitionTimeT>(value); }
    template<typename LastTransitionTimeT = Aws::Utils::DateTime>
    Insight& WithLastTransitionTime(LastTransitionTimeT&& value) { SetLastTransitionTime(std::forward<LastTransitionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Insight& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing more detail on the status of the insight resource.</p>
     */
    inline const InsightStatus& GetInsightStatus() const { return m_insightStatus; }
    inline bool InsightStatusHasBeenSet() const { return m_insightStatusHasBeenSet; }
    template<typename InsightStatusT = InsightStatus>
    void SetInsightStatus(InsightStatusT&& value) { m_insightStatusHasBeenSet = true; m_insightStatus = std::forward<InsightStatusT>(value); }
    template<typename InsightStatusT = InsightStatus>
    Insight& WithInsightStatus(InsightStatusT&& value) { SetInsightStatus(std::forward<InsightStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of how to remediate the finding of this insight if applicable. </p>
     */
    inline const Aws::String& GetRecommendation() const { return m_recommendation; }
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
    template<typename RecommendationT = Aws::String>
    void SetRecommendation(RecommendationT&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::forward<RecommendationT>(value); }
    template<typename RecommendationT = Aws::String>
    Insight& WithRecommendation(RecommendationT&& value) { SetRecommendation(std::forward<RecommendationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Links to sources that provide additional context on the insight.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalInfo() const { return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    template<typename AdditionalInfoT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalInfo(AdditionalInfoT&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::forward<AdditionalInfoT>(value); }
    template<typename AdditionalInfoT = Aws::Map<Aws::String, Aws::String>>
    Insight& WithAdditionalInfo(AdditionalInfoT&& value) { SetAdditionalInfo(std::forward<AdditionalInfoT>(value)); return *this;}
    template<typename AdditionalInfoKeyT = Aws::String, typename AdditionalInfoValueT = Aws::String>
    Insight& AddAdditionalInfo(AdditionalInfoKeyT&& key, AdditionalInfoValueT&& value) {
      m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::forward<AdditionalInfoKeyT>(key), std::forward<AdditionalInfoValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The details about each resource listed in the insight check result.</p>
     */
    inline const Aws::Vector<InsightResourceDetail>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<InsightResourceDetail>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<InsightResourceDetail>>
    Insight& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = InsightResourceDetail>
    Insight& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summary information that relates to the category of the insight. Currently
     * only returned with certain insights having category
     * <code>UPGRADE_READINESS</code>.</p>
     */
    inline const InsightCategorySpecificSummary& GetCategorySpecificSummary() const { return m_categorySpecificSummary; }
    inline bool CategorySpecificSummaryHasBeenSet() const { return m_categorySpecificSummaryHasBeenSet; }
    template<typename CategorySpecificSummaryT = InsightCategorySpecificSummary>
    void SetCategorySpecificSummary(CategorySpecificSummaryT&& value) { m_categorySpecificSummaryHasBeenSet = true; m_categorySpecificSummary = std::forward<CategorySpecificSummaryT>(value); }
    template<typename CategorySpecificSummaryT = InsightCategorySpecificSummary>
    Insight& WithCategorySpecificSummary(CategorySpecificSummaryT&& value) { SetCategorySpecificSummary(std::forward<CategorySpecificSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Category m_category{Category::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_kubernetesVersion;
    bool m_kubernetesVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTime{};
    bool m_lastRefreshTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastTransitionTime{};
    bool m_lastTransitionTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    InsightStatus m_insightStatus;
    bool m_insightStatusHasBeenSet = false;

    Aws::String m_recommendation;
    bool m_recommendationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::Vector<InsightResourceDetail> m_resources;
    bool m_resourcesHasBeenSet = false;

    InsightCategorySpecificSummary m_categorySpecificSummary;
    bool m_categorySpecificSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
