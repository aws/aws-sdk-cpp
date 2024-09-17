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
    AWS_IMAGEBUILDER_API LifecyclePolicy();
    AWS_IMAGEBUILDER_API LifecyclePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline LifecyclePolicy& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline LifecyclePolicy& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline LifecyclePolicy& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LifecyclePolicy& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LifecyclePolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LifecyclePolicy& WithName(const char* value) { SetName(value); return *this;}
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
    inline LifecyclePolicy& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline LifecyclePolicy& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline LifecyclePolicy& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline const LifecyclePolicyStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LifecyclePolicyStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LifecyclePolicyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LifecyclePolicy& WithStatus(const LifecyclePolicyStatus& value) { SetStatus(value); return *this;}
    inline LifecyclePolicy& WithStatus(LifecyclePolicyStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline LifecyclePolicy& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline LifecyclePolicy& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline LifecyclePolicy& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resources the lifecycle policy targets.</p>
     */
    inline const LifecyclePolicyResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const LifecyclePolicyResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(LifecyclePolicyResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline LifecyclePolicy& WithResourceType(const LifecyclePolicyResourceType& value) { SetResourceType(value); return *this;}
    inline LifecyclePolicy& WithResourceType(LifecyclePolicyResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline const Aws::Vector<LifecyclePolicyDetail>& GetPolicyDetails() const{ return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    inline void SetPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }
    inline void SetPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }
    inline LifecyclePolicy& WithPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { SetPolicyDetails(value); return *this;}
    inline LifecyclePolicy& WithPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { SetPolicyDetails(std::move(value)); return *this;}
    inline LifecyclePolicy& AddPolicyDetails(const LifecyclePolicyDetail& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(value); return *this; }
    inline LifecyclePolicy& AddPolicyDetails(LifecyclePolicyDetail&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Resource selection criteria used to run the lifecycle policy.</p>
     */
    inline const LifecyclePolicyResourceSelection& GetResourceSelection() const{ return m_resourceSelection; }
    inline bool ResourceSelectionHasBeenSet() const { return m_resourceSelectionHasBeenSet; }
    inline void SetResourceSelection(const LifecyclePolicyResourceSelection& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = value; }
    inline void SetResourceSelection(LifecyclePolicyResourceSelection&& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = std::move(value); }
    inline LifecyclePolicy& WithResourceSelection(const LifecyclePolicyResourceSelection& value) { SetResourceSelection(value); return *this;}
    inline LifecyclePolicy& WithResourceSelection(LifecyclePolicyResourceSelection&& value) { SetResourceSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when Image Builder created the lifecycle policy resource.</p>
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
     * <p>The timestamp when Image Builder updated the lifecycle policy resource.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }
    inline LifecyclePolicy& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}
    inline LifecyclePolicy& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for the last time Image Builder ran the lifecycle policy.</p>
     */
    inline const Aws::Utils::DateTime& GetDateLastRun() const{ return m_dateLastRun; }
    inline bool DateLastRunHasBeenSet() const { return m_dateLastRunHasBeenSet; }
    inline void SetDateLastRun(const Aws::Utils::DateTime& value) { m_dateLastRunHasBeenSet = true; m_dateLastRun = value; }
    inline void SetDateLastRun(Aws::Utils::DateTime&& value) { m_dateLastRunHasBeenSet = true; m_dateLastRun = std::move(value); }
    inline LifecyclePolicy& WithDateLastRun(const Aws::Utils::DateTime& value) { SetDateLastRun(value); return *this;}
    inline LifecyclePolicy& WithDateLastRun(Aws::Utils::DateTime&& value) { SetDateLastRun(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
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
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateUpdated;
    bool m_dateUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateLastRun;
    bool m_dateLastRunHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
