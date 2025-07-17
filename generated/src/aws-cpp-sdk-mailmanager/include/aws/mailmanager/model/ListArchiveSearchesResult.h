/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/SearchSummary.h>
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
namespace MailManager
{
namespace Model
{
  /**
   * <p>The response containing a list of archive search jobs and their
   * statuses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListArchiveSearchesResponse">AWS
   * API Reference</a></p>
   */
  class ListArchiveSearchesResult
  {
  public:
    AWS_MAILMANAGER_API ListArchiveSearchesResult() = default;
    AWS_MAILMANAGER_API ListArchiveSearchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListArchiveSearchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of search job identifiers and statuses.</p>
     */
    inline const Aws::Vector<SearchSummary>& GetSearches() const { return m_searches; }
    template<typename SearchesT = Aws::Vector<SearchSummary>>
    void SetSearches(SearchesT&& value) { m_searchesHasBeenSet = true; m_searches = std::forward<SearchesT>(value); }
    template<typename SearchesT = Aws::Vector<SearchSummary>>
    ListArchiveSearchesResult& WithSearches(SearchesT&& value) { SetSearches(std::forward<SearchesT>(value)); return *this;}
    template<typename SearchesT = SearchSummary>
    ListArchiveSearchesResult& AddSearches(SearchesT&& value) { m_searchesHasBeenSet = true; m_searches.emplace_back(std::forward<SearchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListArchiveSearchesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListArchiveSearchesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SearchSummary> m_searches;
    bool m_searchesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
