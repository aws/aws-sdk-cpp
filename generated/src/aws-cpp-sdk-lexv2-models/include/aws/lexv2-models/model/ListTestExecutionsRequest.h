﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/lexv2-models/model/TestExecutionSortBy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListTestExecutionsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListTestExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestExecutions"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The sort order of the test set executions.</p>
     */
    inline const TestExecutionSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const TestExecutionSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(TestExecutionSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListTestExecutionsRequest& WithSortBy(const TestExecutionSortBy& value) { SetSortBy(value); return *this;}
    inline ListTestExecutionsRequest& WithSortBy(TestExecutionSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of test executions to return in each page. If there are
     * fewer results than the max page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTestExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the ListTestExecutions operation contains more results
     * than specified in the maxResults parameter, a token is returned in the response.
     * Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTestExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    TestExecutionSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
