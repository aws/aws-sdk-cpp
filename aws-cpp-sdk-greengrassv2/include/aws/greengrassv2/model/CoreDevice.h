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
    inline CoreDevice& WithCoreDeviceThingName(const Aws::String& value) { SetCoreDeviceThingName(value); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline CoreDevice& WithCoreDeviceThingName(Aws::String&& value) { SetCoreDeviceThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline CoreDevice& WithCoreDeviceThingName(const char* value) { SetCoreDeviceThingName(value); return *this;}


    /**
     * <p>The status of the core device. Core devices can have the following
     * statuses:</p> <ul> <li> <p> <code>HEALTHY</code> – The IoT Greengrass Core
     * software and all components run on the core device without issue.</p> </li> <li>
     * <p> <code>UNHEALTHY</code> – The IoT Greengrass Core software or a component is
     * in a failed state on the core device.</p> </li> </ul>
     */
    inline const CoreDeviceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the core device. Core devices can have the following
     * statuses:</p> <ul> <li> <p> <code>HEALTHY</code> – The IoT Greengrass Core
     * software and all components run on the core device without issue.</p> </li> <li>
     * <p> <code>UNHEALTHY</code> – The IoT Greengrass Core software or a component is
     * in a failed state on the core device.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the core device. Core devices can have the following
     * statuses:</p> <ul> <li> <p> <code>HEALTHY</code> – The IoT Greengrass Core
     * software and all components run on the core device without issue.</p> </li> <li>
     * <p> <code>UNHEALTHY</code> – The IoT Greengrass Core software or a component is
     * in a failed state on the core device.</p> </li> </ul>
     */
    inline void SetStatus(const CoreDeviceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the core device. Core devices can have the following
     * statuses:</p> <ul> <li> <p> <code>HEALTHY</code> – The IoT Greengrass Core
     * software and all components run on the core device without issue.</p> </li> <li>
     * <p> <code>UNHEALTHY</code> – The IoT Greengrass Core software or a component is
     * in a failed state on the core device.</p> </li> </ul>
     */
    inline void SetStatus(CoreDeviceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the core device. Core devices can have the following
     * statuses:</p> <ul> <li> <p> <code>HEALTHY</code> – The IoT Greengrass Core
     * software and all components run on the core device without issue.</p> </li> <li>
     * <p> <code>UNHEALTHY</code> – The IoT Greengrass Core software or a component is
     * in a failed state on the core device.</p> </li> </ul>
     */
    inline CoreDevice& WithStatus(const CoreDeviceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the core device. Core devices can have the following
     * statuses:</p> <ul> <li> <p> <code>HEALTHY</code> – The IoT Greengrass Core
     * software and all components run on the core device without issue.</p> </li> <li>
     * <p> <code>UNHEALTHY</code> – The IoT Greengrass Core software or a component is
     * in a failed state on the core device.</p> </li> </ul>
     */
    inline CoreDevice& WithStatus(CoreDeviceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTimestamp() const{ return m_lastStatusUpdateTimestamp; }

    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline bool LastStatusUpdateTimestampHasBeenSet() const { return m_lastStatusUpdateTimestampHasBeenSet; }

    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline void SetLastStatusUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastStatusUpdateTimestampHasBeenSet = true; m_lastStatusUpdateTimestamp = value; }

    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline void SetLastStatusUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastStatusUpdateTimestampHasBeenSet = true; m_lastStatusUpdateTimestamp = std::move(value); }

    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline CoreDevice& WithLastStatusUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastStatusUpdateTimestamp(value); return *this;}

    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline CoreDevice& WithLastStatusUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastStatusUpdateTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_coreDeviceThingName;
    bool m_coreDeviceThingNameHasBeenSet = false;

    CoreDeviceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusUpdateTimestamp;
    bool m_lastStatusUpdateTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
