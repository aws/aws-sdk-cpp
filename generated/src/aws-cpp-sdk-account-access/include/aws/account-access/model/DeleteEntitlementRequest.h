/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccessRequest.h>
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace AccountAccess {
namespace Model {

/**
 */
class DeleteEntitlementRequest : public AccountAccessRequest {
 public:
  AWS_ACCOUNTACCESS_API DeleteEntitlementRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteEntitlement"; }

  AWS_ACCOUNTACCESS_API Aws::String SerializePayload() const override;

  AWS_ACCOUNTACCESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Specifies the ARN of the application that the entitlement belongs to.</p>
   */
  inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
  inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  DeleteEntitlementRequest& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the unique identifier of the entitlement to delete.</p>
   */
  inline const Aws::String& GetEntitlementId() const { return m_entitlementId; }
  inline bool EntitlementIdHasBeenSet() const { return m_entitlementIdHasBeenSet; }
  template <typename EntitlementIdT = Aws::String>
  void SetEntitlementId(EntitlementIdT&& value) {
    m_entitlementIdHasBeenSet = true;
    m_entitlementId = std::forward<EntitlementIdT>(value);
  }
  template <typename EntitlementIdT = Aws::String>
  DeleteEntitlementRequest& WithEntitlementId(EntitlementIdT&& value) {
    SetEntitlementId(std::forward<EntitlementIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationArn;

  Aws::String m_entitlementId;
  bool m_applicationArnHasBeenSet = false;
  bool m_entitlementIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
