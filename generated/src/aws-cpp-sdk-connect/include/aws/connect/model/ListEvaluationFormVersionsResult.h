/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationFormVersionSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListEvaluationFormVersionsResult
  {
  public:
    AWS_CONNECT_API ListEvaluationFormVersionsResult() = default;
    AWS_CONNECT_API ListEvaluationFormVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListEvaluationFormVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides details about a list of evaluation forms belonging to an
     * instance.</p>
     */
    inline const Aws::Vector<EvaluationFormVersionSummary>& GetEvaluationFormVersionSummaryList() const { return m_evaluationFormVersionSummaryList; }
    template<typename EvaluationFormVersionSummaryListT = Aws::Vector<EvaluationFormVersionSummary>>
    void SetEvaluationFormVersionSummaryList(EvaluationFormVersionSummaryListT&& value) { m_evaluationFormVersionSummaryListHasBeenSet = true; m_evaluationFormVersionSummaryList = std::forward<EvaluationFormVersionSummaryListT>(value); }
    template<typename EvaluationFormVersionSummaryListT = Aws::Vector<EvaluationFormVersionSummary>>
    ListEvaluationFormVersionsResult& WithEvaluationFormVersionSummaryList(EvaluationFormVersionSummaryListT&& value) { SetEvaluationFormVersionSummaryList(std::forward<EvaluationFormVersionSummaryListT>(value)); return *this;}
    template<typename EvaluationFormVersionSummaryListT = EvaluationFormVersionSummary>
    ListEvaluationFormVersionsResult& AddEvaluationFormVersionSummaryList(EvaluationFormVersionSummaryListT&& value) { m_evaluationFormVersionSummaryListHasBeenSet = true; m_evaluationFormVersionSummaryList.emplace_back(std::forward<EvaluationFormVersionSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEvaluationFormVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEvaluationFormVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EvaluationFormVersionSummary> m_evaluationFormVersionSummaryList;
    bool m_evaluationFormVersionSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
