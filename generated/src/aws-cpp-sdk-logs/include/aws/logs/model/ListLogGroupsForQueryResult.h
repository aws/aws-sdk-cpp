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
    AWS_CLOUDWATCHLOGS_API ListLogGroupsForQueryResult();
    AWS_CLOUDWATCHLOGS_API ListLogGroupsForQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API ListLogGroupsForQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of the names and ARNs of the log groups that were processed in the
     * query.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const{ return m_logGroupIdentifiers; }
    inline void SetLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { m_logGroupIdentifiers = value; }
    inline void SetLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { m_logGroupIdentifiers = std::move(value); }
    inline ListLogGroupsForQueryResult& WithLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { SetLogGroupIdentifiers(value); return *this;}
    inline ListLogGroupsForQueryResult& WithLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { SetLogGroupIdentifiers(std::move(value)); return *this;}
    inline ListLogGroupsForQueryResult& AddLogGroupIdentifiers(const Aws::String& value) { m_logGroupIdentifiers.push_back(value); return *this; }
    inline ListLogGroupsForQueryResult& AddLogGroupIdentifiers(Aws::String&& value) { m_logGroupIdentifiers.push_back(std::move(value)); return *this; }
    inline ListLogGroupsForQueryResult& AddLogGroupIdentifiers(const char* value) { m_logGroupIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLogGroupsForQueryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLogGroupsForQueryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLogGroupsForQueryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLogGroupsForQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLogGroupsForQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLogGroupsForQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_logGroupIdentifiers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
