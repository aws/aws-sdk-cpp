/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecyclePolicyStatus.h>
#include <aws/imagebuilder/model/LifecyclePolicyResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/LifecyclePolicyResourceSelection.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetail.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The configuration details for a lifecycle policy resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicy">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicy
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicy() = default;
    AWS_IMAGEBUILDER_API LifecyclePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LifecyclePolicy& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LifecyclePolicy& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    LifecyclePolicy& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline LifecyclePolicyStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LifecyclePolicyStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LifecyclePolicy& WithStatus(LifecyclePolicyStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    LifecyclePolicy& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resources the lifecycle policy targets.</p>
     */
    inline LifecyclePolicyResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(LifecyclePolicyResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline LifecyclePolicy& WithResourceType(LifecyclePolicyResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline const Aws::Vector<LifecyclePolicyDetail>& GetPolicyDetails() const { return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    template<typename PolicyDetailsT = Aws::Vector<LifecyclePolicyDetail>>
    void SetPolicyDetails(PolicyDetailsT&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::forward<PolicyDetailsT>(value); }
    template<typename PolicyDetailsT = Aws::Vector<LifecyclePolicyDetail>>
    LifecyclePolicy& WithPolicyDetails(PolicyDetailsT&& value) { SetPolicyDetails(std::forward<PolicyDetailsT>(value)); return *this;}
    template<typename PolicyDetailsT = LifecyclePolicyDetail>
    LifecyclePolicy& AddPolicyDetails(PolicyDetailsT&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.emplace_back(std::forward<PolicyDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Resource selection criteria used to run the lifecycle policy.</p>
     */
    inline const LifecyclePolicyResourceSelection& GetResourceSelection() const { return m_resourceSelection; }
    inline bool ResourceSelectionHasBeenSet() const { return m_resourceSelectionHasBeenSet; }
    template<typename ResourceSelectionT = LifecyclePolicyResourceSelection>
    void SetResourceSelection(ResourceSelectionT&& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = std::forward<ResourceSelectionT>(value); }
    template<typename ResourceSelectionT = LifecyclePolicyResourceSelection>
    LifecyclePolicy& WithResourceSelection(ResourceSelectionT&& value) { SetResourceSelection(std::forward<ResourceSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when Image Builder created the lifecycle policy resource.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    LifecyclePolicy& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when Image Builder updated the lifecycle policy resource.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const { return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    void SetDateUpdated(DateUpdatedT&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::forward<DateUpdatedT>(value); }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    LifecyclePolicy& WithDateUpdated(DateUpdatedT&& value) { SetDateUpdated(std::forward<DateUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for the last time Image Builder ran the lifecycle policy.</p>
     */
    inline const Aws::Utils::DateTime& GetDateLastRun() const { return m_dateLastRun; }
    inline bool DateLastRunHasBeenSet() const { return m_dateLastRunHasBeenSet; }
    template<typename DateLastRunT = Aws::Utils::DateTime>
    void SetDateLastRun(DateLastRunT&& value) { m_dateLastRunHasBeenSet = true; m_dateLastRun = std::forward<DateLastRunT>(value); }
    template<typename DateLastRunT = Aws::Utils::DateTime>
    LifecyclePolicy& WithDateLastRun(DateLastRunT&& value) { SetDateLastRun(std::forward<DateLastRunT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    LifecyclePolicy& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    LifecyclePolicy& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateUpdated{};
    bool m_dateUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateLastRun{};
    bool m_dateLastRunHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
