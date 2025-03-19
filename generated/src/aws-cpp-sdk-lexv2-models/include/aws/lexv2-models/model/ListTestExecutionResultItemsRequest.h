/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestExecutionResultFilterBy.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListTestExecutionResultItemsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListTestExecutionResultItemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestExecutionResultItems"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the test execution to list the result items.</p>
     */
    inline const Aws::String& GetTestExecutionId() const { return m_testExecutionId; }
    inline bool TestExecutionIdHasBeenSet() const { return m_testExecutionIdHasBeenSet; }
    template<typename TestExecutionIdT = Aws::String>
    void SetTestExecutionId(TestExecutionIdT&& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = std::forward<TestExecutionIdT>(value); }
    template<typename TestExecutionIdT = Aws::String>
    ListTestExecutionResultItemsRequest& WithTestExecutionId(TestExecutionIdT&& value) { SetTestExecutionId(std::forward<TestExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter for the list of results from the test set execution.</p>
     */
    inline const TestExecutionResultFilterBy& GetResultFilterBy() const { return m_resultFilterBy; }
    inline bool ResultFilterByHasBeenSet() const { return m_resultFilterByHasBeenSet; }
    template<typename ResultFilterByT = TestExecutionResultFilterBy>
    void SetResultFilterBy(ResultFilterByT&& value) { m_resultFilterByHasBeenSet = true; m_resultFilterBy = std::forward<ResultFilterByT>(value); }
    template<typename ResultFilterByT = TestExecutionResultFilterBy>
    ListTestExecutionResultItemsRequest& WithResultFilterBy(ResultFilterByT&& value) { SetResultFilterBy(std::forward<ResultFilterByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of test execution result items to return in each page. If
     * there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTestExecutionResultItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the <code>ListTestExecutionResultItems</code> operation
     * contains more results than specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestExecutionResultItemsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testExecutionId;
    bool m_testExecutionIdHasBeenSet = false;

    TestExecutionResultFilterBy m_resultFilterBy;
    bool m_resultFilterByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
