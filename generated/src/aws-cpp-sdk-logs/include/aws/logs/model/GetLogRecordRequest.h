﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class GetLogRecordRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogRecordRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLogRecord"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The pointer corresponding to the log event record you want to retrieve. You
     * get this from the response of a <code>GetQueryResults</code> operation. In that
     * response, the value of the <code>@ptr</code> field for a log event is the value
     * to use as <code>logRecordPointer</code> to retrieve that complete log event
     * record.</p>
     */
    inline const Aws::String& GetLogRecordPointer() const { return m_logRecordPointer; }
    inline bool LogRecordPointerHasBeenSet() const { return m_logRecordPointerHasBeenSet; }
    template<typename LogRecordPointerT = Aws::String>
    void SetLogRecordPointer(LogRecordPointerT&& value) { m_logRecordPointerHasBeenSet = true; m_logRecordPointer = std::forward<LogRecordPointerT>(value); }
    template<typename LogRecordPointerT = Aws::String>
    GetLogRecordRequest& WithLogRecordPointer(LogRecordPointerT&& value) { SetLogRecordPointer(std::forward<LogRecordPointerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to display the log event fields with all sensitive
     * data unmasked and visible. The default is <code>false</code>.</p> <p>To use this
     * operation with this parameter, you must be signed into an account with the
     * <code>logs:Unmask</code> permission.</p>
     */
    inline bool GetUnmask() const { return m_unmask; }
    inline bool UnmaskHasBeenSet() const { return m_unmaskHasBeenSet; }
    inline void SetUnmask(bool value) { m_unmaskHasBeenSet = true; m_unmask = value; }
    inline GetLogRecordRequest& WithUnmask(bool value) { SetUnmask(value); return *this;}
    ///@}
  private:

    Aws::String m_logRecordPointer;
    bool m_logRecordPointerHasBeenSet = false;

    bool m_unmask{false};
    bool m_unmaskHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
