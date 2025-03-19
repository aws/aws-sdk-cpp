/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/EventTriggerLimits.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/customer-profiles/model/EventTriggerCondition.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class CreateEventTriggerResult
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateEventTriggerResult() = default;
    AWS_CUSTOMERPROFILES_API CreateEventTriggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API CreateEventTriggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the event trigger.</p>
     */
    inline const Aws::String& GetEventTriggerName() const { return m_eventTriggerName; }
    template<typename EventTriggerNameT = Aws::String>
    void SetEventTriggerName(EventTriggerNameT&& value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName = std::forward<EventTriggerNameT>(value); }
    template<typename EventTriggerNameT = Aws::String>
    CreateEventTriggerResult& WithEventTriggerName(EventTriggerNameT&& value) { SetEventTriggerName(std::forward<EventTriggerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const { return m_objectTypeName; }
    template<typename ObjectTypeNameT = Aws::String>
    void SetObjectTypeName(ObjectTypeNameT&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::forward<ObjectTypeNameT>(value); }
    template<typename ObjectTypeNameT = Aws::String>
    CreateEventTriggerResult& WithObjectTypeName(ObjectTypeNameT&& value) { SetObjectTypeName(std::forward<ObjectTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event trigger.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEventTriggerResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditions that determine when an event should trigger the
     * destination.</p>
     */
    inline const Aws::Vector<EventTriggerCondition>& GetEventTriggerConditions() const { return m_eventTriggerConditions; }
    template<typename EventTriggerConditionsT = Aws::Vector<EventTriggerCondition>>
    void SetEventTriggerConditions(EventTriggerConditionsT&& value) { m_eventTriggerConditionsHasBeenSet = true; m_eventTriggerConditions = std::forward<EventTriggerConditionsT>(value); }
    template<typename EventTriggerConditionsT = Aws::Vector<EventTriggerCondition>>
    CreateEventTriggerResult& WithEventTriggerConditions(EventTriggerConditionsT&& value) { SetEventTriggerConditions(std::forward<EventTriggerConditionsT>(value)); return *this;}
    template<typename EventTriggerConditionsT = EventTriggerCondition>
    CreateEventTriggerResult& AddEventTriggerConditions(EventTriggerConditionsT&& value) { m_eventTriggerConditionsHasBeenSet = true; m_eventTriggerConditions.emplace_back(std::forward<EventTriggerConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination is triggered only for profiles that meet the criteria of a
     * segment definition.</p>
     */
    inline const Aws::String& GetSegmentFilter() const { return m_segmentFilter; }
    template<typename SegmentFilterT = Aws::String>
    void SetSegmentFilter(SegmentFilterT&& value) { m_segmentFilterHasBeenSet = true; m_segmentFilter = std::forward<SegmentFilterT>(value); }
    template<typename SegmentFilterT = Aws::String>
    CreateEventTriggerResult& WithSegmentFilter(SegmentFilterT&& value) { SetSegmentFilter(std::forward<SegmentFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines limits controlling whether an event triggers the destination, based
     * on ingestion latency and the number of invocations per profile over specific
     * time periods.</p>
     */
    inline const EventTriggerLimits& GetEventTriggerLimits() const { return m_eventTriggerLimits; }
    template<typename EventTriggerLimitsT = EventTriggerLimits>
    void SetEventTriggerLimits(EventTriggerLimitsT&& value) { m_eventTriggerLimitsHasBeenSet = true; m_eventTriggerLimits = std::forward<EventTriggerLimitsT>(value); }
    template<typename EventTriggerLimitsT = EventTriggerLimits>
    CreateEventTriggerResult& WithEventTriggerLimits(EventTriggerLimitsT&& value) { SetEventTriggerLimits(std::forward<EventTriggerLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the event trigger was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateEventTriggerResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the event trigger was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    CreateEventTriggerResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateEventTriggerResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateEventTriggerResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEventTriggerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventTriggerName;
    bool m_eventTriggerNameHasBeenSet = false;

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EventTriggerCondition> m_eventTriggerConditions;
    bool m_eventTriggerConditionsHasBeenSet = false;

    Aws::String m_segmentFilter;
    bool m_segmentFilterHasBeenSet = false;

    EventTriggerLimits m_eventTriggerLimits;
    bool m_eventTriggerLimitsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
