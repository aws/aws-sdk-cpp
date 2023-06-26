/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/TestExecutionResultItems.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListTestExecutionResultItemsResult
  {
  public:
    AWS_LEXMODELSV2_API ListTestExecutionResultItemsResult();
    AWS_LEXMODELSV2_API ListTestExecutionResultItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListTestExecutionResultItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of results from the test execution.</p>
     */
    inline const TestExecutionResultItems& GetTestExecutionResults() const{ return m_testExecutionResults; }

    /**
     * <p>The list of results from the test execution.</p>
     */
    inline void SetTestExecutionResults(const TestExecutionResultItems& value) { m_testExecutionResults = value; }

    /**
     * <p>The list of results from the test execution.</p>
     */
    inline void SetTestExecutionResults(TestExecutionResultItems&& value) { m_testExecutionResults = std::move(value); }

    /**
     * <p>The list of results from the test execution.</p>
     */
    inline ListTestExecutionResultItemsResult& WithTestExecutionResults(const TestExecutionResultItems& value) { SetTestExecutionResults(value); return *this;}

    /**
     * <p>The list of results from the test execution.</p>
     */
    inline ListTestExecutionResultItemsResult& WithTestExecutionResults(TestExecutionResultItems&& value) { SetTestExecutionResults(std::move(value)); return *this;}


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListTestExecutionResultItems</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListTestExecutionResultItems</code>
     * operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListTestExecutionResultItems</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListTestExecutionResultItems</code>
     * operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListTestExecutionResultItems</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListTestExecutionResultItems</code>
     * operation request to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListTestExecutionResultItems</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListTestExecutionResultItems</code>
     * operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListTestExecutionResultItems</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListTestExecutionResultItems</code>
     * operation request to get the next page of results.</p>
     */
    inline ListTestExecutionResultItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListTestExecutionResultItems</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListTestExecutionResultItems</code>
     * operation request to get the next page of results.</p>
     */
    inline ListTestExecutionResultItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListTestExecutionResultItems</code> operation. If the
     * <code>nextToken</code> field is present, you send the contents as the
     * <code>nextToken</code> parameter of a <code>ListTestExecutionResultItems</code>
     * operation request to get the next page of results.</p>
     */
    inline ListTestExecutionResultItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTestExecutionResultItemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTestExecutionResultItemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTestExecutionResultItemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TestExecutionResultItems m_testExecutionResults;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
