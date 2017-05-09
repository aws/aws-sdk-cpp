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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/PatchOperationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines the high-level patch compliance state for a managed instance,
   * providing information about the number of installed, missing, not applicable,
   * and failed patches along with metadata about the operation when this information
   * was gathered for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstancePatchState">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InstancePatchState
  {
  public:
    InstancePatchState();
    InstancePatchState(const Aws::Utils::Json::JsonValue& jsonValue);
    InstancePatchState& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the managed instance the high-level patch compliance information
     * was collected for.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the managed instance the high-level patch compliance information
     * was collected for.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the managed instance the high-level patch compliance information
     * was collected for.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the managed instance the high-level patch compliance information
     * was collected for.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the managed instance the high-level patch compliance information
     * was collected for.</p>
     */
    inline InstancePatchState& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the managed instance the high-level patch compliance information
     * was collected for.</p>
     */
    inline InstancePatchState& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed instance the high-level patch compliance information
     * was collected for.</p>
     */
    inline InstancePatchState& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The name of the patch group the managed instance belongs to.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group the managed instance belongs to.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The name of the patch group the managed instance belongs to.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::move(value); }

    /**
     * <p>The name of the patch group the managed instance belongs to.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }

    /**
     * <p>The name of the patch group the managed instance belongs to.</p>
     */
    inline InstancePatchState& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group the managed instance belongs to.</p>
     */
    inline InstancePatchState& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the patch group the managed instance belongs to.</p>
     */
    inline InstancePatchState& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The ID of the patch baseline used to patch the instance.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline used to patch the instance.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline used to patch the instance.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::move(value); }

    /**
     * <p>The ID of the patch baseline used to patch the instance.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineIdHasBeenSet = true; m_baselineId.assign(value); }

    /**
     * <p>The ID of the patch baseline used to patch the instance.</p>
     */
    inline InstancePatchState& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline used to patch the instance.</p>
     */
    inline InstancePatchState& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the patch baseline used to patch the instance.</p>
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
     * <p>Placeholder information, this field will always be empty in the current
     * release of the service.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }

    /**
     * <p>Placeholder information, this field will always be empty in the current
     * release of the service.</p>
     */
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = value; }

    /**
     * <p>Placeholder information, this field will always be empty in the current
     * release of the service.</p>
     */
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::move(value); }

    /**
     * <p>Placeholder information, this field will always be empty in the current
     * release of the service.</p>
     */
    inline void SetOwnerInformation(const char* value) { m_ownerInformationHasBeenSet = true; m_ownerInformation.assign(value); }

    /**
     * <p>Placeholder information, this field will always be empty in the current
     * release of the service.</p>
     */
    inline InstancePatchState& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>Placeholder information, this field will always be empty in the current
     * release of the service.</p>
     */
    inline InstancePatchState& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}

    /**
     * <p>Placeholder information, this field will always be empty in the current
     * release of the service.</p>
     */
    inline InstancePatchState& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}

    /**
     * <p>The number of patches from the patch baseline that are installed on the
     * instance.</p>
     */
    inline int GetInstalledCount() const{ return m_installedCount; }

    /**
     * <p>The number of patches from the patch baseline that are installed on the
     * instance.</p>
     */
    inline void SetInstalledCount(int value) { m_installedCountHasBeenSet = true; m_installedCount = value; }

    /**
     * <p>The number of patches from the patch baseline that are installed on the
     * instance.</p>
     */
    inline InstancePatchState& WithInstalledCount(int value) { SetInstalledCount(value); return *this;}

    /**
     * <p>The number of patches not specified in the patch baseline that are installed
     * on the instance.</p>
     */
    inline int GetInstalledOtherCount() const{ return m_installedOtherCount; }

    /**
     * <p>The number of patches not specified in the patch baseline that are installed
     * on the instance.</p>
     */
    inline void SetInstalledOtherCount(int value) { m_installedOtherCountHasBeenSet = true; m_installedOtherCount = value; }

    /**
     * <p>The number of patches not specified in the patch baseline that are installed
     * on the instance.</p>
     */
    inline InstancePatchState& WithInstalledOtherCount(int value) { SetInstalledOtherCount(value); return *this;}

    /**
     * <p>The number of patches from the patch baseline that are applicable for the
     * instance but aren’t currently installed.</p>
     */
    inline int GetMissingCount() const{ return m_missingCount; }

    /**
     * <p>The number of patches from the patch baseline that are applicable for the
     * instance but aren’t currently installed.</p>
     */
    inline void SetMissingCount(int value) { m_missingCountHasBeenSet = true; m_missingCount = value; }

    /**
     * <p>The number of patches from the patch baseline that are applicable for the
     * instance but aren’t currently installed.</p>
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
    inline void SetFailedCount(int value) { m_failedCountHasBeenSet = true; m_failedCount = value; }

    /**
     * <p>The number of patches from the patch baseline that were attempted to be
     * installed during the last patching operation, but failed to install.</p>
     */
    inline InstancePatchState& WithFailedCount(int value) { SetFailedCount(value); return *this;}

    /**
     * <p>The number of patches from the patch baseline that aren’t applicable for the
     * instance and hence aren’t installed on the instance.</p>
     */
    inline int GetNotApplicableCount() const{ return m_notApplicableCount; }

    /**
     * <p>The number of patches from the patch baseline that aren’t applicable for the
     * instance and hence aren’t installed on the instance.</p>
     */
    inline void SetNotApplicableCount(int value) { m_notApplicableCountHasBeenSet = true; m_notApplicableCount = value; }

    /**
     * <p>The number of patches from the patch baseline that aren’t applicable for the
     * instance and hence aren’t installed on the instance.</p>
     */
    inline InstancePatchState& WithNotApplicableCount(int value) { SetNotApplicableCount(value); return *this;}

    /**
     * <p>The time the most recent patching operation was started on the instance.</p>
     */
    inline const Aws::Utils::DateTime& GetOperationStartTime() const{ return m_operationStartTime; }

    /**
     * <p>The time the most recent patching operation was started on the instance.</p>
     */
    inline void SetOperationStartTime(const Aws::Utils::DateTime& value) { m_operationStartTimeHasBeenSet = true; m_operationStartTime = value; }

    /**
     * <p>The time the most recent patching operation was started on the instance.</p>
     */
    inline void SetOperationStartTime(Aws::Utils::DateTime&& value) { m_operationStartTimeHasBeenSet = true; m_operationStartTime = std::move(value); }

    /**
     * <p>The time the most recent patching operation was started on the instance.</p>
     */
    inline InstancePatchState& WithOperationStartTime(const Aws::Utils::DateTime& value) { SetOperationStartTime(value); return *this;}

    /**
     * <p>The time the most recent patching operation was started on the instance.</p>
     */
    inline InstancePatchState& WithOperationStartTime(Aws::Utils::DateTime&& value) { SetOperationStartTime(std::move(value)); return *this;}

    /**
     * <p>The time the most recent patching operation completed on the instance.</p>
     */
    inline const Aws::Utils::DateTime& GetOperationEndTime() const{ return m_operationEndTime; }

    /**
     * <p>The time the most recent patching operation completed on the instance.</p>
     */
    inline void SetOperationEndTime(const Aws::Utils::DateTime& value) { m_operationEndTimeHasBeenSet = true; m_operationEndTime = value; }

    /**
     * <p>The time the most recent patching operation completed on the instance.</p>
     */
    inline void SetOperationEndTime(Aws::Utils::DateTime&& value) { m_operationEndTimeHasBeenSet = true; m_operationEndTime = std::move(value); }

    /**
     * <p>The time the most recent patching operation completed on the instance.</p>
     */
    inline InstancePatchState& WithOperationEndTime(const Aws::Utils::DateTime& value) { SetOperationEndTime(value); return *this;}

    /**
     * <p>The time the most recent patching operation completed on the instance.</p>
     */
    inline InstancePatchState& WithOperationEndTime(Aws::Utils::DateTime&& value) { SetOperationEndTime(std::move(value)); return *this;}

    /**
     * <p>The type of patching operation that was performed: SCAN (assess patch
     * compliance state) or INSTALL (install missing patches).</p>
     */
    inline const PatchOperationType& GetOperation() const{ return m_operation; }

    /**
     * <p>The type of patching operation that was performed: SCAN (assess patch
     * compliance state) or INSTALL (install missing patches).</p>
     */
    inline void SetOperation(const PatchOperationType& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The type of patching operation that was performed: SCAN (assess patch
     * compliance state) or INSTALL (install missing patches).</p>
     */
    inline void SetOperation(PatchOperationType&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The type of patching operation that was performed: SCAN (assess patch
     * compliance state) or INSTALL (install missing patches).</p>
     */
    inline InstancePatchState& WithOperation(const PatchOperationType& value) { SetOperation(value); return *this;}

    /**
     * <p>The type of patching operation that was performed: SCAN (assess patch
     * compliance state) or INSTALL (install missing patches).</p>
     */
    inline InstancePatchState& WithOperation(PatchOperationType&& value) { SetOperation(std::move(value)); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet;
    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet;
    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet;
    int m_installedCount;
    bool m_installedCountHasBeenSet;
    int m_installedOtherCount;
    bool m_installedOtherCountHasBeenSet;
    int m_missingCount;
    bool m_missingCountHasBeenSet;
    int m_failedCount;
    bool m_failedCountHasBeenSet;
    int m_notApplicableCount;
    bool m_notApplicableCountHasBeenSet;
    Aws::Utils::DateTime m_operationStartTime;
    bool m_operationStartTimeHasBeenSet;
    Aws::Utils::DateTime m_operationEndTime;
    bool m_operationEndTimeHasBeenSet;
    PatchOperationType m_operation;
    bool m_operationHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
