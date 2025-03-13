/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/IoT1ClickProjectsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot1click-projects/model/PlacementTemplate.h>
#include <utility>

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   */
  class UpdateProjectRequest : public IoT1ClickProjectsRequest
  {
  public:
    AWS_IOT1CLICKPROJECTS_API UpdateProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_IOT1CLICKPROJECTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the project to be updated.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    UpdateProjectRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional user-defined description for the project.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateProjectRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object defining the project update. Once a project has been created, you
     * cannot add device template names to the project. However, for a given
     * <code>placementTemplate</code>, you can update the associated
     * <code>callbackOverrides</code> for the device definition using this API.</p>
     */
    inline const PlacementTemplate& GetPlacementTemplate() const { return m_placementTemplate; }
    inline bool PlacementTemplateHasBeenSet() const { return m_placementTemplateHasBeenSet; }
    template<typename PlacementTemplateT = PlacementTemplate>
    void SetPlacementTemplate(PlacementTemplateT&& value) { m_placementTemplateHasBeenSet = true; m_placementTemplate = std::forward<PlacementTemplateT>(value); }
    template<typename PlacementTemplateT = PlacementTemplate>
    UpdateProjectRequest& WithPlacementTemplate(PlacementTemplateT&& value) { SetPlacementTemplate(std::forward<PlacementTemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PlacementTemplate m_placementTemplate;
    bool m_placementTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
