/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/IdentityCenterDetails.h>

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
 * <p>Contains detailed information about the identity source for an
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/IdentitySourceDetails">AWS
 * API Reference</a></p>
 */
class IdentitySourceDetails {
 public:
  AWS_ACCOUNTACCESS_API IdentitySourceDetails() = default;
  AWS_ACCOUNTACCESS_API IdentitySourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API IdentitySourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IAM Identity Center configuration details for the identity source.</p>
   */
  inline const IdentityCenterDetails& GetIdentityCenter() const { return m_identityCenter; }
  inline bool IdentityCenterHasBeenSet() const { return m_identityCenterHasBeenSet; }
  template <typename IdentityCenterT = IdentityCenterDetails>
  void SetIdentityCenter(IdentityCenterT&& value) {
    m_identityCenterHasBeenSet = true;
    m_identityCenter = std::forward<IdentityCenterT>(value);
  }
  template <typename IdentityCenterT = IdentityCenterDetails>
  IdentitySourceDetails& WithIdentityCenter(IdentityCenterT&& value) {
    SetIdentityCenter(std::forward<IdentityCenterT>(value));
    return *this;
  }
  ///@}
 private:
  IdentityCenterDetails m_identityCenter;
  bool m_identityCenterHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
