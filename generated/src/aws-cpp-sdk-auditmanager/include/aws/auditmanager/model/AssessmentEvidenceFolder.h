﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The folder where Audit Manager stores evidence for an assessment.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentEvidenceFolder">AWS
   * API Reference</a></p>
   */
  class AssessmentEvidenceFolder
  {
  public:
    AWS_AUDITMANAGER_API AssessmentEvidenceFolder();
    AWS_AUDITMANAGER_API AssessmentEvidenceFolder(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentEvidenceFolder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the evidence folder. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssessmentEvidenceFolder& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssessmentEvidenceFolder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssessmentEvidenceFolder& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the first evidence was added to the evidence folder. </p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline AssessmentEvidenceFolder& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}
    inline AssessmentEvidenceFolder& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }
    inline AssessmentEvidenceFolder& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}
    inline AssessmentEvidenceFolder& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}
    inline AssessmentEvidenceFolder& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const{ return m_controlSetId; }
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }
    inline void SetControlSetId(const Aws::String& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = value; }
    inline void SetControlSetId(Aws::String&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::move(value); }
    inline void SetControlSetId(const char* value) { m_controlSetIdHasBeenSet = true; m_controlSetId.assign(value); }
    inline AssessmentEvidenceFolder& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}
    inline AssessmentEvidenceFolder& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}
    inline AssessmentEvidenceFolder& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the control. </p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }
    inline AssessmentEvidenceFolder& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}
    inline AssessmentEvidenceFolder& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}
    inline AssessmentEvidenceFolder& WithControlId(const char* value) { SetControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssessmentEvidenceFolder& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssessmentEvidenceFolder& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssessmentEvidenceFolder& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Service that the evidence was collected from. </p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }
    inline AssessmentEvidenceFolder& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}
    inline AssessmentEvidenceFolder& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}
    inline AssessmentEvidenceFolder& WithDataSource(const char* value) { SetDataSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the user who created the evidence folder. </p>
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
    inline void SetAuthor(const Aws::String& value) { m_authorHasBeenSet = true; m_author = value; }
    inline void SetAuthor(Aws::String&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }
    inline void SetAuthor(const char* value) { m_authorHasBeenSet = true; m_author.assign(value); }
    inline AssessmentEvidenceFolder& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}
    inline AssessmentEvidenceFolder& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}
    inline AssessmentEvidenceFolder& WithAuthor(const char* value) { SetAuthor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total amount of evidence in the evidence folder. </p>
     */
    inline int GetTotalEvidence() const{ return m_totalEvidence; }
    inline bool TotalEvidenceHasBeenSet() const { return m_totalEvidenceHasBeenSet; }
    inline void SetTotalEvidence(int value) { m_totalEvidenceHasBeenSet = true; m_totalEvidence = value; }
    inline AssessmentEvidenceFolder& WithTotalEvidence(int value) { SetTotalEvidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total count of evidence that's included in the assessment report. </p>
     */
    inline int GetAssessmentReportSelectionCount() const{ return m_assessmentReportSelectionCount; }
    inline bool AssessmentReportSelectionCountHasBeenSet() const { return m_assessmentReportSelectionCountHasBeenSet; }
    inline void SetAssessmentReportSelectionCount(int value) { m_assessmentReportSelectionCountHasBeenSet = true; m_assessmentReportSelectionCount = value; }
    inline AssessmentEvidenceFolder& WithAssessmentReportSelectionCount(int value) { SetAssessmentReportSelectionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the control. </p>
     */
    inline const Aws::String& GetControlName() const{ return m_controlName; }
    inline bool ControlNameHasBeenSet() const { return m_controlNameHasBeenSet; }
    inline void SetControlName(const Aws::String& value) { m_controlNameHasBeenSet = true; m_controlName = value; }
    inline void SetControlName(Aws::String&& value) { m_controlNameHasBeenSet = true; m_controlName = std::move(value); }
    inline void SetControlName(const char* value) { m_controlNameHasBeenSet = true; m_controlName.assign(value); }
    inline AssessmentEvidenceFolder& WithControlName(const Aws::String& value) { SetControlName(value); return *this;}
    inline AssessmentEvidenceFolder& WithControlName(Aws::String&& value) { SetControlName(std::move(value)); return *this;}
    inline AssessmentEvidenceFolder& WithControlName(const char* value) { SetControlName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of evidence that's included in the evidence folder. </p>
     */
    inline int GetEvidenceResourcesIncludedCount() const{ return m_evidenceResourcesIncludedCount; }
    inline bool EvidenceResourcesIncludedCountHasBeenSet() const { return m_evidenceResourcesIncludedCountHasBeenSet; }
    inline void SetEvidenceResourcesIncludedCount(int value) { m_evidenceResourcesIncludedCountHasBeenSet = true; m_evidenceResourcesIncludedCount = value; }
    inline AssessmentEvidenceFolder& WithEvidenceResourcesIncludedCount(int value) { SetEvidenceResourcesIncludedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of evidence that falls under the configuration data category.
     * This evidence is collected from configuration snapshots of other Amazon Web
     * Services such as Amazon EC2, Amazon S3, or IAM. </p>
     */
    inline int GetEvidenceByTypeConfigurationDataCount() const{ return m_evidenceByTypeConfigurationDataCount; }
    inline bool EvidenceByTypeConfigurationDataCountHasBeenSet() const { return m_evidenceByTypeConfigurationDataCountHasBeenSet; }
    inline void SetEvidenceByTypeConfigurationDataCount(int value) { m_evidenceByTypeConfigurationDataCountHasBeenSet = true; m_evidenceByTypeConfigurationDataCount = value; }
    inline AssessmentEvidenceFolder& WithEvidenceByTypeConfigurationDataCount(int value) { SetEvidenceByTypeConfigurationDataCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of evidence that falls under the manual category. This evidence
     * is imported manually. </p>
     */
    inline int GetEvidenceByTypeManualCount() const{ return m_evidenceByTypeManualCount; }
    inline bool EvidenceByTypeManualCountHasBeenSet() const { return m_evidenceByTypeManualCountHasBeenSet; }
    inline void SetEvidenceByTypeManualCount(int value) { m_evidenceByTypeManualCountHasBeenSet = true; m_evidenceByTypeManualCount = value; }
    inline AssessmentEvidenceFolder& WithEvidenceByTypeManualCount(int value) { SetEvidenceByTypeManualCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of evidence that falls under the compliance check category. This
     * evidence is collected from Config or Security Hub. </p>
     */
    inline int GetEvidenceByTypeComplianceCheckCount() const{ return m_evidenceByTypeComplianceCheckCount; }
    inline bool EvidenceByTypeComplianceCheckCountHasBeenSet() const { return m_evidenceByTypeComplianceCheckCountHasBeenSet; }
    inline void SetEvidenceByTypeComplianceCheckCount(int value) { m_evidenceByTypeComplianceCheckCountHasBeenSet = true; m_evidenceByTypeComplianceCheckCount = value; }
    inline AssessmentEvidenceFolder& WithEvidenceByTypeComplianceCheckCount(int value) { SetEvidenceByTypeComplianceCheckCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of issues that were reported directly from Security Hub,
     * Config, or both. </p>
     */
    inline int GetEvidenceByTypeComplianceCheckIssuesCount() const{ return m_evidenceByTypeComplianceCheckIssuesCount; }
    inline bool EvidenceByTypeComplianceCheckIssuesCountHasBeenSet() const { return m_evidenceByTypeComplianceCheckIssuesCountHasBeenSet; }
    inline void SetEvidenceByTypeComplianceCheckIssuesCount(int value) { m_evidenceByTypeComplianceCheckIssuesCountHasBeenSet = true; m_evidenceByTypeComplianceCheckIssuesCount = value; }
    inline AssessmentEvidenceFolder& WithEvidenceByTypeComplianceCheckIssuesCount(int value) { SetEvidenceByTypeComplianceCheckIssuesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of evidence that falls under the user activity category. This
     * evidence is collected from CloudTrail logs. </p>
     */
    inline int GetEvidenceByTypeUserActivityCount() const{ return m_evidenceByTypeUserActivityCount; }
    inline bool EvidenceByTypeUserActivityCountHasBeenSet() const { return m_evidenceByTypeUserActivityCountHasBeenSet; }
    inline void SetEvidenceByTypeUserActivityCount(int value) { m_evidenceByTypeUserActivityCountHasBeenSet = true; m_evidenceByTypeUserActivityCount = value; }
    inline AssessmentEvidenceFolder& WithEvidenceByTypeUserActivityCount(int value) { SetEvidenceByTypeUserActivityCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of Amazon Web Services resources that were assessed to
     * generate the evidence. </p>
     */
    inline int GetEvidenceAwsServiceSourceCount() const{ return m_evidenceAwsServiceSourceCount; }
    inline bool EvidenceAwsServiceSourceCountHasBeenSet() const { return m_evidenceAwsServiceSourceCountHasBeenSet; }
    inline void SetEvidenceAwsServiceSourceCount(int value) { m_evidenceAwsServiceSourceCountHasBeenSet = true; m_evidenceAwsServiceSourceCount = value; }
    inline AssessmentEvidenceFolder& WithEvidenceAwsServiceSourceCount(int value) { SetEvidenceAwsServiceSourceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_author;
    bool m_authorHasBeenSet = false;

    int m_totalEvidence;
    bool m_totalEvidenceHasBeenSet = false;

    int m_assessmentReportSelectionCount;
    bool m_assessmentReportSelectionCountHasBeenSet = false;

    Aws::String m_controlName;
    bool m_controlNameHasBeenSet = false;

    int m_evidenceResourcesIncludedCount;
    bool m_evidenceResourcesIncludedCountHasBeenSet = false;

    int m_evidenceByTypeConfigurationDataCount;
    bool m_evidenceByTypeConfigurationDataCountHasBeenSet = false;

    int m_evidenceByTypeManualCount;
    bool m_evidenceByTypeManualCountHasBeenSet = false;

    int m_evidenceByTypeComplianceCheckCount;
    bool m_evidenceByTypeComplianceCheckCountHasBeenSet = false;

    int m_evidenceByTypeComplianceCheckIssuesCount;
    bool m_evidenceByTypeComplianceCheckIssuesCountHasBeenSet = false;

    int m_evidenceByTypeUserActivityCount;
    bool m_evidenceByTypeUserActivityCountHasBeenSet = false;

    int m_evidenceAwsServiceSourceCount;
    bool m_evidenceAwsServiceSourceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
