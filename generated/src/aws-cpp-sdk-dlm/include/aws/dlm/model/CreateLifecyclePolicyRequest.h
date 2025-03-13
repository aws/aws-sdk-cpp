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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dlm/model/DefaultPolicyTypeValues.h>
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
  class CreateLifecyclePolicyRequest : public DLMRequest
  {
  public:
    AWS_DLM_API CreateLifecyclePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLifecyclePolicy"; }

    AWS_DLM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    CreateLifecyclePolicyRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateLifecyclePolicyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation state of the lifecycle policy after creation.</p>
     */
    inline SettablePolicyStateValues GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SettablePolicyStateValues value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateLifecyclePolicyRequest& WithState(SettablePolicyStateValues value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the lifecycle policy.</p>  <p>If you
     * create a default policy, you can specify the request parameters either in the
     * request body, or in the PolicyDetails request structure, but not both.</p>
     * 
     */
    inline const PolicyDetails& GetPolicyDetails() const { return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    template<typename PolicyDetailsT = PolicyDetails>
    void SetPolicyDetails(PolicyDetailsT&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::forward<PolicyDetailsT>(value); }
    template<typename PolicyDetailsT = PolicyDetails>
    CreateLifecyclePolicyRequest& WithPolicyDetails(PolicyDetailsT&& value) { SetPolicyDetails(std::forward<PolicyDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateLifecyclePolicyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateLifecyclePolicyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specify the type of default policy to
     * create.</p> <ul> <li> <p>To create a default policy for EBS snapshots, that
     * creates snapshots of all volumes in the Region that do not have recent backups,
     * specify <code>VOLUME</code>.</p> </li> <li> <p>To create a default policy for
     * EBS-backed AMIs, that creates EBS-backed AMIs from all instances in the Region
     * that do not have recent backups, specify <code>INSTANCE</code>.</p> </li> </ul>
     */
    inline DefaultPolicyTypeValues GetDefaultPolicy() const { return m_defaultPolicy; }
    inline bool DefaultPolicyHasBeenSet() const { return m_defaultPolicyHasBeenSet; }
    inline void SetDefaultPolicy(DefaultPolicyTypeValues value) { m_defaultPolicyHasBeenSet = true; m_defaultPolicy = value; }
    inline CreateLifecyclePolicyRequest& WithDefaultPolicy(DefaultPolicyTypeValues value) { SetDefaultPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies how often the policy should run and
     * create snapshots or AMIs. The creation frequency can range from 1 to 7 days. If
     * you do not specify a value, the default is 1.</p> <p>Default: 1</p>
     */
    inline int GetCreateInterval() const { return m_createInterval; }
    inline bool CreateIntervalHasBeenSet() const { return m_createIntervalHasBeenSet; }
    inline void SetCreateInterval(int value) { m_createIntervalHasBeenSet = true; m_createInterval = value; }
    inline CreateLifecyclePolicyRequest& WithCreateInterval(int value) { SetCreateInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies how long the policy should retain
     * snapshots or AMIs before deleting them. The retention period can range from 2 to
     * 14 days, but it must be greater than the creation frequency to ensure that the
     * policy retains at least 1 snapshot or AMI at any given time. If you do not
     * specify a value, the default is 7.</p> <p>Default: 7</p>
     */
    inline int GetRetainInterval() const { return m_retainInterval; }
    inline bool RetainIntervalHasBeenSet() const { return m_retainIntervalHasBeenSet; }
    inline void SetRetainInterval(int value) { m_retainIntervalHasBeenSet = true; m_retainInterval = value; }
    inline CreateLifecyclePolicyRequest& WithRetainInterval(int value) { SetRetainInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Indicates whether the policy should copy tags
     * from the source resource to the snapshot or AMI. If you do not specify a value,
     * the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline CreateLifecyclePolicyRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
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
     * override both default behaviors simultaneously.</p> <p>If you do not specify a
     * value, the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline bool GetExtendDeletion() const { return m_extendDeletion; }
    inline bool ExtendDeletionHasBeenSet() const { return m_extendDeletionHasBeenSet; }
    inline void SetExtendDeletion(bool value) { m_extendDeletionHasBeenSet = true; m_extendDeletion = value; }
    inline CreateLifecyclePolicyRequest& WithExtendDeletion(bool value) { SetExtendDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline const Aws::Vector<CrossRegionCopyTarget>& GetCrossRegionCopyTargets() const { return m_crossRegionCopyTargets; }
    inline bool CrossRegionCopyTargetsHasBeenSet() const { return m_crossRegionCopyTargetsHasBeenSet; }
    template<typename CrossRegionCopyTargetsT = Aws::Vector<CrossRegionCopyTarget>>
    void SetCrossRegionCopyTargets(CrossRegionCopyTargetsT&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets = std::forward<CrossRegionCopyTargetsT>(value); }
    template<typename CrossRegionCopyTargetsT = Aws::Vector<CrossRegionCopyTarget>>
    CreateLifecyclePolicyRequest& WithCrossRegionCopyTargets(CrossRegionCopyTargetsT&& value) { SetCrossRegionCopyTargets(std::forward<CrossRegionCopyTargetsT>(value)); return *this;}
    template<typename CrossRegionCopyTargetsT = CrossRegionCopyTarget>
    CreateLifecyclePolicyRequest& AddCrossRegionCopyTargets(CrossRegionCopyTargetsT&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets.emplace_back(std::forward<CrossRegionCopyTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline const Exclusions& GetExclusions() const { return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    template<typename ExclusionsT = Exclusions>
    void SetExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::forward<ExclusionsT>(value); }
    template<typename ExclusionsT = Exclusions>
    CreateLifecyclePolicyRequest& WithExclusions(ExclusionsT&& value) { SetExclusions(std::forward<ExclusionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SettablePolicyStateValues m_state{SettablePolicyStateValues::NOT_SET};
    bool m_stateHasBeenSet = false;

    PolicyDetails m_policyDetails;
    bool m_policyDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DefaultPolicyTypeValues m_defaultPolicy{DefaultPolicyTypeValues::NOT_SET};
    bool m_defaultPolicyHasBeenSet = false;

    int m_createInterval{0};
    bool m_createIntervalHasBeenSet = false;

    int m_retainInterval{0};
    bool m_retainIntervalHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    bool m_extendDeletion{false};
    bool m_extendDeletionHasBeenSet = false;

    Aws::Vector<CrossRegionCopyTarget> m_crossRegionCopyTargets;
    bool m_crossRegionCopyTargetsHasBeenSet = false;

    Exclusions m_exclusions;
    bool m_exclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
