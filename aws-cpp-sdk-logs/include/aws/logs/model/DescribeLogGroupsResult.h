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
  class AWS_CLOUDWATCHLOGS_API DescribeLogGroupsResult
  {
  public:
    DescribeLogGroupsResult();
    DescribeLogGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLogGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The log groups.</p>
     */
    inline const Aws::Vector<LogGroup>& GetLogGroups() const{ return m_logGroups; }

    /**
     * <p>The log groups.</p>
     */
    inline void SetLogGroups(const Aws::Vector<LogGroup>& value) { m_logGroups = value; }

    /**
     * <p>The log groups.</p>
     */
    inline void SetLogGroups(Aws::Vector<LogGroup>&& value) { m_logGroups = std::move(value); }

    /**
     * <p>The log groups.</p>
     */
    inline DescribeLogGroupsResult& WithLogGroups(const Aws::Vector<LogGroup>& value) { SetLogGroups(value); return *this;}

    /**
     * <p>The log groups.</p>
     */
    inline DescribeLogGroupsResult& WithLogGroups(Aws::Vector<LogGroup>&& value) { SetLogGroups(std::move(value)); return *this;}

    /**
     * <p>The log groups.</p>
     */
    inline DescribeLogGroupsResult& AddLogGroups(const LogGroup& value) { m_logGroups.push_back(value); return *this; }

    /**
     * <p>The log groups.</p>
     */
    inline DescribeLogGroupsResult& AddLogGroups(LogGroup&& value) { m_logGroups.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeLogGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeLogGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeLogGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LogGroup> m_logGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
