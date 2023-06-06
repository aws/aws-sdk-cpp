/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetSummary.h>
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
  class ListTestSetsResult
  {
  public:
    AWS_LEXMODELSV2_API ListTestSetsResult();
    AWS_LEXMODELSV2_API ListTestSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListTestSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The selected test sets in a list of test sets.</p>
     */
    inline const Aws::Vector<TestSetSummary>& GetTestSets() const{ return m_testSets; }

    /**
     * <p>The selected test sets in a list of test sets.</p>
     */
    inline void SetTestSets(const Aws::Vector<TestSetSummary>& value) { m_testSets = value; }

    /**
     * <p>The selected test sets in a list of test sets.</p>
     */
    inline void SetTestSets(Aws::Vector<TestSetSummary>&& value) { m_testSets = std::move(value); }

    /**
     * <p>The selected test sets in a list of test sets.</p>
     */
    inline ListTestSetsResult& WithTestSets(const Aws::Vector<TestSetSummary>& value) { SetTestSets(value); return *this;}

    /**
     * <p>The selected test sets in a list of test sets.</p>
     */
    inline ListTestSetsResult& WithTestSets(Aws::Vector<TestSetSummary>&& value) { SetTestSets(std::move(value)); return *this;}

    /**
     * <p>The selected test sets in a list of test sets.</p>
     */
    inline ListTestSetsResult& AddTestSets(const TestSetSummary& value) { m_testSets.push_back(value); return *this; }

    /**
     * <p>The selected test sets in a list of test sets.</p>
     */
    inline ListTestSetsResult& AddTestSets(TestSetSummary&& value) { m_testSets.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestSets operation. If the nextToken field is present, you send the
     * contents as the nextToken parameter of a ListTestSets operation request to get
     * the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestSets operation. If the nextToken field is present, you send the
     * contents as the nextToken parameter of a ListTestSets operation request to get
     * the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestSets operation. If the nextToken field is present, you send the
     * contents as the nextToken parameter of a ListTestSets operation request to get
     * the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestSets operation. If the nextToken field is present, you send the
     * contents as the nextToken parameter of a ListTestSets operation request to get
     * the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestSets operation. If the nextToken field is present, you send the
     * contents as the nextToken parameter of a ListTestSets operation request to get
     * the next page of results.</p>
     */
    inline ListTestSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestSets operation. If the nextToken field is present, you send the
     * contents as the nextToken parameter of a ListTestSets operation request to get
     * the next page of results.</p>
     */
    inline ListTestSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestSets operation. If the nextToken field is present, you send the
     * contents as the nextToken parameter of a ListTestSets operation request to get
     * the next page of results.</p>
     */
    inline ListTestSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTestSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTestSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTestSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TestSetSummary> m_testSets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
