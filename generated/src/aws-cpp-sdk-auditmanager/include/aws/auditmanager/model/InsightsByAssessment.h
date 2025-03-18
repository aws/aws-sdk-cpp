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
   * <p>A summary of the latest analytics data for a specific active assessment.</p>
   * <p>This summary is a snapshot of the data that was collected on the
   * <code>lastUpdated</code> date. It’s important to understand that the totals in
   * <code>InsightsByAssessment</code> are daily counts based on this date — they
   * aren’t a total sum to date. </p> <p>The <code>InsightsByAssessment</code> data
   * is eventually consistent. This means that when you read data from
   * <code>InsightsByAssessment</code>, the response might not instantly reflect the
   * results of a recently completed write or update operation. If you repeat your
   * read request after a few hours, the response returns the latest data.</p> 
   * <p>If you delete an assessment or change its status to inactive,
   * <code>InsightsByAssessment</code> includes data for that assessment as
   * follows.</p> <ul> <li> <p> <b>Inactive assessments</b> - If Audit Manager
   * collected evidence for your assessment before you changed it inactive, that
   * evidence is included in the <code>InsightsByAssessment</code> counts for that
   * day.</p> </li> <li> <p> <b>Deleted assessments</b> - If Audit Manager collected
   * evidence for your assessment before you deleted it, that evidence isn't included
   * in the <code>InsightsByAssessment</code> counts for that day.</p> </li> </ul>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/InsightsByAssessment">AWS
   * API Reference</a></p>
   */
  class InsightsByAssessment
  {
  public:
    AWS_AUDITMANAGER_API InsightsByAssessment() = default;
    AWS_AUDITMANAGER_API InsightsByAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API InsightsByAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * non-compliant. This includes evidence that was collected from Security Hub with
     * a <i>Fail</i> ruling, or collected from Config with a <i>Non-compliant</i>
     * ruling. </p>
     */
    inline int GetNoncompliantEvidenceCount() const { return m_noncompliantEvidenceCount; }
    inline bool NoncompliantEvidenceCountHasBeenSet() const { return m_noncompliantEvidenceCountHasBeenSet; }
    inline void SetNoncompliantEvidenceCount(int value) { m_noncompliantEvidenceCountHasBeenSet = true; m_noncompliantEvidenceCount = value; }
    inline InsightsByAssessment& WithNoncompliantEvidenceCount(int value) { SetNoncompliantEvidenceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * compliant. This includes evidence that was collected from Security Hub with a
     * <i>Pass</i> ruling, or collected from Config with a <i>Compliant</i> ruling.
     * </p>
     */
    inline int GetCompliantEvidenceCount() const { return m_compliantEvidenceCount; }
    inline bool CompliantEvidenceCountHasBeenSet() const { return m_compliantEvidenceCountHasBeenSet; }
    inline void SetCompliantEvidenceCount(int value) { m_compliantEvidenceCountHasBeenSet = true; m_compliantEvidenceCount = value; }
    inline InsightsByAssessment& WithCompliantEvidenceCount(int value) { SetCompliantEvidenceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of evidence without a compliance check ruling. Evidence is
     * inconclusive if the associated control uses Security Hub or Config as a data
     * source and you didn't enable those services. This is also the case if a control
     * uses a data source that doesn’t support compliance checks (for example, manual
     * evidence, API calls, or CloudTrail). </p>  <p>If evidence has a compliance
     * check status of <i>not applicable</i>, it's classified as <i>inconclusive</i> in
     * <code>InsightsByAssessment</code> data.</p> 
     */
    inline int GetInconclusiveEvidenceCount() const { return m_inconclusiveEvidenceCount; }
    inline bool InconclusiveEvidenceCountHasBeenSet() const { return m_inconclusiveEvidenceCountHasBeenSet; }
    inline void SetInconclusiveEvidenceCount(int value) { m_inconclusiveEvidenceCountHasBeenSet = true; m_inconclusiveEvidenceCount = value; }
    inline InsightsByAssessment& WithInconclusiveEvidenceCount(int value) { SetInconclusiveEvidenceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of assessment controls that collected non-compliant evidence on
     * the <code>lastUpdated</code> date. </p>
     */
    inline int GetAssessmentControlsCountByNoncompliantEvidence() const { return m_assessmentControlsCountByNoncompliantEvidence; }
    inline bool AssessmentControlsCountByNoncompliantEvidenceHasBeenSet() const { return m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet; }
    inline void SetAssessmentControlsCountByNoncompliantEvidence(int value) { m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet = true; m_assessmentControlsCountByNoncompliantEvidence = value; }
    inline InsightsByAssessment& WithAssessmentControlsCountByNoncompliantEvidence(int value) { SetAssessmentControlsCountByNoncompliantEvidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of controls in the assessment. </p>
     */
    inline int GetTotalAssessmentControlsCount() const { return m_totalAssessmentControlsCount; }
    inline bool TotalAssessmentControlsCountHasBeenSet() const { return m_totalAssessmentControlsCountHasBeenSet; }
    inline void SetTotalAssessmentControlsCount(int value) { m_totalAssessmentControlsCountHasBeenSet = true; m_totalAssessmentControlsCount = value; }
    inline InsightsByAssessment& WithTotalAssessmentControlsCount(int value) { SetTotalAssessmentControlsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the assessment insights were last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    InsightsByAssessment& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}
  private:

    int m_noncompliantEvidenceCount{0};
    bool m_noncompliantEvidenceCountHasBeenSet = false;

    int m_compliantEvidenceCount{0};
    bool m_compliantEvidenceCountHasBeenSet = false;

    int m_inconclusiveEvidenceCount{0};
    bool m_inconclusiveEvidenceCountHasBeenSet = false;

    int m_assessmentControlsCountByNoncompliantEvidence{0};
    bool m_assessmentControlsCountByNoncompliantEvidenceHasBeenSet = false;

    int m_totalAssessmentControlsCount{0};
    bool m_totalAssessmentControlsCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
