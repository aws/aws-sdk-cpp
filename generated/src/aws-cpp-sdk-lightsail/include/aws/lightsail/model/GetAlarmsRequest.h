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
    AWS_LIGHTSAIL_API GetAlarmsRequest();

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
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }
    inline GetAlarmsRequest& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}
    inline GetAlarmsRequest& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}
    inline GetAlarmsRequest& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetAlarms</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }
    inline GetAlarmsRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}
    inline GetAlarmsRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}
    inline GetAlarmsRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Lightsail resource being monitored by the alarm.</p>
     * <p>Specify a monitored resource name to return information about all alarms for
     * a specific resource.</p>
     */
    inline const Aws::String& GetMonitoredResourceName() const{ return m_monitoredResourceName; }
    inline bool MonitoredResourceNameHasBeenSet() const { return m_monitoredResourceNameHasBeenSet; }
    inline void SetMonitoredResourceName(const Aws::String& value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName = value; }
    inline void SetMonitoredResourceName(Aws::String&& value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName = std::move(value); }
    inline void SetMonitoredResourceName(const char* value) { m_monitoredResourceNameHasBeenSet = true; m_monitoredResourceName.assign(value); }
    inline GetAlarmsRequest& WithMonitoredResourceName(const Aws::String& value) { SetMonitoredResourceName(value); return *this;}
    inline GetAlarmsRequest& WithMonitoredResourceName(Aws::String&& value) { SetMonitoredResourceName(std::move(value)); return *this;}
    inline GetAlarmsRequest& WithMonitoredResourceName(const char* value) { SetMonitoredResourceName(value); return *this;}
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
