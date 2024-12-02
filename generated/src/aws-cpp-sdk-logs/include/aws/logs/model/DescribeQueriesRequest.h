/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/QueryStatus.h>
#include <aws/logs/model/QueryLanguage.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class DescribeQueriesRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeQueriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeQueries"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Limits the returned queries to only those for the specified log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline DescribeQueriesRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline DescribeQueriesRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline DescribeQueriesRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the returned queries to only those that have the specified status.
     * Valid values are <code>Cancelled</code>, <code>Complete</code>,
     * <code>Failed</code>, <code>Running</code>, and <code>Scheduled</code>.</p>
     */
    inline const QueryStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const QueryStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(QueryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DescribeQueriesRequest& WithStatus(const QueryStatus& value) { SetStatus(value); return *this;}
    inline DescribeQueriesRequest& WithStatus(QueryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the number of returned queries to the specified number.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeQueriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeQueriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeQueriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeQueriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the returned queries to only the queries that use the specified query
     * language.</p>
     */
    inline const QueryLanguage& GetQueryLanguage() const{ return m_queryLanguage; }
    inline bool QueryLanguageHasBeenSet() const { return m_queryLanguageHasBeenSet; }
    inline void SetQueryLanguage(const QueryLanguage& value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = value; }
    inline void SetQueryLanguage(QueryLanguage&& value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = std::move(value); }
    inline DescribeQueriesRequest& WithQueryLanguage(const QueryLanguage& value) { SetQueryLanguage(value); return *this;}
    inline DescribeQueriesRequest& WithQueryLanguage(QueryLanguage&& value) { SetQueryLanguage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    QueryStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    QueryLanguage m_queryLanguage;
    bool m_queryLanguageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
