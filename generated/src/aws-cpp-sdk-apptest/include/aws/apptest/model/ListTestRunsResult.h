/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestRunSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppTest
{
namespace Model
{
  class ListTestRunsResult
  {
  public:
    AWS_APPTEST_API ListTestRunsResult();
    AWS_APPTEST_API ListTestRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test runs of the response query.</p>
     */
    inline const Aws::Vector<TestRunSummary>& GetTestRuns() const{ return m_testRuns; }
    inline void SetTestRuns(const Aws::Vector<TestRunSummary>& value) { m_testRuns = value; }
    inline void SetTestRuns(Aws::Vector<TestRunSummary>&& value) { m_testRuns = std::move(value); }
    inline ListTestRunsResult& WithTestRuns(const Aws::Vector<TestRunSummary>& value) { SetTestRuns(value); return *this;}
    inline ListTestRunsResult& WithTestRuns(Aws::Vector<TestRunSummary>&& value) { SetTestRuns(std::move(value)); return *this;}
    inline ListTestRunsResult& AddTestRuns(const TestRunSummary& value) { m_testRuns.push_back(value); return *this; }
    inline ListTestRunsResult& AddTestRuns(TestRunSummary&& value) { m_testRuns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from the previous request to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTestRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTestRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTestRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTestRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TestRunSummary> m_testRuns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
