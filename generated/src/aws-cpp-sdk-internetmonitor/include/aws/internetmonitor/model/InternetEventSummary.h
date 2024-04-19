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
    AWS_INTERNETMONITOR_API InternetEventSummary();
    AWS_INTERNETMONITOR_API InternetEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API InternetEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline InternetEventSummary& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline InternetEventSummary& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The internally-generated identifier of an internet event.</p>
     */
    inline InternetEventSummary& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline void SetEventArn(const Aws::String& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline void SetEventArn(Aws::String&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline void SetEventArn(const char* value) { m_eventArnHasBeenSet = true; m_eventArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline InternetEventSummary& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline InternetEventSummary& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the internet event.</p>
     */
    inline InternetEventSummary& WithEventArn(const char* value) { SetEventArn(value); return *this;}


    /**
     * <p>The time when an internet event started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time when an internet event started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time when an internet event started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time when an internet event started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The time when an internet event started.</p>
     */
    inline InternetEventSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time when an internet event started.</p>
     */
    inline InternetEventSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time when an internet event ended. If the event hasn't ended yet, this
     * value is empty.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The time when an internet event ended. If the event hasn't ended yet, this
     * value is empty.</p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>The time when an internet event ended. If the event hasn't ended yet, this
     * value is empty.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>The time when an internet event ended. If the event hasn't ended yet, this
     * value is empty.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>The time when an internet event ended. If the event hasn't ended yet, this
     * value is empty.</p>
     */
    inline InternetEventSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The time when an internet event ended. If the event hasn't ended yet, this
     * value is empty.</p>
     */
    inline InternetEventSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The impacted location, such as a city, that Amazon Web Services clients
     * access application resources from.</p>
     */
    inline const ClientLocation& GetClientLocation() const{ return m_clientLocation; }

    /**
     * <p>The impacted location, such as a city, that Amazon Web Services clients
     * access application resources from.</p>
     */
    inline bool ClientLocationHasBeenSet() const { return m_clientLocationHasBeenSet; }

    /**
     * <p>The impacted location, such as a city, that Amazon Web Services clients
     * access application resources from.</p>
     */
    inline void SetClientLocation(const ClientLocation& value) { m_clientLocationHasBeenSet = true; m_clientLocation = value; }

    /**
     * <p>The impacted location, such as a city, that Amazon Web Services clients
     * access application resources from.</p>
     */
    inline void SetClientLocation(ClientLocation&& value) { m_clientLocationHasBeenSet = true; m_clientLocation = std::move(value); }

    /**
     * <p>The impacted location, such as a city, that Amazon Web Services clients
     * access application resources from.</p>
     */
    inline InternetEventSummary& WithClientLocation(const ClientLocation& value) { SetClientLocation(value); return *this;}

    /**
     * <p>The impacted location, such as a city, that Amazon Web Services clients
     * access application resources from.</p>
     */
    inline InternetEventSummary& WithClientLocation(ClientLocation&& value) { SetClientLocation(std::move(value)); return *this;}


    /**
     * <p>The type of network impairment.</p>
     */
    inline const InternetEventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of network impairment.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of network impairment.</p>
     */
    inline void SetEventType(const InternetEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of network impairment.</p>
     */
    inline void SetEventType(InternetEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of network impairment.</p>
     */
    inline InternetEventSummary& WithEventType(const InternetEventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of network impairment.</p>
     */
    inline InternetEventSummary& WithEventType(InternetEventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The status of an internet event.</p>
     */
    inline const InternetEventStatus& GetEventStatus() const{ return m_eventStatus; }

    /**
     * <p>The status of an internet event.</p>
     */
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }

    /**
     * <p>The status of an internet event.</p>
     */
    inline void SetEventStatus(const InternetEventStatus& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }

    /**
     * <p>The status of an internet event.</p>
     */
    inline void SetEventStatus(InternetEventStatus&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }

    /**
     * <p>The status of an internet event.</p>
     */
    inline InternetEventSummary& WithEventStatus(const InternetEventStatus& value) { SetEventStatus(value); return *this;}

    /**
     * <p>The status of an internet event.</p>
     */
    inline InternetEventSummary& WithEventStatus(InternetEventStatus&& value) { SetEventStatus(std::move(value)); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    ClientLocation m_clientLocation;
    bool m_clientLocationHasBeenSet = false;

    InternetEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    InternetEventStatus m_eventStatus;
    bool m_eventStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
