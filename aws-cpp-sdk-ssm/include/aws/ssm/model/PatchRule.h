/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchComplianceLevel.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines an approval rule for a patch baseline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchRule">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API PatchRule
  {
  public:
    PatchRule();
    PatchRule(Aws::Utils::Json::JsonView jsonValue);
    PatchRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline const PatchFilterGroup& GetPatchFilterGroup() const{ return m_patchFilterGroup; }

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline bool PatchFilterGroupHasBeenSet() const { return m_patchFilterGroupHasBeenSet; }

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline void SetPatchFilterGroup(const PatchFilterGroup& value) { m_patchFilterGroupHasBeenSet = true; m_patchFilterGroup = value; }

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline void SetPatchFilterGroup(PatchFilterGroup&& value) { m_patchFilterGroupHasBeenSet = true; m_patchFilterGroup = std::move(value); }

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline PatchRule& WithPatchFilterGroup(const PatchFilterGroup& value) { SetPatchFilterGroup(value); return *this;}

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline PatchRule& WithPatchFilterGroup(PatchFilterGroup&& value) { SetPatchFilterGroup(std::move(value)); return *this;}


    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.
     * Valid compliance severity levels include the following: Unspecified, Critical,
     * High, Medium, Low, and Informational.</p>
     */
    inline const PatchComplianceLevel& GetComplianceLevel() const{ return m_complianceLevel; }

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.
     * Valid compliance severity levels include the following: Unspecified, Critical,
     * High, Medium, Low, and Informational.</p>
     */
    inline bool ComplianceLevelHasBeenSet() const { return m_complianceLevelHasBeenSet; }

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.
     * Valid compliance severity levels include the following: Unspecified, Critical,
     * High, Medium, Low, and Informational.</p>
     */
    inline void SetComplianceLevel(const PatchComplianceLevel& value) { m_complianceLevelHasBeenSet = true; m_complianceLevel = value; }

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.
     * Valid compliance severity levels include the following: Unspecified, Critical,
     * High, Medium, Low, and Informational.</p>
     */
    inline void SetComplianceLevel(PatchComplianceLevel&& value) { m_complianceLevelHasBeenSet = true; m_complianceLevel = std::move(value); }

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.
     * Valid compliance severity levels include the following: Unspecified, Critical,
     * High, Medium, Low, and Informational.</p>
     */
    inline PatchRule& WithComplianceLevel(const PatchComplianceLevel& value) { SetComplianceLevel(value); return *this;}

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.
     * Valid compliance severity levels include the following: Unspecified, Critical,
     * High, Medium, Low, and Informational.</p>
     */
    inline PatchRule& WithComplianceLevel(PatchComplianceLevel&& value) { SetComplianceLevel(std::move(value)); return *this;}


    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * that the patch is marked as approved in the patch baseline. For example, a value
     * of <code>7</code> means that patches are approved seven days after they are
     * released. </p>
     */
    inline int GetApproveAfterDays() const{ return m_approveAfterDays; }

    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * that the patch is marked as approved in the patch baseline. For example, a value
     * of <code>7</code> means that patches are approved seven days after they are
     * released. </p>
     */
    inline bool ApproveAfterDaysHasBeenSet() const { return m_approveAfterDaysHasBeenSet; }

    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * that the patch is marked as approved in the patch baseline. For example, a value
     * of <code>7</code> means that patches are approved seven days after they are
     * released. </p>
     */
    inline void SetApproveAfterDays(int value) { m_approveAfterDaysHasBeenSet = true; m_approveAfterDays = value; }

    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * that the patch is marked as approved in the patch baseline. For example, a value
     * of <code>7</code> means that patches are approved seven days after they are
     * released. </p>
     */
    inline PatchRule& WithApproveAfterDays(int value) { SetApproveAfterDays(value); return *this;}


    /**
     * <p>For instances identified by the approval rule filters, enables a patch
     * baseline to apply non-security updates available in the specified repository.
     * The default value is 'false'. Applies to Linux instances only.</p>
     */
    inline bool GetEnableNonSecurity() const{ return m_enableNonSecurity; }

    /**
     * <p>For instances identified by the approval rule filters, enables a patch
     * baseline to apply non-security updates available in the specified repository.
     * The default value is 'false'. Applies to Linux instances only.</p>
     */
    inline bool EnableNonSecurityHasBeenSet() const { return m_enableNonSecurityHasBeenSet; }

    /**
     * <p>For instances identified by the approval rule filters, enables a patch
     * baseline to apply non-security updates available in the specified repository.
     * The default value is 'false'. Applies to Linux instances only.</p>
     */
    inline void SetEnableNonSecurity(bool value) { m_enableNonSecurityHasBeenSet = true; m_enableNonSecurity = value; }

    /**
     * <p>For instances identified by the approval rule filters, enables a patch
     * baseline to apply non-security updates available in the specified repository.
     * The default value is 'false'. Applies to Linux instances only.</p>
     */
    inline PatchRule& WithEnableNonSecurity(bool value) { SetEnableNonSecurity(value); return *this;}

  private:

    PatchFilterGroup m_patchFilterGroup;
    bool m_patchFilterGroupHasBeenSet;

    PatchComplianceLevel m_complianceLevel;
    bool m_complianceLevelHasBeenSet;

    int m_approveAfterDays;
    bool m_approveAfterDaysHasBeenSet;

    bool m_enableNonSecurity;
    bool m_enableNonSecurityHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
