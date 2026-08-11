/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/IdentityCenterPrincipalFilter.h>

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
 * <p>Specifies filter criteria for a principal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/PrincipalFilter">AWS
 * API Reference</a></p>
 */
class PrincipalFilter {
 public:
  AWS_ACCOUNTACCESS_API PrincipalFilter() = default;
  AWS_ACCOUNTACCESS_API PrincipalFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API PrincipalFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IAM Identity Center principal filter criteria.</p>
   */
  inline const IdentityCenterPrincipalFilter& GetIdentityCenter() const { return m_identityCenter; }
  inline bool IdentityCenterHasBeenSet() const { return m_identityCenterHasBeenSet; }
  template <typename IdentityCenterT = IdentityCenterPrincipalFilter>
  void SetIdentityCenter(IdentityCenterT&& value) {
    m_identityCenterHasBeenSet = true;
    m_identityCenter = std::forward<IdentityCenterT>(value);
  }
  template <typename IdentityCenterT = IdentityCenterPrincipalFilter>
  PrincipalFilter& WithIdentityCenter(IdentityCenterT&& value) {
    SetIdentityCenter(std::forward<IdentityCenterT>(value));
    return *this;
  }
  ///@}
 private:
  IdentityCenterPrincipalFilter m_identityCenter;
  bool m_identityCenterHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
