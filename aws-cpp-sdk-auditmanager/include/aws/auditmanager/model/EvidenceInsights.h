/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>

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
   * <p>A breakdown of the latest compliance check status for the evidence in your
   * Audit Manager assessments. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/EvidenceInsights">AWS
   * API Reference</a></p>
   */
  class EvidenceInsights
  {
  public:
    AWS_AUDITMANAGER_API EvidenceInsights();
    AWS_AUDITMANAGER_API EvidenceInsights(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API EvidenceInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * non-compliant. This includes evidence that was collected from Security Hub with
     * a <i>Fail</i> ruling, or collected from Config with a <i>Non-compliant</i>
     * ruling. </p>
     */
    inline int GetNoncompliantEvidenceCount() const{ return m_noncompliantEvidenceCount; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * non-compliant. This includes evidence that was collected from Security Hub with
     * a <i>Fail</i> ruling, or collected from Config with a <i>Non-compliant</i>
     * ruling. </p>
     */
    inline bool NoncompliantEvidenceCountHasBeenSet() const { return m_noncompliantEvidenceCountHasBeenSet; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * non-compliant. This includes evidence that was collected from Security Hub with
     * a <i>Fail</i> ruling, or collected from Config with a <i>Non-compliant</i>
     * ruling. </p>
     */
    inline void SetNoncompliantEvidenceCount(int value) { m_noncompliantEvidenceCountHasBeenSet = true; m_noncompliantEvidenceCount = value; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * non-compliant. This includes evidence that was collected from Security Hub with
     * a <i>Fail</i> ruling, or collected from Config with a <i>Non-compliant</i>
     * ruling. </p>
     */
    inline EvidenceInsights& WithNoncompliantEvidenceCount(int value) { SetNoncompliantEvidenceCount(value); return *this;}


    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * compliant. This includes evidence that was collected from Security Hub with a
     * <i>Pass</i> ruling, or collected from Config with a <i>Compliant</i> ruling.
     * </p>
     */
    inline int GetCompliantEvidenceCount() const{ return m_compliantEvidenceCount; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * compliant. This includes evidence that was collected from Security Hub with a
     * <i>Pass</i> ruling, or collected from Config with a <i>Compliant</i> ruling.
     * </p>
     */
    inline bool CompliantEvidenceCountHasBeenSet() const { return m_compliantEvidenceCountHasBeenSet; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * compliant. This includes evidence that was collected from Security Hub with a
     * <i>Pass</i> ruling, or collected from Config with a <i>Compliant</i> ruling.
     * </p>
     */
    inline void SetCompliantEvidenceCount(int value) { m_compliantEvidenceCountHasBeenSet = true; m_compliantEvidenceCount = value; }

    /**
     * <p>The number of compliance check evidence that Audit Manager classified as
     * compliant. This includes evidence that was collected from Security Hub with a
     * <i>Pass</i> ruling, or collected from Config with a <i>Compliant</i> ruling.
     * </p>
     */
    inline EvidenceInsights& WithCompliantEvidenceCount(int value) { SetCompliantEvidenceCount(value); return *this;}


    /**
     * <p>The number of evidence that a compliance check ruling isn't available for.
     * Evidence is inconclusive when the associated control uses Security Hub or Config
     * as a data source but you didn't enable those services. This is also the case
     * when a control uses a data source that doesn’t support compliance checks (for
     * example, manual evidence, API calls, or CloudTrail). </p>  <p>If evidence
     * has a compliance check status of <i>not applicable</i> in the console, it's
     * classified as <i>inconclusive</i> in <code>EvidenceInsights</code> data.</p>
     * 
     */
    inline int GetInconclusiveEvidenceCount() const{ return m_inconclusiveEvidenceCount; }

    /**
     * <p>The number of evidence that a compliance check ruling isn't available for.
     * Evidence is inconclusive when the associated control uses Security Hub or Config
     * as a data source but you didn't enable those services. This is also the case
     * when a control uses a data source that doesn’t support compliance checks (for
     * example, manual evidence, API calls, or CloudTrail). </p>  <p>If evidence
     * has a compliance check status of <i>not applicable</i> in the console, it's
     * classified as <i>inconclusive</i> in <code>EvidenceInsights</code> data.</p>
     * 
     */
    inline bool InconclusiveEvidenceCountHasBeenSet() const { return m_inconclusiveEvidenceCountHasBeenSet; }

    /**
     * <p>The number of evidence that a compliance check ruling isn't available for.
     * Evidence is inconclusive when the associated control uses Security Hub or Config
     * as a data source but you didn't enable those services. This is also the case
     * when a control uses a data source that doesn’t support compliance checks (for
     * example, manual evidence, API calls, or CloudTrail). </p>  <p>If evidence
     * has a compliance check status of <i>not applicable</i> in the console, it's
     * classified as <i>inconclusive</i> in <code>EvidenceInsights</code> data.</p>
     * 
     */
    inline void SetInconclusiveEvidenceCount(int value) { m_inconclusiveEvidenceCountHasBeenSet = true; m_inconclusiveEvidenceCount = value; }

    /**
     * <p>The number of evidence that a compliance check ruling isn't available for.
     * Evidence is inconclusive when the associated control uses Security Hub or Config
     * as a data source but you didn't enable those services. This is also the case
     * when a control uses a data source that doesn’t support compliance checks (for
     * example, manual evidence, API calls, or CloudTrail). </p>  <p>If evidence
     * has a compliance check status of <i>not applicable</i> in the console, it's
     * classified as <i>inconclusive</i> in <code>EvidenceInsights</code> data.</p>
     * 
     */
    inline EvidenceInsights& WithInconclusiveEvidenceCount(int value) { SetInconclusiveEvidenceCount(value); return *this;}

  private:

    int m_noncompliantEvidenceCount;
    bool m_noncompliantEvidenceCountHasBeenSet = false;

    int m_compliantEvidenceCount;
    bool m_compliantEvidenceCountHasBeenSet = false;

    int m_inconclusiveEvidenceCount;
    bool m_inconclusiveEvidenceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
