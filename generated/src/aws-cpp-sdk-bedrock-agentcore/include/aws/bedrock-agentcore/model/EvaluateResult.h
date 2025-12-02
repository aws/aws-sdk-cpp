/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EvaluationResultContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {
class EvaluateResult {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluateResult() = default;
  AWS_BEDROCKAGENTCORE_API EvaluateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API EvaluateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The detailed evaluation results containing scores, explanations, and
   * metadata. Includes the evaluator information, numerical or categorical ratings
   * based on the evaluator's rating scale, and token usage statistics for the
   * evaluation process. </p>
   */
  inline const Aws::Vector<EvaluationResultContent>& GetEvaluationResults() const { return m_evaluationResults; }
  template <typename EvaluationResultsT = Aws::Vector<EvaluationResultContent>>
  void SetEvaluationResults(EvaluationResultsT&& value) {
    m_evaluationResultsHasBeenSet = true;
    m_evaluationResults = std::forward<EvaluationResultsT>(value);
  }
  template <typename EvaluationResultsT = Aws::Vector<EvaluationResultContent>>
  EvaluateResult& WithEvaluationResults(EvaluationResultsT&& value) {
    SetEvaluationResults(std::forward<EvaluationResultsT>(value));
    return *this;
  }
  template <typename EvaluationResultsT = EvaluationResultContent>
  EvaluateResult& AddEvaluationResults(EvaluationResultsT&& value) {
    m_evaluationResultsHasBeenSet = true;
    m_evaluationResults.emplace_back(std::forward<EvaluationResultsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  EvaluateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationResultContent> m_evaluationResults;
  bool m_evaluationResultsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
