/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/model/OperatingSystem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchRuleGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchComplianceLevel.h>
#include <aws/ssm/model/PatchAction.h>
#include <aws/ssm/model/PatchSource.h>
#include <aws/ssm/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class CreatePatchBaselineRequest : public SSMRequest
  {
  public:
    AWS_SSM_API CreatePatchBaselineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePatchBaseline"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>.</p>
     */
    inline CreatePatchBaselineRequest& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Defines the operating system the patch baseline applies to. The default value
     * is <code>WINDOWS</code>.</p>
     */
    inline CreatePatchBaselineRequest& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A set of global filters used to include patches in the baseline.</p>
     */
    inline const PatchFilterGroup& GetGlobalFilters() const{ return m_globalFilters; }

    /**
     * <p>A set of global filters used to include patches in the baseline.</p>
     */
    inline bool GlobalFiltersHasBeenSet() const { return m_globalFiltersHasBeenSet; }

    /**
     * <p>A set of global filters used to include patches in the baseline.</p>
     */
    inline void SetGlobalFilters(const PatchFilterGroup& value) { m_globalFiltersHasBeenSet = true; m_globalFilters = value; }

    /**
     * <p>A set of global filters used to include patches in the baseline.</p>
     */
    inline void SetGlobalFilters(PatchFilterGroup&& value) { m_globalFiltersHasBeenSet = true; m_globalFilters = std::move(value); }

    /**
     * <p>A set of global filters used to include patches in the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithGlobalFilters(const PatchFilterGroup& value) { SetGlobalFilters(value); return *this;}

    /**
     * <p>A set of global filters used to include patches in the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithGlobalFilters(PatchFilterGroup&& value) { SetGlobalFilters(std::move(value)); return *this;}


    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline const PatchRuleGroup& GetApprovalRules() const{ return m_approvalRules; }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline bool ApprovalRulesHasBeenSet() const { return m_approvalRulesHasBeenSet; }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline void SetApprovalRules(const PatchRuleGroup& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = value; }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline void SetApprovalRules(PatchRuleGroup&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = std::move(value); }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovalRules(const PatchRuleGroup& value) { SetApprovalRules(value); return *this;}

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovalRules(PatchRuleGroup&& value) { SetApprovalRules(std::move(value)); return *this;}


    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovedPatches() const{ return m_approvedPatches; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline bool ApprovedPatchesHasBeenSet() const { return m_approvedPatchesHasBeenSet; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetApprovedPatches(const Aws::Vector<Aws::String>& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches = value; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetApprovedPatches(Aws::Vector<Aws::String>&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches = std::move(value); }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovedPatches(const Aws::Vector<Aws::String>& value) { SetApprovedPatches(value); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovedPatches(Aws::Vector<Aws::String>&& value) { SetApprovedPatches(std::move(value)); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& AddApprovedPatches(const Aws::String& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& AddApprovedPatches(Aws::String&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& AddApprovedPatches(const char* value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.push_back(value); return *this; }


    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation. The default value is <code>UNSPECIFIED</code>.</p>
     */
    inline const PatchComplianceLevel& GetApprovedPatchesComplianceLevel() const{ return m_approvedPatchesComplianceLevel; }

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation. The default value is <code>UNSPECIFIED</code>.</p>
     */
    inline bool ApprovedPatchesComplianceLevelHasBeenSet() const { return m_approvedPatchesComplianceLevelHasBeenSet; }

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation. The default value is <code>UNSPECIFIED</code>.</p>
     */
    inline void SetApprovedPatchesComplianceLevel(const PatchComplianceLevel& value) { m_approvedPatchesComplianceLevelHasBeenSet = true; m_approvedPatchesComplianceLevel = value; }

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation. The default value is <code>UNSPECIFIED</code>.</p>
     */
    inline void SetApprovedPatchesComplianceLevel(PatchComplianceLevel&& value) { m_approvedPatchesComplianceLevelHasBeenSet = true; m_approvedPatchesComplianceLevel = std::move(value); }

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation. The default value is <code>UNSPECIFIED</code>.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovedPatchesComplianceLevel(const PatchComplianceLevel& value) { SetApprovedPatchesComplianceLevel(value); return *this;}

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation. The default value is <code>UNSPECIFIED</code>.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovedPatchesComplianceLevel(PatchComplianceLevel&& value) { SetApprovedPatchesComplianceLevel(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the list of approved patches includes non-security updates
     * that should be applied to the managed nodes. The default value is
     * <code>false</code>. Applies to Linux managed nodes only.</p>
     */
    inline bool GetApprovedPatchesEnableNonSecurity() const{ return m_approvedPatchesEnableNonSecurity; }

    /**
     * <p>Indicates whether the list of approved patches includes non-security updates
     * that should be applied to the managed nodes. The default value is
     * <code>false</code>. Applies to Linux managed nodes only.</p>
     */
    inline bool ApprovedPatchesEnableNonSecurityHasBeenSet() const { return m_approvedPatchesEnableNonSecurityHasBeenSet; }

    /**
     * <p>Indicates whether the list of approved patches includes non-security updates
     * that should be applied to the managed nodes. The default value is
     * <code>false</code>. Applies to Linux managed nodes only.</p>
     */
    inline void SetApprovedPatchesEnableNonSecurity(bool value) { m_approvedPatchesEnableNonSecurityHasBeenSet = true; m_approvedPatchesEnableNonSecurity = value; }

    /**
     * <p>Indicates whether the list of approved patches includes non-security updates
     * that should be applied to the managed nodes. The default value is
     * <code>false</code>. Applies to Linux managed nodes only.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovedPatchesEnableNonSecurity(bool value) { SetApprovedPatchesEnableNonSecurity(value); return *this;}


    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRejectedPatches() const{ return m_rejectedPatches; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline bool RejectedPatchesHasBeenSet() const { return m_rejectedPatchesHasBeenSet; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetRejectedPatches(const Aws::Vector<Aws::String>& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches = value; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetRejectedPatches(Aws::Vector<Aws::String>&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches = std::move(value); }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& WithRejectedPatches(const Aws::Vector<Aws::String>& value) { SetRejectedPatches(value); return *this;}

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& WithRejectedPatches(Aws::Vector<Aws::String>&& value) { SetRejectedPatches(std::move(value)); return *this;}

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& AddRejectedPatches(const Aws::String& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& AddRejectedPatches(Aws::String&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline CreatePatchBaselineRequest& AddRejectedPatches(const char* value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.push_back(value); return *this; }


    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list.</p> <ul> <li> <p> <b>
     * <code>ALLOW_AS_DEPENDENCY</code> </b>: A package in the <code>Rejected</code>
     * patches list is installed only if it is a dependency of another package. It is
     * considered compliant with the patch baseline, and its status is reported as
     * <code>InstalledOther</code>. This is the default action if no option is
     * specified.</p> </li> <li> <p> <b> <code>BLOCK</code> </b>: Packages in the
     * <code>RejectedPatches</code> list, and packages that include them as
     * dependencies, aren't installed under any circumstances. If a package was
     * installed before it was added to the Rejected patches list, it is considered
     * non-compliant with the patch baseline, and its status is reported as
     * <code>InstalledRejected</code>.</p> </li> </ul>
     */
    inline const PatchAction& GetRejectedPatchesAction() const{ return m_rejectedPatchesAction; }

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list.</p> <ul> <li> <p> <b>
     * <code>ALLOW_AS_DEPENDENCY</code> </b>: A package in the <code>Rejected</code>
     * patches list is installed only if it is a dependency of another package. It is
     * considered compliant with the patch baseline, and its status is reported as
     * <code>InstalledOther</code>. This is the default action if no option is
     * specified.</p> </li> <li> <p> <b> <code>BLOCK</code> </b>: Packages in the
     * <code>RejectedPatches</code> list, and packages that include them as
     * dependencies, aren't installed under any circumstances. If a package was
     * installed before it was added to the Rejected patches list, it is considered
     * non-compliant with the patch baseline, and its status is reported as
     * <code>InstalledRejected</code>.</p> </li> </ul>
     */
    inline bool RejectedPatchesActionHasBeenSet() const { return m_rejectedPatchesActionHasBeenSet; }

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list.</p> <ul> <li> <p> <b>
     * <code>ALLOW_AS_DEPENDENCY</code> </b>: A package in the <code>Rejected</code>
     * patches list is installed only if it is a dependency of another package. It is
     * considered compliant with the patch baseline, and its status is reported as
     * <code>InstalledOther</code>. This is the default action if no option is
     * specified.</p> </li> <li> <p> <b> <code>BLOCK</code> </b>: Packages in the
     * <code>RejectedPatches</code> list, and packages that include them as
     * dependencies, aren't installed under any circumstances. If a package was
     * installed before it was added to the Rejected patches list, it is considered
     * non-compliant with the patch baseline, and its status is reported as
     * <code>InstalledRejected</code>.</p> </li> </ul>
     */
    inline void SetRejectedPatchesAction(const PatchAction& value) { m_rejectedPatchesActionHasBeenSet = true; m_rejectedPatchesAction = value; }

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list.</p> <ul> <li> <p> <b>
     * <code>ALLOW_AS_DEPENDENCY</code> </b>: A package in the <code>Rejected</code>
     * patches list is installed only if it is a dependency of another package. It is
     * considered compliant with the patch baseline, and its status is reported as
     * <code>InstalledOther</code>. This is the default action if no option is
     * specified.</p> </li> <li> <p> <b> <code>BLOCK</code> </b>: Packages in the
     * <code>RejectedPatches</code> list, and packages that include them as
     * dependencies, aren't installed under any circumstances. If a package was
     * installed before it was added to the Rejected patches list, it is considered
     * non-compliant with the patch baseline, and its status is reported as
     * <code>InstalledRejected</code>.</p> </li> </ul>
     */
    inline void SetRejectedPatchesAction(PatchAction&& value) { m_rejectedPatchesActionHasBeenSet = true; m_rejectedPatchesAction = std::move(value); }

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list.</p> <ul> <li> <p> <b>
     * <code>ALLOW_AS_DEPENDENCY</code> </b>: A package in the <code>Rejected</code>
     * patches list is installed only if it is a dependency of another package. It is
     * considered compliant with the patch baseline, and its status is reported as
     * <code>InstalledOther</code>. This is the default action if no option is
     * specified.</p> </li> <li> <p> <b> <code>BLOCK</code> </b>: Packages in the
     * <code>RejectedPatches</code> list, and packages that include them as
     * dependencies, aren't installed under any circumstances. If a package was
     * installed before it was added to the Rejected patches list, it is considered
     * non-compliant with the patch baseline, and its status is reported as
     * <code>InstalledRejected</code>.</p> </li> </ul>
     */
    inline CreatePatchBaselineRequest& WithRejectedPatchesAction(const PatchAction& value) { SetRejectedPatchesAction(value); return *this;}

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list.</p> <ul> <li> <p> <b>
     * <code>ALLOW_AS_DEPENDENCY</code> </b>: A package in the <code>Rejected</code>
     * patches list is installed only if it is a dependency of another package. It is
     * considered compliant with the patch baseline, and its status is reported as
     * <code>InstalledOther</code>. This is the default action if no option is
     * specified.</p> </li> <li> <p> <b> <code>BLOCK</code> </b>: Packages in the
     * <code>RejectedPatches</code> list, and packages that include them as
     * dependencies, aren't installed under any circumstances. If a package was
     * installed before it was added to the Rejected patches list, it is considered
     * non-compliant with the patch baseline, and its status is reported as
     * <code>InstalledRejected</code>.</p> </li> </ul>
     */
    inline CreatePatchBaselineRequest& WithRejectedPatchesAction(PatchAction&& value) { SetRejectedPatchesAction(std::move(value)); return *this;}


    /**
     * <p>A description of the patch baseline.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline const Aws::Vector<PatchSource>& GetSources() const{ return m_sources; }

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline void SetSources(const Aws::Vector<PatchSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline void SetSources(Aws::Vector<PatchSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline CreatePatchBaselineRequest& WithSources(const Aws::Vector<PatchSource>& value) { SetSources(value); return *this;}

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline CreatePatchBaselineRequest& WithSources(Aws::Vector<PatchSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline CreatePatchBaselineRequest& AddSources(const PatchSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline CreatePatchBaselineRequest& AddSources(PatchSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline CreatePatchBaselineRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline CreatePatchBaselineRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>User-provided idempotency token.</p>
     */
    inline CreatePatchBaselineRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a patch baseline to identify the
     * severity level of patches it specifies and the operating system family it
     * applies to. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=PatchSeverity,Value=Critical</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>To add tags to an
     * existing patch baseline, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a patch baseline to identify the
     * severity level of patches it specifies and the operating system family it
     * applies to. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=PatchSeverity,Value=Critical</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>To add tags to an
     * existing patch baseline, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a patch baseline to identify the
     * severity level of patches it specifies and the operating system family it
     * applies to. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=PatchSeverity,Value=Critical</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>To add tags to an
     * existing patch baseline, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a patch baseline to identify the
     * severity level of patches it specifies and the operating system family it
     * applies to. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=PatchSeverity,Value=Critical</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>To add tags to an
     * existing patch baseline, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a patch baseline to identify the
     * severity level of patches it specifies and the operating system family it
     * applies to. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=PatchSeverity,Value=Critical</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>To add tags to an
     * existing patch baseline, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline CreatePatchBaselineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a patch baseline to identify the
     * severity level of patches it specifies and the operating system family it
     * applies to. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=PatchSeverity,Value=Critical</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>To add tags to an
     * existing patch baseline, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline CreatePatchBaselineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a patch baseline to identify the
     * severity level of patches it specifies and the operating system family it
     * applies to. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=PatchSeverity,Value=Critical</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>To add tags to an
     * existing patch baseline, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline CreatePatchBaselineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a patch baseline to identify the
     * severity level of patches it specifies and the operating system family it
     * applies to. In this case, you could specify the following key-value pairs:</p>
     * <ul> <li> <p> <code>Key=PatchSeverity,Value=Critical</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>To add tags to an
     * existing patch baseline, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline CreatePatchBaselineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PatchFilterGroup m_globalFilters;
    bool m_globalFiltersHasBeenSet = false;

    PatchRuleGroup m_approvalRules;
    bool m_approvalRulesHasBeenSet = false;

    Aws::Vector<Aws::String> m_approvedPatches;
    bool m_approvedPatchesHasBeenSet = false;

    PatchComplianceLevel m_approvedPatchesComplianceLevel;
    bool m_approvedPatchesComplianceLevelHasBeenSet = false;

    bool m_approvedPatchesEnableNonSecurity;
    bool m_approvedPatchesEnableNonSecurityHasBeenSet = false;

    Aws::Vector<Aws::String> m_rejectedPatches;
    bool m_rejectedPatchesHasBeenSet = false;

    PatchAction m_rejectedPatchesAction;
    bool m_rejectedPatchesActionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<PatchSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
