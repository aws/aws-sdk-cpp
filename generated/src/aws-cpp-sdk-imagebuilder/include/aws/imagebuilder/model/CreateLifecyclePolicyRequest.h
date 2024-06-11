﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecyclePolicyStatus.h>
#include <aws/imagebuilder/model/LifecyclePolicyResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/LifecyclePolicyResourceSelection.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetail.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class CreateLifecyclePolicyRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API CreateLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLifecyclePolicy"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the lifecycle policy to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateLifecyclePolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateLifecyclePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline const LifecyclePolicyStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LifecyclePolicyStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LifecyclePolicyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithStatus(const LifecyclePolicyStatus& value) { SetStatus(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithStatus(LifecyclePolicyStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to run lifecycle actions.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline CreateLifecyclePolicyRequest& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Image Builder resource that the lifecycle policy applies to.</p>
     */
    inline const LifecyclePolicyResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const LifecyclePolicyResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(LifecyclePolicyResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithResourceType(const LifecyclePolicyResourceType& value) { SetResourceType(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithResourceType(LifecyclePolicyResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details for the lifecycle policy rules.</p>
     */
    inline const Aws::Vector<LifecyclePolicyDetail>& GetPolicyDetails() const{ return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    inline void SetPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }
    inline void SetPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { SetPolicyDetails(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { SetPolicyDetails(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& AddPolicyDetails(const LifecyclePolicyDetail& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(value); return *this; }
    inline CreateLifecyclePolicyRequest& AddPolicyDetails(LifecyclePolicyDetail&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Selection criteria for the resources that the lifecycle policy applies to.
     * </p>
     */
    inline const LifecyclePolicyResourceSelection& GetResourceSelection() const{ return m_resourceSelection; }
    inline bool ResourceSelectionHasBeenSet() const { return m_resourceSelectionHasBeenSet; }
    inline void SetResourceSelection(const LifecyclePolicyResourceSelection& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = value; }
    inline void SetResourceSelection(LifecyclePolicyResourceSelection&& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithResourceSelection(const LifecyclePolicyResourceSelection& value) { SetResourceSelection(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithResourceSelection(LifecyclePolicyResourceSelection&& value) { SetResourceSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to apply to the lifecycle policy resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateLifecyclePolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LifecyclePolicyStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    LifecyclePolicyResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<LifecyclePolicyDetail> m_policyDetails;
    bool m_policyDetailsHasBeenSet = false;

    LifecyclePolicyResourceSelection m_resourceSelection;
    bool m_resourceSelectionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
