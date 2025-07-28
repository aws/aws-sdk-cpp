/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/CoreDeviceOperatingSystem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains details for a gateway that runs on IoT Greengrass V2. To create a
   * gateway that runs on IoT Greengrass V2, you must deploy the IoT SiteWise Edge
   * component to your gateway device. Your <a
   * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/device-service-role.html">Greengrass
   * device role</a> must use the <code>AWSIoTSiteWiseEdgeAccess</code> policy. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/sw-gateways.html">Using
   * IoT SiteWise at the edge</a> in the <i>IoT SiteWise User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GreengrassV2">AWS
   * API Reference</a></p>
   */
  class GreengrassV2
  {
  public:
    AWS_IOTSITEWISE_API GreengrassV2() = default;
    AWS_IOTSITEWISE_API GreengrassV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API GreengrassV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the IoT thing for your IoT Greengrass V2 core device.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const { return m_coreDeviceThingName; }
    inline bool CoreDeviceThingNameHasBeenSet() const { return m_coreDeviceThingNameHasBeenSet; }
    template<typename CoreDeviceThingNameT = Aws::String>
    void SetCoreDeviceThingName(CoreDeviceThingNameT&& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = std::forward<CoreDeviceThingNameT>(value); }
    template<typename CoreDeviceThingNameT = Aws::String>
    GreengrassV2& WithCoreDeviceThingName(CoreDeviceThingNameT&& value) { SetCoreDeviceThingName(std::forward<CoreDeviceThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system of the core device in IoT Greengrass V2. Specifying the
     * operating system is required for MQTT-enabled, V3 gateways
     * (<code>gatewayVersion</code> <code>3</code>) and not applicable for Classic
     * stream, V2 gateways (<code>gatewayVersion</code> <code>2</code>).</p>
     */
    inline CoreDeviceOperatingSystem GetCoreDeviceOperatingSystem() const { return m_coreDeviceOperatingSystem; }
    inline bool CoreDeviceOperatingSystemHasBeenSet() const { return m_coreDeviceOperatingSystemHasBeenSet; }
    inline void SetCoreDeviceOperatingSystem(CoreDeviceOperatingSystem value) { m_coreDeviceOperatingSystemHasBeenSet = true; m_coreDeviceOperatingSystem = value; }
    inline GreengrassV2& WithCoreDeviceOperatingSystem(CoreDeviceOperatingSystem value) { SetCoreDeviceOperatingSystem(value); return *this;}
    ///@}
  private:

    Aws::String m_coreDeviceThingName;
    bool m_coreDeviceThingNameHasBeenSet = false;

    CoreDeviceOperatingSystem m_coreDeviceOperatingSystem{CoreDeviceOperatingSystem::NOT_SET};
    bool m_coreDeviceOperatingSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
