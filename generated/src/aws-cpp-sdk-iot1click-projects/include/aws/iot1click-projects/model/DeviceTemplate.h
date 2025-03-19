/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   * <p>An object representing a device for a placement template (see
   * <a>PlacementTemplate</a>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeviceTemplate">AWS
   * API Reference</a></p>
   */
  class DeviceTemplate
  {
  public:
    AWS_IOT1CLICKPROJECTS_API DeviceTemplate() = default;
    AWS_IOT1CLICKPROJECTS_API DeviceTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKPROJECTS_API DeviceTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKPROJECTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device type, which currently must be <code>"button"</code>.</p>
     */
    inline const Aws::String& GetDeviceType() const { return m_deviceType; }
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
    template<typename DeviceTypeT = Aws::String>
    void SetDeviceType(DeviceTypeT&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::forward<DeviceTypeT>(value); }
    template<typename DeviceTypeT = Aws::String>
    DeviceTemplate& WithDeviceType(DeviceTypeT&& value) { SetDeviceType(std::forward<DeviceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional Lambda function to invoke instead of the default Lambda function
     * provided by the placement template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCallbackOverrides() const { return m_callbackOverrides; }
    inline bool CallbackOverridesHasBeenSet() const { return m_callbackOverridesHasBeenSet; }
    template<typename CallbackOverridesT = Aws::Map<Aws::String, Aws::String>>
    void SetCallbackOverrides(CallbackOverridesT&& value) { m_callbackOverridesHasBeenSet = true; m_callbackOverrides = std::forward<CallbackOverridesT>(value); }
    template<typename CallbackOverridesT = Aws::Map<Aws::String, Aws::String>>
    DeviceTemplate& WithCallbackOverrides(CallbackOverridesT&& value) { SetCallbackOverrides(std::forward<CallbackOverridesT>(value)); return *this;}
    template<typename CallbackOverridesKeyT = Aws::String, typename CallbackOverridesValueT = Aws::String>
    DeviceTemplate& AddCallbackOverrides(CallbackOverridesKeyT&& key, CallbackOverridesValueT&& value) {
      m_callbackOverridesHasBeenSet = true; m_callbackOverrides.emplace(std::forward<CallbackOverridesKeyT>(key), std::forward<CallbackOverridesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_callbackOverrides;
    bool m_callbackOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
