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
#include <utility>

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   */
  class AWS_IOT1CLICKPROJECTS_API UpdateProjectRequest : public IoT1ClickProjectsRequest
  {
  public:
    UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the project to be updated.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline UpdateProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline UpdateProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project to be updated.</p>
     */
    inline UpdateProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>An optional user-defined description for the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional user-defined description for the project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional user-defined description for the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional user-defined description for the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional user-defined description for the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional user-defined description for the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional user-defined description for the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional user-defined description for the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object defining the project update. Once a project has been created, you
     * cannot add device template names to the project. However, for a given
     * <code>placementTemplate</code>, you can update the associated
     * <code>callbackOverrides</code> for the device definition using this API.</p>
     */
    inline const PlacementTemplate& GetPlacementTemplate() const{ return m_placementTemplate; }

    /**
     * <p>An object defining the project update. Once a project has been created, you
     * cannot add device template names to the project. However, for a given
     * <code>placementTemplate</code>, you can update the associated
     * <code>callbackOverrides</code> for the device definition using this API.</p>
     */
    inline bool PlacementTemplateHasBeenSet() const { return m_placementTemplateHasBeenSet; }

    /**
     * <p>An object defining the project update. Once a project has been created, you
     * cannot add device template names to the project. However, for a given
     * <code>placementTemplate</code>, you can update the associated
     * <code>callbackOverrides</code> for the device definition using this API.</p>
     */
    inline void SetPlacementTemplate(const PlacementTemplate& value) { m_placementTemplateHasBeenSet = true; m_placementTemplate = value; }

    /**
     * <p>An object defining the project update. Once a project has been created, you
     * cannot add device template names to the project. However, for a given
     * <code>placementTemplate</code>, you can update the associated
     * <code>callbackOverrides</code> for the device definition using this API.</p>
     */
    inline void SetPlacementTemplate(PlacementTemplate&& value) { m_placementTemplateHasBeenSet = true; m_placementTemplate = std::move(value); }

    /**
     * <p>An object defining the project update. Once a project has been created, you
     * cannot add device template names to the project. However, for a given
     * <code>placementTemplate</code>, you can update the associated
     * <code>callbackOverrides</code> for the device definition using this API.</p>
     */
    inline UpdateProjectRequest& WithPlacementTemplate(const PlacementTemplate& value) { SetPlacementTemplate(value); return *this;}

    /**
     * <p>An object defining the project update. Once a project has been created, you
     * cannot add device template names to the project. However, for a given
     * <code>placementTemplate</code>, you can update the associated
     * <code>callbackOverrides</code> for the device definition using this API.</p>
     */
    inline UpdateProjectRequest& WithPlacementTemplate(PlacementTemplate&& value) { SetPlacementTemplate(std::move(value)); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    PlacementTemplate m_placementTemplate;
    bool m_placementTemplateHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
