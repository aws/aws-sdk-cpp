/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/model/Attributes.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{

  class Device
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API Device();
    AWS_IOT1CLICKDEVICESSERVICE_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKDEVICESSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user specified attributes associated with the device for an event.</p>
     */
    inline const Attributes& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Attributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Attributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline Device& WithAttributes(const Attributes& value) { SetAttributes(value); return *this;}
    inline Device& WithAttributes(Attributes&& value) { SetAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline Device& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline Device& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline Device& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device type, such as "button".</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Device& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Device& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Device& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Attributes m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
