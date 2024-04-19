/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/InternetMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace InternetMonitor
{
namespace Model
{

  /**
   */
  class ListInternetEventsRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API ListInternetEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInternetEvents"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;

    AWS_INTERNETMONITOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListInternetEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListInternetEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListInternetEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of query results that you want to return with this call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of query results that you want to return with this call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of query results that you want to return with this call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of query results that you want to return with this call.</p>
     */
    inline ListInternetEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The start time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline ListInternetEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline ListInternetEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline ListInternetEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the time window that you want to get a list of internet
     * events for.</p>
     */
    inline ListInternetEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The status of an internet event.</p>
     */
    inline const Aws::String& GetEventStatus() const{ return m_eventStatus; }

    /**
     * <p>The status of an internet event.</p>
     */
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }

    /**
     * <p>The status of an internet event.</p>
     */
    inline void SetEventStatus(const Aws::String& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }

    /**
     * <p>The status of an internet event.</p>
     */
    inline void SetEventStatus(Aws::String&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }

    /**
     * <p>The status of an internet event.</p>
     */
    inline void SetEventStatus(const char* value) { m_eventStatusHasBeenSet = true; m_eventStatus.assign(value); }

    /**
     * <p>The status of an internet event.</p>
     */
    inline ListInternetEventsRequest& WithEventStatus(const Aws::String& value) { SetEventStatus(value); return *this;}

    /**
     * <p>The status of an internet event.</p>
     */
    inline ListInternetEventsRequest& WithEventStatus(Aws::String&& value) { SetEventStatus(std::move(value)); return *this;}

    /**
     * <p>The status of an internet event.</p>
     */
    inline ListInternetEventsRequest& WithEventStatus(const char* value) { SetEventStatus(value); return *this;}


    /**
     * <p>The type of network impairment.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of network impairment.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of network impairment.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of network impairment.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of network impairment.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>The type of network impairment.</p>
     */
    inline ListInternetEventsRequest& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of network impairment.</p>
     */
    inline ListInternetEventsRequest& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>The type of network impairment.</p>
     */
    inline ListInternetEventsRequest& WithEventType(const char* value) { SetEventType(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_eventStatus;
    bool m_eventStatusHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
