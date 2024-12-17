/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/SearchJobBackupsResult.h>
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
  class ListSearchJobBackupsResult
  {
  public:
    AWS_BACKUPSEARCH_API ListSearchJobBackupsResult();
    AWS_BACKUPSEARCH_API ListSearchJobBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API ListSearchJobBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The recovery points returned the results of a search job</p>
     */
    inline const Aws::Vector<SearchJobBackupsResult>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<SearchJobBackupsResult>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<SearchJobBackupsResult>&& value) { m_results = std::move(value); }
    inline ListSearchJobBackupsResult& WithResults(const Aws::Vector<SearchJobBackupsResult>& value) { SetResults(value); return *this;}
    inline ListSearchJobBackupsResult& WithResults(Aws::Vector<SearchJobBackupsResult>&& value) { SetResults(std::move(value)); return *this;}
    inline ListSearchJobBackupsResult& AddResults(const SearchJobBackupsResult& value) { m_results.push_back(value); return *this; }
    inline ListSearchJobBackupsResult& AddResults(SearchJobBackupsResult&& value) { m_results.push_back(std::move(value)); return *this; }
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
    inline ListSearchJobBackupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSearchJobBackupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSearchJobBackupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSearchJobBackupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSearchJobBackupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSearchJobBackupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SearchJobBackupsResult> m_results;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
