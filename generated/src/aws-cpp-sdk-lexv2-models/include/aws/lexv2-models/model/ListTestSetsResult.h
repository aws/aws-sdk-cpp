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
    AWS_LEXMODELSV2_API ListTestSetsResult() = default;
    AWS_LEXMODELSV2_API ListTestSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListTestSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The selected test sets in a list of test sets.</p>
     */
    inline const Aws::Vector<TestSetSummary>& GetTestSets() const { return m_testSets; }
    template<typename TestSetsT = Aws::Vector<TestSetSummary>>
    void SetTestSets(TestSetsT&& value) { m_testSetsHasBeenSet = true; m_testSets = std::forward<TestSetsT>(value); }
    template<typename TestSetsT = Aws::Vector<TestSetSummary>>
    ListTestSetsResult& WithTestSets(TestSetsT&& value) { SetTestSets(std::forward<TestSetsT>(value)); return *this;}
    template<typename TestSetsT = TestSetSummary>
    ListTestSetsResult& AddTestSets(TestSetsT&& value) { m_testSetsHasBeenSet = true; m_testSets.emplace_back(std::forward<TestSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestSets operation. If the nextToken field is present, you send the
     * contents as the nextToken parameter of a ListTestSets operation request to get
     * the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestSetSummary> m_testSets;
    bool m_testSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
