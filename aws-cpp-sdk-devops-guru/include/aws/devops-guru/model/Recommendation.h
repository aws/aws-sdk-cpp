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
    AWS_DEVOPSGURU_API Recommendation();
    AWS_DEVOPSGURU_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A description of the problem. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the problem. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description of the problem. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description of the problem. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description of the problem. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description of the problem. </p>
     */
    inline Recommendation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the problem. </p>
     */
    inline Recommendation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the problem. </p>
     */
    inline Recommendation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A hyperlink to information to help you address the problem. </p>
     */
    inline const Aws::String& GetLink() const{ return m_link; }

    /**
     * <p> A hyperlink to information to help you address the problem. </p>
     */
    inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }

    /**
     * <p> A hyperlink to information to help you address the problem. </p>
     */
    inline void SetLink(const Aws::String& value) { m_linkHasBeenSet = true; m_link = value; }

    /**
     * <p> A hyperlink to information to help you address the problem. </p>
     */
    inline void SetLink(Aws::String&& value) { m_linkHasBeenSet = true; m_link = std::move(value); }

    /**
     * <p> A hyperlink to information to help you address the problem. </p>
     */
    inline void SetLink(const char* value) { m_linkHasBeenSet = true; m_link.assign(value); }

    /**
     * <p> A hyperlink to information to help you address the problem. </p>
     */
    inline Recommendation& WithLink(const Aws::String& value) { SetLink(value); return *this;}

    /**
     * <p> A hyperlink to information to help you address the problem. </p>
     */
    inline Recommendation& WithLink(Aws::String&& value) { SetLink(std::move(value)); return *this;}

    /**
     * <p> A hyperlink to information to help you address the problem. </p>
     */
    inline Recommendation& WithLink(const char* value) { SetLink(value); return *this;}


    /**
     * <p> The name of the recommendation. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the recommendation. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the recommendation. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the recommendation. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the recommendation. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the recommendation. </p>
     */
    inline Recommendation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the recommendation. </p>
     */
    inline Recommendation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the recommendation. </p>
     */
    inline Recommendation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The reason DevOps Guru flagged the anomalous behavior as a problem. </p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p> The reason DevOps Guru flagged the anomalous behavior as a problem. </p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p> The reason DevOps Guru flagged the anomalous behavior as a problem. </p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p> The reason DevOps Guru flagged the anomalous behavior as a problem. </p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p> The reason DevOps Guru flagged the anomalous behavior as a problem. </p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p> The reason DevOps Guru flagged the anomalous behavior as a problem. </p>
     */
    inline Recommendation& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p> The reason DevOps Guru flagged the anomalous behavior as a problem. </p>
     */
    inline Recommendation& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p> The reason DevOps Guru flagged the anomalous behavior as a problem. </p>
     */
    inline Recommendation& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p> Events that are related to the problem. Use these events to learn more about
     * what's happening and to help address the issue. </p>
     */
    inline const Aws::Vector<RecommendationRelatedEvent>& GetRelatedEvents() const{ return m_relatedEvents; }

    /**
     * <p> Events that are related to the problem. Use these events to learn more about
     * what's happening and to help address the issue. </p>
     */
    inline bool RelatedEventsHasBeenSet() const { return m_relatedEventsHasBeenSet; }

    /**
     * <p> Events that are related to the problem. Use these events to learn more about
     * what's happening and to help address the issue. </p>
     */
    inline void SetRelatedEvents(const Aws::Vector<RecommendationRelatedEvent>& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents = value; }

    /**
     * <p> Events that are related to the problem. Use these events to learn more about
     * what's happening and to help address the issue. </p>
     */
    inline void SetRelatedEvents(Aws::Vector<RecommendationRelatedEvent>&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents = std::move(value); }

    /**
     * <p> Events that are related to the problem. Use these events to learn more about
     * what's happening and to help address the issue. </p>
     */
    inline Recommendation& WithRelatedEvents(const Aws::Vector<RecommendationRelatedEvent>& value) { SetRelatedEvents(value); return *this;}

    /**
     * <p> Events that are related to the problem. Use these events to learn more about
     * what's happening and to help address the issue. </p>
     */
    inline Recommendation& WithRelatedEvents(Aws::Vector<RecommendationRelatedEvent>&& value) { SetRelatedEvents(std::move(value)); return *this;}

    /**
     * <p> Events that are related to the problem. Use these events to learn more about
     * what's happening and to help address the issue. </p>
     */
    inline Recommendation& AddRelatedEvents(const RecommendationRelatedEvent& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(value); return *this; }

    /**
     * <p> Events that are related to the problem. Use these events to learn more about
     * what's happening and to help address the issue. </p>
     */
    inline Recommendation& AddRelatedEvents(RecommendationRelatedEvent&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(std::move(value)); return *this; }


    /**
     * <p> Anomalies that are related to the problem. Use these Anomalies to learn more
     * about what's happening and to help address the issue. </p>
     */
    inline const Aws::Vector<RecommendationRelatedAnomaly>& GetRelatedAnomalies() const{ return m_relatedAnomalies; }

    /**
     * <p> Anomalies that are related to the problem. Use these Anomalies to learn more
     * about what's happening and to help address the issue. </p>
     */
    inline bool RelatedAnomaliesHasBeenSet() const { return m_relatedAnomaliesHasBeenSet; }

    /**
     * <p> Anomalies that are related to the problem. Use these Anomalies to learn more
     * about what's happening and to help address the issue. </p>
     */
    inline void SetRelatedAnomalies(const Aws::Vector<RecommendationRelatedAnomaly>& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies = value; }

    /**
     * <p> Anomalies that are related to the problem. Use these Anomalies to learn more
     * about what's happening and to help address the issue. </p>
     */
    inline void SetRelatedAnomalies(Aws::Vector<RecommendationRelatedAnomaly>&& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies = std::move(value); }

    /**
     * <p> Anomalies that are related to the problem. Use these Anomalies to learn more
     * about what's happening and to help address the issue. </p>
     */
    inline Recommendation& WithRelatedAnomalies(const Aws::Vector<RecommendationRelatedAnomaly>& value) { SetRelatedAnomalies(value); return *this;}

    /**
     * <p> Anomalies that are related to the problem. Use these Anomalies to learn more
     * about what's happening and to help address the issue. </p>
     */
    inline Recommendation& WithRelatedAnomalies(Aws::Vector<RecommendationRelatedAnomaly>&& value) { SetRelatedAnomalies(std::move(value)); return *this;}

    /**
     * <p> Anomalies that are related to the problem. Use these Anomalies to learn more
     * about what's happening and to help address the issue. </p>
     */
    inline Recommendation& AddRelatedAnomalies(const RecommendationRelatedAnomaly& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies.push_back(value); return *this; }

    /**
     * <p> Anomalies that are related to the problem. Use these Anomalies to learn more
     * about what's happening and to help address the issue. </p>
     */
    inline Recommendation& AddRelatedAnomalies(RecommendationRelatedAnomaly&& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies.push_back(std::move(value)); return *this; }


    /**
     * <p>The category type of the recommendation.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The category type of the recommendation.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category type of the recommendation.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category type of the recommendation.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category type of the recommendation.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The category type of the recommendation.</p>
     */
    inline Recommendation& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The category type of the recommendation.</p>
     */
    inline Recommendation& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category type of the recommendation.</p>
     */
    inline Recommendation& WithCategory(const char* value) { SetCategory(value); return *this;}

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
