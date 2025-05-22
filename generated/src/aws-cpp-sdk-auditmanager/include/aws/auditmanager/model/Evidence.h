/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/auditmanager/model/Resource.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> A record that contains the information needed to demonstrate compliance with
   * the requirements specified by a control. Examples of evidence include change
   * activity invoked by a user, or a system configuration snapshot. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Evidence">AWS
   * API Reference</a></p>
   */
  class Evidence
  {
  public:
    AWS_AUDITMANAGER_API Evidence() = default;
    AWS_AUDITMANAGER_API Evidence(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Evidence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The data source where the evidence was collected from. </p>
     */
    inline const Aws::String& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = Aws::String>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = Aws::String>
    Evidence& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetEvidenceAwsAccountId() const { return m_evidenceAwsAccountId; }
    inline bool EvidenceAwsAccountIdHasBeenSet() const { return m_evidenceAwsAccountIdHasBeenSet; }
    template<typename EvidenceAwsAccountIdT = Aws::String>
    void SetEvidenceAwsAccountId(EvidenceAwsAccountIdT&& value) { m_evidenceAwsAccountIdHasBeenSet = true; m_evidenceAwsAccountId = std::forward<EvidenceAwsAccountIdT>(value); }
    template<typename EvidenceAwsAccountIdT = Aws::String>
    Evidence& WithEvidenceAwsAccountId(EvidenceAwsAccountIdT&& value) { SetEvidenceAwsAccountId(std::forward<EvidenceAwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp that represents when the evidence was collected. </p>
     */
    inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::Utils::DateTime>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::Utils::DateTime>
    Evidence& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services service that the evidence is collected from. </p>
     */
    inline const Aws::String& GetEventSource() const { return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    template<typename EventSourceT = Aws::String>
    void SetEventSource(EventSourceT&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::forward<EventSourceT>(value); }
    template<typename EventSourceT = Aws::String>
    Evidence& WithEventSource(EventSourceT&& value) { SetEventSource(std::forward<EventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the evidence event. </p>
     */
    inline const Aws::String& GetEventName() const { return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    template<typename EventNameT = Aws::String>
    void SetEventName(EventNameT&& value) { m_eventNameHasBeenSet = true; m_eventName = std::forward<EventNameT>(value); }
    template<typename EventNameT = Aws::String>
    Evidence& WithEventName(EventNameT&& value) { SetEventName(std::forward<EventNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of automated evidence. </p>
     */
    inline const Aws::String& GetEvidenceByType() const { return m_evidenceByType; }
    inline bool EvidenceByTypeHasBeenSet() const { return m_evidenceByTypeHasBeenSet; }
    template<typename EvidenceByTypeT = Aws::String>
    void SetEvidenceByType(EvidenceByTypeT&& value) { m_evidenceByTypeHasBeenSet = true; m_evidenceByType = std::forward<EvidenceByTypeT>(value); }
    template<typename EvidenceByTypeT = Aws::String>
    Evidence& WithEvidenceByType(EvidenceByTypeT&& value) { SetEvidenceByType(std::forward<EvidenceByTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of resources that are assessed to generate the evidence. </p>
     */
    inline const Aws::Vector<Resource>& GetResourcesIncluded() const { return m_resourcesIncluded; }
    inline bool ResourcesIncludedHasBeenSet() const { return m_resourcesIncludedHasBeenSet; }
    template<typename ResourcesIncludedT = Aws::Vector<Resource>>
    void SetResourcesIncluded(ResourcesIncludedT&& value) { m_resourcesIncludedHasBeenSet = true; m_resourcesIncluded = std::forward<ResourcesIncludedT>(value); }
    template<typename ResourcesIncludedT = Aws::Vector<Resource>>
    Evidence& WithResourcesIncluded(ResourcesIncludedT&& value) { SetResourcesIncluded(std::forward<ResourcesIncludedT>(value)); return *this;}
    template<typename ResourcesIncludedT = Resource>
    Evidence& AddResourcesIncluded(ResourcesIncludedT&& value) { m_resourcesIncludedHasBeenSet = true; m_resourcesIncluded.emplace_back(std::forward<ResourcesIncludedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The names and values that are used by the evidence event. This includes an
     * attribute name (such as <code>allowUsersToChangePassword</code>) and value (such
     * as <code>true</code> or <code>false</code>). </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    Evidence& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    Evidence& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the user or role that's associated with the
     * evidence. </p>
     */
    inline const Aws::String& GetIamId() const { return m_iamId; }
    inline bool IamIdHasBeenSet() const { return m_iamIdHasBeenSet; }
    template<typename IamIdT = Aws::String>
    void SetIamId(IamIdT&& value) { m_iamIdHasBeenSet = true; m_iamId = std::forward<IamIdT>(value); }
    template<typename IamIdT = Aws::String>
    Evidence& WithIamId(IamIdT&& value) { SetIamId(std::forward<IamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation status for automated evidence that falls under the compliance
     * check category.</p> <ul> <li> <p>Audit Manager classes evidence as non-compliant
     * if Security Hub reports a <i>Fail</i> result, or if Config reports a
     * <i>Non-compliant</i> result.</p> </li> <li> <p>Audit Manager classes evidence as
     * compliant if Security Hub reports a <i>Pass</i> result, or if Config reports a
     * <i>Compliant</i> result.</p> </li> <li> <p>If a compliance check isn't available
     * or applicable, then no compliance evaluation can be made for that evidence. This
     * is the case if the evidence uses Config or Security Hub as the underlying data
     * source type, but those services aren't enabled. This is also the case if the
     * evidence uses an underlying data source type that doesn't support compliance
     * checks (such as manual evidence, Amazon Web Services API calls, or CloudTrail).
     * </p> </li> </ul>
     */
    inline const Aws::String& GetComplianceCheck() const { return m_complianceCheck; }
    inline bool ComplianceCheckHasBeenSet() const { return m_complianceCheckHasBeenSet; }
    template<typename ComplianceCheckT = Aws::String>
    void SetComplianceCheck(ComplianceCheckT&& value) { m_complianceCheckHasBeenSet = true; m_complianceCheck = std::forward<ComplianceCheckT>(value); }
    template<typename ComplianceCheckT = Aws::String>
    Evidence& WithComplianceCheck(ComplianceCheckT&& value) { SetComplianceCheck(std::forward<ComplianceCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account that the evidence is collected from, and its
     * organization path. </p>
     */
    inline const Aws::String& GetAwsOrganization() const { return m_awsOrganization; }
    inline bool AwsOrganizationHasBeenSet() const { return m_awsOrganizationHasBeenSet; }
    template<typename AwsOrganizationT = Aws::String>
    void SetAwsOrganization(AwsOrganizationT&& value) { m_awsOrganizationHasBeenSet = true; m_awsOrganization = std::forward<AwsOrganizationT>(value); }
    template<typename AwsOrganizationT = Aws::String>
    Evidence& WithAwsOrganization(AwsOrganizationT&& value) { SetAwsOrganization(std::forward<AwsOrganizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    Evidence& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline const Aws::String& GetEvidenceFolderId() const { return m_evidenceFolderId; }
    inline bool EvidenceFolderIdHasBeenSet() const { return m_evidenceFolderIdHasBeenSet; }
    template<typename EvidenceFolderIdT = Aws::String>
    void SetEvidenceFolderId(EvidenceFolderIdT&& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = std::forward<EvidenceFolderIdT>(value); }
    template<typename EvidenceFolderIdT = Aws::String>
    Evidence& WithEvidenceFolderId(EvidenceFolderIdT&& value) { SetEvidenceFolderId(std::forward<EvidenceFolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the evidence. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Evidence& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the evidence is included in the assessment report. </p>
     */
    inline const Aws::String& GetAssessmentReportSelection() const { return m_assessmentReportSelection; }
    inline bool AssessmentReportSelectionHasBeenSet() const { return m_assessmentReportSelectionHasBeenSet; }
    template<typename AssessmentReportSelectionT = Aws::String>
    void SetAssessmentReportSelection(AssessmentReportSelectionT&& value) { m_assessmentReportSelectionHasBeenSet = true; m_assessmentReportSelection = std::forward<AssessmentReportSelectionT>(value); }
    template<typename AssessmentReportSelectionT = Aws::String>
    Evidence& WithAssessmentReportSelection(AssessmentReportSelectionT&& value) { SetAssessmentReportSelection(std::forward<AssessmentReportSelectionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_evidenceAwsAccountId;
    bool m_evidenceAwsAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_time{};
    bool m_timeHasBeenSet = false;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    Aws::String m_evidenceByType;
    bool m_evidenceByTypeHasBeenSet = false;

    Aws::Vector<Resource> m_resourcesIncluded;
    bool m_resourcesIncludedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_iamId;
    bool m_iamIdHasBeenSet = false;

    Aws::String m_complianceCheck;
    bool m_complianceCheckHasBeenSet = false;

    Aws::String m_awsOrganization;
    bool m_awsOrganizationHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_evidenceFolderId;
    bool m_evidenceFolderIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_assessmentReportSelection;
    bool m_assessmentReportSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
