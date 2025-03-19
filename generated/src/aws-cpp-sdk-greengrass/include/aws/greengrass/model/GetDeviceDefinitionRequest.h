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
  class GetDeviceDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetDeviceDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeviceDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the device definition.
     */
    inline const Aws::String& GetDeviceDefinitionId() const { return m_deviceDefinitionId; }
    inline bool DeviceDefinitionIdHasBeenSet() const { return m_deviceDefinitionIdHasBeenSet; }
    template<typename DeviceDefinitionIdT = Aws::String>
    void SetDeviceDefinitionId(DeviceDefinitionIdT&& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = std::forward<DeviceDefinitionIdT>(value); }
    template<typename DeviceDefinitionIdT = Aws::String>
    GetDeviceDefinitionRequest& WithDeviceDefinitionId(DeviceDefinitionIdT&& value) { SetDeviceDefinitionId(std::forward<DeviceDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceDefinitionId;
    bool m_deviceDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
