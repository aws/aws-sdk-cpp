/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/LogStream.h>
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
  class DescribeLogStreamsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeLogStreamsResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeLogStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeLogStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The log streams.</p>
     */
    inline const Aws::Vector<LogStream>& GetLogStreams() const { return m_logStreams; }
    template<typename LogStreamsT = Aws::Vector<LogStream>>
    void SetLogStreams(LogStreamsT&& value) { m_logStreamsHasBeenSet = true; m_logStreams = std::forward<LogStreamsT>(value); }
    template<typename LogStreamsT = Aws::Vector<LogStream>>
    DescribeLogStreamsResult& WithLogStreams(LogStreamsT&& value) { SetLogStreams(std::forward<LogStreamsT>(value)); return *this;}
    template<typename LogStreamsT = LogStream>
    DescribeLogStreamsResult& AddLogStreams(LogStreamsT&& value) { m_logStreamsHasBeenSet = true; m_logStreams.emplace_back(std::forward<LogStreamsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLogStreamsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLogStreamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LogStream> m_logStreams;
    bool m_logStreamsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
