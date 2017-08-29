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
  class AWS_CLOUDWATCHLOGS_API DescribeLogStreamsResult
  {
  public:
    DescribeLogStreamsResult();
    DescribeLogStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLogStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Vector<LogStream> m_logStreams;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
