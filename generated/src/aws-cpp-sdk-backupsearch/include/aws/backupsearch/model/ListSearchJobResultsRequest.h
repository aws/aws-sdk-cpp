/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/BackupSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BackupSearch
{
namespace Model
{

  /**
   */
  class ListSearchJobResultsRequest : public BackupSearchRequest
  {
  public:
    AWS_BACKUPSEARCH_API ListSearchJobResultsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSearchJobResults"; }

    AWS_BACKUPSEARCH_API Aws::String SerializePayload() const override;

    AWS_BACKUPSEARCH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique string that specifies the search job.</p>
     */
    inline const Aws::String& GetSearchJobIdentifier() const { return m_searchJobIdentifier; }
    inline bool SearchJobIdentifierHasBeenSet() const { return m_searchJobIdentifierHasBeenSet; }
    template<typename SearchJobIdentifierT = Aws::String>
    void SetSearchJobIdentifier(SearchJobIdentifierT&& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = std::forward<SearchJobIdentifierT>(value); }
    template<typename SearchJobIdentifierT = Aws::String>
    ListSearchJobResultsRequest& WithSearchJobIdentifier(SearchJobIdentifierT&& value) { SetSearchJobIdentifier(std::forward<SearchJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned search job results.</p>
     * <p>For example, if a request is made to return <code>MaxResults</code> number of
     * search job results, <code>NextToken</code> allows you to return more items in
     * your list starting at the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSearchJobResultsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resource list items to be returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSearchJobResultsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_searchJobIdentifier;
    bool m_searchJobIdentifierHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
