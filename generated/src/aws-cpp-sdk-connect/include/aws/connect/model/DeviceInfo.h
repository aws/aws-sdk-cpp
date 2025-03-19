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
    AWS_CONNECT_API DeviceInfo() = default;
    AWS_CONNECT_API DeviceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API DeviceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the platform that the participant used for the call.</p>
     */
    inline const Aws::String& GetPlatformName() const { return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    template<typename PlatformNameT = Aws::String>
    void SetPlatformName(PlatformNameT&& value) { m_platformNameHasBeenSet = true; m_platformName = std::forward<PlatformNameT>(value); }
    template<typename PlatformNameT = Aws::String>
    DeviceInfo& WithPlatformName(PlatformNameT&& value) { SetPlatformName(std::forward<PlatformNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the platform that the participant used for the call.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    DeviceInfo& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operating system that the participant used for the call.</p>
     */
    inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    template<typename OperatingSystemT = Aws::String>
    void SetOperatingSystem(OperatingSystemT&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::forward<OperatingSystemT>(value); }
    template<typename OperatingSystemT = Aws::String>
    DeviceInfo& WithOperatingSystem(OperatingSystemT&& value) { SetOperatingSystem(std::forward<OperatingSystemT>(value)); return *this;}
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
