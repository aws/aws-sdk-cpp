/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/RecommendationRelatedEvent.h>
#include <aws/devops-guru/model/RecommendationRelatedAnomaly.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Recommendation information to help you remediate detected anomalous behavior
   * that generated an insight. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_DEVOPSGURU_API Recommendation() = default;
    AWS_DEVOPSGURU_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A description of the problem. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Recommendation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A hyperlink to information to help you address the problem. </p>
     */
    inline const Aws::String& GetLink() const { return m_link; }
    inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }
    template<typename LinkT = Aws::String>
    void SetLink(LinkT&& value) { m_linkHasBeenSet = true; m_link = std::forward<LinkT>(value); }
    template<typename LinkT = Aws::String>
    Recommendation& WithLink(LinkT&& value) { SetLink(std::forward<LinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the recommendation. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Recommendation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason DevOps Guru flagged the anomalous behavior as a problem. </p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    Recommendation& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Events that are related to the problem. Use these events to learn more about
     * what's happening and to help address the issue. </p>
     */
    inline const Aws::Vector<RecommendationRelatedEvent>& GetRelatedEvents() const { return m_relatedEvents; }
    inline bool RelatedEventsHasBeenSet() const { return m_relatedEventsHasBeenSet; }
    template<typename RelatedEventsT = Aws::Vector<RecommendationRelatedEvent>>
    void SetRelatedEvents(RelatedEventsT&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents = std::forward<RelatedEventsT>(value); }
    template<typename RelatedEventsT = Aws::Vector<RecommendationRelatedEvent>>
    Recommendation& WithRelatedEvents(RelatedEventsT&& value) { SetRelatedEvents(std::forward<RelatedEventsT>(value)); return *this;}
    template<typename RelatedEventsT = RecommendationRelatedEvent>
    Recommendation& AddRelatedEvents(RelatedEventsT&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.emplace_back(std::forward<RelatedEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Anomalies that are related to the problem. Use these Anomalies to learn more
     * about what's happening and to help address the issue. </p>
     */
    inline const Aws::Vector<RecommendationRelatedAnomaly>& GetRelatedAnomalies() const { return m_relatedAnomalies; }
    inline bool RelatedAnomaliesHasBeenSet() const { return m_relatedAnomaliesHasBeenSet; }
    template<typename RelatedAnomaliesT = Aws::Vector<RecommendationRelatedAnomaly>>
    void SetRelatedAnomalies(RelatedAnomaliesT&& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies = std::forward<RelatedAnomaliesT>(value); }
    template<typename RelatedAnomaliesT = Aws::Vector<RecommendationRelatedAnomaly>>
    Recommendation& WithRelatedAnomalies(RelatedAnomaliesT&& value) { SetRelatedAnomalies(std::forward<RelatedAnomaliesT>(value)); return *this;}
    template<typename RelatedAnomaliesT = RecommendationRelatedAnomaly>
    Recommendation& AddRelatedAnomalies(RelatedAnomaliesT&& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies.emplace_back(std::forward<RelatedAnomaliesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The category type of the recommendation.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    Recommendation& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_link;
    bool m_linkHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<RecommendationRelatedEvent> m_relatedEvents;
    bool m_relatedEventsHasBeenSet = false;

    Aws::Vector<RecommendationRelatedAnomaly> m_relatedAnomalies;
    bool m_relatedAnomaliesHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
