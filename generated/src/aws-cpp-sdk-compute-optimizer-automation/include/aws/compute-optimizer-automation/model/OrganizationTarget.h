/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>An account, organizational unit (OU), or organization root to which an
 * organization enrollment configuration applies. The management account can't be
 * specified as an account target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/OrganizationTarget">AWS
 * API Reference</a></p>
 */
class OrganizationTarget {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationTarget() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationTarget(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationTarget& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the member account to target. You can't specify the management
   * account.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  OrganizationTarget& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the organizational unit (OU) or organization root to target.</p>
   */
  inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
  inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
  template <typename OrganizationalUnitIdT = Aws::String>
  void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    m_organizationalUnitIdHasBeenSet = true;
    m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value);
  }
  template <typename OrganizationalUnitIdT = Aws::String>
  OrganizationTarget& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_organizationalUnitId;
  bool m_accountIdHasBeenSet = false;
  bool m_organizationalUnitIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
