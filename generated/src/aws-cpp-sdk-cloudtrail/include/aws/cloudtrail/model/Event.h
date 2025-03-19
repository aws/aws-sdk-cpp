/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Event
  {
  public:
    AWS_CLOUDTRAIL_API Event() = default;
    AWS_CLOUDTRAIL_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CloudTrail ID of the event returned.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    Event& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event returned.</p>
     */
    inline const Aws::String& GetEventName() const { return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    template<typename EventNameT = Aws::String>
    void SetEventName(EventNameT&& value) { m_eventNameHasBeenSet = true; m_eventName = std::forward<EventNameT>(value); }
    template<typename EventNameT = Aws::String>
    Event& WithEventName(EventNameT&& value) { SetEventName(std::forward<EventNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the event is a write event or a read event. </p>
     */
    inline const Aws::String& GetReadOnly() const { return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    template<typename ReadOnlyT = Aws::String>
    void SetReadOnly(ReadOnlyT&& value) { m_readOnlyHasBeenSet = true; m_readOnly = std::forward<ReadOnlyT>(value); }
    template<typename ReadOnlyT = Aws::String>
    Event& WithReadOnly(ReadOnlyT&& value) { SetReadOnly(std::forward<ReadOnlyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services access key ID that was used to sign the request. If
     * the request was made with temporary security credentials, this is the access key
     * ID of the temporary credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    Event& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the event returned.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    Event& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service to which the request was made.</p>
     */
    inline const Aws::String& GetEventSource() const { return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    template<typename EventSourceT = Aws::String>
    void SetEventSource(EventSourceT&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::forward<EventSourceT>(value); }
    template<typename EventSourceT = Aws::String>
    Event& WithEventSource(EventSourceT&& value) { SetEventSource(std::forward<EventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user name or role name of the requester that called the API in the event
     * returned.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    Event& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resources referenced by the event returned.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Resource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Resource>>
    Event& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Resource>
    Event& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A JSON string that contains a representation of the event returned.</p>
     */
    inline const Aws::String& GetCloudTrailEvent() const { return m_cloudTrailEvent; }
    inline bool CloudTrailEventHasBeenSet() const { return m_cloudTrailEventHasBeenSet; }
    template<typename CloudTrailEventT = Aws::String>
    void SetCloudTrailEvent(CloudTrailEventT&& value) { m_cloudTrailEventHasBeenSet = true; m_cloudTrailEvent = std::forward<CloudTrailEventT>(value); }
    template<typename CloudTrailEventT = Aws::String>
    Event& WithCloudTrailEvent(CloudTrailEventT&& value) { SetCloudTrailEvent(std::forward<CloudTrailEventT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    Aws::String m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_cloudTrailEvent;
    bool m_cloudTrailEventHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
