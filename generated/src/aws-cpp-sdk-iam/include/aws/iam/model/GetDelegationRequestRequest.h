/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/IAM_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IAM {
namespace Model {

/**
 */
class GetDelegationRequestRequest : public IAMRequest {
 public:
  AWS_IAM_API GetDelegationRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDelegationRequest"; }

  AWS_IAM_API Aws::String SerializePayload() const override;

 protected:
  AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The unique identifier of the delegation request to retrieve.</p>
   */
  inline const Aws::String& GetDelegationRequestId() const { return m_delegationRequestId; }
  inline bool DelegationRequestIdHasBeenSet() const { return m_delegationRequestIdHasBeenSet; }
  template <typename DelegationRequestIdT = Aws::String>
  void SetDelegationRequestId(DelegationRequestIdT&& value) {
    m_delegationRequestIdHasBeenSet = true;
    m_delegationRequestId = std::forward<DelegationRequestIdT>(value);
  }
  template <typename DelegationRequestIdT = Aws::String>
  GetDelegationRequestRequest& WithDelegationRequestId(DelegationRequestIdT&& value) {
    SetDelegationRequestId(std::forward<DelegationRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to perform a permission check for the delegation
   * request.</p> <p>If set to true, the <code>GetDelegationRequest</code> API call
   * will start a permission check process. This process calculates whether the
   * caller has sufficient permissions to cover the asks from this delegation
   * request.</p> <p>Setting this parameter to true does not guarantee an answer in
   * the response. See the <code>PermissionCheckStatus</code> and the
   * <code>PermissionCheckResult</code> response attributes for further details.</p>
   */
  inline bool GetDelegationPermissionCheck() const { return m_delegationPermissionCheck; }
  inline bool DelegationPermissionCheckHasBeenSet() const { return m_delegationPermissionCheckHasBeenSet; }
  inline void SetDelegationPermissionCheck(bool value) {
    m_delegationPermissionCheckHasBeenSet = true;
    m_delegationPermissionCheck = value;
  }
  inline GetDelegationRequestRequest& WithDelegationPermissionCheck(bool value) {
    SetDelegationPermissionCheck(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_delegationRequestId;

  bool m_delegationPermissionCheck{false};
  bool m_delegationRequestIdHasBeenSet = false;
  bool m_delegationPermissionCheckHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
