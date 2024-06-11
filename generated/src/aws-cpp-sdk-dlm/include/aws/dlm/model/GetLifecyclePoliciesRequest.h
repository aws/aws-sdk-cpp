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
    AWS_DLM_API GetLifecyclePoliciesRequest();

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
    inline const Aws::Vector<Aws::String>& GetPolicyIds() const{ return m_policyIds; }
    inline bool PolicyIdsHasBeenSet() const { return m_policyIdsHasBeenSet; }
    inline void SetPolicyIds(const Aws::Vector<Aws::String>& value) { m_policyIdsHasBeenSet = true; m_policyIds = value; }
    inline void SetPolicyIds(Aws::Vector<Aws::String>&& value) { m_policyIdsHasBeenSet = true; m_policyIds = std::move(value); }
    inline GetLifecyclePoliciesRequest& WithPolicyIds(const Aws::Vector<Aws::String>& value) { SetPolicyIds(value); return *this;}
    inline GetLifecyclePoliciesRequest& WithPolicyIds(Aws::Vector<Aws::String>&& value) { SetPolicyIds(std::move(value)); return *this;}
    inline GetLifecyclePoliciesRequest& AddPolicyIds(const Aws::String& value) { m_policyIdsHasBeenSet = true; m_policyIds.push_back(value); return *this; }
    inline GetLifecyclePoliciesRequest& AddPolicyIds(Aws::String&& value) { m_policyIdsHasBeenSet = true; m_policyIds.push_back(std::move(value)); return *this; }
    inline GetLifecyclePoliciesRequest& AddPolicyIds(const char* value) { m_policyIdsHasBeenSet = true; m_policyIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The activation state.</p>
     */
    inline const GettablePolicyStateValues& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const GettablePolicyStateValues& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(GettablePolicyStateValues&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline GetLifecyclePoliciesRequest& WithState(const GettablePolicyStateValues& value) { SetState(value); return *this;}
    inline GetLifecyclePoliciesRequest& WithState(GettablePolicyStateValues&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::Vector<ResourceTypeValues>& GetResourceTypes() const{ return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    inline void SetResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }
    inline GetLifecyclePoliciesRequest& WithResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { SetResourceTypes(value); return *this;}
    inline GetLifecyclePoliciesRequest& WithResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline GetLifecyclePoliciesRequest& AddResourceTypes(const ResourceTypeValues& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    inline GetLifecyclePoliciesRequest& AddResourceTypes(ResourceTypeValues&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetTags() const{ return m_targetTags; }
    inline bool TargetTagsHasBeenSet() const { return m_targetTagsHasBeenSet; }
    inline void SetTargetTags(const Aws::Vector<Aws::String>& value) { m_targetTagsHasBeenSet = true; m_targetTags = value; }
    inline void SetTargetTags(Aws::Vector<Aws::String>&& value) { m_targetTagsHasBeenSet = true; m_targetTags = std::move(value); }
    inline GetLifecyclePoliciesRequest& WithTargetTags(const Aws::Vector<Aws::String>& value) { SetTargetTags(value); return *this;}
    inline GetLifecyclePoliciesRequest& WithTargetTags(Aws::Vector<Aws::String>&& value) { SetTargetTags(std::move(value)); return *this;}
    inline GetLifecyclePoliciesRequest& AddTargetTags(const Aws::String& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(value); return *this; }
    inline GetLifecyclePoliciesRequest& AddTargetTags(Aws::String&& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(std::move(value)); return *this; }
    inline GetLifecyclePoliciesRequest& AddTargetTags(const char* value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the Amazon Web Services-added lifecycle tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToAdd() const{ return m_tagsToAdd; }
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }
    inline void SetTagsToAdd(const Aws::Vector<Aws::String>& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = value; }
    inline void SetTagsToAdd(Aws::Vector<Aws::String>&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::move(value); }
    inline GetLifecyclePoliciesRequest& WithTagsToAdd(const Aws::Vector<Aws::String>& value) { SetTagsToAdd(value); return *this;}
    inline GetLifecyclePoliciesRequest& WithTagsToAdd(Aws::Vector<Aws::String>&& value) { SetTagsToAdd(std::move(value)); return *this;}
    inline GetLifecyclePoliciesRequest& AddTagsToAdd(const Aws::String& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(value); return *this; }
    inline GetLifecyclePoliciesRequest& AddTagsToAdd(Aws::String&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(std::move(value)); return *this; }
    inline GetLifecyclePoliciesRequest& AddTagsToAdd(const char* value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies the type of default policy to get.
     * Specify one of the following:</p> <ul> <li> <p> <code>VOLUME</code> - To get
     * only the default policy for EBS snapshots</p> </li> <li> <p>
     * <code>INSTANCE</code> - To get only the default policy for EBS-backed AMIs</p>
     * </li> <li> <p> <code>ALL</code> - To get all default policies</p> </li> </ul>
     */
    inline const DefaultPoliciesTypeValues& GetDefaultPolicyType() const{ return m_defaultPolicyType; }
    inline bool DefaultPolicyTypeHasBeenSet() const { return m_defaultPolicyTypeHasBeenSet; }
    inline void SetDefaultPolicyType(const DefaultPoliciesTypeValues& value) { m_defaultPolicyTypeHasBeenSet = true; m_defaultPolicyType = value; }
    inline void SetDefaultPolicyType(DefaultPoliciesTypeValues&& value) { m_defaultPolicyTypeHasBeenSet = true; m_defaultPolicyType = std::move(value); }
    inline GetLifecyclePoliciesRequest& WithDefaultPolicyType(const DefaultPoliciesTypeValues& value) { SetDefaultPolicyType(value); return *this;}
    inline GetLifecyclePoliciesRequest& WithDefaultPolicyType(DefaultPoliciesTypeValues&& value) { SetDefaultPolicyType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_policyIds;
    bool m_policyIdsHasBeenSet = false;

    GettablePolicyStateValues m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<ResourceTypeValues> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetTags;
    bool m_targetTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagsToAdd;
    bool m_tagsToAddHasBeenSet = false;

    DefaultPoliciesTypeValues m_defaultPolicyType;
    bool m_defaultPolicyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
