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
  class AssociateDeviceWithPlacementRequest : public IoT1ClickProjectsRequest
  {
  public:
    AWS_IOT1CLICKPROJECTS_API AssociateDeviceWithPlacementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDeviceWithPlacement"; }

    AWS_IOT1CLICKPROJECTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the project containing the placement in which to associate the
     * device.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    AssociateDeviceWithPlacementRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the placement in which to associate the device.</p>
     */
    inline const Aws::String& GetPlacementName() const { return m_placementName; }
    inline bool PlacementNameHasBeenSet() const { return m_placementNameHasBeenSet; }
    template<typename PlacementNameT = Aws::String>
    void SetPlacementName(PlacementNameT&& value) { m_placementNameHasBeenSet = true; m_placementName = std::forward<PlacementNameT>(value); }
    template<typename PlacementNameT = Aws::String>
    AssociateDeviceWithPlacementRequest& WithPlacementName(PlacementNameT&& value) { SetPlacementName(std::forward<PlacementNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the physical device to be associated with the given placement in
     * the project. Note that a mandatory 4 character prefix is required for all
     * <code>deviceId</code> values.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    AssociateDeviceWithPlacementRequest& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device template name to associate with the device ID.</p>
     */
    inline const Aws::String& GetDeviceTemplateName() const { return m_deviceTemplateName; }
    inline bool DeviceTemplateNameHasBeenSet() const { return m_deviceTemplateNameHasBeenSet; }
    template<typename DeviceTemplateNameT = Aws::String>
    void SetDeviceTemplateName(DeviceTemplateNameT&& value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName = std::forward<DeviceTemplateNameT>(value); }
    template<typename DeviceTemplateNameT = Aws::String>
    AssociateDeviceWithPlacementRequest& WithDeviceTemplateName(DeviceTemplateNameT&& value) { SetDeviceTemplateName(std::forward<DeviceTemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_placementName;
    bool m_placementNameHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_deviceTemplateName;
    bool m_deviceTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
