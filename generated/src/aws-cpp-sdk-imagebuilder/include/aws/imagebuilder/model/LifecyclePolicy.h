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


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline const LifecyclePolicyStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline void SetStatus(const LifecyclePolicyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline void SetStatus(LifecyclePolicyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline LifecyclePolicy& WithStatus(const LifecyclePolicyStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline LifecyclePolicy& WithStatus(LifecyclePolicyStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline LifecyclePolicy& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline LifecyclePolicy& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy. This is a custom role that you create.</p>
     */
    inline LifecyclePolicy& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


    /**
     * <p>The type of resources the lifecycle policy targets.</p>
     */
    inline const LifecyclePolicyResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resources the lifecycle policy targets.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resources the lifecycle policy targets.</p>
     */
    inline void SetResourceType(const LifecyclePolicyResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resources the lifecycle policy targets.</p>
     */
    inline void SetResourceType(LifecyclePolicyResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resources the lifecycle policy targets.</p>
     */
    inline LifecyclePolicy& WithResourceType(const LifecyclePolicyResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resources the lifecycle policy targets.</p>
     */
    inline LifecyclePolicy& WithResourceType(LifecyclePolicyResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline const Aws::Vector<LifecyclePolicyDetail>& GetPolicyDetails() const{ return m_policyDetails; }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline void SetPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline void SetPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& WithPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { SetPolicyDetails(value); return *this;}

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& WithPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { SetPolicyDetails(std::move(value)); return *this;}

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& AddPolicyDetails(const LifecyclePolicyDetail& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(value); return *this; }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& AddPolicyDetails(LifecyclePolicyDetail&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>Resource selection criteria used to run the lifecycle policy.</p>
     */
    inline const LifecyclePolicyResourceSelection& GetResourceSelection() const{ return m_resourceSelection; }

    /**
     * <p>Resource selection criteria used to run the lifecycle policy.</p>
     */
    inline bool ResourceSelectionHasBeenSet() const { return m_resourceSelectionHasBeenSet; }

    /**
     * <p>Resource selection criteria used to run the lifecycle policy.</p>
     */
    inline void SetResourceSelection(const LifecyclePolicyResourceSelection& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = value; }

    /**
     * <p>Resource selection criteria used to run the lifecycle policy.</p>
     */
    inline void SetResourceSelection(LifecyclePolicyResourceSelection&& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = std::move(value); }

    /**
     * <p>Resource selection criteria used to run the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithResourceSelection(const LifecyclePolicyResourceSelection& value) { SetResourceSelection(value); return *this;}

    /**
     * <p>Resource selection criteria used to run the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithResourceSelection(LifecyclePolicyResourceSelection&& value) { SetResourceSelection(std::move(value)); return *this;}


    /**
     * <p>The timestamp when Image Builder created the lifecycle policy resource.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The timestamp when Image Builder created the lifecycle policy resource.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The timestamp when Image Builder created the lifecycle policy resource.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The timestamp when Image Builder created the lifecycle policy resource.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The timestamp when Image Builder created the lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The timestamp when Image Builder created the lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>The timestamp when Image Builder updated the lifecycle policy resource.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The timestamp when Image Builder updated the lifecycle policy resource.</p>
     */
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }

    /**
     * <p>The timestamp when Image Builder updated the lifecycle policy resource.</p>
     */
    inline void SetDateUpdated(const Aws::Utils::DateTime& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The timestamp when Image Builder updated the lifecycle policy resource.</p>
     */
    inline void SetDateUpdated(Aws::Utils::DateTime&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }

    /**
     * <p>The timestamp when Image Builder updated the lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The timestamp when Image Builder updated the lifecycle policy resource.</p>
     */
    inline LifecyclePolicy& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}


    /**
     * <p>The timestamp for the last time Image Builder ran the lifecycle policy.</p>
     */
    inline const Aws::Utils::DateTime& GetDateLastRun() const{ return m_dateLastRun; }

    /**
     * <p>The timestamp for the last time Image Builder ran the lifecycle policy.</p>
     */
    inline bool DateLastRunHasBeenSet() const { return m_dateLastRunHasBeenSet; }

    /**
     * <p>The timestamp for the last time Image Builder ran the lifecycle policy.</p>
     */
    inline void SetDateLastRun(const Aws::Utils::DateTime& value) { m_dateLastRunHasBeenSet = true; m_dateLastRun = value; }

    /**
     * <p>The timestamp for the last time Image Builder ran the lifecycle policy.</p>
     */
    inline void SetDateLastRun(Aws::Utils::DateTime&& value) { m_dateLastRunHasBeenSet = true; m_dateLastRun = std::move(value); }

    /**
     * <p>The timestamp for the last time Image Builder ran the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithDateLastRun(const Aws::Utils::DateTime& value) { SetDateLastRun(value); return *this;}

    /**
     * <p>The timestamp for the last time Image Builder ran the lifecycle policy.</p>
     */
    inline LifecyclePolicy& WithDateLastRun(Aws::Utils::DateTime&& value) { SetDateLastRun(std::move(value)); return *this;}


    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicy& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicy& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicy& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicy& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicy& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicy& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicy& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicy& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicy& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
