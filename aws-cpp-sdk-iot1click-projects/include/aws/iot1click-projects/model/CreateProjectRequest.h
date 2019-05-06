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
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/IoT1ClickProjectsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot1click-projects/model/PlacementTemplate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   */
  class AWS_IOT1CLICKPROJECTS_API CreateProjectRequest : public IoT1ClickProjectsRequest
  {
  public:
    CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the project to create.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project to create.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project to create.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project to create.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project to create.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project to create.</p>
     */
    inline CreateProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project to create.</p>
     */
    inline CreateProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project to create.</p>
     */
    inline CreateProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>An optional description for the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the project.</p>
     */
    inline CreateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the project.</p>
     */
    inline CreateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the project.</p>
     */
    inline CreateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The schema defining the placement to be created. A placement template defines
     * placement default attributes and device templates. You cannot add or remove
     * device templates after the project has been created. However, you can update
     * <code>callbackOverrides</code> for the device templates using the
     * <code>UpdateProject</code> API.</p>
     */
    inline const PlacementTemplate& GetPlacementTemplate() const{ return m_placementTemplate; }

    /**
     * <p>The schema defining the placement to be created. A placement template defines
     * placement default attributes and device templates. You cannot add or remove
     * device templates after the project has been created. However, you can update
     * <code>callbackOverrides</code> for the device templates using the
     * <code>UpdateProject</code> API.</p>
     */
    inline bool PlacementTemplateHasBeenSet() const { return m_placementTemplateHasBeenSet; }

    /**
     * <p>The schema defining the placement to be created. A placement template defines
     * placement default attributes and device templates. You cannot add or remove
     * device templates after the project has been created. However, you can update
     * <code>callbackOverrides</code> for the device templates using the
     * <code>UpdateProject</code> API.</p>
     */
    inline void SetPlacementTemplate(const PlacementTemplate& value) { m_placementTemplateHasBeenSet = true; m_placementTemplate = value; }

    /**
     * <p>The schema defining the placement to be created. A placement template defines
     * placement default attributes and device templates. You cannot add or remove
     * device templates after the project has been created. However, you can update
     * <code>callbackOverrides</code> for the device templates using the
     * <code>UpdateProject</code> API.</p>
     */
    inline void SetPlacementTemplate(PlacementTemplate&& value) { m_placementTemplateHasBeenSet = true; m_placementTemplate = std::move(value); }

    /**
     * <p>The schema defining the placement to be created. A placement template defines
     * placement default attributes and device templates. You cannot add or remove
     * device templates after the project has been created. However, you can update
     * <code>callbackOverrides</code> for the device templates using the
     * <code>UpdateProject</code> API.</p>
     */
    inline CreateProjectRequest& WithPlacementTemplate(const PlacementTemplate& value) { SetPlacementTemplate(value); return *this;}

    /**
     * <p>The schema defining the placement to be created. A placement template defines
     * placement default attributes and device templates. You cannot add or remove
     * device templates after the project has been created. However, you can update
     * <code>callbackOverrides</code> for the device templates using the
     * <code>UpdateProject</code> API.</p>
     */
    inline CreateProjectRequest& WithPlacementTemplate(PlacementTemplate&& value) { SetPlacementTemplate(std::move(value)); return *this;}


    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline CreateProjectRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline CreateProjectRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline CreateProjectRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline CreateProjectRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline CreateProjectRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline CreateProjectRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    PlacementTemplate m_placementTemplate;
    bool m_placementTemplateHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
