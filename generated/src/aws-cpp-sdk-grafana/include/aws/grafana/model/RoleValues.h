/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>

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
 * <p>This structure defines which groups defined in the SAML assertion attribute
 * are to be mapped to the Grafana <code>Admin</code> and <code>Editor</code> roles
 * in the workspace. SAML authenticated users not part of <code>Admin</code> or
 * <code>Editor</code> role groups have <code>Viewer</code> permission over the
 * workspace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/RoleValues">AWS
 * API Reference</a></p>
 */
class RoleValues {
 public:
  AWS_MANAGEDGRAFANA_API RoleValues() = default;
  AWS_MANAGEDGRAFANA_API RoleValues(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API RoleValues& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of groups from the SAML assertion attribute to grant the Grafana
   * <code>Editor</code> role to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEditor() const { return m_editor; }
  inline bool EditorHasBeenSet() const { return m_editorHasBeenSet; }
  template <typename EditorT = Aws::Vector<Aws::String>>
  void SetEditor(EditorT&& value) {
    m_editorHasBeenSet = true;
    m_editor = std::forward<EditorT>(value);
  }
  template <typename EditorT = Aws::Vector<Aws::String>>
  RoleValues& WithEditor(EditorT&& value) {
    SetEditor(std::forward<EditorT>(value));
    return *this;
  }
  template <typename EditorT = Aws::String>
  RoleValues& AddEditor(EditorT&& value) {
    m_editorHasBeenSet = true;
    m_editor.emplace_back(std::forward<EditorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of groups from the SAML assertion attribute to grant the Grafana
   * <code>Admin</code> role to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAdmin() const { return m_admin; }
  inline bool AdminHasBeenSet() const { return m_adminHasBeenSet; }
  template <typename AdminT = Aws::Vector<Aws::String>>
  void SetAdmin(AdminT&& value) {
    m_adminHasBeenSet = true;
    m_admin = std::forward<AdminT>(value);
  }
  template <typename AdminT = Aws::Vector<Aws::String>>
  RoleValues& WithAdmin(AdminT&& value) {
    SetAdmin(std::forward<AdminT>(value));
    return *this;
  }
  template <typename AdminT = Aws::String>
  RoleValues& AddAdmin(AdminT&& value) {
    m_adminHasBeenSet = true;
    m_admin.emplace_back(std::forward<AdminT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_editor;

  Aws::Vector<Aws::String> m_admin;
  bool m_editorHasBeenSet = false;
  bool m_adminHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
