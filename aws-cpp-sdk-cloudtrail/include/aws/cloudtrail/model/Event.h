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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Resource.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Contains information about an event that was returned by a lookup request.
   * The result includes a representation of a CloudTrail event.</p>
   */
  class AWS_CLOUDTRAIL_API Event
  {
  public:
    Event();
    Event(const Aws::Utils::Json::JsonValue& jsonValue);
    Event& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline Event& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline Event& WithEventId(Aws::String&& value) { SetEventId(value); return *this;}

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline Event& WithEventId(const char* value) { SetEventId(value); return *this;}

    /**
     * <p>The name of the event returned.</p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }

    /**
     * <p>The name of the event returned.</p>
     */
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }

    /**
     * <p>The name of the event returned.</p>
     */
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = value; }

    /**
     * <p>The name of the event returned.</p>
     */
    inline void SetEventName(const char* value) { m_eventNameHasBeenSet = true; m_eventName.assign(value); }

    /**
     * <p>The name of the event returned.</p>
     */
    inline Event& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}

    /**
     * <p>The name of the event returned.</p>
     */
    inline Event& WithEventName(Aws::String&& value) { SetEventName(value); return *this;}

    /**
     * <p>The name of the event returned.</p>
     */
    inline Event& WithEventName(const char* value) { SetEventName(value); return *this;}

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline Event& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline Event& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(value); return *this;}

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline Event& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline Event& WithUsername(Aws::String&& value) { SetUsername(value); return *this;}

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline Event& WithUsername(const char* value) { SetUsername(value); return *this;}

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline Event& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline Event& WithResources(Aws::Vector<Resource>&& value) { SetResources(value); return *this;}

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline Event& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline Event& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline const Aws::String& GetCloudTrailEvent() const{ return m_cloudTrailEvent; }

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline void SetCloudTrailEvent(const Aws::String& value) { m_cloudTrailEventHasBeenSet = true; m_cloudTrailEvent = value; }

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline void SetCloudTrailEvent(Aws::String&& value) { m_cloudTrailEventHasBeenSet = true; m_cloudTrailEvent = value; }

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline void SetCloudTrailEvent(const char* value) { m_cloudTrailEventHasBeenSet = true; m_cloudTrailEvent.assign(value); }

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline Event& WithCloudTrailEvent(const Aws::String& value) { SetCloudTrailEvent(value); return *this;}

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline Event& WithCloudTrailEvent(Aws::String&& value) { SetCloudTrailEvent(value); return *this;}

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline Event& WithCloudTrailEvent(const char* value) { SetCloudTrailEvent(value); return *this;}

  private:
    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;
    Aws::String m_eventName;
    bool m_eventNameHasBeenSet;
    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet;
    Aws::String m_username;
    bool m_usernameHasBeenSet;
    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet;
    Aws::String m_cloudTrailEvent;
    bool m_cloudTrailEventHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
