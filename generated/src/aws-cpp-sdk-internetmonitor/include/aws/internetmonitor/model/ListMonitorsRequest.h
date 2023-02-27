/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/InternetMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListMonitorsRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API ListMonitorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMonitors"; }

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
    inline ListMonitorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListMonitorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListMonitorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of monitor objects that you want to return with this call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of monitor objects that you want to return with this call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of monitor objects that you want to return with this call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of monitor objects that you want to return with this call.</p>
     */
    inline ListMonitorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The status of a monitor. This includes the status of the data processing for
     * the monitor and the status of the monitor itself.</p> <p>For information about
     * the statuses for a monitor, see <a
     * href="https://docs.aws.amazon.com/internet-monitor/latest/api/API_Monitor.html">
     * Monitor</a>.</p>
     */
    inline const Aws::String& GetMonitorStatus() const{ return m_monitorStatus; }

    /**
     * <p>The status of a monitor. This includes the status of the data processing for
     * the monitor and the status of the monitor itself.</p> <p>For information about
     * the statuses for a monitor, see <a
     * href="https://docs.aws.amazon.com/internet-monitor/latest/api/API_Monitor.html">
     * Monitor</a>.</p>
     */
    inline bool MonitorStatusHasBeenSet() const { return m_monitorStatusHasBeenSet; }

    /**
     * <p>The status of a monitor. This includes the status of the data processing for
     * the monitor and the status of the monitor itself.</p> <p>For information about
     * the statuses for a monitor, see <a
     * href="https://docs.aws.amazon.com/internet-monitor/latest/api/API_Monitor.html">
     * Monitor</a>.</p>
     */
    inline void SetMonitorStatus(const Aws::String& value) { m_monitorStatusHasBeenSet = true; m_monitorStatus = value; }

    /**
     * <p>The status of a monitor. This includes the status of the data processing for
     * the monitor and the status of the monitor itself.</p> <p>For information about
     * the statuses for a monitor, see <a
     * href="https://docs.aws.amazon.com/internet-monitor/latest/api/API_Monitor.html">
     * Monitor</a>.</p>
     */
    inline void SetMonitorStatus(Aws::String&& value) { m_monitorStatusHasBeenSet = true; m_monitorStatus = std::move(value); }

    /**
     * <p>The status of a monitor. This includes the status of the data processing for
     * the monitor and the status of the monitor itself.</p> <p>For information about
     * the statuses for a monitor, see <a
     * href="https://docs.aws.amazon.com/internet-monitor/latest/api/API_Monitor.html">
     * Monitor</a>.</p>
     */
    inline void SetMonitorStatus(const char* value) { m_monitorStatusHasBeenSet = true; m_monitorStatus.assign(value); }

    /**
     * <p>The status of a monitor. This includes the status of the data processing for
     * the monitor and the status of the monitor itself.</p> <p>For information about
     * the statuses for a monitor, see <a
     * href="https://docs.aws.amazon.com/internet-monitor/latest/api/API_Monitor.html">
     * Monitor</a>.</p>
     */
    inline ListMonitorsRequest& WithMonitorStatus(const Aws::String& value) { SetMonitorStatus(value); return *this;}

    /**
     * <p>The status of a monitor. This includes the status of the data processing for
     * the monitor and the status of the monitor itself.</p> <p>For information about
     * the statuses for a monitor, see <a
     * href="https://docs.aws.amazon.com/internet-monitor/latest/api/API_Monitor.html">
     * Monitor</a>.</p>
     */
    inline ListMonitorsRequest& WithMonitorStatus(Aws::String&& value) { SetMonitorStatus(std::move(value)); return *this;}

    /**
     * <p>The status of a monitor. This includes the status of the data processing for
     * the monitor and the status of the monitor itself.</p> <p>For information about
     * the statuses for a monitor, see <a
     * href="https://docs.aws.amazon.com/internet-monitor/latest/api/API_Monitor.html">
     * Monitor</a>.</p>
     */
    inline ListMonitorsRequest& WithMonitorStatus(const char* value) { SetMonitorStatus(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_monitorStatus;
    bool m_monitorStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
