/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/PolicyType.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class DeleteAccountPolicyRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API DeleteAccountPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAccountPolicy"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the policy to delete.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  DeleteAccountPolicyRequest& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of policy to delete.</p>
   */
  inline PolicyType GetPolicyType() const { return m_policyType; }
  inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
  inline void SetPolicyType(PolicyType value) {
    m_policyTypeHasBeenSet = true;
    m_policyType = value;
  }
  inline DeleteAccountPolicyRequest& WithPolicyType(PolicyType value) {
    SetPolicyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to preview the impact of deleting the policy without
   * deleting it. If you specify <code>true</code>, CloudWatch Logs does not delete
   * the policy and returns the estimated impact in <code>dryRunResult</code>. The
   * default is <code>false</code>.</p> <p>Specifying <code>dryRun</code> is valid
   * only when you specify <code>RETENTION_POLICY</code> for <code>policyType</code>.
   * Only one dry run can be in progress for an account at a time.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DeleteAccountPolicyRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyName;

  PolicyType m_policyType{PolicyType::NOT_SET};

  bool m_dryRun{false};
  bool m_policyNameHasBeenSet = false;
  bool m_policyTypeHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
