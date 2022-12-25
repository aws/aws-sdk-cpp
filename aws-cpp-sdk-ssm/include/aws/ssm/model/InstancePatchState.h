﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/PatchOperationType.h>
#include <aws/ssm/model/RebootOption.h>
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
   * <p>Defines the high-level patch compliance state for a managed node, providing
   * information about the number of installed, missing, not applicable, and failed
   * patches along with metadata about the operation when this information was
   * gathered for the managed node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstancePatchState">AWS
   * API Reference</a></p>
   */
  class InstancePatchState
  {
  public:
    AWS_SSM_API InstancePatchState();
    AWS_SSM_API InstancePatchState(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstancePatchState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the managed node the high-level patch compliance information was
     * collected for.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the managed node the high-level patch compliance information was
     * collected for.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the managed node the high-level patch compliance information was
     * collected for.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the managed node the high-level patch compliance information was
     * collected for.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the managed node the high-level patch compliance information was
     * collected for.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the managed node the high-level patch compliance information was
     * collected for.</p>
     */
    inline InstancePatchState& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the managed node the high-level patch compliance information was
     * collected for.</p>
     */
    inline InstancePatchState& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed node the high-level patch compliance information was
     * collected for.</p>
     */
    inline InstancePatchState& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The name of the patch group the managed node belongs to.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group the managed node belongs to.</p>
     */
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }

    /**
     * <p>The name of the patch group the managed node belongs to.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The name of the patch group the managed node belongs to.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::move(value); }

    /**
     * <p>The name of the patch group the managed node belongs to.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }

    /**
     * <p>The name of the patch group the managed node belongs to.</p>
     */
    inline InstancePatchState& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group the managed node belongs to.</p>
     */
    inline InstancePatchState& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the patch group the managed node belongs to.</p>
     */
    inline InstancePatchState& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}


    /**
     * <p>The ID of the patch baseline used to patch the managed node.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline used to patch the managed node.</p>
     */
    inline bool BaselineIdHasBeenSet() const { return m_baselineIdHasBeenSet; }

    /**
     * <p>The ID of the patch baseline used to patch the managed node.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline used to patch the managed node.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::move(value); }

    /**
     * <p>The ID of the patch baseline used to patch the managed node.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineIdHasBeenSet = true; m_baselineId.assign(value); }

    /**
     * <p>The ID of the patch baseline used to patch the managed node.</p>
     */
    inline InstancePatchState& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline used to patch the managed node.</p>
     */
    inline InstancePatchState& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the patch baseline used to patch the managed node.</p>
     */
    inline InstancePatchState& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}


    /**
     * <p>The ID of the patch baseline snapshot used during the patching operation when
     * this compliance data was collected.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the patch baseline snapshot used during the patching operation when
     * this compliance data was collected.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the patch baseline snapshot used during the patching operation when
     * this compliance data was collected.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the patch baseline snapshot used during the patching operation when
     * this compliance data was collected.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the patch baseline snapshot used during the patching operation when
     * this compliance data was collected.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the patch baseline snapshot used during the patching operation when
     * this compliance data was collected.</p>
     */
    inline InstancePatchState& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the patch baseline snapshot used during the patching operation when
     * this compliance data was collected.</p>
     */
    inline InstancePatchState& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the patch baseline snapshot used during the patching operation when
     * this compliance data was collected.</p>
     */
    inline InstancePatchState& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>An https URL or an Amazon Simple Storage Service (Amazon S3) path-style URL
     * to a list of patches to be installed. This patch installation list, which you
     * maintain in an S3 bucket in YAML format and specify in the SSM document
     * <code>AWS-RunPatchBaseline</code>, overrides the patches specified by the
     * default patch baseline.</p> <p>For more information about the
     * <code>InstallOverrideList</code> parameter, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-about-aws-runpatchbaseline.html">About
     * the <code>AWS-RunPatchBaseline</code> </a> SSM document in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetInstallOverrideList() const{ return m_installOverrideList; }

    /**
     * <p>An https URL or an Amazon Simple Storage Service (Amazon S3) path-style URL
     * to a list of patches to be installed. This patch installation list, which you
     * maintain in an S3 bucket in YAML format and specify in the SSM document
     * <code>AWS-RunPatchBaseline</code>, overrides the patches specified by the
     * default patch baseline.</p> <p>For more information about the
     * <code>InstallOverrideList</code> parameter, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-about-aws-runpatchbaseline.html">About
     * the <code>AWS-RunPatchBaseline</code> </a> SSM document in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline bool InstallOverrideListHasBeenSet() const { return m_installOverrideListHasBeenSet; }

    /**
     * <p>An https URL or an Amazon Simple Storage Service (Amazon S3) path-style URL
     * to a list of patches to be installed. This patch installation list, which you
     * maintain in an S3 bucket in YAML format and specify in the SSM document
     * <code>AWS-RunPatchBaseline</code>, overrides the patches specified by the
     * default patch baseline.</p> <p>For more information about the
     * <code>InstallOverrideList</code> parameter, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-about-aws-runpatchbaseline.html">About
     * the <code>AWS-RunPatchBaseline</code> </a> SSM document in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline void SetInstallOverrideList(const Aws::String& value) { m_installOverrideListHasBeenSet = true; m_installOverrideList = value; }

    /**
     * <p>An https URL or an Amazon Simple Storage Service (Amazon S3) path-style URL
     * to a list of patches to be installed. This patch installation list, which you
     * maintain in an S3 bucket in YAML format and specify in the SSM document
     * <code>AWS-RunPatchBaseline</code>, overrides the patches specified by the
     * default patch baseline.</p> <p>For more information about the
     * <code>InstallOverrideList</code> parameter, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-about-aws-runpatchbaseline.html">About
     * the <code>AWS-RunPatchBaseline</code> </a> SSM document in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline void SetInstallOverrideList(Aws::String&& value) { m_installOverrideListHasBeenSet = true; m_installOverrideList = std::move(value); }

    /**
     * <p>An https URL or an Amazon Simple Storage Service (Amazon S3) path-style URL
     * to a list of patches to be installed. This patch installation list, which you
     * maintain in an S3 bucket in YAML format and specify in the SSM document
     * <code>AWS-RunPatchBaseline</code>, overrides the patches specified by the
     * default patch baseline.</p> <p>For more information about the
     * <code>InstallOverrideList</code> parameter, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-about-aws-runpatchbaseline.html">About
     * the <code>AWS-RunPatchBaseline</code> </a> SSM document in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline void SetInstallOverrideList(const char* value) { m_installOverrideListHasBeenSet = true; m_installOverrideList.assign(value); }

    /**
     * <p>An https URL or an Amazon Simple Storage Service (Amazon S3) path-style URL
     * to a list of patches to be installed. This patch installation list, which you
     * maintain in an S3 bucket in YAML format and specify in the SSM document
     * <code>AWS-RunPatchBaseline</code>, overrides the patches specified by the
     * default patch baseline.</p> <p>For more information about the
     * <code>InstallOverrideList</code> parameter, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-about-aws-runpatchbaseline.html">About
     * the <code>AWS-RunPatchBaseline</code> </a> SSM document in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline InstancePatchState& WithInstallOverrideList(const Aws::String& value) { SetInstallOverrideList(value); return *this;}

    /**
     * <p>An https URL or an Amazon Simple Storage Service (Amazon S3) path-style URL
     * to a list of patches to be installed. This patch installation list, which you
     * maintain in an S3 bucket in YAML format and specify in the SSM document
     * <code>AWS-RunPatchBaseline</code>, overrides the patches specified by the
     * default patch baseline.</p> <p>For more information about the
     * <code>InstallOverrideList</code> parameter, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-about-aws-runpatchbaseline.html">About
     * the <code>AWS-RunPatchBaseline</code> </a> SSM document in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline InstancePatchState& WithInstallOverrideList(Aws::String&& value) { SetInstallOverrideList(std::move(value)); return *this;}

    /**
     * <p>An https URL or an Amazon Simple Storage Service (Amazon S3) path-style URL
     * to a list of patches to be installed. This patch installation list, which you
     * maintain in an S3 bucket in YAML format and specify in the SSM document
     * <code>AWS-RunPatchBaseline</code>, overrides the patches specified by the
     * default patch baseline.</p> <p>For more information about the
     * <code>InstallOverrideList</code> parameter, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/patch-manager-about-aws-runpatchbaseline.html">About
     * the <code>AWS-RunPatchBaseline</code> </a> SSM document in the <i>Amazon Web
     * Services Systems Manager User Guide</i>.</p>
     */
    inline InstancePatchState& WithInstallOverrideList(const char* value) { SetInstallOverrideList(value); return *this;}


    /**
     * <p>Placeholder information. This field will always be empty in the current
     * release of the service.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }

    /**
     * <p>Placeholder information. This field will always be empty in the current
     * release of the service.</p>
     */
    inline bool OwnerInformationHasBeenSet() const { return m_ownerInformationHasBeenSet; }

    /**
     * <p>Placeholder information. This field will always be empty in the current
     * release of the service.</p>
     */
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = value; }

    /**
     * <p>Placeholder information. This field will always be empty in the current
     * release of the service.</p>
     */
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::move(value); }

    /**
     * <p>Placeholder information. This field will always be empty in the current
     * release of the service.</p>
     */
    inline void SetOwnerInformation(const char* value) { m_ownerInformationHasBeenSet = true; m_ownerInformation.assign(value); }

    /**
     * <p>Placeholder information. This field will always be empty in the current
     * release of the service.</p>
     */
    inline InstancePatchState& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>Placeholder information. This field will always be empty in the current
     * release of the service.</p>
     */
    inline InstancePatchState& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}

    /**
     * <p>Placeholder information. This field will always be empty in the current
     * release of the service.</p>
     */
    inline InstancePatchState& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}


    /**
     * <p>The number of patches from the patch baseline that are installed on the
     * managed node.</p>
     */
    inline int GetInstalledCount() const{ return m_installedCount; }

    /**
     * <p>The number of patches from the patch baseline that are installed on the
     * managed node.</p>
     */
    inline bool InstalledCountHasBeenSet() const { return m_installedCountHasBeenSet; }

    /**
     * <p>The number of patches from the patch baseline that are installed on the
     * managed node.</p>
     */
    inline void SetInstalledCount(int value) { m_installedCountHasBeenSet = true; m_installedCount = value; }

    /**
     * <p>The number of patches from the patch baseline that are installed on the
     * managed node.</p>
     */
    inline InstancePatchState& WithInstalledCount(int value) { SetInstalledCount(value); return *this;}


    /**
     * <p>The number of patches not specified in the patch baseline that are installed
     * on the managed node.</p>
     */
    inline int GetInstalledOtherCount() const{ return m_installedOtherCount; }

    /**
     * <p>The number of patches not specified in the patch baseline that are installed
     * on the managed node.</p>
     */
    inline bool InstalledOtherCountHasBeenSet() const { return m_installedOtherCountHasBeenSet; }

    /**
     * <p>The number of patches not specified in the patch baseline that are installed
     * on the managed node.</p>
     */
    inline void SetInstalledOtherCount(int value) { m_installedOtherCountHasBeenSet = true; m_installedOtherCount = value; }

    /**
     * <p>The number of patches not specified in the patch baseline that are installed
     * on the managed node.</p>
     */
    inline InstancePatchState& WithInstalledOtherCount(int value) { SetInstalledOtherCount(value); return *this;}


    /**
     * <p>The number of patches installed by Patch Manager since the last time the
     * managed node was rebooted.</p>
     */
    inline int GetInstalledPendingRebootCount() const{ return m_installedPendingRebootCount; }

    /**
     * <p>The number of patches installed by Patch Manager since the last time the
     * managed node was rebooted.</p>
     */
    inline bool InstalledPendingRebootCountHasBeenSet() const { return m_installedPendingRebootCountHasBeenSet; }

    /**
     * <p>The number of patches installed by Patch Manager since the last time the
     * managed node was rebooted.</p>
     */
    inline void SetInstalledPendingRebootCount(int value) { m_installedPendingRebootCountHasBeenSet = true; m_installedPendingRebootCount = value; }

    /**
     * <p>The number of patches installed by Patch Manager since the last time the
     * managed node was rebooted.</p>
     */
    inline InstancePatchState& WithInstalledPendingRebootCount(int value) { SetInstalledPendingRebootCount(value); return *this;}


    /**
     * <p>The number of patches installed on a managed node that are specified in a
     * <code>RejectedPatches</code> list. Patches with a status of
     * <code>InstalledRejected</code> were typically installed before they were added
     * to a <code>RejectedPatches</code> list.</p>  <p>If
     * <code>ALLOW_AS_DEPENDENCY</code> is the specified option for
     * <code>RejectedPatchesAction</code>, the value of
     * <code>InstalledRejectedCount</code> will always be <code>0</code> (zero).</p>
     * 
     */
    inline int GetInstalledRejectedCount() const{ return m_installedRejectedCount; }

    /**
     * <p>The number of patches installed on a managed node that are specified in a
     * <code>RejectedPatches</code> list. Patches with a status of
     * <code>InstalledRejected</code> were typically installed before they were added
     * to a <code>RejectedPatches</code> list.</p>  <p>If
     * <code>ALLOW_AS_DEPENDENCY</code> is the specified option for
     * <code>RejectedPatchesAction</code>, the value of
     * <code>InstalledRejectedCount</code> will always be <code>0</code> (zero).</p>
     * 
     */
    inline bool InstalledRejectedCountHasBeenSet() const { return m_installedRejectedCountHasBeenSet; }

    /**
     * <p>The number of patches installed on a managed node that are specified in a
     * <code>RejectedPatches</code> list. Patches with a status of
     * <code>InstalledRejected</code> were typically installed before they were added
     * to a <code>RejectedPatches</code> list.</p>  <p>If
     * <code>ALLOW_AS_DEPENDENCY</code> is the specified option for
     * <code>RejectedPatchesAction</code>, the value of
     * <code>InstalledRejectedCount</code> will always be <code>0</code> (zero).</p>
     * 
     */
    inline void SetInstalledRejectedCount(int value) { m_installedRejectedCountHasBeenSet = true; m_installedRejectedCount = value; }

    /**
     * <p>The number of patches installed on a managed node that are specified in a
     * <code>RejectedPatches</code> list. Patches with a status of
     * <code>InstalledRejected</code> were typically installed before they were added
     * to a <code>RejectedPatches</code> list.</p>  <p>If
     * <code>ALLOW_AS_DEPENDENCY</code> is the specified option for
     * <code>RejectedPatchesAction</code>, the value of
     * <code>InstalledRejectedCount</code> will always be <code>0</code> (zero).</p>
     * 
     */
    inline InstancePatchState& WithInstalledRejectedCount(int value) { SetInstalledRejectedCount(value); return *this;}


    /**
     * <p>The number of patches from the patch baseline that are applicable for the
     * managed node but aren't currently installed.</p>
     */
    inline int GetMissingCount() const{ return m_missingCount; }

    /**
     * <p>The number of patches from the patch baseline that are applicable for the
     * managed node but aren't currently installed.</p>
     */
    inline bool MissingCountHasBeenSet() const { return m_missingCountHasBeenSet; }

    /**
     * <p>The number of patches from the patch baseline that are applicable for the
     * managed node but aren't currently installed.</p>
     */
    inline void SetMissingCount(int value) { m_missingCountHasBeenSet = true; m_missingCount = value; }

    /**
     * <p>The number of patches from the patch baseline that are applicable for the
     * managed node but aren't currently installed.</p>
     */
    inline InstancePatchState& WithMissingCount(int value) { SetMissingCount(value); return *this;}


    /**
     * <p>The number of patches from the patch baseline that were attempted to be
     * installed during the last patching operation, but failed to install.</p>
     */
    inline int GetFailedCount() const{ return m_failedCount; }

    /**
     * <p>The number of patches from the patch baseline that were attempted to be
     * installed during the last patching operation, but failed to install.</p>
     */
    inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }

    /**
     * <p>The number of patches from the patch baseline that were attempted to be
     * installed during the last patching operation, but failed to install.</p>
     */
    inline void SetFailedCount(int value) { m_failedCountHasBeenSet = true; m_failedCount = value; }

    /**
     * <p>The number of patches from the patch baseline that were attempted to be
     * installed during the last patching operation, but failed to install.</p>
     */
    inline InstancePatchState& WithFailedCount(int value) { SetFailedCount(value); return *this;}


    /**
     * <p>The number of patches beyond the supported limit of
     * <code>NotApplicableCount</code> that aren't reported by name to Inventory.
     * Inventory is a capability of Amazon Web Services Systems Manager.</p>
     */
    inline int GetUnreportedNotApplicableCount() const{ return m_unreportedNotApplicableCount; }

    /**
     * <p>The number of patches beyond the supported limit of
     * <code>NotApplicableCount</code> that aren't reported by name to Inventory.
     * Inventory is a capability of Amazon Web Services Systems Manager.</p>
     */
    inline bool UnreportedNotApplicableCountHasBeenSet() const { return m_unreportedNotApplicableCountHasBeenSet; }

    /**
     * <p>The number of patches beyond the supported limit of
     * <code>NotApplicableCount</code> that aren't reported by name to Inventory.
     * Inventory is a capability of Amazon Web Services Systems Manager.</p>
     */
    inline void SetUnreportedNotApplicableCount(int value) { m_unreportedNotApplicableCountHasBeenSet = true; m_unreportedNotApplicableCount = value; }

    /**
     * <p>The number of patches beyond the supported limit of
     * <code>NotApplicableCount</code> that aren't reported by name to Inventory.
     * Inventory is a capability of Amazon Web Services Systems Manager.</p>
     */
    inline InstancePatchState& WithUnreportedNotApplicableCount(int value) { SetUnreportedNotApplicableCount(value); return *this;}


    /**
     * <p>The number of patches from the patch baseline that aren't applicable for the
     * managed node and therefore aren't installed on the node. This number may be
     * truncated if the list of patch names is very large. The number of patches beyond
     * this limit are reported in <code>UnreportedNotApplicableCount</code>.</p>
     */
    inline int GetNotApplicableCount() const{ return m_notApplicableCount; }

    /**
     * <p>The number of patches from the patch baseline that aren't applicable for the
     * managed node and therefore aren't installed on the node. This number may be
     * truncated if the list of patch names is very large. The number of patches beyond
     * this limit are reported in <code>UnreportedNotApplicableCount</code>.</p>
     */
    inline bool NotApplicableCountHasBeenSet() const { return m_notApplicableCountHasBeenSet; }

    /**
     * <p>The number of patches from the patch baseline that aren't applicable for the
     * managed node and therefore aren't installed on the node. This number may be
     * truncated if the list of patch names is very large. The number of patches beyond
     * this limit are reported in <code>UnreportedNotApplicableCount</code>.</p>
     */
    inline void SetNotApplicableCount(int value) { m_notApplicableCountHasBeenSet = true; m_notApplicableCount = value; }

    /**
     * <p>The number of patches from the patch baseline that aren't applicable for the
     * managed node and therefore aren't installed on the node. This number may be
     * truncated if the list of patch names is very large. The number of patches beyond
     * this limit are reported in <code>UnreportedNotApplicableCount</code>.</p>
     */
    inline InstancePatchState& WithNotApplicableCount(int value) { SetNotApplicableCount(value); return *this;}


    /**
     * <p>The time the most recent patching operation was started on the managed
     * node.</p>
     */
    inline const Aws::Utils::DateTime& GetOperationStartTime() const{ return m_operationStartTime; }

    /**
     * <p>The time the most recent patching operation was started on the managed
     * node.</p>
     */
    inline bool OperationStartTimeHasBeenSet() const { return m_operationStartTimeHasBeenSet; }

    /**
     * <p>The time the most recent patching operation was started on the managed
     * node.</p>
     */
    inline void SetOperationStartTime(const Aws::Utils::DateTime& value) { m_operationStartTimeHasBeenSet = true; m_operationStartTime = value; }

    /**
     * <p>The time the most recent patching operation was started on the managed
     * node.</p>
     */
    inline void SetOperationStartTime(Aws::Utils::DateTime&& value) { m_operationStartTimeHasBeenSet = true; m_operationStartTime = std::move(value); }

    /**
     * <p>The time the most recent patching operation was started on the managed
     * node.</p>
     */
    inline InstancePatchState& WithOperationStartTime(const Aws::Utils::DateTime& value) { SetOperationStartTime(value); return *this;}

    /**
     * <p>The time the most recent patching operation was started on the managed
     * node.</p>
     */
    inline InstancePatchState& WithOperationStartTime(Aws::Utils::DateTime&& value) { SetOperationStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the most recent patching operation completed on the managed
     * node.</p>
     */
    inline const Aws::Utils::DateTime& GetOperationEndTime() const{ return m_operationEndTime; }

    /**
     * <p>The time the most recent patching operation completed on the managed
     * node.</p>
     */
    inline bool OperationEndTimeHasBeenSet() const { return m_operationEndTimeHasBeenSet; }

    /**
     * <p>The time the most recent patching operation completed on the managed
     * node.</p>
     */
    inline void SetOperationEndTime(const Aws::Utils::DateTime& value) { m_operationEndTimeHasBeenSet = true; m_operationEndTime = value; }

    /**
     * <p>The time the most recent patching operation completed on the managed
     * node.</p>
     */
    inline void SetOperationEndTime(Aws::Utils::DateTime&& value) { m_operationEndTimeHasBeenSet = true; m_operationEndTime = std::move(value); }

    /**
     * <p>The time the most recent patching operation completed on the managed
     * node.</p>
     */
    inline InstancePatchState& WithOperationEndTime(const Aws::Utils::DateTime& value) { SetOperationEndTime(value); return *this;}

    /**
     * <p>The time the most recent patching operation completed on the managed
     * node.</p>
     */
    inline InstancePatchState& WithOperationEndTime(Aws::Utils::DateTime&& value) { SetOperationEndTime(std::move(value)); return *this;}


    /**
     * <p>The type of patching operation that was performed: or </p> <ul> <li> <p>
     * <code>SCAN</code> assesses the patch compliance state.</p> </li> <li> <p>
     * <code>INSTALL</code> installs missing patches.</p> </li> </ul>
     */
    inline const PatchOperationType& GetOperation() const{ return m_operation; }

    /**
     * <p>The type of patching operation that was performed: or </p> <ul> <li> <p>
     * <code>SCAN</code> assesses the patch compliance state.</p> </li> <li> <p>
     * <code>INSTALL</code> installs missing patches.</p> </li> </ul>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The type of patching operation that was performed: or </p> <ul> <li> <p>
     * <code>SCAN</code> assesses the patch compliance state.</p> </li> <li> <p>
     * <code>INSTALL</code> installs missing patches.</p> </li> </ul>
     */
    inline void SetOperation(const PatchOperationType& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The type of patching operation that was performed: or </p> <ul> <li> <p>
     * <code>SCAN</code> assesses the patch compliance state.</p> </li> <li> <p>
     * <code>INSTALL</code> installs missing patches.</p> </li> </ul>
     */
    inline void SetOperation(PatchOperationType&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The type of patching operation that was performed: or </p> <ul> <li> <p>
     * <code>SCAN</code> assesses the patch compliance state.</p> </li> <li> <p>
     * <code>INSTALL</code> installs missing patches.</p> </li> </ul>
     */
    inline InstancePatchState& WithOperation(const PatchOperationType& value) { SetOperation(value); return *this;}

    /**
     * <p>The type of patching operation that was performed: or </p> <ul> <li> <p>
     * <code>SCAN</code> assesses the patch compliance state.</p> </li> <li> <p>
     * <code>INSTALL</code> installs missing patches.</p> </li> </ul>
     */
    inline InstancePatchState& WithOperation(PatchOperationType&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>The time of the last attempt to patch the managed node with
     * <code>NoReboot</code> specified as the reboot option.</p>
     */
    inline const Aws::Utils::DateTime& GetLastNoRebootInstallOperationTime() const{ return m_lastNoRebootInstallOperationTime; }

    /**
     * <p>The time of the last attempt to patch the managed node with
     * <code>NoReboot</code> specified as the reboot option.</p>
     */
    inline bool LastNoRebootInstallOperationTimeHasBeenSet() const { return m_lastNoRebootInstallOperationTimeHasBeenSet; }

    /**
     * <p>The time of the last attempt to patch the managed node with
     * <code>NoReboot</code> specified as the reboot option.</p>
     */
    inline void SetLastNoRebootInstallOperationTime(const Aws::Utils::DateTime& value) { m_lastNoRebootInstallOperationTimeHasBeenSet = true; m_lastNoRebootInstallOperationTime = value; }

    /**
     * <p>The time of the last attempt to patch the managed node with
     * <code>NoReboot</code> specified as the reboot option.</p>
     */
    inline void SetLastNoRebootInstallOperationTime(Aws::Utils::DateTime&& value) { m_lastNoRebootInstallOperationTimeHasBeenSet = true; m_lastNoRebootInstallOperationTime = std::move(value); }

    /**
     * <p>The time of the last attempt to patch the managed node with
     * <code>NoReboot</code> specified as the reboot option.</p>
     */
    inline InstancePatchState& WithLastNoRebootInstallOperationTime(const Aws::Utils::DateTime& value) { SetLastNoRebootInstallOperationTime(value); return *this;}

    /**
     * <p>The time of the last attempt to patch the managed node with
     * <code>NoReboot</code> specified as the reboot option.</p>
     */
    inline InstancePatchState& WithLastNoRebootInstallOperationTime(Aws::Utils::DateTime&& value) { SetLastNoRebootInstallOperationTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the reboot option specified in the patch baseline.</p> 
     * <p>Reboot options apply to <code>Install</code> operations only. Reboots aren't
     * attempted for Patch Manager <code>Scan</code> operations.</p>  <ul> <li>
     * <p> <code>RebootIfNeeded</code>: Patch Manager tries to reboot the managed node
     * if it installed any patches, or if any patches are detected with a status of
     * <code>InstalledPendingReboot</code>.</p> </li> <li> <p> <code>NoReboot</code>:
     * Patch Manager attempts to install missing packages without trying to reboot the
     * system. Patches installed with this option are assigned a status of
     * <code>InstalledPendingReboot</code>. These patches might not be in effect until
     * a reboot is performed.</p> </li> </ul>
     */
    inline const RebootOption& GetRebootOption() const{ return m_rebootOption; }

    /**
     * <p>Indicates the reboot option specified in the patch baseline.</p> 
     * <p>Reboot options apply to <code>Install</code> operations only. Reboots aren't
     * attempted for Patch Manager <code>Scan</code> operations.</p>  <ul> <li>
     * <p> <code>RebootIfNeeded</code>: Patch Manager tries to reboot the managed node
     * if it installed any patches, or if any patches are detected with a status of
     * <code>InstalledPendingReboot</code>.</p> </li> <li> <p> <code>NoReboot</code>:
     * Patch Manager attempts to install missing packages without trying to reboot the
     * system. Patches installed with this option are assigned a status of
     * <code>InstalledPendingReboot</code>. These patches might not be in effect until
     * a reboot is performed.</p> </li> </ul>
     */
    inline bool RebootOptionHasBeenSet() const { return m_rebootOptionHasBeenSet; }

    /**
     * <p>Indicates the reboot option specified in the patch baseline.</p> 
     * <p>Reboot options apply to <code>Install</code> operations only. Reboots aren't
     * attempted for Patch Manager <code>Scan</code> operations.</p>  <ul> <li>
     * <p> <code>RebootIfNeeded</code>: Patch Manager tries to reboot the managed node
     * if it installed any patches, or if any patches are detected with a status of
     * <code>InstalledPendingReboot</code>.</p> </li> <li> <p> <code>NoReboot</code>:
     * Patch Manager attempts to install missing packages without trying to reboot the
     * system. Patches installed with this option are assigned a status of
     * <code>InstalledPendingReboot</code>. These patches might not be in effect until
     * a reboot is performed.</p> </li> </ul>
     */
    inline void SetRebootOption(const RebootOption& value) { m_rebootOptionHasBeenSet = true; m_rebootOption = value; }

    /**
     * <p>Indicates the reboot option specified in the patch baseline.</p> 
     * <p>Reboot options apply to <code>Install</code> operations only. Reboots aren't
     * attempted for Patch Manager <code>Scan</code> operations.</p>  <ul> <li>
     * <p> <code>RebootIfNeeded</code>: Patch Manager tries to reboot the managed node
     * if it installed any patches, or if any patches are detected with a status of
     * <code>InstalledPendingReboot</code>.</p> </li> <li> <p> <code>NoReboot</code>:
     * Patch Manager attempts to install missing packages without trying to reboot the
     * system. Patches installed with this option are assigned a status of
     * <code>InstalledPendingReboot</code>. These patches might not be in effect until
     * a reboot is performed.</p> </li> </ul>
     */
    inline void SetRebootOption(RebootOption&& value) { m_rebootOptionHasBeenSet = true; m_rebootOption = std::move(value); }

    /**
     * <p>Indicates the reboot option specified in the patch baseline.</p> 
     * <p>Reboot options apply to <code>Install</code> operations only. Reboots aren't
     * attempted for Patch Manager <code>Scan</code> operations.</p>  <ul> <li>
     * <p> <code>RebootIfNeeded</code>: Patch Manager tries to reboot the managed node
     * if it installed any patches, or if any patches are detected with a status of
     * <code>InstalledPendingReboot</code>.</p> </li> <li> <p> <code>NoReboot</code>:
     * Patch Manager attempts to install missing packages without trying to reboot the
     * system. Patches installed with this option are assigned a status of
     * <code>InstalledPendingReboot</code>. These patches might not be in effect until
     * a reboot is performed.</p> </li> </ul>
     */
    inline InstancePatchState& WithRebootOption(const RebootOption& value) { SetRebootOption(value); return *this;}

    /**
     * <p>Indicates the reboot option specified in the patch baseline.</p> 
     * <p>Reboot options apply to <code>Install</code> operations only. Reboots aren't
     * attempted for Patch Manager <code>Scan</code> operations.</p>  <ul> <li>
     * <p> <code>RebootIfNeeded</code>: Patch Manager tries to reboot the managed node
     * if it installed any patches, or if any patches are detected with a status of
     * <code>InstalledPendingReboot</code>.</p> </li> <li> <p> <code>NoReboot</code>:
     * Patch Manager attempts to install missing packages without trying to reboot the
     * system. Patches installed with this option are assigned a status of
     * <code>InstalledPendingReboot</code>. These patches might not be in effect until
     * a reboot is performed.</p> </li> </ul>
     */
    inline InstancePatchState& WithRebootOption(RebootOption&& value) { SetRebootOption(std::move(value)); return *this;}


    /**
     * <p>The number of patches per node that are specified as <code>Critical</code>
     * for compliance reporting in the patch baseline aren't installed. These patches
     * might be missing, have failed installation, were rejected, or were installed but
     * awaiting a required managed node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetCriticalNonCompliantCount() const{ return m_criticalNonCompliantCount; }

    /**
     * <p>The number of patches per node that are specified as <code>Critical</code>
     * for compliance reporting in the patch baseline aren't installed. These patches
     * might be missing, have failed installation, were rejected, or were installed but
     * awaiting a required managed node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline bool CriticalNonCompliantCountHasBeenSet() const { return m_criticalNonCompliantCountHasBeenSet; }

    /**
     * <p>The number of patches per node that are specified as <code>Critical</code>
     * for compliance reporting in the patch baseline aren't installed. These patches
     * might be missing, have failed installation, were rejected, or were installed but
     * awaiting a required managed node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline void SetCriticalNonCompliantCount(int value) { m_criticalNonCompliantCountHasBeenSet = true; m_criticalNonCompliantCount = value; }

    /**
     * <p>The number of patches per node that are specified as <code>Critical</code>
     * for compliance reporting in the patch baseline aren't installed. These patches
     * might be missing, have failed installation, were rejected, or were installed but
     * awaiting a required managed node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline InstancePatchState& WithCriticalNonCompliantCount(int value) { SetCriticalNonCompliantCount(value); return *this;}


    /**
     * <p>The number of patches per node that are specified as <code>Security</code> in
     * a patch advisory aren't installed. These patches might be missing, have failed
     * installation, were rejected, or were installed but awaiting a required managed
     * node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetSecurityNonCompliantCount() const{ return m_securityNonCompliantCount; }

    /**
     * <p>The number of patches per node that are specified as <code>Security</code> in
     * a patch advisory aren't installed. These patches might be missing, have failed
     * installation, were rejected, or were installed but awaiting a required managed
     * node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline bool SecurityNonCompliantCountHasBeenSet() const { return m_securityNonCompliantCountHasBeenSet; }

    /**
     * <p>The number of patches per node that are specified as <code>Security</code> in
     * a patch advisory aren't installed. These patches might be missing, have failed
     * installation, were rejected, or were installed but awaiting a required managed
     * node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline void SetSecurityNonCompliantCount(int value) { m_securityNonCompliantCountHasBeenSet = true; m_securityNonCompliantCount = value; }

    /**
     * <p>The number of patches per node that are specified as <code>Security</code> in
     * a patch advisory aren't installed. These patches might be missing, have failed
     * installation, were rejected, or were installed but awaiting a required managed
     * node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline InstancePatchState& WithSecurityNonCompliantCount(int value) { SetSecurityNonCompliantCount(value); return *this;}


    /**
     * <p>The number of patches per node that are specified as other than
     * <code>Critical</code> or <code>Security</code> but aren't compliant with the
     * patch baseline. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetOtherNonCompliantCount() const{ return m_otherNonCompliantCount; }

    /**
     * <p>The number of patches per node that are specified as other than
     * <code>Critical</code> or <code>Security</code> but aren't compliant with the
     * patch baseline. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline bool OtherNonCompliantCountHasBeenSet() const { return m_otherNonCompliantCountHasBeenSet; }

    /**
     * <p>The number of patches per node that are specified as other than
     * <code>Critical</code> or <code>Security</code> but aren't compliant with the
     * patch baseline. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline void SetOtherNonCompliantCount(int value) { m_otherNonCompliantCountHasBeenSet = true; m_otherNonCompliantCount = value; }

    /**
     * <p>The number of patches per node that are specified as other than
     * <code>Critical</code> or <code>Security</code> but aren't compliant with the
     * patch baseline. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline InstancePatchState& WithOtherNonCompliantCount(int value) { SetOtherNonCompliantCount(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet = false;

    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_installOverrideList;
    bool m_installOverrideListHasBeenSet = false;

    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet = false;

    int m_installedCount;
    bool m_installedCountHasBeenSet = false;

    int m_installedOtherCount;
    bool m_installedOtherCountHasBeenSet = false;

    int m_installedPendingRebootCount;
    bool m_installedPendingRebootCountHasBeenSet = false;

    int m_installedRejectedCount;
    bool m_installedRejectedCountHasBeenSet = false;

    int m_missingCount;
    bool m_missingCountHasBeenSet = false;

    int m_failedCount;
    bool m_failedCountHasBeenSet = false;

    int m_unreportedNotApplicableCount;
    bool m_unreportedNotApplicableCountHasBeenSet = false;

    int m_notApplicableCount;
    bool m_notApplicableCountHasBeenSet = false;

    Aws::Utils::DateTime m_operationStartTime;
    bool m_operationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_operationEndTime;
    bool m_operationEndTimeHasBeenSet = false;

    PatchOperationType m_operation;
    bool m_operationHasBeenSet = false;

    Aws::Utils::DateTime m_lastNoRebootInstallOperationTime;
    bool m_lastNoRebootInstallOperationTimeHasBeenSet = false;

    RebootOption m_rebootOption;
    bool m_rebootOptionHasBeenSet = false;

    int m_criticalNonCompliantCount;
    bool m_criticalNonCompliantCountHasBeenSet = false;

    int m_securityNonCompliantCount;
    bool m_securityNonCompliantCountHasBeenSet = false;

    int m_otherNonCompliantCount;
    bool m_otherNonCompliantCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
