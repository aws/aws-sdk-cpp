/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQLRequest.h>
#include <aws/dsql/DSQL_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DSQL {
namespace Model {

/**
 */
class PutClusterPolicyRequest : public DSQLRequest {
 public:
  AWS_DSQL_API PutClusterPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutClusterPolicy"; }

  AWS_DSQL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  PutClusterPolicyRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource-based policy document to attach to the cluster. This should be a
   * valid JSON policy document that defines permissions and conditions.</p>
   */
  inline const Aws::String& GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  template <typename PolicyT = Aws::String>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = Aws::String>
  PutClusterPolicyRequest& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A flag that allows you to bypass the policy lockout safety check. When set to
   * true, this parameter allows you to apply a policy that might lock you out of the
   * cluster. Use with caution.</p>
   */
  inline bool GetBypassPolicyLockoutSafetyCheck() const { return m_bypassPolicyLockoutSafetyCheck; }
  inline bool BypassPolicyLockoutSafetyCheckHasBeenSet() const { return m_bypassPolicyLockoutSafetyCheckHasBeenSet; }
  inline void SetBypassPolicyLockoutSafetyCheck(bool value) {
    m_bypassPolicyLockoutSafetyCheckHasBeenSet = true;
    m_bypassPolicyLockoutSafetyCheck = value;
  }
  inline PutClusterPolicyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) {
    SetBypassPolicyLockoutSafetyCheck(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected version of the current policy. This parameter ensures that
   * you're updating the correct version of the policy and helps prevent concurrent
   * modification conflicts.</p>
   */
  inline const Aws::String& GetExpectedPolicyVersion() const { return m_expectedPolicyVersion; }
  inline bool ExpectedPolicyVersionHasBeenSet() const { return m_expectedPolicyVersionHasBeenSet; }
  template <typename ExpectedPolicyVersionT = Aws::String>
  void SetExpectedPolicyVersion(ExpectedPolicyVersionT&& value) {
    m_expectedPolicyVersionHasBeenSet = true;
    m_expectedPolicyVersion = std::forward<ExpectedPolicyVersionT>(value);
  }
  template <typename ExpectedPolicyVersionT = Aws::String>
  PutClusterPolicyRequest& WithExpectedPolicyVersion(ExpectedPolicyVersionT&& value) {
    SetExpectedPolicyVersion(std::forward<ExpectedPolicyVersionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutClusterPolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;

  Aws::String m_policy;
  bool m_policyHasBeenSet = false;

  bool m_bypassPolicyLockoutSafetyCheck{false};
  bool m_bypassPolicyLockoutSafetyCheckHasBeenSet = false;

  Aws::String m_expectedPolicyVersion;
  bool m_expectedPolicyVersionHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
