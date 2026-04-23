/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/worklink/model/DeviceStatus.h>
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
namespace WorkLink
{
namespace Model
{

  /**
   * <p>The summary of devices.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/DeviceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WORKLINK_API DeviceSummary
  {
  public:
    DeviceSummary();
    DeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    DeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the device.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline DeviceSummary& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline DeviceSummary& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline DeviceSummary& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The status of the device.</p>
     */
    inline const DeviceStatus& GetDeviceStatus() const{ return m_deviceStatus; }

    /**
     * <p>The status of the device.</p>
     */
    inline bool DeviceStatusHasBeenSet() const { return m_deviceStatusHasBeenSet; }

    /**
     * <p>The status of the device.</p>
     */
    inline void SetDeviceStatus(const DeviceStatus& value) { m_deviceStatusHasBeenSet = true; m_deviceStatus = value; }

    /**
     * <p>The status of the device.</p>
     */
    inline void SetDeviceStatus(DeviceStatus&& value) { m_deviceStatusHasBeenSet = true; m_deviceStatus = std::move(value); }

    /**
     * <p>The status of the device.</p>
     */
    inline DeviceSummary& WithDeviceStatus(const DeviceStatus& value) { SetDeviceStatus(value); return *this;}

    /**
     * <p>The status of the device.</p>
     */
    inline DeviceSummary& WithDeviceStatus(DeviceStatus&& value) { SetDeviceStatus(std::move(value)); return *this;}

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet;

    DeviceStatus m_deviceStatus;
    bool m_deviceStatusHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
