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
  class AWS_CLOUDWATCHLOGS_API DescribeLogGroupsRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeLogGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLogGroups"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The prefix to match.</p>
     */
    inline const Aws::String& GetLogGroupNamePrefix() const{ return m_logGroupNamePrefix; }

    /**
     * <p>The prefix to match.</p>
     */
    inline bool LogGroupNamePrefixHasBeenSet() const { return m_logGroupNamePrefixHasBeenSet; }

    /**
     * <p>The prefix to match.</p>
     */
    inline void SetLogGroupNamePrefix(const Aws::String& value) { m_logGroupNamePrefixHasBeenSet = true; m_logGroupNamePrefix = value; }

    /**
     * <p>The prefix to match.</p>
     */
    inline void SetLogGroupNamePrefix(Aws::String&& value) { m_logGroupNamePrefixHasBeenSet = true; m_logGroupNamePrefix = std::move(value); }

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
    inline DescribeLogGroupsRequest& WithLogGroupNamePrefix(Aws::String&& value) { SetLogGroupNamePrefix(std::move(value)); return *this;}

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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

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
    inline DescribeLogGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

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
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

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
