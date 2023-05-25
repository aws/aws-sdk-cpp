/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/GettablePolicyStateValues.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dlm/model/PolicyTypeValues.h>
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
   * <p>Summary information about a lifecycle policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/LifecyclePolicySummary">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicySummary
  {
  public:
    AWS_DLM_API LifecyclePolicySummary();
    AWS_DLM_API LifecyclePolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API LifecyclePolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline LifecyclePolicySummary& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline const GettablePolicyStateValues& GetState() const{ return m_state; }

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline void SetState(const GettablePolicyStateValues& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline void SetState(GettablePolicyStateValues&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithState(const GettablePolicyStateValues& value) { SetState(value); return *this;}

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithState(GettablePolicyStateValues&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline LifecyclePolicySummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline LifecyclePolicySummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline LifecyclePolicySummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline LifecyclePolicySummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline LifecyclePolicySummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline LifecyclePolicySummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline LifecyclePolicySummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline LifecyclePolicySummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline LifecyclePolicySummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of policy. <code>EBS_SNAPSHOT_MANAGEMENT</code> indicates that the
     * policy manages the lifecycle of Amazon EBS snapshots.
     * <code>IMAGE_MANAGEMENT</code> indicates that the policy manages the lifecycle of
     * EBS-backed AMIs. <code>EVENT_BASED_POLICY</code> indicates that the policy
     * automates cross-account snapshot copies for snapshots that are shared with your
     * account.</p>
     */
    inline const PolicyTypeValues& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of policy. <code>EBS_SNAPSHOT_MANAGEMENT</code> indicates that the
     * policy manages the lifecycle of Amazon EBS snapshots.
     * <code>IMAGE_MANAGEMENT</code> indicates that the policy manages the lifecycle of
     * EBS-backed AMIs. <code>EVENT_BASED_POLICY</code> indicates that the policy
     * automates cross-account snapshot copies for snapshots that are shared with your
     * account.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of policy. <code>EBS_SNAPSHOT_MANAGEMENT</code> indicates that the
     * policy manages the lifecycle of Amazon EBS snapshots.
     * <code>IMAGE_MANAGEMENT</code> indicates that the policy manages the lifecycle of
     * EBS-backed AMIs. <code>EVENT_BASED_POLICY</code> indicates that the policy
     * automates cross-account snapshot copies for snapshots that are shared with your
     * account.</p>
     */
    inline void SetPolicyType(const PolicyTypeValues& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of policy. <code>EBS_SNAPSHOT_MANAGEMENT</code> indicates that the
     * policy manages the lifecycle of Amazon EBS snapshots.
     * <code>IMAGE_MANAGEMENT</code> indicates that the policy manages the lifecycle of
     * EBS-backed AMIs. <code>EVENT_BASED_POLICY</code> indicates that the policy
     * automates cross-account snapshot copies for snapshots that are shared with your
     * account.</p>
     */
    inline void SetPolicyType(PolicyTypeValues&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of policy. <code>EBS_SNAPSHOT_MANAGEMENT</code> indicates that the
     * policy manages the lifecycle of Amazon EBS snapshots.
     * <code>IMAGE_MANAGEMENT</code> indicates that the policy manages the lifecycle of
     * EBS-backed AMIs. <code>EVENT_BASED_POLICY</code> indicates that the policy
     * automates cross-account snapshot copies for snapshots that are shared with your
     * account.</p>
     */
    inline LifecyclePolicySummary& WithPolicyType(const PolicyTypeValues& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of policy. <code>EBS_SNAPSHOT_MANAGEMENT</code> indicates that the
     * policy manages the lifecycle of Amazon EBS snapshots.
     * <code>IMAGE_MANAGEMENT</code> indicates that the policy manages the lifecycle of
     * EBS-backed AMIs. <code>EVENT_BASED_POLICY</code> indicates that the policy
     * automates cross-account snapshot copies for snapshots that are shared with your
     * account.</p>
     */
    inline LifecyclePolicySummary& WithPolicyType(PolicyTypeValues&& value) { SetPolicyType(std::move(value)); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GettablePolicyStateValues m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    PolicyTypeValues m_policyType;
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
