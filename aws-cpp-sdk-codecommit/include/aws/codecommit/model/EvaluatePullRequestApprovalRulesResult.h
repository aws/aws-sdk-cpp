/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/Evaluation.h>
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
    AWS_CODECOMMIT_API EvaluatePullRequestApprovalRulesResult();
    AWS_CODECOMMIT_API EvaluatePullRequestApprovalRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API EvaluatePullRequestApprovalRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The result of the evaluation, including the names of the rules whose
     * conditions have been met (if any), the names of the rules whose conditions have
     * not been met (if any), whether the pull request is in the approved state, and
     * whether the pull request approval rule has been set aside by an override. </p>
     */
    inline const Evaluation& GetEvaluation() const{ return m_evaluation; }

    /**
     * <p>The result of the evaluation, including the names of the rules whose
     * conditions have been met (if any), the names of the rules whose conditions have
     * not been met (if any), whether the pull request is in the approved state, and
     * whether the pull request approval rule has been set aside by an override. </p>
     */
    inline void SetEvaluation(const Evaluation& value) { m_evaluation = value; }

    /**
     * <p>The result of the evaluation, including the names of the rules whose
     * conditions have been met (if any), the names of the rules whose conditions have
     * not been met (if any), whether the pull request is in the approved state, and
     * whether the pull request approval rule has been set aside by an override. </p>
     */
    inline void SetEvaluation(Evaluation&& value) { m_evaluation = std::move(value); }

    /**
     * <p>The result of the evaluation, including the names of the rules whose
     * conditions have been met (if any), the names of the rules whose conditions have
     * not been met (if any), whether the pull request is in the approved state, and
     * whether the pull request approval rule has been set aside by an override. </p>
     */
    inline EvaluatePullRequestApprovalRulesResult& WithEvaluation(const Evaluation& value) { SetEvaluation(value); return *this;}

    /**
     * <p>The result of the evaluation, including the names of the rules whose
     * conditions have been met (if any), the names of the rules whose conditions have
     * not been met (if any), whether the pull request is in the approved state, and
     * whether the pull request approval rule has been set aside by an override. </p>
     */
    inline EvaluatePullRequestApprovalRulesResult& WithEvaluation(Evaluation&& value) { SetEvaluation(std::move(value)); return *this;}

  private:

    Evaluation m_evaluation;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
