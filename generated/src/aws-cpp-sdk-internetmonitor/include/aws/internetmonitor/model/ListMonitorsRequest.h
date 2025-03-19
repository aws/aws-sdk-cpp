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
    AWS_INTERNETMONITOR_API ListMonitorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMonitors"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;

    AWS_INTERNETMONITOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMonitorsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of monitor objects that you want to return with this call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMonitorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a monitor. This includes the status of the data processing for
     * the monitor and the status of the monitor itself.</p> <p>For information about
     * the statuses for a monitor, see <a
     * href="https://docs.aws.amazon.com/internet-monitor/latest/api/API_Monitor.html">
     * Monitor</a>.</p>
     */
    inline const Aws::String& GetMonitorStatus() const { return m_monitorStatus; }
    inline bool MonitorStatusHasBeenSet() const { return m_monitorStatusHasBeenSet; }
    template<typename MonitorStatusT = Aws::String>
    void SetMonitorStatus(MonitorStatusT&& value) { m_monitorStatusHasBeenSet = true; m_monitorStatus = std::forward<MonitorStatusT>(value); }
    template<typename MonitorStatusT = Aws::String>
    ListMonitorsRequest& WithMonitorStatus(MonitorStatusT&& value) { SetMonitorStatus(std::forward<MonitorStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean option that you can set to <code>TRUE</code> to include monitors
     * for linked accounts in a list of monitors, when you've set up cross-account
     * sharing in Amazon CloudWatch Internet Monitor. You configure cross-account
     * sharing by using Amazon CloudWatch Observability Access Manager. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cwim-cross-account.html">Internet
     * Monitor cross-account observability</a> in the Amazon CloudWatch Internet
     * Monitor User Guide.</p>
     */
    inline bool GetIncludeLinkedAccounts() const { return m_includeLinkedAccounts; }
    inline bool IncludeLinkedAccountsHasBeenSet() const { return m_includeLinkedAccountsHasBeenSet; }
    inline void SetIncludeLinkedAccounts(bool value) { m_includeLinkedAccountsHasBeenSet = true; m_includeLinkedAccounts = value; }
    inline ListMonitorsRequest& WithIncludeLinkedAccounts(bool value) { SetIncludeLinkedAccounts(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_monitorStatus;
    bool m_monitorStatusHasBeenSet = false;

    bool m_includeLinkedAccounts{false};
    bool m_includeLinkedAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
