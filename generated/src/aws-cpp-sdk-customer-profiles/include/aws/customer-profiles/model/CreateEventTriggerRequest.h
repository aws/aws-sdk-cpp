/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/EventTriggerLimits.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/customer-profiles/model/EventTriggerCondition.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class CreateEventTriggerRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateEventTriggerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventTrigger"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateEventTriggerRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the event trigger.</p>
     */
    inline const Aws::String& GetEventTriggerName() const { return m_eventTriggerName; }
    inline bool EventTriggerNameHasBeenSet() const { return m_eventTriggerNameHasBeenSet; }
    template<typename EventTriggerNameT = Aws::String>
    void SetEventTriggerName(EventTriggerNameT&& value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName = std::forward<EventTriggerNameT>(value); }
    template<typename EventTriggerNameT = Aws::String>
    CreateEventTriggerRequest& WithEventTriggerName(EventTriggerNameT&& value) { SetEventTriggerName(std::forward<EventTriggerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const { return m_objectTypeName; }
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
    template<typename ObjectTypeNameT = Aws::String>
    void SetObjectTypeName(ObjectTypeNameT&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::forward<ObjectTypeNameT>(value); }
    template<typename ObjectTypeNameT = Aws::String>
    CreateEventTriggerRequest& WithObjectTypeName(ObjectTypeNameT&& value) { SetObjectTypeName(std::forward<ObjectTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event trigger.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEventTriggerRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditions that determine when an event should trigger the
     * destination.</p>
     */
    inline const Aws::Vector<EventTriggerCondition>& GetEventTriggerConditions() const { return m_eventTriggerConditions; }
    inline bool EventTriggerConditionsHasBeenSet() const { return m_eventTriggerConditionsHasBeenSet; }
    template<typename EventTriggerConditionsT = Aws::Vector<EventTriggerCondition>>
    void SetEventTriggerConditions(EventTriggerConditionsT&& value) { m_eventTriggerConditionsHasBeenSet = true; m_eventTriggerConditions = std::forward<EventTriggerConditionsT>(value); }
    template<typename EventTriggerConditionsT = Aws::Vector<EventTriggerCondition>>
    CreateEventTriggerRequest& WithEventTriggerConditions(EventTriggerConditionsT&& value) { SetEventTriggerConditions(std::forward<EventTriggerConditionsT>(value)); return *this;}
    template<typename EventTriggerConditionsT = EventTriggerCondition>
    CreateEventTriggerRequest& AddEventTriggerConditions(EventTriggerConditionsT&& value) { m_eventTriggerConditionsHasBeenSet = true; m_eventTriggerConditions.emplace_back(std::forward<EventTriggerConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination is triggered only for profiles that meet the criteria of a
     * segment definition.</p>
     */
    inline const Aws::String& GetSegmentFilter() const { return m_segmentFilter; }
    inline bool SegmentFilterHasBeenSet() const { return m_segmentFilterHasBeenSet; }
    template<typename SegmentFilterT = Aws::String>
    void SetSegmentFilter(SegmentFilterT&& value) { m_segmentFilterHasBeenSet = true; m_segmentFilter = std::forward<SegmentFilterT>(value); }
    template<typename SegmentFilterT = Aws::String>
    CreateEventTriggerRequest& WithSegmentFilter(SegmentFilterT&& value) { SetSegmentFilter(std::forward<SegmentFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines limits controlling whether an event triggers the destination, based
     * on ingestion latency and the number of invocations per profile over specific
     * time periods.</p>
     */
    inline const EventTriggerLimits& GetEventTriggerLimits() const { return m_eventTriggerLimits; }
    inline bool EventTriggerLimitsHasBeenSet() const { return m_eventTriggerLimitsHasBeenSet; }
    template<typename EventTriggerLimitsT = EventTriggerLimits>
    void SetEventTriggerLimits(EventTriggerLimitsT&& value) { m_eventTriggerLimitsHasBeenSet = true; m_eventTriggerLimits = std::forward<EventTriggerLimitsT>(value); }
    template<typename EventTriggerLimitsT = EventTriggerLimits>
    CreateEventTriggerRequest& WithEventTriggerLimits(EventTriggerLimitsT&& value) { SetEventTriggerLimits(std::forward<EventTriggerLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateEventTriggerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateEventTriggerRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
