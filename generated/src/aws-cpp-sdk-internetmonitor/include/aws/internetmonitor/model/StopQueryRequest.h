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
  class StopQueryRequest : public InternetMonitorRequest
  {
  public:
    AWS_INTERNETMONITOR_API StopQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopQuery"; }

    AWS_INTERNETMONITOR_API Aws::String SerializePayload() const override;


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
    inline StopQueryRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline StopQueryRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline StopQueryRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>The ID of the query that you want to stop. A <code>QueryId</code> is an
     * internally-generated identifier for a specific query.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the query that you want to stop. A <code>QueryId</code> is an
     * internally-generated identifier for a specific query.</p>
     */
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }

    /**
     * <p>The ID of the query that you want to stop. A <code>QueryId</code> is an
     * internally-generated identifier for a specific query.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }

    /**
     * <p>The ID of the query that you want to stop. A <code>QueryId</code> is an
     * internally-generated identifier for a specific query.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }

    /**
     * <p>The ID of the query that you want to stop. A <code>QueryId</code> is an
     * internally-generated identifier for a specific query.</p>
     */
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }

    /**
     * <p>The ID of the query that you want to stop. A <code>QueryId</code> is an
     * internally-generated identifier for a specific query.</p>
     */
    inline StopQueryRequest& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the query that you want to stop. A <code>QueryId</code> is an
     * internally-generated identifier for a specific query.</p>
     */
    inline StopQueryRequest& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the query that you want to stop. A <code>QueryId</code> is an
     * internally-generated identifier for a specific query.</p>
     */
    inline StopQueryRequest& WithQueryId(const char* value) { SetQueryId(value); return *this;}

  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
