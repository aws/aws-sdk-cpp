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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/KernelCapabilities.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Device.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>Linux-specific options that are applied to the container, such as Linux
   * <a>KernelCapabilities</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/LinuxParameters">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API LinuxParameters
  {
  public:
    LinuxParameters();
    LinuxParameters(const Aws::Utils::Json::JsonValue& jsonValue);
    LinuxParameters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline const KernelCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline void SetCapabilities(const KernelCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline void SetCapabilities(KernelCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline LinuxParameters& WithCapabilities(const KernelCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline LinuxParameters& WithCapabilities(KernelCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}


    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/">Docker
     * Remote API</a> and the <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/">Docker
     * Remote API</a> and the <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devicesHasBeenSet = true; m_devices = value; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/">Docker
     * Remote API</a> and the <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/">Docker
     * Remote API</a> and the <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline LinuxParameters& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/">Docker
     * Remote API</a> and the <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline LinuxParameters& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/">Docker
     * Remote API</a> and the <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline LinuxParameters& AddDevices(const Device& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.27/">Docker
     * Remote API</a> and the <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline LinuxParameters& AddDevices(Device&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.25 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log in to your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline bool GetInitProcessEnabled() const{ return m_initProcessEnabled; }

    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.25 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log in to your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline void SetInitProcessEnabled(bool value) { m_initProcessEnabledHasBeenSet = true; m_initProcessEnabled = value; }

    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.25 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log in to your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline LinuxParameters& WithInitProcessEnabled(bool value) { SetInitProcessEnabled(value); return *this;}

  private:

    KernelCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet;

    Aws::Vector<Device> m_devices;
    bool m_devicesHasBeenSet;

    bool m_initProcessEnabled;
    bool m_initProcessEnabledHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
