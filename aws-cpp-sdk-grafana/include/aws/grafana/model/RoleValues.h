/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>This structure defines which groups defined in the SAML assertion attribute
   * are to be mapped to the Grafana <code>Admin</code> and <code>Editor</code> roles
   * in the workspace. SAML authenticated users not part of <code>Admin</code> or
   * <code>Editor</code> role groups have <code>Viewer</code> permission over the
   * workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/RoleValues">AWS
   * API Reference</a></p>
   */
  class RoleValues
  {
  public:
    AWS_MANAGEDGRAFANA_API RoleValues();
    AWS_MANAGEDGRAFANA_API RoleValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API RoleValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Admin</code> role to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdmin() const{ return m_admin; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Admin</code> role to.</p>
     */
    inline bool AdminHasBeenSet() const { return m_adminHasBeenSet; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Admin</code> role to.</p>
     */
    inline void SetAdmin(const Aws::Vector<Aws::String>& value) { m_adminHasBeenSet = true; m_admin = value; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Admin</code> role to.</p>
     */
    inline void SetAdmin(Aws::Vector<Aws::String>&& value) { m_adminHasBeenSet = true; m_admin = std::move(value); }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Admin</code> role to.</p>
     */
    inline RoleValues& WithAdmin(const Aws::Vector<Aws::String>& value) { SetAdmin(value); return *this;}

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Admin</code> role to.</p>
     */
    inline RoleValues& WithAdmin(Aws::Vector<Aws::String>&& value) { SetAdmin(std::move(value)); return *this;}

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Admin</code> role to.</p>
     */
    inline RoleValues& AddAdmin(const Aws::String& value) { m_adminHasBeenSet = true; m_admin.push_back(value); return *this; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Admin</code> role to.</p>
     */
    inline RoleValues& AddAdmin(Aws::String&& value) { m_adminHasBeenSet = true; m_admin.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Admin</code> role to.</p>
     */
    inline RoleValues& AddAdmin(const char* value) { m_adminHasBeenSet = true; m_admin.push_back(value); return *this; }


    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Editor</code> role to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEditor() const{ return m_editor; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Editor</code> role to.</p>
     */
    inline bool EditorHasBeenSet() const { return m_editorHasBeenSet; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Editor</code> role to.</p>
     */
    inline void SetEditor(const Aws::Vector<Aws::String>& value) { m_editorHasBeenSet = true; m_editor = value; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Editor</code> role to.</p>
     */
    inline void SetEditor(Aws::Vector<Aws::String>&& value) { m_editorHasBeenSet = true; m_editor = std::move(value); }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Editor</code> role to.</p>
     */
    inline RoleValues& WithEditor(const Aws::Vector<Aws::String>& value) { SetEditor(value); return *this;}

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Editor</code> role to.</p>
     */
    inline RoleValues& WithEditor(Aws::Vector<Aws::String>&& value) { SetEditor(std::move(value)); return *this;}

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Editor</code> role to.</p>
     */
    inline RoleValues& AddEditor(const Aws::String& value) { m_editorHasBeenSet = true; m_editor.push_back(value); return *this; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Editor</code> role to.</p>
     */
    inline RoleValues& AddEditor(Aws::String&& value) { m_editorHasBeenSet = true; m_editor.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of groups from the SAML assertion attribute to grant the Grafana
     * <code>Editor</code> role to.</p>
     */
    inline RoleValues& AddEditor(const char* value) { m_editorHasBeenSet = true; m_editor.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_admin;
    bool m_adminHasBeenSet = false;

    Aws::Vector<Aws::String> m_editor;
    bool m_editorHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
