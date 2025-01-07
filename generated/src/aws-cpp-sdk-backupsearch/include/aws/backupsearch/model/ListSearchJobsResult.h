/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/SearchJobSummary.h>
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
namespace BackupSearch
{
namespace Model
{
  class ListSearchJobsResult
  {
  public:
    AWS_BACKUPSEARCH_API ListSearchJobsResult();
    AWS_BACKUPSEARCH_API ListSearchJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API ListSearchJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The search jobs among the list, with details of the returned search jobs.</p>
     */
    inline const Aws::Vector<SearchJobSummary>& GetSearchJobs() const{ return m_searchJobs; }
    inline void SetSearchJobs(const Aws::Vector<SearchJobSummary>& value) { m_searchJobs = value; }
    inline void SetSearchJobs(Aws::Vector<SearchJobSummary>&& value) { m_searchJobs = std::move(value); }
    inline ListSearchJobsResult& WithSearchJobs(const Aws::Vector<SearchJobSummary>& value) { SetSearchJobs(value); return *this;}
    inline ListSearchJobsResult& WithSearchJobs(Aws::Vector<SearchJobSummary>&& value) { SetSearchJobs(std::move(value)); return *this;}
    inline ListSearchJobsResult& AddSearchJobs(const SearchJobSummary& value) { m_searchJobs.push_back(value); return *this; }
    inline ListSearchJobsResult& AddSearchJobs(SearchJobSummary&& value) { m_searchJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned backups included in a
     * search job.</p> <p>For example, if a request is made to return
     * <code>MaxResults</code> number of backups, <code>NextToken</code> allows you to
     * return more items in your list starting at the location pointed to by the next
     * token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSearchJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSearchJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSearchJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSearchJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSearchJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSearchJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SearchJobSummary> m_searchJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
