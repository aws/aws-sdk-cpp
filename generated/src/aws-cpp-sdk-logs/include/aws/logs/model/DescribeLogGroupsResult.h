﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/LogGroup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{
  class DescribeLogGroupsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeLogGroupsResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeLogGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeLogGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The log groups.</p> <p>If the <code>retentionInDays</code> value is not
     * included for a log group, then that log group's events do not expire.</p>
     */
    inline const Aws::Vector<LogGroup>& GetLogGroups() const { return m_logGroups; }
    template<typename LogGroupsT = Aws::Vector<LogGroup>>
    void SetLogGroups(LogGroupsT&& value) { m_logGroupsHasBeenSet = true; m_logGroups = std::forward<LogGroupsT>(value); }
    template<typename LogGroupsT = Aws::Vector<LogGroup>>
    DescribeLogGroupsResult& WithLogGroups(LogGroupsT&& value) { SetLogGroups(std::forward<LogGroupsT>(value)); return *this;}
    template<typename LogGroupsT = LogGroup>
    DescribeLogGroupsResult& AddLogGroups(LogGroupsT&& value) { m_logGroupsHasBeenSet = true; m_logGroups.emplace_back(std::forward<LogGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLogGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLogGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogGroup> m_logGroups;
    bool m_logGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
