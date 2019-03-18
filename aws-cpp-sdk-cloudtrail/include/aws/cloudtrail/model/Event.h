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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Resource.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Contains information about an event that was returned by a lookup request.
   * The result includes a representation of a CloudTrail event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/Event">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API Event
  {
  public:
    Event();
    Event(Aws::Utils::Json::JsonView jsonValue);
    Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

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
    inline Event& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

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
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }

    /**
     * <p>The name of the event returned.</p>
     */
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }

    /**
     * <p>The name of the event returned.</p>
     */
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }

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
    inline Event& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}

    /**
     * <p>The name of the event returned.</p>
     */
    inline Event& WithEventName(const char* value) { SetEventName(value); return *this;}


    /**
     * <p>Information about whether the event is a write event or a read event. </p>
     */
    inline const Aws::String& GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>Information about whether the event is a write event or a read event. </p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>Information about whether the event is a write event or a read event. </p>
     */
    inline void SetReadOnly(const Aws::String& value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>Information about whether the event is a write event or a read event. </p>
     */
    inline void SetReadOnly(Aws::String&& value) { m_readOnlyHasBeenSet = true; m_readOnly = std::move(value); }

    /**
     * <p>Information about whether the event is a write event or a read event. </p>
     */
    inline void SetReadOnly(const char* value) { m_readOnlyHasBeenSet = true; m_readOnly.assign(value); }

    /**
     * <p>Information about whether the event is a write event or a read event. </p>
     */
    inline Event& WithReadOnly(const Aws::String& value) { SetReadOnly(value); return *this;}

    /**
     * <p>Information about whether the event is a write event or a read event. </p>
     */
    inline Event& WithReadOnly(Aws::String&& value) { SetReadOnly(std::move(value)); return *this;}

    /**
     * <p>Information about whether the event is a write event or a read event. </p>
     */
    inline Event& WithReadOnly(const char* value) { SetReadOnly(value); return *this;}


    /**
     * <p>The AWS access key ID that was used to sign the request. If the request was
     * made with temporary security credentials, this is the access key ID of the
     * temporary credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The AWS access key ID that was used to sign the request. If the request was
     * made with temporary security credentials, this is the access key ID of the
     * temporary credentials.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The AWS access key ID that was used to sign the request. If the request was
     * made with temporary security credentials, this is the access key ID of the
     * temporary credentials.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The AWS access key ID that was used to sign the request. If the request was
     * made with temporary security credentials, this is the access key ID of the
     * temporary credentials.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The AWS access key ID that was used to sign the request. If the request was
     * made with temporary security credentials, this is the access key ID of the
     * temporary credentials.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The AWS access key ID that was used to sign the request. If the request was
     * made with temporary security credentials, this is the access key ID of the
     * temporary credentials.</p>
     */
    inline Event& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The AWS access key ID that was used to sign the request. If the request was
     * made with temporary security credentials, this is the access key ID of the
     * temporary credentials.</p>
     */
    inline Event& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS access key ID that was used to sign the request. If the request was
     * made with temporary security credentials, this is the access key ID of the
     * temporary credentials.</p>
     */
    inline Event& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>The date and time of the event returned.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline Event& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p>The date and time of the event returned.</p>
     */
    inline Event& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}


    /**
     * <p>The AWS service that the request was made to.</p>
     */
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }

    /**
     * <p>The AWS service that the request was made to.</p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p>The AWS service that the request was made to.</p>
     */
    inline void SetEventSource(const Aws::String& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p>The AWS service that the request was made to.</p>
     */
    inline void SetEventSource(Aws::String&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p>The AWS service that the request was made to.</p>
     */
    inline void SetEventSource(const char* value) { m_eventSourceHasBeenSet = true; m_eventSource.assign(value); }

    /**
     * <p>The AWS service that the request was made to.</p>
     */
    inline Event& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}

    /**
     * <p>The AWS service that the request was made to.</p>
     */
    inline Event& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}

    /**
     * <p>The AWS service that the request was made to.</p>
     */
    inline Event& WithEventSource(const char* value) { SetEventSource(value); return *this;}


    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

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
    inline Event& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

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
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline Event& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline Event& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline Event& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline Event& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline const Aws::String& GetCloudTrailEvent() const{ return m_cloudTrailEvent; }

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline bool CloudTrailEventHasBeenSet() const { return m_cloudTrailEventHasBeenSet; }

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline void SetCloudTrailEvent(const Aws::String& value) { m_cloudTrailEventHasBeenSet = true; m_cloudTrailEvent = value; }

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline void SetCloudTrailEvent(Aws::String&& value) { m_cloudTrailEventHasBeenSet = true; m_cloudTrailEvent = std::move(value); }

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
    inline Event& WithCloudTrailEvent(Aws::String&& value) { SetCloudTrailEvent(std::move(value)); return *this;}

    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline Event& WithCloudTrailEvent(const char* value) { SetCloudTrailEvent(value); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet;

    Aws::String m_readOnly;
    bool m_readOnlyHasBeenSet;

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet;

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
