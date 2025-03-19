/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/AppTestRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListTestSuitesRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API ListTestSuitesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestSuites"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;

    AWS_APPTEST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The suite ID of the test suites.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTestSuiteIds() const { return m_testSuiteIds; }
    inline bool TestSuiteIdsHasBeenSet() const { return m_testSuiteIdsHasBeenSet; }
    template<typename TestSuiteIdsT = Aws::Vector<Aws::String>>
    void SetTestSuiteIds(TestSuiteIdsT&& value) { m_testSuiteIdsHasBeenSet = true; m_testSuiteIds = std::forward<TestSuiteIdsT>(value); }
    template<typename TestSuiteIdsT = Aws::Vector<Aws::String>>
    ListTestSuitesRequest& WithTestSuiteIds(TestSuiteIdsT&& value) { SetTestSuiteIds(std::forward<TestSuiteIdsT>(value)); return *this;}
    template<typename TestSuiteIdsT = Aws::String>
    ListTestSuitesRequest& AddTestSuiteIds(TestSuiteIdsT&& value) { m_testSuiteIdsHasBeenSet = true; m_testSuiteIds.emplace_back(std::forward<TestSuiteIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from a previous request to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestSuitesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of test suites to return in one page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTestSuitesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_testSuiteIds;
    bool m_testSuiteIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
