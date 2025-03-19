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
    AWS_MANAGEDGRAFANA_API UpdateInstruction() = default;
    AWS_MANAGEDGRAFANA_API UpdateInstruction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API UpdateInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether this update is to add or revoke role permissions.</p>
     */
    inline UpdateAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(UpdateAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline UpdateInstruction& WithAction(UpdateAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role to add or revoke for the user or the group specified in
     * <code>users</code>.</p>
     */
    inline Role GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(Role value) { m_roleHasBeenSet = true; m_role = value; }
    inline UpdateInstruction& WithRole(Role value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that specifies the user or group to add or revoke the role
     * for.</p>
     */
    inline const Aws::Vector<User>& GetUsers() const { return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    template<typename UsersT = Aws::Vector<User>>
    void SetUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users = std::forward<UsersT>(value); }
    template<typename UsersT = Aws::Vector<User>>
    UpdateInstruction& WithUsers(UsersT&& value) { SetUsers(std::forward<UsersT>(value)); return *this;}
    template<typename UsersT = User>
    UpdateInstruction& AddUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users.emplace_back(std::forward<UsersT>(value)); return *this; }
    ///@}
  private:

    UpdateAction m_action{UpdateAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Role m_role{Role::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::Vector<User> m_users;
    bool m_usersHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
