/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/ResultItem.h>
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
  class ListSearchJobResultsResult
  {
  public:
    AWS_BACKUPSEARCH_API ListSearchJobResultsResult();
    AWS_BACKUPSEARCH_API ListSearchJobResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API ListSearchJobResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results consist of either EBSResultItem or S3ResultItem.</p>
     */
    inline const Aws::Vector<ResultItem>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<ResultItem>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<ResultItem>&& value) { m_results = std::move(value); }
    inline ListSearchJobResultsResult& WithResults(const Aws::Vector<ResultItem>& value) { SetResults(value); return *this;}
    inline ListSearchJobResultsResult& WithResults(Aws::Vector<ResultItem>&& value) { SetResults(std::move(value)); return *this;}
    inline ListSearchJobResultsResult& AddResults(const ResultItem& value) { m_results.push_back(value); return *this; }
    inline ListSearchJobResultsResult& AddResults(ResultItem&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of search job results.</p> <p>For
     * example, if a request is made to return <code>MaxResults</code> number of
     * backups, <code>NextToken</code> allows you to return more items in your list
     * starting at the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSearchJobResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSearchJobResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSearchJobResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSearchJobResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSearchJobResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSearchJobResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResultItem> m_results;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
