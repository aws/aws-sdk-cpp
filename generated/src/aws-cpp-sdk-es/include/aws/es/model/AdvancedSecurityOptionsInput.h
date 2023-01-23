/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/MasterUserOptions.h>
#include <aws/es/model/SAMLOptionsInput.h>
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
   * <p>Specifies the advanced security configuration: whether advanced security is
   * enabled, whether the internal database option is enabled, master username and
   * password (if internal database is enabled), and master user ARN (if IAM is
   * enabled).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AdvancedSecurityOptionsInput">AWS
   * API Reference</a></p>
   */
  class AdvancedSecurityOptionsInput
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsInput();
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline AdvancedSecurityOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline bool GetInternalUserDatabaseEnabled() const{ return m_internalUserDatabaseEnabled; }

    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline bool InternalUserDatabaseEnabledHasBeenSet() const { return m_internalUserDatabaseEnabledHasBeenSet; }

    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline void SetInternalUserDatabaseEnabled(bool value) { m_internalUserDatabaseEnabledHasBeenSet = true; m_internalUserDatabaseEnabled = value; }

    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline AdvancedSecurityOptionsInput& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}


    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline const MasterUserOptions& GetMasterUserOptions() const{ return m_masterUserOptions; }

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline bool MasterUserOptionsHasBeenSet() const { return m_masterUserOptionsHasBeenSet; }

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline void SetMasterUserOptions(const MasterUserOptions& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = value; }

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline void SetMasterUserOptions(MasterUserOptions&& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = std::move(value); }

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline AdvancedSecurityOptionsInput& WithMasterUserOptions(const MasterUserOptions& value) { SetMasterUserOptions(value); return *this;}

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline AdvancedSecurityOptionsInput& WithMasterUserOptions(MasterUserOptions&& value) { SetMasterUserOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the SAML application configuration for the domain.</p>
     */
    inline const SAMLOptionsInput& GetSAMLOptions() const{ return m_sAMLOptions; }

    /**
     * <p>Specifies the SAML application configuration for the domain.</p>
     */
    inline bool SAMLOptionsHasBeenSet() const { return m_sAMLOptionsHasBeenSet; }

    /**
     * <p>Specifies the SAML application configuration for the domain.</p>
     */
    inline void SetSAMLOptions(const SAMLOptionsInput& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = value; }

    /**
     * <p>Specifies the SAML application configuration for the domain.</p>
     */
    inline void SetSAMLOptions(SAMLOptionsInput&& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = std::move(value); }

    /**
     * <p>Specifies the SAML application configuration for the domain.</p>
     */
    inline AdvancedSecurityOptionsInput& WithSAMLOptions(const SAMLOptionsInput& value) { SetSAMLOptions(value); return *this;}

    /**
     * <p>Specifies the SAML application configuration for the domain.</p>
     */
    inline AdvancedSecurityOptionsInput& WithSAMLOptions(SAMLOptionsInput&& value) { SetSAMLOptions(std::move(value)); return *this;}


    /**
     * <p>True if Anonymous auth is enabled. Anonymous auth can be enabled only when
     * AdvancedSecurity is enabled on existing domains.</p>
     */
    inline bool GetAnonymousAuthEnabled() const{ return m_anonymousAuthEnabled; }

    /**
     * <p>True if Anonymous auth is enabled. Anonymous auth can be enabled only when
     * AdvancedSecurity is enabled on existing domains.</p>
     */
    inline bool AnonymousAuthEnabledHasBeenSet() const { return m_anonymousAuthEnabledHasBeenSet; }

    /**
     * <p>True if Anonymous auth is enabled. Anonymous auth can be enabled only when
     * AdvancedSecurity is enabled on existing domains.</p>
     */
    inline void SetAnonymousAuthEnabled(bool value) { m_anonymousAuthEnabledHasBeenSet = true; m_anonymousAuthEnabled = value; }

    /**
     * <p>True if Anonymous auth is enabled. Anonymous auth can be enabled only when
     * AdvancedSecurity is enabled on existing domains.</p>
     */
    inline AdvancedSecurityOptionsInput& WithAnonymousAuthEnabled(bool value) { SetAnonymousAuthEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_internalUserDatabaseEnabled;
    bool m_internalUserDatabaseEnabledHasBeenSet = false;

    MasterUserOptions m_masterUserOptions;
    bool m_masterUserOptionsHasBeenSet = false;

    SAMLOptionsInput m_sAMLOptions;
    bool m_sAMLOptionsHasBeenSet = false;

    bool m_anonymousAuthEnabled;
    bool m_anonymousAuthEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
