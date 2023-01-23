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
    AWS_CODECATALYST_API EventLogEntry();
    AWS_CODECATALYST_API EventLogEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API EventLogEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated unique ID of the event.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated unique ID of the event.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The system-generated unique ID of the event.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The system-generated unique ID of the event.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The system-generated unique ID of the event.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The system-generated unique ID of the event.</p>
     */
    inline EventLogEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the event.</p>
     */
    inline EventLogEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the event.</p>
     */
    inline EventLogEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the event.</p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }

    /**
     * <p>The name of the event.</p>
     */
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }

    /**
     * <p>The name of the event.</p>
     */
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }

    /**
     * <p>The name of the event.</p>
     */
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }

    /**
     * <p>The name of the event.</p>
     */
    inline void SetEventName(const char* value) { m_eventNameHasBeenSet = true; m_eventName.assign(value); }

    /**
     * <p>The name of the event.</p>
     */
    inline EventLogEntry& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}

    /**
     * <p>The name of the event.</p>
     */
    inline EventLogEntry& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}

    /**
     * <p>The name of the event.</p>
     */
    inline EventLogEntry& WithEventName(const char* value) { SetEventName(value); return *this;}


    /**
     * <p>The type of the event.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of the event.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of the event.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of the event.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of the event.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>The type of the event.</p>
     */
    inline EventLogEntry& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of the event.</p>
     */
    inline EventLogEntry& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>The type of the event.</p>
     */
    inline EventLogEntry& WithEventType(const char* value) { SetEventType(value); return *this;}


    /**
     * <p>The category for the event.</p>
     */
    inline const Aws::String& GetEventCategory() const{ return m_eventCategory; }

    /**
     * <p>The category for the event.</p>
     */
    inline bool EventCategoryHasBeenSet() const { return m_eventCategoryHasBeenSet; }

    /**
     * <p>The category for the event.</p>
     */
    inline void SetEventCategory(const Aws::String& value) { m_eventCategoryHasBeenSet = true; m_eventCategory = value; }

    /**
     * <p>The category for the event.</p>
     */
    inline void SetEventCategory(Aws::String&& value) { m_eventCategoryHasBeenSet = true; m_eventCategory = std::move(value); }

    /**
     * <p>The category for the event.</p>
     */
    inline void SetEventCategory(const char* value) { m_eventCategoryHasBeenSet = true; m_eventCategory.assign(value); }

    /**
     * <p>The category for the event.</p>
     */
    inline EventLogEntry& WithEventCategory(const Aws::String& value) { SetEventCategory(value); return *this;}

    /**
     * <p>The category for the event.</p>
     */
    inline EventLogEntry& WithEventCategory(Aws::String&& value) { SetEventCategory(std::move(value)); return *this;}

    /**
     * <p>The category for the event.</p>
     */
    inline EventLogEntry& WithEventCategory(const char* value) { SetEventCategory(value); return *this;}


    /**
     * <p>The source of the event.</p>
     */
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }

    /**
     * <p>The source of the event.</p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetEventSource(const Aws::String& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetEventSource(Aws::String&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetEventSource(const char* value) { m_eventSourceHasBeenSet = true; m_eventSource.assign(value); }

    /**
     * <p>The source of the event.</p>
     */
    inline EventLogEntry& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}

    /**
     * <p>The source of the event.</p>
     */
    inline EventLogEntry& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}

    /**
     * <p>The source of the event.</p>
     */
    inline EventLogEntry& WithEventSource(const char* value) { SetEventSource(value); return *this;}


    /**
     * <p>The time the event took place, in coordinated universal time (UTC) timestamp
     * format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>The time the event took place, in coordinated universal time (UTC) timestamp
     * format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p>The time the event took place, in coordinated universal time (UTC) timestamp
     * format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>The time the event took place, in coordinated universal time (UTC) timestamp
     * format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>The time the event took place, in coordinated universal time (UTC) timestamp
     * format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline EventLogEntry& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p>The time the event took place, in coordinated universal time (UTC) timestamp
     * format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline EventLogEntry& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}


    /**
     * <p>The type of the event.</p>
     */
    inline const OperationType& GetOperationType() const{ return m_operationType; }

    /**
     * <p>The type of the event.</p>
     */
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }

    /**
     * <p>The type of the event.</p>
     */
    inline void SetOperationType(const OperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * <p>The type of the event.</p>
     */
    inline void SetOperationType(OperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }

    /**
     * <p>The type of the event.</p>
     */
    inline EventLogEntry& WithOperationType(const OperationType& value) { SetOperationType(value); return *this;}

    /**
     * <p>The type of the event.</p>
     */
    inline EventLogEntry& WithOperationType(OperationType&& value) { SetOperationType(std::move(value)); return *this;}


    /**
     * <p>The system-generated unique ID of the user whose actions are recorded in the
     * event.</p>
     */
    inline const UserIdentity& GetUserIdentity() const{ return m_userIdentity; }

    /**
     * <p>The system-generated unique ID of the user whose actions are recorded in the
     * event.</p>
     */
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }

    /**
     * <p>The system-generated unique ID of the user whose actions are recorded in the
     * event.</p>
     */
    inline void SetUserIdentity(const UserIdentity& value) { m_userIdentityHasBeenSet = true; m_userIdentity = value; }

    /**
     * <p>The system-generated unique ID of the user whose actions are recorded in the
     * event.</p>
     */
    inline void SetUserIdentity(UserIdentity&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::move(value); }

    /**
     * <p>The system-generated unique ID of the user whose actions are recorded in the
     * event.</p>
     */
    inline EventLogEntry& WithUserIdentity(const UserIdentity& value) { SetUserIdentity(value); return *this;}

    /**
     * <p>The system-generated unique ID of the user whose actions are recorded in the
     * event.</p>
     */
    inline EventLogEntry& WithUserIdentity(UserIdentity&& value) { SetUserIdentity(std::move(value)); return *this;}


    /**
     * <p>Information about the project where the event occurred.</p>
     */
    inline const ProjectInformation& GetProjectInformation() const{ return m_projectInformation; }

    /**
     * <p>Information about the project where the event occurred.</p>
     */
    inline bool ProjectInformationHasBeenSet() const { return m_projectInformationHasBeenSet; }

    /**
     * <p>Information about the project where the event occurred.</p>
     */
    inline void SetProjectInformation(const ProjectInformation& value) { m_projectInformationHasBeenSet = true; m_projectInformation = value; }

    /**
     * <p>Information about the project where the event occurred.</p>
     */
    inline void SetProjectInformation(ProjectInformation&& value) { m_projectInformationHasBeenSet = true; m_projectInformation = std::move(value); }

    /**
     * <p>Information about the project where the event occurred.</p>
     */
    inline EventLogEntry& WithProjectInformation(const ProjectInformation& value) { SetProjectInformation(value); return *this;}

    /**
     * <p>Information about the project where the event occurred.</p>
     */
    inline EventLogEntry& WithProjectInformation(ProjectInformation&& value) { SetProjectInformation(std::move(value)); return *this;}


    /**
     * <p>The system-generated unique ID of the request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The system-generated unique ID of the request.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The system-generated unique ID of the request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The system-generated unique ID of the request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The system-generated unique ID of the request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The system-generated unique ID of the request.</p>
     */
    inline EventLogEntry& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the request.</p>
     */
    inline EventLogEntry& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the request.</p>
     */
    inline EventLogEntry& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>Information about the payload of the request.</p>
     */
    inline const EventPayload& GetRequestPayload() const{ return m_requestPayload; }

    /**
     * <p>Information about the payload of the request.</p>
     */
    inline bool RequestPayloadHasBeenSet() const { return m_requestPayloadHasBeenSet; }

    /**
     * <p>Information about the payload of the request.</p>
     */
    inline void SetRequestPayload(const EventPayload& value) { m_requestPayloadHasBeenSet = true; m_requestPayload = value; }

    /**
     * <p>Information about the payload of the request.</p>
     */
    inline void SetRequestPayload(EventPayload&& value) { m_requestPayloadHasBeenSet = true; m_requestPayload = std::move(value); }

    /**
     * <p>Information about the payload of the request.</p>
     */
    inline EventLogEntry& WithRequestPayload(const EventPayload& value) { SetRequestPayload(value); return *this;}

    /**
     * <p>Information about the payload of the request.</p>
     */
    inline EventLogEntry& WithRequestPayload(EventPayload&& value) { SetRequestPayload(std::move(value)); return *this;}


    /**
     * <p>Information about the payload of the response, if any.</p>
     */
    inline const EventPayload& GetResponsePayload() const{ return m_responsePayload; }

    /**
     * <p>Information about the payload of the response, if any.</p>
     */
    inline bool ResponsePayloadHasBeenSet() const { return m_responsePayloadHasBeenSet; }

    /**
     * <p>Information about the payload of the response, if any.</p>
     */
    inline void SetResponsePayload(const EventPayload& value) { m_responsePayloadHasBeenSet = true; m_responsePayload = value; }

    /**
     * <p>Information about the payload of the response, if any.</p>
     */
    inline void SetResponsePayload(EventPayload&& value) { m_responsePayloadHasBeenSet = true; m_responsePayload = std::move(value); }

    /**
     * <p>Information about the payload of the response, if any.</p>
     */
    inline EventLogEntry& WithResponsePayload(const EventPayload& value) { SetResponsePayload(value); return *this;}

    /**
     * <p>Information about the payload of the response, if any.</p>
     */
    inline EventLogEntry& WithResponsePayload(EventPayload&& value) { SetResponsePayload(std::move(value)); return *this;}


    /**
     * <p>The code of the error, if any.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code of the error, if any.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code of the error, if any.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code of the error, if any.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code of the error, if any.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The code of the error, if any.</p>
     */
    inline EventLogEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code of the error, if any.</p>
     */
    inline EventLogEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The code of the error, if any.</p>
     */
    inline EventLogEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The IP address of the user whose actions are recorded in the event.</p>
     */
    inline const Aws::String& GetSourceIpAddress() const{ return m_sourceIpAddress; }

    /**
     * <p>The IP address of the user whose actions are recorded in the event.</p>
     */
    inline bool SourceIpAddressHasBeenSet() const { return m_sourceIpAddressHasBeenSet; }

    /**
     * <p>The IP address of the user whose actions are recorded in the event.</p>
     */
    inline void SetSourceIpAddress(const Aws::String& value) { m_sourceIpAddressHasBeenSet = true; m_sourceIpAddress = value; }

    /**
     * <p>The IP address of the user whose actions are recorded in the event.</p>
     */
    inline void SetSourceIpAddress(Aws::String&& value) { m_sourceIpAddressHasBeenSet = true; m_sourceIpAddress = std::move(value); }

    /**
     * <p>The IP address of the user whose actions are recorded in the event.</p>
     */
    inline void SetSourceIpAddress(const char* value) { m_sourceIpAddressHasBeenSet = true; m_sourceIpAddress.assign(value); }

    /**
     * <p>The IP address of the user whose actions are recorded in the event.</p>
     */
    inline EventLogEntry& WithSourceIpAddress(const Aws::String& value) { SetSourceIpAddress(value); return *this;}

    /**
     * <p>The IP address of the user whose actions are recorded in the event.</p>
     */
    inline EventLogEntry& WithSourceIpAddress(Aws::String&& value) { SetSourceIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the user whose actions are recorded in the event.</p>
     */
    inline EventLogEntry& WithSourceIpAddress(const char* value) { SetSourceIpAddress(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetUserAgent() const{ return m_userAgent; }

    /**
     * <p/>
     */
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetUserAgent(const Aws::String& value) { m_userAgentHasBeenSet = true; m_userAgent = value; }

    /**
     * <p/>
     */
    inline void SetUserAgent(Aws::String&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::move(value); }

    /**
     * <p/>
     */
    inline void SetUserAgent(const char* value) { m_userAgentHasBeenSet = true; m_userAgent.assign(value); }

    /**
     * <p/>
     */
    inline EventLogEntry& WithUserAgent(const Aws::String& value) { SetUserAgent(value); return *this;}

    /**
     * <p/>
     */
    inline EventLogEntry& WithUserAgent(Aws::String&& value) { SetUserAgent(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline EventLogEntry& WithUserAgent(const char* value) { SetUserAgent(value); return *this;}

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

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    OperationType m_operationType;
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
