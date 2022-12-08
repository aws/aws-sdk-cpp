/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OperatingSystem.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchRuleGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchComplianceLevel.h>
#include <aws/ssm/model/PatchAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchSource.h>
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
   * <p>Defines the basic information about a patch baseline override.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/BaselineOverride">AWS
   * API Reference</a></p>
   */
  class BaselineOverride
  {
  public:
    AWS_SSM_API BaselineOverride();
    AWS_SSM_API BaselineOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API BaselineOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operating system rule used by the patch baseline override.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system rule used by the patch baseline override.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>The operating system rule used by the patch baseline override.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>The operating system rule used by the patch baseline override.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system rule used by the patch baseline override.</p>
     */
    inline BaselineOverride& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system rule used by the patch baseline override.</p>
     */
    inline BaselineOverride& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    
    inline const PatchFilterGroup& GetGlobalFilters() const{ return m_globalFilters; }

    
    inline bool GlobalFiltersHasBeenSet() const { return m_globalFiltersHasBeenSet; }

    
    inline void SetGlobalFilters(const PatchFilterGroup& value) { m_globalFiltersHasBeenSet = true; m_globalFilters = value; }

    
    inline void SetGlobalFilters(PatchFilterGroup&& value) { m_globalFiltersHasBeenSet = true; m_globalFilters = std::move(value); }

    
    inline BaselineOverride& WithGlobalFilters(const PatchFilterGroup& value) { SetGlobalFilters(value); return *this;}

    
    inline BaselineOverride& WithGlobalFilters(PatchFilterGroup&& value) { SetGlobalFilters(std::move(value)); return *this;}


    
    inline const PatchRuleGroup& GetApprovalRules() const{ return m_approvalRules; }

    
    inline bool ApprovalRulesHasBeenSet() const { return m_approvalRulesHasBeenSet; }

    
    inline void SetApprovalRules(const PatchRuleGroup& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = value; }

    
    inline void SetApprovalRules(PatchRuleGroup&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = std::move(value); }

    
    inline BaselineOverride& WithApprovalRules(const PatchRuleGroup& value) { SetApprovalRules(value); return *this;}

    
    inline BaselineOverride& WithApprovalRules(PatchRuleGroup&& value) { SetApprovalRules(std::move(value)); return *this;}


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
    inline BaselineOverride& WithApprovedPatches(const Aws::Vector<Aws::String>& value) { SetApprovedPatches(value); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline BaselineOverride& WithApprovedPatches(Aws::Vector<Aws::String>&& value) { SetApprovedPatches(std::move(value)); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline BaselineOverride& AddApprovedPatches(const Aws::String& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline BaselineOverride& AddApprovedPatches(Aws::String&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline BaselineOverride& AddApprovedPatches(const char* value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.push_back(value); return *this; }


    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation.</p>
     */
    inline const PatchComplianceLevel& GetApprovedPatchesComplianceLevel() const{ return m_approvedPatchesComplianceLevel; }

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation.</p>
     */
    inline bool ApprovedPatchesComplianceLevelHasBeenSet() const { return m_approvedPatchesComplianceLevelHasBeenSet; }

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation.</p>
     */
    inline void SetApprovedPatchesComplianceLevel(const PatchComplianceLevel& value) { m_approvedPatchesComplianceLevelHasBeenSet = true; m_approvedPatchesComplianceLevel = value; }

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation.</p>
     */
    inline void SetApprovedPatchesComplianceLevel(PatchComplianceLevel&& value) { m_approvedPatchesComplianceLevelHasBeenSet = true; m_approvedPatchesComplianceLevel = std::move(value); }

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation.</p>
     */
    inline BaselineOverride& WithApprovedPatchesComplianceLevel(const PatchComplianceLevel& value) { SetApprovedPatchesComplianceLevel(value); return *this;}

    /**
     * <p>Defines the compliance level for approved patches. When an approved patch is
     * reported as missing, this value describes the severity of the compliance
     * violation.</p>
     */
    inline BaselineOverride& WithApprovedPatchesComplianceLevel(PatchComplianceLevel&& value) { SetApprovedPatchesComplianceLevel(std::move(value)); return *this;}


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
    inline BaselineOverride& WithRejectedPatches(const Aws::Vector<Aws::String>& value) { SetRejectedPatches(value); return *this;}

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline BaselineOverride& WithRejectedPatches(Aws::Vector<Aws::String>&& value) { SetRejectedPatches(std::move(value)); return *this;}

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline BaselineOverride& AddRejectedPatches(const Aws::String& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline BaselineOverride& AddRejectedPatches(Aws::String&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p> <p>For
     * information about accepted formats for lists of approved patches and rejected
     * patches, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-approved-rejected-package-name-formats.html">About
     * package name formats for approved and rejected patch lists</a> in the <i>Amazon
     * Web Services Systems Manager User Guide</i>.</p>
     */
    inline BaselineOverride& AddRejectedPatches(const char* value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.push_back(value); return *this; }


    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list. A patch can be allowed only if it is a
     * dependency of another package, or blocked entirely along with packages that
     * include it as a dependency.</p>
     */
    inline const PatchAction& GetRejectedPatchesAction() const{ return m_rejectedPatchesAction; }

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list. A patch can be allowed only if it is a
     * dependency of another package, or blocked entirely along with packages that
     * include it as a dependency.</p>
     */
    inline bool RejectedPatchesActionHasBeenSet() const { return m_rejectedPatchesActionHasBeenSet; }

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list. A patch can be allowed only if it is a
     * dependency of another package, or blocked entirely along with packages that
     * include it as a dependency.</p>
     */
    inline void SetRejectedPatchesAction(const PatchAction& value) { m_rejectedPatchesActionHasBeenSet = true; m_rejectedPatchesAction = value; }

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list. A patch can be allowed only if it is a
     * dependency of another package, or blocked entirely along with packages that
     * include it as a dependency.</p>
     */
    inline void SetRejectedPatchesAction(PatchAction&& value) { m_rejectedPatchesActionHasBeenSet = true; m_rejectedPatchesAction = std::move(value); }

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list. A patch can be allowed only if it is a
     * dependency of another package, or blocked entirely along with packages that
     * include it as a dependency.</p>
     */
    inline BaselineOverride& WithRejectedPatchesAction(const PatchAction& value) { SetRejectedPatchesAction(value); return *this;}

    /**
     * <p>The action for Patch Manager to take on patches included in the
     * <code>RejectedPackages</code> list. A patch can be allowed only if it is a
     * dependency of another package, or blocked entirely along with packages that
     * include it as a dependency.</p>
     */
    inline BaselineOverride& WithRejectedPatchesAction(PatchAction&& value) { SetRejectedPatchesAction(std::move(value)); return *this;}


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
    inline BaselineOverride& WithApprovedPatchesEnableNonSecurity(bool value) { SetApprovedPatchesEnableNonSecurity(value); return *this;}


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
    inline BaselineOverride& WithSources(const Aws::Vector<PatchSource>& value) { SetSources(value); return *this;}

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline BaselineOverride& WithSources(Aws::Vector<PatchSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline BaselineOverride& AddSources(const PatchSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>Information about the patches to use to update the managed nodes, including
     * target operating systems and source repositories. Applies to Linux managed nodes
     * only.</p>
     */
    inline BaselineOverride& AddSources(PatchSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    PatchFilterGroup m_globalFilters;
    bool m_globalFiltersHasBeenSet = false;

    PatchRuleGroup m_approvalRules;
    bool m_approvalRulesHasBeenSet = false;

    Aws::Vector<Aws::String> m_approvedPatches;
    bool m_approvedPatchesHasBeenSet = false;

    PatchComplianceLevel m_approvedPatchesComplianceLevel;
    bool m_approvedPatchesComplianceLevelHasBeenSet = false;

    Aws::Vector<Aws::String> m_rejectedPatches;
    bool m_rejectedPatchesHasBeenSet = false;

    PatchAction m_rejectedPatchesAction;
    bool m_rejectedPatchesActionHasBeenSet = false;

    bool m_approvedPatchesEnableNonSecurity;
    bool m_approvedPatchesEnableNonSecurityHasBeenSet = false;

    Aws::Vector<PatchSource> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
