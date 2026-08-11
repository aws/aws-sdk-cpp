/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/Principal.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Specifies a principal-to-role entitlement that grants an IAM Identity Center
 * principal permission to assume an IAM role.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/PrincipalRoleEntitlement">AWS
 * API Reference</a></p>
 */
class PrincipalRoleEntitlement {
 public:
  AWS_ACCOUNTACCESS_API PrincipalRoleEntitlement() = default;
  AWS_ACCOUNTACCESS_API PrincipalRoleEntitlement(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API PrincipalRoleEntitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The principal (user or group) that is granted access to assume the IAM
   * role.</p>
   */
  inline const Principal& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = Principal>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = Principal>
  PrincipalRoleEntitlement& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that the principal can assume.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  PrincipalRoleEntitlement& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Principal m_principal;

  Aws::String m_roleArn;
  bool m_principalHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
