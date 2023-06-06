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
    AWS_LEXMODELSV2_API ListTestExecutionResultItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestExecutionResultItems"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the test execution to list the result items.</p>
     */
    inline const Aws::String& GetTestExecutionId() const{ return m_testExecutionId; }

    /**
     * <p>The unique identifier of the test execution to list the result items.</p>
     */
    inline bool TestExecutionIdHasBeenSet() const { return m_testExecutionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the test execution to list the result items.</p>
     */
    inline void SetTestExecutionId(const Aws::String& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = value; }

    /**
     * <p>The unique identifier of the test execution to list the result items.</p>
     */
    inline void SetTestExecutionId(Aws::String&& value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId = std::move(value); }

    /**
     * <p>The unique identifier of the test execution to list the result items.</p>
     */
    inline void SetTestExecutionId(const char* value) { m_testExecutionIdHasBeenSet = true; m_testExecutionId.assign(value); }

    /**
     * <p>The unique identifier of the test execution to list the result items.</p>
     */
    inline ListTestExecutionResultItemsRequest& WithTestExecutionId(const Aws::String& value) { SetTestExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of the test execution to list the result items.</p>
     */
    inline ListTestExecutionResultItemsRequest& WithTestExecutionId(Aws::String&& value) { SetTestExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the test execution to list the result items.</p>
     */
    inline ListTestExecutionResultItemsRequest& WithTestExecutionId(const char* value) { SetTestExecutionId(value); return *this;}


    /**
     * <p>The filter for the list of results from the test set execution.</p>
     */
    inline const TestExecutionResultFilterBy& GetResultFilterBy() const{ return m_resultFilterBy; }

    /**
     * <p>The filter for the list of results from the test set execution.</p>
     */
    inline bool ResultFilterByHasBeenSet() const { return m_resultFilterByHasBeenSet; }

    /**
     * <p>The filter for the list of results from the test set execution.</p>
     */
    inline void SetResultFilterBy(const TestExecutionResultFilterBy& value) { m_resultFilterByHasBeenSet = true; m_resultFilterBy = value; }

    /**
     * <p>The filter for the list of results from the test set execution.</p>
     */
    inline void SetResultFilterBy(TestExecutionResultFilterBy&& value) { m_resultFilterByHasBeenSet = true; m_resultFilterBy = std::move(value); }

    /**
     * <p>The filter for the list of results from the test set execution.</p>
     */
    inline ListTestExecutionResultItemsRequest& WithResultFilterBy(const TestExecutionResultFilterBy& value) { SetResultFilterBy(value); return *this;}

    /**
     * <p>The filter for the list of results from the test set execution.</p>
     */
    inline ListTestExecutionResultItemsRequest& WithResultFilterBy(TestExecutionResultFilterBy&& value) { SetResultFilterBy(std::move(value)); return *this;}


    /**
     * <p>The maximum number of test execution result items to return in each page. If
     * there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of test execution result items to return in each page. If
     * there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of test execution result items to return in each page. If
     * there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of test execution result items to return in each page. If
     * there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline ListTestExecutionResultItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the <code>ListTestExecutionResultItems</code> operation
     * contains more results than specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the <code>ListTestExecutionResultItems</code> operation
     * contains more results than specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the <code>ListTestExecutionResultItems</code> operation
     * contains more results than specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the <code>ListTestExecutionResultItems</code> operation
     * contains more results than specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the <code>ListTestExecutionResultItems</code> operation
     * contains more results than specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the <code>ListTestExecutionResultItems</code> operation
     * contains more results than specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline ListTestExecutionResultItemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the <code>ListTestExecutionResultItems</code> operation
     * contains more results than specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline ListTestExecutionResultItemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the <code>ListTestExecutionResultItems</code> operation
     * contains more results than specified in the <code>maxResults</code> parameter, a
     * token is returned in the response. Use that token in the <code>nextToken</code>
     * parameter to return the next page of results.</p>
     */
    inline ListTestExecutionResultItemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_testExecutionId;
    bool m_testExecutionIdHasBeenSet = false;

    TestExecutionResultFilterBy m_resultFilterBy;
    bool m_resultFilterByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
