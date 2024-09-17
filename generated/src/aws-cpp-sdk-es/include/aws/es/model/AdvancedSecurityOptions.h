/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/SAMLOptionsOutput.h>
#include <aws/core/utils/DateTime.h>
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
   * enabled, whether the internal database option is enabled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AdvancedSecurityOptions">AWS
   * API Reference</a></p>
   */
  class AdvancedSecurityOptions
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptions();
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AdvancedSecurityOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline bool GetInternalUserDatabaseEnabled() const{ return m_internalUserDatabaseEnabled; }
    inline bool InternalUserDatabaseEnabledHasBeenSet() const { return m_internalUserDatabaseEnabledHasBeenSet; }
    inline void SetInternalUserDatabaseEnabled(bool value) { m_internalUserDatabaseEnabledHasBeenSet = true; m_internalUserDatabaseEnabled = value; }
    inline AdvancedSecurityOptions& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the SAML application configured for a domain.</p>
     */
    inline const SAMLOptionsOutput& GetSAMLOptions() const{ return m_sAMLOptions; }
    inline bool SAMLOptionsHasBeenSet() const { return m_sAMLOptionsHasBeenSet; }
    inline void SetSAMLOptions(const SAMLOptionsOutput& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = value; }
    inline void SetSAMLOptions(SAMLOptionsOutput&& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = std::move(value); }
    inline AdvancedSecurityOptions& WithSAMLOptions(const SAMLOptionsOutput& value) { SetSAMLOptions(value); return *this;}
    inline AdvancedSecurityOptions& WithSAMLOptions(SAMLOptionsOutput&& value) { SetSAMLOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Anonymous Auth Disable Date when Anonymous Auth is enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetAnonymousAuthDisableDate() const{ return m_anonymousAuthDisableDate; }
    inline bool AnonymousAuthDisableDateHasBeenSet() const { return m_anonymousAuthDisableDateHasBeenSet; }
    inline void SetAnonymousAuthDisableDate(const Aws::Utils::DateTime& value) { m_anonymousAuthDisableDateHasBeenSet = true; m_anonymousAuthDisableDate = value; }
    inline void SetAnonymousAuthDisableDate(Aws::Utils::DateTime&& value) { m_anonymousAuthDisableDateHasBeenSet = true; m_anonymousAuthDisableDate = std::move(value); }
    inline AdvancedSecurityOptions& WithAnonymousAuthDisableDate(const Aws::Utils::DateTime& value) { SetAnonymousAuthDisableDate(value); return *this;}
    inline AdvancedSecurityOptions& WithAnonymousAuthDisableDate(Aws::Utils::DateTime&& value) { SetAnonymousAuthDisableDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if Anonymous auth is enabled. Anonymous auth can be enabled only when
     * AdvancedSecurity is enabled on existing domains.</p>
     */
    inline bool GetAnonymousAuthEnabled() const{ return m_anonymousAuthEnabled; }
    inline bool AnonymousAuthEnabledHasBeenSet() const { return m_anonymousAuthEnabledHasBeenSet; }
    inline void SetAnonymousAuthEnabled(bool value) { m_anonymousAuthEnabledHasBeenSet = true; m_anonymousAuthEnabled = value; }
    inline AdvancedSecurityOptions& WithAnonymousAuthEnabled(bool value) { SetAnonymousAuthEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_internalUserDatabaseEnabled;
    bool m_internalUserDatabaseEnabledHasBeenSet = false;

    SAMLOptionsOutput m_sAMLOptions;
    bool m_sAMLOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_anonymousAuthDisableDate;
    bool m_anonymousAuthDisableDateHasBeenSet = false;

    bool m_anonymousAuthEnabled;
    bool m_anonymousAuthEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
