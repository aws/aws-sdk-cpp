/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/OperationUpdate.h>

#include <utility>

namespace Aws {
namespace Lambda {
namespace Model {

/**
 */
class CheckpointDurableExecutionRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API CheckpointDurableExecutionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CheckpointDurableExecution"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the durable execution.</p>
   */
  inline const Aws::String& GetDurableExecutionArn() const { return m_durableExecutionArn; }
  inline bool DurableExecutionArnHasBeenSet() const { return m_durableExecutionArnHasBeenSet; }
  template <typename DurableExecutionArnT = Aws::String>
  void SetDurableExecutionArn(DurableExecutionArnT&& value) {
    m_durableExecutionArnHasBeenSet = true;
    m_durableExecutionArn = std::forward<DurableExecutionArnT>(value);
  }
  template <typename DurableExecutionArnT = Aws::String>
  CheckpointDurableExecutionRequest& WithDurableExecutionArn(DurableExecutionArnT&& value) {
    SetDurableExecutionArn(std::forward<DurableExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique token that identifies the current checkpoint state. This token is
   * provided by the Lambda runtime and must be used to ensure checkpoints are
   * applied in the correct order. Each checkpoint operation consumes this token and
   * returns a new one.</p>
   */
  inline const Aws::String& GetCheckpointToken() const { return m_checkpointToken; }
  inline bool CheckpointTokenHasBeenSet() const { return m_checkpointTokenHasBeenSet; }
  template <typename CheckpointTokenT = Aws::String>
  void SetCheckpointToken(CheckpointTokenT&& value) {
    m_checkpointTokenHasBeenSet = true;
    m_checkpointToken = std::forward<CheckpointTokenT>(value);
  }
  template <typename CheckpointTokenT = Aws::String>
  CheckpointDurableExecutionRequest& WithCheckpointToken(CheckpointTokenT&& value) {
    SetCheckpointToken(std::forward<CheckpointTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of state updates to apply during this checkpoint. Each update
   * represents a change to the execution state, such as completing a step, starting
   * a callback, or scheduling a timer. Updates are applied atomically as part of the
   * checkpoint operation.</p>
   */
  inline const Aws::Vector<OperationUpdate>& GetUpdates() const { return m_updates; }
  inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
  template <typename UpdatesT = Aws::Vector<OperationUpdate>>
  void SetUpdates(UpdatesT&& value) {
    m_updatesHasBeenSet = true;
    m_updates = std::forward<UpdatesT>(value);
  }
  template <typename UpdatesT = Aws::Vector<OperationUpdate>>
  CheckpointDurableExecutionRequest& WithUpdates(UpdatesT&& value) {
    SetUpdates(std::forward<UpdatesT>(value));
    return *this;
  }
  template <typename UpdatesT = OperationUpdate>
  CheckpointDurableExecutionRequest& AddUpdates(UpdatesT&& value) {
    m_updatesHasBeenSet = true;
    m_updates.emplace_back(std::forward<UpdatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional idempotency token to ensure that duplicate checkpoint requests
   * are handled correctly. If provided, Lambda uses this token to detect and handle
   * duplicate requests within a 15-minute window.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CheckpointDurableExecutionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_durableExecutionArn;

  Aws::String m_checkpointToken;

  Aws::Vector<OperationUpdate> m_updates;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_durableExecutionArnHasBeenSet = false;
  bool m_checkpointTokenHasBeenSet = false;
  bool m_updatesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
