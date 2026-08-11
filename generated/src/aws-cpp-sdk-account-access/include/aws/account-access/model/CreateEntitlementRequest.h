/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccessRequest.h>
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/Entitlement.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AccountAccess {
namespace Model {

/**
 */
class CreateEntitlementRequest : public AccountAccessRequest {
 public:
  AWS_ACCOUNTACCESS_API CreateEntitlementRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateEntitlement"; }

  AWS_ACCOUNTACCESS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specifies the ARN of the application to create the entitlement for.</p>
   */
  inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
  inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  CreateEntitlementRequest& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the entitlement configuration, including the principal and the IAM
   * role to grant access to.</p>
   */
  inline const Entitlement& GetEntitlement() const { return m_entitlement; }
  inline bool EntitlementHasBeenSet() const { return m_entitlementHasBeenSet; }
  template <typename EntitlementT = Entitlement>
  void SetEntitlement(EntitlementT&& value) {
    m_entitlementHasBeenSet = true;
    m_entitlement = std::forward<EntitlementT>(value);
  }
  template <typename EntitlementT = Entitlement>
  CreateEntitlementRequest& WithEntitlement(EntitlementT&& value) {
    SetEntitlement(std::forward<EntitlementT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationArn;

  Entitlement m_entitlement;
  bool m_applicationArnHasBeenSet = false;
  bool m_entitlementHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
