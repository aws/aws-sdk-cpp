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
    AWS_DLM_API LifecyclePolicySummary() = default;
    AWS_DLM_API LifecyclePolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API LifecyclePolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    LifecyclePolicySummary& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    LifecyclePolicySummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline GettablePolicyStateValues GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(GettablePolicyStateValues value) { m_stateHasBeenSet = true; m_state = value; }
    inline LifecyclePolicySummary& WithState(GettablePolicyStateValues value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    LifecyclePolicySummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    LifecyclePolicySummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of policy. <code>EBS_SNAPSHOT_MANAGEMENT</code> indicates that the
     * policy manages the lifecycle of Amazon EBS snapshots.
     * <code>IMAGE_MANAGEMENT</code> indicates that the policy manages the lifecycle of
     * EBS-backed AMIs. <code>EVENT_BASED_POLICY</code> indicates that the policy
     * automates cross-account snapshot copies for snapshots that are shared with your
     * account.</p>
     */
    inline PolicyTypeValues GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyTypeValues value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline LifecyclePolicySummary& WithPolicyType(PolicyTypeValues value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> The type of default policy. Values
     * include:</p> <ul> <li> <p> <code>VOLUME</code> - Default policy for EBS
     * snapshots</p> </li> <li> <p> <code>INSTANCE</code> - Default policy for
     * EBS-backed AMIs</p> </li> </ul>
     */
    inline bool GetDefaultPolicy() const { return m_defaultPolicy; }
    inline bool DefaultPolicyHasBeenSet() const { return m_defaultPolicyHasBeenSet; }
    inline void SetDefaultPolicy(bool value) { m_defaultPolicyHasBeenSet = true; m_defaultPolicy = value; }
    inline LifecyclePolicySummary& WithDefaultPolicy(bool value) { SetDefaultPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GettablePolicyStateValues m_state{GettablePolicyStateValues::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    PolicyTypeValues m_policyType{PolicyTypeValues::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    bool m_defaultPolicy{false};
    bool m_defaultPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
