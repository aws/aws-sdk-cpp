/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DisassociateDeviceFromPlacementRequest : public IoT1ClickProjectsRequest
  {
  public:
    AWS_IOT1CLICKPROJECTS_API DisassociateDeviceFromPlacementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateDeviceFromPlacement"; }

    AWS_IOT1CLICKPROJECTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the project that contains the placement.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline DisassociateDeviceFromPlacementRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DisassociateDeviceFromPlacementRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DisassociateDeviceFromPlacementRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the placement that the device should be removed from.</p>
     */
    inline const Aws::String& GetPlacementName() const{ return m_placementName; }
    inline bool PlacementNameHasBeenSet() const { return m_placementNameHasBeenSet; }
    inline void SetPlacementName(const Aws::String& value) { m_placementNameHasBeenSet = true; m_placementName = value; }
    inline void SetPlacementName(Aws::String&& value) { m_placementNameHasBeenSet = true; m_placementName = std::move(value); }
    inline void SetPlacementName(const char* value) { m_placementNameHasBeenSet = true; m_placementName.assign(value); }
    inline DisassociateDeviceFromPlacementRequest& WithPlacementName(const Aws::String& value) { SetPlacementName(value); return *this;}
    inline DisassociateDeviceFromPlacementRequest& WithPlacementName(Aws::String&& value) { SetPlacementName(std::move(value)); return *this;}
    inline DisassociateDeviceFromPlacementRequest& WithPlacementName(const char* value) { SetPlacementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device ID that should be removed from the placement.</p>
     */
    inline const Aws::String& GetDeviceTemplateName() const{ return m_deviceTemplateName; }
    inline bool DeviceTemplateNameHasBeenSet() const { return m_deviceTemplateNameHasBeenSet; }
    inline void SetDeviceTemplateName(const Aws::String& value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName = value; }
    inline void SetDeviceTemplateName(Aws::String&& value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName = std::move(value); }
    inline void SetDeviceTemplateName(const char* value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName.assign(value); }
    inline DisassociateDeviceFromPlacementRequest& WithDeviceTemplateName(const Aws::String& value) { SetDeviceTemplateName(value); return *this;}
    inline DisassociateDeviceFromPlacementRequest& WithDeviceTemplateName(Aws::String&& value) { SetDeviceTemplateName(std::move(value)); return *this;}
    inline DisassociateDeviceFromPlacementRequest& WithDeviceTemplateName(const char* value) { SetDeviceTemplateName(value); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_placementName;
    bool m_placementNameHasBeenSet = false;

    Aws::String m_deviceTemplateName;
    bool m_deviceTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
