/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
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
   * <p>A structure that defines which attributes in the IdP assertion are to be used
   * to define information about the users authenticated by the IdP to use the
   * workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AssertionAttributes">AWS
   * API Reference</a></p>
   */
  class AssertionAttributes
  {
  public:
    AWS_MANAGEDGRAFANA_API AssertionAttributes();
    AWS_MANAGEDGRAFANA_API AssertionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API AssertionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attribute within the SAML assertion to use as the email names
     * for SAML users.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the email names
     * for SAML users.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the email names
     * for SAML users.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the email names
     * for SAML users.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the email names
     * for SAML users.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the email names
     * for SAML users.</p>
     */
    inline AssertionAttributes& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the email names
     * for SAML users.</p>
     */
    inline AssertionAttributes& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the email names
     * for SAML users.</p>
     */
    inline AssertionAttributes& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for user groups.</p>
     */
    inline const Aws::String& GetGroups() const{ return m_groups; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for user groups.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for user groups.</p>
     */
    inline void SetGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for user groups.</p>
     */
    inline void SetGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for user groups.</p>
     */
    inline void SetGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.assign(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for user groups.</p>
     */
    inline AssertionAttributes& WithGroups(const Aws::String& value) { SetGroups(value); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for user groups.</p>
     */
    inline AssertionAttributes& WithGroups(Aws::String&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for user groups.</p>
     */
    inline AssertionAttributes& WithGroups(const char* value) { SetGroups(value); return *this;}


    /**
     * <p>The name of the attribute within the SAML assertion to use as the login names
     * for SAML users.</p>
     */
    inline const Aws::String& GetLogin() const{ return m_login; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the login names
     * for SAML users.</p>
     */
    inline bool LoginHasBeenSet() const { return m_loginHasBeenSet; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the login names
     * for SAML users.</p>
     */
    inline void SetLogin(const Aws::String& value) { m_loginHasBeenSet = true; m_login = value; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the login names
     * for SAML users.</p>
     */
    inline void SetLogin(Aws::String&& value) { m_loginHasBeenSet = true; m_login = std::move(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the login names
     * for SAML users.</p>
     */
    inline void SetLogin(const char* value) { m_loginHasBeenSet = true; m_login.assign(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the login names
     * for SAML users.</p>
     */
    inline AssertionAttributes& WithLogin(const Aws::String& value) { SetLogin(value); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the login names
     * for SAML users.</p>
     */
    inline AssertionAttributes& WithLogin(Aws::String&& value) { SetLogin(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the login names
     * for SAML users.</p>
     */
    inline AssertionAttributes& WithLogin(const char* value) { SetLogin(value); return *this;}


    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for SAML users.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for SAML users.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for SAML users.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for SAML users.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for SAML users.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for SAML users.</p>
     */
    inline AssertionAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for SAML users.</p>
     */
    inline AssertionAttributes& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for SAML users.</p>
     */
    inline AssertionAttributes& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for the users' organizations.</p>
     */
    inline const Aws::String& GetOrg() const{ return m_org; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for the users' organizations.</p>
     */
    inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for the users' organizations.</p>
     */
    inline void SetOrg(const Aws::String& value) { m_orgHasBeenSet = true; m_org = value; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for the users' organizations.</p>
     */
    inline void SetOrg(Aws::String&& value) { m_orgHasBeenSet = true; m_org = std::move(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for the users' organizations.</p>
     */
    inline void SetOrg(const char* value) { m_orgHasBeenSet = true; m_org.assign(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for the users' organizations.</p>
     */
    inline AssertionAttributes& WithOrg(const Aws::String& value) { SetOrg(value); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for the users' organizations.</p>
     */
    inline AssertionAttributes& WithOrg(Aws::String&& value) { SetOrg(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user full
     * "friendly" names for the users' organizations.</p>
     */
    inline AssertionAttributes& WithOrg(const char* value) { SetOrg(value); return *this;}


    /**
     * <p>The name of the attribute within the SAML assertion to use as the user
     * roles.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user
     * roles.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user
     * roles.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user
     * roles.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user
     * roles.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user
     * roles.</p>
     */
    inline AssertionAttributes& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user
     * roles.</p>
     */
    inline AssertionAttributes& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute within the SAML assertion to use as the user
     * roles.</p>
     */
    inline AssertionAttributes& WithRole(const char* value) { SetRole(value); return *this;}

  private:

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::String m_login;
    bool m_loginHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_org;
    bool m_orgHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
