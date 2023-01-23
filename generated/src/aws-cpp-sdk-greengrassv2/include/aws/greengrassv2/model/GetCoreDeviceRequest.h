/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class GetCoreDeviceRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API GetCoreDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCoreDevice"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const{ return m_coreDeviceThingName; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline bool CoreDeviceThingNameHasBeenSet() const { return m_coreDeviceThingNameHasBeenSet; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(const Aws::String& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = value; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(Aws::String&& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = std::move(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(const char* value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName.assign(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline GetCoreDeviceRequest& WithCoreDeviceThingName(const Aws::String& value) { SetCoreDeviceThingName(value); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline GetCoreDeviceRequest& WithCoreDeviceThingName(Aws::String&& value) { SetCoreDeviceThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline GetCoreDeviceRequest& WithCoreDeviceThingName(const char* value) { SetCoreDeviceThingName(value); return *this;}

  private:

    Aws::String m_coreDeviceThingName;
    bool m_coreDeviceThingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
