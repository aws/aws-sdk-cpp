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
    AWS_APPTEST_API ListTestRunsRequest() = default;

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
    inline const Aws::String& GetTestSuiteId() const { return m_testSuiteId; }
    inline bool TestSuiteIdHasBeenSet() const { return m_testSuiteIdHasBeenSet; }
    template<typename TestSuiteIdT = Aws::String>
    void SetTestSuiteId(TestSuiteIdT&& value) { m_testSuiteIdHasBeenSet = true; m_testSuiteId = std::forward<TestSuiteIdT>(value); }
    template<typename TestSuiteIdT = Aws::String>
    ListTestRunsRequest& WithTestSuiteId(TestSuiteIdT&& value) { SetTestSuiteId(std::forward<TestSuiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test run IDs of the test runs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTestRunIds() const { return m_testRunIds; }
    inline bool TestRunIdsHasBeenSet() const { return m_testRunIdsHasBeenSet; }
    template<typename TestRunIdsT = Aws::Vector<Aws::String>>
    void SetTestRunIds(TestRunIdsT&& value) { m_testRunIdsHasBeenSet = true; m_testRunIds = std::forward<TestRunIdsT>(value); }
    template<typename TestRunIdsT = Aws::Vector<Aws::String>>
    ListTestRunsRequest& WithTestRunIds(TestRunIdsT&& value) { SetTestRunIds(std::forward<TestRunIdsT>(value)); return *this;}
    template<typename TestRunIdsT = Aws::String>
    ListTestRunsRequest& AddTestRunIds(TestRunIdsT&& value) { m_testRunIdsHasBeenSet = true; m_testRunIds.emplace_back(std::forward<TestRunIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from the previous request to retrieve the next page of test run
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestRunsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of test runs to return in one page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
