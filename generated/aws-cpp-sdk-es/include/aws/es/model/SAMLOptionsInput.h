﻿/**
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
  class AWS_ELASTICSEARCHSERVICE_API SAMLOptionsInput
  {
  public:
    SAMLOptionsInput();
    SAMLOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    SAMLOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if SAML is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True if SAML is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True if SAML is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True if SAML is enabled.</p>
     */
    inline SAMLOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specifies the SAML Identity Provider's information.</p>
     */
    inline const SAMLIdp& GetIdp() const{ return m_idp; }

    /**
     * <p>Specifies the SAML Identity Provider's information.</p>
     */
    inline bool IdpHasBeenSet() const { return m_idpHasBeenSet; }

    /**
     * <p>Specifies the SAML Identity Provider's information.</p>
     */
    inline void SetIdp(const SAMLIdp& value) { m_idpHasBeenSet = true; m_idp = value; }

    /**
     * <p>Specifies the SAML Identity Provider's information.</p>
     */
    inline void SetIdp(SAMLIdp&& value) { m_idpHasBeenSet = true; m_idp = std::move(value); }

    /**
     * <p>Specifies the SAML Identity Provider's information.</p>
     */
    inline SAMLOptionsInput& WithIdp(const SAMLIdp& value) { SetIdp(value); return *this;}

    /**
     * <p>Specifies the SAML Identity Provider's information.</p>
     */
    inline SAMLOptionsInput& WithIdp(SAMLIdp&& value) { SetIdp(std::move(value)); return *this;}


    /**
     * <p>The SAML master username, which is stored in the Amazon Elasticsearch Service
     * domain's internal database.</p>
     */
    inline const Aws::String& GetMasterUserName() const{ return m_masterUserName; }

    /**
     * <p>The SAML master username, which is stored in the Amazon Elasticsearch Service
     * domain's internal database.</p>
     */
    inline bool MasterUserNameHasBeenSet() const { return m_masterUserNameHasBeenSet; }

    /**
     * <p>The SAML master username, which is stored in the Amazon Elasticsearch Service
     * domain's internal database.</p>
     */
    inline void SetMasterUserName(const Aws::String& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = value; }

    /**
     * <p>The SAML master username, which is stored in the Amazon Elasticsearch Service
     * domain's internal database.</p>
     */
    inline void SetMasterUserName(Aws::String&& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = std::move(value); }

    /**
     * <p>The SAML master username, which is stored in the Amazon Elasticsearch Service
     * domain's internal database.</p>
     */
    inline void SetMasterUserName(const char* value) { m_masterUserNameHasBeenSet = true; m_masterUserName.assign(value); }

    /**
     * <p>The SAML master username, which is stored in the Amazon Elasticsearch Service
     * domain's internal database.</p>
     */
    inline SAMLOptionsInput& WithMasterUserName(const Aws::String& value) { SetMasterUserName(value); return *this;}

    /**
     * <p>The SAML master username, which is stored in the Amazon Elasticsearch Service
     * domain's internal database.</p>
     */
    inline SAMLOptionsInput& WithMasterUserName(Aws::String&& value) { SetMasterUserName(std::move(value)); return *this;}

    /**
     * <p>The SAML master username, which is stored in the Amazon Elasticsearch Service
     * domain's internal database.</p>
     */
    inline SAMLOptionsInput& WithMasterUserName(const char* value) { SetMasterUserName(value); return *this;}


    /**
     * <p>The backend role to which the SAML master user is mapped to.</p>
     */
    inline const Aws::String& GetMasterBackendRole() const{ return m_masterBackendRole; }

    /**
     * <p>The backend role to which the SAML master user is mapped to.</p>
     */
    inline bool MasterBackendRoleHasBeenSet() const { return m_masterBackendRoleHasBeenSet; }

    /**
     * <p>The backend role to which the SAML master user is mapped to.</p>
     */
    inline void SetMasterBackendRole(const Aws::String& value) { m_masterBackendRoleHasBeenSet = true; m_masterBackendRole = value; }

    /**
     * <p>The backend role to which the SAML master user is mapped to.</p>
     */
    inline void SetMasterBackendRole(Aws::String&& value) { m_masterBackendRoleHasBeenSet = true; m_masterBackendRole = std::move(value); }

    /**
     * <p>The backend role to which the SAML master user is mapped to.</p>
     */
    inline void SetMasterBackendRole(const char* value) { m_masterBackendRoleHasBeenSet = true; m_masterBackendRole.assign(value); }

    /**
     * <p>The backend role to which the SAML master user is mapped to.</p>
     */
    inline SAMLOptionsInput& WithMasterBackendRole(const Aws::String& value) { SetMasterBackendRole(value); return *this;}

    /**
     * <p>The backend role to which the SAML master user is mapped to.</p>
     */
    inline SAMLOptionsInput& WithMasterBackendRole(Aws::String&& value) { SetMasterBackendRole(std::move(value)); return *this;}

    /**
     * <p>The backend role to which the SAML master user is mapped to.</p>
     */
    inline SAMLOptionsInput& WithMasterBackendRole(const char* value) { SetMasterBackendRole(value); return *this;}


    /**
     * <p>The key to use for matching the SAML Subject attribute.</p>
     */
    inline const Aws::String& GetSubjectKey() const{ return m_subjectKey; }

    /**
     * <p>The key to use for matching the SAML Subject attribute.</p>
     */
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }

    /**
     * <p>The key to use for matching the SAML Subject attribute.</p>
     */
    inline void SetSubjectKey(const Aws::String& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = value; }

    /**
     * <p>The key to use for matching the SAML Subject attribute.</p>
     */
    inline void SetSubjectKey(Aws::String&& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = std::move(value); }

    /**
     * <p>The key to use for matching the SAML Subject attribute.</p>
     */
    inline void SetSubjectKey(const char* value) { m_subjectKeyHasBeenSet = true; m_subjectKey.assign(value); }

    /**
     * <p>The key to use for matching the SAML Subject attribute.</p>
     */
    inline SAMLOptionsInput& WithSubjectKey(const Aws::String& value) { SetSubjectKey(value); return *this;}

    /**
     * <p>The key to use for matching the SAML Subject attribute.</p>
     */
    inline SAMLOptionsInput& WithSubjectKey(Aws::String&& value) { SetSubjectKey(std::move(value)); return *this;}

    /**
     * <p>The key to use for matching the SAML Subject attribute.</p>
     */
    inline SAMLOptionsInput& WithSubjectKey(const char* value) { SetSubjectKey(value); return *this;}


    /**
     * <p>The key to use for matching the SAML Roles attribute.</p>
     */
    inline const Aws::String& GetRolesKey() const{ return m_rolesKey; }

    /**
     * <p>The key to use for matching the SAML Roles attribute.</p>
     */
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }

    /**
     * <p>The key to use for matching the SAML Roles attribute.</p>
     */
    inline void SetRolesKey(const Aws::String& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = value; }

    /**
     * <p>The key to use for matching the SAML Roles attribute.</p>
     */
    inline void SetRolesKey(Aws::String&& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = std::move(value); }

    /**
     * <p>The key to use for matching the SAML Roles attribute.</p>
     */
    inline void SetRolesKey(const char* value) { m_rolesKeyHasBeenSet = true; m_rolesKey.assign(value); }

    /**
     * <p>The key to use for matching the SAML Roles attribute.</p>
     */
    inline SAMLOptionsInput& WithRolesKey(const Aws::String& value) { SetRolesKey(value); return *this;}

    /**
     * <p>The key to use for matching the SAML Roles attribute.</p>
     */
    inline SAMLOptionsInput& WithRolesKey(Aws::String&& value) { SetRolesKey(std::move(value)); return *this;}

    /**
     * <p>The key to use for matching the SAML Roles attribute.</p>
     */
    inline SAMLOptionsInput& WithRolesKey(const char* value) { SetRolesKey(value); return *this;}


    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.
     * Acceptable values are between 1 and 1440, and the default value is 60.</p>
     */
    inline int GetSessionTimeoutMinutes() const{ return m_sessionTimeoutMinutes; }

    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.
     * Acceptable values are between 1 and 1440, and the default value is 60.</p>
     */
    inline bool SessionTimeoutMinutesHasBeenSet() const { return m_sessionTimeoutMinutesHasBeenSet; }

    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.
     * Acceptable values are between 1 and 1440, and the default value is 60.</p>
     */
    inline void SetSessionTimeoutMinutes(int value) { m_sessionTimeoutMinutesHasBeenSet = true; m_sessionTimeoutMinutes = value; }

    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.
     * Acceptable values are between 1 and 1440, and the default value is 60.</p>
     */
    inline SAMLOptionsInput& WithSessionTimeoutMinutes(int value) { SetSessionTimeoutMinutes(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    SAMLIdp m_idp;
    bool m_idpHasBeenSet;

    Aws::String m_masterUserName;
    bool m_masterUserNameHasBeenSet;

    Aws::String m_masterBackendRole;
    bool m_masterBackendRoleHasBeenSet;

    Aws::String m_subjectKey;
    bool m_subjectKeyHasBeenSet;

    Aws::String m_rolesKey;
    bool m_rolesKeyHasBeenSet;

    int m_sessionTimeoutMinutes;
    bool m_sessionTimeoutMinutesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
