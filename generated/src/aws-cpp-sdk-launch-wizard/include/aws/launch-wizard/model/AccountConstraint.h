/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/DelegatedAdminConstraint.h>
#include <aws/launch-wizard/model/ManagementAccountConstraint.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LaunchWizard {
namespace Model {

/**
 * <p>A constraint on which AWS account a deployment can be initiated from. Specify
 * one of the supported constraint types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/AccountConstraint">AWS
 * API Reference</a></p>
 */
class AccountConstraint {
 public:
  AWS_LAUNCHWIZARD_API AccountConstraint() = default;
  AWS_LAUNCHWIZARD_API AccountConstraint(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API AccountConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const ManagementAccountConstraint& GetManagementAccount() const { return m_managementAccount; }
  inline bool ManagementAccountHasBeenSet() const { return m_managementAccountHasBeenSet; }
  template <typename ManagementAccountT = ManagementAccountConstraint>
  void SetManagementAccount(ManagementAccountT&& value) {
    m_managementAccountHasBeenSet = true;
    m_managementAccount = std::forward<ManagementAccountT>(value);
  }
  template <typename ManagementAccountT = ManagementAccountConstraint>
  AccountConstraint& WithManagementAccount(ManagementAccountT&& value) {
    SetManagementAccount(std::forward<ManagementAccountT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DelegatedAdminConstraint& GetDelegatedAdmin() const { return m_delegatedAdmin; }
  inline bool DelegatedAdminHasBeenSet() const { return m_delegatedAdminHasBeenSet; }
  template <typename DelegatedAdminT = DelegatedAdminConstraint>
  void SetDelegatedAdmin(DelegatedAdminT&& value) {
    m_delegatedAdminHasBeenSet = true;
    m_delegatedAdmin = std::forward<DelegatedAdminT>(value);
  }
  template <typename DelegatedAdminT = DelegatedAdminConstraint>
  AccountConstraint& WithDelegatedAdmin(DelegatedAdminT&& value) {
    SetDelegatedAdmin(std::forward<DelegatedAdminT>(value));
    return *this;
  }
  ///@}
 private:
  ManagementAccountConstraint m_managementAccount;

  DelegatedAdminConstraint m_delegatedAdmin;
  bool m_managementAccountHasBeenSet = false;
  bool m_delegatedAdminHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
