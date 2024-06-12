/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/AppTestRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppTest
{
namespace Model
{

  /**
   */
  class ListTestRunsRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API ListTestRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestRuns"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;

    AWS_APPTEST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The test suite ID of the test runs.</p>
     */
    inline const Aws::String& GetTestSuiteId() const{ return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    inline void SetTestSuiteId(const Aws::String& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = value; }
    inline void SetTestSuiteId(Aws::String&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::move(value); }
    inline void SetTestSuiteId(const char* value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId.assign(value); }
    inline ListTestRunsRequest& WithTestSuiteId(const Aws::String& value) { SetTestSuiteId(value); return *this;}
    inline ListTestRunsRequest& WithTestSuiteId(Aws::String&& value) { SetTestSuiteId(std::move(value)); return *this;}
    inline ListTestRunsRequest& WithTestSuiteId(const char* value) { SetTestSuiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run IDs of the test runs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTestRunIds() const{ return m_testRunIds; }
    inline bool TestRunIdsHasBeenSet() const { return m_testRunIdsHasBeenSet; }
    inline void SetTestRunIds(const Aws::Vector<Aws::String>& value) { m_testRunIdsHasBeenSet = true; m_testRunIds = value; }
    inline void SetTestRunIds(Aws::Vector<Aws::String>&& value) { m_testRunIdsHasBeenSet = true; m_testRunIds = std::move(value); }
    inline ListTestRunsRequest& WithTestRunIds(const Aws::Vector<Aws::String>& value) { SetTestRunIds(value); return *this;}
    inline ListTestRunsRequest& WithTestRunIds(Aws::Vector<Aws::String>&& value) { SetTestRunIds(std::move(value)); return *this;}
    inline ListTestRunsRequest& AddTestRunIds(const Aws::String& value) { m_testRunIdsHasBeenSet = true; m_testRunIds.push_back(value); return *this; }
    inline ListTestRunsRequest& AddTestRunIds(Aws::String&& value) { m_testRunIdsHasBeenSet = true; m_testRunIds.push_back(std::move(value)); return *this; }
    inline ListTestRunsRequest& AddTestRunIds(const char* value) { m_testRunIdsHasBeenSet = true; m_testRunIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from the previous request to retrieve the next page of test run
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTestRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of test runs to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTestRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_testSuiteId;
    bool m_testSuiteIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_testRunIds;
    bool m_testRunIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
