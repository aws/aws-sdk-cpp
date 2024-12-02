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
  class UpdateEventTriggerResult
  {
  public:
    AWS_CUSTOMERPROFILES_API UpdateEventTriggerResult();
    AWS_CUSTOMERPROFILES_API UpdateEventTriggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API UpdateEventTriggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the event trigger.</p>
     */
    inline const Aws::String& GetEventTriggerName() const{ return m_eventTriggerName; }
    inline void SetEventTriggerName(const Aws::String& value) { m_eventTriggerName = value; }
    inline void SetEventTriggerName(Aws::String&& value) { m_eventTriggerName = std::move(value); }
    inline void SetEventTriggerName(const char* value) { m_eventTriggerName.assign(value); }
    inline UpdateEventTriggerResult& WithEventTriggerName(const Aws::String& value) { SetEventTriggerName(value); return *this;}
    inline UpdateEventTriggerResult& WithEventTriggerName(Aws::String&& value) { SetEventTriggerName(std::move(value)); return *this;}
    inline UpdateEventTriggerResult& WithEventTriggerName(const char* value) { SetEventTriggerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeName = value; }
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeName = std::move(value); }
    inline void SetObjectTypeName(const char* value) { m_objectTypeName.assign(value); }
    inline UpdateEventTriggerResult& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline UpdateEventTriggerResult& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline UpdateEventTriggerResult& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event trigger.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateEventTriggerResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateEventTriggerResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateEventTriggerResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditions that determine when an event should trigger the
     * destination.</p>
     */
    inline const Aws::Vector<EventTriggerCondition>& GetEventTriggerConditions() const{ return m_eventTriggerConditions; }
    inline void SetEventTriggerConditions(const Aws::Vector<EventTriggerCondition>& value) { m_eventTriggerConditions = value; }
    inline void SetEventTriggerConditions(Aws::Vector<EventTriggerCondition>&& value) { m_eventTriggerConditions = std::move(value); }
    inline UpdateEventTriggerResult& WithEventTriggerConditions(const Aws::Vector<EventTriggerCondition>& value) { SetEventTriggerConditions(value); return *this;}
    inline UpdateEventTriggerResult& WithEventTriggerConditions(Aws::Vector<EventTriggerCondition>&& value) { SetEventTriggerConditions(std::move(value)); return *this;}
    inline UpdateEventTriggerResult& AddEventTriggerConditions(const EventTriggerCondition& value) { m_eventTriggerConditions.push_back(value); return *this; }
    inline UpdateEventTriggerResult& AddEventTriggerConditions(EventTriggerCondition&& value) { m_eventTriggerConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination is triggered only for profiles that meet the criteria of a
     * segment definition.</p>
     */
    inline const Aws::String& GetSegmentFilter() const{ return m_segmentFilter; }
    inline void SetSegmentFilter(const Aws::String& value) { m_segmentFilter = value; }
    inline void SetSegmentFilter(Aws::String&& value) { m_segmentFilter = std::move(value); }
    inline void SetSegmentFilter(const char* value) { m_segmentFilter.assign(value); }
    inline UpdateEventTriggerResult& WithSegmentFilter(const Aws::String& value) { SetSegmentFilter(value); return *this;}
    inline UpdateEventTriggerResult& WithSegmentFilter(Aws::String&& value) { SetSegmentFilter(std::move(value)); return *this;}
    inline UpdateEventTriggerResult& WithSegmentFilter(const char* value) { SetSegmentFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines limits controlling whether an event triggers the destination, based
     * on ingestion latency and the number of invocations per profile over specific
     * time periods.</p>
     */
    inline const EventTriggerLimits& GetEventTriggerLimits() const{ return m_eventTriggerLimits; }
    inline void SetEventTriggerLimits(const EventTriggerLimits& value) { m_eventTriggerLimits = value; }
    inline void SetEventTriggerLimits(EventTriggerLimits&& value) { m_eventTriggerLimits = std::move(value); }
    inline UpdateEventTriggerResult& WithEventTriggerLimits(const EventTriggerLimits& value) { SetEventTriggerLimits(value); return *this;}
    inline UpdateEventTriggerResult& WithEventTriggerLimits(EventTriggerLimits&& value) { SetEventTriggerLimits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the event trigger was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateEventTriggerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateEventTriggerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the event trigger was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline UpdateEventTriggerResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline UpdateEventTriggerResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateEventTriggerResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateEventTriggerResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateEventTriggerResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateEventTriggerResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateEventTriggerResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateEventTriggerResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateEventTriggerResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateEventTriggerResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateEventTriggerResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateEventTriggerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateEventTriggerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateEventTriggerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_eventTriggerName;

    Aws::String m_objectTypeName;

    Aws::String m_description;

    Aws::Vector<EventTriggerCondition> m_eventTriggerConditions;

    Aws::String m_segmentFilter;

    EventTriggerLimits m_eventTriggerLimits;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
