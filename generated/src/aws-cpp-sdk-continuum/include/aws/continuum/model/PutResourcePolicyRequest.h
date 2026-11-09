/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies the resource and its new policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/PutResourcePolicyInput">AWS
 * API Reference</a></p>
 */
class PutResourcePolicyRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API PutResourcePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of a resource in the caller's account.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  PutResourcePolicyRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Omit or supply an empty Statement array to clear resource-policy grants and
   * store the canonical empty-statement policy. Cross-account access is denied;
   * same-account access remains subject to identity policies. Use an explicit Deny
   * statement to deny same-account principals too.</p>
   */
  inline const Aws::String& GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  template <typename PolicyT = Aws::String>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = Aws::String>
  PutResourcePolicyRequest& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional optimistic-concurrency token for the currently observed policy.</p>
   */
  inline const Aws::String& GetExpectedRevisionId() const { return m_expectedRevisionId; }
  inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }
  template <typename ExpectedRevisionIdT = Aws::String>
  void SetExpectedRevisionId(ExpectedRevisionIdT&& value) {
    m_expectedRevisionIdHasBeenSet = true;
    m_expectedRevisionId = std::forward<ExpectedRevisionIdT>(value);
  }
  template <typename ExpectedRevisionIdT = Aws::String>
  PutResourcePolicyRequest& WithExpectedRevisionId(ExpectedRevisionIdT&& value) {
    SetExpectedRevisionId(std::forward<ExpectedRevisionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_policy;

  Aws::String m_expectedRevisionId;
  bool m_arnHasBeenSet = false;
  bool m_policyHasBeenSet = false;
  bool m_expectedRevisionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
