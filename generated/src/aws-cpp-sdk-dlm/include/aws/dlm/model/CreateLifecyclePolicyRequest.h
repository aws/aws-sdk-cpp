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
    AWS_DLM_API CreateLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLifecyclePolicy"; }

    AWS_DLM_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline CreateLifecyclePolicyRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline CreateLifecyclePolicyRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline CreateLifecyclePolicyRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline CreateLifecyclePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline CreateLifecyclePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline CreateLifecyclePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The desired activation state of the lifecycle policy after creation.</p>
     */
    inline const SettablePolicyStateValues& GetState() const{ return m_state; }

    /**
     * <p>The desired activation state of the lifecycle policy after creation.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The desired activation state of the lifecycle policy after creation.</p>
     */
    inline void SetState(const SettablePolicyStateValues& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The desired activation state of the lifecycle policy after creation.</p>
     */
    inline void SetState(SettablePolicyStateValues&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The desired activation state of the lifecycle policy after creation.</p>
     */
    inline CreateLifecyclePolicyRequest& WithState(const SettablePolicyStateValues& value) { SetState(value); return *this;}

    /**
     * <p>The desired activation state of the lifecycle policy after creation.</p>
     */
    inline CreateLifecyclePolicyRequest& WithState(SettablePolicyStateValues&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The configuration details of the lifecycle policy.</p>
     */
    inline const PolicyDetails& GetPolicyDetails() const{ return m_policyDetails; }

    /**
     * <p>The configuration details of the lifecycle policy.</p>
     */
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }

    /**
     * <p>The configuration details of the lifecycle policy.</p>
     */
    inline void SetPolicyDetails(const PolicyDetails& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }

    /**
     * <p>The configuration details of the lifecycle policy.</p>
     */
    inline void SetPolicyDetails(PolicyDetails&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }

    /**
     * <p>The configuration details of the lifecycle policy.</p>
     */
    inline CreateLifecyclePolicyRequest& WithPolicyDetails(const PolicyDetails& value) { SetPolicyDetails(value); return *this;}

    /**
     * <p>The configuration details of the lifecycle policy.</p>
     */
    inline CreateLifecyclePolicyRequest& WithPolicyDetails(PolicyDetails&& value) { SetPolicyDetails(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline CreateLifecyclePolicyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline CreateLifecyclePolicyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline CreateLifecyclePolicyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline CreateLifecyclePolicyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline CreateLifecyclePolicyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline CreateLifecyclePolicyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline CreateLifecyclePolicyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline CreateLifecyclePolicyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline CreateLifecyclePolicyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SettablePolicyStateValues m_state;
    bool m_stateHasBeenSet = false;

    PolicyDetails m_policyDetails;
    bool m_policyDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
