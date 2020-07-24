/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * The metadata of the LDAP server used to authenticate and authorize connections
   * to the broker.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/LdapServerMetadataInput">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API LdapServerMetadataInput
  {
  public:
    LdapServerMetadataInput();
    LdapServerMetadataInput(Aws::Utils::Json::JsonView jsonValue);
    LdapServerMetadataInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Fully qualified domain name of the LDAP server. Optional failover server.
     */
    inline const Aws::Vector<Aws::String>& GetHosts() const{ return m_hosts; }

    /**
     * Fully qualified domain name of the LDAP server. Optional failover server.
     */
    inline bool HostsHasBeenSet() const { return m_hostsHasBeenSet; }

    /**
     * Fully qualified domain name of the LDAP server. Optional failover server.
     */
    inline void SetHosts(const Aws::Vector<Aws::String>& value) { m_hostsHasBeenSet = true; m_hosts = value; }

    /**
     * Fully qualified domain name of the LDAP server. Optional failover server.
     */
    inline void SetHosts(Aws::Vector<Aws::String>&& value) { m_hostsHasBeenSet = true; m_hosts = std::move(value); }

    /**
     * Fully qualified domain name of the LDAP server. Optional failover server.
     */
    inline LdapServerMetadataInput& WithHosts(const Aws::Vector<Aws::String>& value) { SetHosts(value); return *this;}

    /**
     * Fully qualified domain name of the LDAP server. Optional failover server.
     */
    inline LdapServerMetadataInput& WithHosts(Aws::Vector<Aws::String>&& value) { SetHosts(std::move(value)); return *this;}

    /**
     * Fully qualified domain name of the LDAP server. Optional failover server.
     */
    inline LdapServerMetadataInput& AddHosts(const Aws::String& value) { m_hostsHasBeenSet = true; m_hosts.push_back(value); return *this; }

    /**
     * Fully qualified domain name of the LDAP server. Optional failover server.
     */
    inline LdapServerMetadataInput& AddHosts(Aws::String&& value) { m_hostsHasBeenSet = true; m_hosts.push_back(std::move(value)); return *this; }

    /**
     * Fully qualified domain name of the LDAP server. Optional failover server.
     */
    inline LdapServerMetadataInput& AddHosts(const char* value) { m_hostsHasBeenSet = true; m_hosts.push_back(value); return *this; }


    /**
     * Fully qualified name of the directory to search for a user’s groups.
     */
    inline const Aws::String& GetRoleBase() const{ return m_roleBase; }

    /**
     * Fully qualified name of the directory to search for a user’s groups.
     */
    inline bool RoleBaseHasBeenSet() const { return m_roleBaseHasBeenSet; }

    /**
     * Fully qualified name of the directory to search for a user’s groups.
     */
    inline void SetRoleBase(const Aws::String& value) { m_roleBaseHasBeenSet = true; m_roleBase = value; }

    /**
     * Fully qualified name of the directory to search for a user’s groups.
     */
    inline void SetRoleBase(Aws::String&& value) { m_roleBaseHasBeenSet = true; m_roleBase = std::move(value); }

    /**
     * Fully qualified name of the directory to search for a user’s groups.
     */
    inline void SetRoleBase(const char* value) { m_roleBaseHasBeenSet = true; m_roleBase.assign(value); }

    /**
     * Fully qualified name of the directory to search for a user’s groups.
     */
    inline LdapServerMetadataInput& WithRoleBase(const Aws::String& value) { SetRoleBase(value); return *this;}

    /**
     * Fully qualified name of the directory to search for a user’s groups.
     */
    inline LdapServerMetadataInput& WithRoleBase(Aws::String&& value) { SetRoleBase(std::move(value)); return *this;}

    /**
     * Fully qualified name of the directory to search for a user’s groups.
     */
    inline LdapServerMetadataInput& WithRoleBase(const char* value) { SetRoleBase(value); return *this;}


    /**
     * Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.
     */
    inline LdapServerMetadataInput& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.
     */
    inline LdapServerMetadataInput& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.
     */
    inline LdapServerMetadataInput& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * The search criteria for groups.
     */
    inline const Aws::String& GetRoleSearchMatching() const{ return m_roleSearchMatching; }

    /**
     * The search criteria for groups.
     */
    inline bool RoleSearchMatchingHasBeenSet() const { return m_roleSearchMatchingHasBeenSet; }

    /**
     * The search criteria for groups.
     */
    inline void SetRoleSearchMatching(const Aws::String& value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching = value; }

    /**
     * The search criteria for groups.
     */
    inline void SetRoleSearchMatching(Aws::String&& value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching = std::move(value); }

    /**
     * The search criteria for groups.
     */
    inline void SetRoleSearchMatching(const char* value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching.assign(value); }

    /**
     * The search criteria for groups.
     */
    inline LdapServerMetadataInput& WithRoleSearchMatching(const Aws::String& value) { SetRoleSearchMatching(value); return *this;}

    /**
     * The search criteria for groups.
     */
    inline LdapServerMetadataInput& WithRoleSearchMatching(Aws::String&& value) { SetRoleSearchMatching(std::move(value)); return *this;}

    /**
     * The search criteria for groups.
     */
    inline LdapServerMetadataInput& WithRoleSearchMatching(const char* value) { SetRoleSearchMatching(value); return *this;}


    /**
     * The directory search scope for the role. If set to true, scope is to search the
     * entire sub-tree.
     */
    inline bool GetRoleSearchSubtree() const{ return m_roleSearchSubtree; }

    /**
     * The directory search scope for the role. If set to true, scope is to search the
     * entire sub-tree.
     */
    inline bool RoleSearchSubtreeHasBeenSet() const { return m_roleSearchSubtreeHasBeenSet; }

    /**
     * The directory search scope for the role. If set to true, scope is to search the
     * entire sub-tree.
     */
    inline void SetRoleSearchSubtree(bool value) { m_roleSearchSubtreeHasBeenSet = true; m_roleSearchSubtree = value; }

    /**
     * The directory search scope for the role. If set to true, scope is to search the
     * entire sub-tree.
     */
    inline LdapServerMetadataInput& WithRoleSearchSubtree(bool value) { SetRoleSearchSubtree(value); return *this;}


    /**
     * Service account password.
     */
    inline const Aws::String& GetServiceAccountPassword() const{ return m_serviceAccountPassword; }

    /**
     * Service account password.
     */
    inline bool ServiceAccountPasswordHasBeenSet() const { return m_serviceAccountPasswordHasBeenSet; }

    /**
     * Service account password.
     */
    inline void SetServiceAccountPassword(const Aws::String& value) { m_serviceAccountPasswordHasBeenSet = true; m_serviceAccountPassword = value; }

    /**
     * Service account password.
     */
    inline void SetServiceAccountPassword(Aws::String&& value) { m_serviceAccountPasswordHasBeenSet = true; m_serviceAccountPassword = std::move(value); }

    /**
     * Service account password.
     */
    inline void SetServiceAccountPassword(const char* value) { m_serviceAccountPasswordHasBeenSet = true; m_serviceAccountPassword.assign(value); }

    /**
     * Service account password.
     */
    inline LdapServerMetadataInput& WithServiceAccountPassword(const Aws::String& value) { SetServiceAccountPassword(value); return *this;}

    /**
     * Service account password.
     */
    inline LdapServerMetadataInput& WithServiceAccountPassword(Aws::String&& value) { SetServiceAccountPassword(std::move(value)); return *this;}

    /**
     * Service account password.
     */
    inline LdapServerMetadataInput& WithServiceAccountPassword(const char* value) { SetServiceAccountPassword(value); return *this;}


    /**
     * Service account username.
     */
    inline const Aws::String& GetServiceAccountUsername() const{ return m_serviceAccountUsername; }

    /**
     * Service account username.
     */
    inline bool ServiceAccountUsernameHasBeenSet() const { return m_serviceAccountUsernameHasBeenSet; }

    /**
     * Service account username.
     */
    inline void SetServiceAccountUsername(const Aws::String& value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername = value; }

    /**
     * Service account username.
     */
    inline void SetServiceAccountUsername(Aws::String&& value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername = std::move(value); }

    /**
     * Service account username.
     */
    inline void SetServiceAccountUsername(const char* value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername.assign(value); }

    /**
     * Service account username.
     */
    inline LdapServerMetadataInput& WithServiceAccountUsername(const Aws::String& value) { SetServiceAccountUsername(value); return *this;}

    /**
     * Service account username.
     */
    inline LdapServerMetadataInput& WithServiceAccountUsername(Aws::String&& value) { SetServiceAccountUsername(std::move(value)); return *this;}

    /**
     * Service account username.
     */
    inline LdapServerMetadataInput& WithServiceAccountUsername(const char* value) { SetServiceAccountUsername(value); return *this;}


    /**
     * Fully qualified name of the directory where you want to search for users.
     */
    inline const Aws::String& GetUserBase() const{ return m_userBase; }

    /**
     * Fully qualified name of the directory where you want to search for users.
     */
    inline bool UserBaseHasBeenSet() const { return m_userBaseHasBeenSet; }

    /**
     * Fully qualified name of the directory where you want to search for users.
     */
    inline void SetUserBase(const Aws::String& value) { m_userBaseHasBeenSet = true; m_userBase = value; }

    /**
     * Fully qualified name of the directory where you want to search for users.
     */
    inline void SetUserBase(Aws::String&& value) { m_userBaseHasBeenSet = true; m_userBase = std::move(value); }

    /**
     * Fully qualified name of the directory where you want to search for users.
     */
    inline void SetUserBase(const char* value) { m_userBaseHasBeenSet = true; m_userBase.assign(value); }

    /**
     * Fully qualified name of the directory where you want to search for users.
     */
    inline LdapServerMetadataInput& WithUserBase(const Aws::String& value) { SetUserBase(value); return *this;}

    /**
     * Fully qualified name of the directory where you want to search for users.
     */
    inline LdapServerMetadataInput& WithUserBase(Aws::String&& value) { SetUserBase(std::move(value)); return *this;}

    /**
     * Fully qualified name of the directory where you want to search for users.
     */
    inline LdapServerMetadataInput& WithUserBase(const char* value) { SetUserBase(value); return *this;}


    /**
     * Specifies the name of the LDAP attribute for the user group membership.
     */
    inline const Aws::String& GetUserRoleName() const{ return m_userRoleName; }

    /**
     * Specifies the name of the LDAP attribute for the user group membership.
     */
    inline bool UserRoleNameHasBeenSet() const { return m_userRoleNameHasBeenSet; }

    /**
     * Specifies the name of the LDAP attribute for the user group membership.
     */
    inline void SetUserRoleName(const Aws::String& value) { m_userRoleNameHasBeenSet = true; m_userRoleName = value; }

    /**
     * Specifies the name of the LDAP attribute for the user group membership.
     */
    inline void SetUserRoleName(Aws::String&& value) { m_userRoleNameHasBeenSet = true; m_userRoleName = std::move(value); }

    /**
     * Specifies the name of the LDAP attribute for the user group membership.
     */
    inline void SetUserRoleName(const char* value) { m_userRoleNameHasBeenSet = true; m_userRoleName.assign(value); }

    /**
     * Specifies the name of the LDAP attribute for the user group membership.
     */
    inline LdapServerMetadataInput& WithUserRoleName(const Aws::String& value) { SetUserRoleName(value); return *this;}

    /**
     * Specifies the name of the LDAP attribute for the user group membership.
     */
    inline LdapServerMetadataInput& WithUserRoleName(Aws::String&& value) { SetUserRoleName(std::move(value)); return *this;}

    /**
     * Specifies the name of the LDAP attribute for the user group membership.
     */
    inline LdapServerMetadataInput& WithUserRoleName(const char* value) { SetUserRoleName(value); return *this;}


    /**
     * The search criteria for users.
     */
    inline const Aws::String& GetUserSearchMatching() const{ return m_userSearchMatching; }

    /**
     * The search criteria for users.
     */
    inline bool UserSearchMatchingHasBeenSet() const { return m_userSearchMatchingHasBeenSet; }

    /**
     * The search criteria for users.
     */
    inline void SetUserSearchMatching(const Aws::String& value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching = value; }

    /**
     * The search criteria for users.
     */
    inline void SetUserSearchMatching(Aws::String&& value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching = std::move(value); }

    /**
     * The search criteria for users.
     */
    inline void SetUserSearchMatching(const char* value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching.assign(value); }

    /**
     * The search criteria for users.
     */
    inline LdapServerMetadataInput& WithUserSearchMatching(const Aws::String& value) { SetUserSearchMatching(value); return *this;}

    /**
     * The search criteria for users.
     */
    inline LdapServerMetadataInput& WithUserSearchMatching(Aws::String&& value) { SetUserSearchMatching(std::move(value)); return *this;}

    /**
     * The search criteria for users.
     */
    inline LdapServerMetadataInput& WithUserSearchMatching(const char* value) { SetUserSearchMatching(value); return *this;}


    /**
     * The directory search scope for the user. If set to true, scope is to search the
     * entire sub-tree.
     */
    inline bool GetUserSearchSubtree() const{ return m_userSearchSubtree; }

    /**
     * The directory search scope for the user. If set to true, scope is to search the
     * entire sub-tree.
     */
    inline bool UserSearchSubtreeHasBeenSet() const { return m_userSearchSubtreeHasBeenSet; }

    /**
     * The directory search scope for the user. If set to true, scope is to search the
     * entire sub-tree.
     */
    inline void SetUserSearchSubtree(bool value) { m_userSearchSubtreeHasBeenSet = true; m_userSearchSubtree = value; }

    /**
     * The directory search scope for the user. If set to true, scope is to search the
     * entire sub-tree.
     */
    inline LdapServerMetadataInput& WithUserSearchSubtree(bool value) { SetUserSearchSubtree(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_hosts;
    bool m_hostsHasBeenSet;

    Aws::String m_roleBase;
    bool m_roleBaseHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::String m_roleSearchMatching;
    bool m_roleSearchMatchingHasBeenSet;

    bool m_roleSearchSubtree;
    bool m_roleSearchSubtreeHasBeenSet;

    Aws::String m_serviceAccountPassword;
    bool m_serviceAccountPasswordHasBeenSet;

    Aws::String m_serviceAccountUsername;
    bool m_serviceAccountUsernameHasBeenSet;

    Aws::String m_userBase;
    bool m_userBaseHasBeenSet;

    Aws::String m_userRoleName;
    bool m_userRoleNameHasBeenSet;

    Aws::String m_userSearchMatching;
    bool m_userSearchMatchingHasBeenSet;

    bool m_userSearchSubtree;
    bool m_userSearchSubtreeHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
