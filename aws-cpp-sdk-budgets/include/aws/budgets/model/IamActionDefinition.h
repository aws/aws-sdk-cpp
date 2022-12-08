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
    AWS_BUDGETS_API IamActionDefinition();
    AWS_BUDGETS_API IamActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API IamActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the policy to be attached. </p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy to be attached. </p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy to be attached. </p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy to be attached. </p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy to be attached. </p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy to be attached. </p>
     */
    inline IamActionDefinition& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy to be attached. </p>
     */
    inline IamActionDefinition& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy to be attached. </p>
     */
    inline IamActionDefinition& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRoles() const{ return m_roles; }

    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }

    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline void SetRoles(const Aws::Vector<Aws::String>& value) { m_rolesHasBeenSet = true; m_roles = value; }

    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline void SetRoles(Aws::Vector<Aws::String>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }

    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline IamActionDefinition& WithRoles(const Aws::Vector<Aws::String>& value) { SetRoles(value); return *this;}

    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline IamActionDefinition& WithRoles(Aws::Vector<Aws::String>&& value) { SetRoles(std::move(value)); return *this;}

    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline IamActionDefinition& AddRoles(const Aws::String& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }

    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline IamActionDefinition& AddRoles(Aws::String&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of roles to be attached. There must be at least one role. </p>
     */
    inline IamActionDefinition& AddRoles(const char* value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }


    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline IamActionDefinition& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline IamActionDefinition& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline IamActionDefinition& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline IamActionDefinition& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of groups to be attached. There must be at least one group. </p>
     */
    inline IamActionDefinition& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }


    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUsers() const{ return m_users; }

    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }

    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline void SetUsers(const Aws::Vector<Aws::String>& value) { m_usersHasBeenSet = true; m_users = value; }

    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline void SetUsers(Aws::Vector<Aws::String>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }

    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline IamActionDefinition& WithUsers(const Aws::Vector<Aws::String>& value) { SetUsers(value); return *this;}

    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline IamActionDefinition& WithUsers(Aws::Vector<Aws::String>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline IamActionDefinition& AddUsers(const Aws::String& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }

    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline IamActionDefinition& AddUsers(Aws::String&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users to be attached. There must be at least one user. </p>
     */
    inline IamActionDefinition& AddUsers(const char* value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }

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
