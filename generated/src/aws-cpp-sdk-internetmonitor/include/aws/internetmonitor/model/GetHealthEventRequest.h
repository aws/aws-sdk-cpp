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
  class GetHealthEventRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API GetHealthEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHealthEvent"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;

    AWS_INTERNETMONITOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    GetHealthEventRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The internally-generated identifier of a health event. Because
     * <code>EventID</code> contains the forward slash (“/”) character, you must
     * URL-encode the <code>EventID</code> field in the request URL.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    GetHealthEventRequest& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID for an account that you've set up cross-account sharing for in
     * Amazon CloudWatch Internet Monitor. You configure cross-account sharing by using
     * Amazon CloudWatch Observability Access Manager. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cwim-cross-account.html">Internet
     * Monitor cross-account observability</a> in the Amazon CloudWatch Internet
     * Monitor User Guide.</p>
     */
    inline const Aws::String& GetLinkedAccountId() const { return m_linkedAccountId; }
    inline bool LinkedAccountIdHasBeenSet() const { return m_linkedAccountIdHasBeenSet; }
    template<typename LinkedAccountIdT = Aws::String>
    void SetLinkedAccountId(LinkedAccountIdT&& value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId = std::forward<LinkedAccountIdT>(value); }
    template<typename LinkedAccountIdT = Aws::String>
    GetHealthEventRequest& WithLinkedAccountId(LinkedAccountIdT&& value) { SetLinkedAccountId(std::forward<LinkedAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_linkedAccountId;
    bool m_linkedAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
