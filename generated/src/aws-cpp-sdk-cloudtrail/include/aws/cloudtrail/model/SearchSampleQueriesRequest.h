﻿/**
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
    AWS_CLOUDTRAIL_API SearchSampleQueriesRequest();

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
    inline const Aws::String& GetSearchPhrase() const{ return m_searchPhrase; }
    inline bool SearchPhraseHasBeenSet() const { return m_searchPhraseHasBeenSet; }
    inline void SetSearchPhrase(const Aws::String& value) { m_searchPhraseHasBeenSet = true; m_searchPhrase = value; }
    inline void SetSearchPhrase(Aws::String&& value) { m_searchPhraseHasBeenSet = true; m_searchPhrase = std::move(value); }
    inline void SetSearchPhrase(const char* value) { m_searchPhraseHasBeenSet = true; m_searchPhrase.assign(value); }
    inline SearchSampleQueriesRequest& WithSearchPhrase(const Aws::String& value) { SetSearchPhrase(value); return *this;}
    inline SearchSampleQueriesRequest& WithSearchPhrase(Aws::String&& value) { SetSearchPhrase(std::move(value)); return *this;}
    inline SearchSampleQueriesRequest& WithSearchPhrase(const char* value) { SetSearchPhrase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return on a single page. The default value
     * is 10. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchSampleQueriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A token you can use to get the next page of results. The length constraint
     * is in characters, not words. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchSampleQueriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchSampleQueriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchSampleQueriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_searchPhrase;
    bool m_searchPhraseHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
