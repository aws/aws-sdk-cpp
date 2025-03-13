/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Device.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/IncompatibilityMessage.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a device pool compatibility result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DevicePoolCompatibilityResult">AWS
   * API Reference</a></p>
   */
  class DevicePoolCompatibilityResult
  {
  public:
    AWS_DEVICEFARM_API DevicePoolCompatibilityResult() = default;
    AWS_DEVICEFARM_API DevicePoolCompatibilityResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API DevicePoolCompatibilityResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device (phone or tablet) to return information about.</p>
     */
    inline const Device& GetDevice() const { return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    template<typename DeviceT = Device>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Device>
    DevicePoolCompatibilityResult& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the result was compatible with the device pool.</p>
     */
    inline bool GetCompatible() const { return m_compatible; }
    inline bool CompatibleHasBeenSet() const { return m_compatibleHasBeenSet; }
    inline void SetCompatible(bool value) { m_compatibleHasBeenSet = true; m_compatible = value; }
    inline DevicePoolCompatibilityResult& WithCompatible(bool value) { SetCompatible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the compatibility.</p>
     */
    inline const Aws::Vector<IncompatibilityMessage>& GetIncompatibilityMessages() const { return m_incompatibilityMessages; }
    inline bool IncompatibilityMessagesHasBeenSet() const { return m_incompatibilityMessagesHasBeenSet; }
    template<typename IncompatibilityMessagesT = Aws::Vector<IncompatibilityMessage>>
    void SetIncompatibilityMessages(IncompatibilityMessagesT&& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages = std::forward<IncompatibilityMessagesT>(value); }
    template<typename IncompatibilityMessagesT = Aws::Vector<IncompatibilityMessage>>
    DevicePoolCompatibilityResult& WithIncompatibilityMessages(IncompatibilityMessagesT&& value) { SetIncompatibilityMessages(std::forward<IncompatibilityMessagesT>(value)); return *this;}
    template<typename IncompatibilityMessagesT = IncompatibilityMessage>
    DevicePoolCompatibilityResult& AddIncompatibilityMessages(IncompatibilityMessagesT&& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages.emplace_back(std::forward<IncompatibilityMessagesT>(value)); return *this; }
    ///@}
  private:

    Device m_device;
    bool m_deviceHasBeenSet = false;

    bool m_compatible{false};
    bool m_compatibleHasBeenSet = false;

    Aws::Vector<IncompatibilityMessage> m_incompatibilityMessages;
    bool m_incompatibilityMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
