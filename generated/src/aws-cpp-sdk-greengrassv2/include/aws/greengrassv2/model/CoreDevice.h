/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/CoreDeviceStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a Greengrass core device, which is an IoT thing
   * that runs the IoT Greengrass Core software.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CoreDevice">AWS
   * API Reference</a></p>
   */
  class CoreDevice
  {
  public:
    AWS_GREENGRASSV2_API CoreDevice() = default;
    AWS_GREENGRASSV2_API CoreDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API CoreDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const { return m_coreDeviceThingName; }
    inline bool CoreDeviceThingNameHasBeenSet() const { return m_coreDeviceThingNameHasBeenSet; }
    template<typename CoreDeviceThingNameT = Aws::String>
    void SetCoreDeviceThingName(CoreDeviceThingNameT&& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = std::forward<CoreDeviceThingNameT>(value); }
    template<typename CoreDeviceThingNameT = Aws::String>
    CoreDevice& WithCoreDeviceThingName(CoreDeviceThingNameT&& value) { SetCoreDeviceThingName(std::forward<CoreDeviceThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the core device. Core devices can have the following
     * statuses:</p> <ul> <li> <p> <code>HEALTHY</code> – The IoT Greengrass Core
     * software and all components run on the core device without issue.</p> </li> <li>
     * <p> <code>UNHEALTHY</code> – The IoT Greengrass Core software or a component is
     * in a failed state on the core device.</p> </li> </ul>
     */
    inline CoreDeviceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CoreDeviceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CoreDevice& WithStatus(CoreDeviceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTimestamp() const { return m_lastStatusUpdateTimestamp; }
    inline bool LastStatusUpdateTimestampHasBeenSet() const { return m_lastStatusUpdateTimestampHasBeenSet; }
    template<typename LastStatusUpdateTimestampT = Aws::Utils::DateTime>
    void SetLastStatusUpdateTimestamp(LastStatusUpdateTimestampT&& value) { m_lastStatusUpdateTimestampHasBeenSet = true; m_lastStatusUpdateTimestamp = std::forward<LastStatusUpdateTimestampT>(value); }
    template<typename LastStatusUpdateTimestampT = Aws::Utils::DateTime>
    CoreDevice& WithLastStatusUpdateTimestamp(LastStatusUpdateTimestampT&& value) { SetLastStatusUpdateTimestamp(std::forward<LastStatusUpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    CoreDevice& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline const Aws::String& GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    template<typename ArchitectureT = Aws::String>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = Aws::String>
    CoreDevice& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime for the core device. The runtime can be:</p> <ul> <li> <p>
     * <code>aws_nucleus_classic</code> </p> </li> <li> <p>
     * <code>aws_nucleus_lite</code> </p> </li> </ul>
     */
    inline const Aws::String& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = Aws::String>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = Aws::String>
    CoreDevice& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreDeviceThingName;
    bool m_coreDeviceThingNameHasBeenSet = false;

    CoreDeviceStatus m_status{CoreDeviceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusUpdateTimestamp{};
    bool m_lastStatusUpdateTimestampHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
