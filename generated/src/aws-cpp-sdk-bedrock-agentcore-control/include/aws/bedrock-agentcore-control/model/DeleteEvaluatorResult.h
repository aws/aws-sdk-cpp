/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class DeleteEvaluatorResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DeleteEvaluatorResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DeleteEvaluatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API DeleteEvaluatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the deleted evaluator. </p>
   */
  inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
  template <typename EvaluatorArnT = Aws::String>
  void SetEvaluatorArn(EvaluatorArnT&& value) {
    m_evaluatorArnHasBeenSet = true;
    m_evaluatorArn = std::forward<EvaluatorArnT>(value);
  }
  template <typename EvaluatorArnT = Aws::String>
  DeleteEvaluatorResult& WithEvaluatorArn(EvaluatorArnT&& value) {
    SetEvaluatorArn(std::forward<EvaluatorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the deleted evaluator. </p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  DeleteEvaluatorResult& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The status of the evaluator deletion operation. </p>
   */
  inline EvaluatorStatus GetStatus() const { return m_status; }
  inline void SetStatus(EvaluatorStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteEvaluatorResult& WithStatus(EvaluatorStatus value) {
    SetStatus(value);
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
  DeleteEvaluatorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluatorArn;
  bool m_evaluatorArnHasBeenSet = false;

  Aws::String m_evaluatorId;
  bool m_evaluatorIdHasBeenSet = false;

  EvaluatorStatus m_status{EvaluatorStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
