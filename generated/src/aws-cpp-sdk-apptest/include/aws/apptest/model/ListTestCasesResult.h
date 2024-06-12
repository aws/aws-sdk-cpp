/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestCaseSummary.h>
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
  class ListTestCasesResult
  {
  public:
    AWS_APPTEST_API ListTestCasesResult();
    AWS_APPTEST_API ListTestCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test cases in an application.</p>
     */
    inline const Aws::Vector<TestCaseSummary>& GetTestCases() const{ return m_testCases; }
    inline void SetTestCases(const Aws::Vector<TestCaseSummary>& value) { m_testCases = value; }
    inline void SetTestCases(Aws::Vector<TestCaseSummary>&& value) { m_testCases = std::move(value); }
    inline ListTestCasesResult& WithTestCases(const Aws::Vector<TestCaseSummary>& value) { SetTestCases(value); return *this;}
    inline ListTestCasesResult& WithTestCases(Aws::Vector<TestCaseSummary>&& value) { SetTestCases(std::move(value)); return *this;}
    inline ListTestCasesResult& AddTestCases(const TestCaseSummary& value) { m_testCases.push_back(value); return *this; }
    inline ListTestCasesResult& AddTestCases(TestCaseSummary&& value) { m_testCases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token in test cases.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTestCasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestCasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestCasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTestCasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTestCasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTestCasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TestCaseSummary> m_testCases;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
