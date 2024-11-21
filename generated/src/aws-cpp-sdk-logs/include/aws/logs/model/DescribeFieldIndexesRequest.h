/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeFieldIndexesRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeFieldIndexesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFieldIndexes"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array containing the names or ARNs of the log groups that you want to
     * retrieve field indexes for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const{ return m_logGroupIdentifiers; }
    inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
    inline void SetLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = value; }
    inline void SetLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = std::move(value); }
    inline DescribeFieldIndexesRequest& WithLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { SetLogGroupIdentifiers(value); return *this;}
    inline DescribeFieldIndexesRequest& WithLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { SetLogGroupIdentifiers(std::move(value)); return *this;}
    inline DescribeFieldIndexesRequest& AddLogGroupIdentifiers(const Aws::String& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(value); return *this; }
    inline DescribeFieldIndexesRequest& AddLogGroupIdentifiers(Aws::String&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(std::move(value)); return *this; }
    inline DescribeFieldIndexesRequest& AddLogGroupIdentifiers(const char* value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeFieldIndexesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeFieldIndexesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeFieldIndexesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_logGroupIdentifiers;
    bool m_logGroupIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
