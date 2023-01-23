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
    AWS_IOT1CLICKPROJECTS_API AssociateDeviceWithPlacementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDeviceWithPlacement"; }

    AWS_IOT1CLICKPROJECTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the project containing the placement in which to associate the
     * device.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project containing the placement in which to associate the
     * device.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project containing the placement in which to associate the
     * device.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project containing the placement in which to associate the
     * device.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project containing the placement in which to associate the
     * device.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project containing the placement in which to associate the
     * device.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project containing the placement in which to associate the
     * device.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project containing the placement in which to associate the
     * device.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The name of the placement in which to associate the device.</p>
     */
    inline const Aws::String& GetPlacementName() const{ return m_placementName; }

    /**
     * <p>The name of the placement in which to associate the device.</p>
     */
    inline bool PlacementNameHasBeenSet() const { return m_placementNameHasBeenSet; }

    /**
     * <p>The name of the placement in which to associate the device.</p>
     */
    inline void SetPlacementName(const Aws::String& value) { m_placementNameHasBeenSet = true; m_placementName = value; }

    /**
     * <p>The name of the placement in which to associate the device.</p>
     */
    inline void SetPlacementName(Aws::String&& value) { m_placementNameHasBeenSet = true; m_placementName = std::move(value); }

    /**
     * <p>The name of the placement in which to associate the device.</p>
     */
    inline void SetPlacementName(const char* value) { m_placementNameHasBeenSet = true; m_placementName.assign(value); }

    /**
     * <p>The name of the placement in which to associate the device.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithPlacementName(const Aws::String& value) { SetPlacementName(value); return *this;}

    /**
     * <p>The name of the placement in which to associate the device.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithPlacementName(Aws::String&& value) { SetPlacementName(std::move(value)); return *this;}

    /**
     * <p>The name of the placement in which to associate the device.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithPlacementName(const char* value) { SetPlacementName(value); return *this;}


    /**
     * <p>The ID of the physical device to be associated with the given placement in
     * the project. Note that a mandatory 4 character prefix is required for all
     * <code>deviceId</code> values.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the physical device to be associated with the given placement in
     * the project. Note that a mandatory 4 character prefix is required for all
     * <code>deviceId</code> values.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The ID of the physical device to be associated with the given placement in
     * the project. Note that a mandatory 4 character prefix is required for all
     * <code>deviceId</code> values.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the physical device to be associated with the given placement in
     * the project. Note that a mandatory 4 character prefix is required for all
     * <code>deviceId</code> values.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the physical device to be associated with the given placement in
     * the project. Note that a mandatory 4 character prefix is required for all
     * <code>deviceId</code> values.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the physical device to be associated with the given placement in
     * the project. Note that a mandatory 4 character prefix is required for all
     * <code>deviceId</code> values.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the physical device to be associated with the given placement in
     * the project. Note that a mandatory 4 character prefix is required for all
     * <code>deviceId</code> values.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the physical device to be associated with the given placement in
     * the project. Note that a mandatory 4 character prefix is required for all
     * <code>deviceId</code> values.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The device template name to associate with the device ID.</p>
     */
    inline const Aws::String& GetDeviceTemplateName() const{ return m_deviceTemplateName; }

    /**
     * <p>The device template name to associate with the device ID.</p>
     */
    inline bool DeviceTemplateNameHasBeenSet() const { return m_deviceTemplateNameHasBeenSet; }

    /**
     * <p>The device template name to associate with the device ID.</p>
     */
    inline void SetDeviceTemplateName(const Aws::String& value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName = value; }

    /**
     * <p>The device template name to associate with the device ID.</p>
     */
    inline void SetDeviceTemplateName(Aws::String&& value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName = std::move(value); }

    /**
     * <p>The device template name to associate with the device ID.</p>
     */
    inline void SetDeviceTemplateName(const char* value) { m_deviceTemplateNameHasBeenSet = true; m_deviceTemplateName.assign(value); }

    /**
     * <p>The device template name to associate with the device ID.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithDeviceTemplateName(const Aws::String& value) { SetDeviceTemplateName(value); return *this;}

    /**
     * <p>The device template name to associate with the device ID.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithDeviceTemplateName(Aws::String&& value) { SetDeviceTemplateName(std::move(value)); return *this;}

    /**
     * <p>The device template name to associate with the device ID.</p>
     */
    inline AssociateDeviceWithPlacementRequest& WithDeviceTemplateName(const char* value) { SetDeviceTemplateName(value); return *this;}

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
