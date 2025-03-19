/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/internetmonitor/model/ClientLocation.h>
#include <aws/internetmonitor/model/InternetEventType.h>
#include <aws/internetmonitor/model/InternetEventStatus.h>
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
namespace InternetMonitor
{
namespace Model
{
  class GetInternetEventResult
  {
  public:
    AWS_INTERNETMONITOR_API GetInternetEventResult() = default;
    AWS_INTERNETMONITOR_API GetInternetEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API GetInternetEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    GetInternetEventResult& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline const Aws::String& GetEventArn() const { return m_eventArn; }
    template<typename EventArnT = Aws::String>
    void SetEventArn(EventArnT&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::forward<EventArnT>(value); }
    template<typename EventArnT = Aws::String>
    GetInternetEventResult& WithEventArn(EventArnT&& value) { SetEventArn(std::forward<EventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the internet event started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetInternetEventResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the internet event ended. If the event hasn't ended yet, this
     * value is empty.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetInternetEventResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impacted location, such as a city, where clients access Amazon Web
     * Services application resources.</p>
     */
    inline const ClientLocation& GetClientLocation() const { return m_clientLocation; }
    template<typename ClientLocationT = ClientLocation>
    void SetClientLocation(ClientLocationT&& value) { m_clientLocationHasBeenSet = true; m_clientLocation = std::forward<ClientLocationT>(value); }
    template<typename ClientLocationT = ClientLocation>
    GetInternetEventResult& WithClientLocation(ClientLocationT&& value) { SetClientLocation(std::forward<ClientLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of network impairment.</p>
     */
    inline InternetEventType GetEventType() const { return m_eventType; }
    inline void SetEventType(InternetEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline GetInternetEventResult& WithEventType(InternetEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the internet event.</p>
     */
    inline InternetEventStatus GetEventStatus() const { return m_eventStatus; }
    inline void SetEventStatus(InternetEventStatus value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline GetInternetEventResult& WithEventStatus(InternetEventStatus value) { SetEventStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInternetEventResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    ClientLocation m_clientLocation;
    bool m_clientLocationHasBeenSet = false;

    InternetEventType m_eventType{InternetEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    InternetEventStatus m_eventStatus{InternetEventStatus::NOT_SET};
    bool m_eventStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
