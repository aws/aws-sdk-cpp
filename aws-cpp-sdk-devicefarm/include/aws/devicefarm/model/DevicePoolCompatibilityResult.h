/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Device.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/IncompatibilityMessage.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a device pool compatibility result.</p>
   */
  class AWS_DEVICEFARM_API DevicePoolCompatibilityResult
  {
  public:
    DevicePoolCompatibilityResult();
    DevicePoolCompatibilityResult(const Aws::Utils::Json::JsonValue& jsonValue);
    DevicePoolCompatibilityResult& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Device& GetDevice() const{ return m_device; }

    
    inline void SetDevice(const Device& value) { m_deviceHasBeenSet = true; m_device = value; }

    
    inline void SetDevice(Device&& value) { m_deviceHasBeenSet = true; m_device = value; }

    
    inline DevicePoolCompatibilityResult& WithDevice(const Device& value) { SetDevice(value); return *this;}

    
    inline DevicePoolCompatibilityResult& WithDevice(Device&& value) { SetDevice(value); return *this;}

    /**
     * <p>Whether the result was compatible with the device pool.</p>
     */
    inline bool GetCompatible() const{ return m_compatible; }

    /**
     * <p>Whether the result was compatible with the device pool.</p>
     */
    inline void SetCompatible(bool value) { m_compatibleHasBeenSet = true; m_compatible = value; }

    /**
     * <p>Whether the result was compatible with the device pool.</p>
     */
    inline DevicePoolCompatibilityResult& WithCompatible(bool value) { SetCompatible(value); return *this;}

    /**
     * <p>Information about the compatibility.</p>
     */
    inline const Aws::Vector<IncompatibilityMessage>& GetIncompatibilityMessages() const{ return m_incompatibilityMessages; }

    /**
     * <p>Information about the compatibility.</p>
     */
    inline void SetIncompatibilityMessages(const Aws::Vector<IncompatibilityMessage>& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages = value; }

    /**
     * <p>Information about the compatibility.</p>
     */
    inline void SetIncompatibilityMessages(Aws::Vector<IncompatibilityMessage>&& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages = value; }

    /**
     * <p>Information about the compatibility.</p>
     */
    inline DevicePoolCompatibilityResult& WithIncompatibilityMessages(const Aws::Vector<IncompatibilityMessage>& value) { SetIncompatibilityMessages(value); return *this;}

    /**
     * <p>Information about the compatibility.</p>
     */
    inline DevicePoolCompatibilityResult& WithIncompatibilityMessages(Aws::Vector<IncompatibilityMessage>&& value) { SetIncompatibilityMessages(value); return *this;}

    /**
     * <p>Information about the compatibility.</p>
     */
    inline DevicePoolCompatibilityResult& AddIncompatibilityMessages(const IncompatibilityMessage& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages.push_back(value); return *this; }

    /**
     * <p>Information about the compatibility.</p>
     */
    inline DevicePoolCompatibilityResult& AddIncompatibilityMessages(IncompatibilityMessage&& value) { m_incompatibilityMessagesHasBeenSet = true; m_incompatibilityMessages.push_back(value); return *this; }

  private:
    Device m_device;
    bool m_deviceHasBeenSet;
    bool m_compatible;
    bool m_compatibleHasBeenSet;
    Aws::Vector<IncompatibilityMessage> m_incompatibilityMessages;
    bool m_incompatibilityMessagesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
