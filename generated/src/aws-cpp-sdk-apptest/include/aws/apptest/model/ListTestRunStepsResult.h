/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestRunStepSummary.h>
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
  class ListTestRunStepsResult
  {
  public:
    AWS_APPTEST_API ListTestRunStepsResult();
    AWS_APPTEST_API ListTestRunStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestRunStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test run steps of the response query.</p>
     */
    inline const Aws::Vector<TestRunStepSummary>& GetTestRunSteps() const{ return m_testRunSteps; }
    inline void SetTestRunSteps(const Aws::Vector<TestRunStepSummary>& value) { m_testRunSteps = value; }
    inline void SetTestRunSteps(Aws::Vector<TestRunStepSummary>&& value) { m_testRunSteps = std::move(value); }
    inline ListTestRunStepsResult& WithTestRunSteps(const Aws::Vector<TestRunStepSummary>& value) { SetTestRunSteps(value); return *this;}
    inline ListTestRunStepsResult& WithTestRunSteps(Aws::Vector<TestRunStepSummary>&& value) { SetTestRunSteps(std::move(value)); return *this;}
    inline ListTestRunStepsResult& AddTestRunSteps(const TestRunStepSummary& value) { m_testRunSteps.push_back(value); return *this; }
    inline ListTestRunStepsResult& AddTestRunSteps(TestRunStepSummary&& value) { m_testRunSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from a previous request to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTestRunStepsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestRunStepsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestRunStepsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTestRunStepsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTestRunStepsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTestRunStepsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TestRunStepSummary> m_testRunSteps;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
