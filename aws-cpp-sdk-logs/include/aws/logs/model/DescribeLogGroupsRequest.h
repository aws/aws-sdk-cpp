﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DescribeLogGroupsRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeLogGroupsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The prefix to match.</p>
     */
    inline const Aws::String& GetLogGroupNamePrefix() const{ return m_logGroupNamePrefix; }

    /**
     * <p>The prefix to match.</p>
     */
    inline void SetLogGroupNamePrefix(const Aws::String& value) { m_logGroupNamePrefixHasBeenSet = true; m_logGroupNamePrefix = value; }

    /**
     * <p>The prefix to match.</p>
     */
    inline void SetLogGroupNamePrefix(Aws::String&& value) { m_logGroupNamePrefixHasBeenSet = true; m_logGroupNamePrefix = value; }

    /**
     * <p>The prefix to match.</p>
     */
    inline void SetLogGroupNamePrefix(const char* value) { m_logGroupNamePrefixHasBeenSet = true; m_logGroupNamePrefix.assign(value); }

    /**
     * <p>The prefix to match.</p>
     */
    inline DescribeLogGroupsRequest& WithLogGroupNamePrefix(const Aws::String& value) { SetLogGroupNamePrefix(value); return *this;}

    /**
     * <p>The prefix to match.</p>
     */
    inline DescribeLogGroupsRequest& WithLogGroupNamePrefix(Aws::String&& value) { SetLogGroupNamePrefix(value); return *this;}

    /**
     * <p>The prefix to match.</p>
     */
    inline DescribeLogGroupsRequest& WithLogGroupNamePrefix(const char* value) { SetLogGroupNamePrefix(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLogGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLogGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLogGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline DescribeLogGroupsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_logGroupNamePrefix;
    bool m_logGroupNamePrefixHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
