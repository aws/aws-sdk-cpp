/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CheckpointUpdatedExecutionState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {
/**
 * <p>The response from the CheckpointDurableExecution operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CheckpointDurableExecutionResponse">AWS
 * API Reference</a></p>
 */
class CheckpointDurableExecutionResult {
 public:
  AWS_LAMBDA_API CheckpointDurableExecutionResult() = default;
  AWS_LAMBDA_API CheckpointDurableExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API CheckpointDurableExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A new checkpoint token to use for the next checkpoint operation. This token
   * replaces the one provided in the request and must be used for subsequent
   * checkpoints to maintain proper ordering.</p>
   */
  inline const Aws::String& GetCheckpointToken() const { return m_checkpointToken; }
  template <typename CheckpointTokenT = Aws::String>
  void SetCheckpointToken(CheckpointTokenT&& value) {
    m_checkpointTokenHasBeenSet = true;
    m_checkpointToken = std::forward<CheckpointTokenT>(value);
  }
  template <typename CheckpointTokenT = Aws::String>
  CheckpointDurableExecutionResult& WithCheckpointToken(CheckpointTokenT&& value) {
    SetCheckpointToken(std::forward<CheckpointTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated execution state information that includes any changes that occurred
   * since the last checkpoint, such as completed callbacks or expired timers. This
   * allows the SDK to update its internal state during replay.</p>
   */
  inline const CheckpointUpdatedExecutionState& GetNewExecutionState() const { return m_newExecutionState; }
  template <typename NewExecutionStateT = CheckpointUpdatedExecutionState>
  void SetNewExecutionState(NewExecutionStateT&& value) {
    m_newExecutionStateHasBeenSet = true;
    m_newExecutionState = std::forward<NewExecutionStateT>(value);
  }
  template <typename NewExecutionStateT = CheckpointUpdatedExecutionState>
  CheckpointDurableExecutionResult& WithNewExecutionState(NewExecutionStateT&& value) {
    SetNewExecutionState(std::forward<NewExecutionStateT>(value));
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
  CheckpointDurableExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_checkpointToken;
  bool m_checkpointTokenHasBeenSet = false;

  CheckpointUpdatedExecutionState m_newExecutionState;
  bool m_newExecutionStateHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
