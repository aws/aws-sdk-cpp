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
  class AWS_CLOUDWATCHLOGS_API GetLogGroupFieldsRequest : public CloudWatchLogsRequest
  {
  public:
    GetLogGroupFieldsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLogGroupFields"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group to search.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline GetLogGroupFieldsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group to search.</p>
     */
    inline GetLogGroupFieldsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group to search.</p>
     */
    inline GetLogGroupFieldsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The time to set as the center of the query. If you specify <code>time</code>,
     * the 8 minutes before and 8 minutes after this time are searched. If you omit
     * <code>time</code>, the past 15 minutes are queried.</p> <p>The <code>time</code>
     * value is specified as epoch time, the number of seconds since January 1, 1970,
     * 00:00:00 UTC.</p>
     */
    inline long long GetTime() const{ return m_time; }

    /**
     * <p>The time to set as the center of the query. If you specify <code>time</code>,
     * the 8 minutes before and 8 minutes after this time are searched. If you omit
     * <code>time</code>, the past 15 minutes are queried.</p> <p>The <code>time</code>
     * value is specified as epoch time, the number of seconds since January 1, 1970,
     * 00:00:00 UTC.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The time to set as the center of the query. If you specify <code>time</code>,
     * the 8 minutes before and 8 minutes after this time are searched. If you omit
     * <code>time</code>, the past 15 minutes are queried.</p> <p>The <code>time</code>
     * value is specified as epoch time, the number of seconds since January 1, 1970,
     * 00:00:00 UTC.</p>
     */
    inline void SetTime(long long value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The time to set as the center of the query. If you specify <code>time</code>,
     * the 8 minutes before and 8 minutes after this time are searched. If you omit
     * <code>time</code>, the past 15 minutes are queried.</p> <p>The <code>time</code>
     * value is specified as epoch time, the number of seconds since January 1, 1970,
     * 00:00:00 UTC.</p>
     */
    inline GetLogGroupFieldsRequest& WithTime(long long value) { SetTime(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    long long m_time;
    bool m_timeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
