/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecatalyst/model/OperationType.h>
#include <aws/codecatalyst/model/UserIdentity.h>
#include <aws/codecatalyst/model/ProjectInformation.h>
#include <aws/codecatalyst/model/EventPayload.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about an entry in an event log of Amazon CodeCatalyst
   * activity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/EventLogEntry">AWS
   * API Reference</a></p>
   */
  class EventLogEntry
  {
  public:
    AWS_CODECATALYST_API EventLogEntry() = default;
    AWS_CODECATALYST_API EventLogEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API EventLogEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated unique ID of the event.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    EventLogEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event.</p>
     */
    inline const Aws::String& GetEventName() const { return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    template<typename EventNameT = Aws::String>
    void SetEventName(EventNameT&& value) { m_eventNameHasBeenSet = true; m_eventName = std::forward<EventNameT>(value); }
    template<typename EventNameT = Aws::String>
    EventLogEntry& WithEventName(EventNameT&& value) { SetEventName(std::forward<EventNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the event.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    EventLogEntry& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category for the event.</p>
     */
    inline const Aws::String& GetEventCategory() const { return m_eventCategory; }
    inline bool EventCategoryHasBeenSet() const { return m_eventCategoryHasBeenSet; }
    template<typename EventCategoryT = Aws::String>
    void SetEventCategory(EventCategoryT&& value) { m_eventCategoryHasBeenSet = true; m_eventCategory = std::forward<EventCategoryT>(value); }
    template<typename EventCategoryT = Aws::String>
    EventLogEntry& WithEventCategory(EventCategoryT&& value) { SetEventCategory(std::forward<EventCategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the event.</p>
     */
    inline const Aws::String& GetEventSource() const { return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    template<typename EventSourceT = Aws::String>
    void SetEventSource(EventSourceT&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::forward<EventSourceT>(value); }
    template<typename EventSourceT = Aws::String>
    EventLogEntry& WithEventSource(EventSourceT&& value) { SetEventSource(std::forward<EventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the event took place, in coordinated universal time (UTC) timestamp
     * format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    EventLogEntry& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the event.</p>
     */
    inline OperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(OperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline EventLogEntry& WithOperationType(OperationType value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the user whose actions are recorded in the
     * event.</p>
     */
    inline const UserIdentity& GetUserIdentity() const { return m_userIdentity; }
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }
    template<typename UserIdentityT = UserIdentity>
    void SetUserIdentity(UserIdentityT&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::forward<UserIdentityT>(value); }
    template<typename UserIdentityT = UserIdentity>
    EventLogEntry& WithUserIdentity(UserIdentityT&& value) { SetUserIdentity(std::forward<UserIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the project where the event occurred.</p>
     */
    inline const ProjectInformation& GetProjectInformation() const { return m_projectInformation; }
    inline bool ProjectInformationHasBeenSet() const { return m_projectInformationHasBeenSet; }
    template<typename ProjectInformationT = ProjectInformation>
    void SetProjectInformation(ProjectInformationT&& value) { m_projectInformationHasBeenSet = true; m_projectInformation = std::forward<ProjectInformationT>(value); }
    template<typename ProjectInformationT = ProjectInformation>
    EventLogEntry& WithProjectInformation(ProjectInformationT&& value) { SetProjectInformation(std::forward<ProjectInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EventLogEntry& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the payload of the request.</p>
     */
    inline const EventPayload& GetRequestPayload() const { return m_requestPayload; }
    inline bool RequestPayloadHasBeenSet() const { return m_requestPayloadHasBeenSet; }
    template<typename RequestPayloadT = EventPayload>
    void SetRequestPayload(RequestPayloadT&& value) { m_requestPayloadHasBeenSet = true; m_requestPayload = std::forward<RequestPayloadT>(value); }
    template<typename RequestPayloadT = EventPayload>
    EventLogEntry& WithRequestPayload(RequestPayloadT&& value) { SetRequestPayload(std::forward<RequestPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the payload of the response, if any.</p>
     */
    inline const EventPayload& GetResponsePayload() const { return m_responsePayload; }
    inline bool ResponsePayloadHasBeenSet() const { return m_responsePayloadHasBeenSet; }
    template<typename ResponsePayloadT = EventPayload>
    void SetResponsePayload(ResponsePayloadT&& value) { m_responsePayloadHasBeenSet = true; m_responsePayload = std::forward<ResponsePayloadT>(value); }
    template<typename ResponsePayloadT = EventPayload>
    EventLogEntry& WithResponsePayload(ResponsePayloadT&& value) { SetResponsePayload(std::forward<ResponsePayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code of the error, if any.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    EventLogEntry& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the user whose actions are recorded in the event.</p>
     */
    inline const Aws::String& GetSourceIpAddress() const { return m_sourceIpAddress; }
    inline bool SourceIpAddressHasBeenSet() const { return m_sourceIpAddressHasBeenSet; }
    template<typename SourceIpAddressT = Aws::String>
    void SetSourceIpAddress(SourceIpAddressT&& value) { m_sourceIpAddressHasBeenSet = true; m_sourceIpAddress = std::forward<SourceIpAddressT>(value); }
    template<typename SourceIpAddressT = Aws::String>
    EventLogEntry& WithSourceIpAddress(SourceIpAddressT&& value) { SetSourceIpAddress(std::forward<SourceIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user agent whose actions are recorded in the event.</p>
     */
    inline const Aws::String& GetUserAgent() const { return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    template<typename UserAgentT = Aws::String>
    void SetUserAgent(UserAgentT&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::forward<UserAgentT>(value); }
    template<typename UserAgentT = Aws::String>
    EventLogEntry& WithUserAgent(UserAgentT&& value) { SetUserAgent(std::forward<UserAgentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_eventCategory;
    bool m_eventCategoryHasBeenSet = false;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    OperationType m_operationType{OperationType::NOT_SET};
    bool m_operationTypeHasBeenSet = false;

    UserIdentity m_userIdentity;
    bool m_userIdentityHasBeenSet = false;

    ProjectInformation m_projectInformation;
    bool m_projectInformationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    EventPayload m_requestPayload;
    bool m_requestPayloadHasBeenSet = false;

    EventPayload m_responsePayload;
    bool m_responsePayloadHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_sourceIpAddress;
    bool m_sourceIpAddressHasBeenSet = false;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
