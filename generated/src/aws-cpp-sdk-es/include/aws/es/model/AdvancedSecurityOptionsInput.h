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
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsInput() = default;
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AdvancedSecurityOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline bool GetInternalUserDatabaseEnabled() const { return m_internalUserDatabaseEnabled; }
    inline bool InternalUserDatabaseEnabledHasBeenSet() const { return m_internalUserDatabaseEnabledHasBeenSet; }
    inline void SetInternalUserDatabaseEnabled(bool value) { m_internalUserDatabaseEnabledHasBeenSet = true; m_internalUserDatabaseEnabled = value; }
    inline AdvancedSecurityOptionsInput& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline const MasterUserOptions& GetMasterUserOptions() const { return m_masterUserOptions; }
    inline bool MasterUserOptionsHasBeenSet() const { return m_masterUserOptionsHasBeenSet; }
    template<typename MasterUserOptionsT = MasterUserOptions>
    void SetMasterUserOptions(MasterUserOptionsT&& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = std::forward<MasterUserOptionsT>(value); }
    template<typename MasterUserOptionsT = MasterUserOptions>
    AdvancedSecurityOptionsInput& WithMasterUserOptions(MasterUserOptionsT&& value) { SetMasterUserOptions(std::forward<MasterUserOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the SAML application configuration for the domain.</p>
     */
    inline const SAMLOptionsInput& GetSAMLOptions() const { return m_sAMLOptions; }
    inline bool SAMLOptionsHasBeenSet() const { return m_sAMLOptionsHasBeenSet; }
    template<typename SAMLOptionsT = SAMLOptionsInput>
    void SetSAMLOptions(SAMLOptionsT&& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = std::forward<SAMLOptionsT>(value); }
    template<typename SAMLOptionsT = SAMLOptionsInput>
    AdvancedSecurityOptionsInput& WithSAMLOptions(SAMLOptionsT&& value) { SetSAMLOptions(std::forward<SAMLOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if Anonymous auth is enabled. Anonymous auth can be enabled only when
     * AdvancedSecurity is enabled on existing domains.</p>
     */
    inline bool GetAnonymousAuthEnabled() const { return m_anonymousAuthEnabled; }
    inline bool AnonymousAuthEnabledHasBeenSet() const { return m_anonymousAuthEnabledHasBeenSet; }
    inline void SetAnonymousAuthEnabled(bool value) { m_anonymousAuthEnabledHasBeenSet = true; m_anonymousAuthEnabled = value; }
    inline AdvancedSecurityOptionsInput& WithAnonymousAuthEnabled(bool value) { SetAnonymousAuthEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_internalUserDatabaseEnabled{false};
    bool m_internalUserDatabaseEnabledHasBeenSet = false;

    MasterUserOptions m_masterUserOptions;
    bool m_masterUserOptionsHasBeenSet = false;

    SAMLOptionsInput m_sAMLOptions;
    bool m_sAMLOptionsHasBeenSet = false;

    bool m_anonymousAuthEnabled{false};
    bool m_anonymousAuthEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
