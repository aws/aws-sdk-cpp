/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/EventCode.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Log entry describing an event involving Amazon GameLift resources (such as a
   * fleet). In addition to tracking activity, event codes and messages can provide
   * additional information for troubleshooting and debugging problems.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Event">AWS API
   * Reference</a></p>
   */
  class AWS_GAMELIFT_API Event
  {
  public:
    Event();
    Event(const Aws::Utils::Json::JsonValue& jsonValue);
    Event& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline Event& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline Event& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline Event& WithEventId(const char* value) { SetEventId(value); return *this;}

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline Event& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline Event& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline Event& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>Type of event being logged. </p>
     */
    inline const EventCode& GetEventCode() const{ return m_eventCode; }

    /**
     * <p>Type of event being logged. </p>
     */
    inline void SetEventCode(const EventCode& value) { m_eventCodeHasBeenSet = true; m_eventCode = value; }

    /**
     * <p>Type of event being logged. </p>
     */
    inline void SetEventCode(EventCode&& value) { m_eventCodeHasBeenSet = true; m_eventCode = std::move(value); }

    /**
     * <p>Type of event being logged. </p>
     */
    inline Event& WithEventCode(const EventCode& value) { SetEventCode(value); return *this;}

    /**
     * <p>Type of event being logged. </p>
     */
    inline Event& WithEventCode(EventCode&& value) { SetEventCode(std::move(value)); return *this;}

    /**
     * <p>Additional information related to the event.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Additional information related to the event.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Additional information related to the event.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Additional information related to the event.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Additional information related to the event.</p>
     */
    inline Event& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Additional information related to the event.</p>
     */
    inline Event& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information related to the event.</p>
     */
    inline Event& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Event& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Event& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}

  private:
    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    EventCode m_eventCode;
    bool m_eventCodeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
