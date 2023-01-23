/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
   * <p>A summary of the latest analytics data for all your active assessments. </p>
   * <p>This summary is a snapshot of the data that your active assessments collected
   * on the <code>lastUpdated</code> date. It’s important to understand that the
   * following totals are daily counts based on this date — they aren’t a total sum
   * to date. </p> <p>The <code>Insights</code> data is eventually consistent. This
   * means that, when you read data from <code>Insights</code>, the response might
   * not instantly reflect the results of a recently completed write or update
   * operation. If you repeat your read request after a few hours, the response
   * should return the latest data.</p>  <p>If you delete an assessment or
   * change its status to inactive, <code>InsightsByAssessment</code> includes data
   * for that assessment as follows.</p> <ul> <li> <p> <b>Inactive assessments</b> -
   * If Audit Manager collected evidence for your assessment before you changed it
   * inactive, that evidence is included in the <code>InsightsByAssessment</code>
   * counts for that day.</p> </li> <li> <p> <b>Deleted assessments</b> - If Audit
   * Manager collected evidence for your assessment before you deleted it, that
   * evidence isn't included in the <code>InsightsByAssessment</code> counts for that
   * day.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Insights">AWS
   * API Reference</a></p>
   */
  class Insights
  {
  public:
    AWS_AUDITMANAGER_API Insights();
    AWS_AUDITMANAGER_API Insights(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Insights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of active assessments in Audit Manager. </p>
     */
    inline int GetActiveAssessmentsCount() const{ return m_activeAssessmentsCount; }

    /**
     * <p>The number of active assessments in Audit Manager. </p>
     */
    inline bool ActiveAssessmentsCountHasBeenSet() const { return m_activeAssessmentsCountHasBeenSet; }

    /**
     * <p>The number of active assessments in Audit Manager. </p>
     */
    inline void SetActiveAssessmentsCount(int value) { m_activeAssessmentsCountHasBeenSet = true; m_activeAssessmentsCount = value; }

    /**
     * <p>The number of active assessments in Audit Manager. </p>
     */
    inline Insights& WithActiveAssessmentsCount(int value) { SetActiveAssessmentsCount(value); return *this;}


    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * non-compliant on the <code>lastUpdated</code> date. This includes evidence that
     * was collected from Security Hub with a <i>Fail</i> ruling, or collected from
     * Config with a <i>Non-compliant</i> ruling. </p>
     */
    inline int GetNoncompliantEvidenceCount() const{ return m_noncompliantEvidenceCount; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * non-compliant on the <code>lastUpdated</code> date. This includes evidence that
     * was collected from Security Hub with a <i>Fail</i> ruling, or collected from
     * Config with a <i>Non-compliant</i> ruling. </p>
     */
    inline bool NoncompliantEvidenceCountHasBeenSet() const { return m_noncompliantEvidenceCountHasBeenSet; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * non-compliant on the <code>lastUpdated</code> date. This includes evidence that
     * was collected from Security Hub with a <i>Fail</i> ruling, or collected from
     * Config with a <i>Non-compliant</i> ruling. </p>
     */
    inline void SetNoncompliantEvidenceCount(int value) { m_noncompliantEvidenceCountHasBeenSet = true; m_noncompliantEvidenceCount = value; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * non-compliant on the <code>lastUpdated</code> date. This includes evidence that
     * was collected from Security Hub with a <i>Fail</i> ruling, or collected from
     * Config with a <i>Non-compliant</i> ruling. </p>
     */
    inline Insights& WithNoncompliantEvidenceCount(int value) { SetNoncompliantEvidenceCount(value); return *this;}


    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * compliant on the <code>lastUpdated</code> date. This includes evidence that was
     * collected from Security Hub with a <i>Pass</i> ruling, or collected from Config
     * with a <i>Compliant</i> ruling. </p>
     */
    inline int GetCompliantEvidenceCount() const{ return m_compliantEvidenceCount; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * compliant on the <code>lastUpdated</code> date. This includes evidence that was
     * collected from Security Hub with a <i>Pass</i> ruling, or collected from Config
     * with a <i>Compliant</i> ruling. </p>
     */
    inline bool CompliantEvidenceCountHasBeenSet() const { return m_compliantEvidenceCountHasBeenSet; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * compliant on the <code>lastUpdated</code> date. This includes evidence that was
     * collected from Security Hub with a <i>Pass</i> ruling, or collected from Config
     * with a <i>Compliant</i> ruling. </p>
     */
    inline void SetCompliantEvidenceCount(int value) { m_compliantEvidenceCountHasBeenSet = true; m_compliantEvidenceCount = value; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * compliant on the <code>lastUpdated</code> date. This includes evidence that was
     * collected from Security Hub with a <i>Pass</i> ruling, or collected from Config
     * with a <i>Compliant</i> ruling. </p>
     */
    inline Insights& WithCompliantEvidenceCount(int value) { SetCompliantEvidenceCount(value); return *this;}


    /**
     * <p>The number of evidence without a compliance check ruling. Evidence is
     * inconclusive when the associated control uses Security Hub or Config as a data
     * source but you didn't enable those services. This is also the case when a
     * control uses a data source that doesn’t support compliance checks (for example:
     * manual evidence, API calls, or CloudTrail). </p>  <p>If evidence has a
     * compliance check status of <i>not applicable</i>, it's classed as
     * <i>inconclusive</i> in <code>Insights</code> data.</p> 
     */
    inline int GetInconclusiveEvidenceCount() const{ return m_inconclusiveEvidenceCount; }

    /**
     * <p>The number of evidence without a compliance check ruling. Evidence is
     * inconclusive when the associated control uses Security Hub or Config as a data
     * source but you didn't enable those services. This is also the case when a
     * control uses a data source that doesn’t support compliance checks (for example:
     * manual evidence, API calls, or CloudTrail). </p>  <p>If evidence has a
     * compliance check status of <i>not applicable</i>, it's classed as
     * <i>inconclusive</i> in <code>Insights</code> data.</p> 
     */
    inline bool InconclusiveEvidenceCountHasBeenSet() const { return m_inconclusiveEvidenceCountHasBeenSet; }

    /**
     * <p>The number of evidence without a compliance check ruling. Evidence is
     * inconclusive when the associated control uses Security Hub or Config as a data
     * source but you didn't enable those services. This is also the case when a
     * control uses a data source that doesn’t support compliance checks (for example:
     * manual evidence, API calls, or CloudTrail). </p>  <p>If evidence has a
     * compliance check status of <i>not applicable</i>, it's classed as
     * <i>inconclusive</i> in <code>Insights</code> data.</p> 
     */
    inline void SetInconclusiveEvidenceCount(int value) { m_inconclusiveEvidenceCountHasBeenSet = true; m_inconclusiveEvidenceCount = value; }

    /**
     * <p>The number of evidence without a compliance check ruling. Evidence is
     * inconclusive when the associated control uses Security Hub or Config as a data
     * source but you didn't enable those services. This is also the case when a
     * control uses a data source that doesn’t support compliance checks (for example:
     * manual evidence, API calls, or CloudTrail). </p>  <p>If evidence has a
     * compliance check status of <i>not applicable</i>, it's classed as
     * <i>inconclusive</i> in <code>Insights</code> data.</p> 
     */
    inline Insights& WithInconclusiveEvidenceCount(int value) { SetInconclusiveEvidenceCount(value); return *this;}


    /**
     * <p>The number of assessment controls that collected non-compliant evidence on
     * the <code>lastUpdated</code> date. </p>
     */
    inline int GetAssessmentControlsCountByNoncompliantEvidence() const{ return m_assessmentControlsCountByNoncompliantEvidence; }

    /**
     * <p>The number of assessment controls that collected non-compliant evidence on
     * the <code>lastUpdated</code> date. </p>
     */
    inline bool AssessmentControlsCountByNoncompliantEvidenceHasBeenSet() const { return m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet; }

    /**
     * <p>The number of assessment controls that collected non-compliant evidence on
     * the <code>lastUpdated</code> date. </p>
     */
    inline void SetAssessmentControlsCountByNoncompliantEvidence(int value) { m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet = true; m_assessmentControlsCountByNoncompliantEvidence = value; }

    /**
     * <p>The number of assessment controls that collected non-compliant evidence on
     * the <code>lastUpdated</code> date. </p>
     */
    inline Insights& WithAssessmentControlsCountByNoncompliantEvidence(int value) { SetAssessmentControlsCountByNoncompliantEvidence(value); return *this;}


    /**
     * <p>The total number of controls across all active assessments. </p>
     */
    inline int GetTotalAssessmentControlsCount() const{ return m_totalAssessmentControlsCount; }

    /**
     * <p>The total number of controls across all active assessments. </p>
     */
    inline bool TotalAssessmentControlsCountHasBeenSet() const { return m_totalAssessmentControlsCountHasBeenSet; }

    /**
     * <p>The total number of controls across all active assessments. </p>
     */
    inline void SetTotalAssessmentControlsCount(int value) { m_totalAssessmentControlsCountHasBeenSet = true; m_totalAssessmentControlsCount = value; }

    /**
     * <p>The total number of controls across all active assessments. </p>
     */
    inline Insights& WithTotalAssessmentControlsCount(int value) { SetTotalAssessmentControlsCount(value); return *this;}


    /**
     * <p>The time when the cross-assessment insights were last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time when the cross-assessment insights were last updated. </p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The time when the cross-assessment insights were last updated. </p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time when the cross-assessment insights were last updated. </p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time when the cross-assessment insights were last updated. </p>
     */
    inline Insights& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time when the cross-assessment insights were last updated. </p>
     */
    inline Insights& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    int m_activeAssessmentsCount;
    bool m_activeAssessmentsCountHasBeenSet = false;

    int m_noncompliantEvidenceCount;
    bool m_noncompliantEvidenceCountHasBeenSet = false;

    int m_compliantEvidenceCount;
    bool m_compliantEvidenceCountHasBeenSet = false;

    int m_inconclusiveEvidenceCount;
    bool m_inconclusiveEvidenceCountHasBeenSet = false;

    int m_assessmentControlsCountByNoncompliantEvidence;
    bool m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet = false;

    int m_totalAssessmentControlsCount;
    bool m_totalAssessmentControlsCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
