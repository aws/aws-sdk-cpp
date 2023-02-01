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
   * <p>Describes the SAML application configured for the domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/SAMLOptionsOutput">AWS
   * API Reference</a></p>
   */
  class SAMLOptionsOutput
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API SAMLOptionsOutput();
    AWS_ELASTICSEARCHSERVICE_API SAMLOptionsOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API SAMLOptionsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline SAMLOptionsOutput& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Describes the SAML Identity Provider's information.</p>
     */
    inline const SAMLIdp& GetIdp() const{ return m_idp; }

    /**
     * <p>Describes the SAML Identity Provider's information.</p>
     */
    inline bool IdpHasBeenSet() const { return m_idpHasBeenSet; }

    /**
     * <p>Describes the SAML Identity Provider's information.</p>
     */
    inline void SetIdp(const SAMLIdp& value) { m_idpHasBeenSet = true; m_idp = value; }

    /**
     * <p>Describes the SAML Identity Provider's information.</p>
     */
    inline void SetIdp(SAMLIdp&& value) { m_idpHasBeenSet = true; m_idp = std::move(value); }

    /**
     * <p>Describes the SAML Identity Provider's information.</p>
     */
    inline SAMLOptionsOutput& WithIdp(const SAMLIdp& value) { SetIdp(value); return *this;}

    /**
     * <p>Describes the SAML Identity Provider's information.</p>
     */
    inline SAMLOptionsOutput& WithIdp(SAMLIdp&& value) { SetIdp(std::move(value)); return *this;}


    /**
     * <p>The key used for matching the SAML Subject attribute.</p>
     */
    inline const Aws::String& GetSubjectKey() const{ return m_subjectKey; }

    /**
     * <p>The key used for matching the SAML Subject attribute.</p>
     */
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }

    /**
     * <p>The key used for matching the SAML Subject attribute.</p>
     */
    inline void SetSubjectKey(const Aws::String& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = value; }

    /**
     * <p>The key used for matching the SAML Subject attribute.</p>
     */
    inline void SetSubjectKey(Aws::String&& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = std::move(value); }

    /**
     * <p>The key used for matching the SAML Subject attribute.</p>
     */
    inline void SetSubjectKey(const char* value) { m_subjectKeyHasBeenSet = true; m_subjectKey.assign(value); }

    /**
     * <p>The key used for matching the SAML Subject attribute.</p>
     */
    inline SAMLOptionsOutput& WithSubjectKey(const Aws::String& value) { SetSubjectKey(value); return *this;}

    /**
     * <p>The key used for matching the SAML Subject attribute.</p>
     */
    inline SAMLOptionsOutput& WithSubjectKey(Aws::String&& value) { SetSubjectKey(std::move(value)); return *this;}

    /**
     * <p>The key used for matching the SAML Subject attribute.</p>
     */
    inline SAMLOptionsOutput& WithSubjectKey(const char* value) { SetSubjectKey(value); return *this;}


    /**
     * <p>The key used for matching the SAML Roles attribute.</p>
     */
    inline const Aws::String& GetRolesKey() const{ return m_rolesKey; }

    /**
     * <p>The key used for matching the SAML Roles attribute.</p>
     */
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }

    /**
     * <p>The key used for matching the SAML Roles attribute.</p>
     */
    inline void SetRolesKey(const Aws::String& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = value; }

    /**
     * <p>The key used for matching the SAML Roles attribute.</p>
     */
    inline void SetRolesKey(Aws::String&& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = std::move(value); }

    /**
     * <p>The key used for matching the SAML Roles attribute.</p>
     */
    inline void SetRolesKey(const char* value) { m_rolesKeyHasBeenSet = true; m_rolesKey.assign(value); }

    /**
     * <p>The key used for matching the SAML Roles attribute.</p>
     */
    inline SAMLOptionsOutput& WithRolesKey(const Aws::String& value) { SetRolesKey(value); return *this;}

    /**
     * <p>The key used for matching the SAML Roles attribute.</p>
     */
    inline SAMLOptionsOutput& WithRolesKey(Aws::String&& value) { SetRolesKey(std::move(value)); return *this;}

    /**
     * <p>The key used for matching the SAML Roles attribute.</p>
     */
    inline SAMLOptionsOutput& WithRolesKey(const char* value) { SetRolesKey(value); return *this;}


    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.</p>
     */
    inline int GetSessionTimeoutMinutes() const{ return m_sessionTimeoutMinutes; }

    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.</p>
     */
    inline bool SessionTimeoutMinutesHasBeenSet() const { return m_sessionTimeoutMinutesHasBeenSet; }

    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.</p>
     */
    inline void SetSessionTimeoutMinutes(int value) { m_sessionTimeoutMinutesHasBeenSet = true; m_sessionTimeoutMinutes = value; }

    /**
     * <p>The duration, in minutes, after which a user session becomes inactive.</p>
     */
    inline SAMLOptionsOutput& WithSessionTimeoutMinutes(int value) { SetSessionTimeoutMinutes(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    SAMLIdp m_idp;
    bool m_idpHasBeenSet = false;

    Aws::String m_subjectKey;
    bool m_subjectKeyHasBeenSet = false;

    Aws::String m_rolesKey;
    bool m_rolesKeyHasBeenSet = false;

    int m_sessionTimeoutMinutes;
    bool m_sessionTimeoutMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
