﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API DeleteDeviceDefinitionRequest : public GreengrassRequest
  {
  public:
    DeleteDeviceDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDeviceDefinition"; }

    Aws::String SerializePayload() const override;


    /**
     * The ID of the device definition.
     */
    inline const Aws::String& GetDeviceDefinitionId() const{ return m_deviceDefinitionId; }

    /**
     * The ID of the device definition.
     */
    inline bool DeviceDefinitionIdHasBeenSet() const { return m_deviceDefinitionIdHasBeenSet; }

    /**
     * The ID of the device definition.
     */
    inline void SetDeviceDefinitionId(const Aws::String& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = value; }

    /**
     * The ID of the device definition.
     */
    inline void SetDeviceDefinitionId(Aws::String&& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = std::move(value); }

    /**
     * The ID of the device definition.
     */
    inline void SetDeviceDefinitionId(const char* value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId.assign(value); }

    /**
     * The ID of the device definition.
     */
    inline DeleteDeviceDefinitionRequest& WithDeviceDefinitionId(const Aws::String& value) { SetDeviceDefinitionId(value); return *this;}

    /**
     * The ID of the device definition.
     */
    inline DeleteDeviceDefinitionRequest& WithDeviceDefinitionId(Aws::String&& value) { SetDeviceDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the device definition.
     */
    inline DeleteDeviceDefinitionRequest& WithDeviceDefinitionId(const char* value) { SetDeviceDefinitionId(value); return *this;}

  private:

    Aws::String m_deviceDefinitionId;
    bool m_deviceDefinitionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
