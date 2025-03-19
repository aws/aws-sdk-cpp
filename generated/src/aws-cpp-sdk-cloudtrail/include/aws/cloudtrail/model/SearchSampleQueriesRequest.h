/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class SearchSampleQueriesRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API SearchSampleQueriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchSampleQueries"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The natural language phrase to use for the semantic search. The phrase must
     * be in English. The length constraint is in characters, not words.</p>
     */
    inline const Aws::String& GetSearchPhrase() const { return m_searchPhrase; }
    inline bool SearchPhraseHasBeenSet() const { return m_searchPhraseHasBeenSet; }
    template<typename SearchPhraseT = Aws::String>
    void SetSearchPhrase(SearchPhraseT&& value) { m_searchPhraseHasBeenSet = true; m_searchPhrase = std::forward<SearchPhraseT>(value); }
    template<typename SearchPhraseT = Aws::String>
    SearchSampleQueriesRequest& WithSearchPhrase(SearchPhraseT&& value) { SetSearchPhrase(std::forward<SearchPhraseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return on a single page. The default value
     * is 10. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchSampleQueriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A token you can use to get the next page of results. The length constraint
     * is in characters, not words. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchSampleQueriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchPhrase;
    bool m_searchPhraseHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
