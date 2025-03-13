/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateProjectRequest : public IoT1ClickProjectsRequest
  {
  public:
    AWS_IOT1CLICKPROJECTS_API CreateProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_IOT1CLICKPROJECTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the project to create.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CreateProjectRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the project.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateProjectRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema defining the placement to be created. A placement template defines
     * placement default attributes and device templates. You cannot add or remove
     * device templates after the project has been created. However, you can update
     * <code>callbackOverrides</code> for the device templates using the
     * <code>UpdateProject</code> API.</p>
     */
    inline const PlacementTemplate& GetPlacementTemplate() const { return m_placementTemplate; }
    inline bool PlacementTemplateHasBeenSet() const { return m_placementTemplateHasBeenSet; }
    template<typename PlacementTemplateT = PlacementTemplate>
    void SetPlacementTemplate(PlacementTemplateT&& value) { m_placementTemplateHasBeenSet = true; m_placementTemplate = std::forward<PlacementTemplateT>(value); }
    template<typename PlacementTemplateT = PlacementTemplate>
    CreateProjectRequest& WithPlacementTemplate(PlacementTemplateT&& value) { SetPlacementTemplate(std::forward<PlacementTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional tags (metadata key/value pairs) to be associated with the project.
     * For example, <code>{ {"key1": "value1", "key2": "value2"} }</code>. For more
     * information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
     * Tagging Strategies</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateProjectRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateProjectRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PlacementTemplate m_placementTemplate;
    bool m_placementTemplateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
