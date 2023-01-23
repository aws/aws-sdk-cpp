/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/UpdateAction.h>
#include <aws/grafana/model/Role.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains the instructions for one Grafana role permission update in a <a
   * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdatePermissions.html">UpdatePermissions</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateInstruction">AWS
   * API Reference</a></p>
   */
  class UpdateInstruction
  {
  public:
    AWS_MANAGEDGRAFANA_API UpdateInstruction();
    AWS_MANAGEDGRAFANA_API UpdateInstruction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API UpdateInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether this update is to add or revoke role permissions.</p>
     */
    inline const UpdateAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies whether this update is to add or revoke role permissions.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies whether this update is to add or revoke role permissions.</p>
     */
    inline void SetAction(const UpdateAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether this update is to add or revoke role permissions.</p>
     */
    inline void SetAction(UpdateAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies whether this update is to add or revoke role permissions.</p>
     */
    inline UpdateInstruction& WithAction(const UpdateAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies whether this update is to add or revoke role permissions.</p>
     */
    inline UpdateInstruction& WithAction(UpdateAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The role to add or revoke for the user or the group specified in
     * <code>users</code>.</p>
     */
    inline const Role& GetRole() const{ return m_role; }

    /**
     * <p>The role to add or revoke for the user or the group specified in
     * <code>users</code>.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The role to add or revoke for the user or the group specified in
     * <code>users</code>.</p>
     */
    inline void SetRole(const Role& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The role to add or revoke for the user or the group specified in
     * <code>users</code>.</p>
     */
    inline void SetRole(Role&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The role to add or revoke for the user or the group specified in
     * <code>users</code>.</p>
     */
    inline UpdateInstruction& WithRole(const Role& value) { SetRole(value); return *this;}

    /**
     * <p>The role to add or revoke for the user or the group specified in
     * <code>users</code>.</p>
     */
    inline UpdateInstruction& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>A structure that specifies the user or group to add or revoke the role
     * for.</p>
     */
    inline const Aws::Vector<User>& GetUsers() const{ return m_users; }

    /**
     * <p>A structure that specifies the user or group to add or revoke the role
     * for.</p>
     */
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }

    /**
     * <p>A structure that specifies the user or group to add or revoke the role
     * for.</p>
     */
    inline void SetUsers(const Aws::Vector<User>& value) { m_usersHasBeenSet = true; m_users = value; }

    /**
     * <p>A structure that specifies the user or group to add or revoke the role
     * for.</p>
     */
    inline void SetUsers(Aws::Vector<User>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }

    /**
     * <p>A structure that specifies the user or group to add or revoke the role
     * for.</p>
     */
    inline UpdateInstruction& WithUsers(const Aws::Vector<User>& value) { SetUsers(value); return *this;}

    /**
     * <p>A structure that specifies the user or group to add or revoke the role
     * for.</p>
     */
    inline UpdateInstruction& WithUsers(Aws::Vector<User>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>A structure that specifies the user or group to add or revoke the role
     * for.</p>
     */
    inline UpdateInstruction& AddUsers(const User& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }

    /**
     * <p>A structure that specifies the user or group to add or revoke the role
     * for.</p>
     */
    inline UpdateInstruction& AddUsers(User&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }

  private:

    UpdateAction m_action;
    bool m_actionHasBeenSet = false;

    Role m_role;
    bool m_roleHasBeenSet = false;

    Aws::Vector<User> m_users;
    bool m_usersHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
