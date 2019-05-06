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
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/DLMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/SettablePolicyStateValues.h>
#include <aws/dlm/model/PolicyDetails.h>
#include <utility>

namespace Aws
{
namespace DLM
{
namespace Model
{

  /**
   */
  class AWS_DLM_API UpdateLifecyclePolicyRequest : public DLMRequest
  {
  public:
    UpdateLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLifecyclePolicy"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


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
    inline UpdateLifecyclePolicyRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


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
    inline UpdateLifecyclePolicyRequest& WithState(const SettablePolicyStateValues& value) { SetState(value); return *this;}

    /**
     * <p>The desired activation state of the lifecycle policy after creation.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithState(SettablePolicyStateValues&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The configuration of the lifecycle policy.</p> <p>Target tags cannot be
     * re-used across policies.</p>
     */
    inline const PolicyDetails& GetPolicyDetails() const{ return m_policyDetails; }

    /**
     * <p>The configuration of the lifecycle policy.</p> <p>Target tags cannot be
     * re-used across policies.</p>
     */
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }

    /**
     * <p>The configuration of the lifecycle policy.</p> <p>Target tags cannot be
     * re-used across policies.</p>
     */
    inline void SetPolicyDetails(const PolicyDetails& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }

    /**
     * <p>The configuration of the lifecycle policy.</p> <p>Target tags cannot be
     * re-used across policies.</p>
     */
    inline void SetPolicyDetails(PolicyDetails&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }

    /**
     * <p>The configuration of the lifecycle policy.</p> <p>Target tags cannot be
     * re-used across policies.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithPolicyDetails(const PolicyDetails& value) { SetPolicyDetails(value); return *this;}

    /**
     * <p>The configuration of the lifecycle policy.</p> <p>Target tags cannot be
     * re-used across policies.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithPolicyDetails(PolicyDetails&& value) { SetPolicyDetails(std::move(value)); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    SettablePolicyStateValues m_state;
    bool m_stateHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    PolicyDetails m_policyDetails;
    bool m_policyDetailsHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
