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
namespace InternetMonitor
{
namespace Model
{

  /**
   */
  class GetInternetEventRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API GetInternetEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInternetEvent"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The <code>EventId</code> of the internet event to return information for.
     * </p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The <code>EventId</code> of the internet event to return information for.
     * </p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The <code>EventId</code> of the internet event to return information for.
     * </p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The <code>EventId</code> of the internet event to return information for.
     * </p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The <code>EventId</code> of the internet event to return information for.
     * </p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The <code>EventId</code> of the internet event to return information for.
     * </p>
     */
    inline GetInternetEventRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The <code>EventId</code> of the internet event to return information for.
     * </p>
     */
    inline GetInternetEventRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The <code>EventId</code> of the internet event to return information for.
     * </p>
     */
    inline GetInternetEventRequest& WithEventId(const char* value) { SetEventId(value); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
