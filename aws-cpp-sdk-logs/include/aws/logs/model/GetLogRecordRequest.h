/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDWATCHLOGS_API GetLogRecordRequest : public CloudWatchLogsRequest
  {
  public:
    GetLogRecordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLogRecord"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The pointer corresponding to the log event record you want to retrieve. You
     * get this from the response of a <code>GetQueryResults</code> operation. In that
     * response, the value of the <code>@ptr</code> field for a log event is the value
     * to use as <code>logRecordPointer</code> to retrieve that complete log event
     * record.</p>
     */
    inline const Aws::String& GetLogRecordPointer() const{ return m_logRecordPointer; }

    /**
     * <p>The pointer corresponding to the log event record you want to retrieve. You
     * get this from the response of a <code>GetQueryResults</code> operation. In that
     * response, the value of the <code>@ptr</code> field for a log event is the value
     * to use as <code>logRecordPointer</code> to retrieve that complete log event
     * record.</p>
     */
    inline bool LogRecordPointerHasBeenSet() const { return m_logRecordPointerHasBeenSet; }

    /**
     * <p>The pointer corresponding to the log event record you want to retrieve. You
     * get this from the response of a <code>GetQueryResults</code> operation. In that
     * response, the value of the <code>@ptr</code> field for a log event is the value
     * to use as <code>logRecordPointer</code> to retrieve that complete log event
     * record.</p>
     */
    inline void SetLogRecordPointer(const Aws::String& value) { m_logRecordPointerHasBeenSet = true; m_logRecordPointer = value; }

    /**
     * <p>The pointer corresponding to the log event record you want to retrieve. You
     * get this from the response of a <code>GetQueryResults</code> operation. In that
     * response, the value of the <code>@ptr</code> field for a log event is the value
     * to use as <code>logRecordPointer</code> to retrieve that complete log event
     * record.</p>
     */
    inline void SetLogRecordPointer(Aws::String&& value) { m_logRecordPointerHasBeenSet = true; m_logRecordPointer = std::move(value); }

    /**
     * <p>The pointer corresponding to the log event record you want to retrieve. You
     * get this from the response of a <code>GetQueryResults</code> operation. In that
     * response, the value of the <code>@ptr</code> field for a log event is the value
     * to use as <code>logRecordPointer</code> to retrieve that complete log event
     * record.</p>
     */
    inline void SetLogRecordPointer(const char* value) { m_logRecordPointerHasBeenSet = true; m_logRecordPointer.assign(value); }

    /**
     * <p>The pointer corresponding to the log event record you want to retrieve. You
     * get this from the response of a <code>GetQueryResults</code> operation. In that
     * response, the value of the <code>@ptr</code> field for a log event is the value
     * to use as <code>logRecordPointer</code> to retrieve that complete log event
     * record.</p>
     */
    inline GetLogRecordRequest& WithLogRecordPointer(const Aws::String& value) { SetLogRecordPointer(value); return *this;}

    /**
     * <p>The pointer corresponding to the log event record you want to retrieve. You
     * get this from the response of a <code>GetQueryResults</code> operation. In that
     * response, the value of the <code>@ptr</code> field for a log event is the value
     * to use as <code>logRecordPointer</code> to retrieve that complete log event
     * record.</p>
     */
    inline GetLogRecordRequest& WithLogRecordPointer(Aws::String&& value) { SetLogRecordPointer(std::move(value)); return *this;}

    /**
     * <p>The pointer corresponding to the log event record you want to retrieve. You
     * get this from the response of a <code>GetQueryResults</code> operation. In that
     * response, the value of the <code>@ptr</code> field for a log event is the value
     * to use as <code>logRecordPointer</code> to retrieve that complete log event
     * record.</p>
     */
    inline GetLogRecordRequest& WithLogRecordPointer(const char* value) { SetLogRecordPointer(value); return *this;}

  private:

    Aws::String m_logRecordPointer;
    bool m_logRecordPointerHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
