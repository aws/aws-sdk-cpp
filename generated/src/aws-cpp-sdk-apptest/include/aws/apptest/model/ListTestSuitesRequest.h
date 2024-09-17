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
    AWS_APPTEST_API ListTestSuitesRequest();

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
    inline const Aws::Vector<Aws::String>& GetTestSuiteIds() const{ return m_testSuiteIds; }
    inline bool TestSuiteIdsHasBeenSet() const { return m_testSuiteIdsHasBeenSet; }
    inline void SetTestSuiteIds(const Aws::Vector<Aws::String>& value) { m_testSuiteIdsHasBeenSet = true; m_testSuiteIds = value; }
    inline void SetTestSuiteIds(Aws::Vector<Aws::String>&& value) { m_testSuiteIdsHasBeenSet = true; m_testSuiteIds = std::move(value); }
    inline ListTestSuitesRequest& WithTestSuiteIds(const Aws::Vector<Aws::String>& value) { SetTestSuiteIds(value); return *this;}
    inline ListTestSuitesRequest& WithTestSuiteIds(Aws::Vector<Aws::String>&& value) { SetTestSuiteIds(std::move(value)); return *this;}
    inline ListTestSuitesRequest& AddTestSuiteIds(const Aws::String& value) { m_testSuiteIdsHasBeenSet = true; m_testSuiteIds.push_back(value); return *this; }
    inline ListTestSuitesRequest& AddTestSuiteIds(Aws::String&& value) { m_testSuiteIdsHasBeenSet = true; m_testSuiteIds.push_back(std::move(value)); return *this; }
    inline ListTestSuitesRequest& AddTestSuiteIds(const char* value) { m_testSuiteIdsHasBeenSet = true; m_testSuiteIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from a previous request to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTestSuitesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestSuitesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestSuitesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of test suites to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTestSuitesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_testSuiteIds;
    bool m_testSuiteIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
