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
#include <utility>

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   */
  class AWS_IOT1CLICKPROJECTS_API DisassociateDeviceFromPlacementRequest : public IoT1ClickProjectsRequest
  {
  public:
    DisassociateDeviceFromPlacementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateDeviceFromPlacement"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the project that contains the placement.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project that contains the placement.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project that contains the placement.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project that contains the placement.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project that contains the placement.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project that contains the placement.</p>
     */
    inline DisassociateDeviceFromPlacementRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project that contains the placement.</p>
     */
    inline DisassociateDeviceFromPlacementRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project that contains the placement.</p>
     */
    inline DisassociateDeviceFromPlacementRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The name of the placement that the device should be removed from.</p>
     */
    inline const Aws::String& GetPlacementName() const{ return m_placementName; }

    /**
     * <p>The name of the placement that the device should be removed from.</p>
     */
    inline bool PlacementNameHasBeenSet() const { return m_placementNameHasBeenSet; }

    /**
     * <p>The name of the placement that the device should be removed from.</p>
     */
    inline void SetPlacementName(const Aws::String& value) { m_placementNameHasBeenSet = true; m_placementName = value; }

    /**
     * <p>The name of the placement that the device should be removed from.</p>
     */
    inline void SetPlacementName(Aws::String&& value) { m_placementNameHasBeenSet = true; m_placementName = std::move(value); }

    /**
     * <p>The name of the placement that the device should be removed from.</p>
     */
    inline void SetPlacementName(const char* value) { m_placementNameHasBeenSet = true; m_placementName.assign(value); }

    /**
     * <p>The name of the placement that the device should be removed from.</p>
     */
    inline DisassociateDeviceFromPlacementRequest& WithPlacementName(const Aws::String& value) { SetPlacementName(value); return *this;}

    /**
     * <p>The name of the placement that the device should be removed from.</p>
     */
    inline DisassociateDeviceFromPlacementRequest& WithPlacementName(Aws::String&& value) { SetPlacementName(std::move(value)); return *this;}

    /**
     * <p>The name of the placement that the device should be removed from.</p>
     */
    inline DisassociateDeviceFromPlacementRequest& WithPlacementName(const char* value) { SetPlacementName(value); return *this;}


    /**
     * <p>The device ID that should be removed from the placement.</p>
     */
    inline const Aws::String& GetDeviceTemplateName() const{ return m_deviceTemplateName; }

    /**
     * <p>The device ID that should be removed from the placement.</p>
     */
    inline bool DeviceTemplateNameHasBeenSet() const { return m_deviceTemplateNameHasBeenSet; }

    /**
     * <p>The device ID that should be removed from the placement.</p>
     */
    inline void SetDeviceTemplateName(const Aws::String& value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName = value; }

    /**
     * <p>The device ID that should be removed from the placement.</p>
     */
    inline void SetDeviceTemplateName(Aws::String&& value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName = std::move(value); }

    /**
     * <p>The device ID that should be removed from the placement.</p>
     */
    inline void SetDeviceTemplateName(const char* value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName.assign(value); }

    /**
     * <p>The device ID that should be removed from the placement.</p>
     */
    inline DisassociateDeviceFromPlacementRequest& WithDeviceTemplateName(const Aws::String& value) { SetDeviceTemplateName(value); return *this;}

    /**
     * <p>The device ID that should be removed from the placement.</p>
     */
    inline DisassociateDeviceFromPlacementRequest& WithDeviceTemplateName(Aws::String&& value) { SetDeviceTemplateName(std::move(value)); return *this;}

    /**
     * <p>The device ID that should be removed from the placement.</p>
     */
    inline DisassociateDeviceFromPlacementRequest& WithDeviceTemplateName(const char* value) { SetDeviceTemplateName(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::String m_placementName;
    bool m_placementNameHasBeenSet;

    Aws::String m_deviceTemplateName;
    bool m_deviceTemplateNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
