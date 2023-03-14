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
    AWS_CLOUDWATCHLOGS_API DescribeLogStreamsResult();
    AWS_CLOUDWATCHLOGS_API DescribeLogStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeLogStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The log streams.</p>
     */
    inline const Aws::Vector<LogStream>& GetLogStreams() const{ return m_logStreams; }

    /**
     * <p>The log streams.</p>
     */
    inline void SetLogStreams(const Aws::Vector<LogStream>& value) { m_logStreams = value; }

    /**
     * <p>The log streams.</p>
     */
    inline void SetLogStreams(Aws::Vector<LogStream>&& value) { m_logStreams = std::move(value); }

    /**
     * <p>The log streams.</p>
     */
    inline DescribeLogStreamsResult& WithLogStreams(const Aws::Vector<LogStream>& value) { SetLogStreams(value); return *this;}

    /**
     * <p>The log streams.</p>
     */
    inline DescribeLogStreamsResult& WithLogStreams(Aws::Vector<LogStream>&& value) { SetLogStreams(std::move(value)); return *this;}

    /**
     * <p>The log streams.</p>
     */
    inline DescribeLogStreamsResult& AddLogStreams(const LogStream& value) { m_logStreams.push_back(value); return *this; }

    /**
     * <p>The log streams.</p>
     */
    inline DescribeLogStreamsResult& AddLogStreams(LogStream&& value) { m_logStreams.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeLogStreamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeLogStreamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeLogStreamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeLogStreamsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeLogStreamsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeLogStreamsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<LogStream> m_logStreams;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
