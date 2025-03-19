/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/Evaluation.h>
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
namespace CodeCommit
{
namespace Model
{
  class EvaluatePullRequestApprovalRulesResult
  {
  public:
    AWS_CODECOMMIT_API EvaluatePullRequestApprovalRulesResult() = default;
    AWS_CODECOMMIT_API EvaluatePullRequestApprovalRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API EvaluatePullRequestApprovalRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The result of the evaluation, including the names of the rules whose
     * conditions have been met (if any), the names of the rules whose conditions have
     * not been met (if any), whether the pull request is in the approved state, and
     * whether the pull request approval rule has been set aside by an override. </p>
     */
    inline const Evaluation& GetEvaluation() const { return m_evaluation; }
    template<typename EvaluationT = Evaluation>
    void SetEvaluation(EvaluationT&& value) { m_evaluationHasBeenSet = true; m_evaluation = std::forward<EvaluationT>(value); }
    template<typename EvaluationT = Evaluation>
    EvaluatePullRequestApprovalRulesResult& WithEvaluation(EvaluationT&& value) { SetEvaluation(std::forward<EvaluationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EvaluatePullRequestApprovalRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Evaluation m_evaluation;
    bool m_evaluationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
