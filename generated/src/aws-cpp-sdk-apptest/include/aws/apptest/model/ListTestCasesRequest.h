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
  class ListTestCasesRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API ListTestCasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestCases"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;

    AWS_APPTEST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The IDs of the test cases.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTestCaseIds() const{ return m_testCaseIds; }
    inline bool TestCaseIdsHasBeenSet() const { return m_testCaseIdsHasBeenSet; }
    inline void SetTestCaseIds(const Aws::Vector<Aws::String>& value) { m_testCaseIdsHasBeenSet = true; m_testCaseIds = value; }
    inline void SetTestCaseIds(Aws::Vector<Aws::String>&& value) { m_testCaseIdsHasBeenSet = true; m_testCaseIds = std::move(value); }
    inline ListTestCasesRequest& WithTestCaseIds(const Aws::Vector<Aws::String>& value) { SetTestCaseIds(value); return *this;}
    inline ListTestCasesRequest& WithTestCaseIds(Aws::Vector<Aws::String>&& value) { SetTestCaseIds(std::move(value)); return *this;}
    inline ListTestCasesRequest& AddTestCaseIds(const Aws::String& value) { m_testCaseIdsHasBeenSet = true; m_testCaseIds.push_back(value); return *this; }
    inline ListTestCasesRequest& AddTestCaseIds(Aws::String&& value) { m_testCaseIdsHasBeenSet = true; m_testCaseIds.push_back(std::move(value)); return *this; }
    inline ListTestCasesRequest& AddTestCaseIds(const char* value) { m_testCaseIdsHasBeenSet = true; m_testCaseIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token of the test cases.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTestCasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestCasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestCasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum results of the test case.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTestCasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_testCaseIds;
    bool m_testCaseIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
