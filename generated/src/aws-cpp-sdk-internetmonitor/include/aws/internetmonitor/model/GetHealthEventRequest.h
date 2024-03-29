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
    AWS_INTERNETMONITOR_API GetHealthEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHealthEvent"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;

    AWS_INTERNETMONITOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor.</p>
     */
    inline GetHealthEventRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline GetHealthEventRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline GetHealthEventRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>The internally-generated identifier of a health event. Because
     * <code>EventID</code> contains the forward slash (“/”) character, you must
     * URL-encode the <code>EventID</code> field in the request URL.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The internally-generated identifier of a health event. Because
     * <code>EventID</code> contains the forward slash (“/”) character, you must
     * URL-encode the <code>EventID</code> field in the request URL.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The internally-generated identifier of a health event. Because
     * <code>EventID</code> contains the forward slash (“/”) character, you must
     * URL-encode the <code>EventID</code> field in the request URL.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The internally-generated identifier of a health event. Because
     * <code>EventID</code> contains the forward slash (“/”) character, you must
     * URL-encode the <code>EventID</code> field in the request URL.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The internally-generated identifier of a health event. Because
     * <code>EventID</code> contains the forward slash (“/”) character, you must
     * URL-encode the <code>EventID</code> field in the request URL.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The internally-generated identifier of a health event. Because
     * <code>EventID</code> contains the forward slash (“/”) character, you must
     * URL-encode the <code>EventID</code> field in the request URL.</p>
     */
    inline GetHealthEventRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The internally-generated identifier of a health event. Because
     * <code>EventID</code> contains the forward slash (“/”) character, you must
     * URL-encode the <code>EventID</code> field in the request URL.</p>
     */
    inline GetHealthEventRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The internally-generated identifier of a health event. Because
     * <code>EventID</code> contains the forward slash (“/”) character, you must
     * URL-encode the <code>EventID</code> field in the request URL.</p>
     */
    inline GetHealthEventRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>TBD </p>
     */
    inline const Aws::String& GetLinkedAccountId() const{ return m_linkedAccountId; }

    /**
     * <p>TBD </p>
     */
    inline bool LinkedAccountIdHasBeenSet() const { return m_linkedAccountIdHasBeenSet; }

    /**
     * <p>TBD </p>
     */
    inline void SetLinkedAccountId(const Aws::String& value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId = value; }

    /**
     * <p>TBD </p>
     */
    inline void SetLinkedAccountId(Aws::String&& value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId = std::move(value); }

    /**
     * <p>TBD </p>
     */
    inline void SetLinkedAccountId(const char* value) { m_linkedAccountIdHasBeenSet = true; m_linkedAccountId.assign(value); }

    /**
     * <p>TBD </p>
     */
    inline GetHealthEventRequest& WithLinkedAccountId(const Aws::String& value) { SetLinkedAccountId(value); return *this;}

    /**
     * <p>TBD </p>
     */
    inline GetHealthEventRequest& WithLinkedAccountId(Aws::String&& value) { SetLinkedAccountId(std::move(value)); return *this;}

    /**
     * <p>TBD </p>
     */
    inline GetHealthEventRequest& WithLinkedAccountId(const char* value) { SetLinkedAccountId(value); return *this;}

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
