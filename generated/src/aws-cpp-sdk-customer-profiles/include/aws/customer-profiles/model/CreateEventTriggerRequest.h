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
    AWS_CUSTOMERPROFILES_API CreateEventTriggerRequest();

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
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CreateEventTriggerRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateEventTriggerRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateEventTriggerRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the event trigger.</p>
     */
    inline const Aws::String& GetEventTriggerName() const{ return m_eventTriggerName; }
    inline bool EventTriggerNameHasBeenSet() const { return m_eventTriggerNameHasBeenSet; }
    inline void SetEventTriggerName(const Aws::String& value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName = value; }
    inline void SetEventTriggerName(Aws::String&& value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName = std::move(value); }
    inline void SetEventTriggerName(const char* value) { m_eventTriggerNameHasBeenSet = true; m_eventTriggerName.assign(value); }
    inline CreateEventTriggerRequest& WithEventTriggerName(const Aws::String& value) { SetEventTriggerName(value); return *this;}
    inline CreateEventTriggerRequest& WithEventTriggerName(Aws::String&& value) { SetEventTriggerName(std::move(value)); return *this;}
    inline CreateEventTriggerRequest& WithEventTriggerName(const char* value) { SetEventTriggerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }
    inline CreateEventTriggerRequest& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline CreateEventTriggerRequest& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline CreateEventTriggerRequest& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event trigger.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateEventTriggerRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEventTriggerRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEventTriggerRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditions that determine when an event should trigger the
     * destination.</p>
     */
    inline const Aws::Vector<EventTriggerCondition>& GetEventTriggerConditions() const{ return m_eventTriggerConditions; }
    inline bool EventTriggerConditionsHasBeenSet() const { return m_eventTriggerConditionsHasBeenSet; }
    inline void SetEventTriggerConditions(const Aws::Vector<EventTriggerCondition>& value) { m_eventTriggerConditionsHasBeenSet = true; m_eventTriggerConditions = value; }
    inline void SetEventTriggerConditions(Aws::Vector<EventTriggerCondition>&& value) { m_eventTriggerConditionsHasBeenSet = true; m_eventTriggerConditions = std::move(value); }
    inline CreateEventTriggerRequest& WithEventTriggerConditions(const Aws::Vector<EventTriggerCondition>& value) { SetEventTriggerConditions(value); return *this;}
    inline CreateEventTriggerRequest& WithEventTriggerConditions(Aws::Vector<EventTriggerCondition>&& value) { SetEventTriggerConditions(std::move(value)); return *this;}
    inline CreateEventTriggerRequest& AddEventTriggerConditions(const EventTriggerCondition& value) { m_eventTriggerConditionsHasBeenSet = true; m_eventTriggerConditions.push_back(value); return *this; }
    inline CreateEventTriggerRequest& AddEventTriggerConditions(EventTriggerCondition&& value) { m_eventTriggerConditionsHasBeenSet = true; m_eventTriggerConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination is triggered only for profiles that meet the criteria of a
     * segment definition.</p>
     */
    inline const Aws::String& GetSegmentFilter() const{ return m_segmentFilter; }
    inline bool SegmentFilterHasBeenSet() const { return m_segmentFilterHasBeenSet; }
    inline void SetSegmentFilter(const Aws::String& value) { m_segmentFilterHasBeenSet = true; m_segmentFilter = value; }
    inline void SetSegmentFilter(Aws::String&& value) { m_segmentFilterHasBeenSet = true; m_segmentFilter = std::move(value); }
    inline void SetSegmentFilter(const char* value) { m_segmentFilterHasBeenSet = true; m_segmentFilter.assign(value); }
    inline CreateEventTriggerRequest& WithSegmentFilter(const Aws::String& value) { SetSegmentFilter(value); return *this;}
    inline CreateEventTriggerRequest& WithSegmentFilter(Aws::String&& value) { SetSegmentFilter(std::move(value)); return *this;}
    inline CreateEventTriggerRequest& WithSegmentFilter(const char* value) { SetSegmentFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines limits controlling whether an event triggers the destination, based
     * on ingestion latency and the number of invocations per profile over specific
     * time periods.</p>
     */
    inline const EventTriggerLimits& GetEventTriggerLimits() const{ return m_eventTriggerLimits; }
    inline bool EventTriggerLimitsHasBeenSet() const { return m_eventTriggerLimitsHasBeenSet; }
    inline void SetEventTriggerLimits(const EventTriggerLimits& value) { m_eventTriggerLimitsHasBeenSet = true; m_eventTriggerLimits = value; }
    inline void SetEventTriggerLimits(EventTriggerLimits&& value) { m_eventTriggerLimitsHasBeenSet = true; m_eventTriggerLimits = std::move(value); }
    inline CreateEventTriggerRequest& WithEventTriggerLimits(const EventTriggerLimits& value) { SetEventTriggerLimits(value); return *this;}
    inline CreateEventTriggerRequest& WithEventTriggerLimits(EventTriggerLimits&& value) { SetEventTriggerLimits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateEventTriggerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateEventTriggerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateEventTriggerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateEventTriggerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateEventTriggerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateEventTriggerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateEventTriggerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateEventTriggerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateEventTriggerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
