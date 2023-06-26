/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestExecutionSummary.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListTestExecutionsResult
  {
  public:
    AWS_LEXMODELSV2_API ListTestExecutionsResult();
    AWS_LEXMODELSV2_API ListTestExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListTestExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of test executions.</p>
     */
    inline const Aws::Vector<TestExecutionSummary>& GetTestExecutions() const{ return m_testExecutions; }

    /**
     * <p>The list of test executions.</p>
     */
    inline void SetTestExecutions(const Aws::Vector<TestExecutionSummary>& value) { m_testExecutions = value; }

    /**
     * <p>The list of test executions.</p>
     */
    inline void SetTestExecutions(Aws::Vector<TestExecutionSummary>&& value) { m_testExecutions = std::move(value); }

    /**
     * <p>The list of test executions.</p>
     */
    inline ListTestExecutionsResult& WithTestExecutions(const Aws::Vector<TestExecutionSummary>& value) { SetTestExecutions(value); return *this;}

    /**
     * <p>The list of test executions.</p>
     */
    inline ListTestExecutionsResult& WithTestExecutions(Aws::Vector<TestExecutionSummary>&& value) { SetTestExecutions(std::move(value)); return *this;}

    /**
     * <p>The list of test executions.</p>
     */
    inline ListTestExecutionsResult& AddTestExecutions(const TestExecutionSummary& value) { m_testExecutions.push_back(value); return *this; }

    /**
     * <p>The list of test executions.</p>
     */
    inline ListTestExecutionsResult& AddTestExecutions(TestExecutionSummary&& value) { m_testExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestExecutions operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestExecutions operation
     * request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestExecutions operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestExecutions operation
     * request to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestExecutions operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestExecutions operation
     * request to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestExecutions operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestExecutions operation
     * request to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestExecutions operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestExecutions operation
     * request to get the next page of results.</p>
     */
    inline ListTestExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestExecutions operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestExecutions operation
     * request to get the next page of results.</p>
     */
    inline ListTestExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestExecutions operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestExecutions operation
     * request to get the next page of results.</p>
     */
    inline ListTestExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTestExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTestExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTestExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TestExecutionSummary> m_testExecutions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
