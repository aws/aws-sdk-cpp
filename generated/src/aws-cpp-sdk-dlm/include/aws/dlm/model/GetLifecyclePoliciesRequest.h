/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/DLMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/GettablePolicyStateValues.h>
#include <aws/dlm/model/DefaultPoliciesTypeValues.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/ResourceTypeValues.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DLM
{
namespace Model
{

  /**
   */
  class GetLifecyclePoliciesRequest : public DLMRequest
  {
  public:
    AWS_DLM_API GetLifecyclePoliciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLifecyclePolicies"; }

    AWS_DLM_API Aws::String SerializePayload() const override;

    AWS_DLM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyIds() const { return m_policyIds; }
    inline bool PolicyIdsHasBeenSet() const { return m_policyIdsHasBeenSet; }
    template<typename PolicyIdsT = Aws::Vector<Aws::String>>
    void SetPolicyIds(PolicyIdsT&& value) { m_policyIdsHasBeenSet = true; m_policyIds = std::forward<PolicyIdsT>(value); }
    template<typename PolicyIdsT = Aws::Vector<Aws::String>>
    GetLifecyclePoliciesRequest& WithPolicyIds(PolicyIdsT&& value) { SetPolicyIds(std::forward<PolicyIdsT>(value)); return *this;}
    template<typename PolicyIdsT = Aws::String>
    GetLifecyclePoliciesRequest& AddPolicyIds(PolicyIdsT&& value) { m_policyIdsHasBeenSet = true; m_policyIds.emplace_back(std::forward<PolicyIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The activation state.</p>
     */
    inline GettablePolicyStateValues GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(GettablePolicyStateValues value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetLifecyclePoliciesRequest& WithState(GettablePolicyStateValues value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::Vector<ResourceTypeValues>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceTypeValues>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceTypeValues>>
    GetLifecyclePoliciesRequest& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline GetLifecyclePoliciesRequest& AddResourceTypes(ResourceTypeValues value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetTags() const { return m_targetTags; }
    inline bool TargetTagsHasBeenSet() const { return m_targetTagsHasBeenSet; }
    template<typename TargetTagsT = Aws::Vector<Aws::String>>
    void SetTargetTags(TargetTagsT&& value) { m_targetTagsHasBeenSet = true; m_targetTags = std::forward<TargetTagsT>(value); }
    template<typename TargetTagsT = Aws::Vector<Aws::String>>
    GetLifecyclePoliciesRequest& WithTargetTags(TargetTagsT&& value) { SetTargetTags(std::forward<TargetTagsT>(value)); return *this;}
    template<typename TargetTagsT = Aws::String>
    GetLifecyclePoliciesRequest& AddTargetTags(TargetTagsT&& value) { m_targetTagsHasBeenSet = true; m_targetTags.emplace_back(std::forward<TargetTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the Amazon Web Services-added lifecycle tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToAdd() const { return m_tagsToAdd; }
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }
    template<typename TagsToAddT = Aws::Vector<Aws::String>>
    void SetTagsToAdd(TagsToAddT&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::forward<TagsToAddT>(value); }
    template<typename TagsToAddT = Aws::Vector<Aws::String>>
    GetLifecyclePoliciesRequest& WithTagsToAdd(TagsToAddT&& value) { SetTagsToAdd(std::forward<TagsToAddT>(value)); return *this;}
    template<typename TagsToAddT = Aws::String>
    GetLifecyclePoliciesRequest& AddTagsToAdd(TagsToAddT&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.emplace_back(std::forward<TagsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies the type of default policy to get.
     * Specify one of the following:</p> <ul> <li> <p> <code>VOLUME</code> - To get
     * only the default policy for EBS snapshots</p> </li> <li> <p>
     * <code>INSTANCE</code> - To get only the default policy for EBS-backed AMIs</p>
     * </li> <li> <p> <code>ALL</code> - To get all default policies</p> </li> </ul>
     */
    inline DefaultPoliciesTypeValues GetDefaultPolicyType() const { return m_defaultPolicyType; }
    inline bool DefaultPolicyTypeHasBeenSet() const { return m_defaultPolicyTypeHasBeenSet; }
    inline void SetDefaultPolicyType(DefaultPoliciesTypeValues value) { m_defaultPolicyTypeHasBeenSet = true; m_defaultPolicyType = value; }
    inline GetLifecyclePoliciesRequest& WithDefaultPolicyType(DefaultPoliciesTypeValues value) { SetDefaultPolicyType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_policyIds;
    bool m_policyIdsHasBeenSet = false;

    GettablePolicyStateValues m_state{GettablePolicyStateValues::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<ResourceTypeValues> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetTags;
    bool m_targetTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagsToAdd;
    bool m_tagsToAddHasBeenSet = false;

    DefaultPoliciesTypeValues m_defaultPolicyType{DefaultPoliciesTypeValues::NOT_SET};
    bool m_defaultPolicyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
