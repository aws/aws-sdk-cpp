/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetAlarmsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetAlarmsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAlarms"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the alarm.</p> <p>Specify an alarm name to return information
     * about a specific alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    GetAlarmsRequest& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetAlarms</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    GetAlarmsRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Lightsail resource being monitored by the alarm.</p>
     * <p>Specify a monitored resource name to return information about all alarms for
     * a specific resource.</p>
     */
    inline const Aws::String& GetMonitoredResourceName() const { return m_monitoredResourceName; }
    inline bool MonitoredResourceNameHasBeenSet() const { return m_monitoredResourceNameHasBeenSet; }
    template<typename MonitoredResourceNameT = Aws::String>
    void SetMonitoredResourceName(MonitoredResourceNameT&& value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName = std::forward<MonitoredResourceNameT>(value); }
    template<typename MonitoredResourceNameT = Aws::String>
    GetAlarmsRequest& WithMonitoredResourceName(MonitoredResourceNameT&& value) { SetMonitoredResourceName(std::forward<MonitoredResourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    Aws::String m_monitoredResourceName;
    bool m_monitoredResourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
