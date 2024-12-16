/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/GettablePolicyStateValues.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dlm/model/PolicyDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>Information about a lifecycle policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/LifecyclePolicy">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicy
  {
  public:
    AWS_DLM_API LifecyclePolicy();
    AWS_DLM_API LifecyclePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API LifecyclePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline LifecyclePolicy& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline LifecyclePolicy& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline LifecyclePolicy& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline LifecyclePolicy& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline LifecyclePolicy& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline LifecyclePolicy& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline const GettablePolicyStateValues& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const GettablePolicyStateValues& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(GettablePolicyStateValues&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline LifecyclePolicy& WithState(const GettablePolicyStateValues& value) { SetState(value); return *this;}
    inline LifecyclePolicy& WithState(GettablePolicyStateValues&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline LifecyclePolicy& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline LifecyclePolicy& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline LifecyclePolicy& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
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
    inline LifecyclePolicy& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline LifecyclePolicy& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline LifecyclePolicy& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local date and time when the lifecycle policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline LifecyclePolicy& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline LifecyclePolicy& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local date and time when the lifecycle policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const{ return m_dateModified; }
    inline bool DateModifiedHasBeenSet() const { return m_dateModifiedHasBeenSet; }
    inline void SetDateModified(const Aws::Utils::DateTime& value) { m_dateModifiedHasBeenSet = true; m_dateModified = value; }
    inline void SetDateModified(Aws::Utils::DateTime&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::move(value); }
    inline LifecyclePolicy& WithDateModified(const Aws::Utils::DateTime& value) { SetDateModified(value); return *this;}
    inline LifecyclePolicy& WithDateModified(Aws::Utils::DateTime&& value) { SetDateModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the lifecycle policy</p>
     */
    inline const PolicyDetails& GetPolicyDetails() const{ return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    inline void SetPolicyDetails(const PolicyDetails& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }
    inline void SetPolicyDetails(PolicyDetails&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }
    inline LifecyclePolicy& WithPolicyDetails(const PolicyDetails& value) { SetPolicyDetails(value); return *this;}
    inline LifecyclePolicy& WithPolicyDetails(PolicyDetails&& value) { SetPolicyDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline LifecyclePolicy& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline LifecyclePolicy& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline LifecyclePolicy& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline LifecyclePolicy& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline LifecyclePolicy& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline LifecyclePolicy& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline LifecyclePolicy& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline LifecyclePolicy& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline LifecyclePolicy& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }
    inline LifecyclePolicy& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline LifecyclePolicy& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline LifecyclePolicy& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the policy is a default lifecycle policy or a custom
     * lifecycle policy.</p> <ul> <li> <p> <code>true</code> - the policy is a default
     * policy.</p> </li> <li> <p> <code>false</code> - the policy is a custom
     * policy.</p> </li> </ul>
     */
    inline bool GetDefaultPolicy() const{ return m_defaultPolicy; }
    inline bool DefaultPolicyHasBeenSet() const { return m_defaultPolicyHasBeenSet; }
    inline void SetDefaultPolicy(bool value) { m_defaultPolicyHasBeenSet = true; m_defaultPolicy = value; }
    inline LifecyclePolicy& WithDefaultPolicy(bool value) { SetDefaultPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GettablePolicyStateValues m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified;
    bool m_dateModifiedHasBeenSet = false;

    PolicyDetails m_policyDetails;
    bool m_policyDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    bool m_defaultPolicy;
    bool m_defaultPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
