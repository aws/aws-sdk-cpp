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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/GettablePolicyStateValues.h>
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
  class AWS_DLM_API GetLifecyclePoliciesRequest : public DLMRequest
  {
  public:
    GetLifecyclePoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLifecyclePolicies"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyIds() const{ return m_policyIds; }

    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline bool PolicyIdsHasBeenSet() const { return m_policyIdsHasBeenSet; }

    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline void SetPolicyIds(const Aws::Vector<Aws::String>& value) { m_policyIdsHasBeenSet = true; m_policyIds = value; }

    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline void SetPolicyIds(Aws::Vector<Aws::String>&& value) { m_policyIdsHasBeenSet = true; m_policyIds = std::move(value); }

    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline GetLifecyclePoliciesRequest& WithPolicyIds(const Aws::Vector<Aws::String>& value) { SetPolicyIds(value); return *this;}

    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline GetLifecyclePoliciesRequest& WithPolicyIds(Aws::Vector<Aws::String>&& value) { SetPolicyIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline GetLifecyclePoliciesRequest& AddPolicyIds(const Aws::String& value) { m_policyIdsHasBeenSet = true; m_policyIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline GetLifecyclePoliciesRequest& AddPolicyIds(Aws::String&& value) { m_policyIdsHasBeenSet = true; m_policyIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the data lifecycle policies.</p>
     */
    inline GetLifecyclePoliciesRequest& AddPolicyIds(const char* value) { m_policyIdsHasBeenSet = true; m_policyIds.push_back(value); return *this; }


    /**
     * <p>The activation state.</p>
     */
    inline const GettablePolicyStateValues& GetState() const{ return m_state; }

    /**
     * <p>The activation state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The activation state.</p>
     */
    inline void SetState(const GettablePolicyStateValues& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The activation state.</p>
     */
    inline void SetState(GettablePolicyStateValues&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The activation state.</p>
     */
    inline GetLifecyclePoliciesRequest& WithState(const GettablePolicyStateValues& value) { SetState(value); return *this;}

    /**
     * <p>The activation state.</p>
     */
    inline GetLifecyclePoliciesRequest& WithState(GettablePolicyStateValues&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The resource type.</p>
     */
    inline const Aws::Vector<ResourceTypeValues>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline GetLifecyclePoliciesRequest& WithResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline GetLifecyclePoliciesRequest& WithResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline GetLifecyclePoliciesRequest& AddResourceTypes(const ResourceTypeValues& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource type.</p>
     */
    inline GetLifecyclePoliciesRequest& AddResourceTypes(ResourceTypeValues&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetTags() const{ return m_targetTags; }

    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline bool TargetTagsHasBeenSet() const { return m_targetTagsHasBeenSet; }

    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline void SetTargetTags(const Aws::Vector<Aws::String>& value) { m_targetTagsHasBeenSet = true; m_targetTags = value; }

    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline void SetTargetTags(Aws::Vector<Aws::String>&& value) { m_targetTagsHasBeenSet = true; m_targetTags = std::move(value); }

    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline GetLifecyclePoliciesRequest& WithTargetTags(const Aws::Vector<Aws::String>& value) { SetTargetTags(value); return *this;}

    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline GetLifecyclePoliciesRequest& WithTargetTags(Aws::Vector<Aws::String>&& value) { SetTargetTags(std::move(value)); return *this;}

    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline GetLifecyclePoliciesRequest& AddTargetTags(const Aws::String& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(value); return *this; }

    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline GetLifecyclePoliciesRequest& AddTargetTags(Aws::String&& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(std::move(value)); return *this; }

    /**
     * <p>The target tag for a policy.</p> <p>Tags are strings in the format
     * <code>key=value</code>.</p>
     */
    inline GetLifecyclePoliciesRequest& AddTargetTags(const char* value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(value); return *this; }


    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagsToAdd() const{ return m_tagsToAdd; }

    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }

    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline void SetTagsToAdd(const Aws::Vector<Aws::String>& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = value; }

    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline void SetTagsToAdd(Aws::Vector<Aws::String>&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::move(value); }

    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline GetLifecyclePoliciesRequest& WithTagsToAdd(const Aws::Vector<Aws::String>& value) { SetTagsToAdd(value); return *this;}

    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline GetLifecyclePoliciesRequest& WithTagsToAdd(Aws::Vector<Aws::String>&& value) { SetTagsToAdd(std::move(value)); return *this;}

    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline GetLifecyclePoliciesRequest& AddTagsToAdd(const Aws::String& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(value); return *this; }

    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline GetLifecyclePoliciesRequest& AddTagsToAdd(Aws::String&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>The tags to add to objects created by the policy.</p> <p>Tags are strings in
     * the format <code>key=value</code>.</p> <p>These user-defined tags are added in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline GetLifecyclePoliciesRequest& AddTagsToAdd(const char* value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_policyIds;
    bool m_policyIdsHasBeenSet;

    GettablePolicyStateValues m_state;
    bool m_stateHasBeenSet;

    Aws::Vector<ResourceTypeValues> m_resourceTypes;
    bool m_resourceTypesHasBeenSet;

    Aws::Vector<Aws::String> m_targetTags;
    bool m_targetTagsHasBeenSet;

    Aws::Vector<Aws::String> m_tagsToAdd;
    bool m_tagsToAddHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
