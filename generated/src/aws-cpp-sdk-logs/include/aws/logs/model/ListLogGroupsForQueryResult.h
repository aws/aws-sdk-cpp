/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListLogGroupsForQueryResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API ListLogGroupsForQueryResult() = default;
    AWS_CLOUDWATCHLOGS_API ListLogGroupsForQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API ListLogGroupsForQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of the names and ARNs of the log groups that were processed in the
     * query.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
    template<typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
    void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value); }
    template<typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
    ListLogGroupsForQueryResult& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) { SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value)); return *this;}
    template<typename LogGroupIdentifiersT = Aws::String>
    ListLogGroupsForQueryResult& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLogGroupsForQueryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLogGroupsForQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_logGroupIdentifiers;
    bool m_logGroupIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
