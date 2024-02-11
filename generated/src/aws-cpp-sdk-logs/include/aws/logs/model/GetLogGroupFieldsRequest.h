/**
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
  class GetLogGroupFieldsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogGroupFieldsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLogGroupFields"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group to search.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group to search.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group to search.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group to search.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group to search.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group to search.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline GetLogGroupFieldsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group to search.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline GetLogGroupFieldsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group to search.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline GetLogGroupFieldsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The time to set as the center of the query. If you specify <code>time</code>,
     * the 8 minutes before and 8 minutes after this time are searched. If you omit
     * <code>time</code>, the most recent 15 minutes up to the current time are
     * searched.</p> <p>The <code>time</code> value is specified as epoch time, which
     * is the number of seconds since <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline long long GetTime() const{ return m_time; }

    /**
     * <p>The time to set as the center of the query. If you specify <code>time</code>,
     * the 8 minutes before and 8 minutes after this time are searched. If you omit
     * <code>time</code>, the most recent 15 minutes up to the current time are
     * searched.</p> <p>The <code>time</code> value is specified as epoch time, which
     * is the number of seconds since <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The time to set as the center of the query. If you specify <code>time</code>,
     * the 8 minutes before and 8 minutes after this time are searched. If you omit
     * <code>time</code>, the most recent 15 minutes up to the current time are
     * searched.</p> <p>The <code>time</code> value is specified as epoch time, which
     * is the number of seconds since <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline void SetTime(long long value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The time to set as the center of the query. If you specify <code>time</code>,
     * the 8 minutes before and 8 minutes after this time are searched. If you omit
     * <code>time</code>, the most recent 15 minutes up to the current time are
     * searched.</p> <p>The <code>time</code> value is specified as epoch time, which
     * is the number of seconds since <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline GetLogGroupFieldsRequest& WithTime(long long value) { SetTime(value); return *this;}


    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must specify the
     * ARN.</p>  <p> You must include either <code>logGroupIdentifier</code> or
     * <code>logGroupName</code>, but not both. </p> 
     */
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must specify the
     * ARN.</p>  <p> You must include either <code>logGroupIdentifier</code> or
     * <code>logGroupName</code>, but not both. </p> 
     */
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must specify the
     * ARN.</p>  <p> You must include either <code>logGroupIdentifier</code> or
     * <code>logGroupName</code>, but not both. </p> 
     */
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = value; }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must specify the
     * ARN.</p>  <p> You must include either <code>logGroupIdentifier</code> or
     * <code>logGroupName</code>, but not both. </p> 
     */
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::move(value); }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must specify the
     * ARN.</p>  <p> You must include either <code>logGroupIdentifier</code> or
     * <code>logGroupName</code>, but not both. </p> 
     */
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier.assign(value); }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must specify the
     * ARN.</p>  <p> You must include either <code>logGroupIdentifier</code> or
     * <code>logGroupName</code>, but not both. </p> 
     */
    inline GetLogGroupFieldsRequest& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must specify the
     * ARN.</p>  <p> You must include either <code>logGroupIdentifier</code> or
     * <code>logGroupName</code>, but not both. </p> 
     */
    inline GetLogGroupFieldsRequest& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must specify the
     * ARN.</p>  <p> You must include either <code>logGroupIdentifier</code> or
     * <code>logGroupName</code>, but not both. </p> 
     */
    inline GetLogGroupFieldsRequest& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    long long m_time;
    bool m_timeHasBeenSet = false;

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
