/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/DLMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/SettablePolicyStateValues.h>
#include <aws/dlm/model/PolicyDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/Exclusions.h>
#include <aws/dlm/model/CrossRegionCopyTarget.h>
#include <utility>

namespace Aws
{
namespace DLM
{
namespace Model
{

  /**
   */
  class UpdateLifecyclePolicyRequest : public DLMRequest
  {
  public:
    AWS_DLM_API UpdateLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLifecyclePolicy"; }

    AWS_DLM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline UpdateLifecyclePolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline UpdateLifecyclePolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline UpdateLifecyclePolicyRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline UpdateLifecyclePolicyRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired activation state of the lifecycle policy after creation.</p>
     */
    inline const SettablePolicyStateValues& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const SettablePolicyStateValues& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(SettablePolicyStateValues&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdateLifecyclePolicyRequest& WithState(const SettablePolicyStateValues& value) { SetState(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithState(SettablePolicyStateValues&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateLifecyclePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateLifecyclePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the lifecycle policy. You cannot update the policy type
     * or the resource type.</p>
     */
    inline const PolicyDetails& GetPolicyDetails() const{ return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    inline void SetPolicyDetails(const PolicyDetails& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }
    inline void SetPolicyDetails(PolicyDetails&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }
    inline UpdateLifecyclePolicyRequest& WithPolicyDetails(const PolicyDetails& value) { SetPolicyDetails(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithPolicyDetails(PolicyDetails&& value) { SetPolicyDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies how often the policy should run and
     * create snapshots or AMIs. The creation frequency can range from 1 to 7 days.</p>
     */
    inline int GetCreateInterval() const{ return m_createInterval; }
    inline bool CreateIntervalHasBeenSet() const { return m_createIntervalHasBeenSet; }
    inline void SetCreateInterval(int value) { m_createIntervalHasBeenSet = true; m_createInterval = value; }
    inline UpdateLifecyclePolicyRequest& WithCreateInterval(int value) { SetCreateInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies how long the policy should retain
     * snapshots or AMIs before deleting them. The retention period can range from 2 to
     * 14 days, but it must be greater than the creation frequency to ensure that the
     * policy retains at least 1 snapshot or AMI at any given time.</p>
     */
    inline int GetRetainInterval() const{ return m_retainInterval; }
    inline bool RetainIntervalHasBeenSet() const { return m_retainIntervalHasBeenSet; }
    inline void SetRetainInterval(int value) { m_retainIntervalHasBeenSet = true; m_retainInterval = value; }
    inline UpdateLifecyclePolicyRequest& WithRetainInterval(int value) { SetRetainInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Indicates whether the policy should copy tags
     * from the source resource to the snapshot or AMI.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline UpdateLifecyclePolicyRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Defines the snapshot or AMI retention
     * behavior for the policy if the source volume or instance is deleted, or if the
     * policy enters the error, disabled, or deleted state.</p> <p>By default
     * (<b>ExtendDeletion=false</b>):</p> <ul> <li> <p>If a source resource is deleted,
     * Amazon Data Lifecycle Manager will continue to delete previously created
     * snapshots or AMIs, up to but not including the last one, based on the specified
     * retention period. If you want Amazon Data Lifecycle Manager to delete all
     * snapshots or AMIs, including the last one, specify <code>true</code>.</p> </li>
     * <li> <p>If a policy enters the error, disabled, or deleted state, Amazon Data
     * Lifecycle Manager stops deleting snapshots and AMIs. If you want Amazon Data
     * Lifecycle Manager to continue deleting snapshots or AMIs, including the last
     * one, if the policy enters one of these states, specify <code>true</code>.</p>
     * </li> </ul> <p>If you enable extended deletion (<b>ExtendDeletion=true</b>), you
     * override both default behaviors simultaneously.</p> <p>Default: false</p>
     */
    inline bool GetExtendDeletion() const{ return m_extendDeletion; }
    inline bool ExtendDeletionHasBeenSet() const { return m_extendDeletionHasBeenSet; }
    inline void SetExtendDeletion(bool value) { m_extendDeletionHasBeenSet = true; m_extendDeletion = value; }
    inline UpdateLifecyclePolicyRequest& WithExtendDeletion(bool value) { SetExtendDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline const Aws::Vector<CrossRegionCopyTarget>& GetCrossRegionCopyTargets() const{ return m_crossRegionCopyTargets; }
    inline bool CrossRegionCopyTargetsHasBeenSet() const { return m_crossRegionCopyTargetsHasBeenSet; }
    inline void SetCrossRegionCopyTargets(const Aws::Vector<CrossRegionCopyTarget>& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets = value; }
    inline void SetCrossRegionCopyTargets(Aws::Vector<CrossRegionCopyTarget>&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets = std::move(value); }
    inline UpdateLifecyclePolicyRequest& WithCrossRegionCopyTargets(const Aws::Vector<CrossRegionCopyTarget>& value) { SetCrossRegionCopyTargets(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithCrossRegionCopyTargets(Aws::Vector<CrossRegionCopyTarget>&& value) { SetCrossRegionCopyTargets(std::move(value)); return *this;}
    inline UpdateLifecyclePolicyRequest& AddCrossRegionCopyTargets(const CrossRegionCopyTarget& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets.push_back(value); return *this; }
    inline UpdateLifecyclePolicyRequest& AddCrossRegionCopyTargets(CrossRegionCopyTarget&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline const Exclusions& GetExclusions() const{ return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    inline void SetExclusions(const Exclusions& value) { m_exclusionsHasBeenSet = true; m_exclusions = value; }
    inline void SetExclusions(Exclusions&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::move(value); }
    inline UpdateLifecyclePolicyRequest& WithExclusions(const Exclusions& value) { SetExclusions(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithExclusions(Exclusions&& value) { SetExclusions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    SettablePolicyStateValues m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PolicyDetails m_policyDetails;
    bool m_policyDetailsHasBeenSet = false;

    int m_createInterval;
    bool m_createIntervalHasBeenSet = false;

    int m_retainInterval;
    bool m_retainIntervalHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    bool m_extendDeletion;
    bool m_extendDeletionHasBeenSet = false;

    Aws::Vector<CrossRegionCopyTarget> m_crossRegionCopyTargets;
    bool m_crossRegionCopyTargetsHasBeenSet = false;

    Exclusions m_exclusions;
    bool m_exclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
