/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchComplianceLevel.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines an approval rule for a patch baseline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchRule">AWS API
   * Reference</a></p>
   */
  class PatchRule
  {
  public:
    AWS_SSM_API PatchRule();
    AWS_SSM_API PatchRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>A compliance severity level for all approved patches in a patch baseline.</p>
     */
    inline const PatchComplianceLevel& GetComplianceLevel() const{ return m_complianceLevel; }

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.</p>
     */
    inline bool ComplianceLevelHasBeenSet() const { return m_complianceLevelHasBeenSet; }

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.</p>
     */
    inline void SetComplianceLevel(const PatchComplianceLevel& value) { m_complianceLevelHasBeenSet = true; m_complianceLevel = value; }

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.</p>
     */
    inline void SetComplianceLevel(PatchComplianceLevel&& value) { m_complianceLevelHasBeenSet = true; m_complianceLevel = std::move(value); }

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.</p>
     */
    inline PatchRule& WithComplianceLevel(const PatchComplianceLevel& value) { SetComplianceLevel(value); return *this;}

    /**
     * <p>A compliance severity level for all approved patches in a patch baseline.</p>
     */
    inline PatchRule& WithComplianceLevel(PatchComplianceLevel&& value) { SetComplianceLevel(std::move(value)); return *this;}


    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * that the patch is marked as approved in the patch baseline. For example, a value
     * of <code>7</code> means that patches are approved seven days after they are
     * released. Not supported on Debian Server or Ubuntu Server.</p>
     */
    inline int GetApproveAfterDays() const{ return m_approveAfterDays; }

    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * that the patch is marked as approved in the patch baseline. For example, a value
     * of <code>7</code> means that patches are approved seven days after they are
     * released. Not supported on Debian Server or Ubuntu Server.</p>
     */
    inline bool ApproveAfterDaysHasBeenSet() const { return m_approveAfterDaysHasBeenSet; }

    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * that the patch is marked as approved in the patch baseline. For example, a value
     * of <code>7</code> means that patches are approved seven days after they are
     * released. Not supported on Debian Server or Ubuntu Server.</p>
     */
    inline void SetApproveAfterDays(int value) { m_approveAfterDaysHasBeenSet = true; m_approveAfterDays = value; }

    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * that the patch is marked as approved in the patch baseline. For example, a value
     * of <code>7</code> means that patches are approved seven days after they are
     * released. Not supported on Debian Server or Ubuntu Server.</p>
     */
    inline PatchRule& WithApproveAfterDays(int value) { SetApproveAfterDays(value); return *this;}


    /**
     * <p>The cutoff date for auto approval of released patches. Any patches released
     * on or before this date are installed automatically. Not supported on Debian
     * Server or Ubuntu Server.</p> <p>Enter dates in the format
     * <code>YYYY-MM-DD</code>. For example, <code>2021-12-31</code>.</p>
     */
    inline const Aws::String& GetApproveUntilDate() const{ return m_approveUntilDate; }

    /**
     * <p>The cutoff date for auto approval of released patches. Any patches released
     * on or before this date are installed automatically. Not supported on Debian
     * Server or Ubuntu Server.</p> <p>Enter dates in the format
     * <code>YYYY-MM-DD</code>. For example, <code>2021-12-31</code>.</p>
     */
    inline bool ApproveUntilDateHasBeenSet() const { return m_approveUntilDateHasBeenSet; }

    /**
     * <p>The cutoff date for auto approval of released patches. Any patches released
     * on or before this date are installed automatically. Not supported on Debian
     * Server or Ubuntu Server.</p> <p>Enter dates in the format
     * <code>YYYY-MM-DD</code>. For example, <code>2021-12-31</code>.</p>
     */
    inline void SetApproveUntilDate(const Aws::String& value) { m_approveUntilDateHasBeenSet = true; m_approveUntilDate = value; }

    /**
     * <p>The cutoff date for auto approval of released patches. Any patches released
     * on or before this date are installed automatically. Not supported on Debian
     * Server or Ubuntu Server.</p> <p>Enter dates in the format
     * <code>YYYY-MM-DD</code>. For example, <code>2021-12-31</code>.</p>
     */
    inline void SetApproveUntilDate(Aws::String&& value) { m_approveUntilDateHasBeenSet = true; m_approveUntilDate = std::move(value); }

    /**
     * <p>The cutoff date for auto approval of released patches. Any patches released
     * on or before this date are installed automatically. Not supported on Debian
     * Server or Ubuntu Server.</p> <p>Enter dates in the format
     * <code>YYYY-MM-DD</code>. For example, <code>2021-12-31</code>.</p>
     */
    inline void SetApproveUntilDate(const char* value) { m_approveUntilDateHasBeenSet = true; m_approveUntilDate.assign(value); }

    /**
     * <p>The cutoff date for auto approval of released patches. Any patches released
     * on or before this date are installed automatically. Not supported on Debian
     * Server or Ubuntu Server.</p> <p>Enter dates in the format
     * <code>YYYY-MM-DD</code>. For example, <code>2021-12-31</code>.</p>
     */
    inline PatchRule& WithApproveUntilDate(const Aws::String& value) { SetApproveUntilDate(value); return *this;}

    /**
     * <p>The cutoff date for auto approval of released patches. Any patches released
     * on or before this date are installed automatically. Not supported on Debian
     * Server or Ubuntu Server.</p> <p>Enter dates in the format
     * <code>YYYY-MM-DD</code>. For example, <code>2021-12-31</code>.</p>
     */
    inline PatchRule& WithApproveUntilDate(Aws::String&& value) { SetApproveUntilDate(std::move(value)); return *this;}

    /**
     * <p>The cutoff date for auto approval of released patches. Any patches released
     * on or before this date are installed automatically. Not supported on Debian
     * Server or Ubuntu Server.</p> <p>Enter dates in the format
     * <code>YYYY-MM-DD</code>. For example, <code>2021-12-31</code>.</p>
     */
    inline PatchRule& WithApproveUntilDate(const char* value) { SetApproveUntilDate(value); return *this;}


    /**
     * <p>For managed nodes identified by the approval rule filters, enables a patch
     * baseline to apply non-security updates available in the specified repository.
     * The default value is <code>false</code>. Applies to Linux managed nodes
     * only.</p>
     */
    inline bool GetEnableNonSecurity() const{ return m_enableNonSecurity; }

    /**
     * <p>For managed nodes identified by the approval rule filters, enables a patch
     * baseline to apply non-security updates available in the specified repository.
     * The default value is <code>false</code>. Applies to Linux managed nodes
     * only.</p>
     */
    inline bool EnableNonSecurityHasBeenSet() const { return m_enableNonSecurityHasBeenSet; }

    /**
     * <p>For managed nodes identified by the approval rule filters, enables a patch
     * baseline to apply non-security updates available in the specified repository.
     * The default value is <code>false</code>. Applies to Linux managed nodes
     * only.</p>
     */
    inline void SetEnableNonSecurity(bool value) { m_enableNonSecurityHasBeenSet = true; m_enableNonSecurity = value; }

    /**
     * <p>For managed nodes identified by the approval rule filters, enables a patch
     * baseline to apply non-security updates available in the specified repository.
     * The default value is <code>false</code>. Applies to Linux managed nodes
     * only.</p>
     */
    inline PatchRule& WithEnableNonSecurity(bool value) { SetEnableNonSecurity(value); return *this;}

  private:

    PatchFilterGroup m_patchFilterGroup;
    bool m_patchFilterGroupHasBeenSet = false;

    PatchComplianceLevel m_complianceLevel;
    bool m_complianceLevelHasBeenSet = false;

    int m_approveAfterDays;
    bool m_approveAfterDaysHasBeenSet = false;

    Aws::String m_approveUntilDate;
    bool m_approveUntilDateHasBeenSet = false;

    bool m_enableNonSecurity;
    bool m_enableNonSecurityHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
