/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Health
{
namespace Model
{

  /**
   * <p>Detailed information about an event. A combination of an <a>Event</a> object,
   * an <a>EventDescription</a> object, and additional metadata about the event.
   * Returned by the <a>DescribeEventDetails</a> operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EventDetails">AWS
   * API Reference</a></p>
   */
  class AWS_HEALTH_API EventDetails
  {
  public:
    EventDetails();
    EventDetails(Aws::Utils::Json::JsonView jsonValue);
    EventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Summary information about the event.</p>
     */
    inline const Event& GetEvent() const{ return m_event; }

    /**
     * <p>Summary information about the event.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>Summary information about the event.</p>
     */
    inline void SetEvent(const Event& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>Summary information about the event.</p>
     */
    inline void SetEvent(Event&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>Summary information about the event.</p>
     */
    inline EventDetails& WithEvent(const Event& value) { SetEvent(value); return *this;}

    /**
     * <p>Summary information about the event.</p>
     */
    inline EventDetails& WithEvent(Event&& value) { SetEvent(std::move(value)); return *this;}


    /**
     * <p>The most recent description of the event.</p>
     */
    inline const Aws::String& GetEventDescription() const{ return m_eventDescription; }

    /**
     * <p>The most recent description of the event.</p>
     */
    inline bool EventDescriptionHasBeenSet() const { return m_eventDescriptionHasBeenSet; }

    /**
     * <p>The most recent description of the event.</p>
     */
    inline void SetEventDescription(const Aws::String& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = value; }

    /**
     * <p>The most recent description of the event.</p>
     */
    inline void SetEventDescription(Aws::String&& value) { m_eventDescriptionHasBeenSet = true; m_eventDescription = std::move(value); }

    /**
     * <p>The most recent description of the event.</p>
     */
    inline void SetEventDescription(const char* value) { m_eventDescriptionHasBeenSet = true; m_eventDescription.assign(value); }

    /**
     * <p>The most recent description of the event.</p>
     */
    inline EventDetails& WithEventDescription(const Aws::String& value) { SetEventDescription(value); return *this;}

    /**
     * <p>The most recent description of the event.</p>
     */
    inline EventDetails& WithEventDescription(Aws::String&& value) { SetEventDescription(std::move(value)); return *this;}

    /**
     * <p>The most recent description of the event.</p>
     */
    inline EventDetails& WithEventDescription(const char* value) { SetEventDescription(value); return *this;}


    /**
     * <p>Additional metadata about the event.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventMetadata() const{ return m_eventMetadata; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline bool EventMetadataHasBeenSet() const { return m_eventMetadataHasBeenSet; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline void SetEventMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata = value; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline void SetEventMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata = std::move(value); }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline EventDetails& WithEventMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetEventMetadata(value); return *this;}

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline EventDetails& WithEventMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetEventMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline EventDetails& AddEventMetadata(const Aws::String& key, const Aws::String& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(key, value); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline EventDetails& AddEventMetadata(Aws::String&& key, const Aws::String& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline EventDetails& AddEventMetadata(const Aws::String& key, Aws::String&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline EventDetails& AddEventMetadata(Aws::String&& key, Aws::String&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline EventDetails& AddEventMetadata(const char* key, Aws::String&& value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline EventDetails& AddEventMetadata(Aws::String&& key, const char* value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional metadata about the event.</p>
     */
    inline EventDetails& AddEventMetadata(const char* key, const char* value) { m_eventMetadataHasBeenSet = true; m_eventMetadata.emplace(key, value); return *this; }

  private:

    Event m_event;
    bool m_eventHasBeenSet;

    Aws::String m_eventDescription;
    bool m_eventDescriptionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_eventMetadata;
    bool m_eventMetadataHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
