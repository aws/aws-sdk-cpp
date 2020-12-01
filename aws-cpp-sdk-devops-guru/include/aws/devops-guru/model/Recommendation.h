/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/RecommendationRelatedAnomaly.h>
#include <aws/devops-guru/model/RecommendationRelatedEvent.h>
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

  class AWS_DEVOPSGURU_API Recommendation
  {
  public:
    Recommendation();
    Recommendation(Aws::Utils::Json::JsonView jsonValue);
    Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline Recommendation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline Recommendation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline Recommendation& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetLink() const{ return m_link; }

    
    inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }

    
    inline void SetLink(const Aws::String& value) { m_linkHasBeenSet = true; m_link = value; }

    
    inline void SetLink(Aws::String&& value) { m_linkHasBeenSet = true; m_link = std::move(value); }

    
    inline void SetLink(const char* value) { m_linkHasBeenSet = true; m_link.assign(value); }

    
    inline Recommendation& WithLink(const Aws::String& value) { SetLink(value); return *this;}

    
    inline Recommendation& WithLink(Aws::String&& value) { SetLink(std::move(value)); return *this;}

    
    inline Recommendation& WithLink(const char* value) { SetLink(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline Recommendation& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline Recommendation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline Recommendation& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetReason() const{ return m_reason; }

    
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    
    inline Recommendation& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    
    inline Recommendation& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    
    inline Recommendation& WithReason(const char* value) { SetReason(value); return *this;}


    
    inline const Aws::Vector<RecommendationRelatedAnomaly>& GetRelatedAnomalies() const{ return m_relatedAnomalies; }

    
    inline bool RelatedAnomaliesHasBeenSet() const { return m_relatedAnomaliesHasBeenSet; }

    
    inline void SetRelatedAnomalies(const Aws::Vector<RecommendationRelatedAnomaly>& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies = value; }

    
    inline void SetRelatedAnomalies(Aws::Vector<RecommendationRelatedAnomaly>&& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies = std::move(value); }

    
    inline Recommendation& WithRelatedAnomalies(const Aws::Vector<RecommendationRelatedAnomaly>& value) { SetRelatedAnomalies(value); return *this;}

    
    inline Recommendation& WithRelatedAnomalies(Aws::Vector<RecommendationRelatedAnomaly>&& value) { SetRelatedAnomalies(std::move(value)); return *this;}

    
    inline Recommendation& AddRelatedAnomalies(const RecommendationRelatedAnomaly& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies.push_back(value); return *this; }

    
    inline Recommendation& AddRelatedAnomalies(RecommendationRelatedAnomaly&& value) { m_relatedAnomaliesHasBeenSet = true; m_relatedAnomalies.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<RecommendationRelatedEvent>& GetRelatedEvents() const{ return m_relatedEvents; }

    
    inline bool RelatedEventsHasBeenSet() const { return m_relatedEventsHasBeenSet; }

    
    inline void SetRelatedEvents(const Aws::Vector<RecommendationRelatedEvent>& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents = value; }

    
    inline void SetRelatedEvents(Aws::Vector<RecommendationRelatedEvent>&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents = std::move(value); }

    
    inline Recommendation& WithRelatedEvents(const Aws::Vector<RecommendationRelatedEvent>& value) { SetRelatedEvents(value); return *this;}

    
    inline Recommendation& WithRelatedEvents(Aws::Vector<RecommendationRelatedEvent>&& value) { SetRelatedEvents(std::move(value)); return *this;}

    
    inline Recommendation& AddRelatedEvents(const RecommendationRelatedEvent& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(value); return *this; }

    
    inline Recommendation& AddRelatedEvents(RecommendationRelatedEvent&& value) { m_relatedEventsHasBeenSet = true; m_relatedEvents.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_link;
    bool m_linkHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;

    Aws::Vector<RecommendationRelatedAnomaly> m_relatedAnomalies;
    bool m_relatedAnomaliesHasBeenSet;

    Aws::Vector<RecommendationRelatedEvent> m_relatedEvents;
    bool m_relatedEventsHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
