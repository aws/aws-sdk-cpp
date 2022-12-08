/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides the details about the compliance status for a patch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSsmComplianceSummary">AWS
   * API Reference</a></p>
   */
  class AwsSsmComplianceSummary
  {
  public:
    AWS_SECURITYHUB_API AwsSsmComplianceSummary();
    AWS_SECURITYHUB_API AwsSsmComplianceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSsmComplianceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current patch compliance status. Valid values are as follows:</p> <ul>
     * <li> <p> <code>COMPLIANT</code> </p> </li> <li> <p> <code>NON_COMPLIANT</code>
     * </p> </li> <li> <p> <code>UNSPECIFIED_DATA</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current patch compliance status. Valid values are as follows:</p> <ul>
     * <li> <p> <code>COMPLIANT</code> </p> </li> <li> <p> <code>NON_COMPLIANT</code>
     * </p> </li> <li> <p> <code>UNSPECIFIED_DATA</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current patch compliance status. Valid values are as follows:</p> <ul>
     * <li> <p> <code>COMPLIANT</code> </p> </li> <li> <p> <code>NON_COMPLIANT</code>
     * </p> </li> <li> <p> <code>UNSPECIFIED_DATA</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current patch compliance status. Valid values are as follows:</p> <ul>
     * <li> <p> <code>COMPLIANT</code> </p> </li> <li> <p> <code>NON_COMPLIANT</code>
     * </p> </li> <li> <p> <code>UNSPECIFIED_DATA</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current patch compliance status. Valid values are as follows:</p> <ul>
     * <li> <p> <code>COMPLIANT</code> </p> </li> <li> <p> <code>NON_COMPLIANT</code>
     * </p> </li> <li> <p> <code>UNSPECIFIED_DATA</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current patch compliance status. Valid values are as follows:</p> <ul>
     * <li> <p> <code>COMPLIANT</code> </p> </li> <li> <p> <code>NON_COMPLIANT</code>
     * </p> </li> <li> <p> <code>UNSPECIFIED_DATA</code> </p> </li> </ul>
     */
    inline AwsSsmComplianceSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current patch compliance status. Valid values are as follows:</p> <ul>
     * <li> <p> <code>COMPLIANT</code> </p> </li> <li> <p> <code>NON_COMPLIANT</code>
     * </p> </li> <li> <p> <code>UNSPECIFIED_DATA</code> </p> </li> </ul>
     */
    inline AwsSsmComplianceSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current patch compliance status. Valid values are as follows:</p> <ul>
     * <li> <p> <code>COMPLIANT</code> </p> </li> <li> <p> <code>NON_COMPLIANT</code>
     * </p> </li> <li> <p> <code>UNSPECIFIED_DATA</code> </p> </li> </ul>
     */
    inline AwsSsmComplianceSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>CRITICAL</code>.</p>
     */
    inline int GetCompliantCriticalCount() const{ return m_compliantCriticalCount; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>CRITICAL</code>.</p>
     */
    inline bool CompliantCriticalCountHasBeenSet() const { return m_compliantCriticalCountHasBeenSet; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>CRITICAL</code>.</p>
     */
    inline void SetCompliantCriticalCount(int value) { m_compliantCriticalCountHasBeenSet = true; m_compliantCriticalCount = value; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>CRITICAL</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithCompliantCriticalCount(int value) { SetCompliantCriticalCount(value); return *this;}


    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline int GetCompliantHighCount() const{ return m_compliantHighCount; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline bool CompliantHighCountHasBeenSet() const { return m_compliantHighCountHasBeenSet; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline void SetCompliantHighCount(int value) { m_compliantHighCountHasBeenSet = true; m_compliantHighCount = value; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithCompliantHighCount(int value) { SetCompliantHighCount(value); return *this;}


    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline int GetCompliantMediumCount() const{ return m_compliantMediumCount; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline bool CompliantMediumCountHasBeenSet() const { return m_compliantMediumCountHasBeenSet; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline void SetCompliantMediumCount(int value) { m_compliantMediumCountHasBeenSet = true; m_compliantMediumCount = value; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithCompliantMediumCount(int value) { SetCompliantMediumCount(value); return *this;}


    /**
     * <p>The type of execution that was used determine compliance.</p>
     */
    inline const Aws::String& GetExecutionType() const{ return m_executionType; }

    /**
     * <p>The type of execution that was used determine compliance.</p>
     */
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }

    /**
     * <p>The type of execution that was used determine compliance.</p>
     */
    inline void SetExecutionType(const Aws::String& value) { m_executionTypeHasBeenSet = true; m_executionType = value; }

    /**
     * <p>The type of execution that was used determine compliance.</p>
     */
    inline void SetExecutionType(Aws::String&& value) { m_executionTypeHasBeenSet = true; m_executionType = std::move(value); }

    /**
     * <p>The type of execution that was used determine compliance.</p>
     */
    inline void SetExecutionType(const char* value) { m_executionTypeHasBeenSet = true; m_executionType.assign(value); }

    /**
     * <p>The type of execution that was used determine compliance.</p>
     */
    inline AwsSsmComplianceSummary& WithExecutionType(const Aws::String& value) { SetExecutionType(value); return *this;}

    /**
     * <p>The type of execution that was used determine compliance.</p>
     */
    inline AwsSsmComplianceSummary& WithExecutionType(Aws::String&& value) { SetExecutionType(std::move(value)); return *this;}

    /**
     * <p>The type of execution that was used determine compliance.</p>
     */
    inline AwsSsmComplianceSummary& WithExecutionType(const char* value) { SetExecutionType(value); return *this;}


    /**
     * <p>For the patch items that are noncompliant, the number of items that have a
     * severity of <code>CRITICAL</code>.</p>
     */
    inline int GetNonCompliantCriticalCount() const{ return m_nonCompliantCriticalCount; }

    /**
     * <p>For the patch items that are noncompliant, the number of items that have a
     * severity of <code>CRITICAL</code>.</p>
     */
    inline bool NonCompliantCriticalCountHasBeenSet() const { return m_nonCompliantCriticalCountHasBeenSet; }

    /**
     * <p>For the patch items that are noncompliant, the number of items that have a
     * severity of <code>CRITICAL</code>.</p>
     */
    inline void SetNonCompliantCriticalCount(int value) { m_nonCompliantCriticalCountHasBeenSet = true; m_nonCompliantCriticalCount = value; }

    /**
     * <p>For the patch items that are noncompliant, the number of items that have a
     * severity of <code>CRITICAL</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithNonCompliantCriticalCount(int value) { SetNonCompliantCriticalCount(value); return *this;}


    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline int GetCompliantInformationalCount() const{ return m_compliantInformationalCount; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline bool CompliantInformationalCountHasBeenSet() const { return m_compliantInformationalCountHasBeenSet; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline void SetCompliantInformationalCount(int value) { m_compliantInformationalCountHasBeenSet = true; m_compliantInformationalCount = value; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithCompliantInformationalCount(int value) { SetCompliantInformationalCount(value); return *this;}


    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline int GetNonCompliantInformationalCount() const{ return m_nonCompliantInformationalCount; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline bool NonCompliantInformationalCountHasBeenSet() const { return m_nonCompliantInformationalCountHasBeenSet; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline void SetNonCompliantInformationalCount(int value) { m_nonCompliantInformationalCountHasBeenSet = true; m_nonCompliantInformationalCount = value; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>INFORMATIONAL</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithNonCompliantInformationalCount(int value) { SetNonCompliantInformationalCount(value); return *this;}


    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline int GetCompliantUnspecifiedCount() const{ return m_compliantUnspecifiedCount; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline bool CompliantUnspecifiedCountHasBeenSet() const { return m_compliantUnspecifiedCountHasBeenSet; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline void SetCompliantUnspecifiedCount(int value) { m_compliantUnspecifiedCountHasBeenSet = true; m_compliantUnspecifiedCount = value; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithCompliantUnspecifiedCount(int value) { SetCompliantUnspecifiedCount(value); return *this;}


    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline int GetNonCompliantLowCount() const{ return m_nonCompliantLowCount; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline bool NonCompliantLowCountHasBeenSet() const { return m_nonCompliantLowCountHasBeenSet; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline void SetNonCompliantLowCount(int value) { m_nonCompliantLowCountHasBeenSet = true; m_nonCompliantLowCount = value; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithNonCompliantLowCount(int value) { SetNonCompliantLowCount(value); return *this;}


    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline int GetNonCompliantHighCount() const{ return m_nonCompliantHighCount; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline bool NonCompliantHighCountHasBeenSet() const { return m_nonCompliantHighCountHasBeenSet; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline void SetNonCompliantHighCount(int value) { m_nonCompliantHighCountHasBeenSet = true; m_nonCompliantHighCount = value; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>HIGH</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithNonCompliantHighCount(int value) { SetNonCompliantHighCount(value); return *this;}


    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline int GetCompliantLowCount() const{ return m_compliantLowCount; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline bool CompliantLowCountHasBeenSet() const { return m_compliantLowCountHasBeenSet; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline void SetCompliantLowCount(int value) { m_compliantLowCountHasBeenSet = true; m_compliantLowCount = value; }

    /**
     * <p>For the patches that are compliant, the number that have a severity of
     * <code>LOW</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithCompliantLowCount(int value) { SetCompliantLowCount(value); return *this;}


    /**
     * <p>The type of resource for which the compliance was determined. For
     * <code>AwsSsmPatchCompliance</code>, <code>ComplianceType</code> is
     * <code>Patch</code>. </p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>The type of resource for which the compliance was determined. For
     * <code>AwsSsmPatchCompliance</code>, <code>ComplianceType</code> is
     * <code>Patch</code>. </p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>The type of resource for which the compliance was determined. For
     * <code>AwsSsmPatchCompliance</code>, <code>ComplianceType</code> is
     * <code>Patch</code>. </p>
     */
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>The type of resource for which the compliance was determined. For
     * <code>AwsSsmPatchCompliance</code>, <code>ComplianceType</code> is
     * <code>Patch</code>. </p>
     */
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>The type of resource for which the compliance was determined. For
     * <code>AwsSsmPatchCompliance</code>, <code>ComplianceType</code> is
     * <code>Patch</code>. </p>
     */
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }

    /**
     * <p>The type of resource for which the compliance was determined. For
     * <code>AwsSsmPatchCompliance</code>, <code>ComplianceType</code> is
     * <code>Patch</code>. </p>
     */
    inline AwsSsmComplianceSummary& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The type of resource for which the compliance was determined. For
     * <code>AwsSsmPatchCompliance</code>, <code>ComplianceType</code> is
     * <code>Patch</code>. </p>
     */
    inline AwsSsmComplianceSummary& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource for which the compliance was determined. For
     * <code>AwsSsmPatchCompliance</code>, <code>ComplianceType</code> is
     * <code>Patch</code>. </p>
     */
    inline AwsSsmComplianceSummary& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}


    /**
     * <p>The identifier of the patch baseline. The patch baseline lists the patches
     * that are approved for installation.</p>
     */
    inline const Aws::String& GetPatchBaselineId() const{ return m_patchBaselineId; }

    /**
     * <p>The identifier of the patch baseline. The patch baseline lists the patches
     * that are approved for installation.</p>
     */
    inline bool PatchBaselineIdHasBeenSet() const { return m_patchBaselineIdHasBeenSet; }

    /**
     * <p>The identifier of the patch baseline. The patch baseline lists the patches
     * that are approved for installation.</p>
     */
    inline void SetPatchBaselineId(const Aws::String& value) { m_patchBaselineIdHasBeenSet = true; m_patchBaselineId = value; }

    /**
     * <p>The identifier of the patch baseline. The patch baseline lists the patches
     * that are approved for installation.</p>
     */
    inline void SetPatchBaselineId(Aws::String&& value) { m_patchBaselineIdHasBeenSet = true; m_patchBaselineId = std::move(value); }

    /**
     * <p>The identifier of the patch baseline. The patch baseline lists the patches
     * that are approved for installation.</p>
     */
    inline void SetPatchBaselineId(const char* value) { m_patchBaselineIdHasBeenSet = true; m_patchBaselineId.assign(value); }

    /**
     * <p>The identifier of the patch baseline. The patch baseline lists the patches
     * that are approved for installation.</p>
     */
    inline AwsSsmComplianceSummary& WithPatchBaselineId(const Aws::String& value) { SetPatchBaselineId(value); return *this;}

    /**
     * <p>The identifier of the patch baseline. The patch baseline lists the patches
     * that are approved for installation.</p>
     */
    inline AwsSsmComplianceSummary& WithPatchBaselineId(Aws::String&& value) { SetPatchBaselineId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the patch baseline. The patch baseline lists the patches
     * that are approved for installation.</p>
     */
    inline AwsSsmComplianceSummary& WithPatchBaselineId(const char* value) { SetPatchBaselineId(value); return *this;}


    /**
     * <p>The highest severity for the patches. Valid values are as follows:</p> <ul>
     * <li> <p> <code>CRITICAL</code> </p> </li> <li> <p> <code>HIGH</code> </p> </li>
     * <li> <p> <code>MEDIUM</code> </p> </li> <li> <p> <code>LOW</code> </p> </li>
     * <li> <p> <code>INFORMATIONAL</code> </p> </li> <li> <p> <code>UNSPECIFIED</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetOverallSeverity() const{ return m_overallSeverity; }

    /**
     * <p>The highest severity for the patches. Valid values are as follows:</p> <ul>
     * <li> <p> <code>CRITICAL</code> </p> </li> <li> <p> <code>HIGH</code> </p> </li>
     * <li> <p> <code>MEDIUM</code> </p> </li> <li> <p> <code>LOW</code> </p> </li>
     * <li> <p> <code>INFORMATIONAL</code> </p> </li> <li> <p> <code>UNSPECIFIED</code>
     * </p> </li> </ul>
     */
    inline bool OverallSeverityHasBeenSet() const { return m_overallSeverityHasBeenSet; }

    /**
     * <p>The highest severity for the patches. Valid values are as follows:</p> <ul>
     * <li> <p> <code>CRITICAL</code> </p> </li> <li> <p> <code>HIGH</code> </p> </li>
     * <li> <p> <code>MEDIUM</code> </p> </li> <li> <p> <code>LOW</code> </p> </li>
     * <li> <p> <code>INFORMATIONAL</code> </p> </li> <li> <p> <code>UNSPECIFIED</code>
     * </p> </li> </ul>
     */
    inline void SetOverallSeverity(const Aws::String& value) { m_overallSeverityHasBeenSet = true; m_overallSeverity = value; }

    /**
     * <p>The highest severity for the patches. Valid values are as follows:</p> <ul>
     * <li> <p> <code>CRITICAL</code> </p> </li> <li> <p> <code>HIGH</code> </p> </li>
     * <li> <p> <code>MEDIUM</code> </p> </li> <li> <p> <code>LOW</code> </p> </li>
     * <li> <p> <code>INFORMATIONAL</code> </p> </li> <li> <p> <code>UNSPECIFIED</code>
     * </p> </li> </ul>
     */
    inline void SetOverallSeverity(Aws::String&& value) { m_overallSeverityHasBeenSet = true; m_overallSeverity = std::move(value); }

    /**
     * <p>The highest severity for the patches. Valid values are as follows:</p> <ul>
     * <li> <p> <code>CRITICAL</code> </p> </li> <li> <p> <code>HIGH</code> </p> </li>
     * <li> <p> <code>MEDIUM</code> </p> </li> <li> <p> <code>LOW</code> </p> </li>
     * <li> <p> <code>INFORMATIONAL</code> </p> </li> <li> <p> <code>UNSPECIFIED</code>
     * </p> </li> </ul>
     */
    inline void SetOverallSeverity(const char* value) { m_overallSeverityHasBeenSet = true; m_overallSeverity.assign(value); }

    /**
     * <p>The highest severity for the patches. Valid values are as follows:</p> <ul>
     * <li> <p> <code>CRITICAL</code> </p> </li> <li> <p> <code>HIGH</code> </p> </li>
     * <li> <p> <code>MEDIUM</code> </p> </li> <li> <p> <code>LOW</code> </p> </li>
     * <li> <p> <code>INFORMATIONAL</code> </p> </li> <li> <p> <code>UNSPECIFIED</code>
     * </p> </li> </ul>
     */
    inline AwsSsmComplianceSummary& WithOverallSeverity(const Aws::String& value) { SetOverallSeverity(value); return *this;}

    /**
     * <p>The highest severity for the patches. Valid values are as follows:</p> <ul>
     * <li> <p> <code>CRITICAL</code> </p> </li> <li> <p> <code>HIGH</code> </p> </li>
     * <li> <p> <code>MEDIUM</code> </p> </li> <li> <p> <code>LOW</code> </p> </li>
     * <li> <p> <code>INFORMATIONAL</code> </p> </li> <li> <p> <code>UNSPECIFIED</code>
     * </p> </li> </ul>
     */
    inline AwsSsmComplianceSummary& WithOverallSeverity(Aws::String&& value) { SetOverallSeverity(std::move(value)); return *this;}

    /**
     * <p>The highest severity for the patches. Valid values are as follows:</p> <ul>
     * <li> <p> <code>CRITICAL</code> </p> </li> <li> <p> <code>HIGH</code> </p> </li>
     * <li> <p> <code>MEDIUM</code> </p> </li> <li> <p> <code>LOW</code> </p> </li>
     * <li> <p> <code>INFORMATIONAL</code> </p> </li> <li> <p> <code>UNSPECIFIED</code>
     * </p> </li> </ul>
     */
    inline AwsSsmComplianceSummary& WithOverallSeverity(const char* value) { SetOverallSeverity(value); return *this;}


    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline int GetNonCompliantMediumCount() const{ return m_nonCompliantMediumCount; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline bool NonCompliantMediumCountHasBeenSet() const { return m_nonCompliantMediumCountHasBeenSet; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline void SetNonCompliantMediumCount(int value) { m_nonCompliantMediumCountHasBeenSet = true; m_nonCompliantMediumCount = value; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>MEDIUM</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithNonCompliantMediumCount(int value) { SetNonCompliantMediumCount(value); return *this;}


    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline int GetNonCompliantUnspecifiedCount() const{ return m_nonCompliantUnspecifiedCount; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline bool NonCompliantUnspecifiedCountHasBeenSet() const { return m_nonCompliantUnspecifiedCountHasBeenSet; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline void SetNonCompliantUnspecifiedCount(int value) { m_nonCompliantUnspecifiedCountHasBeenSet = true; m_nonCompliantUnspecifiedCount = value; }

    /**
     * <p>For the patches that are noncompliant, the number that have a severity of
     * <code>UNSPECIFIED</code>.</p>
     */
    inline AwsSsmComplianceSummary& WithNonCompliantUnspecifiedCount(int value) { SetNonCompliantUnspecifiedCount(value); return *this;}


    /**
     * <p>The identifier of the patch group for which compliance was determined. A
     * patch group uses tags to group EC2 instances that should have the same patch
     * compliance.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The identifier of the patch group for which compliance was determined. A
     * patch group uses tags to group EC2 instances that should have the same patch
     * compliance.</p>
     */
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }

    /**
     * <p>The identifier of the patch group for which compliance was determined. A
     * patch group uses tags to group EC2 instances that should have the same patch
     * compliance.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The identifier of the patch group for which compliance was determined. A
     * patch group uses tags to group EC2 instances that should have the same patch
     * compliance.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::move(value); }

    /**
     * <p>The identifier of the patch group for which compliance was determined. A
     * patch group uses tags to group EC2 instances that should have the same patch
     * compliance.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }

    /**
     * <p>The identifier of the patch group for which compliance was determined. A
     * patch group uses tags to group EC2 instances that should have the same patch
     * compliance.</p>
     */
    inline AwsSsmComplianceSummary& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The identifier of the patch group for which compliance was determined. A
     * patch group uses tags to group EC2 instances that should have the same patch
     * compliance.</p>
     */
    inline AwsSsmComplianceSummary& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}

    /**
     * <p>The identifier of the patch group for which compliance was determined. A
     * patch group uses tags to group EC2 instances that should have the same patch
     * compliance.</p>
     */
    inline AwsSsmComplianceSummary& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_compliantCriticalCount;
    bool m_compliantCriticalCountHasBeenSet = false;

    int m_compliantHighCount;
    bool m_compliantHighCountHasBeenSet = false;

    int m_compliantMediumCount;
    bool m_compliantMediumCountHasBeenSet = false;

    Aws::String m_executionType;
    bool m_executionTypeHasBeenSet = false;

    int m_nonCompliantCriticalCount;
    bool m_nonCompliantCriticalCountHasBeenSet = false;

    int m_compliantInformationalCount;
    bool m_compliantInformationalCountHasBeenSet = false;

    int m_nonCompliantInformationalCount;
    bool m_nonCompliantInformationalCountHasBeenSet = false;

    int m_compliantUnspecifiedCount;
    bool m_compliantUnspecifiedCountHasBeenSet = false;

    int m_nonCompliantLowCount;
    bool m_nonCompliantLowCountHasBeenSet = false;

    int m_nonCompliantHighCount;
    bool m_nonCompliantHighCountHasBeenSet = false;

    int m_compliantLowCount;
    bool m_compliantLowCountHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_patchBaselineId;
    bool m_patchBaselineIdHasBeenSet = false;

    Aws::String m_overallSeverity;
    bool m_overallSeverityHasBeenSet = false;

    int m_nonCompliantMediumCount;
    bool m_nonCompliantMediumCountHasBeenSet = false;

    int m_nonCompliantUnspecifiedCount;
    bool m_nonCompliantUnspecifiedCountHasBeenSet = false;

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
