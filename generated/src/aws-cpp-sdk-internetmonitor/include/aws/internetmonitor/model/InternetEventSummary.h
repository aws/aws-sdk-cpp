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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>A summary of information about an internet event in Amazon CloudWatch
   * Internet Monitor. Internet events are issues that cause performance degradation
   * or availability problems for impacted Amazon Web Services client locations.
   * Internet Monitor displays information about recent global health events, called
   * internet events, on a global outages map that is available to all Amazon Web
   * Services customers. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/InternetEventSummary">AWS
   * API Reference</a></p>
   */
  class InternetEventSummary
  {
  public:
    AWS_INTERNETMONITOR_API InternetEventSummary() = default;
    AWS_INTERNETMONITOR_API InternetEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API InternetEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    InternetEventSummary& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline const Aws::String& GetEventArn() const { return m_eventArn; }
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }
    template<typename EventArnT = Aws::String>
    void SetEventArn(EventArnT&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::forward<EventArnT>(value); }
    template<typename EventArnT = Aws::String>
    InternetEventSummary& WithEventArn(EventArnT&& value) { SetEventArn(std::forward<EventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when an internet event started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    InternetEventSummary& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when an internet event ended. If the event hasn't ended yet, this
     * value is empty.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    InternetEventSummary& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impacted location, such as a city, that Amazon Web Services clients
     * access application resources from.</p>
     */
    inline const ClientLocation& GetClientLocation() const { return m_clientLocation; }
    inline bool ClientLocationHasBeenSet() const { return m_clientLocationHasBeenSet; }
    template<typename ClientLocationT = ClientLocation>
    void SetClientLocation(ClientLocationT&& value) { m_clientLocationHasBeenSet = true; m_clientLocation = std::forward<ClientLocationT>(value); }
    template<typename ClientLocationT = ClientLocation>
    InternetEventSummary& WithClientLocation(ClientLocationT&& value) { SetClientLocation(std::forward<ClientLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of network impairment.</p>
     */
    inline InternetEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(InternetEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline InternetEventSummary& WithEventType(InternetEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an internet event.</p>
     */
    inline InternetEventStatus GetEventStatus() const { return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(InternetEventStatus value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline InternetEventSummary& WithEventStatus(InternetEventStatus value) { SetEventStatus(value); return *this;}
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
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
