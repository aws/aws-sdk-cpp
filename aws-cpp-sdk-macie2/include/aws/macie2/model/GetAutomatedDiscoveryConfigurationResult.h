/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/AutomatedDiscoveryStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class GetAutomatedDiscoveryConfigurationResult
  {
  public:
    AWS_MACIE2_API GetAutomatedDiscoveryConfigurationResult();
    AWS_MACIE2_API GetAutomatedDiscoveryConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetAutomatedDiscoveryConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the classification scope that's used when
     * performing automated sensitive data discovery for the account. The
     * classification scope specifies S3 buckets to exclude from automated sensitive
     * data discovery.</p>
     */
    inline const Aws::String& GetClassificationScopeId() const{ return m_classificationScopeId; }

    /**
     * <p>The unique identifier for the classification scope that's used when
     * performing automated sensitive data discovery for the account. The
     * classification scope specifies S3 buckets to exclude from automated sensitive
     * data discovery.</p>
     */
    inline void SetClassificationScopeId(const Aws::String& value) { m_classificationScopeId = value; }

    /**
     * <p>The unique identifier for the classification scope that's used when
     * performing automated sensitive data discovery for the account. The
     * classification scope specifies S3 buckets to exclude from automated sensitive
     * data discovery.</p>
     */
    inline void SetClassificationScopeId(Aws::String&& value) { m_classificationScopeId = std::move(value); }

    /**
     * <p>The unique identifier for the classification scope that's used when
     * performing automated sensitive data discovery for the account. The
     * classification scope specifies S3 buckets to exclude from automated sensitive
     * data discovery.</p>
     */
    inline void SetClassificationScopeId(const char* value) { m_classificationScopeId.assign(value); }

    /**
     * <p>The unique identifier for the classification scope that's used when
     * performing automated sensitive data discovery for the account. The
     * classification scope specifies S3 buckets to exclude from automated sensitive
     * data discovery.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithClassificationScopeId(const Aws::String& value) { SetClassificationScopeId(value); return *this;}

    /**
     * <p>The unique identifier for the classification scope that's used when
     * performing automated sensitive data discovery for the account. The
     * classification scope specifies S3 buckets to exclude from automated sensitive
     * data discovery.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithClassificationScopeId(Aws::String&& value) { SetClassificationScopeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the classification scope that's used when
     * performing automated sensitive data discovery for the account. The
     * classification scope specifies S3 buckets to exclude from automated sensitive
     * data discovery.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithClassificationScopeId(const char* value) { SetClassificationScopeId(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently disabled for the account. This value
     * is null if automated sensitive data discovery wasn't enabled and subsequently
     * disabled for the account.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledAt() const{ return m_disabledAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently disabled for the account. This value
     * is null if automated sensitive data discovery wasn't enabled and subsequently
     * disabled for the account.</p>
     */
    inline void SetDisabledAt(const Aws::Utils::DateTime& value) { m_disabledAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently disabled for the account. This value
     * is null if automated sensitive data discovery wasn't enabled and subsequently
     * disabled for the account.</p>
     */
    inline void SetDisabledAt(Aws::Utils::DateTime&& value) { m_disabledAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently disabled for the account. This value
     * is null if automated sensitive data discovery wasn't enabled and subsequently
     * disabled for the account.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithDisabledAt(const Aws::Utils::DateTime& value) { SetDisabledAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently disabled for the account. This value
     * is null if automated sensitive data discovery wasn't enabled and subsequently
     * disabled for the account.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithDisabledAt(Aws::Utils::DateTime&& value) { SetDisabledAt(std::move(value)); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was initially enabled for the account. This value is
     * null if automated sensitive data discovery has never been enabled for the
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstEnabledAt() const{ return m_firstEnabledAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was initially enabled for the account. This value is
     * null if automated sensitive data discovery has never been enabled for the
     * account.</p>
     */
    inline void SetFirstEnabledAt(const Aws::Utils::DateTime& value) { m_firstEnabledAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was initially enabled for the account. This value is
     * null if automated sensitive data discovery has never been enabled for the
     * account.</p>
     */
    inline void SetFirstEnabledAt(Aws::Utils::DateTime&& value) { m_firstEnabledAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was initially enabled for the account. This value is
     * null if automated sensitive data discovery has never been enabled for the
     * account.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithFirstEnabledAt(const Aws::Utils::DateTime& value) { SetFirstEnabledAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was initially enabled for the account. This value is
     * null if automated sensitive data discovery has never been enabled for the
     * account.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithFirstEnabledAt(Aws::Utils::DateTime&& value) { SetFirstEnabledAt(std::move(value)); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently enabled or disabled for the
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently enabled or disabled for the
     * account.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently enabled or disabled for the
     * account.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently enabled or disabled for the
     * account.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently enabled or disabled for the
     * account.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the sensitivity inspection template that's used
     * when performing automated sensitive data discovery for the account. The template
     * specifies which allow lists, custom data identifiers, and managed data
     * identifiers to use when analyzing data.</p>
     */
    inline const Aws::String& GetSensitivityInspectionTemplateId() const{ return m_sensitivityInspectionTemplateId; }

    /**
     * <p>The unique identifier for the sensitivity inspection template that's used
     * when performing automated sensitive data discovery for the account. The template
     * specifies which allow lists, custom data identifiers, and managed data
     * identifiers to use when analyzing data.</p>
     */
    inline void SetSensitivityInspectionTemplateId(const Aws::String& value) { m_sensitivityInspectionTemplateId = value; }

    /**
     * <p>The unique identifier for the sensitivity inspection template that's used
     * when performing automated sensitive data discovery for the account. The template
     * specifies which allow lists, custom data identifiers, and managed data
     * identifiers to use when analyzing data.</p>
     */
    inline void SetSensitivityInspectionTemplateId(Aws::String&& value) { m_sensitivityInspectionTemplateId = std::move(value); }

    /**
     * <p>The unique identifier for the sensitivity inspection template that's used
     * when performing automated sensitive data discovery for the account. The template
     * specifies which allow lists, custom data identifiers, and managed data
     * identifiers to use when analyzing data.</p>
     */
    inline void SetSensitivityInspectionTemplateId(const char* value) { m_sensitivityInspectionTemplateId.assign(value); }

    /**
     * <p>The unique identifier for the sensitivity inspection template that's used
     * when performing automated sensitive data discovery for the account. The template
     * specifies which allow lists, custom data identifiers, and managed data
     * identifiers to use when analyzing data.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithSensitivityInspectionTemplateId(const Aws::String& value) { SetSensitivityInspectionTemplateId(value); return *this;}

    /**
     * <p>The unique identifier for the sensitivity inspection template that's used
     * when performing automated sensitive data discovery for the account. The template
     * specifies which allow lists, custom data identifiers, and managed data
     * identifiers to use when analyzing data.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithSensitivityInspectionTemplateId(Aws::String&& value) { SetSensitivityInspectionTemplateId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the sensitivity inspection template that's used
     * when performing automated sensitive data discovery for the account. The template
     * specifies which allow lists, custom data identifiers, and managed data
     * identifiers to use when analyzing data.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithSensitivityInspectionTemplateId(const char* value) { SetSensitivityInspectionTemplateId(value); return *this;}


    /**
     * <p>The current status of the automated sensitive data discovery configuration
     * for the account. Possible values are: ENABLED, use the specified settings to
     * perform automated sensitive data discovery activities for the account; and,
     * DISABLED, don't perform automated sensitive data discovery activities for the
     * account.</p>
     */
    inline const AutomatedDiscoveryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the automated sensitive data discovery configuration
     * for the account. Possible values are: ENABLED, use the specified settings to
     * perform automated sensitive data discovery activities for the account; and,
     * DISABLED, don't perform automated sensitive data discovery activities for the
     * account.</p>
     */
    inline void SetStatus(const AutomatedDiscoveryStatus& value) { m_status = value; }

    /**
     * <p>The current status of the automated sensitive data discovery configuration
     * for the account. Possible values are: ENABLED, use the specified settings to
     * perform automated sensitive data discovery activities for the account; and,
     * DISABLED, don't perform automated sensitive data discovery activities for the
     * account.</p>
     */
    inline void SetStatus(AutomatedDiscoveryStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the automated sensitive data discovery configuration
     * for the account. Possible values are: ENABLED, use the specified settings to
     * perform automated sensitive data discovery activities for the account; and,
     * DISABLED, don't perform automated sensitive data discovery activities for the
     * account.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithStatus(const AutomatedDiscoveryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the automated sensitive data discovery configuration
     * for the account. Possible values are: ENABLED, use the specified settings to
     * perform automated sensitive data discovery activities for the account; and,
     * DISABLED, don't perform automated sensitive data discovery activities for the
     * account.</p>
     */
    inline GetAutomatedDiscoveryConfigurationResult& WithStatus(AutomatedDiscoveryStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_classificationScopeId;

    Aws::Utils::DateTime m_disabledAt;

    Aws::Utils::DateTime m_firstEnabledAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_sensitivityInspectionTemplateId;

    AutomatedDiscoveryStatus m_status;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
