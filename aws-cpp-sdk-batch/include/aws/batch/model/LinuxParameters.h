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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/Device.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Linux-specific modifications that are applied to the container, such as Linux
   * kernel capabilities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/LinuxParameters">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API LinuxParameters
  {
  public:
    LinuxParameters();
    LinuxParameters(Aws::Utils::Json::JsonView jsonValue);
    LinuxParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devicesHasBeenSet = true; m_devices = value; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline LinuxParameters& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline LinuxParameters& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline LinuxParameters& AddDevices(const Device& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline LinuxParameters& AddDevices(Device&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Device> m_devices;
    bool m_devicesHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
