/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/SAMLOptionsOutput.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for fine-grained access control settings.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AdvancedSecurityOptions">AWS
   * API Reference</a></p>
   */
  class AdvancedSecurityOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptions();
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AdvancedSecurityOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if fine-grained access control is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True if fine-grained access control is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True if fine-grained access control is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True if fine-grained access control is enabled.</p>
     */
    inline AdvancedSecurityOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


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
    inline AdvancedSecurityOptions& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}


    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline const SAMLOptionsOutput& GetSAMLOptions() const{ return m_sAMLOptions; }

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline bool SAMLOptionsHasBeenSet() const { return m_sAMLOptionsHasBeenSet; }

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline void SetSAMLOptions(const SAMLOptionsOutput& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = value; }

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline void SetSAMLOptions(SAMLOptionsOutput&& value) { m_sAMLOptionsHasBeenSet = true; m_sAMLOptions = std::move(value); }

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline AdvancedSecurityOptions& WithSAMLOptions(const SAMLOptionsOutput& value) { SetSAMLOptions(value); return *this;}

    /**
     * <p>Container for information about the SAML configuration for OpenSearch
     * Dashboards.</p>
     */
    inline AdvancedSecurityOptions& WithSAMLOptions(SAMLOptionsOutput&& value) { SetSAMLOptions(std::move(value)); return *this;}


    /**
     * <p>Date and time when the migration period will be disabled. Only necessary when
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetAnonymousAuthDisableDate() const{ return m_anonymousAuthDisableDate; }

    /**
     * <p>Date and time when the migration period will be disabled. Only necessary when
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline bool AnonymousAuthDisableDateHasBeenSet() const { return m_anonymousAuthDisableDateHasBeenSet; }

    /**
     * <p>Date and time when the migration period will be disabled. Only necessary when
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline void SetAnonymousAuthDisableDate(const Aws::Utils::DateTime& value) { m_anonymousAuthDisableDateHasBeenSet = true; m_anonymousAuthDisableDate = value; }

    /**
     * <p>Date and time when the migration period will be disabled. Only necessary when
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline void SetAnonymousAuthDisableDate(Aws::Utils::DateTime&& value) { m_anonymousAuthDisableDateHasBeenSet = true; m_anonymousAuthDisableDate = std::move(value); }

    /**
     * <p>Date and time when the migration period will be disabled. Only necessary when
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline AdvancedSecurityOptions& WithAnonymousAuthDisableDate(const Aws::Utils::DateTime& value) { SetAnonymousAuthDisableDate(value); return *this;}

    /**
     * <p>Date and time when the migration period will be disabled. Only necessary when
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline AdvancedSecurityOptions& WithAnonymousAuthDisableDate(Aws::Utils::DateTime&& value) { SetAnonymousAuthDisableDate(std::move(value)); return *this;}


    /**
     * <p>True if a 30-day migration period is enabled, during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline bool GetAnonymousAuthEnabled() const{ return m_anonymousAuthEnabled; }

    /**
     * <p>True if a 30-day migration period is enabled, during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline bool AnonymousAuthEnabledHasBeenSet() const { return m_anonymousAuthEnabledHasBeenSet; }

    /**
     * <p>True if a 30-day migration period is enabled, during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline void SetAnonymousAuthEnabled(bool value) { m_anonymousAuthEnabledHasBeenSet = true; m_anonymousAuthEnabled = value; }

    /**
     * <p>True if a 30-day migration period is enabled, during which administrators can
     * create role mappings. Only necessary when <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/fgac.html#fgac-enabling-existing">enabling
     * fine-grained access control on an existing domain</a>.</p>
     */
    inline AdvancedSecurityOptions& WithAnonymousAuthEnabled(bool value) { SetAnonymousAuthEnabled(value); return *this;}

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
} // namespace OpenSearchService
} // namespace Aws
