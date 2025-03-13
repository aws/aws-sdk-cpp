/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The Identity and Access Management (IAM) action definition details.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/IamActionDefinition">AWS
   * API Reference</a></p>
   */
  class IamActionDefinition
  {
  public:
    AWS_BUDGETS_API IamActionDefinition() = default;
    AWS_BUDGETS_API IamActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API IamActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the policy to be attached. </p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    IamActionDefinition& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRoles() const { return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    template<typename RolesT = Aws::Vector<Aws::String>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Vector<Aws::String>>
    IamActionDefinition& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    template<typename RolesT = Aws::String>
    IamActionDefinition& AddRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles.emplace_back(std::forward<RolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    IamActionDefinition& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    IamActionDefinition& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUsers() const { return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    template<typename UsersT = Aws::Vector<Aws::String>>
    void SetUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users = std::forward<UsersT>(value); }
    template<typename UsersT = Aws::Vector<Aws::String>>
    IamActionDefinition& WithUsers(UsersT&& value) { SetUsers(std::forward<UsersT>(value)); return *this;}
    template<typename UsersT = Aws::String>
    IamActionDefinition& AddUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users.emplace_back(std::forward<UsersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_users;
    bool m_usersHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
