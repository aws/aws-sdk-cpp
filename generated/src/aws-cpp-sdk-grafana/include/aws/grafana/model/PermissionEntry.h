/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/Role.h>
#include <aws/grafana/model/User.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {

/**
 * <p>A structure containing the identity of one user or group and the
 * <code>Admin</code>, <code>Editor</code>, or <code>Viewer</code> role that they
 * have.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/PermissionEntry">AWS
 * API Reference</a></p>
 */
class PermissionEntry {
 public:
  AWS_MANAGEDGRAFANA_API PermissionEntry() = default;
  AWS_MANAGEDGRAFANA_API PermissionEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API PermissionEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A structure with the ID of the user or group with this role.</p>
   */
  inline const User& GetUser() const { return m_user; }
  inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
  template <typename UserT = User>
  void SetUser(UserT&& value) {
    m_userHasBeenSet = true;
    m_user = std::forward<UserT>(value);
  }
  template <typename UserT = User>
  PermissionEntry& WithUser(UserT&& value) {
    SetUser(std::forward<UserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the user or group has the <code>Admin</code>,
   * <code>Editor</code>, or <code>Viewer</code> role.</p>
   */
  inline Role GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(Role value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline PermissionEntry& WithRole(Role value) {
    SetRole(value);
    return *this;
  }
  ///@}
 private:
  User m_user;

  Role m_role{Role::NOT_SET};
  bool m_userHasBeenSet = false;
  bool m_roleHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
