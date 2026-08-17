/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanExecutionStepStatus.h>
#include <aws/drs/model/RecoveryPlanServer.h>

#include <utility>

namespace Aws {
namespace drs {
namespace Model {

/**
 */
class UpdateRecoveryPlanExecutionStepRequest : public DrsRequest {
 public:
  AWS_DRS_API UpdateRecoveryPlanExecutionStepRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRecoveryPlanExecutionStep"; }

  AWS_DRS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the execution step to update.</p>
   */
  inline const Aws::String& GetRecoveryPlanExecutionStepArn() const { return m_recoveryPlanExecutionStepArn; }
  inline bool RecoveryPlanExecutionStepArnHasBeenSet() const { return m_recoveryPlanExecutionStepArnHasBeenSet; }
  template <typename RecoveryPlanExecutionStepArnT = Aws::String>
  void SetRecoveryPlanExecutionStepArn(RecoveryPlanExecutionStepArnT&& value) {
    m_recoveryPlanExecutionStepArnHasBeenSet = true;
    m_recoveryPlanExecutionStepArn = std::forward<RecoveryPlanExecutionStepArnT>(value);
  }
  template <typename RecoveryPlanExecutionStepArnT = Aws::String>
  UpdateRecoveryPlanExecutionStepRequest& WithRecoveryPlanExecutionStepArn(RecoveryPlanExecutionStepArnT&& value) {
    SetRecoveryPlanExecutionStepArn(std::forward<RecoveryPlanExecutionStepArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Only SKIPPED is accepted. Step must be in NOT_STARTED or FAILED status.</p>
   */
  inline RecoveryPlanExecutionStepStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecoveryPlanExecutionStepStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateRecoveryPlanExecutionStepRequest& WithStatus(RecoveryPlanExecutionStepStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Full replacement of the server list. Only allowed when the step is in
   * NOT_STARTED status (Server type steps only).</p>
   */
  inline const Aws::Vector<RecoveryPlanServer>& GetServers() const { return m_servers; }
  inline bool ServersHasBeenSet() const { return m_serversHasBeenSet; }
  template <typename ServersT = Aws::Vector<RecoveryPlanServer>>
  void SetServers(ServersT&& value) {
    m_serversHasBeenSet = true;
    m_servers = std::forward<ServersT>(value);
  }
  template <typename ServersT = Aws::Vector<RecoveryPlanServer>>
  UpdateRecoveryPlanExecutionStepRequest& WithServers(ServersT&& value) {
    SetServers(std::forward<ServersT>(value));
    return *this;
  }
  template <typename ServersT = RecoveryPlanServer>
  UpdateRecoveryPlanExecutionStepRequest& AddServers(ServersT&& value) {
    m_serversHasBeenSet = true;
    m_servers.emplace_back(std::forward<ServersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated wait duration. Only allowed when the step is in NOT_STARTED status
   * (Wait type steps only).</p>
   */
  inline int GetWaitDurationMinutes() const { return m_waitDurationMinutes; }
  inline bool WaitDurationMinutesHasBeenSet() const { return m_waitDurationMinutesHasBeenSet; }
  inline void SetWaitDurationMinutes(int value) {
    m_waitDurationMinutesHasBeenSet = true;
    m_waitDurationMinutes = value;
  }
  inline UpdateRecoveryPlanExecutionStepRequest& WithWaitDurationMinutes(int value) {
    SetWaitDurationMinutes(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanExecutionStepArn;

  RecoveryPlanExecutionStepStatus m_status{RecoveryPlanExecutionStepStatus::NOT_SET};

  Aws::Vector<RecoveryPlanServer> m_servers;

  int m_waitDurationMinutes{0};
  bool m_recoveryPlanExecutionStepArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_serversHasBeenSet = false;
  bool m_waitDurationMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
