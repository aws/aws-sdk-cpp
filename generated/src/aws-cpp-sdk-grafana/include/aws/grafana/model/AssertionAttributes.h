/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>A structure that defines which attributes in the IdP assertion are to be used
 * to define information about the users authenticated by the IdP to use the
 * workspace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AssertionAttributes">AWS
 * API Reference</a></p>
 */
class AssertionAttributes {
 public:
  AWS_MANAGEDGRAFANA_API AssertionAttributes() = default;
  AWS_MANAGEDGRAFANA_API AssertionAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API AssertionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the attribute within the SAML assertion to use as the user full
   * "friendly" names for SAML users.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AssertionAttributes& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attribute within the SAML assertion to use as the login names
   * for SAML users.</p>
   */
  inline const Aws::String& GetLogin() const { return m_login; }
  inline bool LoginHasBeenSet() const { return m_loginHasBeenSet; }
  template <typename LoginT = Aws::String>
  void SetLogin(LoginT&& value) {
    m_loginHasBeenSet = true;
    m_login = std::forward<LoginT>(value);
  }
  template <typename LoginT = Aws::String>
  AssertionAttributes& WithLogin(LoginT&& value) {
    SetLogin(std::forward<LoginT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attribute within the SAML assertion to use as the email names
   * for SAML users.</p>
   */
  inline const Aws::String& GetEmail() const { return m_email; }
  inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
  template <typename EmailT = Aws::String>
  void SetEmail(EmailT&& value) {
    m_emailHasBeenSet = true;
    m_email = std::forward<EmailT>(value);
  }
  template <typename EmailT = Aws::String>
  AssertionAttributes& WithEmail(EmailT&& value) {
    SetEmail(std::forward<EmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attribute within the SAML assertion to use as the user full
   * "friendly" names for user groups.</p>
   */
  inline const Aws::String& GetGroups() const { return m_groups; }
  inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
  template <typename GroupsT = Aws::String>
  void SetGroups(GroupsT&& value) {
    m_groupsHasBeenSet = true;
    m_groups = std::forward<GroupsT>(value);
  }
  template <typename GroupsT = Aws::String>
  AssertionAttributes& WithGroups(GroupsT&& value) {
    SetGroups(std::forward<GroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attribute within the SAML assertion to use as the user
   * roles.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  AssertionAttributes& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attribute within the SAML assertion to use as the user full
   * "friendly" names for the users' organizations.</p>
   */
  inline const Aws::String& GetOrg() const { return m_org; }
  inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }
  template <typename OrgT = Aws::String>
  void SetOrg(OrgT&& value) {
    m_orgHasBeenSet = true;
    m_org = std::forward<OrgT>(value);
  }
  template <typename OrgT = Aws::String>
  AssertionAttributes& WithOrg(OrgT&& value) {
    SetOrg(std::forward<OrgT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_login;

  Aws::String m_email;

  Aws::String m_groups;

  Aws::String m_role;

  Aws::String m_org;
  bool m_nameHasBeenSet = false;
  bool m_loginHasBeenSet = false;
  bool m_emailHasBeenSet = false;
  bool m_groupsHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_orgHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
