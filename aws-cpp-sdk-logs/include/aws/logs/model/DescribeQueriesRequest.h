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
#include <aws/logs/model/QueryStatus.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DescribeQueriesRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeQueriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeQueries"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Limits the returned queries to only those for the specified log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>Limits the returned queries to only those for the specified log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>Limits the returned queries to only those for the specified log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>Limits the returned queries to only those for the specified log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>Limits the returned queries to only those for the specified log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>Limits the returned queries to only those for the specified log group.</p>
     */
    inline DescribeQueriesRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>Limits the returned queries to only those for the specified log group.</p>
     */
    inline DescribeQueriesRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>Limits the returned queries to only those for the specified log group.</p>
     */
    inline DescribeQueriesRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Limits the returned queries to only those that have the specified status.
     * Valid values are <code>Cancelled</code>, <code>Complete</code>,
     * <code>Failed</code>, <code>Running</code>, and <code>Scheduled</code>.</p>
     */
    inline const QueryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Limits the returned queries to only those that have the specified status.
     * Valid values are <code>Cancelled</code>, <code>Complete</code>,
     * <code>Failed</code>, <code>Running</code>, and <code>Scheduled</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Limits the returned queries to only those that have the specified status.
     * Valid values are <code>Cancelled</code>, <code>Complete</code>,
     * <code>Failed</code>, <code>Running</code>, and <code>Scheduled</code>.</p>
     */
    inline void SetStatus(const QueryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Limits the returned queries to only those that have the specified status.
     * Valid values are <code>Cancelled</code>, <code>Complete</code>,
     * <code>Failed</code>, <code>Running</code>, and <code>Scheduled</code>.</p>
     */
    inline void SetStatus(QueryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Limits the returned queries to only those that have the specified status.
     * Valid values are <code>Cancelled</code>, <code>Complete</code>,
     * <code>Failed</code>, <code>Running</code>, and <code>Scheduled</code>.</p>
     */
    inline DescribeQueriesRequest& WithStatus(const QueryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Limits the returned queries to only those that have the specified status.
     * Valid values are <code>Cancelled</code>, <code>Complete</code>,
     * <code>Failed</code>, <code>Running</code>, and <code>Scheduled</code>.</p>
     */
    inline DescribeQueriesRequest& WithStatus(QueryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Limits the number of returned queries to the specified number.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Limits the number of returned queries to the specified number.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Limits the number of returned queries to the specified number.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Limits the number of returned queries to the specified number.</p>
     */
    inline DescribeQueriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeQueriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeQueriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeQueriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    QueryStatus m_status;
    bool m_statusHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
