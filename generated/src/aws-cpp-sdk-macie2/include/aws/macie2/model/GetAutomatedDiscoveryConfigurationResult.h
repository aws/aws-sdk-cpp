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
    AWS_MACIE2_API GetAutomatedDiscoveryConfigurationResult() = default;
    AWS_MACIE2_API GetAutomatedDiscoveryConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetAutomatedDiscoveryConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether automated sensitive data discovery is enabled automatically
     * for accounts in the organization. Possible values are: ALL, enable it for all
     * existing accounts and new member accounts; NEW, enable it only for new member
     * accounts; and, NONE, don't enable it for any accounts.</p>
     */
    inline AutoEnableMode GetAutoEnableOrganizationMembers() const { return m_autoEnableOrganizationMembers; }
    inline void SetAutoEnableOrganizationMembers(AutoEnableMode value) { m_autoEnableOrganizationMembersHasBeenSet = true; m_autoEnableOrganizationMembers = value; }
    inline GetAutomatedDiscoveryConfigurationResult& WithAutoEnableOrganizationMembers(AutoEnableMode value) { SetAutoEnableOrganizationMembers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the classification scope that's used when
     * performing automated sensitive data discovery. The classification scope
     * specifies S3 buckets to exclude from analyses.</p>
     */
    inline const Aws::String& GetClassificationScopeId() const { return m_classificationScopeId; }
    template<typename ClassificationScopeIdT = Aws::String>
    void SetClassificationScopeId(ClassificationScopeIdT&& value) { m_classificationScopeIdHasBeenSet = true; m_classificationScopeId = std::forward<ClassificationScopeIdT>(value); }
    template<typename ClassificationScopeIdT = Aws::String>
    GetAutomatedDiscoveryConfigurationResult& WithClassificationScopeId(ClassificationScopeIdT&& value) { SetClassificationScopeId(std::forward<ClassificationScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was most recently disabled. This value is null if
     * automated sensitive data discovery is currently enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledAt() const { return m_disabledAt; }
    template<typename DisabledAtT = Aws::Utils::DateTime>
    void SetDisabledAt(DisabledAtT&& value) { m_disabledAtHasBeenSet = true; m_disabledAt = std::forward<DisabledAtT>(value); }
    template<typename DisabledAtT = Aws::Utils::DateTime>
    GetAutomatedDiscoveryConfigurationResult& WithDisabledAt(DisabledAtT&& value) { SetDisabledAt(std::forward<DisabledAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when automated
     * sensitive data discovery was initially enabled. This value is null if automated
     * sensitive data discovery has never been enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstEnabledAt() const { return m_firstEnabledAt; }
    template<typename FirstEnabledAtT = Aws::Utils::DateTime>
    void SetFirstEnabledAt(FirstEnabledAtT&& value) { m_firstEnabledAtHasBeenSet = true; m_firstEnabledAt = std::forward<FirstEnabledAtT>(value); }
    template<typename FirstEnabledAtT = Aws::Utils::DateTime>
    GetAutomatedDiscoveryConfigurationResult& WithFirstEnabledAt(FirstEnabledAtT&& value) { SetFirstEnabledAt(std::forward<FirstEnabledAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the
     * configuration settings or status of automated sensitive data discovery was most
     * recently changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetAutomatedDiscoveryConfigurationResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the sensitivity inspection template that's used
     * when performing automated sensitive data discovery. The template specifies which
     * allow lists, custom data identifiers, and managed data identifiers to use when
     * analyzing data.</p>
     */
    inline const Aws::String& GetSensitivityInspectionTemplateId() const { return m_sensitivityInspectionTemplateId; }
    template<typename SensitivityInspectionTemplateIdT = Aws::String>
    void SetSensitivityInspectionTemplateId(SensitivityInspectionTemplateIdT&& value) { m_sensitivityInspectionTemplateIdHasBeenSet = true; m_sensitivityInspectionTemplateId = std::forward<SensitivityInspectionTemplateIdT>(value); }
    template<typename SensitivityInspectionTemplateIdT = Aws::String>
    GetAutomatedDiscoveryConfigurationResult& WithSensitivityInspectionTemplateId(SensitivityInspectionTemplateIdT&& value) { SetSensitivityInspectionTemplateId(std::forward<SensitivityInspectionTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of automated sensitive data discovery for the organization
     * or account. Possible values are: ENABLED, use the specified settings to perform
     * automated sensitive data discovery activities; and, DISABLED, don't perform
     * automated sensitive data discovery activities.</p>
     */
    inline AutomatedDiscoveryStatus GetStatus() const { return m_status; }
    inline void SetStatus(AutomatedDiscoveryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAutomatedDiscoveryConfigurationResult& WithStatus(AutomatedDiscoveryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutomatedDiscoveryConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutoEnableMode m_autoEnableOrganizationMembers{AutoEnableMode::NOT_SET};
    bool m_autoEnableOrganizationMembersHasBeenSet = false;

    Aws::String m_classificationScopeId;
    bool m_classificationScopeIdHasBeenSet = false;

    Aws::Utils::DateTime m_disabledAt{};
    bool m_disabledAtHasBeenSet = false;

    Aws::Utils::DateTime m_firstEnabledAt{};
    bool m_firstEnabledAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_sensitivityInspectionTemplateId;
    bool m_sensitivityInspectionTemplateIdHasBeenSet = false;

    AutomatedDiscoveryStatus m_status{AutomatedDiscoveryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
