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
    AWS_LEXMODELSV2_API ListTestExecutionsResult() = default;
    AWS_LEXMODELSV2_API ListTestExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListTestExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of test executions.</p>
     */
    inline const Aws::Vector<TestExecutionSummary>& GetTestExecutions() const { return m_testExecutions; }
    template<typename TestExecutionsT = Aws::Vector<TestExecutionSummary>>
    void SetTestExecutions(TestExecutionsT&& value) { m_testExecutionsHasBeenSet = true; m_testExecutions = std::forward<TestExecutionsT>(value); }
    template<typename TestExecutionsT = Aws::Vector<TestExecutionSummary>>
    ListTestExecutionsResult& WithTestExecutions(TestExecutionsT&& value) { SetTestExecutions(std::forward<TestExecutionsT>(value)); return *this;}
    template<typename TestExecutionsT = TestExecutionSummary>
    ListTestExecutionsResult& AddTestExecutions(TestExecutionsT&& value) { m_testExecutionsHasBeenSet = true; m_testExecutions.emplace_back(std::forward<TestExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the ListTestExecutions operation. If the nextToken field is present, you send
     * the contents as the nextToken parameter of a ListTestExecutions operation
     * request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestExecutionSummary> m_testExecutions;
    bool m_testExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
