/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class CreateAssessmentReportRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API CreateAssessmentReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssessmentReport"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the new assessment report. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the new assessment report. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the new assessment report. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the new assessment report. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the new assessment report. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the new assessment report. </p>
     */
    inline CreateAssessmentReportRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the new assessment report. </p>
     */
    inline CreateAssessmentReportRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the new assessment report. </p>
     */
    inline CreateAssessmentReportRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the assessment report. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the assessment report. </p>
     */
    inline CreateAssessmentReportRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the assessment report. </p>
     */
    inline CreateAssessmentReportRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the assessment report. </p>
     */
    inline CreateAssessmentReportRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline CreateAssessmentReportRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline CreateAssessmentReportRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline CreateAssessmentReportRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p>A SQL statement that represents an evidence finder query.</p> <p>Provide this
     * parameter when you want to generate an assessment report from the results of an
     * evidence finder search query. When you use this parameter, Audit Manager
     * generates a one-time report using only the evidence from the query output. This
     * report does not include any assessment evidence that was manually <a
     * href="https://docs.aws.amazon.com/userguide/generate-assessment-report.html#generate-assessment-report-include-evidence">added
     * to a report using the console</a>, or <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_BatchAssociateAssessmentReportEvidence.html">associated
     * with a report using the API</a>. </p> <p>To use this parameter, the <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_EvidenceFinderSetup.html#auditmanager-Type-EvidenceFinderSetup-enablementStatus">enablementStatus</a>
     * of evidence finder must be <code>ENABLED</code>. </p> <p> For examples and help
     * resolving <code>queryStatement</code> validation exceptions, see <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/evidence-finder-issues.html#querystatement-exceptions">Troubleshooting
     * evidence finder issues</a> in the AWS Audit Manager User Guide. </p>
     */
    inline const Aws::String& GetQueryStatement() const{ return m_queryStatement; }

    /**
     * <p>A SQL statement that represents an evidence finder query.</p> <p>Provide this
     * parameter when you want to generate an assessment report from the results of an
     * evidence finder search query. When you use this parameter, Audit Manager
     * generates a one-time report using only the evidence from the query output. This
     * report does not include any assessment evidence that was manually <a
     * href="https://docs.aws.amazon.com/userguide/generate-assessment-report.html#generate-assessment-report-include-evidence">added
     * to a report using the console</a>, or <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_BatchAssociateAssessmentReportEvidence.html">associated
     * with a report using the API</a>. </p> <p>To use this parameter, the <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_EvidenceFinderSetup.html#auditmanager-Type-EvidenceFinderSetup-enablementStatus">enablementStatus</a>
     * of evidence finder must be <code>ENABLED</code>. </p> <p> For examples and help
     * resolving <code>queryStatement</code> validation exceptions, see <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/evidence-finder-issues.html#querystatement-exceptions">Troubleshooting
     * evidence finder issues</a> in the AWS Audit Manager User Guide. </p>
     */
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }

    /**
     * <p>A SQL statement that represents an evidence finder query.</p> <p>Provide this
     * parameter when you want to generate an assessment report from the results of an
     * evidence finder search query. When you use this parameter, Audit Manager
     * generates a one-time report using only the evidence from the query output. This
     * report does not include any assessment evidence that was manually <a
     * href="https://docs.aws.amazon.com/userguide/generate-assessment-report.html#generate-assessment-report-include-evidence">added
     * to a report using the console</a>, or <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_BatchAssociateAssessmentReportEvidence.html">associated
     * with a report using the API</a>. </p> <p>To use this parameter, the <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_EvidenceFinderSetup.html#auditmanager-Type-EvidenceFinderSetup-enablementStatus">enablementStatus</a>
     * of evidence finder must be <code>ENABLED</code>. </p> <p> For examples and help
     * resolving <code>queryStatement</code> validation exceptions, see <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/evidence-finder-issues.html#querystatement-exceptions">Troubleshooting
     * evidence finder issues</a> in the AWS Audit Manager User Guide. </p>
     */
    inline void SetQueryStatement(const Aws::String& value) { m_queryStatementHasBeenSet = true; m_queryStatement = value; }

    /**
     * <p>A SQL statement that represents an evidence finder query.</p> <p>Provide this
     * parameter when you want to generate an assessment report from the results of an
     * evidence finder search query. When you use this parameter, Audit Manager
     * generates a one-time report using only the evidence from the query output. This
     * report does not include any assessment evidence that was manually <a
     * href="https://docs.aws.amazon.com/userguide/generate-assessment-report.html#generate-assessment-report-include-evidence">added
     * to a report using the console</a>, or <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_BatchAssociateAssessmentReportEvidence.html">associated
     * with a report using the API</a>. </p> <p>To use this parameter, the <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_EvidenceFinderSetup.html#auditmanager-Type-EvidenceFinderSetup-enablementStatus">enablementStatus</a>
     * of evidence finder must be <code>ENABLED</code>. </p> <p> For examples and help
     * resolving <code>queryStatement</code> validation exceptions, see <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/evidence-finder-issues.html#querystatement-exceptions">Troubleshooting
     * evidence finder issues</a> in the AWS Audit Manager User Guide. </p>
     */
    inline void SetQueryStatement(Aws::String&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::move(value); }

    /**
     * <p>A SQL statement that represents an evidence finder query.</p> <p>Provide this
     * parameter when you want to generate an assessment report from the results of an
     * evidence finder search query. When you use this parameter, Audit Manager
     * generates a one-time report using only the evidence from the query output. This
     * report does not include any assessment evidence that was manually <a
     * href="https://docs.aws.amazon.com/userguide/generate-assessment-report.html#generate-assessment-report-include-evidence">added
     * to a report using the console</a>, or <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_BatchAssociateAssessmentReportEvidence.html">associated
     * with a report using the API</a>. </p> <p>To use this parameter, the <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_EvidenceFinderSetup.html#auditmanager-Type-EvidenceFinderSetup-enablementStatus">enablementStatus</a>
     * of evidence finder must be <code>ENABLED</code>. </p> <p> For examples and help
     * resolving <code>queryStatement</code> validation exceptions, see <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/evidence-finder-issues.html#querystatement-exceptions">Troubleshooting
     * evidence finder issues</a> in the AWS Audit Manager User Guide. </p>
     */
    inline void SetQueryStatement(const char* value) { m_queryStatementHasBeenSet = true; m_queryStatement.assign(value); }

    /**
     * <p>A SQL statement that represents an evidence finder query.</p> <p>Provide this
     * parameter when you want to generate an assessment report from the results of an
     * evidence finder search query. When you use this parameter, Audit Manager
     * generates a one-time report using only the evidence from the query output. This
     * report does not include any assessment evidence that was manually <a
     * href="https://docs.aws.amazon.com/userguide/generate-assessment-report.html#generate-assessment-report-include-evidence">added
     * to a report using the console</a>, or <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_BatchAssociateAssessmentReportEvidence.html">associated
     * with a report using the API</a>. </p> <p>To use this parameter, the <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_EvidenceFinderSetup.html#auditmanager-Type-EvidenceFinderSetup-enablementStatus">enablementStatus</a>
     * of evidence finder must be <code>ENABLED</code>. </p> <p> For examples and help
     * resolving <code>queryStatement</code> validation exceptions, see <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/evidence-finder-issues.html#querystatement-exceptions">Troubleshooting
     * evidence finder issues</a> in the AWS Audit Manager User Guide. </p>
     */
    inline CreateAssessmentReportRequest& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}

    /**
     * <p>A SQL statement that represents an evidence finder query.</p> <p>Provide this
     * parameter when you want to generate an assessment report from the results of an
     * evidence finder search query. When you use this parameter, Audit Manager
     * generates a one-time report using only the evidence from the query output. This
     * report does not include any assessment evidence that was manually <a
     * href="https://docs.aws.amazon.com/userguide/generate-assessment-report.html#generate-assessment-report-include-evidence">added
     * to a report using the console</a>, or <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_BatchAssociateAssessmentReportEvidence.html">associated
     * with a report using the API</a>. </p> <p>To use this parameter, the <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_EvidenceFinderSetup.html#auditmanager-Type-EvidenceFinderSetup-enablementStatus">enablementStatus</a>
     * of evidence finder must be <code>ENABLED</code>. </p> <p> For examples and help
     * resolving <code>queryStatement</code> validation exceptions, see <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/evidence-finder-issues.html#querystatement-exceptions">Troubleshooting
     * evidence finder issues</a> in the AWS Audit Manager User Guide. </p>
     */
    inline CreateAssessmentReportRequest& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}

    /**
     * <p>A SQL statement that represents an evidence finder query.</p> <p>Provide this
     * parameter when you want to generate an assessment report from the results of an
     * evidence finder search query. When you use this parameter, Audit Manager
     * generates a one-time report using only the evidence from the query output. This
     * report does not include any assessment evidence that was manually <a
     * href="https://docs.aws.amazon.com/userguide/generate-assessment-report.html#generate-assessment-report-include-evidence">added
     * to a report using the console</a>, or <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_BatchAssociateAssessmentReportEvidence.html">associated
     * with a report using the API</a>. </p> <p>To use this parameter, the <a
     * href="https://docs.aws.amazon.com/APIReference-evidenceFinder/API_EvidenceFinderSetup.html#auditmanager-Type-EvidenceFinderSetup-enablementStatus">enablementStatus</a>
     * of evidence finder must be <code>ENABLED</code>. </p> <p> For examples and help
     * resolving <code>queryStatement</code> validation exceptions, see <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/evidence-finder-issues.html#querystatement-exceptions">Troubleshooting
     * evidence finder issues</a> in the AWS Audit Manager User Guide. </p>
     */
    inline CreateAssessmentReportRequest& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
