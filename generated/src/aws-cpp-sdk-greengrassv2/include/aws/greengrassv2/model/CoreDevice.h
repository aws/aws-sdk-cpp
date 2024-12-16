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
    AWS_GREENGRASSV2_API CoreDevice();
    AWS_GREENGRASSV2_API CoreDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API CoreDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const{ return m_coreDeviceThingName; }
    inline bool CoreDeviceThingNameHasBeenSet() const { return m_coreDeviceThingNameHasBeenSet; }
    inline void SetCoreDeviceThingName(const Aws::String& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = value; }
    inline void SetCoreDeviceThingName(Aws::String&& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = std::move(value); }
    inline void SetCoreDeviceThingName(const char* value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName.assign(value); }
    inline CoreDevice& WithCoreDeviceThingName(const Aws::String& value) { SetCoreDeviceThingName(value); return *this;}
    inline CoreDevice& WithCoreDeviceThingName(Aws::String&& value) { SetCoreDeviceThingName(std::move(value)); return *this;}
    inline CoreDevice& WithCoreDeviceThingName(const char* value) { SetCoreDeviceThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the core device. Core devices can have the following
     * statuses:</p> <ul> <li> <p> <code>HEALTHY</code> – The IoT Greengrass Core
     * software and all components run on the core device without issue.</p> </li> <li>
     * <p> <code>UNHEALTHY</code> – The IoT Greengrass Core software or a component is
     * in a failed state on the core device.</p> </li> </ul>
     */
    inline const CoreDeviceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CoreDeviceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CoreDeviceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CoreDevice& WithStatus(const CoreDeviceStatus& value) { SetStatus(value); return *this;}
    inline CoreDevice& WithStatus(CoreDeviceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTimestamp() const{ return m_lastStatusUpdateTimestamp; }
    inline bool LastStatusUpdateTimestampHasBeenSet() const { return m_lastStatusUpdateTimestampHasBeenSet; }
    inline void SetLastStatusUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastStatusUpdateTimestampHasBeenSet = true; m_lastStatusUpdateTimestamp = value; }
    inline void SetLastStatusUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastStatusUpdateTimestampHasBeenSet = true; m_lastStatusUpdateTimestamp = std::move(value); }
    inline CoreDevice& WithLastStatusUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastStatusUpdateTimestamp(value); return *this;}
    inline CoreDevice& WithLastStatusUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastStatusUpdateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline CoreDevice& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline CoreDevice& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline CoreDevice& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }
    inline CoreDevice& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}
    inline CoreDevice& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}
    inline CoreDevice& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime for the core device. The runtime can be:</p> <ul> <li> <p>
     * <code>aws_nucleus_classic</code> </p> </li> <li> <p>
     * <code>aws_nucleus_lite</code> </p> </li> </ul>
     */
    inline const Aws::String& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const Aws::String& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(Aws::String&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline void SetRuntime(const char* value) { m_runtimeHasBeenSet = true; m_runtime.assign(value); }
    inline CoreDevice& WithRuntime(const Aws::String& value) { SetRuntime(value); return *this;}
    inline CoreDevice& WithRuntime(Aws::String&& value) { SetRuntime(std::move(value)); return *this;}
    inline CoreDevice& WithRuntime(const char* value) { SetRuntime(value); return *this;}
    ///@}
  private:

    Aws::String m_coreDeviceThingName;
    bool m_coreDeviceThingNameHasBeenSet = false;

    CoreDeviceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusUpdateTimestamp;
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
