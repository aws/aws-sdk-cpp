/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestSuiteSummary.h>
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
  class ListTestSuitesResult
  {
  public:
    AWS_APPTEST_API ListTestSuitesResult();
    AWS_APPTEST_API ListTestSuitesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestSuitesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test suites returned with the response query.</p>
     */
    inline const Aws::Vector<TestSuiteSummary>& GetTestSuites() const{ return m_testSuites; }
    inline void SetTestSuites(const Aws::Vector<TestSuiteSummary>& value) { m_testSuites = value; }
    inline void SetTestSuites(Aws::Vector<TestSuiteSummary>&& value) { m_testSuites = std::move(value); }
    inline ListTestSuitesResult& WithTestSuites(const Aws::Vector<TestSuiteSummary>& value) { SetTestSuites(value); return *this;}
    inline ListTestSuitesResult& WithTestSuites(Aws::Vector<TestSuiteSummary>&& value) { SetTestSuites(std::move(value)); return *this;}
    inline ListTestSuitesResult& AddTestSuites(const TestSuiteSummary& value) { m_testSuites.push_back(value); return *this; }
    inline ListTestSuitesResult& AddTestSuites(TestSuiteSummary&& value) { m_testSuites.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from a previous request to retrieve the next page of test suites
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTestSuitesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestSuitesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestSuitesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTestSuitesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTestSuitesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTestSuitesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TestSuiteSummary> m_testSuites;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
