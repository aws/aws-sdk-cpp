/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class DeleteMonitorRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API DeleteMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMonitor"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the monitor to delete. This ID is returned by the
     * <code>CreateMonitor</code> operation, and is included in the response to the
     * <code>GetMonitor</code> operation.</p>
     */
    inline const Aws::String& GetMonitorId() const{ return m_monitorId; }

    /**
     * <p>The unique identifier of the monitor to delete. This ID is returned by the
     * <code>CreateMonitor</code> operation, and is included in the response to the
     * <code>GetMonitor</code> operation.</p>
     */
    inline bool MonitorIdHasBeenSet() const { return m_monitorIdHasBeenSet; }

    /**
     * <p>The unique identifier of the monitor to delete. This ID is returned by the
     * <code>CreateMonitor</code> operation, and is included in the response to the
     * <code>GetMonitor</code> operation.</p>
     */
    inline void SetMonitorId(const Aws::String& value) { m_monitorIdHasBeenSet = true; m_monitorId = value; }

    /**
     * <p>The unique identifier of the monitor to delete. This ID is returned by the
     * <code>CreateMonitor</code> operation, and is included in the response to the
     * <code>GetMonitor</code> operation.</p>
     */
    inline void SetMonitorId(Aws::String&& value) { m_monitorIdHasBeenSet = true; m_monitorId = std::move(value); }

    /**
     * <p>The unique identifier of the monitor to delete. This ID is returned by the
     * <code>CreateMonitor</code> operation, and is included in the response to the
     * <code>GetMonitor</code> operation.</p>
     */
    inline void SetMonitorId(const char* value) { m_monitorIdHasBeenSet = true; m_monitorId.assign(value); }

    /**
     * <p>The unique identifier of the monitor to delete. This ID is returned by the
     * <code>CreateMonitor</code> operation, and is included in the response to the
     * <code>GetMonitor</code> operation.</p>
     */
    inline DeleteMonitorRequest& WithMonitorId(const Aws::String& value) { SetMonitorId(value); return *this;}

    /**
     * <p>The unique identifier of the monitor to delete. This ID is returned by the
     * <code>CreateMonitor</code> operation, and is included in the response to the
     * <code>GetMonitor</code> operation.</p>
     */
    inline DeleteMonitorRequest& WithMonitorId(Aws::String&& value) { SetMonitorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the monitor to delete. This ID is returned by the
     * <code>CreateMonitor</code> operation, and is included in the response to the
     * <code>GetMonitor</code> operation.</p>
     */
    inline DeleteMonitorRequest& WithMonitorId(const char* value) { SetMonitorId(value); return *this;}

  private:

    Aws::String m_monitorId;
    bool m_monitorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
