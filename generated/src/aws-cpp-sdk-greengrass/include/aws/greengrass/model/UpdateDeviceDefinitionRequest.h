/**
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
  class UpdateDeviceDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API UpdateDeviceDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDeviceDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the device definition.
     */
    inline const Aws::String& GetDeviceDefinitionId() const{ return m_deviceDefinitionId; }
    inline bool DeviceDefinitionIdHasBeenSet() const { return m_deviceDefinitionIdHasBeenSet; }
    inline void SetDeviceDefinitionId(const Aws::String& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = value; }
    inline void SetDeviceDefinitionId(Aws::String&& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = std::move(value); }
    inline void SetDeviceDefinitionId(const char* value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId.assign(value); }
    inline UpdateDeviceDefinitionRequest& WithDeviceDefinitionId(const Aws::String& value) { SetDeviceDefinitionId(value); return *this;}
    inline UpdateDeviceDefinitionRequest& WithDeviceDefinitionId(Aws::String&& value) { SetDeviceDefinitionId(std::move(value)); return *this;}
    inline UpdateDeviceDefinitionRequest& WithDeviceDefinitionId(const char* value) { SetDeviceDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateDeviceDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDeviceDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDeviceDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceDefinitionId;
    bool m_deviceDefinitionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
