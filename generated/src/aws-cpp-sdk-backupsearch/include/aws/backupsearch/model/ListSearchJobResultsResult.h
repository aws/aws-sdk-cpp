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
    AWS_BACKUPSEARCH_API ListSearchJobResultsResult() = default;
    AWS_BACKUPSEARCH_API ListSearchJobResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API ListSearchJobResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results consist of either EBSResultItem or S3ResultItem.</p>
     */
    inline const Aws::Vector<ResultItem>& GetResults() const { return m_results; }
    template<typename ResultsT = Aws::Vector<ResultItem>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<ResultItem>>
    ListSearchJobResultsResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = ResultItem>
    ListSearchJobResultsResult& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of search job results.</p> <p>For
     * example, if a request is made to return <code>MaxResults</code> number of
     * backups, <code>NextToken</code> allows you to return more items in your list
     * starting at the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSearchJobResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSearchJobResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResultItem> m_results;
    bool m_resultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
