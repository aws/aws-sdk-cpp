/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/SAMLIdp.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies the SAML application configuration for the domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/SAMLOptionsInput">AWS
   * API Reference</a></p>
   */
  class SAMLOptionsInput
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API SAMLOptionsInput() = default;
    AWS_ELASTICSEARCHSERVICE_API SAMLOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API SAMLOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True if SAML is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SAMLOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the SAML Identity Provider's information.</p>
     */
    inline const SAMLIdp& GetIdp() const { return m_idp; }
    inline bool IdpHasBeenSet() const { return m_idpHasBeenSet; }
    template<typename IdpT = SAMLIdp>
    void SetIdp(IdpT&& value) { m_idpHasBeenSet = true; m_idp = std::forward<IdpT>(value); }
    template<typename IdpT = SAMLIdp>
    SAMLOptionsInput& WithIdp(IdpT&& value) { SetIdp(std::forward<IdpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAML master username, which is stored in the Amazon Elasticsearch Service
     * domain's internal database.</p>
     */
    inline const Aws::String& GetMasterUserName() const { return m_masterUserName; }
    inline bool MasterUserNameHasBeenSet() const { return m_masterUserNameHasBeenSet; }
    template<typename MasterUserNameT = Aws::String>
    void SetMasterUserName(MasterUserNameT&& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = std::forward<MasterUserNameT>(value); }
    template<typename MasterUserNameT = Aws::String>
    SAMLOptionsInput& WithMasterUserName(MasterUserNameT&& value) { SetMasterUserName(std::forward<MasterUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backend role to which the SAML master user is mapped to.</p>
     */
    inline const Aws::String& GetMasterBackendRole() const { return m_masterBackendRole; }
    inline bool MasterBackendRoleHasBeenSet() const { return m_masterBackendRoleHasBeenSet; }
    template<typename MasterBackendRoleT = Aws::String>
    void SetMasterBackendRole(MasterBackendRoleT&& value) { m_masterBackendRoleHasBeenSet = true; m_masterBackendRole = std::forward<MasterBackendRoleT>(value); }
    template<typename MasterBackendRoleT = Aws::String>
    SAMLOptionsInput& WithMasterBackendRole(MasterBackendRoleT&& value) { SetMasterBackendRole(std::forward<MasterBackendRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key to use for matching the SAML Subject attribute.</p>
     */
    inline const Aws::String& GetSubjectKey() const { return m_subjectKey; }
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }
    template<typename SubjectKeyT = Aws::String>
    void SetSubjectKey(SubjectKeyT&& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = std::forward<SubjectKeyT>(value); }
    template<typename SubjectKeyT = Aws::String>
    SAMLOptionsInput& WithSubjectKey(SubjectKeyT&& value) { SetSubjectKey(std::forward<SubjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key to use for matching the SAML Roles attribute.</p>
     */
    inline const Aws::String& GetRolesKey() const { return m_rolesKey; }
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }
    template<typename RolesKeyT = Aws::String>
    void SetRolesKey(RolesKeyT&& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = std::forward<RolesKeyT>(value); }
    template<typename RolesKeyT = Aws::String>
    SAMLOptionsInput& WithRolesKey(RolesKeyT&& value) { SetRolesKey(std::forward<RolesKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.
     * Acceptable values are between 1 and 1440, and the default value is 60.</p>
     */
    inline int GetSessionTimeoutMinutes() const { return m_sessionTimeoutMinutes; }
    inline bool SessionTimeoutMinutesHasBeenSet() const { return m_sessionTimeoutMinutesHasBeenSet; }
    inline void SetSessionTimeoutMinutes(int value) { m_sessionTimeoutMinutesHasBeenSet = true; m_sessionTimeoutMinutes = value; }
    inline SAMLOptionsInput& WithSessionTimeoutMinutes(int value) { SetSessionTimeoutMinutes(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    SAMLIdp m_idp;
    bool m_idpHasBeenSet = false;

    Aws::String m_masterUserName;
    bool m_masterUserNameHasBeenSet = false;

    Aws::String m_masterBackendRole;
    bool m_masterBackendRoleHasBeenSet = false;

    Aws::String m_subjectKey;
    bool m_subjectKeyHasBeenSet = false;

    Aws::String m_rolesKey;
    bool m_rolesKeyHasBeenSet = false;

    int m_sessionTimeoutMinutes{0};
    bool m_sessionTimeoutMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
