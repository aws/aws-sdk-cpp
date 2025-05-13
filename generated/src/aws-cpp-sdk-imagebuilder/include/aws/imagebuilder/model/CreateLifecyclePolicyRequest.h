/**
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
    AWS_IMAGEBUILDER_API CreateLifecyclePolicyRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateLifecyclePolicyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional description for the lifecycle policy.</p>
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
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline LifecyclePolicyStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LifecyclePolicyStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateLifecyclePolicyRequest& WithStatus(LifecyclePolicyStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to run lifecycle actions.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    CreateLifecyclePolicyRequest& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Image Builder resource that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(LifecyclePolicyResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline CreateLifecyclePolicyRequest& WithResourceType(LifecyclePolicyResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details for the lifecycle policy rules.</p>
     */
    inline const Aws::Vector<LifecyclePolicyDetail>& GetPolicyDetails() const { return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    template<typename PolicyDetailsT = Aws::Vector<LifecyclePolicyDetail>>
    void SetPolicyDetails(PolicyDetailsT&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::forward<PolicyDetailsT>(value); }
    template<typename PolicyDetailsT = Aws::Vector<LifecyclePolicyDetail>>
    CreateLifecyclePolicyRequest& WithPolicyDetails(PolicyDetailsT&& value) { SetPolicyDetails(std::forward<PolicyDetailsT>(value)); return *this;}
    template<typename PolicyDetailsT = LifecyclePolicyDetail>
    CreateLifecyclePolicyRequest& AddPolicyDetails(PolicyDetailsT&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.emplace_back(std::forward<PolicyDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Selection criteria for the resources that the lifecycle policy applies to.
     * </p>
     */
    inline const LifecyclePolicyResourceSelection& GetResourceSelection() const { return m_resourceSelection; }
    inline bool ResourceSelectionHasBeenSet() const { return m_resourceSelectionHasBeenSet; }
    template<typename ResourceSelectionT = LifecyclePolicyResourceSelection>
    void SetResourceSelection(ResourceSelectionT&& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = std::forward<ResourceSelectionT>(value); }
    template<typename ResourceSelectionT = LifecyclePolicyResourceSelection>
    CreateLifecyclePolicyRequest& WithResourceSelection(ResourceSelectionT&& value) { SetResourceSelection(std::forward<ResourceSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to apply to the lifecycle policy resource.</p>
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
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateLifecyclePolicyRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LifecyclePolicyStatus m_status{LifecyclePolicyStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    LifecyclePolicyResourceType m_resourceType{LifecyclePolicyResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<LifecyclePolicyDetail> m_policyDetails;
    bool m_policyDetailsHasBeenSet = false;

    LifecyclePolicyResourceSelection m_resourceSelection;
    bool m_resourceSelectionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
