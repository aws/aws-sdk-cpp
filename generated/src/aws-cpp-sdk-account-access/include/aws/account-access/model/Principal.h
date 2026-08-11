/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/IdentityCenterPrincipal.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccountAccess {
namespace Model {

/**
 * <p>Identifies a principal (user or group) that can be granted
 * entitlements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/Principal">AWS
 * API Reference</a></p>
 */
class Principal {
 public:
  AWS_ACCOUNTACCESS_API Principal() = default;
  AWS_ACCOUNTACCESS_API Principal(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IAM Identity Center principal (user or group).</p>
   */
  inline const IdentityCenterPrincipal& GetIdentityCenter() const { return m_identityCenter; }
  inline bool IdentityCenterHasBeenSet() const { return m_identityCenterHasBeenSet; }
  template <typename IdentityCenterT = IdentityCenterPrincipal>
  void SetIdentityCenter(IdentityCenterT&& value) {
    m_identityCenterHasBeenSet = true;
    m_identityCenter = std::forward<IdentityCenterT>(value);
  }
  template <typename IdentityCenterT = IdentityCenterPrincipal>
  Principal& WithIdentityCenter(IdentityCenterT&& value) {
    SetIdentityCenter(std::forward<IdentityCenterT>(value));
    return *this;
  }
  ///@}
 private:
  IdentityCenterPrincipal m_identityCenter;
  bool m_identityCenterHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
