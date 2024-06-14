/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/AutoEnableMode.h>
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


    ///@{
    /**
     * <p>Specifies whether automated sensitive data discovery is enabled automatically
     * for accounts in the organization. Possible values are: ALL, enable it for all
     * existing accounts and new member accounts; NEW, enable it only for new member
     * accounts; and, NONE, don't enable it for any accounts.</p>
     */
    inline const AutoEnableMode& GetAutoEnableOrganizationMembers() const{ return m_autoEnableOrganizationMembers; }
    inline void SetAutoEnableOrganizationMembers(const AutoEnableMode& value) { m_autoEnableOrganizationMembers = value; }
    inline void SetAutoEnableOrganizationMembers(AutoEnableMode&& value) { m_autoEnableOrganizationMembers = std::move(value); }
    inline GetAutomatedDiscoveryConfigurationResult& WithAutoEnableOrganizationMembers(const AutoEnableMode& value) { SetAutoEnableOrganizationMembers(value); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithAutoEnableOrganizationMembers(AutoEnableMode&& value) { SetAutoEnableOrganizationMembers(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the classification scope that's used when
     * performing automated sensitive data discovery. The classification scope
     * specifies S3 buckets to exclude from analyses.</p>
     */
    inline const Aws::String& GetClassificationScopeId() const{ return m_classificationScopeId; }
    inline void SetClassificationScopeId(const Aws::String& value) { m_classificationScopeId = value; }
    inline void SetClassificationScopeId(Aws::String&& value) { m_classificationScopeId = std::move(value); }
    inline void SetClassificationScopeId(const char* value) { m_classificationScopeId.assign(value); }
    inline GetAutomatedDiscoveryConfigurationResult& WithClassificationScopeId(const Aws::String& value) { SetClassificationScopeId(value); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithClassificationScopeId(Aws::String&& value) { SetClassificationScopeId(std::move(value)); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithClassificationScopeId(const char* value) { SetClassificationScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently disabled. This value is null if
     * automated sensitive data discovery is currently enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledAt() const{ return m_disabledAt; }
    inline void SetDisabledAt(const Aws::Utils::DateTime& value) { m_disabledAt = value; }
    inline void SetDisabledAt(Aws::Utils::DateTime&& value) { m_disabledAt = std::move(value); }
    inline GetAutomatedDiscoveryConfigurationResult& WithDisabledAt(const Aws::Utils::DateTime& value) { SetDisabledAt(value); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithDisabledAt(Aws::Utils::DateTime&& value) { SetDisabledAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was initially enabled. This value is null if automated
     * sensitive data discovery has never been enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstEnabledAt() const{ return m_firstEnabledAt; }
    inline void SetFirstEnabledAt(const Aws::Utils::DateTime& value) { m_firstEnabledAt = value; }
    inline void SetFirstEnabledAt(Aws::Utils::DateTime&& value) { m_firstEnabledAt = std::move(value); }
    inline GetAutomatedDiscoveryConfigurationResult& WithFirstEnabledAt(const Aws::Utils::DateTime& value) { SetFirstEnabledAt(value); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithFirstEnabledAt(Aws::Utils::DateTime&& value) { SetFirstEnabledAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the
     * configuration settings or status of automated sensitive data discovery was most
     * recently changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetAutomatedDiscoveryConfigurationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the sensitivity inspection template that's used
     * when performing automated sensitive data discovery. The template specifies which
     * allow lists, custom data identifiers, and managed data identifiers to use when
     * analyzing data.</p>
     */
    inline const Aws::String& GetSensitivityInspectionTemplateId() const{ return m_sensitivityInspectionTemplateId; }
    inline void SetSensitivityInspectionTemplateId(const Aws::String& value) { m_sensitivityInspectionTemplateId = value; }
    inline void SetSensitivityInspectionTemplateId(Aws::String&& value) { m_sensitivityInspectionTemplateId = std::move(value); }
    inline void SetSensitivityInspectionTemplateId(const char* value) { m_sensitivityInspectionTemplateId.assign(value); }
    inline GetAutomatedDiscoveryConfigurationResult& WithSensitivityInspectionTemplateId(const Aws::String& value) { SetSensitivityInspectionTemplateId(value); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithSensitivityInspectionTemplateId(Aws::String&& value) { SetSensitivityInspectionTemplateId(std::move(value)); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithSensitivityInspectionTemplateId(const char* value) { SetSensitivityInspectionTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of automated sensitive data discovery for the organization
     * or account. Possible values are: ENABLED, use the specified settings to perform
     * automated sensitive data discovery activities; and, DISABLED, don't perform
     * automated sensitive data discovery activities.</p>
     */
    inline const AutomatedDiscoveryStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AutomatedDiscoveryStatus& value) { m_status = value; }
    inline void SetStatus(AutomatedDiscoveryStatus&& value) { m_status = std::move(value); }
    inline GetAutomatedDiscoveryConfigurationResult& WithStatus(const AutomatedDiscoveryStatus& value) { SetStatus(value); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithStatus(AutomatedDiscoveryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAutomatedDiscoveryConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAutomatedDiscoveryConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AutoEnableMode m_autoEnableOrganizationMembers;

    Aws::String m_classificationScopeId;

    Aws::Utils::DateTime m_disabledAt;

    Aws::Utils::DateTime m_firstEnabledAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_sensitivityInspectionTemplateId;

    AutomatedDiscoveryStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
