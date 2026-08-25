/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/MonitorAccountType.h>
#include <aws/devops-agent/model/ValidationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for AWS monitor account integration, allowing AIDevOps to
 * monitor AWS resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AWSConfiguration">AWS
 * API Reference</a></p>
 */
class AWSConfiguration {
 public:
  AWS_DEVOPSAGENT_API AWSConfiguration() = default;
  AWS_DEVOPSAGENT_API AWSConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API AWSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Role ARN to be assumed by AIDevOps to operate on behalf of customer.</p>
   */
  inline const Aws::String& GetAssumableRoleArn() const { return m_assumableRoleArn; }
  inline bool AssumableRoleArnHasBeenSet() const { return m_assumableRoleArnHasBeenSet; }
  template <typename AssumableRoleArnT = Aws::String>
  void SetAssumableRoleArn(AssumableRoleArnT&& value) {
    m_assumableRoleArnHasBeenSet = true;
    m_assumableRoleArn = std::forward<AssumableRoleArnT>(value);
  }
  template <typename AssumableRoleArnT = Aws::String>
  AWSConfiguration& WithAssumableRoleArn(AssumableRoleArnT&& value) {
    SetAssumableRoleArn(std::forward<AssumableRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS Account Id corresponding to provided resources.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AWSConfiguration& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account Type 'monitor' for AIDevOps monitoring.</p>
   */
  inline MonitorAccountType GetAccountType() const { return m_accountType; }
  inline bool AccountTypeHasBeenSet() const { return m_accountTypeHasBeenSet; }
  inline void SetAccountType(MonitorAccountType value) {
    m_accountTypeHasBeenSet = true;
    m_accountType = value;
  }
  inline AWSConfiguration& WithAccountType(MonitorAccountType value) {
    SetAccountType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional IAM role ARN to be assumed by AIDevOps for elevated directed actions
   * on behalf of the customer. Used for mutating operations gated by
   * elevatedActionsEnabled on the AgentSpace. When not provided, only non-elevated
   * directed actions are available for this AWS account.</p>
   */
  inline const Aws::String& GetAgentElevatedRoleArn() const { return m_agentElevatedRoleArn; }
  inline bool AgentElevatedRoleArnHasBeenSet() const { return m_agentElevatedRoleArnHasBeenSet; }
  template <typename AgentElevatedRoleArnT = Aws::String>
  void SetAgentElevatedRoleArn(AgentElevatedRoleArnT&& value) {
    m_agentElevatedRoleArnHasBeenSet = true;
    m_agentElevatedRoleArn = std::forward<AgentElevatedRoleArnT>(value);
  }
  template <typename AgentElevatedRoleArnT = Aws::String>
  AWSConfiguration& WithAgentElevatedRoleArn(AgentElevatedRoleArnT&& value) {
    SetAgentElevatedRoleArn(std::forward<AgentElevatedRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Validation status of the agentElevatedRoleArn. Updated asynchronously after
   * the customer registers an elevated role. Possible values: PENDING_CONFIRMATION
   * (validation in progress), VALID (role validated), INVALID (validation
   * failed).</p>
   */
  inline ValidationStatus GetAgentElevatedRoleArnStatus() const { return m_agentElevatedRoleArnStatus; }
  inline bool AgentElevatedRoleArnStatusHasBeenSet() const { return m_agentElevatedRoleArnStatusHasBeenSet; }
  inline void SetAgentElevatedRoleArnStatus(ValidationStatus value) {
    m_agentElevatedRoleArnStatusHasBeenSet = true;
    m_agentElevatedRoleArnStatus = value;
  }
  inline AWSConfiguration& WithAgentElevatedRoleArnStatus(ValidationStatus value) {
    SetAgentElevatedRoleArnStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_assumableRoleArn;

  Aws::String m_accountId;

  MonitorAccountType m_accountType{MonitorAccountType::NOT_SET};

  Aws::String m_agentElevatedRoleArn;

  ValidationStatus m_agentElevatedRoleArnStatus{ValidationStatus::NOT_SET};
  bool m_assumableRoleArnHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_accountTypeHasBeenSet = false;
  bool m_agentElevatedRoleArnHasBeenSet = false;
  bool m_agentElevatedRoleArnStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
