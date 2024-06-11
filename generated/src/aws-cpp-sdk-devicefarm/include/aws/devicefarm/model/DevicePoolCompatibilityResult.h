﻿/**
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
    AWS_DEVICEFARM_API DevicePoolCompatibilityResult();
    AWS_DEVICEFARM_API DevicePoolCompatibilityResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API DevicePoolCompatibilityResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device (phone or tablet) to return information about.</p>
     */
    inline const Device& GetDevice() const{ return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    inline void SetDevice(const Device& value) { m_deviceHasBeenSet = true; m_device = value; }
    inline void SetDevice(Device&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }
    inline DevicePoolCompatibilityResult& WithDevice(const Device& value) { SetDevice(value); return *this;}
    inline DevicePoolCompatibilityResult& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the result was compatible with the device pool.</p>
     */
    inline bool GetCompatible() const{ return m_compatible; }
    inline bool CompatibleHasBeenSet() const { return m_compatibleHasBeenSet; }
    inline void SetCompatible(bool value) { m_compatibleHasBeenSet = true; m_compatible = value; }
    inline DevicePoolCompatibilityResult& WithCompatible(bool value) { SetCompatible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the compatibility.</p>
     */
    inline const Aws::Vector<IncompatibilityMessage>& GetIncompatibilityMessages() const{ return m_incompatibilityMessages; }
    inline bool IncompatibilityMessagesHasBeenSet() const { return m_incompatibilityMessagesHasBeenSet; }
    inline void SetIncompatibilityMessages(const Aws::Vector<IncompatibilityMessage>& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages = value; }
    inline void SetIncompatibilityMessages(Aws::Vector<IncompatibilityMessage>&& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages = std::move(value); }
    inline DevicePoolCompatibilityResult& WithIncompatibilityMessages(const Aws::Vector<IncompatibilityMessage>& value) { SetIncompatibilityMessages(value); return *this;}
    inline DevicePoolCompatibilityResult& WithIncompatibilityMessages(Aws::Vector<IncompatibilityMessage>&& value) { SetIncompatibilityMessages(std::move(value)); return *this;}
    inline DevicePoolCompatibilityResult& AddIncompatibilityMessages(const IncompatibilityMessage& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages.push_back(value); return *this; }
    inline DevicePoolCompatibilityResult& AddIncompatibilityMessages(IncompatibilityMessage&& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Device m_device;
    bool m_deviceHasBeenSet = false;

    bool m_compatible;
    bool m_compatibleHasBeenSet = false;

    Aws::Vector<IncompatibilityMessage> m_incompatibilityMessages;
    bool m_incompatibilityMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
