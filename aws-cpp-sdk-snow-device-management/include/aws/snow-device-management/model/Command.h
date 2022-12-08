/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/model/Reboot.h>
#include <aws/snow-device-management/model/Unlock.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The command given to the device to execute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/Command">AWS
   * API Reference</a></p>
   */
  class Command
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API Command();
    AWS_SNOWDEVICEMANAGEMENT_API Command(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Command& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reboots the device.</p>
     */
    inline const Reboot& GetReboot() const{ return m_reboot; }

    /**
     * <p>Reboots the device.</p>
     */
    inline bool RebootHasBeenSet() const { return m_rebootHasBeenSet; }

    /**
     * <p>Reboots the device.</p>
     */
    inline void SetReboot(const Reboot& value) { m_rebootHasBeenSet = true; m_reboot = value; }

    /**
     * <p>Reboots the device.</p>
     */
    inline void SetReboot(Reboot&& value) { m_rebootHasBeenSet = true; m_reboot = std::move(value); }

    /**
     * <p>Reboots the device.</p>
     */
    inline Command& WithReboot(const Reboot& value) { SetReboot(value); return *this;}

    /**
     * <p>Reboots the device.</p>
     */
    inline Command& WithReboot(Reboot&& value) { SetReboot(std::move(value)); return *this;}


    /**
     * <p>Unlocks the device.</p>
     */
    inline const Unlock& GetUnlock() const{ return m_unlock; }

    /**
     * <p>Unlocks the device.</p>
     */
    inline bool UnlockHasBeenSet() const { return m_unlockHasBeenSet; }

    /**
     * <p>Unlocks the device.</p>
     */
    inline void SetUnlock(const Unlock& value) { m_unlockHasBeenSet = true; m_unlock = value; }

    /**
     * <p>Unlocks the device.</p>
     */
    inline void SetUnlock(Unlock&& value) { m_unlockHasBeenSet = true; m_unlock = std::move(value); }

    /**
     * <p>Unlocks the device.</p>
     */
    inline Command& WithUnlock(const Unlock& value) { SetUnlock(value); return *this;}

    /**
     * <p>Unlocks the device.</p>
     */
    inline Command& WithUnlock(Unlock&& value) { SetUnlock(std::move(value)); return *this;}

  private:

    Reboot m_reboot;
    bool m_rebootHasBeenSet = false;

    Unlock m_unlock;
    bool m_unlockHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
