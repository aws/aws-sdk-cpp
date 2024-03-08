/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecyclePolicyStatus.h>
#include <aws/imagebuilder/model/LifecyclePolicyResourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Contains a summary of lifecycle policy resources.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicySummary">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicySummary
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicySummary();
    AWS_IMAGEBUILDER_API LifecyclePolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy summary resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy summary resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy summary resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy summary resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy summary resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy summary resource.</p>
     */
    inline LifecyclePolicySummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy summary resource.</p>
     */
    inline LifecyclePolicySummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy summary resource.</p>
     */
    inline LifecyclePolicySummary& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline LifecyclePolicySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithName(const char* value) { SetName(value); return *this;}


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
    inline LifecyclePolicySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The lifecycle policy resource status.</p>
     */
    inline const LifecyclePolicyStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The lifecycle policy resource status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The lifecycle policy resource status.</p>
     */
    inline void SetStatus(const LifecyclePolicyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The lifecycle policy resource status.</p>
     */
    inline void SetStatus(LifecyclePolicyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The lifecycle policy resource status.</p>
     */
    inline LifecyclePolicySummary& WithStatus(const LifecyclePolicyStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The lifecycle policy resource status.</p>
     */
    inline LifecyclePolicySummary& WithStatus(LifecyclePolicyStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to run the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


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
    inline LifecyclePolicySummary& WithResourceType(const LifecyclePolicyResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resources the lifecycle policy targets.</p>
     */
    inline LifecyclePolicySummary& WithResourceType(LifecyclePolicyResourceType&& value) { SetResourceType(std::move(value)); return *this;}


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
    inline LifecyclePolicySummary& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The timestamp when Image Builder created the lifecycle policy resource.</p>
     */
    inline LifecyclePolicySummary& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


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
    inline LifecyclePolicySummary& WithDateUpdated(const Aws::Utils::DateTime& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The timestamp when Image Builder updated the lifecycle policy resource.</p>
     */
    inline LifecyclePolicySummary& WithDateUpdated(Aws::Utils::DateTime&& value) { SetDateUpdated(std::move(value)); return *this;}


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
    inline LifecyclePolicySummary& WithDateLastRun(const Aws::Utils::DateTime& value) { SetDateLastRun(value); return *this;}

    /**
     * <p>The timestamp for the last time Image Builder ran the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithDateLastRun(Aws::Utils::DateTime&& value) { SetDateLastRun(std::move(value)); return *this;}


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
    inline LifecyclePolicySummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicySummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicySummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicySummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicySummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicySummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicySummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicySummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help manage your lifecycle policy resources, you can assign your own
     * metadata to each resource in the form of tags. Each tag consists of a key and an
     * optional value, both of which you define.</p>
     */
    inline LifecyclePolicySummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
