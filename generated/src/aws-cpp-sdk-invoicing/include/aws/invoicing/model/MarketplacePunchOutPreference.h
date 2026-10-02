/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {

/**
 * <p>Represents the Marketplace PunchOut configuration for a procurement portal
 * preference.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/MarketplacePunchOutPreference">AWS
 * API Reference</a></p>
 */
class MarketplacePunchOutPreference {
 public:
  AWS_INVOICING_API MarketplacePunchOutPreference() = default;
  AWS_INVOICING_API MarketplacePunchOutPreference(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API MarketplacePunchOutPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL that buyers are redirected to for approval requests in the
   * procurement portal. This is only supported for Coupa. When provided together
   * with the procurement portal instance endpoint, its host must match the host of
   * that endpoint.</p>
   */
  inline const Aws::String& GetApprovalRequestRedirectUrl() const { return m_approvalRequestRedirectUrl; }
  inline bool ApprovalRequestRedirectUrlHasBeenSet() const { return m_approvalRequestRedirectUrlHasBeenSet; }
  template <typename ApprovalRequestRedirectUrlT = Aws::String>
  void SetApprovalRequestRedirectUrl(ApprovalRequestRedirectUrlT&& value) {
    m_approvalRequestRedirectUrlHasBeenSet = true;
    m_approvalRequestRedirectUrl = std::forward<ApprovalRequestRedirectUrlT>(value);
  }
  template <typename ApprovalRequestRedirectUrlT = Aws::String>
  MarketplacePunchOutPreference& WithApprovalRequestRedirectUrl(ApprovalRequestRedirectUrlT&& value) {
    SetApprovalRequestRedirectUrl(std::forward<ApprovalRequestRedirectUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_approvalRequestRedirectUrl;
  bool m_approvalRequestRedirectUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
