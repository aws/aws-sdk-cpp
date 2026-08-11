/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/IdentityCenter.h>

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
 * <p>Specifies the identity source for an account access manager
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/IdentitySource">AWS
 * API Reference</a></p>
 */
class IdentitySource {
 public:
  AWS_ACCOUNTACCESS_API IdentitySource() = default;
  AWS_ACCOUNTACCESS_API IdentitySource(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API IdentitySource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IAM Identity Center instance to use as the identity source.</p>
   */
  inline const IdentityCenter& GetIdentityCenter() const { return m_identityCenter; }
  inline bool IdentityCenterHasBeenSet() const { return m_identityCenterHasBeenSet; }
  template <typename IdentityCenterT = IdentityCenter>
  void SetIdentityCenter(IdentityCenterT&& value) {
    m_identityCenterHasBeenSet = true;
    m_identityCenter = std::forward<IdentityCenterT>(value);
  }
  template <typename IdentityCenterT = IdentityCenter>
  IdentitySource& WithIdentityCenter(IdentityCenterT&& value) {
    SetIdentityCenter(std::forward<IdentityCenterT>(value));
    return *this;
  }
  ///@}
 private:
  IdentityCenter m_identityCenter;
  bool m_identityCenterHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
