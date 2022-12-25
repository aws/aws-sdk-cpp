/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/Role.h>
#include <aws/grafana/model/User.h>
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
   * <p>A structure containing the identity of one user or group and the
   * <code>Admin</code>, <code>Editor</code>, or <code>Viewer</code> role that they
   * have.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/PermissionEntry">AWS
   * API Reference</a></p>
   */
  class PermissionEntry
  {
  public:
    AWS_MANAGEDGRAFANA_API PermissionEntry();
    AWS_MANAGEDGRAFANA_API PermissionEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API PermissionEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the user or group has the <code>Admin</code>,
     * <code>Editor</code>, or <code>Viewer</code> role.</p>
     */
    inline const Role& GetRole() const{ return m_role; }

    /**
     * <p>Specifies whether the user or group has the <code>Admin</code>,
     * <code>Editor</code>, or <code>Viewer</code> role.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>Specifies whether the user or group has the <code>Admin</code>,
     * <code>Editor</code>, or <code>Viewer</code> role.</p>
     */
    inline void SetRole(const Role& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>Specifies whether the user or group has the <code>Admin</code>,
     * <code>Editor</code>, or <code>Viewer</code> role.</p>
     */
    inline void SetRole(Role&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>Specifies whether the user or group has the <code>Admin</code>,
     * <code>Editor</code>, or <code>Viewer</code> role.</p>
     */
    inline PermissionEntry& WithRole(const Role& value) { SetRole(value); return *this;}

    /**
     * <p>Specifies whether the user or group has the <code>Admin</code>,
     * <code>Editor</code>, or <code>Viewer</code> role.</p>
     */
    inline PermissionEntry& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>A structure with the ID of the user or group with this role.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>A structure with the ID of the user or group with this role.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>A structure with the ID of the user or group with this role.</p>
     */
    inline void SetUser(const User& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>A structure with the ID of the user or group with this role.</p>
     */
    inline void SetUser(User&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>A structure with the ID of the user or group with this role.</p>
     */
    inline PermissionEntry& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>A structure with the ID of the user or group with this role.</p>
     */
    inline PermissionEntry& WithUser(User&& value) { SetUser(std::move(value)); return *this;}

  private:

    Role m_role;
    bool m_roleHasBeenSet = false;

    User m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
