/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information regarding the device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeviceInfo">AWS
   * API Reference</a></p>
   */
  class DeviceInfo
  {
  public:
    AWS_CONNECT_API DeviceInfo();
    AWS_CONNECT_API DeviceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API DeviceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the platform that the participant used for the call.</p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = std::move(value); }
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }
    inline DeviceInfo& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}
    inline DeviceInfo& WithPlatformName(Aws::String&& value) { SetPlatformName(std::move(value)); return *this;}
    inline DeviceInfo& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the platform that the participant used for the call.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline DeviceInfo& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline DeviceInfo& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline DeviceInfo& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operating system that the participant used for the call.</p>
     */
    inline const Aws::String& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const Aws::String& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(Aws::String&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline void SetOperatingSystem(const char* value) { m_operatingSystemHasBeenSet = true; m_operatingSystem.assign(value); }
    inline DeviceInfo& WithOperatingSystem(const Aws::String& value) { SetOperatingSystem(value); return *this;}
    inline DeviceInfo& WithOperatingSystem(Aws::String&& value) { SetOperatingSystem(std::move(value)); return *this;}
    inline DeviceInfo& WithOperatingSystem(const char* value) { SetOperatingSystem(value); return *this;}
    ///@}
  private:

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
